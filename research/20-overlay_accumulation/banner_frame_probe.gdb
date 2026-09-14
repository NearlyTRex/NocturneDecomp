delete
set pagination off

# What the banner frames do differently. Per frame: whether the software
# background was re-uploaded, how much geometry was submitted, and whether the
# lock read the target back. Prints only on frames that draw the death banner.
set $f = 0
set $up_big = 0
set $up_hold = 0
set $geom = 0
set $banner = 0
set $ta = -1

break nocturne_gl_scene_upload
commands
silent
if width == 640 && height == 480
  set $up_hold = $up_hold + 1
else
  set $up_big = $up_big + 1
end
cont
end

break nocturne_trigl_device_flush
commands
silent
if g_dev.batch.index_count > 0
  set $geom = $geom + 1
end
cont
end

break nocturne_trigl_device_lock_frame
commands
silent
set $ta = g_dev.target_ahead
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

break nocturne_trigl_device_unlock_frame
commands
silent
set $f = $f + 1
if $banner > 0
  printf "[F %d] hold_upload=%d big_upload=%d geom_flushes=%d lock_target_ahead=%d iris=%d\n", $f, $up_hold, $up_big, $geom, $ta, g_IrisFadeType
end
set $up_hold = 0
set $up_big = 0
set $geom = 0
set $banner = 0
set $ta = -1
cont
end
