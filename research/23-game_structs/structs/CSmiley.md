# CSmiley

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 48896 | fields | 48896 |
| nocturne | 48488 | fields | 48488 |
| bw1 | 49836 | fields | 49836 |
| blairwitch2 | 68412 | fields | 68412 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 |
| `attack_cooldown` | `float` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 |
| `guard_distance` | `float` | 0xbec0 | 0xbd28 | 0xc26c | 0x10afc |
| `part_indices` | `int[11]` | 0xbec4 | 0xbd2c | 0xc270 | 0x10b00 |
| `attack_hit_count` | `int` | 0xbef0 | 0xbd58 | 0xc29c | 0x10b2c |
| `dismember_hit_count` | `int` | 0xbef4 | 0xbd5c | 0xc2a0 | 0x10b30 |
| `dismember_cooldown` | `float` | 0xbef8 | 0xbd60 | 0xc2a4 | 0x10b34 |
| `model_variant` | `int` | 0xbefc | 0xbd64 | 0xc2a8 | 0x10b38 |
