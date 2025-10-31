// Name: core_weapon.cpp_CWeapon_process_FUN_005ee110
// Address: 005ee110
// Address Range: [[005ee110, 005ee24a]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaronWeapon_process_FUN_00413dc0 (00413dc0) at 00413dd6 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448d30 (00448d30) at 00448d3d [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_FUN_0049cfb0 (0049cfb0) at 0049cfc2 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a7070 (004a7070) at 004a7091 [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cb9b0 (004cb9b0) at 004cb9c2 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 0050645e [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050ec10 (0050ec10) at 0050ec1d [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00587f70 (00587f70) at 00587f91 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_process_FUN_005de360 (005de360) at 005de376 [UNCONDITIONAL_CALL]
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonLight g_CDemonLightInstance
//   undefined4 g_CDemonLightInstance.volumetric_intensity
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.auto_save_blocked
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408c10
//   core_box.cpp_CBox_process_FUN_0041e2f0
//   core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_process_FUN_005ee110(CWeapon *this_ptr)

{
  COrientation *pCVar1;
  int iVar2;
  float fVar3;
  CVector3f *unaff_retaddr;
  float in_stack_00000008;
  undefined4 uStack00000010;
  CDemonLight *pCStack00000018;
  
  if ((0.0 < *(float *)(this_ptr->field6_0x2f4 + 0xc)) &&
     (fVar3 = *(float *)(this_ptr->field6_0x2f4 + 0xc) - in_stack_00000008,
     *(float *)(this_ptr->field6_0x2f4 + 0xc) = fVar3, fVar3 < 0.0)) {
    this_ptr->field6_0x2f4[0xc] = '\0';
    this_ptr->field6_0x2f4[0xd] = '\0';
    this_ptr->field6_0x2f4[0xe] = '\0';
    this_ptr->field6_0x2f4[0xf] = '\0';
  }
  iVar2._0_1_ = this_ptr->carried_by_actor;
  iVar2._1_1_ = this_ptr->field8_0x305[0];
  iVar2._2_1_ = this_ptr->field8_0x305[1];
  iVar2._3_1_ = this_ptr->field8_0x305[2];
  if (((iVar2 == 0) && (this_ptr->weapon_state == 0)) && (0.0 < this_ptr->sim_timer)) {
    fVar3 = this_ptr->sim_timer - in_stack_00000008;
    this_ptr->sim_timer = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->sim_timer = 0.0;
    }
    core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)(this_ptr->field8_0x305 + 3),in_stack_00000008);
    (this_ptr->base_actor).location.position.x =
         (((CBox *)(this_ptr->field8_0x305 + 3))->position).x;
    (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field8_0x305 + 7);
    (this_ptr->base_actor).location.position.z = *(float *)(this_ptr->field8_0x305 + 0xb);
    pCVar1 = &(this_ptr->base_actor).orient;
    if (pCVar1 != (COrientation *)(this_ptr->field8_0x305 + 0xf)) {
      pCVar1->pitch = *(float *)(this_ptr->field8_0x305 + 0xf);
      (this_ptr->base_actor).orient.bank = *(float *)(this_ptr->field8_0x305 + 0x13);
      (this_ptr->base_actor).orient.heading = *(float *)(this_ptr->field8_0x305 + 0x17);
    }
  }
  core_actor_cpp_CDemonActor_FUN_00408c10(&this_ptr->base_actor);
  if (((*(CHero **)&this_ptr->carried_by_actor == g_HeroActors[g_LocalHeroIndex]) &&
      (g_CGamePtr->auto_save_blocked != 0)) && (this_ptr->can_attach_light != 0)) {
    (*(this_ptr->base_actor).metadata.vtable[1].processFootstepAtOffset)
              (&this_ptr->base_actor,unaff_retaddr,(float)this_ptr);
    if (0.0 < g_CDemonLightInstance.volumetric_intensity) {
      pCStack00000018 = &g_CDemonLightInstance;
      uStack00000010 = 0x5ee245;
      core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
      return;
    }
  }
  return;
}


// Assembly code:
// 005ee110: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_process_FUN_005ee110
// 005ee111: PUSH ESI
// 005ee112: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ee116: FLD float ptr [EBX + 0x300]
// 005ee11c: FLDZ
// 005ee11e: FCOMPP
// 005ee120: FNSTSW AX
// 005ee122: SAHF
// 005ee123: JC 0x005ee1ea
//   XREF to: 005ee1ea (CONDITIONAL_JUMP)
// 005ee129: MOV EDX,dword ptr [EBX + 0x304]
//   Label: LAB_005ee129
// 005ee12f: TEST EDX,EDX
// 005ee131: JNZ 0x005ee1b1
//   XREF to: 005ee1b1 (CONDITIONAL_JUMP)
// 005ee137: CMP dword ptr [EBX + 0x2d4],0x0
// 005ee13e: JNZ 0x005ee1b1
//   XREF to: 005ee1b1 (CONDITIONAL_JUMP)
// 005ee140: FLD float ptr [EBX + 0x570]
// 005ee146: FLDZ
// 005ee148: FCOMPP
// 005ee14a: FNSTSW AX
// 005ee14c: SAHF
// 005ee14d: JNC 0x005ee1b1
//   XREF to: 005ee1b1 (CONDITIONAL_JUMP)
// 005ee14f: FLD float ptr [EBX + 0x570]
// 005ee155: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005ee159: FST float ptr [EBX + 0x570]
// 005ee15f: FLDZ
// 005ee161: FCOMPP
// 005ee163: FNSTSW AX
// 005ee165: SAHF
// 005ee166: JBE 0x005ee16e
//   XREF to: 005ee16e (CONDITIONAL_JUMP)
// 005ee168: MOV dword ptr [EBX + 0x570],EDX
// 005ee16e: LEA ESI,[EBX + 0x308]
//   Label: LAB_005ee16e
// 005ee174: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005ee178: PUSH ESI
// 005ee179: CALL core_box.cpp_CBox_process_FUN_0041e2f0
//   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)
// 005ee17e: LEA EAX,[EBX + 0x20]
// 005ee181: MOV EDX,dword ptr [ESI]
// 005ee183: MOV dword ptr [EAX],EDX
// 005ee185: MOV EDX,dword ptr [ESI + 0x4]
// 005ee188: MOV dword ptr [EAX + 0x4],EDX
// 005ee18b: MOV EDX,dword ptr [ESI + 0x8]
// 005ee18e: MOV dword ptr [EAX + 0x8],EDX
// 005ee191: LEA EAX,[EBX + 0x30]
// 005ee194: LEA EDX,[EBX + 0x314]
// 005ee19a: ADD ESP,0x8
// 005ee19d: CMP EAX,EDX
// 005ee19f: JZ 0x005ee1b1
//   XREF to: 005ee1b1 (CONDITIONAL_JUMP)
// 005ee1a1: MOV ECX,dword ptr [EDX]
// 005ee1a3: MOV dword ptr [EAX],ECX
// 005ee1a5: MOV ECX,dword ptr [EDX + 0x4]
// 005ee1a8: MOV dword ptr [EAX + 0x4],ECX
// 005ee1ab: MOV ECX,dword ptr [EDX + 0x8]
// 005ee1ae: MOV dword ptr [EAX + 0x8],ECX
// 005ee1b1: PUSH EBX
//   Label: LAB_005ee1b1
// 005ee1b2: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 005ee1b7: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005ee1bc: MOV EDX,dword ptr [EBX + 0x304]
// 005ee1c2: MOV ESI,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005ee1c9: ADD ESP,0x4
// 005ee1cc: CMP EDX,ESI
// 005ee1ce: JNZ 0x005ee1e7
//   XREF to: 005ee1e7 (CONDITIONAL_JUMP)
// 005ee1d0: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 005ee1d5: CMP dword ptr [EAX + 0x244],0x0
//   XREF to: 02d81ce0 (READ)
// 005ee1dc: JZ 0x005ee1e7
//   XREF to: 005ee1e7 (CONDITIONAL_JUMP)
// 005ee1de: CMP dword ptr [EBX + 0x2f0],0x0
// 005ee1e5: JNZ 0x005ee216
//   XREF to: 005ee216 (CONDITIONAL_JUMP)
// 005ee1e7: POP ESI
//   Label: LAB_005ee1e7
// 005ee1e8: POP EBX
// 005ee1e9: RET
// 005ee1ea: FLD float ptr [EBX + 0x300]
//   Label: LAB_005ee1ea
// 005ee1f0: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005ee1f4: FST float ptr [EBX + 0x300]
// 005ee1fa: FLDZ
// 005ee1fc: FCOMPP
// 005ee1fe: FNSTSW AX
// 005ee200: SAHF
// 005ee201: JBE 0x005ee129
//   XREF to: 005ee129 (CONDITIONAL_JUMP)
// 005ee207: MOV dword ptr [EBX + 0x300],0x0
// 005ee211: JMP 0x005ee129
//   XREF to: 005ee129 (UNCONDITIONAL_JUMP)
// 005ee216: PUSH EBX
//   Label: LAB_005ee216
// 005ee217: MOV EAX,dword ptr [EBX + 0x154]
// 005ee21d: CALL dword ptr [EAX + 0x108]
// 005ee223: FLD float ptr [0x02d81a98]
//   XREF to: 02d81a98 (READ)
// 005ee229: FLDZ
// 005ee22b: ADD ESP,0x4
// 005ee22e: FCOMPP
// 005ee230: FNSTSW AX
// 005ee232: SAHF
// 005ee233: JNC 0x005ee1e7
//   XREF to: 005ee1e7 (CONDITIONAL_JUMP)
// 005ee235: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 005ee23a: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005ee23f: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005ee240: CALL core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
//   XREF to: 0056d090 (UNCONDITIONAL_CALL)
// 005ee245: ADD ESP,0x8
// 005ee248: POP ESI
// 005ee249: POP EBX
// 005ee24a: RET
