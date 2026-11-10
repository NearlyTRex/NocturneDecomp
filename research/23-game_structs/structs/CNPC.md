# CNPC

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 128776 | fields | 128776 |
| nocturne | 128368 | fields | 128368 |
| bw1 | 129720 | fields | 129720 |
| blairwitch2 | 148296 | fields | 148296 |
| bw3 | 132808 | fields | 132808 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CCharacter` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `path_map` | `CPathMap` | 0xbe24 | 0xbc8c | 0xc1d0 | 0x10a60 | 0xcdcc |
| `shoot_me` | `int` | 0x1f700 | 0x1f568 | 0x1faac | 0x2433c | 0x206a8 |
| `pool_me` | `int` | 0x1f704 | 0x1f56c | 0x1fab0 | 0x24340 | 0x206ac |
| `speed` | `float` |  |  | 0x1fab4 | 0x24344 | 0x206b0 |
| `fade_alpha` | `int` |  |  |  |  | 0x206b4 |
| `fade_state` | `int` |  |  |  |  | 0x206b8 |
| `start_opcode` | `int` |  |  |  |  | 0x206bc |
| `fade_timer` | `float` |  |  |  |  | 0x206c0 |
| `fade_time` | `float` |  |  |  |  | 0x206c4 |
