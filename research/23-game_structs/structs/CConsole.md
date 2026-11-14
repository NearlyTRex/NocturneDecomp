# CConsole

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 4028 | fields | 4028 |
| nocturne | 4028 | fields | — |
| bw1 | 4032 | fields | 4032 |
| blairwitch2 | 4032 | fields | 4032 |
| bw3 | 4032 | fields | 4032 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `file_logging_enabled` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `console_buffer` | `char[4000]` | 0x4 | 0x4 | 0x8 | 0x8 | 0x8 |
| `current_column` | `int` | 0xfa4 | 0xfa4 | 0xfa8 | 0xfa8 | 0xfa8 |
| `current_row` | `int` | 0xfa8 | 0xfa8 | 0xfac | 0xfac | 0xfac |
| `console_width` | `int` | 0xfac | 0xfac | 0xfb0 | 0xfb0 | 0xfb0 |
| `console_height` | `int` | 0xfb0 | 0xfb0 | 0xfb4 | 0xfb4 | 0xfb4 |
| `screen_x` | `int` | 0xfb4 | 0xfb4 | 0xfb8 | 0xfb8 | 0xfb8 |
| `screen_y` | `int` | 0xfb8 | 0xfb8 | 0xfbc | 0xfbc | 0xfbc |
| `field_0x4` | `int` |  |  | 0x4 | 0x4 | 0x4 |
