// Name: core_setedit.cpp_FUN_00581450
// Address: 00581450
// Address Range: [[00581450, 0058151a]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00581450()
// Globals:
//   TerminatedCString s_Outside_006489f3
//   TerminatedCString s_Small_006489fb
//   TerminatedCString s_Medium_e_g_Mausoleum_00648a01
//   TerminatedCString s_Large_e_g_Warehouse_00648a19
//   TerminatedCString s_Humongous_00648a30
// Function calls:
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

undefined4 core_setedit_cpp_FUN_00581450(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int *in_stack_00000008;
  char *in_stack_0000001c;
  CStrList_vtable *in_stack_fffffc70;
  CStrList_vtable *in_stack_fffffc74;
  CStrList_vtable *in_stack_fffffc78;
  CStrList_vtable *in_stack_fffffc7c;
  uint in_stack_fffffc80;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc54);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc58,"Outside");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc5c,"Small");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffc60,"Medium (e.g. Mausoleum)");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffc64,"Large (e.g. Warehouse)");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc68,"Humongous");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc6c,in_stack_0000001c,*in_stack_00000008,0);
  if (-1 < iVar1) {
    *in_stack_00000008 = iVar1;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc70,0,(uint)in_stack_fffffc70,(uint)in_stack_fffffc74,
               (uint)in_stack_fffffc78,(uint)in_stack_fffffc7c,in_stack_fffffc80);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc70,0,(uint)in_stack_fffffc70,(uint)in_stack_fffffc74,
             (uint)in_stack_fffffc78,(uint)in_stack_fffffc7c,in_stack_fffffc80);
  return 0;
}


// Assembly code:
// 00581450: PUSH EBX
//   Label: core_setedit.cpp_FUN_00581450
// 00581451: SUB ESP,0x3a8
// 00581457: MOV EBX,dword ptr [ESP + 0x3b4]
//   XREF to: Stack[0x8] (READ)
// 0058145e: MOV EAX,ESP
// 00581460: PUSH EAX
// 00581461: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00581466: ADD ESP,0x4
// 00581469: PUSH 0x6489f3
//   XREF to: 006489f3 (DATA)
// 0058146e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 00581472: PUSH EAX
// 00581473: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581478: ADD ESP,0x8
// 0058147b: PUSH 0x6489fb
//   XREF to: 006489fb (DATA)
// 00581480: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 00581484: PUSH EAX
// 00581485: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0058148a: ADD ESP,0x8
// 0058148d: PUSH 0x648a01
//   XREF to: 00648a01 (DATA)
// 00581492: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 00581496: PUSH EAX
// 00581497: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0058149c: ADD ESP,0x8
// 0058149f: PUSH 0x648a19
//   XREF to: 00648a19 (DATA)
// 005814a4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 005814a8: PUSH EAX
// 005814a9: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005814ae: ADD ESP,0x8
// 005814b1: PUSH 0x648a30
//   XREF to: 00648a30 (DATA)
// 005814b6: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 005814ba: PUSH EAX
// 005814bb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005814c0: ADD ESP,0x8
// 005814c3: PUSH 0x0
// 005814c5: MOV EDX,dword ptr [EBX]
// 005814c7: PUSH EDX
// 005814c8: MOV ECX,dword ptr [ESP + 0x3b8]
//   XREF to: Stack[0x4] (READ)
// 005814cf: PUSH ECX
// 005814d0: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3ac] (DATA)
// 005814d4: PUSH EAX
// 005814d5: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005814da: ADD ESP,0x10
// 005814dd: TEST EAX,EAX
// 005814df: JL 0x00581501
//   XREF to: 00581501 (CONDITIONAL_JUMP)
// 005814e1: PUSH 0x0
// 005814e3: MOV dword ptr [EBX],EAX
// 005814e5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 005814e9: PUSH EAX
// 005814ea: MOV EBX,0x1
// 005814ef: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005814f4: ADD ESP,0x8
// 005814f7: MOV EAX,EBX
// 005814f9: ADD ESP,0x3a8
// 005814ff: POP EBX
// 00581500: RET
// 00581501: XOR EBX,EBX
//   Label: LAB_00581501
// 00581503: PUSH EBX
// 00581504: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 00581508: PUSH EAX
// 00581509: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0058150e: ADD ESP,0x8
// 00581511: MOV EAX,EBX
// 00581513: ADD ESP,0x3a8
// 00581519: POP EBX
// 0058151a: RET
