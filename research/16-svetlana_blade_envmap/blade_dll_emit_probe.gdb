# What the env draw's vertices look like WHERE IT MATTERS -- at buildTLVertex's
# epilogue, after the function has written them.
#
# Breaking at the function's first line instead reads out->diffuse/specular/u/v
# left over from the previous frame's use of that g_VertexBuffer slot, which
# looks plausible and is entirely stale. Break at the closing brace.

delete

set $q_env  = 0
set $q_norm = 0
set $q_tick = 0

break buildTLVertex_FUN_100044b0.keep.cpp:117
commands
silent
set $q_tick = $q_tick + 1
if g_CurrentTextureIndex == 147
  if $q_env < 4
    set $q_env = $q_env + 1
    printf "[ENV  #%d] flags=0x%x | src rgb=%d a=%d -> diffuse=0x%08x specular=0x%08x uv=%g,%g\n", $q_env, render_flags, src->r, src->a, out->diffuse, out->specular, out->u, out->v
  end
end
if g_CurrentTextureIndex != 147
  if $q_norm < 4
    if $q_tick % 1009 == 0
      set $q_norm = $q_norm + 1
      printf "[NORM #%d] flags=0x%x | src rgb=%d a=%d -> diffuse=0x%08x specular=0x%08x uv=%g,%g\n", $q_norm, render_flags, src->r, src->a, out->diffuse, out->specular, out->u, out->v
    end
  end
end
cont
end

printf "emit probe armed (epilogue, no override)\n"
