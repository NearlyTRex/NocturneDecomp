# CWerewolf

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 48900 | fields | 48900 |
| nocturne | 48492 | fields | 48492 |
| bw1 | 49840 | fields | 49840 |
| blairwitch2 | 68416 | fields | 68416 |
| bw3 | 53404 | fields | 53404 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `type` | `EWerewolfType` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 | 0xd054 |
| `bone_indices` | `int[5]` | 0xbec0 | 0xbd28 | 0xc26c | 0x10afc | 0xd058 |
| `light_up_eyes` | `int` | 0xbed4 | 0xbd3c | 0xc280 | 0x10b10 | 0xd06c |
| `sfx_handle` | `uint` | 0xbed8 | 0xbd40 | 0xc284 | 0x10b14 | 0xd070 |
| `howl_cooldown` | `float` | 0xbedc | 0xbd44 | 0xc288 | 0x10b18 | 0xd074 |
| `sfx_handles` | `uint[2]` | 0xbee0 | 0xbd48 | 0xc28c | 0x10b1c | 0xd078 |
| `chain_anchor` | `CDemonActor*` | 0xbee8 | 0xbd50 | 0xc294 | 0x10b24 | 0xd080 |
| `chain_length` | `float` | 0xbeec | 0xbd54 | 0xc298 | 0x10b28 | 0xd084 |
| `alpha1` | `CDemonActor*` | 0xbef0 | 0xbd58 | 0xc29c | 0x10b2c | 0xd088 |
| `alpha2` | `CDemonActor*` | 0xbef4 | 0xbd5c | 0xc2a0 | 0x10b30 | 0xd08c |
| `phase` | `int` | 0xbef8 | 0xbd60 | 0xc2a4 | 0x10b34 | 0xd090 |
| `phase_timer` | `float` | 0xbefc | 0xbd64 | 0xc2a8 | 0x10b38 | 0xd094 |
| `eye_glow_phase` | `float` | 0xbf00 | 0xbd68 | 0xc2ac | 0x10b3c | 0xd098 |
