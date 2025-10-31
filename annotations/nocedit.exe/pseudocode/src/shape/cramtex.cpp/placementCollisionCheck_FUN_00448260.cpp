// Name: shape_cramtex.cpp_placementCollisionCheck_FUN_00448260
// Address: 00448260
// Address Range: [[00448260, 00448381]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_placementCollisionCheck_FUN_00448260(int layer_id, int start_x, int start_y, int width, int height)
// Globals:
//   undefined4 DAT_0083c1a0
//   undefined4 DAT_0083c1ac
//   undefined4 DAT_0083c1b0
//   undefined4 DAT_0083c1b4
//   undefined4 DAT_0083c1b8
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
//   undefined4 g_CramSortedTextureEntries[0].placement_bottom
//   undefined4 g_CramSortedTextureEntries[0].working_right
//   undefined4 g_CramSortedTextureEntries[0].working_top
//   undefined4 g_CramSortedTextureEntries[0].working_width
//   SCramRectangle[50] g_CramRectangles
//   undefined4 DAT_00840c18
//   undefined4 DAT_00840c1c
//   undefined4 DAT_00840c20
//   undefined4 DAT_00840c24
//   undefined4 DAT_00840c28
//   undefined4 DAT_00840c2c
//   undefined4 DAT_00840c38
//   undefined4 DAT_00840c3c
//   undefined4 DAT_00840c40
//   undefined4 DAT_00840c44
//   int g_CramPlacedTextureCount
//   int g_CramRectangleCount
//   int g_CramMinPlacementX
//   int g_CramMinPlacementY

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_placementCollisionCheck_FUN_00448260
          (int layer_id,int start_x,int start_y,int width,int height)

{
  int iVar1;
  SCramWorkingEntry *pSVar2;
  int iVar3;
  int iVar4;
  int local_18;
  SCramRectangle *local_14;
  
  if (0 < g_CramRectangleCount) {
    iVar1 = 0;
    do {
      if (((layer_id == *(int *)((int)&g_CramRectangles[0].left + iVar1)) &&
          (start_x == *(int *)((int)&g_CramRectangles[0].top + iVar1))) &&
         (start_y == *(int *)((int)&g_CramRectangles[0].right + iVar1))) {
        return;
      }
      iVar1 = iVar1 + 0x28;
    } while (iVar1 < g_CramRectangleCount * 0x28);
  }
  local_14 = g_CramRectangles + g_CramRectangleCount;
  local_18 = 0;
  do {
    iVar1 = g_CramMinPlacementY;
    iVar4 = g_CramMinPlacementX;
    if (local_18 != 0) {
      iVar1 = g_CramMinPlacementX;
      iVar4 = g_CramMinPlacementY;
    }
    iVar3 = g_CramPlacedTextureCount + -1;
    if (-1 < iVar3) {
      pSVar2 = g_CramSortedTextureEntries + iVar3;
      do {
        if (((pSVar2->assigned_map_number == layer_id) && (start_x < pSVar2->working_top)) &&
           ((start_y < pSVar2->working_width &&
            ((pSVar2->placement_bottom < iVar4 + start_x &&
             (pSVar2->working_right < iVar1 + start_y)))))) break;
        iVar3 = iVar3 + -1;
        pSVar2 = pSVar2 + -1;
      } while (-1 < iVar3);
    }
    if (iVar3 < 0) {
      local_14->reserved_0x18 = 0;
      local_14->active_flag = 1;
      local_14->left = layer_id;
      local_14->top = start_x;
      local_14->right = start_y;
      local_14->bottom = iVar4 + start_x;
      local_14->orientation = local_18;
      local_14->max_dimension = iVar1 + start_y;
      g_CramRectangleCount = g_CramRectangleCount + 1;
      local_14 = local_14 + 1;
    }
    local_18 = local_18 + 1;
    if (1 < local_18) {
      return;
    }
  } while( true );
}


// Assembly code:
// 00448260: PUSH EBX
//   Label: shape_cramtex.cpp_placementCollisionCheck_FUN_00448260
// 00448261: PUSH ESI
// 00448262: PUSH EDI
// 00448263: PUSH EBP
// 00448264: SUB ESP,0x8
// 00448267: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0044826b: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0044826f: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00448275: TEST EDX,EDX
// 00448277: JLE 0x004482ac
//   XREF to: 004482ac (CONDITIONAL_JUMP)
// 00448279: MOV ESI,EDX
// 0044827b: SHL EDX,0x2
// 0044827e: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00448282: ADD EDX,ESI
// 00448284: XOR EAX,EAX
// 00448286: SHL EDX,0x3
// 00448289: CMP EDI,dword ptr [EAX + 0x840c14]
//   Label: LAB_00448289
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 0044828f: JNZ 0x004482a5
//   XREF to: 004482a5 (CONDITIONAL_JUMP)
// 00448291: CMP EBX,dword ptr [EAX + 0x840c18]
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00448297: JNZ 0x004482a5
//   XREF to: 004482a5 (CONDITIONAL_JUMP)
// 00448299: CMP ECX,dword ptr [EAX + 0x840c1c]
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 0044829f: JZ 0x00448322
//   XREF to: 00448322 (CONDITIONAL_JUMP)
// 004482a5: ADD EAX,0x28
//   Label: LAB_004482a5
// 004482a8: CMP EAX,EDX
// 004482aa: JL 0x00448289
//   XREF to: 00448289 (CONDITIONAL_JUMP)
// 004482ac: MOV EDX,dword ptr [0x0084a860]
//   Label: LAB_004482ac
//   XREF to: 0084a860 (READ)
// 004482b2: LEA EAX,[EDX*0x4 + 0x0]
// 004482b9: ADD EAX,EDX
// 004482bb: SHL EAX,0x3
// 004482be: XOR ESI,ESI
// 004482c0: ADD EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 004482c5: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x18] (DATA)
// 004482c8: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004482cc: CMP dword ptr [ESP],0x0
//   Label: LAB_004482cc
//   XREF to: Stack[-0x18] (DATA)
// 004482d0: JZ 0x0044832a
//   XREF to: 0044832a (CONDITIONAL_JUMP)
// 004482d2: MOV ESI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 004482d8: MOV EDI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 004482de: ADD ESI,ECX
//   Label: LAB_004482de
// 004482e0: ADD EDI,EBX
// 004482e2: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 004482e8: DEC EDX
// 004482e9: TEST EDX,EDX
// 004482eb: JL 0x00448312
//   XREF to: 00448312 (CONDITIONAL_JUMP)
// 004482ed: IMUL EAX,EDX,0x4c
// 004482f0: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004482f5: MOV EBP,dword ptr [EAX + 0x10]
//   Label: LAB_004482f5
//   XREF to: 0083c1ec (DATA)
//   XREF to: 0083c1a0 (DATA)
// 004482f8: CMP EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004482fc: JNZ 0x00448338
//   XREF to: 00448338 (CONDITIONAL_JUMP)
// 004482fe: CMP EBX,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00448301: JGE 0x00448338
//   XREF to: 00448338 (CONDITIONAL_JUMP)
// 00448303: CMP ECX,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 00448306: JGE 0x00448338
//   XREF to: 00448338 (CONDITIONAL_JUMP)
// 00448308: CMP EDI,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1f8 (DATA)
//   XREF to: 0083c1ac (DATA)
// 0044830b: JLE 0x00448338
//   XREF to: 00448338 (CONDITIONAL_JUMP)
// 0044830d: CMP ESI,dword ptr [EAX + 0x20]
//   XREF to: 0083c1fc (DATA)
//   XREF to: 0083c1b0 (DATA)
// 00448310: JLE 0x00448338
//   XREF to: 00448338 (CONDITIONAL_JUMP)
// 00448312: TEST EDX,EDX
//   Label: LAB_00448312
// 00448314: JL 0x00448342
//   XREF to: 00448342 (CONDITIONAL_JUMP)
// 00448316: MOV ESI,dword ptr [ESP]
//   Label: LAB_00448316
//   XREF to: Stack[-0x18] (DATA)
// 00448319: INC ESI
// 0044831a: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x18] (DATA)
// 0044831d: CMP ESI,0x1
// 00448320: JLE 0x004482cc
//   XREF to: 004482cc (CONDITIONAL_JUMP)
// 00448322: ADD ESP,0x8
//   Label: LAB_00448322
// 00448325: POP EBP
// 00448326: POP EDI
// 00448327: POP ESI
// 00448328: POP EBX
// 00448329: RET
// 0044832a: MOV ESI,dword ptr [0x0084a86c]
//   Label: LAB_0044832a
//   XREF to: 0084a86c (READ)
// 00448330: MOV EDI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 00448336: JMP 0x004482de
//   XREF to: 004482de (UNCONDITIONAL_JUMP)
// 00448338: DEC EDX
//   Label: LAB_00448338
// 00448339: SUB EAX,0x4c
// 0044833c: TEST EDX,EDX
// 0044833e: JGE 0x004482f5
//   XREF to: 004482f5 (CONDITIONAL_JUMP)
// 00448340: JMP 0x00448312
//   XREF to: 00448312 (UNCONDITIONAL_JUMP)
// 00448342: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_00448342
//   XREF to: Stack[-0x14] (READ)
// 00448346: MOV dword ptr [EDX + 0x18],0x0
//   XREF to: 00840c2c (DATA)
// 0044834d: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00448351: MOV dword ptr [EDX + 0x24],0x1
//   XREF to: 00840c38 (DATA)
// 00448358: MOV dword ptr [EDX],EAX
//   XREF to: 00840c14 (DATA)
// 0044835a: MOV dword ptr [EDX + 0x4],EBX
//   XREF to: 00840c18 (DATA)
// 0044835d: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 00840c1c (DATA)
// 00448360: MOV dword ptr [EDX + 0xc],EDI
//   XREF to: 00840c20 (DATA)
// 00448363: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00448366: MOV dword ptr [EDX + 0x14],EAX
//   XREF to: 00840c28 (DATA)
// 00448369: LEA EAX,[EDX + 0x28]
// 0044836c: MOV dword ptr [EDX + 0x10],ESI
//   XREF to: 00840c24 (DATA)
// 0044836f: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00448375: INC EDX
// 00448376: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044837a: MOV dword ptr [0x0084a860],EDX
//   XREF to: 0084a860 (WRITE)
// 00448380: JMP 0x00448316
//   XREF to: 00448316 (UNCONDITIONAL_JUMP)
