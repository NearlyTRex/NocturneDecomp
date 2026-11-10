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
| `path_map` | `CPathMap` | 0xbe24 | 0xbc8c |  |  |  |
| `shoot_me` | `int` | 0x1f700 | 0x1f568 |  |  |  |
| `pool_me` | `int` | 0x1f704 | 0x1f56c |  |  |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xc1d0+0x138e8
- **blairwitch2**: 0x10a60+0x138e8
- **bw3**: 0xcdcc+0x138fc
