---
id: sanitizer-interaction
kind: rule
title: Sanitizer interaction
requires: []
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

`debug.sh` defaults to `halt_on_error=1`/`abort_on_error=1` so gdb catches the first sanitizer trap. That's right for triaging a single bug, but it **prevents counter-pass investigations** because the program aborts on the first UBSan/ASan error before counters accumulate.

When investigating something downstream of a known non-fatal sanitizer trap, set `halt_on_error=0` for the sanitizer in question. UBSan errors still print to stderr; ASan SEGVs always abort regardless of options.
