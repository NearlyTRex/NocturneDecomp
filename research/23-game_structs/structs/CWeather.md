# CWeather

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 56 | fields | 56 |
| nocturne | 56 | fields | 56 |
| bw1 | 56 | fields | — |
| blairwitch2 | 56 | fields | — |
| bw3 | 56 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `weather_type` | `EWeatherType` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `particle_speed` | `float` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `direction` | `CVector3f` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `rotation` | `CVector3f` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
| `lightning_countdown` | `float` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `lightning_active` | `int` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
| `flash_timer` | `float` | 0x28 | 0x28 | 0x28 | 0x28 | 0x28 |
| `sub_flash_interval` | `float` | 0x2c | 0x2c | 0x2c | 0x2c | 0x2c |
| `base_ambient` | `float` | 0x30 | 0x30 | 0x30 | 0x30 | 0x30 |
| `max_flash_interval` | `float` | 0x34 | 0x34 | 0x34 | 0x34 | 0x34 |
