// Name: core_demnfolk.cpp_getObjectHeightScale_FUN_00458630
// Address: 00458630
// Address Range: [[00458630, 004586c3]]
// Convention: __cdecl
// Signature: float __cdecl core_demnfolk_cpp_getObjectHeightScale_FUN_00458630(CDemonActor *actor)

#include "nocturne.h"

float __cdecl core_demnfolk_cpp_getObjectHeightScale_FUN_00458630(CDemonActor *actor)

{
  int iVar1;
  float unaff_ESI;
  uint *puVar2;
  CBoundingBox3D *unaff_EDI;
  uint *puVar3;
  byte bVar4;
  float afStackY_1000 [1002];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  
  bVar4 = 0;
  uStack_8 = 0x3f800000;
  if (actor == (CDemonActor *)0x0) {
    return 1.0;
  }
  (*((actor->vtable)._ub)->getBoundingBox)(actor,unaff_EDI);
  puVar2 = (uint *)&stack0xffffffd0;
  puVar3 = (uint *)&stack0xffffffb0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_18 = fStack_3c - fStack_48;
  fStack_14 = fStack_38 - fStack_44;
  fStack_10 = fStack_34 - fStack_40;
  fStack_c = fStack_3c - fStack_48;
  *(uint *)((int)&stack0xfffffff8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8);
  *(uint *)(&stack0xfffffffc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return unaff_ESI * (float)0.5 + 1.0;
}
