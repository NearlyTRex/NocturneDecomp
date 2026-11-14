# SMemHead

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 40 | fields | — |
| nocturne | 40 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `prev` | `SMemHead*` | 0x0 | 0x0 |
| `next` | `SMemHead*` | 0x4 | 0x4 |
| `num_bytes` | `int` | 0x8 | 0x8 |
| `source_file` | `char[20]` | 0xc | 0xc |
| `source_line` | `int` | 0x20 | 0x20 |
| `front_guard` | `int` | 0x24 | 0x24 |
