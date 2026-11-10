# CBatman

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 49016 | fields | 49016 |
| nocturne | 48608 | fields | 48608 |
| bw1 | 49960 | fields | 49960 |
| blairwitch2 | 68532 | fields | 68532 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 |
| `fall_event` | `char[100]` | 0xbebc | 0xbd24 | 0xc26c | 0x10af8 |
| `part_indices` | `int[14]` | 0xbf20 | 0xbd88 | 0xc2d0 | 0x10b5c |
| `mist_state` | `int` | 0xbf58 | 0xbdc0 | 0xc308 | 0x10b94 |
| `vanish_timer` | `float` | 0xbf5c | 0xbdc4 | 0xc30c | 0x10b98 |
| `new_pos` | `CVector3f` | 0xbf60 | 0xbdc8 | 0xc310 | 0x10b9c |
| `sfx_handles` | `uint[3]` | 0xbf6c | 0xbdd4 | 0xc31c | 0x10ba8 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xc268+0x4
