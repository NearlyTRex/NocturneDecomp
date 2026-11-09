// Name: core_setdir.cpp_testCameraVisibility_FUN_00538be0
// Address: 00538be0
// Address Range: [[00538be0, 00538d08]]
// Convention: __cdecl
// Signature: float __cdecl core_setdir_cpp_testCameraVisibility_FUN_00538be0(CDemonActor *param_1,CVector3i *param_2,SMRGLHeaderPrimitive *param_3,int param_4,int param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_setdir_cpp_testCameraVisibility_FUN_00538be0(CDemonActor *param_1,CVector3i *param_2,SMRGLHeaderPrimitive *param_3,int param_4,int param_5,uint param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  CZThumb *this_ptr;
  float fStack_20;
  
  if ((*(int *)(param_5 + 0x1a0) != 0) &&
     (fVar4 = *(float *)(param_5 + 0x100) - *(float *)&param_1->field_0x20,
     fVar2 = *(float *)(param_5 + 0x104) - *(float *)&param_1->field_0x24,
     fVar1 = *(float *)(param_5 + 0x108) - *(float *)&param_1->field_0x28,
     fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 <= _DAT_005fb354 * _DAT_005fb354)) {
    iVar3 = core_setutil_cpp_FUN_0053ae20(param_5,&param_1->field_0x20,param_6);
    fStack_20 = 0.0;
    if (iVar3 != 0) {
      this_ptr = g_CZThumbPool + param_4 * 6;
      if (*(int *)(param_5 + 0x140) == 0) {
        fVar4 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_005386e0
                          (this_ptr,param_1,param_2,param_3,1);
        return fVar4;
      }
      fStack_20 = 0.0;
      do {
        fVar4 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_005386e0
                          (this_ptr,param_1,param_2,param_3,0);
        fStack_20 = fVar4 + fStack_20;
        this_ptr = this_ptr + 1;
      } while (this_ptr != g_CZThumbPool + param_4 * 6 + 6);
    }
    return fStack_20;
  }
  return 0.0;
}
