# CLightGun

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1424 | fields | 1424 |
| nocturne | 1416 | fields | 1416 |
| bw1 | 1432 | placeholder | 1432 |
| blairwitch2 | 1780 | fields | 1780 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CWeapon` | 0x0 | 0x0 |  | 0x0 |
| `fire_flash_pending` | `int` | 0x578 | 0x570 |  |  |
| `sfx_handle` | `uint` | 0x57c | 0x574 |  |  |
| `charge_level` | `float` | 0x580 | 0x578 |  |  |
| `charge_ratio` | `float` | 0x584 | 0x57c |  |  |
| `hit_enemy` | `int` | 0x588 | 0x580 |  |  |
| `beam_length` | `float` | 0x58c | 0x584 |  |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **blairwitch2**: 0x6d4+0x20
