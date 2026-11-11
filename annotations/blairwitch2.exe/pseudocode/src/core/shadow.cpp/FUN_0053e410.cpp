// Name: core_shadow.cpp_FUN_0053e410
// Address: 0053e410
// Address Range: [[0053e410, 0053e63f]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0053e410(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_0053e410(void)

{
  CDemonRenderer *this_ptr;
  char cVar1;
  char *in_EAX;
  char unaff_BL;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float in_stack_0000004c;
  float in_stack_00000050;
  float in_stack_00000054;
  int iStack000000ac;
  int iStack000000b0;
  int iStack000000b4;
  float fStack000000d0;
  float fStack000000d4;
  float fStack000000d8;
  float fStack00000100;
  float fStack00000104;
  float fStack00000108;
  char *pcVar2;
  
  *in_EAX = *in_EAX + (char)in_EAX;
  cVar1 = (char)in_EAX + unaff_BL;
  pcVar2 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  pcVar2[unaff_EBP] = (char)((uint)in_EAX >> 8);
  *pcVar2 = *pcVar2 + cVar1;
  fStack000000d0 = (float)in_ST2;
  fStack000000d4 = (float)in_ST1;
  fStack000000d8 = (float)in_ST0;
  if (&stack0x0000004c != &stack0x00000100) {
    in_stack_0000004c = fStack000000d0;
    in_stack_00000050 = fStack000000d4;
    in_stack_00000054 = fStack000000d8;
  }
  iStack000000ac = (int)ROUND(in_stack_0000004c * _DAT_005fb3e0);
  iStack000000b0 = (int)ROUND(in_stack_00000050 * _DAT_005fb3e0);
  iStack000000b4 = (int)ROUND(in_stack_00000054 * _DAT_005fb3e0);
  fStack00000100 = fStack000000d0;
  fStack00000104 = fStack000000d4;
  fStack00000108 = fStack000000d8;
  engine_special_cpp_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)&stack0x000000ac);
  this_ptr = DAT_0060b280;
  DAT_0060b280->vertex_buffer_ptr->r = 0xffff;
  this_ptr->vertex_buffer_ptr->g = 0;
  this_ptr->vertex_buffer_ptr->b = 0;
  this_ptr->vertex_buffer_ptr[1].r = 0xffff;
  this_ptr->vertex_buffer_ptr[1].g = 0;
  this_ptr->vertex_buffer_ptr[1].b = 0;
  this_ptr->vertex_buffer_ptr[2].r = 0xffff;
  this_ptr->vertex_buffer_ptr[2].g = 0;
  this_ptr->vertex_buffer_ptr[2].b = 0;
  this_ptr->vertex_buffer_ptr[3].r = 0xffff;
  this_ptr->vertex_buffer_ptr[3].g = 0;
  this_ptr->vertex_buffer_ptr[3].b = 0;
  this_ptr->vertex_buffer_ptr->a = 0x4000;
  this_ptr->vertex_buffer_ptr[1].a = 0x4000;
  this_ptr->vertex_buffer_ptr[2].a = 0x4000;
  this_ptr->vertex_buffer_ptr[3].a = 0x4000;
  this_ptr->vertex_buffer_ptr->u = 0x80000;
  this_ptr->vertex_buffer_ptr->v = 0xf80000;
  this_ptr->vertex_buffer_ptr[1].u = 0xf80000;
  this_ptr->vertex_buffer_ptr[1].v = 0xf80000;
  this_ptr->vertex_buffer_ptr[2].u = 0xf80000;
  this_ptr->vertex_buffer_ptr[2].v = 0x80000;
  this_ptr->vertex_buffer_ptr[3].u = 0x80000;
  this_ptr->vertex_buffer_ptr[3].v = 0x80000;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (this_ptr,(SMRGLTextureBasic *)0x61bb70);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
            (DAT_0060b280,(SMRGLHeaderPrimitive *)&stack0x00000000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  return;
}
