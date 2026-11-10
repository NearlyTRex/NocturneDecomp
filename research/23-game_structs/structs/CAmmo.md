# CAmmo

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 796 | fields | 796 |
| nocturne | 788 | fields | 788 |
| bw1 | 796 | fields | 796 |
| blairwitch2 | 1148 | fields | 1148 |
| bw3 | 800 | fields | 800 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `weapon_class_name` | `char[64]` | 0x2d4 | 0x2cc | 0x2d4 | 0x430 | 0x2d4 |
| `ammo_count` | `int` | 0x314 | 0x30c | 0x314 | 0x470 | 0x314 |
| `ammo_type` | `EAmmoType` | 0x318 | 0x310 | 0x318 |  |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **blairwitch2**: 0x474+0x8
- **bw3**: 0x318+0x8
