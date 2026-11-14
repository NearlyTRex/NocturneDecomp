# Later POD versions

The POD family continued after these games, in Terminal Reality's later engines and in High
Voltage Software's Quantum3. None of the five builds here reads anything past POD3 (no compare
against `'4'`–`'6'`, no hashing, no compression in any POD path), so nothing on this page comes
from this project's binaries. It is what outside sources state, kept to show where the formats
here sit and where they differ. Treat every line as unverified until a binary that reads it is
analysed.

Sources: [RedRayne issue #2](https://github.com/americusmaximus/RedRayne/issues/2) (a
reimplementation of a later Terminal Reality engine), and
[pc-victorious](https://github.com/vs-sr-dev/pc-victorious) (Infernal Engine archive tools).

## Versions and checksums

The RedRayne issue lists the versions as POD1 to POD6 plus two EPD variants it calls "EXTD"
(`dtxe`) and "LAST" (`tsal`), magic stored reversed. It gives each version's CRC-32/MPEG-2
range, the same algorithm as here:

| Version | Range it states | What these builds do |
|---|---|---|
| EPD | from the header | EPD CRCs are stored and never checked |
| POD1, with checksum | from the header | `[0x54, EOF)`, stored at `0x50` |
| POD1, without | none | — |
| POD2 | after the ident and checksum, to EOF | `[0x08, EOF)`: agrees |
| POD3, POD4, POD5 | after the ident and checksum, to the end of the header | `[0x08, EOF)` in nocedit; BW never checks |
| POD6 | none | — |

**POD3 disagrees.** In nocedit the POD3 whole-file CRC covers to the end of the file, not the
header. Either the later engines changed it, or the issue describes a different POD3. This
project already has two POD3 header layouts ([formats.md](formats.md#pod3-two-incompatible-layouts)),
so which one an outside tool means needs checking against its field offsets.

## What POD5 adds, as stated

- **Dependency records** per entry: an offset, compressed and extracted lengths, a checksum or
  flag, and a parent/child link; and a dependency table of `sid`, resource-type group, length and
  a path string. These differ from POD3's 264-byte dependency records here, which name another
  POD and an ordering rule ([formats.md](formats.md#dependency-records)).
- **Hashed lookup**: file paths are hashed with MurmurHash3 (32- or 64-bit by platform) and looked
  up in an index table, which lets the engine stream a payload without a name search.
- **Compression**: the separate compressed and extracted lengths imply compressed entries. No
  format here has a compressed entry.

## Open

- The POD4 and POD6 header and entry layouts.
- Which POD3 the later engines read: nocedit's, the Blair Witch one, or a third.
- Whether any shipped Terminal Reality game after Blair Witch Volume 3 still reads POD2.
