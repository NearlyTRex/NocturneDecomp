// Name: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0
// Address: 00498fb0
// Address Range: [[00498fb0, 004990e8]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0(CDemonRaytrace * this_ptr, int * output_count, int * * input_indices_array, int * * output_indices_array)
// Cross-references:
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a233 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_00622c3b
//   TerminatedCString s_CDemonRenderer_getPVS_PV_00622c4e
//   TerminatedCString s_core_dtrace_cpp_00622c79
//   TerminatedCString s_core_dtrace_cpp_00622c8c
//   TerminatedCString s_CDemonRaytrace_getPVS_no_00622c9f
//   TerminatedCString s_core_dtrace_cpp_00622ccd
//   TerminatedCString s_CDemonRaytrace_getPVS_ou_00622ce0
//   TerminatedCString s_core_dtrace_cpp_00622d07
//   TerminatedCString s_CDemonRenderer_savePVS_c_00622d1a
//   int g_PVSDrawnCubeCount
//   int g_PVSReadyFlag
//   CDemonCube*[20000] g_PVSCubePointers
//   undefined4 DAT_02ca03b0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_00498fb0
          (CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array,
          int **output_indices_array)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_stack_00000014;
  int *in_stack_00000018;
  
  if (g_PVSReadyFlag == 0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x8ea;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRenderer::getPVS - PVS is not valid!");
  }
  iVar5 = g_PVSDrawnCubeCount;
  *output_count = g_PVSDrawnCubeCount;
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*output_indices_array,iVar5 << 2,"..\\core\\dtrace.cpp",0x8f2);
  *in_stack_00000014 = pvVar2;
  if (*output_count < 1) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x8f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::getPVS - no cubes rendered???");
  }
  if (*in_stack_00000018 == 0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x8fa;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::getPVS - out of memory");
  }
  iVar6 = (int)output_indices_array[0x12] *
          (int)output_indices_array[0x10] * (int)output_indices_array[0x11];
  iVar5 = 0;
  if (0 < g_PVSDrawnCubeCount) {
    iVar7 = 0;
    do {
      iVar4 = 0;
      if (0 < iVar6) {
        piVar3 = output_indices_array[0x14];
        do {
          if (piVar3 == *(int **)((int)g_PVSCubePointers + iVar7)) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 0xd;
        } while (iVar4 < iVar6);
      }
      if (iVar6 <= iVar4) {
        g_CurrentFilename = "..\\core\\dtrace.cpp";
        g_CurrentLineNumber = 0x907;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRenderer::savePVS - can't find drawn cube!");
      }
      iVar1 = g_PVSDrawnCubeCount;
      iVar5 = iVar5 + 1;
      *(int *)(iVar7 + *in_stack_00000018) = iVar4;
      iVar7 = iVar7 + 4;
    } while (iVar5 < iVar1);
  }
  return;
}


// Assembly code:
// 00498fb0: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0
// 00498fb1: PUSH ESI
// 00498fb2: PUSH EDI
// 00498fb3: PUSH EBP
// 00498fb4: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00498fb8: CMP dword ptr [0x02ca03a8],0x0
//   XREF to: 02ca03a8 (READ)
// 00498fbf: JNZ 0x00498fe4
//   XREF to: 00498fe4 (CONDITIONAL_JUMP)
// 00498fc1: MOV ECX,0x622c3b
//   XREF to: 00622c3b (PARAM)
// 00498fc6: MOV ESI,0x8ea
// 00498fcb: PUSH 0x622c4e
//   XREF to: 00622c4e (DATA)
// 00498fd0: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00498fd6: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00498fdc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00498fe1: ADD ESP,0x4
// 00498fe4: PUSH 0x8f2
//   Label: LAB_00498fe4
// 00498fe9: MOV EAX,[0x02ca03a4]
//   XREF to: 02ca03a4 (READ)
// 00498fee: PUSH 0x622c79
//   XREF to: 00622c79 (DATA)
// 00498ff3: MOV dword ptr [EBX],EAX
// 00498ff5: SHL EAX,0x2
// 00498ff8: PUSH EAX
// 00498ff9: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00498ffd: MOV EDI,dword ptr [EAX]
// 00498fff: PUSH EDI
// 00499000: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 00499005: ADD ESP,0x10
// 00499008: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049900c: MOV dword ptr [EDX],EAX
// 0049900e: CMP dword ptr [EBX],0x1
// 00499011: JGE 0x00499035
//   XREF to: 00499035 (CONDITIONAL_JUMP)
// 00499013: MOV EAX,0x622c8c
//   XREF to: 00622c8c (PARAM)
// 00499018: MOV EDX,0x8f6
// 0049901d: PUSH 0x622c9f
//   XREF to: 00622c9f (DATA)
// 00499022: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00499027: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0049902d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00499032: ADD ESP,0x4
// 00499035: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00499035
//   XREF to: Stack[0xc] (READ)
// 00499039: CMP dword ptr [EAX],0x0
// 0049903c: JNZ 0x00499061
//   XREF to: 00499061 (CONDITIONAL_JUMP)
// 0049903e: MOV EBX,0x622ccd
//   XREF to: 00622ccd (PARAM)
// 00499043: MOV ESI,0x8fa
// 00499048: PUSH 0x622ce0
//   XREF to: 00622ce0 (DATA)
// 0049904d: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00499053: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00499059: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049905e: ADD ESP,0x4
// 00499061: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_00499061
//   XREF to: Stack[0x4] (READ)
// 00499065: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00499069: MOV EDI,dword ptr [EDX + 0x44]
// 0049906c: MOV EAX,dword ptr [EAX + 0x40]
// 0049906f: IMUL EAX,EDI
// 00499072: MOV ESI,dword ptr [EDX + 0x48]
// 00499075: IMUL ESI,EAX
// 00499078: MOV EAX,[0x02ca03a4]
//   XREF to: 02ca03a4 (READ)
// 0049907d: XOR EBP,EBP
// 0049907f: TEST EAX,EAX
// 00499081: JLE 0x004990da
//   XREF to: 004990da (CONDITIONAL_JUMP)
// 00499083: XOR EDI,EDI
// 00499085: XOR EBX,EBX
//   Label: LAB_00499085
// 00499087: TEST ESI,ESI
// 00499089: JLE 0x0049909c
//   XREF to: 0049909c (CONDITIONAL_JUMP)
// 0049908b: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049908f: MOV EDX,EDI
// 00499091: MOV EAX,dword ptr [EAX + 0x50]
// 00499094: CMP EAX,dword ptr [EDX + 0x2ca03ac]
//   Label: LAB_00499094
//   XREF to: 02ca03ac (READ)
//   XREF to: 02ca03b0 (READ)
// 0049909a: JNZ 0x004990df
//   XREF to: 004990df (CONDITIONAL_JUMP)
// 0049909c: CMP EBX,ESI
//   Label: LAB_0049909c
// 0049909e: JL 0x004990c2
//   XREF to: 004990c2 (CONDITIONAL_JUMP)
// 004990a0: MOV EAX,0x622d07
//   XREF to: 00622d07 (PARAM)
// 004990a5: MOV EDX,0x907
// 004990aa: PUSH 0x622d1a
//   XREF to: 00622d1a (DATA)
// 004990af: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004990b4: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004990ba: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004990bf: ADD ESP,0x4
// 004990c2: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_004990c2
//   XREF to: Stack[0xc] (READ)
// 004990c6: ADD EDI,0x4
// 004990c9: MOV EAX,dword ptr [EAX]
// 004990cb: MOV EDX,dword ptr [0x02ca03a4]
//   XREF to: 02ca03a4 (READ)
// 004990d1: INC EBP
// 004990d2: MOV dword ptr [EDI + EAX*0x1 + -0x4],EBX
// 004990d6: CMP EBP,EDX
// 004990d8: JL 0x00499085
//   XREF to: 00499085 (CONDITIONAL_JUMP)
// 004990da: POP EBP
//   Label: LAB_004990da
// 004990db: POP EDI
// 004990dc: POP ESI
// 004990dd: POP EBX
// 004990de: RET
// 004990df: INC EBX
//   Label: LAB_004990df
// 004990e0: ADD EAX,0x34
// 004990e3: CMP EBX,ESI
// 004990e5: JL 0x00499094
//   XREF to: 00499094 (CONDITIONAL_JUMP)
// 004990e7: JMP 0x0049909c
//   XREF to: 0049909c (UNCONDITIONAL_JUMP)
