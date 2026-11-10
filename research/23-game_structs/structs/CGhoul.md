# CGhoul

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 48952 | fields | 48952 |
| nocturne | 48544 | fields | 48544 |
| bw1 | 49892 | fields | 49892 |
| blairwitch2 | 68468 | fields | 68468 |
| bw3 | 53456 | fields | 53456 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `sfx_handle` | `uint` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 |  |
| `burp_timer` | `int` | 0xbec0 | 0xbd28 | 0xc26c | 0x10afc |  |
| `spasm_timer` | `int` | 0xbec4 | 0xbd2c | 0xc270 | 0x10b00 | 0xd05c |
| `arise_timer` | `int` | 0xbec8 | 0xbd30 | 0xc274 | 0x10b04 | 0xd060 |
| `pending_eat_state` | `int` | 0xbecc | 0xbd34 | 0xc278 | 0x10b08 | 0xd064 |
| `flinch_blend_weight` | `float` | 0xbed0 | 0xbd38 | 0xc27c | 0x10b0c | 0xd068 |
| `flinch_motion_index` | `int` | 0xbed4 | 0xbd3c | 0xc280 | 0x10b10 | 0xd06c |
| `lives_left` | `int` | 0xbed8 | 0xbd40 | 0xc284 | 0x10b14 | 0xd070 |
| `spasm_count` | `int` | 0xbedc | 0xbd44 | 0xc288 | 0x10b18 | 0xd074 |
| `part_indices` | `int[11]` | 0xbee0 | 0xbd48 | 0xc28c | 0x10b1c | 0xd078 |
| `sfx_handles` | `uint[3]` | 0xbf0c | 0xbd74 | 0xc2b8 | 0x10b48 | 0xd0a4 |
| `stun_timer` | `float` | 0xbf18 | 0xbd80 | 0xc2c4 | 0x10b54 | 0xd0b0 |
| `dark_waypoint` | `CDemonActor*` | 0xbf1c | 0xbd84 | 0xc2c8 | 0x10b58 | 0xd0b4 |
| `heal_timer` | `float` | 0xbf20 | 0xbd88 | 0xc2cc | 0x10b5c | 0xd0b8 |
| `is_berserk` | `int` | 0xbf24 | 0xbd8c | 0xc2d0 | 0x10b60 | 0xd0bc |
| `stuck_timer` | `float` | 0xbf28 | 0xbd90 | 0xc2d4 | 0x10b64 | 0xd0c0 |
| `prev_position` | `CVector3f` | 0xbf2c | 0xbd94 | 0xc2d8 | 0x10b68 | 0xd0c4 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0xd054+0x8
