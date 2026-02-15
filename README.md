```
██████╗ ██╗   ██╗███╗   ███╗██████╗  ██████╗  █████╗ ██████╗ ██████╗ 
██╔══██╗╚██╗ ██╔╝████╗ ████║██╔══██╗██╔═══██╗██╔══██╗██╔══██╗██╔══██╗
██████╔╝ ╚████╔╝ ██╔████╔██║██████╔╝██║   ██║███████║██████╔╝██║  ██║
██╔═══╝   ╚██╔╝  ██║╚██╔╝██║██╔══██╗██║   ██║██╔══██║██╔══██╗██║  ██║
██║        ██║   ██║ ╚═╝ ██║██████╔╝╚██████╔╝██║  ██║██║  ██║██████╔╝
╚═╝        ╚═╝   ╚═╝     ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ 
                                                                        
                        ██████╗ ██╗  ██╗██╗  ██╗
                        ╚════██╗╚██╗██╔╝██║  ██║
                         █████╔╝ ╚███╔╝ ███████║
                        ██╔══██╝ ██╔██╗ ╚════██║
                        ███████╗██╔╝ ██╗     ██║
                        ╚══════╝╚═╝  ╚═╝     ╚═╝
```

An 8-key macropad using the Seeed XIAO RP2040 with VIAL support.

![Image](https://github.com/user-attachments/assets/d6738f2c-58d2-4299-9f30-20b754ac9b27)

**Website:** https://pymmog.com

## Pinout

All 8 keys use direct pin wiring — no matrix or diodes needed.

### Row 1 (top)

| Key | GPIO Pin | XIAO Pin Label |
|-----|----------|----------------|
| 1   | GP1      | D7 / SCK       |
| 2   | GP2      | D8 / MISO      |
| 3   | GP4      | D10 / CS       |
| 4   | GP3      | D9 / MOSI      |

### Row 2 (bottom)

| Key | GPIO Pin | XIAO Pin Label |
|-----|----------|----------------|
| 5   | GP26     | D0 / A0        |
| 6   | GP27     | D1 / A1        |
| 7   | GP28     | D2 / A2        |
| 8   | GP29     | D3 / A3        |

**Note:** Connect one terminal of each switch to the GPIO pin and the other terminal to GND. No diodes are required.

## Key Layout

```
┌──────┬──────┬──────┬──────┐
│ K1   │ K2   │ K3   │ K4   │
├──────┼──────┼──────┼──────┤
│ K5   │ K6   │ K7   │ K8   │
└──────┴──────┴──────┴──────┘
```

## Installation

### Pre-compiled Firmware (Recommended)

The easiest way to get your PymBoard 2x4 running is to use the pre-compiled firmware file.

1. Download the pre-compiled firmware: `pymboard_2x4.uf2`
2. Skip to the flashing instructions below

### Building from Source

1. Clone vial-qmk repository:
   ```
   git clone https://github.com/vial-kb/vial-qmk.git
   cd vial-qmk
   git submodule update --init --recursive
   ```

2. Set up QMK environment:
   ```
   qmk setup
   ```

3. Copy the `pymboard_2x4` folder to `vial-qmk/keyboards/`

4. Build the firmware:
   ```
   qmk compile -kb pymboard_2x4 -km vial
   ```

5. The output file will be: `pymboard_2x4.uf2`

### Flashing

1. Enter bootloader mode on the XIAO RP2040:
   - Hold the **BOOT** button
   - While holding BOOT, press and release the **RESET** button
   - Release the BOOT button
   - A USB drive named "RPI-RP2" will appear

2. Copy the `.uf2` file to the RPI-RP2 drive
3. The XIAO will automatically reboot with the new firmware

## Using VIAL
<img alt="vial.rocks interface" src="https://github.com/user-attachments/assets/b70554ca-ea99-4893-9fb6-86d80511a33c" />

1. Download VIAL from https://get.vial.today or open https://vial.rocks
2. Connect your macropad
3. VIAL should automatically detect the keyboard
4. Customize your keys, macros, and layers!

## Default Keymap

| Key 1  | Key 2    | Key 3    | Key 4  |
|--------|----------|----------|--------|
| Mute   | Vol Down | Vol Up   | Play   |
| **Key 5**  | **Key 6**    | **Key 7**    | **Key 8**  |
| Prev   | Stop     | Next     | Calc   |

## Features

- 8 configurable keys in a 2×4 grid
- 4 configurable layers
- Full VIAL support (no JSON sideloading needed)
- Real-time key remapping
- Macro support
- Direct pin wiring (no diodes needed)

## Differences from [PymBoard 1x4](https://github.com/pymmog/PymBoard_1x4)

| Feature       | PymBoard 1x4         | PymBoard 2x4            |
|---------------|----------------------|--------------------------|
| Keys          | 4                    | 8                        |
| Wiring        | Direct pins          | Direct pins              |
| GPIO pins     | 4 (GP1-GP4)          | 8 (GP1-GP4, GP26-GP29)  |
| Diodes needed | No                   | No                       |
| Layout        | 1 row × 4 columns    | 2 rows × 4 columns      |

---

**Disclaimer:** This README.md was partially generated with AI assistance.
