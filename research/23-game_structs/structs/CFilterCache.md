# CFilterCache

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 2820 | fields | 2820 |
| nocturne | 2820 | fields | 2820 |
| bw1 | 2820 | placeholder | 2820 |
| blairwitch2 | 2820 | placeholder | 2820 |
| bw3 | 2820 | placeholder | 2820 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `filter_count` | `int` | 0x0 | 0x0 |  |  |  |
| `filter_names` | `char[64][40]` | 0x4 | 0x4 |  |  |  |
| `filters` | `CDemonFilter*[64]` | 0xa04 | 0xa04 |  |  |  |
