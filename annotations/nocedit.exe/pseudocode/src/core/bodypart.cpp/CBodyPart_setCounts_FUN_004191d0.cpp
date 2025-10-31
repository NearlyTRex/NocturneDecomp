// Name: core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
// Address: 004191d0
// Address Range: [[004191d0, 0041933d]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0()
// Cross-references:
//   core_bodypart.cpp_CBodyPart_dtor_FUN_00419130 (00419130) at 0041914b [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_load_FUN_00419880 (00419880) at 00419aa7 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 (00419be0) at 00419c7f [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041a050 (0041a050) at 0041a080 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041b070 (0041b070) at 0041b096 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0 (0059c5e0) at 0059c83e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_bodypart_cpp_00615bd9
//   TerminatedCString s_core_bodypart_cpp_00615bee
//   TerminatedCString s_core_bodypart_cpp_00615c03
//   TerminatedCString s_core_bodypart_cpp_00615c18
//   TerminatedCString s_core_bodypart_cpp_00615c2d
//   TerminatedCString s_CBodyPart_setCounts_out__00615c42
//   TerminatedCString s_core_bodypart_cpp_00615c87
//   TerminatedCString s_CBodyPart_setCounts_out__00615c9c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_CBodyPart_setCounts(CBodyPart* param_1,
   undefined4 param_2, undefined4 param_3) */

void core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(void)

{
  void *pvVar1;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *(undefined4 *)(in_stack_00000004 + 0x174) = in_stack_00000008;
  *(undefined4 *)(in_stack_00000004 + 0x180) = in_stack_0000000c;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(in_stack_00000004 + 0x178),
                      *(int *)(in_stack_00000004 + 0x174) * 0xc,"..\\core\\bodypart.cpp",0xa8);
  *(void **)(in_stack_00000004 + 0x178) = pvVar1;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(in_stack_00000004 + 0x17c),
                      *(int *)(in_stack_00000004 + 0x174) * 0xc,"..\\core\\bodypart.cpp",0xa9);
  *(void **)(in_stack_00000004 + 0x17c) = pvVar1;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(in_stack_00000004 + 0x184),
                      *(int *)(in_stack_00000004 + 0x180) * 0x3c,"..\\core\\bodypart.cpp",0xab);
  *(void **)(in_stack_00000004 + 0x184) = pvVar1;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(in_stack_00000004 + 0x188),*(int *)(in_stack_00000004 + 0x180) << 2
                      ,"..\\core\\bodypart.cpp",0xac);
  *(void **)(in_stack_00000004 + 0x188) = pvVar1;
  if ((0 < *(int *)(in_stack_00000004 + 0x174)) &&
     ((*(int *)(in_stack_00000004 + 0x178) == 0 || (*(int *)(in_stack_00000004 + 0x17c) == 0)))) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0xb2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",*(undefined4 *)(in_stack_00000004 + 0x174));
  }
  if ((0 < *(int *)(in_stack_00000004 + 0x180)) &&
     ((*(int *)(in_stack_00000004 + 0x184) == 0 || (*(int *)(in_stack_00000004 + 0x188) == 0)))) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0xb7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBodyPart::setCounts - out of memory for triangles - triCount = %d");
    return;
  }
  return;
}


// Assembly code:
// 004191d0: PUSH EBX
//   Label: core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
// 004191d1: PUSH ESI
// 004191d2: PUSH EDI
// 004191d3: PUSH EBP
// 004191d4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004191d8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004191dc: MOV dword ptr [EBX + 0x174],EAX
// 004191e2: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004191e6: MOV EDX,dword ptr [EBX + 0x174]
// 004191ec: MOV dword ptr [EBX + 0x180],EAX
// 004191f2: LEA EAX,[EDX*0x4 + 0x0]
// 004191f9: PUSH 0xa8
// 004191fe: SUB EAX,EDX
// 00419200: PUSH 0x615bd9
//   XREF to: 00615bd9 (DATA)
// 00419205: SHL EAX,0x2
// 00419208: PUSH EAX
// 00419209: MOV EDX,dword ptr [EBX + 0x178]
// 0041920f: PUSH EDX
// 00419210: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 00419215: ADD ESP,0x10
// 00419218: MOV EDX,dword ptr [EBX + 0x174]
// 0041921e: MOV dword ptr [EBX + 0x178],EAX
// 00419224: LEA EAX,[EDX*0x4 + 0x0]
// 0041922b: PUSH 0xa9
// 00419230: SUB EAX,EDX
// 00419232: PUSH 0x615bee
//   XREF to: 00615bee (DATA)
// 00419237: SHL EAX,0x2
// 0041923a: PUSH EAX
// 0041923b: MOV ECX,dword ptr [EBX + 0x17c]
// 00419241: PUSH ECX
// 00419242: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 00419247: MOV dword ptr [EBX + 0x17c],EAX
// 0041924d: MOV EAX,dword ptr [EBX + 0x180]
// 00419253: ADD ESP,0x10
// 00419256: SHL EAX,0x2
// 00419259: PUSH 0xab
// 0041925e: MOV EDX,EAX
// 00419260: SHL EAX,0x4
// 00419263: PUSH 0x615c03
//   XREF to: 00615c03 (DATA)
// 00419268: SUB EAX,EDX
// 0041926a: PUSH EAX
// 0041926b: MOV ESI,dword ptr [EBX + 0x184]
// 00419271: PUSH ESI
// 00419272: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 00419277: ADD ESP,0x10
// 0041927a: MOV dword ptr [EBX + 0x184],EAX
// 00419280: PUSH 0xac
// 00419285: MOV EAX,dword ptr [EBX + 0x180]
// 0041928b: PUSH 0x615c18
//   XREF to: 00615c18 (DATA)
// 00419290: SHL EAX,0x2
// 00419293: PUSH EAX
// 00419294: MOV EDI,dword ptr [EBX + 0x188]
// 0041929a: PUSH EDI
// 0041929b: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004192a0: ADD ESP,0x10
// 004192a3: MOV EBP,dword ptr [EBX + 0x174]
// 004192a9: MOV dword ptr [EBX + 0x188],EAX
// 004192af: TEST EBP,EBP
// 004192b1: JLE 0x004192ef
//   XREF to: 004192ef (CONDITIONAL_JUMP)
// 004192b3: CMP dword ptr [EBX + 0x178],0x0
// 004192ba: JZ 0x004192c5
//   XREF to: 004192c5 (CONDITIONAL_JUMP)
// 004192bc: CMP dword ptr [EBX + 0x17c],0x0
// 004192c3: JNZ 0x004192ef
//   XREF to: 004192ef (CONDITIONAL_JUMP)
// 004192c5: MOV EDI,dword ptr [EBX + 0x174]
//   Label: LAB_004192c5
// 004192cb: PUSH EDI
// 004192cc: MOV ECX,0x615c2d
//   XREF to: 00615c2d (PARAM)
// 004192d1: MOV ESI,0xb2
// 004192d6: PUSH 0x615c42
//   XREF to: 00615c42 (DATA)
// 004192db: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004192e1: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004192e7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004192ec: ADD ESP,0x8
// 004192ef: CMP dword ptr [EBX + 0x180],0x0
//   Label: LAB_004192ef
// 004192f6: JLE 0x0041930a
//   XREF to: 0041930a (CONDITIONAL_JUMP)
// 004192f8: CMP dword ptr [EBX + 0x184],0x0
// 004192ff: JZ 0x0041930f
//   XREF to: 0041930f (CONDITIONAL_JUMP)
// 00419301: CMP dword ptr [EBX + 0x188],0x0
// 00419308: JZ 0x0041930f
//   XREF to: 0041930f (CONDITIONAL_JUMP)
// 0041930a: POP EBP
//   Label: LAB_0041930a
// 0041930b: POP EDI
// 0041930c: POP ESI
// 0041930d: POP EBX
// 0041930e: RET
// 0041930f: MOV EDI,dword ptr [EBX + 0x180]
//   Label: LAB_0041930f
// 00419315: PUSH EDI
// 00419316: MOV ECX,0x615c87
//   XREF to: 00615c87 (PARAM)
// 0041931b: MOV ESI,0xb7
// 00419320: PUSH 0x615c9c
//   XREF to: 00615c9c (DATA)
// 00419325: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0041932b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00419331: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00419336: ADD ESP,0x8
// 00419339: POP EBP
// 0041933a: POP EDI
// 0041933b: POP ESI
// 0041933c: POP EBX
// 0041933d: RET
