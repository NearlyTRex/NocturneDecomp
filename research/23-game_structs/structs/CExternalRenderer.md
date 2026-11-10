# CExternalRenderer

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 7624 | fields | — |
| nocturne | 7624 | fields | — |
| bw1 | 7624 | fields | — |
| blairwitch2 | 7624 | fields | — |
| bw3 | 7624 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `description` | `char[256]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `vendor_name` | `char[256]` | 0x100 | 0x100 | 0x100 | 0x100 | 0x100 |
| `interface_version` | `ushort` | 0x200 | 0x200 | 0x200 | 0x200 | 0x200 |
| `driver_version` | `ushort` | 0x202 | 0x202 | 0x202 | 0x202 | 0x202 |
| `api_version` | `ushort` | 0x204 | 0x204 | 0x204 | 0x204 | 0x204 |
| `other_version` | `ushort` | 0x206 | 0x206 | 0x206 | 0x206 | 0x206 |
| `feature_flags` | `_BIT_INTEGER32` | 0x208 | 0x208 | 0x208 | 0x208 | 0x208 |
| `function_count` | `uint` | 0x20c | 0x20c | 0x20c | 0x20c | 0x20c |
| `function_table` | `uint[16]` | 0x210 | 0x210 | 0x210 | 0x210 | 0x210 |
| `reserved` | `char[7032]` | 0x250 | 0x250 | 0x250 | 0x250 | 0x250 |
