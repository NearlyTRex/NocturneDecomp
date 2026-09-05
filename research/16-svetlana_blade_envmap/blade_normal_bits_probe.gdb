# Do the "tiny normal" slots hold floats, or 16.16 fixed-point ints punned into
# a float array?
#
# lightVerticies has two write paths into g_VertexNormalArray:
#   skip_normal_normalization == 0 -> FSTP float (normalised, x65535)
#                                     asm 0x56f8ca..0x56f8cf
#   skip_normal_normalization != 0 -> IMUL / SHRD ...,0x10 into a stack block,
#                                     then a 12-byte cave copy to the array
#                                     asm 0x56f00e .. 0x60a04b
# renderEnvMapTriangles reads both with FLD float (asm 0x5703fd).
#
# Svetlana sets skip_normal_normalization = 1, so the fixed-point path is hers.
# Print the same slots as float AND as raw int: if the "tiny" values decode to
# sensible 16.16 quantities as ints, the array is being read through the wrong
# type and the >= 1.0 test is meaningless for those vertices.
#
# Index 9 measured as a large float (branch A), index 6 as ~0 (branch B).

delete

set $q_call = 0

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:24
commands
silent
set $q_call = $q_call + 1
if $q_call % 20 == 0
  printf "v6  f=(%g,%g,%g)\n", g_VertexNormalArray[6].x, g_VertexNormalArray[6].y, g_VertexNormalArray[6].z
  printf "    i=(%d,%d,%d)  16.16=(%g,%g,%g)  hex=(0x%08x,0x%08x,0x%08x)\n", *(int*)&g_VertexNormalArray[6].x, *(int*)&g_VertexNormalArray[6].y, *(int*)&g_VertexNormalArray[6].z, *(int*)&g_VertexNormalArray[6].x/65536.0, *(int*)&g_VertexNormalArray[6].y/65536.0, *(int*)&g_VertexNormalArray[6].z/65536.0, *(int*)&g_VertexNormalArray[6].x, *(int*)&g_VertexNormalArray[6].y, *(int*)&g_VertexNormalArray[6].z
  printf "v9  f=(%g,%g,%g)\n", g_VertexNormalArray[9].x, g_VertexNormalArray[9].y, g_VertexNormalArray[9].z
  printf "    i=(%d,%d,%d)  16.16=(%g,%g,%g)  hex=(0x%08x,0x%08x,0x%08x)\n", *(int*)&g_VertexNormalArray[9].x, *(int*)&g_VertexNormalArray[9].y, *(int*)&g_VertexNormalArray[9].z, *(int*)&g_VertexNormalArray[9].x/65536.0, *(int*)&g_VertexNormalArray[9].y/65536.0, *(int*)&g_VertexNormalArray[9].z/65536.0, *(int*)&g_VertexNormalArray[9].x, *(int*)&g_VertexNormalArray[9].y, *(int*)&g_VertexNormalArray[9].z
  printf "    tv6=(%d,%d,%d) tv9=(%d,%d,%d)\n", g_TransformedVertexArray[6].x, g_TransformedVertexArray[6].y, g_TransformedVertexArray[6].z, g_TransformedVertexArray[9].x, g_TransformedVertexArray[9].y, g_TransformedVertexArray[9].z
end
cont
end

printf "normal-bits probe armed\n"
