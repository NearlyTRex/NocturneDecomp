# CAmmoBox

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 844 | fields | 844 |
| nocturne | 836 | fields | 836 |
| bw1 | 844 | fields | 844 |
| blairwitch2 | 1192 | fields | 1192 |
| bw3 | 844 | fields | 844 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `weapon_class_name` | `char[64]` | 0x2d4 | 0x2cc | 0x2d4 | 0x430 | 0x2d4 |
| `ammo_count` | `int` | 0x314 | 0x30c | 0x314 | 0x470 | 0x314 |
| `ammo_type` | `EAmmoBoxType` | 0x318 | 0x310 | 0x318 | 0x474 | 0x318 |
| `open_pct` | `float` | 0x31c | 0x314 | 0x31c | 0x478 | 0x31c |
| `item` | `CDemonActor*` | 0x320 | 0x318 | 0x320 | 0x47c | 0x320 |
| `has_collision` | `int` | 0x324 | 0x31c | 0x324 | 0x480 | 0x324 |
| `open_sound` | `char[32]` | 0x328 | 0x320 | 0x328 | 0x484 | 0x328 |
| `is_sound_playing` | `int` | 0x348 | 0x340 | 0x348 | 0x4a4 | 0x348 |
