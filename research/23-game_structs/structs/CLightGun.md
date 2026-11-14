# CLightGun

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1424 | fields | 1424 |
| nocturne | 1416 | fields | 1416 |
| bw1 | 1432 | fields | 1432 |
| blairwitch2 | 1780 | fields | 1780 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CWeapon` | 0x0 | 0x0 | 0x0 | 0x0 |
| `fire_flash_pending` | `int` | 0x578 | 0x570 | 0x578 | 0x6d4 |
| `sfx_handle` | `uint` | 0x57c | 0x574 | 0x57c | 0x6d8 |
| `charge_level` | `float` | 0x580 | 0x578 | 0x580 | 0x6dc |
| `charge_ratio` | `float` | 0x584 | 0x57c | 0x584 | 0x6e0 |
| `hit_enemy` | `int` | 0x588 | 0x580 | 0x588 | 0x6e4 |
| `beam_length` | `float` | 0x58c | 0x584 | 0x594 | 0x6f0 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x58c+0x8
- **blairwitch2**: 0x6e8+0x8
