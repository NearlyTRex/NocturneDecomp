# What depth is baked inside the mirror, and what must a reflected actor beat?
#
# setCameraView renders the scene once per camera, then throws the colour away:
# loadImage replaces the frame with the artist's pre-rendered <camera>.raw. What
# survives the bake is the z-buffer, captured by saveZBufferScanlines and
# restored before every frame. So the reflected room contributes DEPTH, not
# pixels, and a reflected actor is visible only where its own depth beats what
# the bake left in the mirror's footprint.
#
# The sequence inside setCameraView:
#
#   renderSceneGeometry(9999.9, 1)   room, then per mirror: punch, reflected room
#   saveZBufferScanlines             <-- sampled here, the baked result
#   ...
#   loadImage("<camera>.raw")        colour discarded, backdrop loaded
#
# Depths are 0x7fffffff / z, so LARGER is NEARER. Three readings are expected
# along the sampled row:
#
#   ~20000          the punched window with nothing drawn over it -- roughly
#                   sixteen times the glass distance, so any reflection wins
#   ~200000-500000  reflected room geometry, the intended occluder
#   much larger     something near the camera survived the punch, which would
#                   occlude the reflection and cut it away
#
# The row is sampled across the punch's own measured extent, so it tracks the
# mirror without needing the quad's clipped corners.
set confirm off
delete
set confirm on

set $mb_rows = 0
set $mb_x0 = 99999
set $mb_x1 = -99999
set $mb_y0 = 99999
set $mb_y1 = -99999

break core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00490902
commands
silent
set $mb_rows = $mb_rows + 1
set $mb_lx = left_edge->base.x_current >> 16
set $mb_rx = right_edge->base.x_current >> 16
if $mb_rx < $mb_lx
  set $mb_t = $mb_lx
  set $mb_lx = $mb_rx
  set $mb_rx = $mb_t
end
if $mb_lx < $mb_x0
  set $mb_x0 = $mb_lx
end
if $mb_rx > $mb_x1
  set $mb_x1 = $mb_rx
end
if scanline_y < $mb_y0
  set $mb_y0 = scanline_y
end
if scanline_y > $mb_y1
  set $mb_y1 = scanline_y
end
cont
end

break core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450
commands
silent
if $mb_rows > 0
  set $mb_my = ($mb_y0 + $mb_y1) / 2
  printf "BAKE punched x=%d..%d y=%d..%d rows=%d | sampling row y=%d\n", $mb_x0, $mb_x1, $mb_y0, $mb_y1, $mb_rows, $mb_my
  set $mb_step = ($mb_x1 - $mb_x0) / 24
  if $mb_step < 1
    set $mb_step = 1
  end
  set $mb_x = $mb_x0
  while $mb_x <= $mb_x1
    printf "  x=%3d depth=%u\n", $mb_x, g_ZBufferScanlineArray[$mb_my][$mb_x]
    set $mb_x = $mb_x + $mb_step
  end
  # A row well above the mirror, for the wall's own depth as a reference.
  printf "  REF row y=%d x=%d depth=%u (outside the punch)\n", $mb_y0, $mb_x0, g_ZBufferScanlineArray[$mb_y0][$mb_x0]
  set $mb_rows = 0
  set $mb_x0 = 99999
  set $mb_x1 = -99999
  set $mb_y0 = 99999
  set $mb_y1 = -99999
end
cont
end
