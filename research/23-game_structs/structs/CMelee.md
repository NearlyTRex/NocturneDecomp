# CMelee

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1740 | fields | 1740 |
| nocturne | 1732 | fields | 1732 |
| bw1 | 1740 | fields | 1740 |
| blairwitch2 | 2088 | fields | 2088 |
| bw3 | 1768 | fields | 1768 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CWeapon` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `allowed_attack_types` | `int` | 0x578 | 0x570 | 0x578 | 0x6d4 | 0x594 |
| `strength_lo` | `float` | 0x57c | 0x574 | 0x57c | 0x6d8 | 0x598 |
| `strength_hi` | `float` | 0x580 | 0x578 | 0x580 | 0x6dc | 0x59c |
| `dismember_prob` | `float` | 0x584 | 0x57c | 0x584 | 0x6e0 | 0x5a0 |
| `can_go_in_inventory` | `int` | 0x588 | 0x580 | 0x588 | 0x6e4 | 0x5a4 |
| `blood_gore_type` | `int` | 0x58c | 0x584 | 0x58c | 0x6e8 | 0x5a8 |
| `blood_spurt_count` | `int` | 0x590 | 0x588 | 0x590 | 0x6ec | 0x5ac |
| `blood_spurt_timer` | `float` | 0x594 | 0x58c | 0x594 | 0x6f0 | 0x5b0 |
| `blood_spurt_interval` | `float` | 0x598 | 0x590 | 0x598 | 0x6f4 | 0x5b4 |
| `ammo_type` | `EAmmoType` | 0x59c | 0x594 | 0x59c | 0x6f8 | 0x5b8 |
| `thrust_hit_character_sound` | `char[100]` | 0x5a0 | 0x598 | 0x5a0 | 0x6fc | 0x5bc |
| `swing_hit_character_sound` | `char[100]` | 0x604 | 0x5fc | 0x604 | 0x760 | 0x620 |
| `hit_other_sound` | `char[100]` | 0x668 | 0x660 | 0x668 | 0x7c4 | 0x684 |
