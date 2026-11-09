// Name: core_gore.cpp_FUN_004c9850
// Address: 004c9850
// Address Range: [[004c9850, 004c9a7f]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004c9850(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004c9850(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,EBloodType blood_type)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float afStackY_1048 [1004];
  uint uVar6;
  uint uVar7;
  CMatrix3x3f local_88 [8];
  float local_80;
  float local_74;
  float local_68;
  byte local_60 [4];
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  
  bVar3 = 0;
  if (blood_type != BLOOD_TYPE_NONE) {
    if (direction == (CVector3f *)0x0) {
      iVar2 = 0;
      if (0 < count) {
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004c9730(this_ptr,position,(CVector3f *)0x0,blood_type);
        } while (iVar2 < count);
      }
    }
    else {
      local_20 = SQRT(*(float *)&direction->field_0x8 * *(float *)&direction->field_0x8 +
                      *(float *)direction * *(float *)direction +
                      *(float *)&direction->field_0x4 * *(float *)&direction->field_0x4);
      if ((CVector3f *)&local_48 != direction) {
        local_48 = *(float *)direction;
        local_44 = *(float *)&direction->field_0x4;
        local_40 = *(float *)&direction->field_0x8;
      }
      local_24 = SQRT(local_40 * local_40 + local_48 * local_48 + local_44 * local_44);
      if (local_24 <= 0.0) {
        local_44 = 0.0;
        local_48 = 0.0;
        local_40 = 0.0;
      }
      else {
        fVar1 = 1.0 / local_24;
        local_48 = local_48 * fVar1;
        local_44 = local_44 * fVar1;
        local_40 = local_40 * fVar1;
      }
      atan2();
      fVar4 = SQRT((float10)local_48 * (float10)local_48 + (float10)local_40 * (float10)local_40);
      fVar5 = (float10)local_44;
      atan2();
      iVar2 = 0;
      local_38[1] = 0.0;
      local_38[0] = (float)fVar4;
      local_3c = (float)-fVar5;
      if (0 < count) {
        do {
          uVar7 = 0x3f490fdb;
          uVar6 = 0xbf490fdb;
          local_60 = (byte  [4])local_3c;
          local_5c[(uint)bVar3 * -2] = local_38[(uint)bVar3 * -2];
          local_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               local_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          local_18 = (float)core_actor_cpp_FUN_0040cf60(uVar6,uVar7);
          local_60 = (byte  [4])(local_18 + (float)local_60);
          local_18 = (float)core_actor_cpp_FUN_0040cf60(0xbf490fdb,0x3f490fdb);
          local_5c[0] = local_18 + local_5c[0];
          core_dirmat_cpp_FUN_00449280(local_88,(CVector3f *)local_60);
          local_60 = (byte  [4])local_80;
          local_5c[0] = local_74;
          local_5c[1] = local_68;
          core_actor_cpp_FUN_0040cf60(0xbf000000,0x3f000000);
          local_5c[2] = (float)local_60 * local_20;
          local_5c[3] = local_5c[0] * local_20;
          local_4c = local_5c[1] * local_20;
          local_38[2] = (float)local_60 * local_20;
          local_38[(uint)bVar3 * -2 + 3] = local_5c[(uint)bVar3 * -2 + 3];
          local_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
               local_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
          if ((float *)local_60 != local_38 + 2) {
            local_60 = (byte  [4])local_38[2];
            local_5c[0] = local_38[3];
            local_5c[1] = local_28;
          }
          core_gore_cpp_FUN_004c9730(this_ptr,position,(CVector3f *)local_60,blood_type);
          iVar2 = iVar2 + 1;
        } while (iVar2 < count);
      }
    }
  }
  return;
}
