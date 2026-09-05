# Svetlana's blades — which sphere-map branch does each vertex take?
#
# renderEnvMapTriangles picks the UV source PER VERTEX:
#
#   if (skip_normal_normalization == 0 || 1.0 <= |n.x| || 1.0 <= |n.y| || 1.0 <= |n.z|)
#         u = ROUND(n.x) + 0x8000 ;  v = 0x8000 - ROUND(n.y)          <- branch A
#   else  normalise(g_LightingReferencePosition*256 - transformedVertex)
#         u = dir.x + 0x8000      ;  v = 0x8000 - dir.y               <- branch B
#
# Those two sources are unrelated in scale. If some vertices of a triangle take A
# and others take B, the sphere map is interpolated between two unrelated points
# and smears across the texture over a few pixels — which is what would read as
# garbage rather than a smooth, merely-wrong gradient.
#
# Sampled normals on the blade pass are ~0.001..0.016, so branch B is expected
# throughout; this counts every vertex of every face to find the ones that are
# not, and reports the largest normal component seen.
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them.

delete

set $bp_call = 0

break core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
commands
silent
set $bp_call = $bp_call + 1
if $bp_call <= 6
  set $bp_a = 0
  set $bp_b = 0
  set $bp_max = 0.0
  set $bp_f = 0
  while $bp_f < count
    set $bp_i = 0
    while $bp_i < 3
      set $bp_v = face_data[$bp_f].vertex_indices.vertex_index_0
      if $bp_i == 1
        set $bp_v = face_data[$bp_f].vertex_indices.vertex_index_1
      end
      if $bp_i == 2
        set $bp_v = face_data[$bp_f].vertex_indices.vertex_index_2
      end
      set $bp_nx = g_VertexNormalArray[$bp_v].x
      set $bp_ny = g_VertexNormalArray[$bp_v].y
      set $bp_nz = g_VertexNormalArray[$bp_v].z
      if $bp_nx < 0
        set $bp_nx = -$bp_nx
      end
      if $bp_ny < 0
        set $bp_ny = -$bp_ny
      end
      if $bp_nz < 0
        set $bp_nz = -$bp_nz
      end
      if $bp_nx > $bp_max
        set $bp_max = $bp_nx
      end
      if $bp_ny > $bp_max
        set $bp_max = $bp_ny
      end
      if $bp_nz > $bp_max
        set $bp_max = $bp_nz
      end
      if $bp_nx >= 1.0 || $bp_ny >= 1.0 || $bp_nz >= 1.0
        set $bp_a = $bp_a + 1
      else
        set $bp_b = $bp_b + 1
      end
      set $bp_i = $bp_i + 1
    end
    set $bp_f = $bp_f + 1
  end
  printf "[BRANCH #%d] faces=%d  A(normal)=%d  B(eye-fallback)=%d  max|n|=%g  skipnorm=%d mode=%d\n", $bp_call, count, $bp_a, $bp_b, $bp_max, this_ptr->skip_normal_normalization, g_CGamePtr->render_mode
end
cont
end

printf "blade branch probe armed\n"
