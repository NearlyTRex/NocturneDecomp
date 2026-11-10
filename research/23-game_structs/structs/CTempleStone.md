# CTempleStone

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1648 | fields | 1648 |
| nocturne | 1640 | fields | 1640 |
| bw1 | 1660 | fields | 1660 |
| blairwitch2 | 2008 | fields | 2008 |
| bw3 | 1772 | fields | 1772 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CBoxActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `dest_actor` | `CDemonActor*` | 0x66c | 0x664 |  |  |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x678+0x4
- **blairwitch2**: 0x7d4+0x4
- **bw3**: 0x6e8+0x4
