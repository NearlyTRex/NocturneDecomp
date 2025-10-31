// Name: core_frankgen.cpp_FUN_004d2770
// Address: 004d2770
// Address Range: [[004d2770, 004d2870]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d2770()
// Globals:
//   TerminatedCString s_Bed_0062ac28
//   TerminatedCString s_Crane1_0062ac2c
//   TerminatedCString s_Crane2_0062ac33
//   TerminatedCString s_Crane3_0062ac3a
//   TerminatedCString s_Stitcher_0062ac41
//   TerminatedCString s_Arm_0062ac4a
//   TerminatedCString s_Flap1_0062ac4e
//   TerminatedCString s_Flap2_0062ac54
//   TerminatedCString s_Create_which_part_0062ac5a
// Function calls:
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

/* Signature: undefined1 actors_other_frankgen.cpp_FUN_004d2770(undefined4 param_1) */

undefined4 core_frankgen_cpp_FUN_004d2770(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CStrList_vtable *in_stack_fffffc7c;
  CStrList_vtable *in_stack_fffffc80;
  CStrList_vtable *in_stack_fffffc84;
  CStrList_vtable *in_stack_fffffc88;
  uint in_stack_fffffc8c;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc54);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc58,"Bed");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc5c,"Crane1");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc60,"Crane2");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc64,"Crane3");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc68,"Stitcher");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc6c,"Arm");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc70,"Flap1");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc74,"Flap2");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc78,"Create which part?",-1,0);
  *(int *)(in_stack_00000004 + 0x158) = iVar1;
  if (-1 < iVar1) {
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc7c,0,(uint)in_stack_fffffc7c,(uint)in_stack_fffffc80,
               (uint)in_stack_fffffc84,(uint)in_stack_fffffc88,in_stack_fffffc8c);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc7c,0,(uint)in_stack_fffffc7c,(uint)in_stack_fffffc80,
             (uint)in_stack_fffffc84,(uint)in_stack_fffffc88,in_stack_fffffc8c);
  return 0;
}


// Assembly code:
// 004d2770: PUSH EBX
//   Label: core_frankgen.cpp_FUN_004d2770
// 004d2771: SUB ESP,0x3a8
// 004d2777: MOV EBX,dword ptr [ESP + 0x3b0]
//   XREF to: Stack[0x4] (READ)
// 004d277e: MOV EAX,ESP
// 004d2780: PUSH EAX
// 004d2781: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004d2786: ADD ESP,0x4
// 004d2789: PUSH 0x62ac28
//   XREF to: 0062ac28 (DATA)
// 004d278e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d2792: PUSH EAX
// 004d2793: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004d2798: ADD ESP,0x8
// 004d279b: PUSH 0x62ac2c
//   XREF to: 0062ac2c (DATA)
// 004d27a0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d27a4: PUSH EAX
// 004d27a5: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004d27aa: ADD ESP,0x8
// 004d27ad: PUSH 0x62ac33
//   XREF to: 0062ac33 (DATA)
// 004d27b2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d27b6: PUSH EAX
// 004d27b7: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004d27bc: ADD ESP,0x8
// 004d27bf: PUSH 0x62ac3a
//   XREF to: 0062ac3a (DATA)
// 004d27c4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d27c8: PUSH EAX
// 004d27c9: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004d27ce: ADD ESP,0x8
// 004d27d1: PUSH 0x62ac41
//   XREF to: 0062ac41 (DATA)
// 004d27d6: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d27da: PUSH EAX
// 004d27db: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004d27e0: ADD ESP,0x8
// 004d27e3: PUSH 0x62ac4a
//   XREF to: 0062ac4a (DATA)
// 004d27e8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d27ec: PUSH EAX
// 004d27ed: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004d27f2: ADD ESP,0x8
// 004d27f5: PUSH 0x62ac4e
//   XREF to: 0062ac4e (DATA)
// 004d27fa: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d27fe: PUSH EAX
// 004d27ff: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004d2804: ADD ESP,0x8
// 004d2807: PUSH 0x62ac54
//   XREF to: 0062ac54 (DATA)
// 004d280c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d2810: PUSH EAX
// 004d2811: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004d2816: ADD ESP,0x8
// 004d2819: PUSH 0x0
// 004d281b: PUSH -0x1
// 004d281d: PUSH 0x62ac5a
//   XREF to: 0062ac5a (DATA)
// 004d2822: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d2826: PUSH EAX
// 004d2827: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004d282c: ADD ESP,0x10
// 004d282f: MOV dword ptr [EBX + 0x158],EAX
// 004d2835: TEST EAX,EAX
// 004d2837: JL 0x004d2857
//   XREF to: 004d2857 (CONDITIONAL_JUMP)
// 004d2839: PUSH 0x0
// 004d283b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d283f: PUSH EAX
// 004d2840: MOV EBX,0x1
// 004d2845: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004d284a: ADD ESP,0x8
// 004d284d: MOV EAX,EBX
// 004d284f: ADD ESP,0x3a8
// 004d2855: POP EBX
// 004d2856: RET
// 004d2857: XOR EBX,EBX
//   Label: LAB_004d2857
// 004d2859: PUSH EBX
// 004d285a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d285e: PUSH EAX
// 004d285f: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004d2864: ADD ESP,0x8
// 004d2867: MOV EAX,EBX
// 004d2869: ADD ESP,0x3a8
// 004d286f: POP EBX
// 004d2870: RET
