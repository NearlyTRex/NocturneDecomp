---
id: driving-the-session
kind: rule
title: Driving the session
requires: []
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

```bash
tmux send-keys -t nodebug 'p g_BackBuffer' Enter   # send command
tmux send-keys -t nodebug C-c                       # interrupt running program
tmux capture-pane -t nodebug -p -S -200             # read last 200 pane lines
tmux kill-session -t nodebug                         # clean up
```

The interaction is **send → wait → capture**, not real-time. Multi-line gdb command blocks (`commands` ... `end`) get tangled when sent line-by-line through `send-keys` — **always source from a file** instead:

```bash
cat > /tmp/bps.gdb <<'EOF'
delete
set $count = 0
break some_function
commands
silent
set $count = $count + 1
cont
end
EOF
tmux send-keys -t nodebug 'source /tmp/bps.gdb' Enter
```
