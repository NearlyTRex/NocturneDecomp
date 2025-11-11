// Name: core_sound.cpp_CSound_FUN_005b3d20
// Address: 005b3d20
// Address Range: [[005b3d20, 005b3db8]]
// Convention: __cdecl
// Signature: int core_sound.cpp_CSound_FUN_005b3d20(CSound * this_ptr)
// Cross-references:
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580f40 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_OFF_00652855
//   TerminatedCString s_GENERIC_00652859
//   void* PTR_s_OFF_00681efc = 00652855
//   void* PTR_s_GENERIC_00681f0c = 00652859
// Function calls:
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

int __cdecl core_sound_cpp_CSound_FUN_005b3d20(CSound *this_ptr)

{
  undefined4 *puVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000010;
  int *in_stack_00000014;
  int *in_stack_00000018;
  CStrList_vtable *in_stack_fffffc60;
  CStrList_vtable *in_stack_fffffc64;
  CStrList_vtable *in_stack_fffffc68;
  CStrList_vtable *in_stack_fffffc6c;
  uint in_stack_fffffc70;
  
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc54);
  do {
    puVar1 = (undefined4 *)((int)&PTR_s_OFF_00681efc + iVar2);
    iVar2 = iVar2 + 0x10;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc58,(char *)*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc5c,in_stack_00000010,*in_stack_00000014,0);
  if (-1 < iVar2) {
    *in_stack_00000018 = iVar2;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc60,0,(uint)in_stack_fffffc60,(uint)in_stack_fffffc64,
               (uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,in_stack_fffffc70);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc60,0,(uint)in_stack_fffffc60,(uint)in_stack_fffffc64,
             (uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,in_stack_fffffc70);
  return 0;
}


// Assembly code:
// 005b3d20: PUSH EBX
//   Label: core_sound.cpp_CSound_FUN_005b3d20
// 005b3d21: SUB ESP,0x3a8
// 005b3d27: MOV EAX,ESP
// 005b3d29: PUSH EAX
// 005b3d2a: XOR EBX,EBX
// 005b3d2c: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 005b3d31: ADD ESP,0x4
// 005b3d34: MOV EDX,dword ptr [EBX + 0x681efc]
//   Label: LAB_005b3d34
//   XREF to: 00652855 (PARAM)
//   XREF to: 00652859 (PARAM)
//   XREF to: 00681efc (READ)
//   XREF to: 00681f0c (READ)
// 005b3d3a: PUSH EDX
//   XREF to: 00652855 (DATA)
//   XREF to: 00652859 (DATA)
// 005b3d3b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 005b3d3f: PUSH EAX
// 005b3d40: ADD EBX,0x10
// 005b3d43: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005b3d48: ADD ESP,0x8
// 005b3d4b: CMP EBX,0x1b0
// 005b3d51: JNZ 0x005b3d34
//   XREF to: 005b3d34 (CONDITIONAL_JUMP)
// 005b3d53: MOV EAX,dword ptr [ESP + 0x3b8]
//   XREF to: Stack[0xc] (READ)
// 005b3d5a: PUSH 0x0
// 005b3d5c: MOV ECX,dword ptr [EAX]
// 005b3d5e: PUSH ECX
// 005b3d5f: MOV EBX,dword ptr [ESP + 0x3bc]
//   XREF to: Stack[0x8] (READ)
// 005b3d66: PUSH EBX
// 005b3d67: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3ac] (DATA)
// 005b3d6b: PUSH EAX
// 005b3d6c: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005b3d71: ADD ESP,0x10
// 005b3d74: TEST EAX,EAX
// 005b3d76: JL 0x005b3d9f
//   XREF to: 005b3d9f (CONDITIONAL_JUMP)
// 005b3d78: MOV EBX,dword ptr [ESP + 0x3b8]
//   XREF to: Stack[0xc] (READ)
// 005b3d7f: PUSH 0x0
// 005b3d81: MOV dword ptr [EBX],EAX
// 005b3d83: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 005b3d87: PUSH EAX
// 005b3d88: MOV EBX,0x1
// 005b3d8d: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005b3d92: ADD ESP,0x8
// 005b3d95: MOV EAX,EBX
// 005b3d97: ADD ESP,0x3a8
// 005b3d9d: POP EBX
// 005b3d9e: RET
// 005b3d9f: XOR EBX,EBX
//   Label: LAB_005b3d9f
// 005b3da1: PUSH EBX
// 005b3da2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 005b3da6: PUSH EAX
// 005b3da7: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005b3dac: ADD ESP,0x8
// 005b3daf: MOV EAX,EBX
// 005b3db1: ADD ESP,0x3a8
// 005b3db7: POP EBX
// 005b3db8: RET
