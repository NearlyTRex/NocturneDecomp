# CBride

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 48876 | fields | 48876 |
| nocturne | 48468 | fields | 48468 |
| bw1 | 49820 | fields | 49820 |
| blairwitch2 | 68392 | fields | 68392 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 |
| `part_indices` | `int[9]` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 |
| `action_timer` | `float` | 0xbee0 | 0xbd48 |  | 0x10b1c |
| `sfx_handles` | `uint[2]` | 0xbee4 | 0xbd4c |  | 0x10b20 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xc28c+0x10
