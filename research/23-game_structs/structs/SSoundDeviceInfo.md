# SSoundDeviceInfo

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 280 | fields | — |
| nocturne | 280 | fields | — |
| bw1 | 280 | fields | — |
| blairwitch2 | 280 | fields | — |
| bw3 | 280 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `device_name` | `char[256]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `api_type` | `int` | 0x100 | 0x100 | 0x100 | 0x100 | 0x100 |
| `device_id` | `int` | 0x104 | 0x104 | 0x104 | 0x104 | 0x104 |
| `has_hardware_mixing` | `DWORD` | 0x108 | 0x108 | 0x108 | 0x108 | 0x108 |
| `flags` | `int` | 0x10c | 0x10c | 0x10c | 0x10c | 0x10c |
| `is_primary_device` | `DWORD` | 0x110 | 0x110 | 0x110 | 0x110 | 0x110 |
| `is_emulated` | `DWORD` | 0x114 | 0x114 | 0x114 | 0x114 | 0x114 |
