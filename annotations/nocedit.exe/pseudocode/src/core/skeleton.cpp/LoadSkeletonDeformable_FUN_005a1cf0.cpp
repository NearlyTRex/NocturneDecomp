// Name: core_skeleton.cpp_LoadSkeletonDeformable_FUN_005a1cf0
// Address: 005a1cf0
// Address Range: [[005a1cf0, 005a1dbb]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_LoadSkeletonDeformable_FUN_005a1cf0()
// Cross-references:
//   core_baron.cpp_CBaronWeapon_FUN_00413da0 (00413da0) at 00413db2 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450 (005a0450) at 005a045a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064f038
//   TerminatedCString s_Can_t_load_s_because_def_0064f04d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_DeformableModelCount
//   CDeformableModel[64] g_DeformableModelPool
//   undefined4 DAT_03695850
//   undefined4 DAT_0369e850
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780
//   core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

CDeformableModel * core_skeleton_cpp_LoadSkeletonDeformable_FUN_005a1cf0(void)

{
  int iVar1;
  int iVar2;
  CDeformableModel *this_ptr;
  char *str1;
  char *in_stack_00000004;
  
  iVar2 = 0;
  if (0 < g_DeformableModelCount) {
    str1 = g_DeformableModelPool[0].model_identifier;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,in_stack_00000004);
      if (iVar1 == 0) {
        return g_DeformableModelPool + iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x9000;
    } while (iVar2 < g_DeformableModelCount);
  }
  if (0x3f < g_DeformableModelCount) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x1057;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Can't load %s because deformable model manager is full.  (Size is %d)",in_stack_00000004,0x40);
  }
  this_ptr = g_DeformableModelPool + g_DeformableModelCount;
  g_DeformableModelCount = g_DeformableModelCount + 1;
  core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(this_ptr,in_stack_00000004);
  core_skeleton_cpp_CDeformableModel_captureTextures_FUN_0059a780(this_ptr);
  return this_ptr;
}


// Assembly code:
// 005a1cf0: PUSH EBX
//   Label: core_skeleton.cpp_LoadSkeletonDeformable_FUN_005a1cf0
// 005a1cf1: PUSH ESI
// 005a1cf2: PUSH EDI
// 005a1cf3: PUSH EBP
// 005a1cf4: MOV EBP,ESP
// 005a1cf6: MOV EDX,dword ptr [0x0368c89c]
//   XREF to: 0368c89c (READ)
// 005a1cfc: XOR EBX,EBX
// 005a1cfe: TEST EDX,EDX
// 005a1d00: JLE 0x005a1d40
//   XREF to: 005a1d40 (CONDITIONAL_JUMP)
// 005a1d02: MOV ESI,0x368c8a0
//   XREF to: 0368c8a0 (DATA)
// 005a1d07: ADD ESI,0x8fb0
// 005a1d0d: IMUL EAX,EBX,0x9000
//   Label: LAB_005a1d0d
// 005a1d13: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a1d16: PUSH EDI
// 005a1d17: MOV EDI,0x368c8a0
//   XREF to: 0368c8a0 (DATA)
// 005a1d1c: PUSH ESI
//   XREF to: 03695850 (DATA)
//   XREF to: 0369e850 (DATA)
// 005a1d1d: ADD EDI,EAX
// 005a1d1f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a1d24: ADD ESP,0x8
// 005a1d27: TEST EAX,EAX
// 005a1d29: JZ 0x005a1db5
//   XREF to: 005a1db5 (CONDITIONAL_JUMP)
// 005a1d2f: MOV ECX,dword ptr [0x0368c89c]
//   XREF to: 0368c89c (READ)
// 005a1d35: INC EBX
// 005a1d36: ADD ESI,0x9000
// 005a1d3c: CMP EBX,ECX
// 005a1d3e: JL 0x005a1d0d
//   XREF to: 005a1d0d (CONDITIONAL_JUMP)
// 005a1d40: CMP dword ptr [0x0368c89c],0x40
//   Label: LAB_005a1d40
//   XREF to: 0368c89c (READ)
// 005a1d47: JL 0x005a1d72
//   XREF to: 005a1d72 (CONDITIONAL_JUMP)
// 005a1d49: PUSH 0x40
// 005a1d4b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a1d4e: PUSH EAX
// 005a1d4f: MOV ESI,0x64f038
//   XREF to: 0064f038 (DATA)
// 005a1d54: MOV EDI,0x1057
// 005a1d59: PUSH 0x64f04d
//   XREF to: 0064f04d (DATA)
// 005a1d5e: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005a1d64: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a1d6a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a1d6f: ADD ESP,0xc
// 005a1d72: MOV EBX,dword ptr [0x0368c89c]
//   Label: LAB_005a1d72
//   XREF to: 0368c89c (READ)
// 005a1d78: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a1d7b: LEA EAX,[EBX*0x8 + 0x0]
// 005a1d82: MOV ECX,dword ptr [0x0368c89c]
//   XREF to: 0368c89c (READ)
// 005a1d88: ADD EAX,EBX
// 005a1d8a: MOV EBX,0x368c8a0
//   XREF to: 0368c8a0 (DATA)
// 005a1d8f: SHL EAX,0xc
// 005a1d92: PUSH EDX
// 005a1d93: ADD EBX,EAX
// 005a1d95: INC ECX
// 005a1d96: PUSH EBX
// 005a1d97: MOV dword ptr [0x0368c89c],ECX
//   XREF to: 0368c89c (WRITE)
// 005a1d9d: CALL core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
//   XREF to: 0059b8d0 (UNCONDITIONAL_CALL)
// 005a1da2: ADD ESP,0x8
// 005a1da5: PUSH EBX
// 005a1da6: CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780
//   XREF to: 0059a780 (UNCONDITIONAL_CALL)
// 005a1dab: ADD ESP,0x4
// 005a1dae: MOV EAX,EBX
// 005a1db0: POP EBP
// 005a1db1: POP EDI
// 005a1db2: POP ESI
// 005a1db3: POP EBX
// 005a1db4: RET
// 005a1db5: MOV EAX,EDI
//   Label: LAB_005a1db5
//   XREF to: 0368c8a0 (DATA)
// 005a1db7: POP EBP
// 005a1db8: POP EDI
// 005a1db9: POP ESI
// 005a1dba: POP EBX
// 005a1dbb: RET
