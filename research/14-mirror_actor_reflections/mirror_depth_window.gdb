# Does the mirror's depth window actually open, and with what depth?
#
# The reflection is drawn into a hole punched in the software z-buffer.
# CMirror::renderMirrorQuadDepth transforms the four glass corners, scales
# transformed_x/y/z by 16 and inv_z by 1/16 -- the same screen position at
# sixteen times the distance -- and hands the quad to renderZPrepassPoly, which
# selects PREPROCESS_W_DEPTH_REPLACEMENT so replaceWWithDepth substitutes inv_z
# for transformed_z, and renderZBufferFill16xUnrolled writes depth >> 8 with no
# depth test. Reflected geometry closer than 16x the glass distance then passes.
#
# Both reflection mechanisms depend on that one window: the CMirror clipper path
# for static geometry and the re-rendered actor pass both draw into it. Only the
# software rasteriser consumes it -- with an external renderer nothing reads
# this z-buffer for the 3D pass.
#
# Three ways the window fails, all measured here:
#
#   SKIPPED   renderZPrepassPoly rejects the quad before rasterising. It ANDs
#             the four screen_x words; when every corner shares a clip-plane bit
#             the quad is trivially rejected and no hole is punched at all.
#
#   STALE     transformPoint only writes inv_z on its unclipped exit (005b5b36).
#             A corner outside the frustum keeps the inv_z of whatever primitive
#             last occupied that vertex-buffer slot, and the edge walker
#             interpolates the window's depth through it.
#
#   OVERFLOW  transformed_z << 4 is a signed 32-bit shift. A corner in front of
#             the camera has z > 0, so a non-positive result after the shift is
#             an overflow and the quad's projection is wrong.
#
# Depths print as raw z-buffer units: inv_z is 0x7fffffff / z, so a LARGER
# number is NEARER. A window that is not far enough occludes the reflection.
set confirm off
delete
set confirm on

set $mz_calls = 0
set $mz_skipped = 0
set $mz_stale = 0
set $mz_overflow = 0
set $mz_cap = 400

break engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0048a950
commands
silent
set $mz_calls = $mz_calls + 1
if $mz_calls <= $mz_cap
  set $mz_vb = g_CDemonRendererPtr2->vertex_buffer_ptr
  set $mz_and = $mz_vb[0].projected_vertex.screen_x
  set $mz_and = $mz_and & $mz_vb[1].projected_vertex.screen_x
  set $mz_and = $mz_and & $mz_vb[2].projected_vertex.screen_x
  set $mz_and = $mz_and & $mz_vb[3].projected_vertex.screen_x
  set $mz_clipped = 0
  set $mz_bad_z = 0
  set $mz_i = 0
  while $mz_i < 4
    if ($mz_vb[$mz_i].projected_vertex.screen_x & 0x80000000) != 0
      set $mz_clipped = $mz_clipped + 1
    end
    if $mz_vb[$mz_i].projected_vertex.transformed_z <= 0
      set $mz_bad_z = $mz_bad_z + 1
    end
    set $mz_i = $mz_i + 1
  end
  set $mz_punch = 1
  if (($mz_and & 0x80000000) != 0) && (($mz_and & 0x1f) != 0)
    set $mz_punch = 0
    set $mz_skipped = $mz_skipped + 1
  end
  if $mz_clipped > 0
    set $mz_stale = $mz_stale + 1
  end
  if $mz_bad_z > 0
    set $mz_overflow = $mz_overflow + 1
  end
  printf "PUNCH #%d punch=%d clipped=%d/4 badz=%d/4", $mz_calls, $mz_punch, $mz_clipped, $mz_bad_z
  printf "  z=%d,%d,%d,%d", $mz_vb[0].projected_vertex.transformed_z, $mz_vb[1].projected_vertex.transformed_z, $mz_vb[2].projected_vertex.transformed_z, $mz_vb[3].projected_vertex.transformed_z
  printf "  invz=%d,%d,%d,%d\n", $mz_vb[0].projected_vertex.inv_z, $mz_vb[1].projected_vertex.inv_z, $mz_vb[2].projected_vertex.inv_z, $mz_vb[3].projected_vertex.inv_z
end
cont
end

# The window's depth as the rasteriser writes it. Each call is one scanline of
# the punched hole; the span's endpoints bracket every value written to it.
# This fires once per row of every mirror, so it retires itself at the cap --
# a breakpoint that keeps stopping and continuing here costs real frame rate.
set $mz_rows = 0
set $mz_row_cap = 40

break core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00490902
set $mz_row_bp = $bpnum
commands
silent
set $mz_rows = $mz_rows + 1
printf "  ROW y=%d x=%d..%d depth=%u..%u\n", scanline_y, (left_edge->base.x_current >> 16), (right_edge->base.x_current >> 16), (left_edge->base.depth_current >> 8), (right_edge->base.depth_current >> 8)
if $mz_rows >= $mz_row_cap
  disable $mz_row_bp
  printf "  ROW cap reached, breakpoint retired\n"
end
cont
end

# Totals, once per camera setup, so the counters can be read without pausing.
break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
printf "== MIRROR DEPTH WINDOW: punches=%d skipped=%d with-clipped-corner=%d with-bad-z=%d rows=%d\n", $mz_calls, $mz_skipped, $mz_stale, $mz_overflow, $mz_rows
cont
end
