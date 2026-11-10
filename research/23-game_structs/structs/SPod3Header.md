# SPod3Header

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 288 | fields | — |
| nocturne | 288 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `header_data` | `byte[8]` | 0x0 | 0x0 |
| `description` | `char[84]` | 0x8 | 0x8 |
| `author` | `char[80]` | 0x5c | 0x5c |
| `copyright` | `char[80]` | 0xac | 0xac |
| `file_count` | `int` | 0xfc | 0xfc |
| `data_start_offset` | `int` | 0x100 | 0x100 |
| `unk1` | `int` | 0x104 | 0x104 |
| `mount_priority` | `int` | 0x108 | 0x108 |
| `total_file_size` | `uint` | 0x10c | 0x10c |
| `dependency_count` | `int` | 0x110 | 0x110 |
| `unk2` | `int` | 0x114 | 0x114 |
| `audit_count` | `int` | 0x118 | 0x118 |
| `unk3` | `int` | 0x11c | 0x11c |
