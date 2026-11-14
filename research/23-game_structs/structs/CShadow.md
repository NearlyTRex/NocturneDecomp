# CShadow

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 49940 | fields | 49940 |
| blairwitch2 | 68480 | fields | 68480 |
| bw3 | 53480 | fields | 53480 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 |
| `type` | `int` | 0xc268 | 0x10af8 | 0xd054 |
| `bone_indices` | `int[9]` | 0xc26c | 0x10afc | 0xd058 |
| `light_up_eyes` | `int` | 0xc290 | 0x10b18 | 0xd074 |
| `howl_cooldown` | `float` | 0xc298 | 0x10b20 | 0xd07c |
| `sfx_handles` | `uint[7]` | 0xc29c | 0x10b24 | 0xd080 |
| `chain_anchor` | `CDemonActor*` | 0xc2b8 | 0x10b2c | 0xd088 |
| `chain_length` | `float` | 0xc2bc | 0x10b30 | 0xd08c |
| `alpha1` | `CDemonActor*` | 0xc2c0 | 0x10b34 | 0xd090 |
| `alpha2` | `CDemonActor*` | 0xc2c4 | 0x10b38 | 0xd094 |
| `eye_glow_phase` | `float` | 0xc2c8 | 0x10b3c | 0xd098 |
| `phase` | `int` | 0xc2cc | 0x10b40 | 0xd09c |
| `phase_timer` | `float` | 0xc2d0 | 0x10b44 | 0xd0a0 |
| `is_shadow_beast` | `int` | 0xc2d4 | 0x10b48 | 0xd0a4 |
| `walk_target` | `int` | 0xc2e8 | 0x10b5c | 0xd0bc |
| `walk_status` | `int` | 0xc2ec | 0x10b60 | 0xd0c0 |
| `walk_timeout` | `float` | 0xc2f0 | 0x10b64 | 0xd0c4 |
| `periodic_timer` | `float` | 0xc2f4 | 0x10b68 | 0xd0c8 |
| `attack_loop_count` | `int` | 0xc2f8 | 0x10b6c | 0xd0cc |
| `is_opaque` | `int` | 0xc2fc | 0x10b70 | 0xd0d0 |
| `fade_scale` | `float` | 0xc300 | 0x10b74 | 0xd0d4 |
| `fade_alpha` | `int` | 0xc304 | 0x10b78 | 0xd0d8 |
| `corona_added` | `int` | 0xc308 | 0x10b7c | 0xd0dc |
| `scared_by_light` | `int` | 0xc30c |  | 0xd0e0 |
| `difficulty_speed_scale` | `float` | 0xc310 |  | 0xd0e4 |
| `sfx_handle` | `uint` |  | 0x10b1c | 0xd078 |
| `shadow_variant` | `int` |  |  | 0xd0a8 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xc294+0x4, 0xc2d8+0x10
- **blairwitch2**: 0x10b4c+0x10
- **bw3**: 0xd0ac+0x10
