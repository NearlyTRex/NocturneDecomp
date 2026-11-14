# CStairs

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 2612 | fields | 2612 |
| nocturne | 2604 | fields | 2604 |
| bw1 | 2612 | fields | 2612 |
| blairwitch2 | 2960 | fields | 2960 |
| bw3 | 2612 | fields | 2612 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `rise` | `float` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `run` | `float` | 0x15c | 0x154 | 0x15c | 0x2b8 | 0x15c |
| `width` | `float` | 0x160 | 0x158 | 0x160 | 0x2bc | 0x160 |
| `bevel_y` | `float` | 0x164 | 0x15c | 0x164 | 0x2c0 | 0x164 |
| `bevel_z` | `float` | 0x168 | 0x160 | 0x168 | 0x2c4 | 0x168 |
| `stair_count` | `int` | 0x16c | 0x164 | 0x16c | 0x2c8 | 0x16c |
| `collision_triangles` | `CDemonTriangle[40]` | 0x170 | 0x168 | 0x170 | 0x2cc | 0x170 |
| `ground_type` | `EGroundType` | 0xa30 | 0xa28 | 0xa30 | 0xb8c | 0xa30 |
