// Name: core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70
// Address: 00575f70
// Address Range: [[00575f70, 005761f9]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c7ae [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_g_00646588
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   float[250] g_VDCameraScores
//   CZThumb[1500] g_CZThumbPool
//   undefined4 DAT_0334710c
//   undefined4 DAT_03347130
//   undefined4 DAT_03347158
//   undefined4 DAT_03347180
//   int[250] g_VDCameraSortIndices
//   undefined4 DAT_033648fc
//   undefined4 DAT_03364900
// Function calls:
//   core_setdir.cpp_CZThumb_render_FUN_00574f20
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(CDemonSet *this_ptr)

{
  undefined4 uVar1;
  int this_ptr_00;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  int unaff_retaddr;
  int local_28;
  
  iVar2 = 0;
  if (0 < this_ptr->camera_count) {
    iVar5 = 0;
    do {
      *(int *)((int)g_VDCameraSortIndices + iVar5) = iVar2;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar2 < this_ptr->camera_count);
  }
  local_28 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->camera_count + -1; iVar2 = iVar2 + 1) {
    iVar5 = iVar2 + 1;
    if (iVar5 < this_ptr->camera_count) {
      iVar3 = iVar5 * 4;
      do {
        if (g_VDCameraScores[*(int *)((int)g_VDCameraSortIndices + local_28)] <
            g_VDCameraScores[*(int *)((int)g_VDCameraSortIndices + iVar3)]) {
          uVar1 = *(undefined4 *)((int)g_VDCameraSortIndices + local_28);
          *(undefined4 *)((int)g_VDCameraSortIndices + local_28) =
               *(undefined4 *)((int)g_VDCameraSortIndices + iVar3);
          *(undefined4 *)((int)g_VDCameraSortIndices + iVar3) = uVar1;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < this_ptr->camera_count);
    }
    local_28 = local_28 + 4;
  }
  iVar5 = 2;
  iVar3 = g_WindowHeight + -0xb2;
  iVar2 = 9;
  if (this_ptr->camera_count < 9) {
    iVar2 = this_ptr->camera_count;
  }
  if (0 < iVar2) {
    do {
      this_ptr_00 = g_VDCameraSortIndices[0];
      iVar2 = g_VDCameraSortIndices[0] * 6;
      if (this_ptr->cameras[g_VDCameraSortIndices[0]].is_panning == 0) {
        core_setdir_cpp_CZThumb_render_FUN_00574f20(g_CZThumbPool + iVar2,iVar5,iVar3);
        iVar4 = g_CZThumbPool[this_ptr_00 * 6].width;
      }
      else {
        core_setdir_cpp_CZThumb_render_FUN_00574f20
                  (g_CZThumbPool + g_VDCameraSortIndices[0] * 6 + 3,iVar5,iVar3);
        iVar5 = iVar5 + g_CZThumbPool[this_ptr_00 * 6 + 3].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00574f20((CZThumb *)this_ptr_00,iVar5,iVar3);
        iVar5 = iVar5 + g_CZThumbPool[this_ptr_00 * 6].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00574f20((CZThumb *)(unaff_EBP + 0x50),iVar5,iVar3);
        iVar5 = iVar5 + g_CZThumbPool[this_ptr_00 * 6 + 2].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00574f20((CZThumb *)(unaff_EDI + 0x28),iVar5,iVar3);
        iVar4 = g_CZThumbPool[this_ptr_00 * 6 + 1].width;
      }
      iVar4 = iVar5 + iVar4 + -2;
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xffffff78,"%g",(double)g_VDCameraScores[unaff_EBX]);
      engine_2d_c_drawText_FUN_00401fd0
                (&stack0xffffff7c,(int)(g_CZThumbPool + iVar2),
                 g_CZThumbPool[unaff_retaddr * 6].height + iVar3);
      engine_2d_c_drawText_FUN_00401fd0((char *)((int)this_ptr * 0x1a4),this_ptr_00,unaff_ESI);
      iVar5 = iVar4 + 2;
      iVar2 = unaff_ESI;
      if (g_WindowWidth < iVar4 + 0x42) {
        iVar5 = 2;
        iVar3 = iVar3 + 0x58;
        unaff_EBX = unaff_EBX + 0x58;
        iVar2 = unaff_ESI + 0x58;
        if (g_WindowHeight < unaff_ESI) {
          return;
        }
      }
      unaff_retaddr = unaff_retaddr + 4;
      unaff_ESI = iVar2;
    } while (unaff_retaddr < this_ptr_00);
  }
  return;
}


// Assembly code:
// 00575f70: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70
// 00575f71: PUSH ESI
// 00575f72: PUSH EDI
// 00575f73: PUSH EBP
// 00575f74: SUB ESP,0x88
// 00575f7a: MOV EDI,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x4] (READ)
// 00575f81: MOV EDX,dword ptr [EDI]
// 00575f83: XOR EAX,EAX
// 00575f85: TEST EDX,EDX
// 00575f87: JLE 0x00575fa0
//   XREF to: 00575fa0 (CONDITIONAL_JUMP)
// 00575f89: XOR EBP,EBP
// 00575f8b: MOV dword ptr [EBP + 0x33648f8],EAX
//   Label: LAB_00575f8b
//   XREF to: 033648f8 (WRITE)
//   XREF to: 033648fc (WRITE)
// 00575f91: INC EAX
// 00575f92: MOV ECX,dword ptr [EDI]
// 00575f94: ADD EBP,0x4
// 00575f97: CMP EAX,ECX
// 00575f99: JL 0x00575f8b
//   XREF to: 00575f8b (CONDITIONAL_JUMP)
// 00575f9b: LEA EAX,[EAX]
// 00575f9e: MOV ECX,ECX
// 00575fa0: XOR EBP,EBP
//   Label: LAB_00575fa0
// 00575fa2: MOV dword ptr [ESP + 0x70],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 00575fa6: MOV EAX,dword ptr [EDI]
//   Label: LAB_00575fa6
// 00575fa8: DEC EAX
// 00575fa9: CMP EBP,EAX
// 00575fab: JGE 0x0057600e
//   XREF to: 0057600e (CONDITIONAL_JUMP)
// 00575fad: LEA ECX,[EBP + 0x1]
// 00575fb0: CMP ECX,dword ptr [EDI]
// 00575fb2: JGE 0x00576000
//   XREF to: 00576000 (CONDITIONAL_JUMP)
// 00575fb4: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (READ)
// 00575fb8: LEA EDX,[ECX*0x4 + 0x0]
// 00575fbf: MOV EAX,dword ptr [EBX + 0x33648f8]
//   Label: LAB_00575fbf
//   XREF to: 033648f8 (DATA)
//   XREF to: 033648fc (DATA)
// 00575fc5: MOV ESI,dword ptr [EDX + 0x33648f8]
//   XREF to: 033648fc (READ)
//   XREF to: 03364900 (READ)
// 00575fcb: FLD float ptr [EAX*0x4 + 0x3346d20]
//   XREF to: 03346d20 (DATA)
// 00575fd2: FCOMP float ptr [ESI*0x4 + 0x3346d20]
//   XREF to: 03346d20 (DATA)
// 00575fd9: FNSTSW AX
// 00575fdb: SAHF
// 00575fdc: JNC 0x00575ff6
//   XREF to: 00575ff6 (CONDITIONAL_JUMP)
// 00575fde: MOV EAX,dword ptr [EDX + 0x33648f8]
//   XREF to: 033648fc (READ)
//   XREF to: 03364900 (READ)
// 00575fe4: MOV ESI,dword ptr [EBX + 0x33648f8]
//   XREF to: 033648f8 (DATA)
// 00575fea: MOV dword ptr [EBX + 0x33648f8],EAX
//   XREF to: 033648f8 (DATA)
// 00575ff0: MOV dword ptr [EDX + 0x33648f8],ESI
//   XREF to: 033648fc (WRITE)
//   XREF to: 03364900 (WRITE)
// 00575ff6: INC ECX
//   Label: LAB_00575ff6
// 00575ff7: MOV EAX,dword ptr [EDI]
// 00575ff9: ADD EDX,0x4
// 00575ffc: CMP ECX,EAX
// 00575ffe: JL 0x00575fbf
//   XREF to: 00575fbf (CONDITIONAL_JUMP)
// 00576000: MOV EDX,dword ptr [ESP + 0x70]
//   Label: LAB_00576000
//   XREF to: Stack[-0x28] (READ)
// 00576004: ADD EDX,0x4
// 00576007: INC EBP
// 00576008: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0057600c: JMP 0x00575fa6
//   XREF to: 00575fa6 (UNCONDITIONAL_JUMP)
// 0057600e: MOV EBX,0x2
//   Label: LAB_0057600e
// 00576013: MOV ECX,0x9
// 00576018: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0057601e: MOV EBP,dword ptr [EDI]
// 00576020: SUB ESI,0xb2
// 00576026: CMP EBP,ECX
// 00576028: JGE 0x0057602c
//   XREF to: 0057602c (CONDITIONAL_JUMP)
// 0057602a: MOV ECX,EBP
// 0057602c: TEST ECX,ECX
//   Label: LAB_0057602c
// 0057602e: JLE 0x00576175
//   XREF to: 00576175 (CONDITIONAL_JUMP)
// 00576034: LEA EAX,[EDI + 0x4]
// 00576037: SHL ECX,0x2
// 0057603a: XOR EBP,EBP
// 0057603c: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00576040: LEA EAX,[ESI + -0xb]
// 00576043: MOV dword ptr [ESP + 0x7c],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 00576047: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0057604b: LEA EAX,[ESI + 0x9a]
// 00576051: MOV dword ptr [ESP + 0x68],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00576055: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00576059: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_00576059
//   XREF to: Stack[-0x1c] (READ)
// 0057605d: MOV EAX,dword ptr [EAX + 0x33648f8]
//   XREF to: 033648f8 (DATA)
//   XREF to: 033648fc (DATA)
// 00576063: MOV ECX,EAX
// 00576065: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0057606c: IMUL EAX,EAX,0x1a4
// 00576072: IMUL EBP,ECX,0xf0
// 00576078: MOV EDX,0x3347108
//   XREF to: 03347108 (DATA)
// 0057607d: ADD EDX,EBP
// 0057607f: MOV dword ptr [ESP + 0x80],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00576086: MOV EDX,dword ptr [EDI + EAX*0x1 + 0x144]
// 0057608d: MOV dword ptr [ESP + 0x6c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00576091: TEST EDX,EDX
// 00576093: JNZ 0x00576180
//   XREF to: 00576180 (CONDITIONAL_JUMP)
// 00576099: PUSH ESI
// 0057609a: PUSH EBX
// 0057609b: MOV ECX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 005760a2: PUSH ECX
// 005760a3: CALL core_setdir.cpp_CZThumb_render_FUN_00574f20
//   XREF to: 00574f20 (UNCONDITIONAL_CALL)
// 005760a8: MOV EAX,dword ptr [EBP + 0x3347108]
//   XREF to: 03347108 (DATA)
// 005760ae: SUB EAX,0x2
//   Label: LAB_005760ae
// 005760b1: ADD ESP,0xc
// 005760b4: ADD EBX,EAX
// 005760b6: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 005760bd: SUB ESP,0x8
// 005760c0: FLD float ptr [EAX*0x4 + 0x3346d20]
//   XREF to: 03346d20 (DATA)
// 005760c7: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 005760ca: PUSH 0x646588
//   XREF to: 00646588 (DATA)
// 005760cf: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x98] (DATA)
// 005760d3: PUSH EAX
// 005760d4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005760d9: ADD ESP,0x10
// 005760dc: IMUL EAX,dword ptr [ESP + 0x84],0xf0
//   XREF to: Stack[-0x14] (READ)
// 005760e7: MOV EAX,dword ptr [EAX + 0x334710c]
//   XREF to: 0334710c (DATA)
// 005760ed: ADD EAX,ESI
// 005760ef: PUSH EAX
// 005760f0: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x2c] (READ)
// 005760f4: PUSH ECX
// 005760f5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x98] (DATA)
// 005760f9: PUSH EAX
// 005760fa: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005760ff: ADD ESP,0xc
// 00576102: MOV EBP,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 00576106: PUSH EBP
// 00576107: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x2c] (READ)
// 0057610b: MOV EDX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x14] (READ)
// 00576112: PUSH EAX
// 00576113: IMUL EAX,EDX,0x1a4
// 00576119: ADD EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x34] (READ)
// 0057611d: PUSH EAX
// 0057611e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00576123: MOV EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00576129: LEA EAX,[EBX + 0x42]
// 0057612c: ADD ESP,0xc
// 0057612f: ADD EBX,0x2
// 00576132: CMP EAX,EBP
// 00576134: JLE 0x0057615e
//   XREF to: 0057615e (CONDITIONAL_JUMP)
// 00576136: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (READ)
// 0057613a: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 0057613e: MOV EBX,0x2
// 00576143: MOV EBP,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00576149: ADD ESI,0x58
// 0057614c: ADD EDX,0x58
// 0057614f: LEA ECX,[EAX + 0x58]
// 00576152: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00576156: MOV dword ptr [ESP + 0x74],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0057615a: CMP EAX,EBP
// 0057615c: JG 0x00576175
//   XREF to: 00576175 (CONDITIONAL_JUMP)
// 0057615e: MOV EDX,dword ptr [ESP + 0x7c]
//   Label: LAB_0057615e
//   XREF to: Stack[-0x1c] (READ)
// 00576162: ADD EDX,0x4
// 00576165: MOV ECX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x30] (READ)
// 00576169: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057616d: CMP EDX,ECX
// 0057616f: JL 0x00576059
//   XREF to: 00576059 (CONDITIONAL_JUMP)
// 00576175: ADD ESP,0x88
//   Label: LAB_00576175
// 0057617b: POP EBP
// 0057617c: POP EDI
// 0057617d: POP ESI
// 0057617e: POP EBX
// 0057617f: RET
// 00576180: PUSH ESI
//   Label: LAB_00576180
// 00576181: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x18] (READ)
// 00576188: PUSH EBX
// 00576189: ADD EAX,0x78
// 0057618c: PUSH EAX
// 0057618d: CALL core_setdir.cpp_CZThumb_render_FUN_00574f20
//   XREF to: 00574f20 (UNCONDITIONAL_CALL)
// 00576192: MOV EAX,dword ptr [EBP + 0x3347180]
//   XREF to: 03347180 (DATA)
// 00576198: ADD ESP,0xc
// 0057619b: SUB EAX,0x2
// 0057619e: PUSH ESI
// 0057619f: ADD EBX,EAX
// 005761a1: PUSH EBX
// 005761a2: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 005761a9: PUSH EAX
// 005761aa: CALL core_setdir.cpp_CZThumb_render_FUN_00574f20
//   XREF to: 00574f20 (UNCONDITIONAL_CALL)
// 005761af: MOV EAX,dword ptr [EBP + 0x3347108]
//   XREF to: 03347108 (DATA)
// 005761b5: ADD ESP,0xc
// 005761b8: SUB EAX,0x2
// 005761bb: PUSH ESI
// 005761bc: ADD EBX,EAX
// 005761be: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x18] (READ)
// 005761c5: PUSH EBX
// 005761c6: ADD EAX,0x50
// 005761c9: PUSH EAX
// 005761ca: CALL core_setdir.cpp_CZThumb_render_FUN_00574f20
//   XREF to: 00574f20 (UNCONDITIONAL_CALL)
// 005761cf: MOV EAX,dword ptr [EBP + 0x3347158]
//   XREF to: 03347158 (DATA)
// 005761d5: ADD ESP,0xc
// 005761d8: SUB EAX,0x2
// 005761db: PUSH ESI
// 005761dc: ADD EBX,EAX
// 005761de: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x18] (READ)
// 005761e5: PUSH EBX
// 005761e6: ADD EAX,0x28
// 005761e9: PUSH EAX
// 005761ea: CALL core_setdir.cpp_CZThumb_render_FUN_00574f20
//   XREF to: 00574f20 (UNCONDITIONAL_CALL)
// 005761ef: MOV EAX,dword ptr [EBP + 0x3347130]
//   XREF to: 03347130 (DATA)
// 005761f5: JMP 0x005760ae
//   XREF to: 005760ae (UNCONDITIONAL_JUMP)
