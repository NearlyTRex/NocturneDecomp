delete
set pagination off

# Two questions this answers:
#
#  1. Is the fog content past display_width freshly written each frame, or is it
#     left over from a previous mode? A checksum that changes frame to frame is
#     live data; one that never moves is stale.
#  2. Is the corona blur buffer written at all? It measured empty at 400x300 and
#     populated at 640x480, which would change what the composite blends.
set $f = 0

break core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270
commands
silent
set $f = $f + 1
if $f < 6
  # sum of the in-range columns and of the remainder, for one row
  set $in = 0
  set $out = 0
  set $c = 0
  while $c < this_ptr->display_width
    set $in = $in + g_CameraPlaneWorkBuffer.pixels[20][$c]
    set $c = $c + 1
  end
  set $c = this_ptr->display_width
  while $c < 320
    set $out = $out + g_CameraPlaneWorkBuffer.pixels[20][$c]
    set $c = $c + 1
  end
  set $blur = 0
  set $c = 0
  while $c < 320
    set $blur = $blur + g_CoronaBlurWorkBuffer[20][$c]
    set $c = $c + 1
  end
  printf "[f%d %dx%d] fog row20: in_range(0..%d)=%d  remainder(%d..319)=%d  blur_sum=%d\n", \
    $f, g_WindowWidth, g_WindowHeight, this_ptr->display_width - 1, $in, \
    this_ptr->display_width, $out, $blur
end
cont
end
