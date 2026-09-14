delete
set pagination off

# Verification for the unlock_hold_buffer target_ahead correction.
#
# Two things have to hold at once:
#   1. banner frames now read the target back  -> lock_target_ahead=1
#   2. a lock taken to READ a finished frame still sees the composite, so the
#      screen backup behind the first modal keeps the 2D that was on it.
#
# g_dev is in an anonymous namespace in trigl_device.cpp and is NOT visible from
# a breakpoint in another translation unit. Referencing it from one aborts the
# command block before its `cont` and freezes the game. Every read of it below
# is therefore inside a trigl_device.cpp breakpoint; other sites only set flags.
set $f = 0
set $ta = -1
set $banner = 0
set $in_backup = 0

break nocturne_trigl_device_lock_frame
commands
silent
set $ta = g_dev.target_ahead
if $in_backup
  printf "[BACKUP] its lock sees target_ahead=%d   (0 = keeps the composite)\n", g_dev.target_ahead
  set $in_backup = 0
end
cont
end

break nocturne_ui_draw_text
commands
silent
if text[0] == 'Y'
  set $banner = $banner + 1
end
cont
end

break shape_edittool_cpp_CEditorTools_backupScreen_FUN_0049e410
commands
silent
set $in_backup = 1
cont
end

break nocturne_trigl_device_unlock_frame
commands
silent
set $f = $f + 1
if $banner > 0
  printf "[F %d] lock_target_ahead=%d banner=%d\n", $f, $ta, $banner
end
set $banner = 0
set $ta = -1
cont
end
