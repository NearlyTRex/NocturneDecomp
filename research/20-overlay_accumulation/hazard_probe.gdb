delete
set pagination off

# Does any 2D get drawn between unlockHoldBuffer and the next lockFrame?
#
# That window is the one thing the target_ahead correction changes for the
# worse: a lock that now reads back would erase 2D drawn there, where before it
# survived on a stale image. If this never reports, the window is unused and the
# correction cannot regress anything.
#
# g_dev is only read from trigl_device.cpp breakpoints; other sites set flags.
set $window = 0
set $hits = 0
set $windows = 0
set $worst = 0

break nocturne_trigl_device_unlock_hold_buffer
commands
silent
set $window = 1
set $hits = 0
set $windows = $windows + 1
enable $bp_glyph
enable $bp_fill
cont
end

# These two are extremely hot -- per glyph-span and per rectangle, thousands of
# calls a frame, and a menu is almost all 2D. Left enabled they stop the process
# often enough to make menus crawl at any resolution. They are therefore kept
# disabled and switched on only inside the window being measured, which is the
# only place their answer matters.
break engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
set $bp_glyph = $bpnum
commands
silent
set $hits = $hits + 1
cont
end
disable $bp_glyph

break engine_2d_c_fillRectColor_FUN_00403170
set $bp_fill = $bpnum
commands
silent
set $hits = $hits + 1
cont
end
disable $bp_fill

break nocturne_trigl_device_lock_frame
commands
silent
if $window
  disable $bp_glyph
  disable $bp_fill
  if $hits > 0
    printf "[HAZARD] %d 2D draws between unlockHoldBuffer and this lock -- readback would erase them\n", $hits
    if $hits > $worst
      set $worst = $hits
    end
  end
  set $window = 0
end
cont
end

define hz
  printf "hold-unlock windows seen=%d  worst 2D draws inside one=%d\n", $windows, $worst
end
document hz
Print the hazard tally: how many unlockHoldBuffer->lockFrame windows were seen,
and the most 2D draws found inside any one of them. 0 means the fix is safe.
end
