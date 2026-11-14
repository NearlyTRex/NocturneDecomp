# CLightPis

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 1432 | fields | 1432 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 |
|---|---|---:|
| `base` | `CWeapon` | 0x0 |
| `fire_flash_pending` | `int` | 0x578 |
| `sfx_handle` | `uint` | 0x57c |
| `charge_level` | `float` | 0x580 |
| `charge_ratio` | `float` | 0x584 |
| `hit_enemy` | `int` | 0x588 |
| `unknown_0x58c` | `int` | 0x58c |
| `beam_length` | `float` | 0x594 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x590+0x4
