// Name: core_marquee.cpp_CMarquee_renderLightBulb_FUN_004e7ff0
// Address: 004e7ff0
// Address Range: [[004e7ff0, 004e8176]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0(CMarquee *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0(CMarquee *this_ptr,CVector3f *position)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  SMRGLHeaderPrimitive aSStack_44 [4];
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar4 = 0;
  iStack_1c = (int)ROUND(*(float *)position * _DAT_005f9b50);
  iStack_18 = (int)ROUND(*(float *)&position->field_0x4 * _DAT_005f9b50);
  iStack_14 = (int)ROUND(*(float *)&position->field_0x8 * _DAT_005f9b50);
  engine_special_cpp_FUN_0055d9ec(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_1c);
  this_ptr_00 = DAT_0060b280;
  puVar2 = *(uint **)DAT_0060b280;
  puVar3 = *(uint **)DAT_0060b280 + 0xc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = *(uint **)this_ptr_00;
  puVar3 = *(uint **)this_ptr_00 + 0x18;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = *(uint **)this_ptr_00;
  puVar3 = *(uint **)this_ptr_00 + 0x24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  **(int **)this_ptr_00 = **(int **)this_ptr_00 + 0x80;
  *(int *)(*(int *)this_ptr_00 + 4) = *(int *)(*(int *)this_ptr_00 + 4) + 0x80;
  *(int *)(*(int *)this_ptr_00 + 0x30) = *(int *)(*(int *)this_ptr_00 + 0x30) + -0x80;
  *(int *)(*(int *)this_ptr_00 + 0x34) = *(int *)(*(int *)this_ptr_00 + 0x34) + 0x80;
  *(int *)(*(int *)this_ptr_00 + 0x60) = *(int *)(*(int *)this_ptr_00 + 0x60) + -0x80;
  *(int *)(*(int *)this_ptr_00 + 100) = *(int *)(*(int *)this_ptr_00 + 100) + -0x80;
  *(int *)(*(int *)this_ptr_00 + 0x90) = *(int *)(*(int *)this_ptr_00 + 0x90) + 0x80;
  *(int *)(*(int *)this_ptr_00 + 0x94) = *(int *)(*(int *)this_ptr_00 + 0x94) + -0x80;
  *(uint *)(*(int *)this_ptr_00 + 0x10) = 0x80000000;
  *(uint *)(*(int *)this_ptr_00 + 0x40) = 0x80000000;
  *(uint *)(*(int *)this_ptr_00 + 0x70) = 0x80000000;
  *(uint *)(*(int *)this_ptr_00 + 0xa0) = 0x80000000;
  *(uint *)(*(int *)this_ptr_00 + 0x18) = 0x80000;
  *(uint *)(*(int *)this_ptr_00 + 0x1c) = 0xf80000;
  *(uint *)(*(int *)this_ptr_00 + 0x48) = 0xf80000;
  *(uint *)(*(int *)this_ptr_00 + 0x4c) = 0xf80000;
  *(uint *)(*(int *)this_ptr_00 + 0x78) = 0xf80000;
  *(uint *)(*(int *)this_ptr_00 + 0x7c) = 0x80000;
  *(uint *)(*(int *)this_ptr_00 + 0xa8) = 0x80000;
  *(uint *)(*(int *)this_ptr_00 + 0xac) = 0x80000;
  uStack_40 = 4;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_2c = 0;
  uStack_20 = 3;
  uStack_28 = 1;
  uStack_24 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(this_ptr_00,aSStack_44,99);
  return;
}
