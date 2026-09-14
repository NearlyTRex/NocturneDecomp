delete
set pagination off

# One ordered trace of everything that touches the frame, for three frames.
# Arms on the first renderScene, so it traces gameplay rather than the menu.
set $armed = 0
set $f = 0
set $seq = 0
set $glyph_seen = 0
set $trace = 0

define fo_mark
  set $seq = $seq + 1
end

break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
if $armed == 0
  set $armed = 1
  set $trace = 1
end
if $trace
  set $seq = $seq + 1
  printf "f%d.%02d  renderScene\n", $f, $seq
end
cont
end

break nocturne_trigl_device_flush
commands
silent
if $trace
  set $seq = $seq + 1
  printf "f%d.%02d  FLUSH        indices=%d target_ahead=%d\n", $f, $seq, g_dev.batch.index_count, g_dev.target_ahead
end
cont
end

break nocturne_trigl_device_lock_frame
commands
silent
if $trace
  set $seq = $seq + 1
  printf "f%d.%02d  LOCK         target_ahead=%d   (1 = reads the target back)\n", $f, $seq, g_dev.target_ahead
end
cont
end

break nocturne_gl_scene_upload
commands
silent
if $trace
  set $seq = $seq + 1
  printf "f%d.%02d  UPLOAD       %dx%d  -> this is the scene target's only clear\n", $f, $seq, width, height
end
cont
end

break engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
commands
silent
if $trace && $glyph_seen == 0
  set $glyph_seen = 1
  set $seq = $seq + 1
  printf "f%d.%02d  2D-GLYPH     first blended text of the frame\n", $f, $seq
end
cont
end

break nocturne_trigl_device_unlock_frame
commands
silent
if $trace
  set $seq = $seq + 1
  printf "f%d.%02d  UNLOCK\n", $f, $seq
end
if $armed
  set $f = $f + 1
  set $glyph_seen = 0
  if $f > 2
    set $trace = 0
  end
end
cont
end
