// Name: core_setutil.cpp_FUN_00542fd0
// Address: 00542fd0
// Address Range: [[00542fd0, 005430b6]]
// Convention: unknown
// Signature: void core_setutil_cpp_FUN_00542fd0(int param_1,int param_2,int param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setutil_cpp_FUN_00542fd0(int param_1,int param_2,int param_3,float param_4)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_c;
  
  fVar2 = (float10)param_1 * (float10)_DAT_005d1126 * (float10)_DAT_005d112a *
          (float10)_DAT_005d1132;
  iStack_c = param_2;
  fVar3 = (float10)fsin(fVar2);
  fVar2 = (float10)fcos(fVar2);
  fVar4 = (float10)param_4;
  fVar5 = (float10)param_2 * (float10)_DAT_005d113a * (float10)_DAT_005d112a *
          (float10)_DAT_005d1142;
  fVar6 = (float10)fcos(fVar5);
  fVar5 = (float10)fsin(fVar5);
  iStack_38 = (int)ROUND((float)(fVar3 * fVar4 * fVar6) * _DAT_005e3d18);
  iStack_34 = (int)ROUND((float)(fVar5 * fVar4) * _DAT_005e3d18);
  iStack_30 = (int)ROUND((float)(fVar2 * fVar4 * fVar6) * _DAT_005e3d18);
  param_3 = param_3 * 0x30;
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*DAT_005f2afc + param_3),(CVector3i *)&iStack_38);
  piVar1 = DAT_005f2afc;
  *(uint *)(*DAT_005f2afc + 0x18 + param_3) = 0x800000;
  *(uint *)(param_3 + 0x1c + *piVar1) = 0x800000;
  return;
}
