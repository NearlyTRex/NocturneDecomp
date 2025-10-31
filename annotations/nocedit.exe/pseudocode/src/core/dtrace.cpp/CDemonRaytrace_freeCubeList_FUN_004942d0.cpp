// Name: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
// Address: 004942d0
// Address Range: [[004942d0, 00494375]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace * this_ptr)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240 (00494240) at 00494246 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494d7c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_006225df
//   TerminatedCString s_core_dtrace_cpp_006225f2
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   core_dpart.cpp_CDemonPart_dtor_FUN_00482160
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace *this_ptr)

{
  CDemonPart *pCVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (this_ptr->cube_list != (SVoxelCubeMetadata *)0x0) {
    iVar4 = 0;
    for (iVar3 = 0;
        iVar3 < (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
        iVar3 = iVar3 + 1) {
      puVar2 = (undefined4 *)((int)this_ptr->cube_list->voxel_data + iVar4 + -0x14);
      *puVar2 = 0;
      puVar2[1] = 0;
      pCVar1 = (CDemonPart *)puVar2[3];
      puVar2[0x15] = 0;
      if (pCVar1 != (CDemonPart *)0x0) {
        g_CurrentDebugLine = 0x9c;
        g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
        if (pCVar1 != (CDemonPart *)0x0) {
          pCVar1 = core_dpart_cpp_CDemonPart_dtor_FUN_00482160(pCVar1);
          shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
        }
      }
      iVar4 = iVar4 + 0x58;
      puVar2[3] = 0;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->cube_list,"..\\core\\dtrace.cpp",0xa0);
  }
  this_ptr->cube_list = (SVoxelCubeMetadata *)0x0;
  return;
}


// Assembly code:
// 004942d0: PUSH ESI
//   Label: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
// 004942d1: PUSH EBP
// 004942d2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004942d6: CMP dword ptr [ESI + 0x4c],0x0
// 004942da: JZ 0x0049436c
//   XREF to: 0049436c (CONDITIONAL_JUMP)
// 004942e0: PUSH EDI
// 004942e1: PUSH EBX
// 004942e2: XOR EDI,EDI
// 004942e4: XOR EBP,EBP
// 004942e6: MOV ECX,dword ptr [ESI + 0x44]
//   Label: LAB_004942e6
// 004942e9: MOV EBX,dword ptr [ESI + 0x40]
// 004942ec: IMUL EBX,ECX
// 004942ef: MOV EAX,dword ptr [ESI + 0x48]
// 004942f2: IMUL EAX,EBX
// 004942f5: CMP EBP,EAX
// 004942f7: JGE 0x00494354
//   XREF to: 00494354 (CONDITIONAL_JUMP)
// 004942f9: MOV EBX,dword ptr [ESI + 0x4c]
// 004942fc: ADD EBX,EDI
// 004942fe: MOV dword ptr [EBX],0x0
// 00494304: MOV dword ptr [EBX + 0x4],0x0
// 0049430b: MOV EAX,dword ptr [EBX + 0xc]
// 0049430e: MOV dword ptr [EBX + 0x54],0x0
// 00494315: TEST EAX,EAX
// 00494317: JNZ 0x00494326
//   XREF to: 00494326 (CONDITIONAL_JUMP)
// 00494319: ADD EDI,0x58
//   Label: LAB_00494319
// 0049431c: INC EBP
// 0049431d: MOV dword ptr [EBX + 0xc],0x0
// 00494324: JMP 0x004942e6
//   XREF to: 004942e6 (UNCONDITIONAL_JUMP)
// 00494326: MOV ECX,0x9c
//   Label: LAB_00494326
// 0049432b: MOV EDX,0x6225df
//   XREF to: 006225df (PARAM)
// 00494330: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 00494336: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0049433c: JZ 0x00494319
//   XREF to: 00494319 (CONDITIONAL_JUMP)
// 0049433e: PUSH 0x0
// 00494340: PUSH EAX
// 00494341: CALL core_dpart.cpp_CDemonPart_dtor_FUN_00482160
//   XREF to: 00482160 (UNCONDITIONAL_CALL)
// 00494346: ADD ESP,0x8
// 00494349: PUSH EAX
// 0049434a: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0049434f: ADD ESP,0x4
// 00494352: JMP 0x00494319
//   XREF to: 00494319 (UNCONDITIONAL_JUMP)
// 00494354: PUSH 0xa0
//   Label: LAB_00494354
// 00494359: PUSH 0x6225f2
//   XREF to: 006225f2 (DATA)
// 0049435e: MOV EBX,dword ptr [ESI + 0x4c]
// 00494361: PUSH EBX
// 00494362: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00494367: ADD ESP,0xc
// 0049436a: POP EBX
// 0049436b: POP EDI
// 0049436c: MOV dword ptr [ESI + 0x4c],0x0
//   Label: LAB_0049436c
// 00494373: POP EBP
// 00494374: POP ESI
// 00494375: RET
