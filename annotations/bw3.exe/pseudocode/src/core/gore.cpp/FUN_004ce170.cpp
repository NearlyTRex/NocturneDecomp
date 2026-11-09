// Name: core_gore.cpp_FUN_004ce170
// Address: 004ce170
// Address Range: [[004ce170, 004ce300]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004ce170(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_FUN_004ce170(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,EBloodType blood_type)

{
  CFootstep *pCVar1;
  float fVar2;
  int iVar3;
  byte *puVar4;
  float10 fVar5;
  float10 fVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_18;
  
  iVar3 = 0;
  pCVar1 = this_ptr;
  do {
    puVar4 = &pCVar1->field_0xc;
    fVar5 = (float10)fsin((float10)*(float *)((int)orientation + 4));
    fVar6 = (float10)fcos((float10)*(float *)((int)orientation + 4));
    fVar5 = fVar5 * (float10)_DAT_005c4739;
    fVar6 = fVar6 * (float10)_DAT_005c4739;
    local_34 = (float)(fVar5 * (float10)*(float *)((int)&DAT_005ffe9c + iVar3) +
                       -fVar6 * (float10)*(float *)((int)&DAT_005ffe8c + iVar3) +
                      (float10)*(float *)position);
    local_2c = (float)(fVar6 * (float10)*(float *)((int)&DAT_005ffe9c + iVar3) +
                      fVar5 * (float10)*(float *)((int)&DAT_005ffe8c + iVar3)) +
               *(float *)&position->field_0x8;
    if (&local_40 != &local_34) {
      local_40 = local_34;
      local_3c = *(float *)&position->field_0x4;
      local_38 = local_2c;
    }
    local_30 = *(float *)&position->field_0x4 + 1.0;
    local_3c = local_3c + _DAT_005c4749;
    local_18 = (float)core_dtrace_cpp_FUN_00473cd0
                                (&g_CDemonRaytraceInstance,&local_34,&local_40,0,0);
    fVar2 = (local_30 - local_18 * (float)_DAT_005c4741) + _DAT_005c474d;
    if ((float *)puVar4 != &local_34) {
      *(float *)puVar4 = local_34;
      *(float *)&pCVar1->field_0x10 = fVar2;
      *(float *)&pCVar1->field_0x14 = local_2c;
    }
    iVar3 = iVar3 + 4;
    pCVar1 = (CFootstep *)puVar4;
  } while (iVar3 != 0x10);
  puVar4 = &this_ptr->field_0xc;
  do {
    if ((float)_DAT_005c4739 < ABS(*(float *)&this_ptr->field_0x10 - *(float *)(puVar4 + 0x10))) {
      *(uint *)(puVar4 + 0x10) = *(uint *)&this_ptr->field_0x10;
    }
    puVar4 = puVar4 + 0xc;
  } while (puVar4 != &this_ptr->field_0x30);
  *(uint *)this_ptr = 0;
  *(int *)&this_ptr->field_0x3c = alpha;
  *(int *)&this_ptr->field_0x40 = is_bloody;
  *(EBloodType *)&this_ptr->field_0x4 = blood_type;
  *(uint *)&this_ptr->field_0x8 =
       *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
