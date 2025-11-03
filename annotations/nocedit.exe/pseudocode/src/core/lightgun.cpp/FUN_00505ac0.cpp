// Name: core_lightgun.cpp_FUN_00505ac0
// Address: 00505ac0
// Address Range: [[00505ac0, 00505b6e]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_00505ac0()
// Cross-references:
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 0050655d [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00505eb8 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00660a44
//   CDemonLight g_CDemonLightInstance
//   undefined4 g_CDemonLightInstance.base.base.position.x
//   undefined4 g_CDemonLightInstance.base.base.position.y
//   undefined4 g_CDemonLightInstance.base.base.position.z
//   undefined4 DAT_02d7eb00
//   undefined4 g_CDemonLightInstance.base.base.projection_scale
//   undefined4 g_CDemonLightInstance.base.max_distance
//   undefined4 g_CDemonLightInstance.light_enabled_flag
//   undefined4 g_CDemonLightInstance.field17_0x1cbc
//   undefined4 g_CDemonLightInstance.antialiasing_enabled
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_lightgun.cpp_FUN_00505ac0(undefined4 param_1) */

void core_lightgun_cpp_FUN_00505ac0
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,
               CDemonActor *param_5)

{
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  int unaff_retaddr;
  
  input_local_point = (CVector3f *)(*param_5->vtable[1].renderOpaque)(param_5);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (param_5,(CVector3f *)&stack0xfffffff8,input_local_point);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.field17_0x1cbc = 0;
  if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.base.position.y) {
    g_CDemonLightInstance.base.base.position.z = (int)param_5;
    g_CDemonLightInstance.base.base.position.x = unaff_EBX;
    g_CDemonLightInstance.base.base.position.y = unaff_retaddr;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&g_CDemonLightInstance.base.base.rotation_matrix,
             (CVector3f *)&param_5->orient);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.projection_scale = _DAT_00660a44;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,1.0);
  return;
}


// Assembly code:
// 00505ac0: PUSH EBX
//   Label: core_lightgun.cpp_FUN_00505ac0
// 00505ac1: PUSH ESI
// 00505ac2: SUB ESP,0x18
// 00505ac5: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00505ac9: MOV EDX,ESP
// 00505acb: PUSH EDX
// 00505acc: MOV EAX,dword ptr [EBX + 0x154]
// 00505ad2: PUSH EBX
// 00505ad3: CALL dword ptr [EAX + 0xf4]
// 00505ad9: ADD ESP,0x8
// 00505adc: PUSH EAX
// 00505add: LEA EAX,[ESP + 0x10]
// 00505ae1: PUSH EAX
// 00505ae2: PUSH EBX
// 00505ae3: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00505ae8: MOV EDX,0x1
// 00505aed: LEA EAX,[ESP + 0x18]
// 00505af1: ADD ESP,0xc
// 00505af4: XOR ECX,ECX
// 00505af6: MOV dword ptr [0x02d807a4],EDX
//   XREF to: 02d807a4 (WRITE)
// 00505afc: MOV dword ptr [0x02d807ac],ECX
//   XREF to: 02d807ac (WRITE)
// 00505b02: CMP EAX,0x2d7eaf4
//   XREF to: 02d7eaf4 (DATA)
// 00505b07: JZ 0x00505b24
//   XREF to: 00505b24 (CONDITIONAL_JUMP)
// 00505b09: MOV EAX,dword ptr [ESP + 0xc]
// 00505b0d: MOV [0x02d7eaf4],EAX
//   XREF to: 02d7eaf4 (WRITE)
// 00505b12: MOV EAX,dword ptr [ESP + 0x10]
// 00505b16: MOV [0x02d7eaf8],EAX
//   XREF to: 02d7eaf8 (WRITE)
// 00505b1b: MOV EAX,dword ptr [ESP + 0x14]
// 00505b1f: MOV [0x02d7eafc],EAX
//   XREF to: 02d7eafc (WRITE)
// 00505b24: ADD EBX,0x30
//   Label: LAB_00505b24
// 00505b27: PUSH EBX
// 00505b28: PUSH 0x2d7eb00
//   XREF to: 02d7eb00 (DATA)
// 00505b2d: MOV ESI,0x1
// 00505b32: MOV EBX,0x42000000
// 00505b37: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00505b3c: ADD ESP,0x8
// 00505b3f: FLD float ptr [0x00660a44]
//   XREF to: 00660a44 (READ)
// 00505b45: PUSH 0x3f800000
// 00505b4a: MOV dword ptr [0x02d7ec30],EBX
//   XREF to: 02d7ec30 (WRITE)
// 00505b50: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 00505b55: FSTP float ptr [0x02d7eb28]
//   XREF to: 02d7eb28 (WRITE)
// 00505b5b: MOV dword ptr [0x02d807c0],ESI
//   XREF to: 02d807c0 (WRITE)
// 00505b61: CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   XREF to: 004765e0 (UNCONDITIONAL_CALL)
// 00505b66: ADD ESP,0x8
// 00505b69: ADD ESP,0x18
// 00505b6c: POP ESI
// 00505b6d: POP EBX
// 00505b6e: RET
