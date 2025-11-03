// Name: core_fire.cpp_CFireball_process_FUN_004c0b30
// Address: 004c0b30
// Address Range: [[004c0b30, 004c0d7e]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireball_process_FUN_004c0b30(CFireball * this_ptr)
// Globals:
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   int g_GlobalDeltaTimeInt
//   CFireEffect g_CFireEffectInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
// Function calls:
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_particle.cpp_CParticle_process_FUN_00545760
//   core_set.cpp_CDemonSet_FUN_0056d110

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireball_process_FUN_004c0b30(CFireball *this_ptr)

{
  int iVar1;
  longlong lVar2;
  CFireEffect *this_ptr_00;
  CDemonSet *this_ptr_01;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  SDamageInfo SStack_54;
  float local_18;
  undefined4 local_14;
  
  if (this_ptr->first_update_flag == 0) {
    this_ptr->first_update_flag = 1;
    this_ptr->spawn_timer = 0;
  }
  else {
    lVar2 = (longlong)this_ptr->fade_rate * (longlong)g_GlobalDeltaTimeInt;
    iVar3 = this_ptr->timer - ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    this_ptr->timer = iVar3;
    if (iVar3 < 0) {
      (this_ptr->base).lifetime_remaining = 0.0;
      this_ptr->timer = 0;
    }
  }
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  iVar3 = g_GlobalDeltaTimeInt / 2;
  this_ptr->rotation_angle1 =
       this_ptr->rotation_angle1 +
       ((int)((g_GlobalDeltaTimeInt + (g_GlobalDeltaTimeInt >> 0x1f) * -4) -
             (uint)((g_GlobalDeltaTimeInt >> 0x1f) << 1 < 0)) >> 2);
  this_ptr->rotation_angle2 = this_ptr->rotation_angle2 + iVar3;
  if (this_ptr->lighting_active == 0) {
    core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310(&this_ptr->light_globe,(CColor3f *)this_ptr);
    iVar3 = this_ptr->timer;
    (this_ptr->light_globe).intensity_multiplier = iVar3;
    iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
    iVar4 = iVar3 >> 0x1f;
    *(char *)&(this_ptr->light_globe).intensity =
         (char)((int)(((iVar3 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(&this_ptr->light_globe,8.0);
    this_ptr_01 = g_CDemonSetPtr;
    (this_ptr->light_globe).corona_mode = 0;
    core_set_cpp_CDemonSet_FUN_0056d110(this_ptr_01);
    iVar3 = this_ptr->spawn_timer + g_GlobalDeltaTimeInt;
    this_ptr->spawn_timer = iVar3;
    this_ptr_00 = g_CFireEffectPtr;
    if (0x1000 < iVar3) {
      this_ptr->spawn_timer = iVar3 + -0x1000;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                (this_ptr_00,(CVector3f *)this_ptr,2.0,(CVector3f *)0x0,0xffff);
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    }
  }
  if (this_ptr->lighting_active == 0) {
    local_18 = 20.0;
    local_14 = 0x40800000;
  }
  else if (this_ptr->lighting_active == 2) {
    local_18 = 5.0;
    local_14 = 0x3f800000;
  }
  else {
    local_18 = 5.0;
    local_14 = 0x3f800000;
  }
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if (g_CDemonSetPtr->damage_listener_count <= iVar3) break;
    iVar1 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar4 + -4);
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_54);
    SStack_54.damage_amount = local_18;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
    (**(code **)(*(int *)(iVar1 + 0x154) + 0x114))();
  }
  return;
}


// Assembly code:
// 004c0b30: PUSH EBX
//   Label: core_fire.cpp_CFireball_process_FUN_004c0b30
// 004c0b31: PUSH ESI
// 004c0b32: PUSH EDI
// 004c0b33: PUSH EBP
// 004c0b34: SUB ESP,0x44
// 004c0b37: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 004c0b3b: MOV EDX,dword ptr [EBP + 0x40]
// 004c0b3e: TEST EDX,EDX
// 004c0b40: JNZ 0x004c0ce5
//   XREF to: 004c0ce5 (CONDITIONAL_JUMP)
// 004c0b46: MOV dword ptr [EBP + 0x40],0x1
// 004c0b4d: MOV dword ptr [EBP + 0x48],EDX
// 004c0b50: PUSH EBP
//   Label: LAB_004c0b50
// 004c0b51: CALL core_particle.cpp_CParticle_process_FUN_00545760
//   XREF to: 00545760 (UNCONDITIONAL_CALL)
// 004c0b56: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004c0b5b: MOV EDX,EAX
// 004c0b5d: SAR EDX,0x1f
// 004c0b60: SHL EDX,0x2
// 004c0b63: SBB EAX,EDX
// 004c0b65: SAR EAX,0x2
// 004c0b68: MOV ESI,dword ptr [EBP + 0x4c]
// 004c0b6b: ADD ESI,EAX
// 004c0b6d: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004c0b72: MOV EDX,EAX
// 004c0b74: SAR EDX,0x1f
// 004c0b77: SUB EAX,EDX
// 004c0b79: SAR EAX,0x1
// 004c0b7b: ADD ESP,0x4
// 004c0b7e: MOV EDI,dword ptr [EBP + 0x50]
// 004c0b81: MOV dword ptr [EBP + 0x4c],ESI
// 004c0b84: ADD EDI,EAX
// 004c0b86: MOV EAX,dword ptr [EBP + 0x44]
// 004c0b89: MOV dword ptr [EBP + 0x50],EDI
// 004c0b8c: TEST EAX,EAX
// 004c0b8e: JNZ 0x004c0cb2
//   XREF to: 004c0cb2 (CONDITIONAL_JUMP)
// 004c0b94: PUSH EBP
// 004c0b95: LEA EBX,[EBP + 0x5c]
// 004c0b98: PUSH EBX
// 004c0b99: CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   XREF to: 00471310 (UNCONDITIONAL_CALL)
// 004c0b9e: MOV EDX,dword ptr [EBP + 0x38]
// 004c0ba1: MOV EAX,EDX
// 004c0ba3: MOV dword ptr [EBX + 0x3c],EDX
// 004c0ba6: SAR EDX,0x1f
// 004c0ba9: SHL EDX,0x8
// 004c0bac: SBB EAX,EDX
// 004c0bae: SAR EAX,0x8
// 004c0bb1: MOV EDX,EAX
// 004c0bb3: SAR EDX,0x1f
// 004c0bb6: SHL EDX,0x2
// 004c0bb9: SBB EAX,EDX
// 004c0bbb: SAR EAX,0x2
// 004c0bbe: ADD ESP,0x8
// 004c0bc1: PUSH 0x41000000
// 004c0bc6: PUSH EBX
// 004c0bc7: MOV byte ptr [EBX + 0x1c],AL
// 004c0bca: CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   XREF to: 00471360 (UNCONDITIONAL_CALL)
// 004c0bcf: ADD ESP,0x8
// 004c0bd2: PUSH EBX
// 004c0bd3: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c0bd9: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004c0bda: MOV dword ptr [EBX + 0x20],0x0
// 004c0be1: CALL core_set.cpp_CDemonSet_FUN_0056d110
//   XREF to: 0056d110 (UNCONDITIONAL_CALL)
// 004c0be6: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004c0beb: MOV ECX,dword ptr [EBP + 0x48]
// 004c0bee: ADD ECX,EAX
// 004c0bf0: ADD ESP,0x8
// 004c0bf3: MOV dword ptr [EBP + 0x48],ECX
// 004c0bf6: CMP ECX,0x1000
// 004c0bfc: JLE 0x004c0cb2
//   XREF to: 004c0cb2 (CONDITIONAL_JUMP)
// 004c0c02: PUSH 0xffff
// 004c0c07: PUSH 0x0
// 004c0c09: PUSH 0x40000000
// 004c0c0e: PUSH EBP
// 004c0c0f: MOV ESI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004c0c15: LEA EDI,[ECX + 0xfffff000]
// 004c0c1b: PUSH ESI
//   XREF to: 02d12db0 (DATA)
// 004c0c1c: MOV dword ptr [EBP + 0x48],EDI
// 004c0c1f: CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 004c0c24: ADD ESP,0x14
// 004c0c27: PUSH 0xffff
// 004c0c2c: PUSH 0x0
// 004c0c2e: PUSH 0x10000
// 004c0c33: PUSH 0x20000
// 004c0c38: PUSH 0x0
// 004c0c3a: PUSH EBP
// 004c0c3b: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004c0c40: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 004c0c41: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004c0c46: ADD ESP,0x1c
// 004c0c49: PUSH 0xffff
// 004c0c4e: PUSH 0x0
// 004c0c50: PUSH 0x10000
// 004c0c55: PUSH 0x20000
// 004c0c5a: PUSH 0x0
// 004c0c5c: PUSH EBP
// 004c0c5d: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004c0c63: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 004c0c64: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004c0c69: ADD ESP,0x1c
// 004c0c6c: PUSH 0xffff
// 004c0c71: PUSH 0x0
// 004c0c73: PUSH 0x10000
// 004c0c78: PUSH 0x20000
// 004c0c7d: PUSH 0x0
// 004c0c7f: PUSH EBP
// 004c0c80: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004c0c86: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004c0c87: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004c0c8c: ADD ESP,0x1c
// 004c0c8f: PUSH 0xffff
// 004c0c94: PUSH 0x0
// 004c0c96: PUSH 0x10000
// 004c0c9b: PUSH 0x20000
// 004c0ca0: PUSH 0x0
// 004c0ca2: PUSH EBP
// 004c0ca3: MOV EBX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004c0ca9: PUSH EBX
//   XREF to: 02d12db0 (DATA)
// 004c0caa: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004c0caf: ADD ESP,0x1c
// 004c0cb2: MOV ESI,dword ptr [EBP + 0x44]
//   Label: LAB_004c0cb2
// 004c0cb5: TEST ESI,ESI
// 004c0cb7: JNZ 0x004c0d17
//   XREF to: 004c0d17 (CONDITIONAL_JUMP)
// 004c0cb9: MOV EDI,0x41a00000
// 004c0cbe: MOV ESI,0x40800000
// 004c0cc3: MOV dword ptr [ESP + 0x3c],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004c0cc7: MOV dword ptr [ESP + 0x40],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004c0ccb: XOR ESI,ESI
//   Label: LAB_004c0ccb
// 004c0ccd: XOR EBX,EBX
// 004c0ccf: MOV EDI,dword ptr [0x006810c8]
//   Label: LAB_004c0ccf
//   XREF to: 006810c8 (READ)
// 004c0cd5: CMP EBX,dword ptr [EDI + 0x14f098]
//   XREF to: 03263310 (READ)
// 004c0cdb: JL 0x004c0d44
//   XREF to: 004c0d44 (CONDITIONAL_JUMP)
// 004c0cdd: ADD ESP,0x44
// 004c0ce0: POP EBP
// 004c0ce1: POP EDI
// 004c0ce2: POP ESI
// 004c0ce3: POP EBX
// 004c0ce4: RET
// 004c0ce5: MOV EDX,dword ptr [0x02cf6a80]
//   Label: LAB_004c0ce5
//   XREF to: 02cf6a80 (READ)
// 004c0ceb: MOV EAX,dword ptr [EBP + 0x3c]
// 004c0cee: IMUL EDX
// 004c0cf0: SHRD EAX,EDX,0x10
// 004c0cf4: MOV ECX,dword ptr [EBP + 0x38]
// 004c0cf7: SUB ECX,EAX
// 004c0cf9: MOV dword ptr [EBP + 0x38],ECX
// 004c0cfc: TEST ECX,ECX
// 004c0cfe: JGE 0x004c0b50
//   XREF to: 004c0b50 (CONDITIONAL_JUMP)
// 004c0d04: MOV dword ptr [EBP + 0x18],0x0
// 004c0d0b: MOV dword ptr [EBP + 0x38],0x0
// 004c0d12: JMP 0x004c0b50
//   XREF to: 004c0b50 (UNCONDITIONAL_JUMP)
// 004c0d17: CMP ESI,0x2
//   Label: LAB_004c0d17
// 004c0d1a: JNZ 0x004c0d30
//   XREF to: 004c0d30 (CONDITIONAL_JUMP)
// 004c0d1c: MOV EBX,0x40a00000
// 004c0d21: MOV ECX,0x3f800000
// 004c0d26: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004c0d2a: MOV dword ptr [ESP + 0x40],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004c0d2e: JMP 0x004c0ccb
//   XREF to: 004c0ccb (UNCONDITIONAL_JUMP)
// 004c0d30: MOV EDX,0x40a00000
//   Label: LAB_004c0d30
// 004c0d35: MOV EAX,0x3f800000
// 004c0d3a: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004c0d3e: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004c0d42: JMP 0x004c0ccb
//   XREF to: 004c0ccb (UNCONDITIONAL_JUMP)
// 004c0d44: MOV EAX,ESP
//   Label: LAB_004c0d44
// 004c0d46: PUSH EAX
// 004c0d47: MOV EDI,dword ptr [EDI + ESI*0x1 + 0x14f09c]
//   XREF to: 03263314 (READ)
// 004c0d4e: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004c0d53: ADD ESP,0x4
// 004c0d56: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 004c0d5a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004c0d5e: MOV EAX,ESP
// 004c0d60: PUSH EAX
// 004c0d61: PUSH dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 004c0d65: PUSH EBP
// 004c0d66: MOV EDX,dword ptr [EDI + 0x154]
// 004c0d6c: PUSH EDI
// 004c0d6d: ADD ESI,0x4
// 004c0d70: INC EBX
// 004c0d71: CALL dword ptr [EDX + 0x114]
// 004c0d77: ADD ESP,0x10
// 004c0d7a: JMP 0x004c0ccf
//   XREF to: 004c0ccf (UNCONDITIONAL_JUMP)
