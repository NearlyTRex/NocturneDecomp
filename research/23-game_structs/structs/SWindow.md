# SWindow

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 488 | fields | — |
| nocturne | 488 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `rect` | `SWindowRect` | 0x0 | 0x0 |
| `saved_clip` | `SWindowRect` | 0x10 | 0x10 |
| `saved_projection` | `SProjectionParams` | 0x20 | 0x20 |
| `saved_viewport_width` | `int` | 0x30 | 0x30 |
| `saved_viewport_height` | `int` | 0x34 | 0x34 |
| `text_buffer` | `char[400]` | 0x38 | 0x38 |
| `screen_backup_buffer` | `void*` | 0x1c8 | 0x1c8 |
| `backup_x_offset` | `int` | 0x1cc | 0x1cc |
| `backup_y_offset` | `int` | 0x1d0 | 0x1d0 |
| `backup_width` | `int` | 0x1d4 | 0x1d4 |
| `backup_height` | `int` | 0x1d8 | 0x1d8 |
| `progress_start_time` | `int` | 0x1dc | 0x1dc |
| `progress_percentage` | `int` | 0x1e0 | 0x1e0 |
| `progress_timestamp` | `int` | 0x1e4 | 0x1e4 |
