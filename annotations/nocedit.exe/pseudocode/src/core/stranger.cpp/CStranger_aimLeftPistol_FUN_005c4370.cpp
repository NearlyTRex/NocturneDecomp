// Name: core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370
// Address: 005c4370
// Address Range: [[005c4370, 005c48ae]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_005c4370(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_005c4370(CStranger *this_ptr)

{
  float fVar1;
  int bone_index;
  double dVar2;
  float fStack_b8;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (this_ptr->weapon == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 0x10c0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStranger::aimLeftPistol - no weapon?");
  }
  (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).canWalk)
            ((CCharacter *)this_ptr->weapon);
  bone_index = INT_03f6bad8;
  fStack_20 = -1.3089969;
  fStack_28 = 0.5235988;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(this_ptr->weapon,&CStack_a4,&CStack_98);
  CStack_38.x = 0.0;
  CStack_38.y = 0.0;
  CStack_38.z = 1000.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(this_ptr->weapon,&CStack_80,&CStack_38);
  CStack_8c.x = CStack_a4.x + CStack_80.x;
  CStack_8c.y = CStack_a4.y + CStack_80.y;
  CStack_8c.z = CStack_a4.z + CStack_80.z;
  core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270
            (g_CDemonSetPtr,1.4013e-45,3.57331e-43,0.0,0.0);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr->weapon);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  fStack_b8 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_a4,&CStack_8c)
  ;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if ((fStack_b8 < 0.0) || (1.0 < fStack_b8)) {
    fStack_b8 = 1.0;
  }
  fStack_44 = CStack_80.x * fStack_b8;
  fStack_40 = CStack_80.y * fStack_b8;
  fStack_3c = CStack_80.z * fStack_b8;
  CStack_b0.x = CStack_a4.x + fStack_44;
  CStack_b0.y = CStack_a4.y + fStack_40;
  CStack_b0.z = CStack_a4.z + fStack_3c;
  if (&CStack_8c != &CStack_b0) {
    CStack_8c.x = CStack_b0.x;
    CStack_8c.y = CStack_b0.y;
    CStack_8c.z = CStack_b0.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
            (&(this_ptr->base).base.model,&CStack_68,bone_index);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)this_ptr,&CStack_5c,&CStack_8c);
  CStack_74.x = CStack_5c.x - CStack_68.x;
  CStack_74.y = CStack_5c.y - CStack_68.y;
  CStack_74.z = CStack_5c.z - CStack_68.z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_50,&CStack_74);
  fVar1 = SQRT(CStack_74.z * CStack_74.z + CStack_74.x * CStack_74.x + CStack_74.y * CStack_74.y);
  if ((float)0.01 < fVar1) {
    fStack_1c = -CStack_98.x;
    if ((((float)0.01 <= fVar1) &&
        (dVar2 = (double)(SQRT(fVar1 * fVar1 - fStack_1c * fStack_1c) / fVar1), dVar2 < 1.0)) &&
       (0.0 <= dVar2)) {
      dVar2 = acos(dVar2);
      fStack_28 = (float)dVar2;
      if (0.0 <= fStack_20) {
        CStack_50.x = CStack_50.x + fStack_28;
      }
      else {
        CStack_50.x = CStack_50.x - fStack_28;
      }
      CStack_50.x = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(CStack_50.x);
      fStack_14 = CStack_50.x;
    }
    if ((((float)0.01 <= fVar1) &&
        (dVar2 = (double)(SQRT(fVar1 * fVar1 - CStack_98.y * CStack_98.y) / fVar1), dVar2 < 1.0)) &&
       (0.0 <= dVar2)) {
      dVar2 = acos(dVar2);
      CStack_38.z = (float)dVar2;
      if (0.0 <= CStack_98.x) {
        CStack_5c.z = CStack_5c.z + CStack_38.z;
      }
      else {
        CStack_5c.z = CStack_5c.z - CStack_38.z;
      }
      core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(CStack_5c.z);
    }
  }
  fStack_14 = CStack_50.y;
  fStack_18 = CStack_50.x;
  if (CStack_50.x < -1.047198f) {
    fStack_18 = -1.047198f;
  }
  if (1.22173f < fStack_18) {
    fStack_18 = 1.22173f;
  }
  if (CStack_50.y < fStack_20) {
    fStack_14 = fStack_20;
  }
  if (fStack_28 < fStack_14) {
    fStack_14 = fStack_28;
  }
  this_ptr->unk3[0x18] = '\0';
  this_ptr->unk3[0x19] = '\0';
  this_ptr->unk3[0x1a] = -0x80;
  this_ptr->unk3[0x1b] = '?';
  *(float *)(this_ptr->unk3 + 0x10) = fStack_14;
  *(float *)(this_ptr->unk3 + 0xc) = fStack_18;
  *(float *)(this_ptr->unk3 + 8) = fStack_14;
  *(float *)(this_ptr->unk3 + 4) = fStack_18;
  return;
}
