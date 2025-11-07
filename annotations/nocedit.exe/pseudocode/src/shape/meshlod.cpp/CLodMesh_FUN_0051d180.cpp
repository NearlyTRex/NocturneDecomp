// Name: shape_meshlod.cpp_CLodMesh_FUN_0051d180
// Address: 0051d180
// Address Range: [[0051d180, 0051d24c]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_FUN_0051d180(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_005173f0 (005173f0) at 0051743c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_0051b8a0 (0051b8a0) at 0051b90d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_006380d5
//   TerminatedCString s_d_006380ea
//   TerminatedCString s_shape_meshlod_cpp_006380ee
//   TerminatedCString s_shape_meshlod_cpp_00638103
//   TerminatedCString s_Out_of_memory_00638118
//   TerminatedCString s_d_d_lg_g_00638127
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_FUN_0051d180(CLodMesh *this_ptr)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FILE *in_stack_00000008;
  
  if (this_ptr->lod_levels_ptr != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->lod_levels_ptr,"..\\shape\\meshlod.cpp",0x1441);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&this_ptr->lod_level_count);
  pvVar1 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (this_ptr->lod_level_count,0xf0,"..\\shape\\meshlod.cpp",0x1446);
  this_ptr->lod_levels_ptr = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1447;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  iVar4 = 0;
  if (0 < this_ptr->lod_level_count) {
    iVar3 = 0;
    do {
      iVar2 = (int)this_ptr->lod_levels_ptr + iVar3;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xf0;
      crt_stdio_c_fscanf_FUN_005fe7c0
                (in_stack_00000008,"%d,%d,%lg,%g\n",iVar2,iVar2 + 4,iVar2 + 8,iVar2 + 0x10);
    } while (iVar4 < this_ptr->lod_level_count);
  }
  return;
}


// Assembly code:
// 0051d180: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_0051d180
// 0051d181: PUSH ESI
// 0051d182: PUSH EDI
// 0051d183: PUSH EBP
// 0051d184: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051d188: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051d18c: MOV EDX,dword ptr [EDI + 0x50]
// 0051d18f: TEST EDX,EDX
// 0051d191: JNZ 0x0051d235
//   XREF to: 0051d235 (CONDITIONAL_JUMP)
// 0051d197: LEA EAX,[EDI + 0x4c]
//   Label: LAB_0051d197
// 0051d19a: PUSH EAX
// 0051d19b: PUSH 0x6380ea
//   XREF to: 006380ea (DATA)
// 0051d1a0: PUSH EBP
// 0051d1a1: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051d1a6: ADD ESP,0xc
// 0051d1a9: PUSH 0x1446
// 0051d1ae: PUSH 0x6380ee
//   XREF to: 006380ee (DATA)
// 0051d1b3: PUSH 0xf0
// 0051d1b8: MOV EBX,dword ptr [EDI + 0x4c]
// 0051d1bb: PUSH EBX
// 0051d1bc: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 0051d1c1: ADD ESP,0x10
// 0051d1c4: MOV dword ptr [EDI + 0x50],EAX
// 0051d1c7: TEST EAX,EAX
// 0051d1c9: JNZ 0x0051d1ed
//   XREF to: 0051d1ed (CONDITIONAL_JUMP)
// 0051d1cb: MOV EAX,0x638103
//   XREF to: 00638103 (DATA)
// 0051d1d0: MOV EDX,0x1447
// 0051d1d5: PUSH 0x638118
//   XREF to: 00638118 (DATA)
// 0051d1da: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0051d1df: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0051d1e5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051d1ea: ADD ESP,0x4
// 0051d1ed: MOV ECX,dword ptr [EDI + 0x4c]
//   Label: LAB_0051d1ed
// 0051d1f0: XOR ESI,ESI
// 0051d1f2: TEST ECX,ECX
// 0051d1f4: JLE 0x0051d230
//   XREF to: 0051d230 (CONDITIONAL_JUMP)
// 0051d1f6: XOR EBX,EBX
// 0051d1f8: MOV EAX,dword ptr [EDI + 0x50]
//   Label: LAB_0051d1f8
// 0051d1fb: ADD EAX,EBX
// 0051d1fd: LEA EDX,[EAX + 0x10]
// 0051d200: PUSH EDX
// 0051d201: LEA EDX,[EAX + 0x8]
// 0051d204: PUSH EDX
// 0051d205: LEA EDX,[EAX + 0x4]
// 0051d208: PUSH EDX
// 0051d209: PUSH EAX
// 0051d20a: PUSH 0x638127
//   XREF to: 00638127 (DATA)
// 0051d20f: PUSH EBP
// 0051d210: INC ESI
// 0051d211: ADD EBX,0xf0
// 0051d217: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051d21c: MOV EAX,dword ptr [EDI + 0x4c]
// 0051d21f: ADD ESP,0x18
// 0051d222: CMP ESI,EAX
// 0051d224: JL 0x0051d1f8
//   XREF to: 0051d1f8 (CONDITIONAL_JUMP)
// 0051d226: LEA EAX,[EAX]
// 0051d22c: LEA EDX,[EDX]
// 0051d230: POP EBP
//   Label: LAB_0051d230
// 0051d231: POP EDI
// 0051d232: POP ESI
// 0051d233: POP EBX
// 0051d234: RET
// 0051d235: PUSH 0x1441
//   Label: LAB_0051d235
// 0051d23a: PUSH 0x6380d5
//   XREF to: 006380d5 (DATA)
// 0051d23f: PUSH EDX
// 0051d240: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0051d245: ADD ESP,0xc
// 0051d248: JMP 0x0051d197
//   XREF to: 0051d197 (UNCONDITIONAL_JUMP)
