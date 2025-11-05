// Name: core_stranger.cpp_CStranger_FUN_005c3150
// Address: 005c3150
// Address Range: [[005c3150, 005c3700]]
// Convention: __cdecl
// Signature: int core_stranger.cpp_CStranger_FUN_005c3150(CStranger * this_ptr)
// Globals:
//   void* switchdataD_005c3128 = 005c3326
//   double DOUBLE_00653c74 = 0.990000000000000
//   double DOUBLE_00653c7c = 0.950000000000000
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CFireEffect g_CFireEffectInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613a0
//   undefined4 DAT_03f6bacc
//   undefined4 DAT_03f6bb04
//   undefined4 DAT_03f6bb24
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_charactr.cpp_CCharacter_FUN_0042a2c0
//   core_charactr.cpp_CCharacter_FUN_0042e840
//   core_cloth.cpp_FUN_0043c070
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_fire.cpp_CFireEffect_FUN_004c7f80
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_stranger.cpp_CStranger_FUN_005c06b0
//   core_stranger.cpp_CStranger_FUN_005c51c0
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_stranger_cpp_CStranger_FUN_005c3150(CStranger *this_ptr)

{
  CDemonActor *pCVar1;
  bool bVar2;
  int iVar3;
  CVector3f *input;
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar4;
  float *pfVar5;
  byte bVar6;
  CMatrix3x4f *in_stack_fffffdd4;
  CMatrix3x4f local_1fc;
  CMatrix3x4f local_1cc;
  float local_19c [12];
  CMatrix3x4f local_16c;
  CVector3f local_13c [4];
  float local_10c [12];
  CVector3f local_dc [4];
  undefined1 local_ac [16];
  float local_9c;
  float local_98;
  CMatrix3x3f local_94;
  CVector3f local_64;
  CVector3f local_58;
  undefined1 local_4c [12];
  CMatrix3x3f local_40;
  CLightGun *local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  iVar3 = core_charactr_cpp_CCharacter_FUN_0042a2c0((CCharacter *)this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  if ((this_ptr->base_hero).base_character.model.part_visibility_flags[DAT_03f6bb24] != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    local_40.m[1].y = 3.1415927;
    local_40.m[1].x = 0.0;
    local_40.m[1].z = 0.0;
    local_ac._12_4_ = 0.0;
    local_9c = 0.71933335;
    local_98 = 0.185;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_16c,(CVector3f *)(local_ac + 0xc),local_40.m + 1);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_16c,
               (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices +
               DAT_03f6bacc,in_stack_fffffdd4);
    pfVar5 = (float *)&stack0xfffffdd4;
    pCVar4 = local_13c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4->x = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      pCVar4 = (CVector3f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_getTranslation_FUN_005f6110(local_13c,(CMatrix3x4f *)local_ac);
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_13c,&local_94);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&local_94,(CVector3i *)local_ac);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(this_ptr->field4_0x1fc3c + 0x9c),0.0,-1);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  }
  local_14 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((float)DOUBLE_00653c74 < local_14) {
    pCVar1 = (this_ptr->base_hero).base_character.carry_hands[1].carry_actor;
    pCVar4 = (CVector3f *)0x0;
    if (pCVar1 != (CDemonActor *)0x0) {
      pCVar4 = &(pCVar1->location).position;
    }
    if (*(int *)(this_ptr->field2_0x1fbd8 + 0x54) != 0) {
      pCVar4 = (CVector3f *)(*(int *)(this_ptr->field2_0x1fbd8 + 0x54) + 0x20);
    }
    if (pCVar4 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)(this_ptr->field2_0x1fbd8 + 0x54));
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,(this_ptr->base_hero).base_character.carry_hands[1].carry_actor);
      input = (CVector3f *)core_stranger_cpp_CStranger_FUN_005c51c0();
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)this_ptr,local_94.m + 2,input);
      local_14 = core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00572800
                           (g_CDemonSetPtr,pCVar4,local_94.m + 2);
      local_18 = local_14;
      if (local_14 < 0.0) {
        local_18 = 10.0;
      }
      core_fire_cpp_CFireEffect_FUN_004c7f80(g_CFireEffectPtr);
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    }
  }
  pCVar1 = *(CDemonActor **)(this_ptr->field2_0x1fbd8 + 0x54);
  if ((((pCVar1 == (CDemonActor *)0x0) ||
       (pCVar1 == (this_ptr->base_hero).base_character.carry_hands[0].carry_actor)) ||
      (pCVar1 == (this_ptr->base_hero).base_character.carry_hands[1].carry_actor)) ||
     ((this_ptr->base_hero).base_character.model.part_visibility_flags[DAT_03f6bb24] == 0))
  goto LAB_005c33d7;
  (**(code **)(*(int *)(*(int *)(this_ptr->field2_0x1fbd8 + 0x54) + 0x154) + 8))();
  if (*(int *)(this_ptr->field2_0x1fbd8 + 0x54) == 0) {
switchD_005c331f_caseD_3:
  }
  else {
    switch(*(undefined4 *)(*(int *)(this_ptr->field2_0x1fbd8 + 0x54) + 0x2e0)) {
    case 0:
    case 5:
      break;
    case 1:
      break;
    case 2:
      break;
    default:
      goto switchD_005c331f_caseD_3;
    case 4:
      break;
    case 7:
    }
  }
  local_14 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  bVar2 = (float)DOUBLE_00653c7c < local_14;
  if ((*(int *)(*(int *)(this_ptr->field2_0x1fbd8 + 0x54) + 0x2e0) == 1) &&
     (*(int *)((this_ptr->base_hero).base_character.field13_0x2620 + 0x46c) == 8)) {
    bVar2 = true;
LAB_005c336f:
    (**(code **)(*(int *)(*(int *)(this_ptr->field2_0x1fbd8 + 0x54) + 0x154) + 0x104))();
  }
  else if (bVar2) goto LAB_005c336f;
  if (*(int *)(*(int *)(this_ptr->field2_0x1fbd8 + 0x54) + 0x2e0) == 0) {
    core_stranger_cpp_CStranger_FUN_005c06b0();
    (**(code **)(*(int *)(*(int *)(this_ptr->field2_0x1fbd8 + 0x54) + 0x154) + 8))();
    if (bVar2) {
      (**(code **)(*(int *)(*(int *)(this_ptr->field2_0x1fbd8 + 0x54) + 0x154) + 0x104))();
    }
  }
  core_stranger_cpp_CStranger_FUN_005c06b0();
LAB_005c33d7:
  if ((((this_ptr->base_hero).is_wearing_gas_mask != 0) &&
      ((this_ptr->base_hero).base_character.model.part_visibility_flags[DAT_03f6bb24] != 0)) &&
     (local_1c = (this_ptr->base_hero).inventory.light_gun_ptr, local_1c != (CLightGun *)0x0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    if ((this_ptr->base_hero).is_wearing_gas_mask == 2) {
      local_94.m[1].z = 0.0;
      local_94.m[1].x = -0.140457;
      local_64.z = 0.537644;
      local_94.m[1].y = -3.0786;
      local_64.x = 0.00604827;
      local_64.y = 0.283614;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_1cc,&local_64,local_94.m + 1);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                (&local_1cc,
                 (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices +
                 DAT_03f6bacc,in_stack_fffffdd4);
      pfVar5 = local_10c;
    }
    else {
      local_40.m[2].x = 1.16195;
      local_40.m[2].z = 0.0489636;
      local_40.m[2].y = 0.368073;
      local_58.x = 0.512623;
      local_58.y = -0.0202601;
      local_58.z = 0.130713;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_1fc,&local_58,local_40.m + 2);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                (&local_1fc,
                 (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices +
                 DAT_03f6bb04,in_stack_fffffdd4);
      pfVar5 = local_19c;
    }
    pCVar4 = local_dc;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4->x = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      pCVar4 = (CVector3f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_dc,&local_40);
    core_xform_cpp_getTranslation_FUN_005f6110(local_dc,(CMatrix3x4f *)local_4c);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&local_40,(CVector3i *)local_4c);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&(local_1c->base_weapon).model,0.0,-1);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  }
  if ((((this_ptr->base_hero).base_character.model.part_visibility_flags[DAT_03f6bb24] == 0) &&
      (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
      iVar3 == 0)) && (0 < (this_ptr->base_hero).base_character.cloth_count)) {
    core_cloth_cpp_FUN_0043c070();
  }
  return 1;
}


// Assembly code:
// 005c3150: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c3150
// 005c3151: PUSH ESI
// 005c3152: PUSH EDI
// 005c3153: PUSH EBP
// 005c3154: MOV EBP,ESP
// 005c3156: SUB ESP,0x21c
// 005c315c: SUB EBP,0x7e
// 005c315f: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 005c3165: PUSH EBX
// 005c3166: CALL core_charactr.cpp_CCharacter_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 005c316b: ADD ESP,0x4
// 005c316e: TEST EAX,EAX
// 005c3170: JZ 0x005c3547
//   XREF to: 005c3547 (CONDITIONAL_JUMP)
// 005c3176: MOV EAX,[0x03f6bb24]
//   XREF to: 03f6bb24 (READ)
// 005c317b: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005c3183: JNZ 0x005c354f
//   XREF to: 005c354f (CONDITIONAL_JUMP)
// 005c3189: PUSH 0x6
//   Label: LAB_005c3189
// 005c318b: PUSH EBX
// 005c318c: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c3191: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c3194: ADD ESP,0x8
// 005c3197: FLD float ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 005c319a: FCOMP double ptr [0x00653c74]
//   XREF to: 00653c74 (READ)
// 005c31a0: FNSTSW AX
// 005c31a2: SAHF
// 005c31a3: JBE 0x005c32b4
//   XREF to: 005c32b4 (CONDITIONAL_JUMP)
// 005c31a9: MOV EAX,dword ptr [EBX + 0x24f8]
// 005c31af: XOR ESI,ESI
// 005c31b1: TEST EAX,EAX
// 005c31b3: JZ 0x005c31b8
//   XREF to: 005c31b8 (CONDITIONAL_JUMP)
// 005c31b5: LEA ESI,[EAX + 0x20]
// 005c31b8: MOV EDX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c31b8
// 005c31be: TEST EDX,EDX
// 005c31c0: JZ 0x005c31c5
//   XREF to: 005c31c5 (CONDITIONAL_JUMP)
// 005c31c2: LEA ESI,[EDX + 0x20]
// 005c31c5: TEST ESI,ESI
//   Label: LAB_005c31c5
// 005c31c7: JZ 0x005c32b4
//   XREF to: 005c32b4 (CONDITIONAL_JUMP)
// 005c31cd: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005c31d3: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005c31d4: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005c31d9: ADD ESP,0x4
// 005c31dc: PUSH 0x1
// 005c31de: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005c31e4: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005c31e5: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 005c31ea: ADD ESP,0x8
// 005c31ed: PUSH EBX
// 005c31ee: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005c31f3: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005c31f4: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005c31f9: ADD ESP,0x8
// 005c31fc: MOV EDX,dword ptr [EBX + 0x1fc2c]
// 005c3202: PUSH EDX
// 005c3203: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005c3209: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005c320a: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005c320f: ADD ESP,0x8
// 005c3212: MOV EDI,dword ptr [EBX + 0x24f8]
// 005c3218: PUSH EDI
// 005c3219: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005c321e: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005c321f: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005c3224: ADD ESP,0x8
// 005c3227: LEA EAX,[EBP + 0x1e]
//   XREF to: Stack[-0x70] (DATA)
// 005c322a: PUSH EAX
// 005c322b: PUSH EBX
// 005c322c: CALL core_stranger.cpp_CStranger_FUN_005c51c0
//   XREF to: 005c51c0 (UNCONDITIONAL_CALL)
// 005c3231: ADD ESP,0x8
// 005c3234: PUSH EAX
// 005c3235: LEA EAX,[EBP + 0x12]
//   XREF to: Stack[-0x7c] (DATA)
// 005c3238: PUSH EAX
// 005c3239: PUSH EBX
// 005c323a: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005c323f: ADD ESP,0xc
// 005c3242: LEA EAX,[EBP + 0x12]
//   XREF to: Stack[-0x7c] (DATA)
// 005c3245: PUSH EAX
// 005c3246: PUSH ESI
// 005c3247: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005c324d: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005c324e: CALL core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800
//   XREF to: 00572800 (UNCONDITIONAL_CALL)
// 005c3253: FLDZ
// 005c3255: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c3258: ADD ESP,0xc
// 005c325b: MOV EAX,dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 005c325e: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c3261: FCOMP float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 005c3264: FNSTSW AX
// 005c3266: SAHF
// 005c3267: JBE 0x005c3270
//   XREF to: 005c3270 (CONDITIONAL_JUMP)
// 005c3269: MOV dword ptr [EBP + 0x76],0x41200000
//   XREF to: Stack[-0x18] (WRITE)
// 005c3270: PUSH 0x0
//   Label: LAB_005c3270
// 005c3272: PUSH 0x0
// 005c3274: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005c3279: PUSH 0xff
// 005c327e: ADD EAX,0x14d128
// 005c3283: PUSH dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 005c3286: PUSH EAX
//   XREF to: 032613a0 (DATA)
// 005c3287: PUSH 0x3f800000
// 005c328c: LEA EAX,[EBP + 0x12]
//   XREF to: Stack[-0x7c] (DATA)
// 005c328f: PUSH 0x3f800000
// 005c3294: PUSH EAX
// 005c3295: PUSH ESI
// 005c3296: MOV ESI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 005c329c: PUSH ESI
//   XREF to: 02d12db0 (DATA)
// 005c329d: CALL core_fire.cpp_CFireEffect_FUN_004c7f80
//   XREF to: 004c7f80 (UNCONDITIONAL_CALL)
// 005c32a2: ADD ESP,0x28
// 005c32a5: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005c32ab: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005c32ac: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005c32b1: ADD ESP,0x4
// 005c32b4: MOV EAX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c32b4
// 005c32ba: TEST EAX,EAX
// 005c32bc: JZ 0x005c33d7
//   XREF to: 005c33d7 (CONDITIONAL_JUMP)
// 005c32c2: CMP EAX,dword ptr [EBX + 0x24b4]
// 005c32c8: JZ 0x005c33d7
//   XREF to: 005c33d7 (CONDITIONAL_JUMP)
// 005c32ce: CMP EAX,dword ptr [EBX + 0x24f8]
// 005c32d4: JZ 0x005c33d7
//   XREF to: 005c33d7 (CONDITIONAL_JUMP)
// 005c32da: MOV EAX,[0x03f6bb24]
//   XREF to: 03f6bb24 (READ)
// 005c32df: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005c32e7: JZ 0x005c33d7
//   XREF to: 005c33d7 (CONDITIONAL_JUMP)
// 005c32ed: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c32f3: PUSH EAX
// 005c32f4: MOV ESI,dword ptr [EAX + 0x154]
// 005c32fa: CALL dword ptr [ESI + 0x8]
// 005c32fd: ADD ESP,0x4
// 005c3300: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c3306: XOR ESI,ESI
// 005c3308: TEST EAX,EAX
// 005c330a: JZ 0x005c366c
//   XREF to: 005c366c (CONDITIONAL_JUMP)
// 005c3310: MOV EAX,dword ptr [EAX + 0x2e0]
// 005c3316: CMP EAX,0x8
// 005c3319: JA 0x005c366c
//   XREF to: 005c366c (CONDITIONAL_JUMP)
// 005c331f: JMP dword ptr [EAX*0x4 + 0x5c3128]
//   Label: switchD
//   XREF to: 005c3326 (COMPUTED_JUMP)
//   XREF to: 005c3644 (COMPUTED_JUMP)
//   XREF to: 005c3658 (COMPUTED_JUMP)
//   XREF to: 005c366c (COMPUTED_JUMP)
//   XREF to: 005c364e (COMPUTED_JUMP)
//   XREF to: 005c3662 (COMPUTED_JUMP)
//   XREF to: 005c3128 (DATA)
// 005c3326: MOV EAX,0x2
//   Label: caseD_0
// 005c332b: PUSH EAX
//   Label: LAB_005c332b
// 005c332c: PUSH EBX
// 005c332d: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c3332: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c3335: ADD ESP,0x8
// 005c3338: FLD float ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 005c333b: FCOMP double ptr [0x00653c7c]
//   XREF to: 00653c7c (READ)
// 005c3341: FNSTSW AX
// 005c3343: SAHF
// 005c3344: JBE 0x005c334b
//   XREF to: 005c334b (CONDITIONAL_JUMP)
// 005c3346: MOV ESI,0x1
// 005c334b: MOV EAX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c334b
// 005c3351: MOV EDI,dword ptr [EAX + 0x2e0]
// 005c3357: CMP EDI,0x1
// 005c335a: JNZ 0x005c3673
//   XREF to: 005c3673 (CONDITIONAL_JUMP)
// 005c3360: CMP dword ptr [EBX + 0x2a8c],0x8
// 005c3367: JNZ 0x005c3673
//   XREF to: 005c3673 (CONDITIONAL_JUMP)
// 005c336d: MOV ESI,EDI
// 005c336f: MOV EAX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c336f
// 005c3375: PUSH EAX
// 005c3376: MOV EDI,dword ptr [EAX + 0x154]
// 005c337c: CALL dword ptr [EDI + 0x104]
// 005c3382: ADD ESP,0x4
// 005c3385: MOV EAX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c3385
// 005c338b: CMP dword ptr [EAX + 0x2e0],0x0
// 005c3392: JNZ 0x005c33cc
//   XREF to: 005c33cc (CONDITIONAL_JUMP)
// 005c3394: PUSH 0x1
// 005c3396: PUSH EBX
// 005c3397: CALL core_stranger.cpp_CStranger_FUN_005c06b0
//   XREF to: 005c06b0 (UNCONDITIONAL_CALL)
// 005c339c: ADD ESP,0x8
// 005c339f: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c33a5: PUSH EAX
// 005c33a6: MOV EDI,dword ptr [EAX + 0x154]
// 005c33ac: CALL dword ptr [EDI + 0x8]
// 005c33af: ADD ESP,0x4
// 005c33b2: TEST ESI,ESI
// 005c33b4: JZ 0x005c33cc
//   XREF to: 005c33cc (CONDITIONAL_JUMP)
// 005c33b6: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c33bc: PUSH EAX
// 005c33bd: MOV ESI,dword ptr [EAX + 0x154]
// 005c33c3: CALL dword ptr [ESI + 0x104]
// 005c33c9: ADD ESP,0x4
// 005c33cc: PUSH 0x0
//   Label: LAB_005c33cc
// 005c33ce: PUSH EBX
// 005c33cf: CALL core_stranger.cpp_CStranger_FUN_005c06b0
//   XREF to: 005c06b0 (UNCONDITIONAL_CALL)
// 005c33d4: ADD ESP,0x8
// 005c33d7: CMP dword ptr [EBX + 0x1fb98],0x0
//   Label: LAB_005c33d7
// 005c33de: JZ 0x005c3508
//   XREF to: 005c3508 (CONDITIONAL_JUMP)
// 005c33e4: MOV EAX,[0x03f6bb24]
//   XREF to: 03f6bb24 (READ)
// 005c33e9: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005c33f1: JZ 0x005c3508
//   XREF to: 005c3508 (CONDITIONAL_JUMP)
// 005c33f7: LEA EAX,[EBX + 0x1f738]
// 005c33fd: MOV EAX,dword ptr [EAX + 0x454]
// 005c3403: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c3406: TEST EAX,EAX
// 005c3408: JZ 0x005c3508
//   XREF to: 005c3508 (CONDITIONAL_JUMP)
// 005c340e: PUSH EBX
// 005c340f: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005c3414: ADD ESP,0x4
// 005c3417: MOV EAX,dword ptr [EBX + 0x1fb98]
// 005c341d: LEA EDI,[EBX + 0xfd8]
// 005c3423: CMP EAX,0x2
// 005c3426: JNZ 0x005c3680
//   XREF to: 005c3680 (CONDITIONAL_JUMP)
// 005c342c: MOV ESI,0xbe0fd3f6
// 005c3431: XOR EAX,EAX
// 005c3433: MOV EDX,0xc04507c8
// 005c3438: MOV dword ptr [EBP + 0xe],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005c343b: LEA EAX,[EBP + 0x6]
//   XREF to: Stack[-0x88] (DATA)
// 005c343e: MOV ECX,0x3bc63091
// 005c3443: PUSH EAX
// 005c3444: MOV EAX,0x3f09a30a
// 005c3449: MOV dword ptr [EBP + 0x6],ESI
//   XREF to: Stack[-0x88] (WRITE)
// 005c344c: MOV dword ptr [EBP + 0x32],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005c344f: LEA EAX,[EBP + 0x2a]
//   XREF to: Stack[-0x64] (DATA)
// 005c3452: MOV dword ptr [EBP + 0xa],EDX
//   XREF to: Stack[-0x84] (WRITE)
// 005c3455: PUSH EAX
// 005c3456: LEA EAX,[EBP + 0xfffffec2]
//   XREF to: Stack[-0x1cc] (DATA)
// 005c345c: MOV ESI,0x3e9135db
// 005c3461: PUSH EAX
// 005c3462: MOV dword ptr [EBP + 0x2a],ECX
//   XREF to: Stack[-0x64] (WRITE)
// 005c3465: MOV dword ptr [EBP + 0x2e],ESI
//   XREF to: Stack[-0x60] (WRITE)
// 005c3468: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c346d: MOV ESI,dword ptr [0x03f6bacc]
//   XREF to: 03f6bacc (READ)
// 005c3473: LEA EAX,[ESI*0x4 + 0x0]
// 005c347a: SUB EAX,ESI
// 005c347c: SHL EAX,0x4
// 005c347f: ADD ESP,0xc
// 005c3482: ADD EDI,EAX
// 005c3484: PUSH EDI
// 005c3485: LEA EAX,[EBP + 0xfffffec2]
//   XREF to: Stack[-0x1cc] (DATA)
// 005c348b: PUSH EAX
// 005c348c: LEA ESI,[EBP + -0x7e]
//   XREF to: Stack[-0x10c] (DATA)
// 005c348f: LEA EDI,[EBP + -0x4e]
//   XREF to: Stack[-0xdc] (DATA)
// 005c3492: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c3497: MOV ECX,0xc
// 005c349c: LEA ESI,[EBP + -0x7e]
//   XREF to: Stack[-0x10c] (DATA)
// 005c349f: ADD ESP,0x8
//   Label: LAB_005c349f
// 005c34a2: MOVSD.REP ES:EDI,ESI
// 005c34a4: LEA EAX,[EBP + 0x4e]
//   XREF to: Stack[-0x40] (DATA)
// 005c34a7: PUSH EAX
// 005c34a8: LEA EAX,[EBP + -0x4e]
//   XREF to: Stack[-0xdc] (DATA)
// 005c34ab: PUSH EAX
// 005c34ac: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 005c34b1: ADD ESP,0x8
// 005c34b4: LEA EAX,[EBP + 0x42]
//   XREF to: Stack[-0x4c] (DATA)
// 005c34b7: PUSH EAX
// 005c34b8: LEA EAX,[EBP + -0x4e]
//   XREF to: Stack[-0xdc] (DATA)
// 005c34bb: PUSH EAX
// 005c34bc: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 005c34c1: ADD ESP,0x8
// 005c34c4: LEA EAX,[EBP + 0x42]
//   XREF to: Stack[-0x4c] (DATA)
// 005c34c7: PUSH EAX
// 005c34c8: LEA EAX,[EBP + 0x4e]
//   XREF to: Stack[-0x40] (DATA)
// 005c34cb: PUSH EAX
// 005c34cc: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005c34d2: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005c34d3: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005c34d8: ADD ESP,0xc
// 005c34db: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 005c34de: PUSH -0x1
// 005c34e0: ADD EAX,0x158
// 005c34e5: PUSH 0x0
// 005c34e7: PUSH EAX
// 005c34e8: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005c34ed: ADD ESP,0xc
// 005c34f0: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005c34f6: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005c34f7: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 005c34fc: ADD ESP,0x4
// 005c34ff: PUSH EBX
// 005c3500: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005c3505: ADD ESP,0x4
// 005c3508: MOV EAX,[0x03f6bb24]
//   Label: LAB_005c3508
//   XREF to: 03f6bb24 (READ)
// 005c350d: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005c3515: JNZ 0x005c3542
//   XREF to: 005c3542 (CONDITIONAL_JUMP)
// 005c3517: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005c351d: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005c351e: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005c3523: ADD ESP,0x4
// 005c3526: TEST EAX,EAX
// 005c3528: JNZ 0x005c3542
//   XREF to: 005c3542 (CONDITIONAL_JUMP)
// 005c352a: CMP dword ptr [EBX + 0x2a94],0x0
// 005c3531: JLE 0x005c3542
//   XREF to: 005c3542 (CONDITIONAL_JUMP)
// 005c3533: ADD EBX,0x2a94
// 005c3539: PUSH EBX
// 005c353a: CALL core_cloth.cpp_FUN_0043c070
//   XREF to: 0043c070 (UNCONDITIONAL_CALL)
// 005c353f: ADD ESP,0x4
// 005c3542: MOV EAX,0x1
//   Label: LAB_005c3542
// 005c3547: LEA ESP,[EBP + 0x7e]
//   Label: LAB_005c3547
//   XREF to: Stack[-0x10] (DATA)
// 005c354a: POP EBP
// 005c354b: POP EDI
// 005c354c: POP ESI
// 005c354d: POP EBX
// 005c354e: RET
// 005c354f: PUSH EBX
//   Label: LAB_005c354f
// 005c3550: MOV EDI,0x40490fdb
// 005c3555: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005c355a: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x34] (DATA)
// 005c355d: MOV EDX,0x3f38263b
// 005c3562: ADD ESP,0x4
// 005c3565: XOR ECX,ECX
// 005c3567: MOV dword ptr [EBP + 0x5e],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 005c356a: MOV dword ptr [EBP + 0x5a],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 005c356d: MOV dword ptr [EBP + 0x62],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c3570: PUSH EAX
// 005c3571: LEA EAX,[EBP + -0x12]
//   XREF to: Stack[-0xa0] (DATA)
// 005c3574: MOV dword ptr [EBP + -0x12],ECX
//   XREF to: Stack[-0xa0] (WRITE)
// 005c3577: PUSH EAX
// 005c3578: LEA EAX,[EBP + 0xffffff22]
//   XREF to: Stack[-0x16c] (DATA)
// 005c357e: MOV ECX,0x3e3d70a4
// 005c3583: PUSH EAX
// 005c3584: MOV dword ptr [EBP + -0xe],EDX
//   XREF to: Stack[-0x9c] (WRITE)
// 005c3587: MOV dword ptr [EBP + -0xa],ECX
//   XREF to: Stack[-0x98] (WRITE)
// 005c358a: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c358f: MOV ESI,dword ptr [0x03f6bacc]
//   XREF to: 03f6bacc (READ)
// 005c3595: LEA EAX,[ESI*0x4 + 0x0]
// 005c359c: SUB EAX,ESI
// 005c359e: MOV ESI,EAX
// 005c35a0: SHL ESI,0x4
// 005c35a3: LEA EAX,[EBX + 0xfd8]
// 005c35a9: ADD ESP,0xc
// 005c35ac: ADD EAX,ESI
// 005c35ae: PUSH EAX
// 005c35af: LEA EAX,[EBP + 0xffffff22]
//   XREF to: Stack[-0x16c] (DATA)
// 005c35b5: PUSH EAX
// 005c35b6: LEA ESI,[EBP + 0xfffffe62]
//   XREF to: Stack[-0x22c] (DATA)
// 005c35bc: LEA EDI,[EBP + 0xffffff52]
//   XREF to: Stack[-0x13c] (DATA)
// 005c35c2: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c35c7: ADD ESP,0x8
// 005c35ca: LEA EAX,[EBP + -0x1e]
//   XREF to: Stack[-0xac] (DATA)
// 005c35cd: MOV ECX,0xc
// 005c35d2: PUSH EAX
// 005c35d3: LEA EAX,[EBP + 0xffffff52]
//   XREF to: Stack[-0x13c] (DATA)
// 005c35d9: LEA ESI,[EBP + 0xfffffe62]
//   XREF to: Stack[-0x22c] (DATA)
// 005c35df: PUSH EAX
// 005c35e0: MOVSD.REP ES:EDI,ESI
// 005c35e2: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 005c35e7: ADD ESP,0x8
// 005c35ea: LEA EAX,[EBP + -0x6]
//   XREF to: Stack[-0x94] (DATA)
// 005c35ed: PUSH EAX
// 005c35ee: LEA EAX,[EBP + 0xffffff52]
//   XREF to: Stack[-0x13c] (DATA)
// 005c35f4: PUSH EAX
// 005c35f5: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 005c35fa: ADD ESP,0x8
// 005c35fd: LEA EAX,[EBP + -0x1e]
//   XREF to: Stack[-0xac] (DATA)
// 005c3600: PUSH EAX
// 005c3601: LEA EAX,[EBP + -0x6]
//   XREF to: Stack[-0x94] (DATA)
// 005c3604: PUSH EAX
// 005c3605: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005c360b: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005c360c: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005c3611: ADD ESP,0xc
// 005c3614: PUSH -0x1
// 005c3616: LEA EAX,[EBX + 0x1fcd8]
// 005c361c: PUSH 0x0
// 005c361e: PUSH EAX
// 005c361f: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005c3624: ADD ESP,0xc
// 005c3627: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005c362d: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005c362e: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 005c3633: ADD ESP,0x4
// 005c3636: PUSH EBX
// 005c3637: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005c363c: ADD ESP,0x4
// 005c363f: JMP 0x005c3189
//   XREF to: 005c3189 (UNCONDITIONAL_JUMP)
// 005c3644: MOV EAX,0x4
//   Label: caseD_1
// 005c3649: JMP 0x005c332b
//   XREF to: 005c332b (UNCONDITIONAL_JUMP)
// 005c364e: MOV EAX,0x7
//   Label: caseD_4
// 005c3653: JMP 0x005c332b
//   XREF to: 005c332b (UNCONDITIONAL_JUMP)
// 005c3658: MOV EAX,0x5
//   Label: caseD_2
// 005c365d: JMP 0x005c332b
//   XREF to: 005c332b (UNCONDITIONAL_JUMP)
// 005c3662: MOV EAX,0x8
//   Label: caseD_7
// 005c3667: JMP 0x005c332b
//   XREF to: 005c332b (UNCONDITIONAL_JUMP)
// 005c366c: XOR EAX,EAX
//   Label: caseD_3
// 005c366e: JMP 0x005c332b
//   XREF to: 005c332b (UNCONDITIONAL_JUMP)
// 005c3673: TEST ESI,ESI
//   Label: LAB_005c3673
// 005c3675: JNZ 0x005c336f
//   XREF to: 005c336f (CONDITIONAL_JUMP)
// 005c367b: JMP 0x005c3385
//   XREF to: 005c3385 (UNCONDITIONAL_JUMP)
// 005c3680: MOV EDX,0x3f94bac7
//   Label: LAB_005c3680
// 005c3685: MOV ECX,0x3d488e0e
// 005c368a: MOV ESI,0x3ebc7410
// 005c368f: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x28] (DATA)
// 005c3692: MOV dword ptr [EBP + 0x66],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005c3695: MOV dword ptr [EBP + 0x6e],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005c3698: PUSH EAX
// 005c3699: MOV EAX,0x3f033b43
// 005c369e: MOV dword ptr [EBP + 0x6a],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 005c36a1: MOV dword ptr [EBP + 0x36],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005c36a4: LEA EAX,[EBP + 0x36]
//   XREF to: Stack[-0x58] (DATA)
// 005c36a7: MOV EDX,0xbca5f882
// 005c36ac: PUSH EAX
// 005c36ad: LEA EAX,[EBP + 0xfffffe92]
//   XREF to: Stack[-0x1fc] (DATA)
// 005c36b3: MOV ECX,0x3e05d9a1
// 005c36b8: PUSH EAX
// 005c36b9: MOV dword ptr [EBP + 0x3a],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 005c36bc: MOV dword ptr [EBP + 0x3e],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 005c36bf: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c36c4: MOV ESI,dword ptr [0x03f6bb04]
//   XREF to: 03f6bb04 (READ)
// 005c36ca: LEA EAX,[ESI*0x4 + 0x0]
// 005c36d1: SUB EAX,ESI
// 005c36d3: SHL EAX,0x4
// 005c36d6: ADD ESP,0xc
// 005c36d9: ADD EAX,EDI
// 005c36db: PUSH EAX
// 005c36dc: LEA EAX,[EBP + 0xfffffe92]
//   XREF to: Stack[-0x1fc] (DATA)
// 005c36e2: PUSH EAX
// 005c36e3: LEA ESI,[EBP + 0xfffffef2]
//   XREF to: Stack[-0x19c] (DATA)
// 005c36e9: LEA EDI,[EBP + -0x4e]
//   XREF to: Stack[-0xdc] (DATA)
// 005c36ec: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c36f1: MOV ECX,0xc
// 005c36f6: LEA ESI,[EBP + 0xfffffef2]
//   XREF to: Stack[-0x19c] (DATA)
// 005c36fc: JMP 0x005c349f
//   XREF to: 005c349f (UNCONDITIONAL_JUMP)
