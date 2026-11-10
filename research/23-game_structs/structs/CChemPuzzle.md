# CChemPuzzle

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 2372 | fields | 2372 |
| bw3 | 2372 | fields | 2372 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | bw3 |
|---|---|---:|---:|
| `vtable` | `void*` | 0x0 | 0x0 |
| `background` | `CAlphaBitmap` | 0x4 | 0x4 |
| `dropper_level` | `int` | 0x18 | 0x18 |
| `selection_count` | `int` | 0x1c | 0x1c |
| `button_count` | `int` | 0x20 | 0x20 |
| `selected_button` | `int` | 0x24 | 0x24 |
| `mouse_button` | `int` | 0x28 | 0x28 |
| `previous_mouse_button` | `int` | 0x2c | 0x2c |
| `click_handled` | `int` | 0x30 | 0x30 |
| `hovering` | `int` | 0x34 | 0x34 |
| `selected_chemicals` | `int[3]` | 0x38 | 0x38 |
| `coin_design` | `int[4]` | 0x44 | 0x44 |
| `score` | `int` | 0x54 | 0x54 |
| `chemical_applied` | `int[6]` | 0x58 | 0x58 |
| `buttons` | `SButtonStruct[50]` | 0x70 | 0x70 |
| `cursor_offset_x` | `int[5]` | 0x908 | 0x908 |
| `cursor_offset_y` | `int[5]` | 0x91c | 0x91c |
| `result` | `int` | 0x930 | 0x930 |
| `coin_reaction` | `int[4]` | 0x934 | 0x934 |
