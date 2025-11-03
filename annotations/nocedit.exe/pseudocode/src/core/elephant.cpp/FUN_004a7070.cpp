// Name: core_elephant.cpp_FUN_004a7070
// Address: 004a7070
// Address Range: [[004a7070, 004a7159]]
// Convention: unknown
// Signature: undefined core_elephant.cpp_FUN_004a7070()
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

void core_elephant_cpp_FUN_004a7070(void)

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
    if ((int *)&stack0x00000000 != g_CDemonLightInstance.base.base.rotation_matrix.m[0] + 1) {
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
  fStack_10 = 6.836215e-39;
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004);
  return;
}


// Assembly code:
// 004a7070: PUSH EBX
//   Label: core_elephant.cpp_FUN_004a7070
// 004a7071: PUSH EBP
// 004a7072: SUB ESP,0x18
// 004a7075: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004a7079: CMP dword ptr [EBX + 0x57c],0x0
// 004a7080: JNZ 0x004a709f
//   XREF to: 004a709f (CONDITIONAL_JUMP)
// 004a7082: PUSH dword ptr [ESP + 0x28]
//   Label: LAB_004a7082
//   XREF to: Stack[0x8] (READ)
// 004a7086: PUSH EBX
// 004a7087: MOV dword ptr [EBX + 0x57c],0x0
// 004a7091: CALL core_weapon.cpp_CWeapon_process_FUN_005ee110
//   XREF to: 005ee110 (UNCONDITIONAL_CALL)
// 004a7096: ADD ESP,0x8
// 004a7099: ADD ESP,0x18
// 004a709c: POP EBP
// 004a709d: POP EBX
// 004a709e: RET
// 004a709f: PUSH EDI
//   Label: LAB_004a709f
// 004a70a0: PUSH ESI
// 004a70a1: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x14] (DATA)
// 004a70a5: PUSH EAX
// 004a70a6: MOV ECX,0x1
// 004a70ab: MOV EDX,dword ptr [EBX + 0x154]
// 004a70b1: PUSH EBX
// 004a70b2: MOV dword ptr [0x02d807a4],ECX
//   XREF to: 02d807a4 (WRITE)
// 004a70b8: CALL dword ptr [EDX + 0xf4]
// 004a70be: ADD ESP,0x8
// 004a70c1: PUSH EAX
// 004a70c2: LEA EAX,[ESP + 0xc]
// 004a70c6: PUSH EAX
// 004a70c7: PUSH EBX
// 004a70c8: XOR ESI,ESI
// 004a70ca: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004a70cf: LEA EAX,[ESP + 0x14]
// 004a70d3: ADD ESP,0xc
// 004a70d6: MOV dword ptr [0x02d807ac],ESI
//   XREF to: 02d807ac (WRITE)
// 004a70dc: CMP EAX,0x2d7eaf4
//   XREF to: 02d7eaf4 (DATA)
// 004a70e1: JZ 0x004a70fe
//   XREF to: 004a70fe (CONDITIONAL_JUMP)
// 004a70e3: MOV EAX,dword ptr [ESP + 0x8]
// 004a70e7: MOV [0x02d7eaf4],EAX
//   XREF to: 02d7eaf4 (WRITE)
// 004a70ec: MOV EAX,dword ptr [ESP + 0xc]
// 004a70f0: MOV [0x02d7eaf8],EAX
//   XREF to: 02d7eaf8 (WRITE)
// 004a70f5: MOV EAX,dword ptr [ESP + 0x10]
// 004a70f9: MOV [0x02d7eafc],EAX
//   XREF to: 02d7eafc (WRITE)
// 004a70fe: LEA EAX,[EBX + 0x30]
//   Label: LAB_004a70fe
// 004a7101: PUSH EAX
// 004a7102: PUSH 0x2d7eb00
//   XREF to: 02d7eb00 (DATA)
// 004a7107: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 004a710c: ADD ESP,0x8
// 004a710f: MOV EDI,0x42e00000
// 004a7114: PUSH 0x3f800000
// 004a7119: FLD float ptr [EBX + 0x580]
// 004a711f: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 004a7124: FSTP float ptr [0x02d7ec30]
//   XREF to: 02d7ec30 (WRITE)
// 004a712a: MOV dword ptr [0x02d7eb28],EDI
//   XREF to: 02d7eb28 (WRITE)
// 004a7130: CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   XREF to: 004765e0 (UNCONDITIONAL_CALL)
// 004a7135: ADD ESP,0x8
// 004a7138: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 004a713d: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004a7142: XOR EBP,EBP
// 004a7144: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004a7145: MOV dword ptr [0x02d807c0],EBP
//   XREF to: 02d807c0 (WRITE)
// 004a714b: CALL core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
//   XREF to: 0056d090 (UNCONDITIONAL_CALL)
// 004a7150: ADD ESP,0x8
// 004a7153: POP ESI
// 004a7154: POP EDI
// 004a7155: JMP 0x004a7082
//   XREF to: 004a7082 (UNCONDITIONAL_JUMP)
