# CEnemy

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 48828 | fields | 48828 |
| nocturne | 48420 | fields | 48420 |
| bw1 | 49768 | fields | 49768 |
| blairwitch2 | 68344 | fields | 68344 |
| bw3 | 53332 | fields | 53332 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CCharacter` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `speed` | `float` | 0xbe24 | 0xbc8c | 0xc1d0 | 0x10a60 |  |
| `pool_me` | `int` | 0xbe28 | 0xbc90 | 0xc1d4 | 0x10a64 | 0xcdd0 |
| `randomize_me` | `int` | 0xbe2c | 0xbc94 | 0xc1d8 | 0x10a68 | 0xcdd4 |
| `is_in_combat` | `int` | 0xbe30 | 0xbc98 | 0xc1dc | 0x10a6c | 0xcdd8 |
| `guard_distance` | `float` | 0xbe34 | 0xbc9c | 0xc1e0 | 0x10a70 | 0xcddc |
| `attack_cooldown` | `float` | 0xbe38 | 0xbca0 | 0xc1e4 | 0x10a74 | 0xcde0 |
| `victim` | `CCharacter*` | 0xbe3c | 0xbca4 | 0xc1e8 | 0x10a78 | 0xcde4 |
| `victim_search_timer` | `float` | 0xbe40 | 0xbca8 | 0xc1ec | 0x10a7c | 0xcde8 |
| `victim_search_radius` | `float` | 0xbe44 | 0xbcac | 0xc1f0 | 0x10a80 | 0xcdec |
| `patrol_name_pattern` | `char[100]` | 0xbe48 | 0xbcb0 | 0xc1f4 | 0x10a84 | 0xcdf0 |
| `special_form_flag` | `int` | 0xbeac | 0xbd14 | 0xc258 | 0x10ae8 |  |
| `victim_height` | `float` | 0xbeb0 | 0xbd18 | 0xc25c | 0x10aec |  |
| `script_victim` | `CCharacter*` | 0xbeb4 | 0xbd1c | 0xc260 | 0x10af0 |  |
| `allow_pathfind_to_new_targets` | `int` | 0xbeb8 | 0xbd20 | 0xc264 | 0x10af4 |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0xcdcc+0x4, 0xce54+0x200
