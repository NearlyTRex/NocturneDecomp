---
id: fpu-exception-trap-nan-tracing
kind: rule
title: FPU exception trap (NaN tracing)
requires: []
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

When NaN cascades cause hangs (loops with `< INT_MIN` comparisons because `(int)NaN = 0x80000000`), wrong renders (clip-to-nothing because projected coords are NaN), or wrong physics (actor falling through world), the actual NaN-producing op may be far upstream from the symptom. The build has a configurable FPU trap (gated by `NOCTURNE_FPU_TRAP=1` in `shims/shim_config.h`, default on):

```gdb
