// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00
// Address: 00448b00
// Address Range: [[00448b00, 00448c89]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00(CDemonGlobe *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00(CDemonGlobe *this_ptr)

{
  CDemonRenderer *pCVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  int iVar3;
  float10 fVar4;
  SMRGLHeaderPrimitive *prim;
  SMRGLHeaderPrimitive SStack_50;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3i CStack_1c;
  
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (0x01BA5C50,&this_ptr->position);
  iVar2 = 0;
  do {
    fStack_28 = (float)*(int *)((int)&DAT_0060a0fc + iVar3) * (float)_DAT_005cf01a *
                this_ptr->radius;
    fStack_24 = (float)*(int *)((int)&DAT_0060a100 + iVar3) * (float)_DAT_005cf01a *
                this_ptr->radius;
    fStack_20 = (float)*(int *)((int)&DAT_0060a104 + iVar3) * (float)_DAT_005cf01a *
                this_ptr->radius;
    CStack_1c.x = (int)ROUND(fStack_28 * _DAT_005f5020);
    CStack_1c.y = (int)ROUND(fStack_24 * _DAT_005f5020);
    CStack_1c.z = (int)ROUND(fStack_20 * _DAT_005f5020);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(0x01BA5C50->vertex_buffer_ptr + iVar2),&CStack_1c);
    pCVar1 = 0x01BA5C50;
    *(uint *)(0x01BA5C50->vertex_buffer_ptr + iVar2 + 0x18) = 0x800000;
    *(uint *)(pCVar1->vertex_buffer_ptr + iVar2 + 0x1c) = 0x800000;
    *(uint *)(pCVar1->vertex_buffer_ptr + iVar2 + 0x2c) = 0x8000;
    *(uint *)(pCVar1->vertex_buffer_ptr + iVar2 + 0x20) = 0xffff;
    *(uint *)(pCVar1->vertex_buffer_ptr + iVar2 + 0x24) = 0xffff;
    iVar3 = iVar3 + 0xc;
    *(uint *)(pCVar1->vertex_buffer_ptr + iVar2 + 0x28) = 0xffff;
    iVar2 = iVar2 + 0x30;
  } while (iVar3 != 0x2e8);
  engine_texture_cpp_FUN_00574e00(0x60a0e4);
  iVar2 = 0;
  do {
    SStack_50.base.count = *(int *)((int)&DAT_0060a3e4 + iVar2);
    SStack_50.surface_normal.A = *(UIntegerFloat *)((int)&DAT_0060a3e8 + iVar2);
    SStack_50.surface_normal.B = *(UIntegerFloat *)((int)&DAT_0060a3ec + iVar2);
    SStack_50.surface_normal.C = *(UIntegerFloat *)((int)&DAT_0060a3f0 + iVar2);
    uStack_38 = *(uint *)((int)&DAT_0060a3f8 + iVar2);
    fVar4 = (float10)*(int *)((int)&DAT_0060a3f4 + iVar2) * (float10)this_ptr->radius;
    uStack_34 = *(uint *)((int)&DAT_0060a3fc + iVar2);
    uStack_30 = *(uint *)((int)&DAT_0060a400 + iVar2);
    uStack_2c = *(uint *)((int)&DAT_0060a404 + iVar2);
    iVar2 = iVar2 + 0x24;
    prim = &SStack_50;
    round();
    SStack_50.surface_normal.D.i = (int)ROUND(fVar4);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(this_ptr_00,prim);
  } while (iVar2 != 0xbd0);
  return;
}
