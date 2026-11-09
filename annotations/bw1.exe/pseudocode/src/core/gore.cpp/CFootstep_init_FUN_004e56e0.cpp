// Name: core_gore.cpp_CFootstep_init_FUN_004e56e0
// Address: 004e56e0
// Address Range: [[004e56e0, 004e5856]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_init_FUN_004e56e0(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CFootstep_init_FUN_004e56e0(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,EBloodType blood_type)

{
  float fVar1;
  int iVar2;
  byte *puVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_18;
  
  iVar2 = 0;
  pfVar4 = (float *)&this_ptr->field_0x8;
  do {
    fVar5 = (float10)fsin((float10)*(float *)((int)orientation + 4));
    fVar6 = (float10)fcos((float10)*(float *)((int)orientation + 4));
    fVar5 = fVar5 * (float10)_DAT_005e4115;
    fVar6 = fVar6 * (float10)_DAT_005e4115;
    local_40 = (float)(fVar5 * (float10)*(float *)((int)&DAT_0061ee1c + iVar2) +
                       -fVar6 * (float10)*(float *)((int)&DAT_0061ee0c + iVar2) +
                      (float10)*(float *)position);
    local_38 = (float)(fVar6 * (float10)*(float *)((int)&DAT_0061ee1c + iVar2) +
                      fVar5 * (float10)*(float *)((int)&DAT_0061ee0c + iVar2)) +
               *(float *)&position->field_0x8;
    if (&local_34 != &local_40) {
      local_34 = local_40;
      local_30 = *(float *)&position->field_0x4;
      local_2c = local_38;
    }
    local_3c = *(float *)&position->field_0x4 + 1.0;
    local_30 = local_30 + _DAT_005e4125;
    local_18 = (float)core_dtrace_cpp_FUN_0048b150
                                (&g_CDemonRaytraceInstance,&local_40,&local_34,0,0);
    fVar1 = (local_3c - local_18 * (float)_DAT_005e411d) + _DAT_005e4129;
    if (pfVar4 != &local_40) {
      *pfVar4 = local_40;
      pfVar4[1] = fVar1;
      pfVar4[2] = local_38;
    }
    iVar2 = iVar2 + 4;
    pfVar4 = pfVar4 + 3;
  } while (iVar2 != 0x10);
  puVar3 = &this_ptr->field_0xc;
  do {
    if ((float)_DAT_005e4115 < ABS(*(float *)&this_ptr->field_0xc - *(float *)(puVar3 + 0xc))) {
      *(uint *)(puVar3 + 0xc) = *(uint *)&this_ptr->field_0xc;
    }
    puVar3 = puVar3 + 0xc;
  } while (puVar3 != &this_ptr->field_0x30);
  *(uint *)this_ptr = 0;
  *(int *)&this_ptr->field_0x38 = alpha;
  *(int *)&this_ptr->field_0x3c = is_bloody;
  *(EBloodType *)&this_ptr->field_0x4 = blood_type;
  return;
}
