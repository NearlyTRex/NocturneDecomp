// Name: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
// Address: 0059a510
// Address Range: [[0059a510, 0059a731]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510()
// Cross-references:
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b7c3 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c304 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058d790 (0058d790) at 0058d7d6 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970 (0059b970) at 0059baea [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064e697
//   TerminatedCString s_CDeformableModel_allocLO_0064e6ac
//   TerminatedCString s_core_skeleton_cpp_0064e6df
//   TerminatedCString s_core_skeleton_cpp_0064e6f4
//   TerminatedCString s_core_skeleton_cpp_0064e709
//   TerminatedCString s_core_skeleton_cpp_0064e71e
//   TerminatedCString s_core_skeleton_cpp_0064e733
//   TerminatedCString s_core_skeleton_cpp_0064e748
//   TerminatedCString s_core_skeleton_cpp_0064e75d
//   TerminatedCString s_core_skeleton_cpp_0064e772
//   TerminatedCString s_core_skeleton_cpp_0064e787
//   TerminatedCString s_Out_of_hunk_in_CDeformab_0064e79c
//   WatcomTypeInfo g_SVertTypeInfo
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_FUN_0059a2b0
//   crt_memory.c_constructTypedObjectArray_FUN_00601272
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_allocLOD(CDeformableModel*
   pDeformableModel, undefined4 nNumLods, undefined4 param_3, undefined4 param_4, undefined4
   param_5) */

void core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510(void)

{
  int iVar1;
  void *pvVar2;
  int *in_stack_00000004;
  WatcomTypeInfo *in_stack_00000008;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  
  if (((int)in_stack_00000008 < 0) || (*in_stack_00000004 <= (int)in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x28a;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDeformableModel::allocLOD - invalid lod number %d",in_stack_00000008);
  }
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0x28f;
  pvVar2 = crt_memory_c_freeSingleInstance_FUN_005fe632
                     ((void *)in_stack_00000004[(int)&in_stack_00000008->instance_size],
                      &g_SVertTypeInfo);
  crt_memory_c_free_FUN_005fe659(pvVar2);
  g_CurrentDebugLine = 0x290;
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  crt_memory_c_free_FUN_005fe659
            ((void *)in_stack_00000004[(int)((int)&in_stack_00000008[1].ctor + 3)]);
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0x291;
  crt_memory_c_free_FUN_005fe659((void *)in_stack_00000004[(int)&in_stack_00000008[1].dtor]);
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0x292;
  crt_memory_c_free_FUN_005fe659
            ((void *)in_stack_00000004[(int)((int)&in_stack_00000008[1].instance_size + 1)]);
  in_stack_00000004[(int)((int)&in_stack_00000008->copy + 3)] = in_stack_00000024;
  in_stack_00000004[(int)((int)&in_stack_00000008->class_name + 1)] = in_stack_00000028;
  in_stack_00000004[(int)((int)&in_stack_00000008[1].type_flags + 2)] = in_stack_0000002c;
  pvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (in_stack_00000004[(int)((int)&in_stack_00000008->copy + 3)] * 0x34 + 4,
                      "..\\core\\skeleton.cpp",0x29c);
  pvVar2 = crt_memory_c_constructTypedObjectArray_FUN_00601272(pvVar2,0x662ed0,in_stack_00000008);
  in_stack_00000004[(int)&in_stack_00000008->instance_size] = (int)pvVar2;
  pvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((in_stack_00000004[(int)((int)&in_stack_00000008[1].type_flags + 2)] +
                      in_stack_00000004[(int)((int)&in_stack_00000008->class_name + 1)]) * 0x12,
                      "..\\core\\skeleton.cpp",0x29d);
  in_stack_00000004[(int)((int)&in_stack_00000008[1].ctor + 3)] = (int)pvVar2;
  pvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((in_stack_00000004[(int)((int)&in_stack_00000008->class_name + 1)] +
                      in_stack_00000004[(int)((int)&in_stack_00000008[1].type_flags + 2)]) * 4,
                      "..\\core\\skeleton.cpp",0x29e);
  iVar1 = in_stack_00000004[(int)((int)&in_stack_00000008[1].type_flags + 2)];
  in_stack_00000004[(int)&in_stack_00000008[1].dtor] = (int)pvVar2;
  if (iVar1 < 1) {
    in_stack_00000004[(int)((int)&in_stack_00000008[1].instance_size + 1)] = 0;
  }
  else {
    pvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(iVar1 * 4,"..\\core\\skeleton.cpp",0x2a0);
    in_stack_00000004[(int)((int)&in_stack_00000008[1].instance_size + 1)] = (int)pvVar2;
  }
  if ((((in_stack_00000004[(int)&in_stack_00000008->instance_size] != 0) &&
       (in_stack_00000004[(int)((int)&in_stack_00000008[1].ctor + 3)] != 0)) &&
      (in_stack_00000004[(int)&in_stack_00000008[1].dtor] != 0)) &&
     ((in_stack_00000004[(int)((int)&in_stack_00000008[1].type_flags + 2)] < 1 ||
      (in_stack_00000004[(int)((int)&in_stack_00000008[1].instance_size + 1)] != 0)))) {
    return;
  }
  core_skeleton_cpp_CDeformableModel_FUN_0059a2b0();
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 0x2ae;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d");
  return;
}


// Assembly code:
// 0059a510: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
// 0059a511: PUSH ESI
// 0059a512: PUSH EDI
// 0059a513: PUSH EBP
// 0059a514: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059a518: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059a51c: TEST EDI,EDI
// 0059a51e: JL 0x0059a524
//   XREF to: 0059a524 (CONDITIONAL_JUMP)
// 0059a520: CMP EDI,dword ptr [ESI]
// 0059a522: JL 0x0059a548
//   XREF to: 0059a548 (CONDITIONAL_JUMP)
// 0059a524: PUSH EDI
//   Label: LAB_0059a524
// 0059a525: MOV ECX,0x64e697
//   XREF to: 0064e697 (PARAM)
// 0059a52a: MOV EBX,0x28a
// 0059a52f: PUSH 0x64e6ac
//   XREF to: 0064e6ac (DATA)
// 0059a534: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0059a53a: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0059a540: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059a545: ADD ESP,0x8
// 0059a548: MOV EBP,0x64e6df
//   Label: LAB_0059a548
//   XREF to: 0064e6df (DATA)
// 0059a54d: MOV EAX,0x28f
// 0059a552: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 0059a558: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 0059a55d: PUSH 0x662ed0
//   XREF to: 00662ed0 (DATA)
// 0059a562: MOV EDX,dword ptr [ESI + EDI*0x4 + 0x40]
// 0059a566: PUSH EDX
// 0059a567: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0059a56c: ADD ESP,0x8
// 0059a56f: PUSH EAX
// 0059a570: MOV EBX,0x290
// 0059a575: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0059a57a: MOV ECX,0x64e6f4
//   XREF to: 0064e6f4 (PARAM)
// 0059a57f: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 0059a585: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0059a58b: ADD ESP,0x4
// 0059a58e: MOV EBP,dword ptr [ESI + EDI*0x4 + 0x7c]
// 0059a592: PUSH EBP
// 0059a593: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0059a598: MOV EAX,0x64e709
//   XREF to: 0064e709 (PARAM)
// 0059a59d: MOV EDX,0x291
// 0059a5a2: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 0059a5a7: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 0059a5ad: ADD ESP,0x4
// 0059a5b0: MOV ECX,dword ptr [ESI + EDI*0x4 + 0x90]
// 0059a5b7: PUSH ECX
// 0059a5b8: MOV EBX,0x64e71e
//   XREF to: 0064e71e (PARAM)
// 0059a5bd: MOV EBP,0x292
// 0059a5c2: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0059a5c7: MOV dword ptr [0x0067d20c],EBX
//   XREF to: 0067d20c (WRITE)
// 0059a5cd: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 0059a5d3: ADD ESP,0x4
// 0059a5d6: MOV EAX,dword ptr [ESI + EDI*0x4 + 0xa4]
// 0059a5dd: PUSH EAX
// 0059a5de: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0059a5e3: ADD ESP,0x4
// 0059a5e6: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0059a5ea: MOV dword ptr [ESI + EDI*0x4 + 0x2c],EAX
// 0059a5ee: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0059a5f2: MOV dword ptr [ESI + EDI*0x4 + 0x54],EAX
// 0059a5f6: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0059a5fa: MOV dword ptr [ESI + EDI*0x4 + 0x68],EAX
// 0059a5fe: PUSH 0x662ed0
//   XREF to: 00662ed0 (DATA)
// 0059a603: MOV EAX,dword ptr [ESI + EDI*0x4 + 0x2c]
// 0059a607: PUSH EAX
// 0059a608: LEA EBX,[EAX*0x4 + 0x0]
// 0059a60f: SUB EBX,EAX
// 0059a611: SHL EBX,0x2
// 0059a614: ADD EBX,EAX
// 0059a616: PUSH 0x29c
// 0059a61b: SHL EBX,0x2
// 0059a61e: PUSH 0x64e733
//   XREF to: 0064e733 (DATA)
// 0059a623: ADD EBX,0x4
// 0059a626: PUSH EBX
// 0059a627: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0059a62c: ADD ESP,0xc
// 0059a62f: PUSH EAX
// 0059a630: CALL crt_memory.c_constructTypedObjectArray_FUN_00601272
//   XREF to: 00601272 (UNCONDITIONAL_CALL)
// 0059a635: ADD ESP,0xc
// 0059a638: TEST EAX,EAX
// 0059a63a: LEA EBX,[EDI*0x4 + 0x0]
// 0059a641: ADD EBX,ESI
// 0059a643: MOV dword ptr [EBX + 0x40],EAX
// 0059a646: MOV EDX,dword ptr [EBX + 0x68]
// 0059a649: ADD EDX,dword ptr [EBX + 0x54]
// 0059a64c: LEA EAX,[EDX*0x8 + 0x0]
// 0059a653: PUSH 0x29d
// 0059a658: ADD EAX,EDX
// 0059a65a: PUSH 0x64e748
//   XREF to: 0064e748 (DATA)
// 0059a65f: ADD EAX,EAX
// 0059a661: PUSH EAX
// 0059a662: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0059a667: MOV dword ptr [EBX + 0x7c],EAX
// 0059a66a: ADD ESP,0xc
// 0059a66d: MOV ECX,dword ptr [EBX + 0x68]
// 0059a670: MOV EAX,dword ptr [EBX + 0x54]
// 0059a673: PUSH 0x29e
// 0059a678: ADD EAX,ECX
// 0059a67a: PUSH 0x64e75d
//   XREF to: 0064e75d (DATA)
// 0059a67f: SHL EAX,0x2
// 0059a682: PUSH EAX
// 0059a683: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0059a688: ADD ESP,0xc
// 0059a68b: MOV EBP,dword ptr [EBX + 0x68]
// 0059a68e: MOV dword ptr [EBX + 0x90],EAX
// 0059a694: TEST EBP,EBP
// 0059a696: JLE 0x0059a6ea
//   XREF to: 0059a6ea (CONDITIONAL_JUMP)
// 0059a698: PUSH 0x2a0
// 0059a69d: PUSH 0x64e772
//   XREF to: 0064e772 (DATA)
// 0059a6a2: LEA EAX,[EBP*0x4 + 0x0]
// 0059a6a9: PUSH EAX
// 0059a6aa: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0059a6af: ADD ESP,0xc
// 0059a6b2: MOV dword ptr [EBX + 0xa4],EAX
// 0059a6b8: LEA EAX,[EDI*0x4 + 0x0]
//   Label: LAB_0059a6b8
// 0059a6bf: ADD EAX,ESI
// 0059a6c1: CMP dword ptr [EAX + 0x40],0x0
// 0059a6c5: JZ 0x0059a6f6
//   XREF to: 0059a6f6 (CONDITIONAL_JUMP)
// 0059a6c7: CMP dword ptr [EAX + 0x7c],0x0
// 0059a6cb: JZ 0x0059a6f6
//   XREF to: 0059a6f6 (CONDITIONAL_JUMP)
// 0059a6cd: CMP dword ptr [EAX + 0x90],0x0
// 0059a6d4: JZ 0x0059a6f6
//   XREF to: 0059a6f6 (CONDITIONAL_JUMP)
// 0059a6d6: CMP dword ptr [EAX + 0x68],0x0
// 0059a6da: JLE 0x0059a6e5
//   XREF to: 0059a6e5 (CONDITIONAL_JUMP)
// 0059a6dc: CMP dword ptr [EAX + 0xa4],0x0
// 0059a6e3: JZ 0x0059a6f6
//   XREF to: 0059a6f6 (CONDITIONAL_JUMP)
// 0059a6e5: POP EBP
//   Label: LAB_0059a6e5
// 0059a6e6: POP EDI
// 0059a6e7: POP ESI
// 0059a6e8: POP EBX
// 0059a6e9: RET
// 0059a6ea: MOV dword ptr [EBX + 0xa4],0x0
//   Label: LAB_0059a6ea
// 0059a6f4: JMP 0x0059a6b8
//   XREF to: 0059a6b8 (UNCONDITIONAL_JUMP)
// 0059a6f6: PUSH ESI
//   Label: LAB_0059a6f6
// 0059a6f7: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a2b0
//   XREF to: 0059a2b0 (UNCONDITIONAL_CALL)
// 0059a6fc: MOV EAX,0x64e787
//   XREF to: 0064e787 (DATA)
// 0059a701: ADD ESP,0x4
// 0059a704: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0059a709: LEA EAX,[ESI + 0x68]
// 0059a70c: PUSH EAX
// 0059a70d: LEA EAX,[ESI + 0x54]
// 0059a710: PUSH EAX
// 0059a711: ADD ESI,0x2c
// 0059a714: PUSH ESI
// 0059a715: MOV EDX,0x2ae
// 0059a71a: PUSH 0x64e79c
//   XREF to: 0064e79c (DATA)
// 0059a71f: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0059a725: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059a72a: ADD ESP,0x10
// 0059a72d: POP EBP
// 0059a72e: POP EDI
// 0059a72f: POP ESI
// 0059a730: POP EBX
// 0059a731: RET
