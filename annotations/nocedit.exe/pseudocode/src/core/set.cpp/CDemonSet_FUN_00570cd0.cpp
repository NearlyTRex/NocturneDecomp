// Name: core_set.cpp_CDemonSet_FUN_00570cd0
// Address: 00570cd0
// Address Range: [[00570cd0, 00570d58]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570cd0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570cd0(CDemonSet *this_ptr)

{
  float fVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  CVector3i local_10;
  
  if (in_stack_00000008 == (float *)0x0) {
    this_ptr->mirror_render_param1 = 0;
    return;
  }
  local_10.x = (int)ROUND(*in_stack_00000008 * 256f);
  local_10.y = (int)ROUND(in_stack_00000008[1] * 256f);
  local_10.z = (int)ROUND(in_stack_00000008[2] * 256f);
  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(this_ptr,&local_10,(CVector3i *)0x0,0,0);
  fVar1 = g_RenderVertexBuffer[0].light;
  this_ptr->mirror_render_param1 = 1;
  fVar2 = g_RenderVertexBuffer[0].fog;
  this_ptr->mirror_render_param2 = (int)fVar1;
  this_ptr->mirror_render_param4 = (int)fVar2;
  this_ptr->mirror_render_param3 = g_RenderVertexBuffer[0].color;
  return;
}
