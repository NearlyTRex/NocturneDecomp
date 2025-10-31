// Name: core_script.cpp_FUN_00566bc0
// Address: 00566bc0
// Address Range: [[00566bc0, 00566c14]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566bc0()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053997a [UNCONDITIONAL_CALL]
// Globals:
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseX
//   int g_MouseY
//   undefined4 DAT_03114208
// Function calls:
//   core_script.cpp_FUN_00566c20
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00566bc0(undefined4 param_1) */

void core_script_cpp_FUN_00566bc0(void)

{
  int iVar1;
  
  iVar1 = core_script_cpp_FUN_00566c20();
  if (iVar1 == 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920
            (g_CEditorToolsPtr,1,DAT_03114208,0);
  return;
}


// Assembly code:
// 00566bc0: PUSH EBX
//   Label: core_script.cpp_FUN_00566bc0
// 00566bc1: SUB ESP,0x8
// 00566bc4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8] (DATA)
// 00566bc8: PUSH EAX
// 00566bc9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xc] (DATA)
// 00566bcd: PUSH EAX
// 00566bce: MOV EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 00566bd4: PUSH EDX
// 00566bd5: MOV ECX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 00566bdb: PUSH ECX
// 00566bdc: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00566be0: PUSH EBX
// 00566be1: CALL core_script.cpp_FUN_00566c20
//   XREF to: 00566c20 (UNCONDITIONAL_CALL)
// 00566be6: ADD ESP,0x14
// 00566be9: TEST EAX,EAX
// 00566beb: JNZ 0x00566bf2
//   XREF to: 00566bf2 (CONDITIONAL_JUMP)
// 00566bed: ADD ESP,0x8
// 00566bf0: POP EBX
// 00566bf1: RET
// 00566bf2: PUSH EDI
//   Label: LAB_00566bf2
// 00566bf3: PUSH ESI
// 00566bf4: PUSH 0x0
// 00566bf6: MOV ESI,dword ptr [0x03114208]
//   XREF to: 03114208 (READ)
// 00566bfc: PUSH ESI
// 00566bfd: PUSH 0x1
// 00566bff: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00566c05: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00566c06: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
//   XREF to: 004a2920 (UNCONDITIONAL_CALL)
// 00566c0b: ADD ESP,0x10
// 00566c0e: POP ESI
// 00566c0f: POP EDI
// 00566c10: ADD ESP,0x8
// 00566c13: POP EBX
// 00566c14: RET
