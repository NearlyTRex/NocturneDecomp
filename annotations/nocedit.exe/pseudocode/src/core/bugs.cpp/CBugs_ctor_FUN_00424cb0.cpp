// Name: core_bugs.cpp_CBugs_ctor_FUN_00424cb0
// Address: 00424cb0
// Address Range: [[00424cb0, 00424e4f]]
// Convention: __cdecl
// Signature: CBugs * core_bugs.cpp_CBugs_ctor_FUN_00424cb0(CBugs * this_ptr)
// Cross-references:
//   core_bugs.cpp_FUN_00424c70 (00424c70) at 00424c8a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_roach_kfm_00616ce0
//   TerminatedCString s_hroach_kfm_00616cea
//   TerminatedCString s_mroach_kfm_00616cf5
//   TerminatedCString s_guul_dfm_00616d00
//   TerminatedCString s_true_00616d09
//   undefined4 s_rue_00616d0a
//   undefined4 s_ue_00616d0b
//   undefined4 s_e_00616d0c
//   TerminatedCString s_true_00616d0e
//   undefined4 s_rue_00616d0f
//   undefined4 s_ue_00616d10
//   undefined4 s_e_00616d11
//   TerminatedCString s_false_00616d13
//   undefined4 s_alse_00616d14
//   undefined4 s_lse_00616d15
//   undefined4 s_se_00616d16
//   CDemonActor_vtable g_CBugsVTable
//   WatcomTypeInfo g_SBugTypeInfo
//   WatcomTypeInfo g_CKeyFramedModelInstanceTypeInfo
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00424cb0(CBugs *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  void *pvVar3;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  char *pcStack0000000c;
  
  pCVar2 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (pCVar2[1].base_character.base_actor.actor_name + 0x10,400,&g_SBugTypeInfo);
  this_ptr_00 = (CKeyFramedModelInstance *)
                crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                          ((void *)((int)pvVar3 + 0x6404),4,&g_CKeyFramedModelInstanceTypeInfo);
  this_ptr_00[-0xc3].part_visibility_flags[0] = (int)&g_CBugsVTable;
  this_ptr_00[-0xffffffff00000044].animation_state[8] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[9] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[10] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[0xb] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[0xc] = '2';
  this_ptr_00[-0xffffffff00000044].animation_state[0xd] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[0xe] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[0xf] = '\0';
  crt_memory_c_memset_FUN_005fde40(this_ptr_00[-0x44].animation_state + 0x10,0,0x6400);
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x3;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"roach.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00 + 1,"hroach.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00 + 2,"mroach.kfm");
  pcStack0000000c = "guul.dfm";
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            ((CDeformableModelInstance *)(this_ptr_00[-0xc3].part_visibility_flags + 1));
  this_ptr_00[5].model_name[0x4c] = '\0';
  this_ptr_00[5].model_name[0x4d] = '\0';
  this_ptr_00[5].model_name[0x4e] = '\0';
  this_ptr_00[5].model_name[0x4f] = '\0';
  pcVar4 = "true";
  this_ptr_00[5].model_name[0x50] = '\0';
  this_ptr_00[5].model_name[0x51] = '\0';
  this_ptr_00[5].model_name[0x52] = '\0';
  this_ptr_00[5].model_name[0x53] = '\0';
  this_ptr_00[5].animation_state[0x24] = '\0';
  this_ptr_00[5].animation_state[0x25] = '\0';
  this_ptr_00[5].animation_state[0x26] = '\0';
  this_ptr_00[5].animation_state[0x27] = '\0';
  pcVar5 = this_ptr_00[0x4f].model_name + 0x1c;
  this_ptr_00[0x4f].model_name[0x14] = '\0';
  this_ptr_00[0x4f].model_name[0x15] = '\0';
  this_ptr_00[0x4f].model_name[0x16] = '\0';
  this_ptr_00[0x4f].model_name[0x17] = '\0';
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "true";
  pcVar5 = this_ptr_00[0x4f].animation_state + 0x1c;
  this_ptr_00[0x4f].model_name[0x18] = '\0';
  this_ptr_00[0x4f].model_name[0x19] = '\0';
  this_ptr_00[0x4f].model_name[0x1a] = '\0';
  this_ptr_00[0x4f].model_name[0x1b] = '\0';
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "false";
  pcVar5 = this_ptr_00[0x4f].animation_state + 0x80;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  this_ptr_00[-0xa5].part_visibility_flags[0] = 0x401f5c29;
  this_ptr_00[-0xa5].part_visibility_flags[1] = 0x40200000;
  this_ptr_00[-0xa5].part_visibility_flags[4] = 0x3fa66666;
  this_ptr_00[-0xa5].part_visibility_flags[5] = 0x3fc00000;
  return (CBugs *)(this_ptr_00[-0xc4].part_visibility_flags + 10);
}


// Assembly code:
// 00424cb0: PUSH EBX
//   Label: core_bugs.cpp_CBugs_ctor_FUN_00424cb0
// 00424cb1: PUSH ESI
// 00424cb2: PUSH EDI
// 00424cb3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00424cb7: PUSH EBX
// 00424cb8: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 00424cbd: ADD ESP,0x4
// 00424cc0: PUSH 0x65b750
//   XREF to: 0065b750 (DATA)
// 00424cc5: PUSH 0x190
// 00424cca: ADD EAX,0xbec4
// 00424ccf: PUSH EAX
// 00424cd0: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00424cd5: ADD ESP,0xc
// 00424cd8: PUSH 0x65b770
//   XREF to: 0065b770 (DATA)
// 00424cdd: PUSH 0x4
// 00424cdf: ADD EAX,0x6404
// 00424ce4: PUSH EAX
// 00424ce5: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00424cea: ADD ESP,0xc
// 00424ced: LEA EBX,[EAX + 0xfffedd38]
// 00424cf3: PUSH 0x6400
// 00424cf8: MOV dword ptr [EBX + 0x154],0x65b5e4
//   XREF to: 0065b5e4 (DATA)
// 00424d02: PUSH 0x0
// 00424d04: LEA EAX,[EBX + 0xbec4]
// 00424d0a: MOV dword ptr [EBX + 0xbebc],0x0
// 00424d14: PUSH EAX
// 00424d15: MOV dword ptr [EBX + 0xbec0],0x32
// 00424d1f: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00424d24: ADD ESP,0xc
// 00424d27: PUSH 0x616ce0
//   XREF to: 00616ce0 (DATA)
// 00424d2c: LEA EAX,[EBX + 0x122c8]
// 00424d32: PUSH EAX
// 00424d33: MOV dword ptr [EBX + 0x122c4],0x3
// 00424d3d: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00424d42: ADD ESP,0x8
// 00424d45: PUSH 0x616cea
//   XREF to: 00616cea (DATA)
// 00424d4a: LEA EAX,[EBX + 0x12444]
// 00424d50: PUSH EAX
// 00424d51: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00424d56: ADD ESP,0x8
// 00424d59: PUSH 0x616cf5
//   XREF to: 00616cf5 (DATA)
// 00424d5e: LEA EAX,[EBX + 0x125c0]
// 00424d64: PUSH EAX
// 00424d65: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00424d6a: ADD ESP,0x8
// 00424d6d: PUSH 0x616d00
//   XREF to: 00616d00 (DATA)
// 00424d72: LEA EAX,[EBX + 0x158]
// 00424d78: PUSH EAX
// 00424d79: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00424d7e: MOV dword ptr [EBX + 0x12af8],0x0
// 00424d88: MOV ESI,0x616d09
//   XREF to: 00616d09 (DATA)
// 00424d8d: MOV dword ptr [EBX + 0x12afc],0x0
// 00424d97: ADD ESP,0x8
// 00424d9a: MOV dword ptr [EBX + 0x12b34],0x0
// 00424da4: LEA EDI,[EBX + 0x198a0]
// 00424daa: MOV dword ptr [EBX + 0x19898],0x0
// 00424db4: PUSH EDI
// 00424db5: MOV AL,byte ptr [ESI]
//   Label: LAB_00424db5
//   XREF to: 00616d09 (READ)
//   XREF to: 00616d0b (READ)
// 00424db7: MOV byte ptr [EDI],AL
// 00424db9: CMP AL,0x0
// 00424dbb: JZ 0x00424dcd
//   XREF to: 00424dcd (CONDITIONAL_JUMP)
// 00424dbd: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00616d0a (READ)
//   XREF to: 00616d0c (READ)
// 00424dc0: ADD ESI,0x2
// 00424dc3: MOV byte ptr [EDI + 0x1],AL
// 00424dc6: ADD EDI,0x2
// 00424dc9: CMP AL,0x0
// 00424dcb: JNZ 0x00424db5
//   XREF to: 00424db5 (CONDITIONAL_JUMP)
// 00424dcd: POP EDI
//   Label: LAB_00424dcd
// 00424dce: MOV ESI,0x616d0e
//   XREF to: 00616d0e (DATA)
// 00424dd3: LEA EDI,[EBX + 0x19904]
// 00424dd9: MOV dword ptr [EBX + 0x1989c],0x0
// 00424de3: PUSH EDI
// 00424de4: MOV AL,byte ptr [ESI]
//   Label: LAB_00424de4
//   XREF to: 00616d0e (READ)
//   XREF to: 00616d10 (READ)
// 00424de6: MOV byte ptr [EDI],AL
// 00424de8: CMP AL,0x0
// 00424dea: JZ 0x00424dfc
//   XREF to: 00424dfc (CONDITIONAL_JUMP)
// 00424dec: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00616d0f (READ)
//   XREF to: 00616d11 (READ)
// 00424def: ADD ESI,0x2
// 00424df2: MOV byte ptr [EDI + 0x1],AL
// 00424df5: ADD EDI,0x2
// 00424df8: CMP AL,0x0
// 00424dfa: JNZ 0x00424de4
//   XREF to: 00424de4 (CONDITIONAL_JUMP)
// 00424dfc: POP EDI
//   Label: LAB_00424dfc
// 00424dfd: MOV ESI,0x616d13
//   XREF to: 00616d13 (DATA)
// 00424e02: LEA EDI,[EBX + 0x19968]
// 00424e08: PUSH EDI
// 00424e09: MOV AL,byte ptr [ESI]
//   Label: LAB_00424e09
//   XREF to: 00616d13 (READ)
//   XREF to: 00616d15 (READ)
// 00424e0b: MOV byte ptr [EDI],AL
// 00424e0d: CMP AL,0x0
// 00424e0f: JZ 0x00424e21
//   XREF to: 00424e21 (CONDITIONAL_JUMP)
// 00424e11: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00616d14 (READ)
//   XREF to: 00616d16 (READ)
// 00424e14: ADD ESI,0x2
// 00424e17: MOV byte ptr [EDI + 0x1],AL
// 00424e1a: ADD EDI,0x2
// 00424e1d: CMP AL,0x0
// 00424e1f: JNZ 0x00424e09
//   XREF to: 00424e09 (CONDITIONAL_JUMP)
// 00424e21: POP EDI
//   Label: LAB_00424e21
// 00424e22: MOV dword ptr [EBX + 0x2ddc],0x401f5c29
// 00424e2c: MOV dword ptr [EBX + 0x2de0],0x40200000
// 00424e36: MOV dword ptr [EBX + 0x2dec],0x3fa66666
// 00424e40: MOV EAX,EBX
// 00424e42: MOV dword ptr [EBX + 0x2df0],0x3fc00000
// 00424e4c: POP EDI
// 00424e4d: POP ESI
// 00424e4e: POP EBX
// 00424e4f: RET
