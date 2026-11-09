// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00477370
// Address: 00477370
// Address Range: [[00477370, 00477529]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00477370(CDemonRaytrace *this_ptr,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00477370(CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  int iVar1;
  CDemonCube *pCVar2;
  float *extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_2c;
  int iStack_1c;
  int iStack_18;
  
  fVar3 = ((float10)*(float *)world_position - (float10)*(float *)&this_ptr->field_0x10) /
          (float10)*(float *)&this_ptr->field_0x28;
  fVar4 = ((float10)*(float *)&world_position->field_0x4 - (float10)*(float *)&this_ptr->field_0x14)
          / (float10)*(float *)&this_ptr->field_0x2c;
  fVar5 = ((float10)*(float *)&world_position->field_0x8 - (float10)*(float *)&this_ptr->field_0x18)
          / (float10)*(float *)&this_ptr->field_0x30;
  round();
  fVar6 = (float10)_DAT_005bcbd9;
  fVar7 = ((float10)*extraout_EDX -
          ((float10)(int)ROUND(fVar3) * (float10)*(float *)&this_ptr->field_0x28 +
          (float10)*(float *)&this_ptr->field_0x10)) /
          ((float10)*(float *)&this_ptr->field_0x28 * fVar6);
  round();
  iStack_1c = (int)ROUND(fVar4);
  fVar4 = ((float10)*(float *)(extraout_EDX_00 + 4) -
          ((float10)iStack_1c * (float10)*(float *)&this_ptr->field_0x2c +
          (float10)*(float *)&this_ptr->field_0x14)) /
          ((float10)*(float *)&this_ptr->field_0x2c * fVar6);
  round();
  fVar6 = ((float10)*(float *)(extraout_EDX_01 + 8) -
          ((float10)(int)ROUND(fVar5) * (float10)*(float *)&this_ptr->field_0x30 +
          (float10)*(float *)&this_ptr->field_0x18)) /
          ((float10)*(float *)&this_ptr->field_0x30 * fVar6);
  round();
  round();
  iStack_18 = (int)ROUND(fVar4);
  round();
  iVar1 = (int)ROUND(fVar6);
  if (((((extraout_EDX_02 < 0) || (iStack_18 < 0)) || (iVar1 < 0)) ||
      ((7 < extraout_EDX_02 || (7 < iStack_18)))) || (7 < iVar1)) {
    fStack_2c = -999.0;
  }
  else {
    while( true ) {
      pCVar2 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00473b60
                         (this_ptr,(int)ROUND(fVar3),iStack_1c,(int)ROUND(fVar5));
      if (pCVar2 == (CDemonCube *)0x0) break;
      if ((*(int *)pCVar2 != 0) &&
         ((*(byte *)(iStack_18 + iVar1 * 8 + *(int *)pCVar2) & (&DAT_005fb0e8)[(int)ROUND(fVar7)])
          != 0)) {
        return (float)iStack_18 * *(float *)&this_ptr->field_0x2c * _DAT_005bcbd9 +
               (float)iStack_1c * *(float *)&this_ptr->field_0x2c + *(float *)&this_ptr->field_0x14;
      }
      iStack_18 = iStack_18 + -1;
      if (iStack_18 < 0) {
        iStack_1c = iStack_1c + -1;
        iStack_18 = 7;
      }
    }
    fStack_2c = -999.9;
  }
  return fStack_2c;
}
