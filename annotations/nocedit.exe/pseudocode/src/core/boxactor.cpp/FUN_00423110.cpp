// Name: core_boxactor.cpp_FUN_00423110
// Address: 00423110
// Address Range: [[00423110, 0042314a] [00423150, 00423168] [0042316e, 00423186] [0042318c, 0042320f] [0042322e, 00423237] [00423256, 0042325f] [0042327e, 004232f5]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00423110()
// Cross-references:
//   core_boxactor.cpp_CLightActor_FUN_00423380 (00423380) at 004233ca [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_FUN_00423590 (00423590) at 00423599 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004230b0 = 00423130
//   void* PTR_LAB_004230c4 = 00423206
//   void* PTR_LAB_004230d8 = 0042322e
//   void* PTR_LAB_004230ec = 00423256
//   void* PTR_LAB_004230f0 = 004231ac
//   void* switchdataD_00423100 = 004231e7
//   TerminatedCString s_Custom_0061698f
//   TerminatedCString s_Flashlight_00616996
//   TerminatedCString s_Lantern_006169a1
//   TerminatedCString s_Globe_006169a9
// Function calls:
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

undefined4 core_boxactor_cpp_FUN_00423110(void)

{
  BADSPACEBASE *in_ESP;
  int iVar1;
  undefined4 in_stack_0000000c;
  char *in_stack_00000018;
  CStrList_vtable *in_stack_fffffc68;
  CStrList_vtable *in_stack_fffffc6c;
  CStrList_vtable *in_stack_fffffc70;
  CStrList_vtable *in_stack_fffffc74;
  uint in_stack_fffffc78;
  
  iVar1 = -1;
  switch(in_stack_0000000c) {
  case 0:
  case 1:
  case 2:
  case 3:
    iVar1 = 3;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc50);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Flashlight");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc58,"Lantern");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc5c,"Globe");
  if (in_stack_00000018 != (char *)0x0) {
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc60,"Custom");
  }
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc64,in_stack_00000018,iVar1,0);
  switch(iVar1) {
  case 0:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc68,0,(uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,
               (uint)in_stack_fffffc70,(uint)in_stack_fffffc74,in_stack_fffffc78);
    return 1;
  case 1:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc68,0,(uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,
               (uint)in_stack_fffffc70,(uint)in_stack_fffffc74,in_stack_fffffc78);
    return 2;
  case 2:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc68,0,(uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,
               (uint)in_stack_fffffc70,(uint)in_stack_fffffc74,in_stack_fffffc78);
    return 3;
  case 3:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc68,0,(uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,
               (uint)in_stack_fffffc70,(uint)in_stack_fffffc74,in_stack_fffffc78);
    return 0;
  default:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc68,0,(uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,
               (uint)in_stack_fffffc70,(uint)in_stack_fffffc74,in_stack_fffffc78);
    return 0xffffffff;
  }
}


// Assembly code:
// 00423110: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00423110
// 00423111: PUSH ESI
// 00423112: SUB ESP,0x3a8
// 00423118: MOV EAX,dword ptr [ESP + 0x3bc]
//   XREF to: Stack[0xc] (READ)
// 0042311f: MOV ESI,0xffffffff
// 00423124: CMP EAX,0x3
// 00423127: JA 0x00423135
//   XREF to: 00423135 (CONDITIONAL_JUMP)
// 00423129: JMP dword ptr [EAX*0x4 + 0x4230b0]
//   Label: switchD
//   XREF to: 00423130 (COMPUTED_JUMP)
//   XREF to: 004230b0 (DATA)
// 00423130: MOV ESI,0x3
//   Label: caseD_0
// 00423135: MOV EAX,ESP
//   Label: default
// 00423137: PUSH EAX
// 00423138: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0042313d: MOV EAX,0x4
// 00423142: ADD ESP,0x4
// 00423145: JMP dword ptr [EAX + 0x4230c0]
//   XREF to: 004230c4 (READ)
//   XREF to: 00423206 (COMPUTED_JUMP)
// 00423150: PUSH EBX
//   Label: LAB_00423150
//   XREF to: 00616996 (DATA)
//   XREF to: 0061698f (DATA)
//   XREF to: 006169a1 (DATA)
//   XREF to: 006169a9 (DATA)
// 00423151: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b0] (DATA)
// 00423155: PUSH EAX
// 00423156: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0042315b: MOV EAX,0x8
// 00423160: ADD ESP,0x8
// 00423163: JMP dword ptr [EAX + 0x4230d0]
//   XREF to: 004230d8 (READ)
//   XREF to: 0042322e (COMPUTED_JUMP)
// 0042316e: PUSH EBX
//   Label: LAB_0042316e
//   XREF to: 006169a1 (DATA)
//   XREF to: 0061698f (DATA)
//   XREF to: 00616996 (DATA)
//   XREF to: 006169a9 (DATA)
// 0042316f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b0] (DATA)
// 00423173: PUSH EAX
// 00423174: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00423179: MOV EAX,0xc
// 0042317e: ADD ESP,0x8
// 00423181: JMP dword ptr [EAX + 0x4230e0]
//   XREF to: 004230ec (READ)
//   XREF to: 00423256 (COMPUTED_JUMP)
// 0042318c: PUSH EBX
//   Label: LAB_0042318c
//   XREF to: 006169a9 (DATA)
//   XREF to: 0061698f (DATA)
//   XREF to: 00616996 (DATA)
//   XREF to: 006169a1 (DATA)
// 0042318d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b0] (DATA)
// 00423191: PUSH EAX
// 00423192: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00423197: ADD ESP,0x8
// 0042319a: CMP dword ptr [ESP + 0x3b8],0x0
//   XREF to: Stack[0x8] (READ)
// 004231a2: JZ 0x004231bf
//   XREF to: 004231bf (CONDITIONAL_JUMP)
// 004231a4: XOR EAX,EAX
// 004231a6: JMP dword ptr [EAX + 0x4230f0]
//   XREF to: 004230f0 (READ)
//   XREF to: 004231ac (COMPUTED_JUMP)
// 004231ac: MOV EBX,0x61698f
//   Label: LAB_004231ac
//   XREF to: 0061698f (DATA)
// 004231b1: PUSH EBX
//   Label: LAB_004231b1
//   XREF to: 0061698f (DATA)
//   XREF to: 00616996 (DATA)
//   XREF to: 006169a1 (DATA)
//   XREF to: 006169a9 (DATA)
// 004231b2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b0] (DATA)
// 004231b6: PUSH EAX
// 004231b7: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004231bc: ADD ESP,0x8
// 004231bf: PUSH 0x0
//   Label: LAB_004231bf
// 004231c1: PUSH ESI
// 004231c2: MOV ECX,dword ptr [ESP + 0x3bc]
//   XREF to: Stack[0x4] (READ)
// 004231c9: PUSH ECX
// 004231ca: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3b0] (DATA)
// 004231ce: PUSH EAX
// 004231cf: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004231d4: ADD ESP,0x10
// 004231d7: CMP EAX,0x3
// 004231da: JA 0x004232d7
//   XREF to: 004232d7 (CONDITIONAL_JUMP)
// 004231e0: JMP dword ptr [EAX*0x4 + 0x423100]
//   Label: switchD
//   XREF to: 004231e7 (COMPUTED_JUMP)
//   XREF to: 0042327e (COMPUTED_JUMP)
//   XREF to: 0042329d (COMPUTED_JUMP)
//   XREF to: 004232bc (COMPUTED_JUMP)
//   XREF to: 00423100 (DATA)
// 004231e7: PUSH 0x0
//   Label: caseD_0
// 004231e9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b0] (DATA)
// 004231ed: PUSH EAX
// 004231ee: MOV EBX,0x1
// 004231f3: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004231f8: ADD ESP,0x8
// 004231fb: MOV EAX,EBX
// 004231fd: ADD ESP,0x3a8
// 00423203: POP ESI
// 00423204: POP EBX
// 00423205: RET
// 00423206: MOV EBX,0x616996
//   Label: LAB_00423206
//   XREF to: 00616996 (DATA)
// 0042320b: JMP 0x00423150
//   XREF to: 00423150 (UNCONDITIONAL_JUMP)
// 0042322e: MOV EBX,0x6169a1
//   Label: LAB_0042322e
//   XREF to: 006169a1 (DATA)
// 00423233: JMP 0x0042316e
//   XREF to: 0042316e (UNCONDITIONAL_JUMP)
// 00423256: MOV EBX,0x6169a9
//   Label: LAB_00423256
//   XREF to: 006169a9 (DATA)
// 0042325b: JMP 0x0042318c
//   XREF to: 0042318c (UNCONDITIONAL_JUMP)
// 0042327e: PUSH 0x0
//   Label: caseD_1
// 00423280: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b0] (DATA)
// 00423284: PUSH EAX
// 00423285: MOV EBX,0x2
// 0042328a: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0042328f: ADD ESP,0x8
// 00423292: MOV EAX,EBX
// 00423294: ADD ESP,0x3a8
// 0042329a: POP ESI
// 0042329b: POP EBX
// 0042329c: RET
// 0042329d: PUSH 0x0
//   Label: caseD_2
// 0042329f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b0] (DATA)
// 004232a3: PUSH EAX
// 004232a4: MOV EBX,0x3
// 004232a9: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004232ae: ADD ESP,0x8
// 004232b1: MOV EAX,EBX
// 004232b3: ADD ESP,0x3a8
// 004232b9: POP ESI
// 004232ba: POP EBX
// 004232bb: RET
// 004232bc: XOR EBX,EBX
//   Label: caseD_3
// 004232be: PUSH EBX
// 004232bf: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b0] (DATA)
// 004232c3: PUSH EAX
// 004232c4: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004232c9: ADD ESP,0x8
// 004232cc: MOV EAX,EBX
// 004232ce: ADD ESP,0x3a8
// 004232d4: POP ESI
// 004232d5: POP EBX
// 004232d6: RET
// 004232d7: PUSH 0x0
//   Label: default
// 004232d9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b0] (DATA)
// 004232dd: PUSH EAX
// 004232de: MOV EBX,0xffffffff
// 004232e3: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004232e8: ADD ESP,0x8
// 004232eb: MOV EAX,EBX
// 004232ed: ADD ESP,0x3a8
// 004232f3: POP ESI
// 004232f4: POP EBX
// 004232f5: RET
