# SPod3Header

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 288 | fields | — |
| nocturne | 288 | fields | — |
| bw1 | 288 | fields | — |
| blairwitch2 | 288 | fields | — |
| bw3 | 288 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `header_data` | `byte[8]` | 0x0 | 0x0 |  |  |  |
| `description` | `char[84]` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `author` | `char[80]` | 0x5c | 0x5c | 0x68 | 0x68 | 0x68 |
| `copyright` | `char[80]` | 0xac | 0xac | 0xb8 | 0xb8 | 0xb8 |
| `file_count` | `int` | 0xfc | 0xfc | 0x58 | 0x58 | 0x58 |
| `directory_offset` | `int` | 0x100 | 0x100 | 0x108 | 0x108 | 0x108 |
| `unk1` | `int` | 0x104 | 0x104 |  |  |  |
| `mount_priority` | `int` | 0x108 | 0x108 | 0x64 | 0x64 | 0x64 |
| `name_table_size` | `uint` | 0x10c | 0x10c | 0x110 | 0x110 | 0x110 |
| `dependency_count` | `int` | 0x110 | 0x110 | 0x114 | 0x114 | 0x114 |
| `unk2` | `int` | 0x114 | 0x114 |  |  |  |
| `audit_count` | `int` | 0x118 | 0x118 | 0x5c | 0x5c | 0x5c |
| `unk3` | `int` | 0x11c | 0x11c |  |  |  |
| `magic` | `char[4]` |  |  | 0x0 | 0x0 | 0x0 |
| `checksum` | `uint` |  |  | 0x4 | 0x4 | 0x4 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x60+0x4, 0x10c+0x4, 0x118+0x8
- **blairwitch2**: 0x60+0x4, 0x10c+0x4, 0x118+0x8
- **bw3**: 0x60+0x4, 0x10c+0x4, 0x118+0x8
