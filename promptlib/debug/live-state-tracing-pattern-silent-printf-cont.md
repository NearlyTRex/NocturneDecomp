---
id: live-state-tracing-pattern-silent-printf-cont
kind: rule
title: Live state-tracing pattern (silent printf + cont, no pauses)
requires: []
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

When you need to watch *what state* a function sees on every call — not just whether it fires — extend the silent-counter idiom into a state-printing probe. The breakpoint's `commands` block prints the relevant fields with `printf` and continues, so the game keeps running while you accumulate a per-call trace. Drive iterations on the *running* game: `^C` to interrupt, `source` a new probe file, `c` to resume. Each pass narrows the question; you never have to restart the game or replay it from the start.

**The base pattern:**

```gdb
break my_function_FUN_005a8e90
commands
silent
set $cnt = $cnt + 1
printf "[MY #%d] arg='%s' field=%d\n", $cnt, sound_name, this_ptr->message_duration
cont
end
```

Function-entry breakpoints can read parameters by name (`sound_name`, `this_ptr`) and walk struct fields (`this_ptr->some_field`) directly — debug info from `-O0 -g` makes them visible. Each call adds one line to the trace.

**Conditional printing — `if`/`end` inside commands:**

A breakpoint that fires every frame on every active object floods the log. Filter with gdb's `if`/`end` so the printf only runs when a specific condition holds:

```gdb
break sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0
commands
silent
if this_ptr->sample != 0 && this_ptr->sample->mp3_data != 0
  printf "[MIX] name='%s' prev=%g vol[0]=%g\n", \
    this_ptr->sample->sample_info.name, \
    this_ptr->prev_hardware_playback_pos, \
    this_ptr->channel_volumes[0]
end
cont
end
```

Conditional breakpoints (`break foo if expr`) work but are slower per-hit; the `if` inside `commands` only gates the printf.

**Survey loops with `while`:** count or dump matching slots in an arena without setting 64 separate breakpoints:

```gdb
break pollAndMixSfx_FUN_005aca90.keep.cpp:66
commands
silent
set $i = 0
set $active = 0
while $i < 64
  if g_SfxSlots[$i].playback_state != 0 && g_SfxSlots[$i].sample != 0
    set $active = $active + 1
    printf "  slot[%d] name='%s'\n", $i, g_SfxSlots[$i].sample->sample_info.name
  end
  set $i = $i + 1
end
printf "[ACTIVE total=%d]\n", $active
cont
end
```

**Redirect output to a log file when volume is high.** Per-frame probes can spew thousands of lines and overflow the tmux scrollback, eating earlier (more important) entries. Send everything to a file you can grep through:

```gdb
set logging file /tmp/voice_trace.log
set logging overwrite on
set logging redirect on
set logging enabled on
```

After this, all gdb output (including your `printf` lines and tool messages) goes to `/tmp/voice_trace.log` and the tmux pane stays clean. Read the file with `grep -E "\[MY|\[ANOTHER" /tmp/voice_trace.log` to filter for specific tags.

**Iterative refinement workflow:**

```bash
