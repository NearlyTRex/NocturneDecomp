# CSuccubus

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 61288 | fields | 61288 |
| nocturne | 60880 | fields | 60880 |
| bw1 | 62468 | fields | 62468 |
| blairwitch2 | 80804 | fields | 80804 |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 |  |
| `hotdemon_model` | `CDeformableModelInstance` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 |  |
| `hotdemon_cloth_list` | `CClothList` | 0xe170 | 0xdfd8 | 0xe60c | 0x12dac |  |
| `sfx_handle` | `uint` | 0xe32c | 0xe194 | 0xe7c8 | 0x12f68 |  |
| `ambient_sfx_cooldown` | `float` | 0xe330 | 0xe198 | 0xe7cc | 0x12f6c |  |
| `morph_started` | `int` | 0xe334 | 0xe19c | 0xe7d0 | 0x12f70 |  |
| `morph_timer` | `float` | 0xe338 | 0xe1a0 | 0xe7d4 | 0x12f74 |  |
| `morph` | `CMorph` | 0xe33c | 0xe1a4 |  | 0x12f78 |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xe51c+0xf0, 0xe7d8+0xc2c
