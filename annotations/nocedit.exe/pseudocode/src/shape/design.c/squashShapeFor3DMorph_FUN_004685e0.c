// Name: shape_design.c_squashShapeFor3DMorph_FUN_004685e0
// Address: 004685e0
// Address Range: [[004685e0, 004686dd]]
// Convention: __cdecl
// Signature: void shape_design.c_squashShapeFor3DMorph_FUN_004685e0(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f6fa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_squash_axis_X_Y_or_0061cd9c
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_squashShapeFor3DMorph_FUN_004685e0(void)

{
  uint uVar1;
  int iVar2;
  
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_drawText_FUN_00401fd0("Enter squash axis - X, Y, or Z : ",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  uVar1 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
  if (uVar1 < 0x59) {
    if (uVar1 == 0x58) {
      for (iVar2 = 0; iVar2 < g_VertexCount; iVar2 = iVar2 + 1) {
        g_LoadedVertices[iVar2].vertex.x = 0.0;
      }
    }
  }
  else if (uVar1 < 0x5a) {
    for (iVar2 = 0; iVar2 < g_VertexCount; iVar2 = iVar2 + 1) {
      g_LoadedVertices[iVar2].vertex.y = 0.0;
    }
  }
  else if (uVar1 == 0x5a) {
    for (iVar2 = 0; iVar2 < g_VertexCount; iVar2 = iVar2 + 1) {
      g_LoadedVertices[iVar2].vertex.z = 0.0;
    }
  }
  return;
}


// Assembly code:
// 004685e0: PUSH EBX
//   Label: shape_design.c_squashShapeFor3DMorph_FUN_004685e0
// 004685e1: PUSH ESI
// 004685e2: PUSH EDI
// 004685e3: PUSH EBP
// 004685e4: MOV EBP,ESP
// 004685e6: SUB ESP,0xc
// 004685ec: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004685f1: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004685f6: PUSH 0x0
// 004685f8: PUSH 0x0
// 004685fa: MOV EAX,0x61cd9c
//   XREF to: 0061cd9c (PARAM)
// 004685ff: PUSH EAX
//   XREF to: 0061cd9c (DATA)
// 00468600: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00468605: ADD ESP,0xc
// 00468608: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046860d: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00468612: AND EAX,0xff
// 00468617: PUSH EAX
// 00468618: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0046861d: ADD ESP,0x4
// 00468620: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00468623: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468626: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00468629: JMP 0x004686b7
//   XREF to: 004686b7 (UNCONDITIONAL_JUMP)
// 0046862e: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0046862e
//   XREF to: Stack[-0x1c] (WRITE)
// 00468635: JMP 0x0046863d
//   XREF to: 0046863d (UNCONDITIONAL_JUMP)
// 00468637: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00468637
//   XREF to: Stack[-0x1c] (READ)
// 0046863a: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046863d: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046863d
//   XREF to: Stack[-0x1c] (READ)
// 00468640: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00468646: JGE 0x00468658
//   XREF to: 00468658 (CONDITIONAL_JUMP)
// 00468648: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0046864c: MOV dword ptr [EAX + 0x162640c],0x0
//   XREF to: 0162640c (DATA)
// 00468656: JMP 0x00468637
//   XREF to: 00468637 (UNCONDITIONAL_JUMP)
// 00468658: JMP 0x004686d7
//   Label: LAB_00468658
//   XREF to: 004686d7 (UNCONDITIONAL_JUMP)
// 0046865d: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0046865d
//   XREF to: Stack[-0x1c] (WRITE)
// 00468664: JMP 0x0046866c
//   XREF to: 0046866c (UNCONDITIONAL_JUMP)
// 00468666: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00468666
//   XREF to: Stack[-0x1c] (READ)
// 00468669: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046866c: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046866c
//   XREF to: Stack[-0x1c] (READ)
// 0046866f: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00468675: JGE 0x00468687
//   XREF to: 00468687 (CONDITIONAL_JUMP)
// 00468677: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0046867b: MOV dword ptr [EAX + 0x1626410],0x0
//   XREF to: 01626410 (DATA)
// 00468685: JMP 0x00468666
//   XREF to: 00468666 (UNCONDITIONAL_JUMP)
// 00468687: JMP 0x004686d7
//   Label: LAB_00468687
//   XREF to: 004686d7 (UNCONDITIONAL_JUMP)
// 00468689: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_00468689
//   XREF to: Stack[-0x1c] (WRITE)
// 00468690: JMP 0x00468698
//   XREF to: 00468698 (UNCONDITIONAL_JUMP)
// 00468692: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00468692
//   XREF to: Stack[-0x1c] (READ)
// 00468695: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00468698: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00468698
//   XREF to: Stack[-0x1c] (READ)
// 0046869b: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 004686a1: JGE 0x004686b3
//   XREF to: 004686b3 (CONDITIONAL_JUMP)
// 004686a3: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 004686a7: MOV dword ptr [EAX + 0x1626414],0x0
//   XREF to: 01626414 (DATA)
// 004686b1: JMP 0x00468692
//   XREF to: 00468692 (UNCONDITIONAL_JUMP)
// 004686b3: JMP 0x004686d7
//   Label: LAB_004686b3
//   XREF to: 004686d7 (UNCONDITIONAL_JUMP)
// 004686b5: JMP 0x004686d7
//   Label: LAB_004686b5
//   XREF to: 004686d7 (UNCONDITIONAL_JUMP)
// 004686b7: CMP dword ptr [EBP + -0x4],0x59
//   Label: LAB_004686b7
//   XREF to: Stack[-0x14] (READ)
// 004686bb: JC 0x004686cb
//   XREF to: 004686cb (CONDITIONAL_JUMP)
// 004686bd: CMP dword ptr [EBP + -0x4],0x59
//   XREF to: Stack[-0x14] (READ)
// 004686c1: JBE 0x0046865d
//   XREF to: 0046865d (CONDITIONAL_JUMP)
// 004686c3: CMP dword ptr [EBP + -0x4],0x5a
//   XREF to: Stack[-0x14] (READ)
// 004686c7: JZ 0x00468689
//   XREF to: 00468689 (CONDITIONAL_JUMP)
// 004686c9: JMP 0x004686b5
//   XREF to: 004686b5 (UNCONDITIONAL_JUMP)
// 004686cb: CMP dword ptr [EBP + -0x4],0x58
//   Label: LAB_004686cb
//   XREF to: Stack[-0x14] (READ)
// 004686cf: JZ 0x0046862e
//   XREF to: 0046862e (CONDITIONAL_JUMP)
// 004686d5: JMP 0x004686b5
//   XREF to: 004686b5 (UNCONDITIONAL_JUMP)
// 004686d7: MOV ESP,EBP
//   Label: LAB_004686d7
// 004686d9: POP EBP
// 004686da: POP EDI
// 004686db: POP ESI
// 004686dc: POP EBX
// 004686dd: RET
