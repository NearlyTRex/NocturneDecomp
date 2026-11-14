# CSimpleParticleSystem

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| blairwitch2 | 68 | fields | 68 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | blairwitch2 |
|---|---|---:|
| `position` | `CVector3f` | 0x0 |
| `fade_current` | `float` | 0xc |
| `active` | `int` | 0x10 |
| `owner` | `CDemonActor*` | 0x14 |
| `max_particles` | `int` | 0x18 |
| `next_particle` | `int` | 0x1c |
| `fade_start` | `float` | 0x24 |
| `fade_end` | `float` | 0x28 |
| `fade_duration` | `float` | 0x2c |
| `fade_timer` | `float` | 0x30 |
| `stop_after_fade` | `int` | 0x34 |
| `standalone` | `int` | 0x38 |
| `particles` | `void*` | 0x3c |
| `vtable` | `void*` | 0x40 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **blairwitch2**: 0x20+0x4
