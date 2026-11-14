// Name: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409980
// Address: 00409980
// Address Range: [[00409980, 00409c3e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409980(CDemonActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409980(CDemonActor *this_ptr)

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
      uStack_14 = (uint)DAT_01c69c70;
      CStack_24.x = (int)ROUND(pCVar6->x * _DAT_005dafd0);
      CStack_24.y = (int)ROUND(*(float *)((int)pCVar6 + 4) * _DAT_005dafd0);
      CStack_24.z = (int)ROUND(*(float *)((int)pCVar6 + 8) * _DAT_005dafd0);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*0x01BDD7E4 + 0x124f50),&CStack_24);
      iVar5 = *0x01BDD7E4;
      if ((*(byte *)(iVar5 + 0x124f63) & 0x80) == 0) {
        iVar3 = *(int *)(iVar5 + 0x124f60) >> 0x10;
        _DAT_01c6b5c0 = uStack_14;
        iVar5 = *(int *)(iVar5 + 0x124f64) >> 0x10;
        if ((((-1 < iVar3) && (-1 < iVar5)) && (iVar3 < DAT_005fba18)) && (iVar5 < DAT_005fba1c)) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + -1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005fba18 && (iVar2 < DAT_005fba1c)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005fba18 && (iVar2 < DAT_005fba1c)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + -1;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_005fba18)) && (iVar2 < DAT_005fba1c)) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005fba18 && (iVar2 < DAT_005fba1c)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005fba18 && (iVar2 < DAT_005fba1c)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + 2;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_005fba18)) && (iVar2 < DAT_005fba1c)) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005fba18 && (iVar2 < DAT_005fba1c)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar3 = iVar3 + 2;
        iVar5 = iVar5 + 2;
        if (((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < DAT_005fba18 && (iVar5 < DAT_005fba1c)))) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        }
      }
      iVar4 = iVar4 + 1;
      pCVar6 = (CVector3f *)((int)pCVar6 + 0xc);
    } while (iVar4 < iStack_18);
  }
  return;
}
