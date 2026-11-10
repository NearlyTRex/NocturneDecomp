# CAudioRecPuzzle

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 3128 | fields | 3128 |
| blairwitch2 | 2188 | fields | 2188 |
| bw3 | 3116 | fields | 3116 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|
| `vtable` | `void*` | 0x0 | 0x0 | 0x0 |
| `background` | `CAlphaBitmap` | 0x4 | 0x4 | 0x4 |
| `cursor_index` | `int` | 0x18 | 0x18 | 0x18 |
| `button_count` | `int` | 0x1c | 0x1c | 0x1c |
| `selected_button` | `int` | 0x20 | 0x20 | 0x20 |
| `mouse_button` | `int` | 0x24 | 0x24 | 0x24 |
| `previous_mouse_button` | `int` | 0x28 | 0x28 | 0x28 |
| `click_handled` | `int` | 0x2c | 0x2c | 0x2c |
| `playback_started` | `int` | 0x30 |  | 0x30 |
| `transport_state` | `int` | 0x34 | 0x30 | 0x34 |
| `knob_positions` | `int[3]` | 0x38 | 0x34 | 0x38 |
| `speed_setting` | `int` | 0x44 | 0x40 | 0x44 |
| `previous_speed_setting` | `int` | 0x48 |  | 0x48 |
| `power_on` | `int` | 0x4c | 0x44 | 0x4c |
| `dial_sfx` | `uint` | 0x50 |  |  |
| `unknown_0x54` | `int` | 0x54 |  |  |
| `switch_sfx` | `uint` | 0x58 |  |  |
| `reel_angle` | `float` | 0x5c | 0x48 | 0x50 |
| `buttons` | `SButtonStruct[50]` | 0x60 | 0x4c | 0x54 |
| `reel_model` | `CKeyFramedModelInstance` | 0x8f8 | 0x574 | 0x8ec |
| `reel_shadow_model` | `CKeyFramedModelInstance` | 0xa74 | 0x6f0 | 0xa68 |
| `cursor_offset_x` | `int[4]` | 0xbf0 | 0x86c | 0xbe4 |
| `cursor_offset_y` | `int[4]` | 0xc00 | 0x87c | 0xbf4 |
| `recording_id` | `int` | 0xc10 |  | 0xc04 |
| `clip_sfx` | `uint[3]` | 0xc14 |  | 0xc08 |
| `solution` | `int[5]` | 0xc20 |  | 0xc14 |
| `solved` | `int` | 0xc34 |  | 0xc28 |
