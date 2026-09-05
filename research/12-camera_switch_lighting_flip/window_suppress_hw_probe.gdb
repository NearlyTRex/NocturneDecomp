# Prove the over-bright window is a hardware re-draw of geometry already
# composited: suppress exactly those draws and re-measure.
#
# Chain measured in one accelerated run:
#   camera framebuffer (composite SOURCE)  window max 85   glass present, unlit
#   composite OUTPUT                       window max 22   lightmap darkens it
#   PRESENTED frame                        window max 56   hardware re-draw on top
# and the source buffer is BIT-IDENTICAL to software's, so the glass is
# CPU-rendered into the composite source in both renderers.
#
# The composite runs before beginScene(), so hardware draws never receive the
# per-pixel lightmap. The glass therefore lands at full texture brightness over
# a backdrop that was correctly darkened -- 56 against software/retail's 28.
#
# Force APIDLLdrawPolygon2 to return early for polygons landing in the window
# box. If the presented window then reads ~21-28, the diagnosis is confirmed and
# the fix target is "hardware geometry must receive the per-pixel lightmap"
# (or must not be drawn a second time).
#
# Window box: rows 71..134, cols 296..375 in 640x480 frame coords; the DLL sees
# 16.16 fixed point in that space, hence the x65536 bounds.

delete

set $q_killed = 0

break dll_dx7_cpp_APIDLLdrawPolygon2_FUN_100043c0
commands
silent
set $q_x = (vertex_array[0]->projected_vertex).screen_x
set $q_y = (vertex_array[0]->projected_vertex).screen_y
if $q_x > 19398656 && $q_x < 24576000
  if $q_y > 4653056 && $q_y < 8781824
    set $q_killed = $q_killed + 1
    return 1
  end
end
cont
end

printf "window hardware-draw SUPPRESSION armed; $q_killed counts skipped polys\n"
