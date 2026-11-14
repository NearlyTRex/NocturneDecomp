// Name: core_frankgen.cpp_CFrankenstienMachine_process_FUN_004ac4c0
// Address: 004ac4c0
// Address Range: [[004ac4c0, 004ac533] [004ac895, 004ac8d3] [004ac9a6, 004ac9d0]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_004ac4c0(CFrankenstienMachine *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_004ac4c0(CFrankenstienMachine *this_ptr,float delta_time)

{
  CFrankenstienMachine *pCVar1;
  float fVar2;
  int iVar3;
  CBoundingBox3D *unaff_EBX;
  int iVar4;
  int unaff_EBP;
  uint *puVar5;
  CBoundingBox3D *unaff_EDI;
  uint *puVar6;
  byte bVar7;
  int unaff_retaddr;
  float afStackY_1028 [981];
  CVector3f *wind_influence;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  CVector3f CStack_24;
  CVector3f CStack_18;
  int iStack_c;
  int iStack_8;
  
  bVar7 = 0;
  _DAT_01cb0620 = this_ptr->master_frame;
  pCVar1 = (CFrankenstienMachine *)core_frankgen_cpp_findLeader_FUN_004ace60();
  if (pCVar1 == this_ptr) {
    fVar2 = delta_time * _DAT_005f71ec + this_ptr->master_frame;
    this_ptr->master_frame = fVar2;
    if (0x450FC000 <= fVar2) {
      this_ptr->master_frame = this_ptr->master_frame - 0x450FC000;
    }
  }
  else {
    this_ptr->master_frame = pCVar1->master_frame;
  }
  if (this_ptr->master_frame < _DAT_01cb0620) {
    _DAT_01cb0620 = _DAT_01cb0620 - 0x450FC000;
  }
  core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0(this_ptr);
  switch(this_ptr->which_part) {
  case 0:
    fVar2 = this_ptr->master_frame;
    if ((0x44ac8000 < (int)fVar2) && ((int)fVar2 < 0x44c58000)) {
      if ((int)fVar2 < 0x44b90000) {
        CStack_18.z = (this_ptr->master_frame + _DAT_005d6c91) * (float)_DAT_005d6c81 *
                      (float)_DAT_005d6c99 + _DAT_005d6ca1;
      }
      else {
        CStack_18.z = (_DAT_005d6c79 - this_ptr->master_frame) * (float)_DAT_005d6c81 *
                      (float)_DAT_005d6c89;
      }
      iStack_c = core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_004ac9e0
                           (this_ptr,CStack_18.z,delta_time);
      iStack_8 = iStack_c;
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,unaff_EBX);
      iVar4 = 0;
      puVar5 = (uint *)&stack0xffffff64;
      puVar6 = &stack0xffffff8c;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      if (0 < unaff_retaddr) {
        do {
          CStack_18.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fStack_6c,fStack_60);
          fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.4);
          CStack_18.y = (1.0 - fVar2) * fStack_68 + fStack_5c * fVar2;
          CStack_18.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fStack_64,fStack_58);
          core_actor_cpp_FUN_00408d70(this_ptr,&CStack_18);
          CStack_24.x = CStack_34.y;
          afStack_3c[(uint)bVar7 * -2 + 7] = afStack_3c[(uint)bVar7 * -2 + 4];
          afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8] =
               afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
          if (&CStack_18 != (CVector3f *)(afStack_3c + 6)) {
            CStack_18.x = CStack_24.x;
            CStack_18.y = CStack_24.y;
            CStack_18.z = CStack_24.z;
          }
          iVar3 = 0xffff;
          wind_influence = (CVector3f *)0x0;
          fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                    (0x01C3DEB4,&CStack_18,fVar2,wind_influence,iVar3);
          iVar4 = iVar4 + 1;
        } while (iVar4 < unaff_EBP);
      }
    }
    if ((0x44e10000 < (int)this_ptr->master_frame) && ((int)this_ptr->master_frame < 0x44ed8000)) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,unaff_EDI);
      puVar5 = (uint *)&stack0xffffff54;
      puVar6 = (uint *)&stack0xffffff7c;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      CStack_4c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fStack_7c,fStack_70);
      CStack_4c.y = fStack_78;
      CStack_4c.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fStack_74,fStack_68);
      core_actor_cpp_FUN_00408d70(this_ptr,&CStack_4c);
      CStack_34.x = fStack_40;
      afStack_3c[(uint)bVar7 * -2 + 3] = afStack_3c[(uint)bVar7 * -2];
      afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&CStack_4c != (CVector3f *)(afStack_3c + 2)) {
        CStack_4c.x = CStack_34.x;
        CStack_4c.y = CStack_34.y;
        CStack_4c.z = CStack_34.z;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,&CStack_4c,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
    }
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,1.0,"frankx-bed1.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,475.0,"frankx-bed2.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,809.0,"frankx-bed3.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,1050.0,"frankx-bed4.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,1380.0,"frankx-water-dip.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,2040.0,"frankx-big-ramp-bed5.wav");
LAB_004ac88d:
    return;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,131.0,"frankx-crane1.wav");
    return;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,527.0,"frankx-crane2.wav");
    return;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,1089.0,"frankx-crane3.wav");
    return;
  case 4:
  case 7:
    goto LAB_004ac88d;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,864.0,"frankx-arm.wav");
    return;
  case 6:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,1702.0,"frankx-flap-up.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,1881.0,"frankx-flap-down.wav");
    return;
  case 8:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
              (this_ptr,1950.0,"frankx-big-ramp.wav");
    return;
  default:
    _DAT_01d046a0 = "..\\core\\frankgen.cpp";
    _DAT_01d046a4 = 0x13e;
    core_main_c_FUN_004e4500(0x5d6c73);
    return;
  }
}
