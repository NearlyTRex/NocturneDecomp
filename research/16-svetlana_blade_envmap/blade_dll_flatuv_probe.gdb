# Re-run the flat-UV elimination one layer lower, where the write is verifiable.
#
# The earlier game-side flat-UV test (research README, "Caveat on one earlier
# result") set texture_u/texture_v at the emit and reported the garbage
# remaining, but the write was never confirmed to have taken effect. This does
# it inside the DLL, on the LAST line of buildTLVertex -- after the function has
# computed out->u/out->v -- so the value that reaches the device is the one set
# here, and the probe reads it back to prove it.
#
# Result to look for on screen:
#   flat wash over the blades  -> the env draw's texture SAMPLING is implicated
#   garbage unchanged          -> the defect is not the texture coordinates

delete

set $q_hit  = 0
set $q_show = 0

# line 117 is the closing brace -- the epilogue, so both out->u (line 114) and
# out->v (line 115) have already been written and this overwrite is the last
# word before the vertex reaches the device.
break buildTLVertex_FUN_100044b0.keep.cpp:117
commands
silent
if g_CurrentTextureIndex == 147
  set $q_hit = $q_hit + 1
  set out->u = 0.5
  set out->v = 0.5
  if $q_show < 8
    set $q_show = $q_show + 1
    printf "[FLATUV #%d] wrote u=%g v=%g (src uv=%d,%d)\n", $q_show, out->u, out->v, src->u, src->v
  end
end
cont
end

printf "flat-UV probe armed at the DLL emit; env gate g_CurrentTextureIndex==147\n"
