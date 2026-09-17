# Does the punched depth window cover the whole mirror?
#
# The reflection can only be drawn where CMirror::renderMirrorQuadDepth has
# replaced the wall's depth. Anywhere inside the glass that the punch misses
# keeps the wall's depth and rejects the reflection, which reads on screen as a
# reflection that is partly cut away.
#
# renderZBufferFill16xUnrolled fills one scanline of the hole per call, so
# accumulating its spans gives the punched rectangle exactly. That is compared
# against the mirror quad's own screen footprint, taken from the corners that
# transformPoint left unclipped -- a clipped corner carries a clip outcode in
# screen_x instead of a coordinate, so it is excluded from the extent rather
# than read as a position.
#
# A punch narrower or shorter than the quad is the defect. Equal extents clear
# the window and move the hunt to the reflected geometry itself.
set confirm off
delete
set confirm on

set $mx_frames = 0
set $mx_rows = 0
set $mx_x0 = 99999
set $mx_x1 = -99999
set $mx_y0 = 99999
set $mx_y1 = -99999
set $mx_depth_lo = 0xffffffff
set $mx_depth_hi = 0

break core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00490902
commands
silent
set $mx_rows = $mx_rows + 1
set $mx_lx = left_edge->base.x_current >> 16
set $mx_rx = right_edge->base.x_current >> 16
if $mx_rx < $mx_lx
  set $mx_t = $mx_lx
  set $mx_lx = $mx_rx
  set $mx_rx = $mx_t
end
if $mx_lx < $mx_x0
  set $mx_x0 = $mx_lx
end
if $mx_rx > $mx_x1
  set $mx_x1 = $mx_rx
end
if scanline_y < $mx_y0
  set $mx_y0 = scanline_y
end
if scanline_y > $mx_y1
  set $mx_y1 = scanline_y
end
set $mx_dl = left_edge->base.depth_current >> 8
set $mx_dr = right_edge->base.depth_current >> 8
if $mx_dl < $mx_depth_lo
  set $mx_depth_lo = $mx_dl
end
if $mx_dr < $mx_depth_lo
  set $mx_depth_lo = $mx_dr
end
if $mx_dl > $mx_depth_hi
  set $mx_depth_hi = $mx_dl
end
if $mx_dr > $mx_depth_hi
  set $mx_depth_hi = $mx_dr
end
cont
end

# The quad's own footprint, taken where the vertex buffer is certain to hold the
# mirror corners: renderZPrepassPoly's only caller is renderMirrorQuadDepth.
break engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0048a950
commands
silent
set $mx_vb = g_CDemonRendererPtr2->vertex_buffer_ptr
set $mx_qx0 = 99999
set $mx_qx1 = -99999
set $mx_qy0 = 99999
set $mx_qy1 = -99999
set $mx_seen = 0
set $mx_i = 0
while $mx_i < 4
  if ($mx_vb[$mx_i].projected_vertex.screen_x & 0x80000000) == 0
    set $mx_seen = $mx_seen + 1
    set $mx_qx = $mx_vb[$mx_i].projected_vertex.screen_x >> 16
    set $mx_qy = $mx_vb[$mx_i].projected_vertex.screen_y >> 16
    if $mx_qx < $mx_qx0
      set $mx_qx0 = $mx_qx
    end
    if $mx_qx > $mx_qx1
      set $mx_qx1 = $mx_qx
    end
    if $mx_qy < $mx_qy0
      set $mx_qy0 = $mx_qy
    end
    if $mx_qy > $mx_qy1
      set $mx_qy1 = $mx_qy
    end
  end
  set $mx_i = $mx_i + 1
end
cont
end

# renderSceneGeometry runs once per frame and holds the only mirror loop that
# punches. Reporting at its entry gives one line per frame and keeps the
# breakpoint load off setupMirrorRendering, whose other four callers are
# per-actor mirror passes that run hundreds of times a frame.
break core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
commands
silent
set $mx_frames = $mx_frames + 1
if $mx_rows > 0
  printf "MIRROR #%d quad(unclipped %d/4) x=%d..%d y=%d..%d | punched x=%d..%d y=%d..%d rows=%d depth=%u..%u\n", $mx_frames, $mx_seen, $mx_qx0, $mx_qx1, $mx_qy0, $mx_qy1, $mx_x0, $mx_x1, $mx_y0, $mx_y1, $mx_rows, $mx_depth_lo, $mx_depth_hi
else
  printf "MIRROR #%d NO PUNCH quad(unclipped %d/4) x=%d..%d y=%d..%d\n", $mx_frames, $mx_seen, $mx_qx0, $mx_qx1, $mx_qy0, $mx_qy1
end
set $mx_rows = 0
set $mx_x0 = 99999
set $mx_x1 = -99999
set $mx_y0 = 99999
set $mx_y1 = -99999
set $mx_depth_lo = 0xffffffff
set $mx_depth_hi = 0
cont
end
