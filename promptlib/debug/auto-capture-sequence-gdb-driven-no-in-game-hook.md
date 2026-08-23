---
id: auto-capture-sequence-gdb-driven-no-in-game-hook
kind: rule
title: Auto-capture sequence (gdb-driven, no in-game hook)
requires: []
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

When you need a sequence of frames over a window of gameplay (e.g. "what does
the level look like during the first 60 frames after load"), drive
`nocturne_auto_capture` from a per-frame breakpoint's `commands` block. The
function maintains its own internal counters; you just pick a path template,
how often to capture, and a max:

```gdb
break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
call (void)nocturne_auto_capture("/tmp/seq_%03d.ppm", 4, 30, 0)
cont
end
