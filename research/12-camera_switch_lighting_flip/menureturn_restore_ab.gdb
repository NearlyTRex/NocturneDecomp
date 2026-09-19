# Bug 3 — the discriminating A/B: suppress one half of the redraw's lightmap
# pair and see which one the flicker follows.
#
# The pause menu's redraw is the only renderScene call in the game loop with
# skip_prerender == 0. in_repaint is set at its entry and cleared at the next
# renderScene entry, which spans the redraw's trailing restore loop and nothing
# else.
#
#   $mode = 1   suppress restoreDirtyRegions during the redraw, so the spot
#               shadow maps keep their occluders   -> flicker GONE
#   $mode = 2   suppress addLightmapToCorona instead                -> control
#
# Two further arms, run by editing the renderScene breakpoint rather than this
# switch, and recorded here so they are not repeated:
#   `return` from renderScene when skip_prerender == 0   -> flicker GONE, and
#       the screen behind the menu shows the stale buffer the redraw exists to
#       overwrite
#   `set skip_prerender = 1` on that same call            -> flicker UNCHANGED,
#       which is what rules out everything in the prerender
#
# Probe hygiene: no $bl/$bh/$bx/$bp/$sp/$si/$di/$ps (x86 registers); no `\`
# continuations inside a nested `if`.

delete

set pagination off
set confirm off

set $mode = 1
set $in_repaint = 0
set $sup_restore = 0
set $sup_add = 0

break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
if $in_repaint != 0
  printf "[AB] redraw window closed: suppressed add=%d restore=%d\n", $sup_add, $sup_restore
  set $in_repaint = 0
  set $sup_restore = 0
  set $sup_add = 0
end
if skip_prerender == 0
  set $in_repaint = 1
  printf "[AB] redraw window open at frame=%d mode=%d\n", g_CGamePtr->frame_counter, $mode
end
cont
end

break core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
commands
silent
if $in_repaint != 0 && $mode == 1
  set $sup_restore = $sup_restore + 1
  return
end
cont
end

break core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
commands
silent
if $in_repaint != 0 && $mode == 2
  set $sup_add = $sup_add + 1
  return
end
cont
end

printf "menu-return restore A/B armed -- mode 1 (redraw leaves the shadow maps alone)\n"
