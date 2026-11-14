// Name: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409af0
// Address: 00409af0
// Address Range: [[00409af0, 00409dae]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409af0(CDemonActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409af0(CDemonActor *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CVector3f *pCVar6;
  CVector3f aCStack_9c [10];
  CVector3i CStack_24;
  int iStack_18;
  uint uStack_14;
  
  __arrinit(aCStack_9c,10,&g_CVectorTypeInfo);
  iStack_18 = (*((this_ptr->vtable)._ub)->getTargetPoints)(this_ptr,aCStack_9c);
  pCVar6 = aCStack_9c;
  iVar4 = 0;
  if (0 < iStack_18) {
    do {
      uStack_14 = (uint)DAT_01c34510;
      CStack_24.x = (int)ROUND(pCVar6->x * _DAT_005f2160);
      CStack_24.y = (int)ROUND(*(float *)((int)pCVar6 + 4) * _DAT_005f2160);
      CStack_24.z = (int)ROUND(*(float *)((int)pCVar6 + 8) * _DAT_005f2160);
      engine_special_cpp_FUN_0055d723((SProjectedVertex *)(*0x01BA5C50 + 0xea5d0),&CStack_24);
      iVar5 = *0x01BA5C50;
      if ((*(byte *)(iVar5 + 0xea5e3) & 0x80) == 0) {
        iVar3 = *(int *)(iVar5 + 0xea5e0) >> 0x10;
        _DAT_01c35e60 = uStack_14;
        iVar5 = *(int *)(iVar5 + 0xea5e4) >> 0x10;
        if ((((-1 < iVar3) && (-1 < iVar5)) && (iVar3 < DAT_006141b8)) && (iVar5 < DAT_006141bc)) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + -1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_006141b8 && (iVar2 < DAT_006141bc)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_006141b8 && (iVar2 < DAT_006141bc)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + -1;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_006141b8)) && (iVar2 < DAT_006141bc)) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_006141b8 && (iVar2 < DAT_006141bc)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_006141b8 && (iVar2 < DAT_006141bc)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + 2;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_006141b8)) && (iVar2 < DAT_006141bc)) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_006141b8 && (iVar2 < DAT_006141bc)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar3 = iVar3 + 2;
        iVar5 = iVar5 + 2;
        if (((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < DAT_006141b8 && (iVar5 < DAT_006141bc)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        }
      }
      iVar4 = iVar4 + 1;
      pCVar6 = (CVector3f *)((int)pCVar6 + 0xc);
    } while (iVar4 < iStack_18);
  }
  return;
}
