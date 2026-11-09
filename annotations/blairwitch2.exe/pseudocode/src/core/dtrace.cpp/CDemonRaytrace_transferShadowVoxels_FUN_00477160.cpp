// Name: core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_00477160
// Address: 00477160
// Address Range: [[00477160, 0047742a]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_00477160(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_00477160(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1068 [1000];
  float local_c0;
  float local_bc;
  float local_b8;
  CMatrix3x3f local_b4 [40];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c [5];
  float local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  CVector3f local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar3 = 0;
  core_dirmat_cpp_FUN_00449280(local_b4,rotation);
  local_80 = *(float *)end - *(float *)start;
  local_7c[0] = *(float *)&end->field_0x4 - *(float *)&start->field_0x4;
  local_7c[1] = *(float *)&end->field_0x8 - *(float *)&start->field_0x8;
  local_5c = *(float *)end - *(float *)start;
  local_7c[(uint)bVar3 * -2 + 9] = local_7c[(uint)bVar3 * -2];
  local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
       local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  fVar4 = (float10)local_58 / (float10)*(float *)&this_ptr->field_0x38;
  fVar5 = (float10)local_54 / (float10)*(float *)&this_ptr->field_0x3c;
  fVar6 = (float10)_DAT_005d1d43;
  fVar7 = (float10)1 + ((float10)local_5c / (float10)*(float *)&this_ptr->field_0x34) * fVar6;
  round();
  local_2c = (int)ROUND(fVar7);
  fVar7 = (float10)local_5c / (float10)local_2c;
  fVar4 = (float10)1 + fVar4 * fVar6;
  local_18 = local_2c;
  round();
  local_28 = (int)ROUND(fVar4);
  fVar4 = (float10)local_58 / (float10)local_28;
  fVar5 = (float10)1 + fVar5 * fVar6;
  local_18 = local_28;
  round();
  local_20 = (int)ROUND(fVar5);
  local_b8 = local_54 / (float)local_20;
  local_24 = 0;
  local_c0 = (float)fVar7;
  local_bc = (float)fVar4;
  if (0 < local_2c) {
    do {
      local_1c = 0;
      if (0 < local_28) {
        do {
          iVar2 = 0;
          if (0 < local_20) {
            do {
              fVar1 = (float)_DAT_005d1d4b;
              local_8c = local_c0 * fVar1 + (float)local_24 * local_c0 + *(float *)start;
              local_88 = local_bc * fVar1 + (float)local_1c * local_bc + *(float *)&start->field_0x4
              ;
              local_84 = local_b8 * fVar1 + (float)iVar2 * local_b8 + *(float *)&start->field_0x8;
              local_18 = iVar2;
              core_dirmat_cpp_FUN_00449530(local_b4,&local_8c);
              local_44 = local_68;
              local_7c[(uint)bVar3 * -2 + 0xf] = local_7c[(uint)bVar3 * -2 + 6];
              local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
                   local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
              local_50 = local_44 + *(float *)offset;
              local_4c = local_40 + *(float *)&offset->field_0x4;
              local_48 = local_3c + *(float *)&offset->field_0x8;
              local_7c[2] = local_44 + *(float *)offset;
              local_7c[(uint)bVar3 * -2 + 3] = local_7c[(uint)bVar3 * -2 + 0xc];
              local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
                   local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
              if (&local_38 != (CVector3f *)(local_7c + 2)) {
                local_38._0_4_ = local_7c[2];
                local_38._4_4_ = local_7c[3];
                local_38._8_4_ = local_7c[4];
              }
              core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_00477550
                        (this_ptr,&local_38);
              iVar2 = iVar2 + 1;
            } while (iVar2 < local_20);
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_28);
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_2c);
  }
  return;
}
