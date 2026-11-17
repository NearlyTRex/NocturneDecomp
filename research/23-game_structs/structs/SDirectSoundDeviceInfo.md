# SDirectSoundDeviceInfo

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 284 | fields | — |
| nocturne | 284 | fields | — |
| bw1 | 284 | fields | — |
| blairwitch2 | 284 | fields | — |
| bw3 | 284 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `is_primary_device` | `DWORD` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `device_guid` | `_GUID` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `device_description` | `char[256]` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
| `is_emulated` | `DWORD` | 0x114 | 0x114 | 0x114 | 0x114 | 0x114 |
| `has_hardware_mixing` | `DWORD` | 0x118 | 0x118 | 0x118 | 0x118 | 0x118 |
