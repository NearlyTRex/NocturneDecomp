# Svetlana's blades — what colour and alpha do the emitted vertices carry?
#
# Five bisects have ruled out the texture, the UVs, calculateSurfaceNormal, the
# vertex-lighting branch and depth fighting, while showing that the polygons must
# actually be rasterised for the artefact to appear (see README.md). So read what
# the emit hands the rasteriser instead of reasoning about which stage built it.
#
# lightVerticies writes g_RenderVertexBuffer[i].a = g_PerspectiveReciprocal for
# every vertex on both branches; whether r/g/b/a are uniform across the blade
# vertices has never been checked.
#
# Reports, over all vertices of all emitted triangles, the range of each colour
# channel and of alpha, plus the projected screen position — so a wild spread in
# any one of them stands out.
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them.

delete

set $vc_n = 0
set $vc_rmin = 999999999
set $vc_rmax = -999999999
set $vc_gmin = 999999999
set $vc_gmax = -999999999
set $vc_bmin = 999999999
set $vc_bmax = -999999999
set $vc_amin = 999999999
set $vc_amax = -999999999
set $vc_zmin = 999999999
set $vc_zmax = -999999999

define vcsample
  set $vc_n = $vc_n + 1
  set $vc_i = 0
  while $vc_i < 3
    set $vc_v = SStack_118.vertices[$vc_i].vertex_index
    set $vc_r = g_RenderVertexBuffer[$vc_v].r
    set $vc_g = g_RenderVertexBuffer[$vc_v].g
    set $vc_b = g_RenderVertexBuffer[$vc_v].b
    set $vc_a = g_RenderVertexBuffer[$vc_v].a
    set $vc_z = g_RenderVertexBuffer[$vc_v].projected_vertex.transformed_z
    if $vc_r < $vc_rmin
      set $vc_rmin = $vc_r
    end
    if $vc_r > $vc_rmax
      set $vc_rmax = $vc_r
    end
    if $vc_g < $vc_gmin
      set $vc_gmin = $vc_g
    end
    if $vc_g > $vc_gmax
      set $vc_gmax = $vc_g
    end
    if $vc_b < $vc_bmin
      set $vc_bmin = $vc_b
    end
    if $vc_b > $vc_bmax
      set $vc_bmax = $vc_b
    end
    if $vc_a < $vc_amin
      set $vc_amin = $vc_a
    end
    if $vc_a > $vc_amax
      set $vc_amax = $vc_a
    end
    if $vc_z < $vc_zmin
      set $vc_zmin = $vc_z
    end
    if $vc_z > $vc_zmax
      set $vc_zmax = $vc_z
    end
    set $vc_i = $vc_i + 1
  end
  if $vc_n % 300 == 0
    printf "[VTX %d tris] r=[%d..%d] g=[%d..%d] b=[%d..%d] a=[%d..%d] z=[%d..%d]\n", $vc_n, $vc_rmin, $vc_rmax, $vc_gmin, $vc_gmax, $vc_bmin, $vc_bmax, $vc_amin, $vc_amax, $vc_zmin, $vc_zmax
  end
end

break core/set.cpp/CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:126
commands
silent
vcsample
cont
end

break core/set.cpp/CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:130
commands
silent
vcsample
cont
end

printf "blade vertex-colour probe armed\n"
