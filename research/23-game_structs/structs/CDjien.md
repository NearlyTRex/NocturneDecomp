# CDjien

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 51660 | fields | 51660 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 |
|---|---|---:|
| `base` | `CEnemy` | 0x0 |
| `bone_indices` | `int[18]` | 0xc268 |
| `sack_part_indices` | `int[6]` | 0xc2b0 |
| `sfx_handle` | `uint` | 0xc2c8 |
| `difficulty_speed_scale` | `float` | 0xc2cc |
| `num_sacks_blown` | `int` | 0xc2d0 |
| `num_sacks_to_blow` | `int` | 0xc2d4 |
| `sack_damage` | `float[6]` | 0xc2d8 |
| `walk_target` | `int` | 0xc2f0 |
| `walk_status` | `int` | 0xc2f4 |
| `box_count` | `int` | 0xc2f8 |
| `boxes` | `SDjienBox[24]` | 0xc2fc |
| `blown_up` | `int` | 0xc9bc |
| `is_alert` | `int` | 0xc9c0 |
| `state_timer` | `float` | 0xc9c4 |
| `recombine_interpolation` | `float` | 0xc9c8 |
