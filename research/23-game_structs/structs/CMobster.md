# CMobster

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 49044 | fields | 49044 |
| nocturne | 48636 | fields | 48636 |
| bw1 | 49984 | fields | 49984 |
| blairwitch2 | 68560 | fields | 68560 |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 |  |
| `ai_idle_counter` | `int` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 |  |
| `idle_timer` | `float` | 0xbec0 | 0xbd28 | 0xc26c | 0x10afc |  |
| `weapon_approach_timer` | `float` | 0xbec4 | 0xbd2c | 0xc270 | 0x10b00 |  |
| `target_weapon` | `CDemonActor*` | 0xbec8 | 0xbd30 | 0xc274 | 0x10b04 |  |
| `weapon_search_count` | `int` | 0xbecc | 0xbd34 | 0xc278 | 0x10b08 |  |
| `sound_variant` | `_BIT_INTEGER32` | 0xbed0 | 0xbd38 | 0xc27c | 0x10b0c |  |
| `taunt_timer` | `float` | 0xbed4 | 0xbd3c | 0xc280 | 0x10b10 |  |
| `post_mode` | `int` | 0xbed8 | 0xbd40 | 0xc284 | 0x10b14 |  |
| `our_post` | `CDemonActor*` | 0xbedc | 0xbd44 | 0xc288 | 0x10b18 |  |
| `vehicle` | `CDemonActor*` | 0xbee0 | 0xbd48 | 0xc28c | 0x10b1c |  |
| `side_of_car` | `int` | 0xbee4 | 0xbd4c | 0xc290 | 0x10b20 |  |
| `hold_pos_flag` | `int` | 0xbee8 | 0xbd50 | 0xc294 | 0x10b24 |  |
| `hold_pos_condition` | `char[100]` | 0xbeec | 0xbd54 | 0xc298 | 0x10b28 |  |
| `sfx_handles` | `uint[2]` | 0xbf50 | 0xbdb8 | 0xc2fc | 0x10b8c |  |
| `death_sound_played` | `int` | 0xbf58 | 0xbdc0 | 0xc304 | 0x10b94 |  |
| `sfx_handle` | `uint` | 0xbf5c | 0xbdc4 | 0xc308 | 0x10b98 |  |
| `part_indices` | `int[11]` | 0xbf60 | 0xbdc8 | 0xc30c | 0x10b9c |  |
| `firing_blend` | `float` | 0xbf8c | 0xbdf4 | 0xc338 | 0x10bc8 |  |
| `firing_cooldown` | `float` | 0xbf90 | 0xbdf8 | 0xc33c | 0x10bcc |  |
