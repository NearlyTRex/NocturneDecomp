// Name: core_shotgun.cpp_FUN_00587f70
// Address: 00587f70
// Address Range: [[00587f70, 00588059]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_FUN_00587f70()
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonLight g_CDemonLightInstance
//   undefined4 g_CDemonLightInstance.base.base.position.x
//   undefined4 g_CDemonLightInstance.base.base.position.y
//   undefined4 g_CDemonLightInstance.base.base.position.z
//   undefined4 DAT_02d7eb00
//   undefined4 g_CDemonLightInstance.base.base.projection_scale
//   undefined4 g_CDemonLightInstance.base.max_distance
//   undefined4 g_CDemonLightInstance.light_enabled_flag
//   undefined4 g_CDemonLightInstance.field17_0x1cbc
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
//   core_weapon.cpp_CWeapon_process_FUN_005ee110

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_shotgun.cpp_FUN_00587f70(undefined4 param_1, undefined4
   param_2) */

void core_shotgun_cpp_FUN_00587f70(void)

{
  CWeapon *pCVar1;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  CWeapon *in_stack_00000004;
  CDemonLight *local_14;
  float fStack_10;
  float in_stack_fffffff4;
  
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 0) {
    g_CDemonLightInstance.light_enabled_flag = 1;
    input_local_point =
         (CVector3f *)
         (*(in_stack_00000004->base_actor).vtable[1].renderOpaque)(&in_stack_00000004->base_actor);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,(CVector3f *)&local_14,input_local_point);
    g_CDemonLightInstance.field17_0x1cbc = 0;
    if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[0].y) {
      g_CDemonLightInstance.base.base.position.x = (int)fStack_10;
      g_CDemonLightInstance.base.base.position.y = (int)in_stack_fffffff4;
      g_CDemonLightInstance.base.base.position.z = unaff_EBP;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonLightInstance.base.base.rotation_matrix,
               (CVector3f *)&(in_stack_00000004->base_actor).orient);
    g_CDemonLightInstance.base.max_distance =
         *(float *)(in_stack_00000004[1].base_actor.actor_name + 8);
    g_CDemonLightInstance.base.base.projection_scale = 112.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,1.0);
    local_14 = &g_CDemonLightInstance;
    g_CDemonLightInstance.antialiasing_enabled = 0;
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
  }
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base_actor).actor_name[4] = '\0';
  (pCVar1->base_actor).actor_name[5] = '\0';
  (pCVar1->base_actor).actor_name[6] = '\0';
  (pCVar1->base_actor).actor_name[7] = '\0';
  fStack_10 = 8.127293e-39;
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004);
  return;
}


// Assembly code:
// 00587f70: PUSH EBX
//   Label: core_shotgun.cpp_FUN_00587f70
// 00587f71: PUSH EBP
// 00587f72: SUB ESP,0x18
// 00587f75: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00587f79: CMP dword ptr [EBX + 0x57c],0x0
// 00587f80: JNZ 0x00587f9f
//   XREF to: 00587f9f (CONDITIONAL_JUMP)
// 00587f82: PUSH dword ptr [ESP + 0x28]
//   Label: LAB_00587f82
//   XREF to: Stack[0x8] (READ)
// 00587f86: PUSH EBX
// 00587f87: MOV dword ptr [EBX + 0x57c],0x0
// 00587f91: CALL core_weapon.cpp_CWeapon_process_FUN_005ee110
//   XREF to: 005ee110 (UNCONDITIONAL_CALL)
// 00587f96: ADD ESP,0x8
// 00587f99: ADD ESP,0x18
// 00587f9c: POP EBP
// 00587f9d: POP EBX
// 00587f9e: RET
// 00587f9f: PUSH EDI
//   Label: LAB_00587f9f
// 00587fa0: PUSH ESI
// 00587fa1: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x14] (DATA)
// 00587fa5: PUSH EAX
// 00587fa6: MOV ECX,0x1
// 00587fab: MOV EDX,dword ptr [EBX + 0x154]
// 00587fb1: PUSH EBX
// 00587fb2: MOV dword ptr [0x02d807a4],ECX
//   XREF to: 02d807a4 (WRITE)
// 00587fb8: CALL dword ptr [EDX + 0xf4]
// 00587fbe: ADD ESP,0x8
// 00587fc1: PUSH EAX
// 00587fc2: LEA EAX,[ESP + 0xc]
// 00587fc6: PUSH EAX
// 00587fc7: PUSH EBX
// 00587fc8: XOR ESI,ESI
// 00587fca: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00587fcf: LEA EAX,[ESP + 0x14]
// 00587fd3: ADD ESP,0xc
// 00587fd6: MOV dword ptr [0x02d807ac],ESI
//   XREF to: 02d807ac (WRITE)
// 00587fdc: CMP EAX,0x2d7eaf4
//   XREF to: 02d7eaf4 (DATA)
// 00587fe1: JZ 0x00587ffe
//   XREF to: 00587ffe (CONDITIONAL_JUMP)
// 00587fe3: MOV EAX,dword ptr [ESP + 0x8]
// 00587fe7: MOV [0x02d7eaf4],EAX
//   XREF to: 02d7eaf4 (WRITE)
// 00587fec: MOV EAX,dword ptr [ESP + 0xc]
// 00587ff0: MOV [0x02d7eaf8],EAX
//   XREF to: 02d7eaf8 (WRITE)
// 00587ff5: MOV EAX,dword ptr [ESP + 0x10]
// 00587ff9: MOV [0x02d7eafc],EAX
//   XREF to: 02d7eafc (WRITE)
// 00587ffe: LEA EAX,[EBX + 0x30]
//   Label: LAB_00587ffe
// 00588001: PUSH EAX
// 00588002: PUSH 0x2d7eb00
//   XREF to: 02d7eb00 (DATA)
// 00588007: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0058800c: ADD ESP,0x8
// 0058800f: MOV EDI,0x42e00000
// 00588014: PUSH 0x3f800000
// 00588019: FLD float ptr [EBX + 0x580]
// 0058801f: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 00588024: FSTP float ptr [0x02d7ec30]
//   XREF to: 02d7ec30 (WRITE)
// 0058802a: MOV dword ptr [0x02d7eb28],EDI
//   XREF to: 02d7eb28 (WRITE)
// 00588030: CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   XREF to: 004765e0 (UNCONDITIONAL_CALL)
// 00588035: ADD ESP,0x8
// 00588038: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 0058803d: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00588042: XOR EBP,EBP
// 00588044: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00588045: MOV dword ptr [0x02d807c0],EBP
//   XREF to: 02d807c0 (WRITE)
// 0058804b: CALL core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
//   XREF to: 0056d090 (UNCONDITIONAL_CALL)
// 00588050: ADD ESP,0x8
// 00588053: POP ESI
// 00588054: POP EDI
// 00588055: JMP 0x00587f82
//   XREF to: 00587f82 (UNCONDITIONAL_JUMP)
