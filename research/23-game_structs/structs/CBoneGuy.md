# CBoneGuy

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 50404 | fields | 50404 |
| nocturne | 49996 | fields | 49996 |
| bw1 | 51344 | fields | 51344 |
| blairwitch2 | 69920 | fields | 69920 |
| bw3 | 54936 | fields | 54936 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `pickup_attempt_count` | `int` | 0xbebc | 0xbd24 |  |  |  |
| `search_timer` | `float` | 0xbec0 | 0xbd28 |  |  |  |
| `pickup_cooldown` | `float` | 0xbec4 | 0xbd2c |  |  |  |
| `pickup_target` | `CDemonActor*` | 0xbec8 | 0xbd30 |  |  |  |
| `sfx_handle` | `uint` | 0xbecc | 0xbd34 | 0xc278 | 0x10b08 |  |
| `death_event` | `char[100]` | 0xbed0 | 0xbd38 | 0xc27c | 0x10b0c |  |
| `recombine_time` | `float` | 0xbf34 | 0xbd9c | 0xc2e0 | 0x10b70 |  |
| `box_count` | `int` | 0xbf38 | 0xbda0 | 0xc2e4 | 0x10b74 |  |
| `boxes` | `SBoneGuyBox[20]` | 0xbf3c | 0xbda4 | 0xc2e8 | 0x10b78 |  |
| `blown_up` | `int` | 0xc4dc | 0xc344 | 0xc888 | 0x11118 |  |
| `recombine_interpolation` | `float` | 0xc4e0 | 0xc348 | 0xc88c | 0x1111c |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xc268+0x10
- **blairwitch2**: 0x10af8+0x10
- **bw3**: 0xd054+0x644
