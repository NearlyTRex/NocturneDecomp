# SDamageInfo

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 60 | fields | 60 |
| nocturne | 60 | fields | 60 |
| bw1 | 60 | fields | — |
| blairwitch2 | 60 | fields | — |
| bw3 | 60 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `hit_part_index` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `damage_amount` | `float` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `gore_multiplier` | `float` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `impact_point` | `CVector3f` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `impact_force` | `float` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `impact_direction` | `CVector3f` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `ammo_type` | `EAmmoType` | 0x28 | 0x28 | 0x28 | 0x28 | 0x28 |
| `dismember_prob` | `float` | 0x2c | 0x2c | 0x2c | 0x2c | 0x2c |
| `damage_type` | `EDamageType` | 0x30 | 0x30 | 0x30 | 0x30 | 0x30 |
| `attacker` | `CDemonActor*` | 0x34 | 0x34 | 0x34 | 0x34 | 0x34 |
| `wielder` | `CDemonActor*` | 0x38 | 0x38 | 0x38 | 0x38 | 0x38 |
