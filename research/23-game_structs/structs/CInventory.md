# CInventory

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1120 | fields | — |
| nocturne | 1120 | fields | — |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `battery_charge` | `float` | 0x0 | 0x0 |  |  |  |
| `owner` | `CDemonActor*` | 0x4 | 0x4 |  |  |  |
| `item_count` | `int` | 0x8 | 0x8 |  |  |  |
| `items` | `CDemonActor*[100]` | 0xc | 0xc |  |  |  |
| `item_angles` | `float[100]` | 0x19c | 0x19c |  |  |  |
| `save_version` | `int` | 0x32c | 0x32c |  |  |  |
| `selected_weapon` | `CWeapon*` | 0x330 | 0x330 |  |  |  |
| `selected_item` | `CDemonActor*` | 0x334 | 0x334 |  |  |  |
| `weapon_highlight_timer` | `float` | 0x338 | 0x338 |  |  |  |
| `item_highlight_timer` | `float` | 0x33c | 0x33c |  |  |  |
| `inventory_display_timer` | `float` | 0x340 | 0x340 |  |  |  |
| `message_display_timer` | `float` | 0x344 | 0x344 |  |  |  |
| `ammo_detail_timer` | `float` | 0x348 | 0x348 |  |  |  |
| `message_text` | `char[256]` | 0x34c | 0x34c |  |  |  |
| `render_mode_flag` | `int` | 0x44c | 0x44c |  |  |  |
| `preserve_items` | `int` | 0x450 | 0x450 |  |  |  |
| `light_gun_ptr` | `CLightGun*` | 0x454 | 0x454 |  |  |  |
| `ammo_ptr` | `CAmmo*` | 0x458 | 0x458 |  |  |  |
| `cached_ammo_count` | `int` | 0x45c | 0x45c |  |  |  |
