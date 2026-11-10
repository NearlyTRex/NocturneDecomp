# CLightActor

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 13944 | fields | 13944 |
| nocturne | 13936 | fields | 13936 |
| bw1 | 13956 | fields | 13956 |
| blairwitch2 | 14308 | fields | 14308 |
| bw3 | 14068 | fields | 14068 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CBoxActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `light_actor_type` | `ELightActorType` | 0x66c | 0x664 | 0x678 | 0x7d4 | 0x6e8 |
| `light` | `CDemonLight` | 0x670 | 0x668 | 0x67c | 0x7d8 | 0x6ec |
| `blight_pos` | `CVector3f` | 0x361c | 0x3614 | 0x3628 | 0x3788 | 0x3698 |
| `light_orient` | `UOrientationVector` | 0x3628 | 0x3620 | 0x3634 | 0x3794 | 0x36a4 |
| `flicker_timer` | `float` | 0x3634 | 0x362c | 0x3640 | 0x37a0 | 0x36b0 |
| `globe` | `CDemonGlobe` | 0x3638 | 0x3630 | 0x3644 | 0x37a4 | 0x36b4 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x66c+0xc
- **blairwitch2**: 0x66c+0x168, 0x3784+0x4
- **bw3**: 0x66c+0x7c
