// Name: core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0
// Address: 0045aae0
// Address Range: [[0045aae0, 0045ab2c]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe *this_ptr,CVector3f *position)

{
  int iVar1;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  float10 fVar2;
  float10 fVar3;
  
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  fVar2 = (float10)_DAT_005bafd1;
  fVar3 = (float10)position->x * fVar2;
  iVar1 = round();
  *extraout_ECX = (int)ROUND(fVar3);
  fVar3 = (float10)*(float *)(iVar1 + 4) * fVar2;
  iVar1 = round();
  *(int *)(extraout_ECX_00 + 4) = (int)ROUND(fVar3);
  fVar2 = fVar2 * (float10)*(float *)(iVar1 + 8);
  round();
  *(int *)(extraout_ECX_01 + 8) = (int)ROUND(fVar2);
  return;
}
