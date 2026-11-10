// Name: core_basicene.cpp_CBasicEnemy_startBurn_FUN_005a0270
// Address: 005a0270
// Address Range: [[005a0270, 005a0378]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_startBurn_FUN_005a0270(CBasicEnemy *this_ptr,CVector3f *direction,float strength)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_startBurn_FUN_005a0270(CBasicEnemy *this_ptr,CVector3f *direction,float strength)

{
  CBasicEnemy *pCVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(this_ptr + 0x11348) == 0) {
    return;
  }
  pCVar1 = this_ptr + 0x10af8;
  iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(pCVar1,&DAT_005efb55);
  if (iVar3 == 0) {
    uVar4 = unkaddr_0059d350_cpp_FUN_0059db70(pCVar1);
    unkaddr_0059d350_cpp_FUN_0059d7f0(pCVar1,"BurnComplete",uVar4);
  }
  unkaddr_0059d350_cpp_FUN_0059d8e0(this_ptr + 0x10af8,&DAT_005efb67);
  *(float *)(this_ptr + 0x11430) = strength;
  if ((CVector3f *)(this_ptr + 0x11434) != direction) {
    ((CVector3f *)(this_ptr + 0x11434))->x = direction->x;
    *(float *)(this_ptr + 0x11438) = direction->y;
    *(float *)(this_ptr + 0x1143c) = direction->z;
  }
  pCVar1 = this_ptr + 0x11434;
  *(uint *)(this_ptr + 0x11438) = 0;
  fVar2 = SQRT(*(float *)(this_ptr + 0x1143c) * *(float *)(this_ptr + 0x1143c) +
               *(float *)pCVar1 * *(float *)pCVar1 +
               *(float *)(this_ptr + 0x11438) * *(float *)(this_ptr + 0x11438));
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    *(float *)pCVar1 = *(float *)pCVar1 * fVar2;
    *(float *)(this_ptr + 0x11438) = *(float *)(this_ptr + 0x11438) * fVar2;
    *(float *)(this_ptr + 0x1143c) = *(float *)(this_ptr + 0x1143c) * fVar2;
    return;
  }
  *(uint *)(this_ptr + 0x1143c) = 0;
  *(uint *)(this_ptr + 0x11438) = *(uint *)(this_ptr + 0x1143c);
  *(float *)pCVar1 = *(float *)(this_ptr + 0x11438);
  return;
}
