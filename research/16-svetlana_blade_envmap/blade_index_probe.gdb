# Svetlana's blades — do the env-map faces index valid transformed vertices?
#
# Bisect results, in order:
#   return at function entry            -> garbage GONE
#   force every UV to one texel         -> garbage REMAINS
#   keep captureTexture, emit nothing   -> garbage GONE
#
# So the emitted polygons are the source and the sphere-map sampling is not:
# drawing them causes it, and which texel they sample does not matter. That
# leaves their geometry.
#
# renderEnvMapTriangles takes its topology straight from the caller:
#
#   SStack_118.vertices[0].vertex_index = face_data->vertex_indices.vertex_index_0;
#   ...
#
# and those index the renderer's transformed vertex buffer. If the face list
# describes more vertices than the current pass actually transformed — for
# instance because CSvetlana::renderOpaque's second pass re-renders with only
# part_indices[0] and [1] visible while the face list still covers the whole
# model — the surplus indices read stale or uninitialised transformed vertices
# and the triangles are wired to arbitrary points.
#
# Reports the index range used against the count of vertices the pass filled.
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them.

delete

set $ix_n = 0
set $ix_min = 999999999
set $ix_max = -1

break core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
commands
silent
set $ix_n = $ix_n + 1
set $ix_f = 0
while $ix_f < count
  set $ix_i = 0
  while $ix_i < 3
    set $ix_v = face_data[$ix_f].vertex_indices.vertex_index_0
    if $ix_i == 1
      set $ix_v = face_data[$ix_f].vertex_indices.vertex_index_1
    end
    if $ix_i == 2
      set $ix_v = face_data[$ix_f].vertex_indices.vertex_index_2
    end
    if $ix_v < $ix_min
      set $ix_min = $ix_v
    end
    if $ix_v > $ix_max
      set $ix_max = $ix_v
    end
    set $ix_i = $ix_i + 1
  end
  set $ix_f = $ix_f + 1
end
if $ix_n <= 8
  printf "[IDX #%d] faces=%d idx=[%d..%d]  g_VertexCount=%d  mode=%d skipnorm=%d\n", $ix_n, count, $ix_min, $ix_max, g_VertexCount, g_CGamePtr->render_mode, this_ptr->skip_normal_normalization
end
cont
end

printf "blade index probe armed\n"
