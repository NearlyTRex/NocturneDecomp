# CHaystack

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 130028 | fields | 130028 |
| nocturne | 129620 | fields | 129620 |
| bw1 | 131012 | fields | 131012 |
| blairwitch2 | 153176 | fields | 153176 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CHero` | 0x0 | 0x0 |  |  |
| `guns_drawn` | `int` | 0x1fbd4 | 0x1fa3c | 0x1ffac | 0x25640 |
| `attack_side` | `int` | 0x1fbd8 | 0x1fa40 | 0x1ffb0 | 0x25644 |
| `head_look_euler` | `CVector3f` | 0x1fbdc | 0x1fa44 | 0x1ffb4 | 0x25648 |
| `head_look_blend_weight` | `float` | 0x1fbe8 | 0x1fa50 | 0x1ffc0 | 0x25654 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x0+0x1ffac
- **blairwitch2**: 0x0+0x25640
