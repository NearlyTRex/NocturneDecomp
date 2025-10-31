// Name: shape_meshlod.cpp_FUN_0051b080
// Address: 0051b080
// Address Range: [[0051b080, 0051b2a2]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051b080()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051ed60 (0051ed60) at 0051ed92 [UNCONDITIONAL_CALL]
// Globals:
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626420
//   undefined4 DAT_01626424
//   undefined4 DAT_01626428
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0
//   undefined4 DAT_016e99d4
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a0c
//   undefined4 DAT_016e9a10
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a4c
//   undefined4 DAT_016e9a50
//   undefined4 DAT_016e9a88
//   undefined4 DAT_016e9a98
//   undefined4 DAT_016e9b38
// Function calls:
//   shape_meshlod.cpp_CallocSomething1_FUN_00515ac0
//   shape_meshlod.cpp_FreeSomething1_FUN_00515970
//   shape_meshlod.cpp_FUN_0051b330
//   shape_meshlod.cpp_ReallocSomething_FUN_00518790

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_0051b080(undefined4 param_1) */

void shape_meshlod_cpp_FUN_0051b080(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int local_14;
  
  iVar6 = 0;
  shape_meshlod_cpp_FreeSomething1_FUN_00515970();
  if (0 < g_PolygonCount) {
    iVar2 = 0;
    do {
      if (g_ModelPolygonData[0].texture_name[iVar2] != '\0') {
        shape_meshlod_cpp_ReallocSomething_FUN_00518790();
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x184;
    } while (iVar6 < g_PolygonCount);
  }
  shape_meshlod_cpp_CallocSomething1_FUN_00515ac0();
  iVar6 = 0;
  if (0 < *in_stack_00000008) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      *(undefined4 *)(in_stack_0000000c[1] + iVar3) =
           *(undefined4 *)((int)&g_LoadedVertices[0].vertex.x + iVar2);
      *(undefined4 *)(in_stack_0000000c[1] + 4 + iVar3) =
           *(undefined4 *)((int)&g_LoadedVertices[0].vertex.y + iVar2);
      *(undefined4 *)(in_stack_0000000c[1] + 8 + iVar3) =
           *(undefined4 *)((int)&g_LoadedVertices[0].vertex.z + iVar2);
      iVar3 = iVar3 + 0x4c4;
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar6 < *in_stack_0000000c);
  }
  iVar6 = g_PolygonCount;
  iVar2 = 0;
  local_14 = 0;
  in_stack_0000000c[4] = 0;
  if (0 < iVar6) {
    do {
      iVar5 = iVar2 * 0x8c;
      iVar3 = 2;
      iVar6 = local_14 * 0x184 + 8;
      if (2 < (int)g_ModelPolygonData[local_14].vertex_indices_count) {
        do {
          iVar2 = iVar2 + 1;
          puVar4 = (undefined4 *)(in_stack_0000000c[3] + iVar5);
          iVar5 = iVar5 + 0x8c;
          if (g_ModelPolygonData[local_14].texture_name[0] == '\0') {
            *puVar4 = 0xffffffff;
          }
          else {
            uVar1 = shape_meshlod_cpp_ReallocSomething_FUN_00518790();
            *puVar4 = uVar1;
          }
          puVar4[1] = g_ModelPolygonData[local_14].part_assignment;
          puVar4[4] = g_ModelPolygonData[local_14].vertex_indices[0];
          puVar4[7] = g_ModelPolygonData[local_14].vertex_indices[0x10];
          puVar4[8] = g_ModelPolygonData[local_14].uv_coordinates[0];
          puVar4[5] = *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + -4);
          puVar4[9] = *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 0x3c);
          puVar4[10] = *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 0x7c);
          puVar4[6] = *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar6);
          puVar4[0xb] = *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 0x40);
          iVar3 = iVar3 + 1;
          puVar4[0xc] = *(undefined4 *)((int)g_ModelPolygonData[0].uv_coordinates + iVar6);
          iVar6 = iVar6 + 4;
        } while (iVar3 < (int)g_ModelPolygonData[local_14].vertex_indices_count);
      }
      local_14 = local_14 + 1;
    } while (local_14 < g_PolygonCount);
  }
  in_stack_0000000c[6] = 2;
  in_stack_0000000c[7] = 2;
  in_stack_0000000c[8] = 0;
  shape_meshlod_cpp_FUN_0051b330();
  return;
}


// Assembly code:
// 0051b080: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051b080
// 0051b081: PUSH ESI
// 0051b082: PUSH EDI
// 0051b083: PUSH EBP
// 0051b084: SUB ESP,0x10
// 0051b087: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0051b08b: PUSH EDX
// 0051b08c: XOR EDI,EDI
// 0051b08e: XOR ESI,ESI
// 0051b090: CALL shape_meshlod.cpp_FreeSomething1_FUN_00515970
//   XREF to: 00515970 (UNCONDITIONAL_CALL)
// 0051b095: MOV ECX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0051b09b: ADD ESP,0x4
// 0051b09e: TEST ECX,ECX
// 0051b0a0: JLE 0x0051b0e1
//   XREF to: 0051b0e1 (CONDITIONAL_JUMP)
// 0051b0a2: XOR EBX,EBX
// 0051b0a4: MOV EAX,dword ptr [EBX + 0x16e99b4]
//   Label: LAB_0051b0a4
//   XREF to: 016e99b4 (READ)
//   XREF to: 016e9b38 (READ)
// 0051b0aa: SUB EAX,0x2
// 0051b0ad: ADD EDI,EAX
// 0051b0af: CMP byte ptr [EBX + 0x16e9914],0x0
//   XREF to: 016e9914 (READ)
//   XREF to: 016e9a98 (READ)
// 0051b0b6: JZ 0x0051b0d0
//   XREF to: 0051b0d0 (CONDITIONAL_JUMP)
// 0051b0b8: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0051b0bd: ADD EAX,EBX
// 0051b0bf: ADD EAX,0x4
//   XREF to: 016e9914 (PARAM)
//   XREF to: 016e9a98 (PARAM)
// 0051b0c2: PUSH EAX
//   XREF to: 016e9914 (DATA)
//   XREF to: 016e9a98 (DATA)
// 0051b0c3: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0051b0c7: PUSH EBP
// 0051b0c8: CALL shape_meshlod.cpp_ReallocSomething_FUN_00518790
//   XREF to: 00518790 (UNCONDITIONAL_CALL)
// 0051b0cd: ADD ESP,0x8
// 0051b0d0: MOV EBP,dword ptr [0x016e990c]
//   Label: LAB_0051b0d0
//   XREF to: 016e990c (READ)
// 0051b0d6: INC ESI
// 0051b0d7: ADD EBX,0x184
// 0051b0dd: CMP ESI,EBP
// 0051b0df: JL 0x0051b0a4
//   XREF to: 0051b0a4 (CONDITIONAL_JUMP)
// 0051b0e1: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0051b0e1
//   XREF to: Stack[0x4] (READ)
// 0051b0e5: MOV EDX,dword ptr [EAX + 0x10]
// 0051b0e8: PUSH EDX
// 0051b0e9: PUSH EDI
// 0051b0ea: MOV ECX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0051b0f0: PUSH ECX
// 0051b0f1: PUSH EAX
// 0051b0f2: MOV EBX,EAX
// 0051b0f4: CALL shape_meshlod.cpp_CallocSomething1_FUN_00515ac0
//   XREF to: 00515ac0 (UNCONDITIONAL_CALL)
// 0051b0f9: MOV EAX,EBX
// 0051b0fb: XOR ESI,ESI
// 0051b0fd: MOV EDI,dword ptr [EAX]
// 0051b0ff: ADD ESP,0x10
// 0051b102: TEST EDI,EDI
// 0051b104: JLE 0x0051b150
//   XREF to: 0051b150 (CONDITIONAL_JUMP)
// 0051b106: XOR EAX,EAX
// 0051b108: XOR EBX,EBX
// 0051b10a: MOV EDI,dword ptr [ESP + 0x24]
//   Label: LAB_0051b10a
//   XREF to: Stack[0x4] (READ)
// 0051b10e: MOV EDI,dword ptr [EDI + 0x4]
// 0051b111: MOV EDX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (READ)
//   XREF to: 01626420 (READ)
// 0051b117: MOV dword ptr [EDI + EBX*0x1],EDX
// 0051b11a: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0051b11e: MOV EDI,dword ptr [EDI + 0x4]
// 0051b121: MOV EDX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (READ)
//   XREF to: 01626424 (READ)
// 0051b127: MOV dword ptr [EDI + EBX*0x1 + 0x4],EDX
// 0051b12b: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0051b12f: MOV EDI,dword ptr [EDI + 0x4]
// 0051b132: MOV EDX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (READ)
//   XREF to: 01626428 (READ)
// 0051b138: MOV dword ptr [EDI + EBX*0x1 + 0x8],EDX
// 0051b13c: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0051b140: ADD EBX,0x4c4
// 0051b146: INC ESI
// 0051b147: MOV EDX,dword ptr [EDI]
// 0051b149: ADD EAX,0x14
// 0051b14c: CMP ESI,EDX
// 0051b14e: JL 0x0051b10a
//   XREF to: 0051b10a (CONDITIONAL_JUMP)
// 0051b150: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0051b150
//   XREF to: Stack[0x4] (READ)
// 0051b154: XOR ECX,ECX
// 0051b156: MOV ESI,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0051b15c: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0051b160: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051b164: MOV dword ptr [EAX + 0x10],0x0
// 0051b16b: TEST ESI,ESI
// 0051b16d: JLE 0x0051b261
//   XREF to: 0051b261 (CONDITIONAL_JUMP)
// 0051b173: IMUL EDI,dword ptr [ESP + 0x4],0x184
//   Label: LAB_0051b173
//   XREF to: Stack[-0x1c] (READ)
// 0051b17b: IMUL EBP,dword ptr [ESP + 0x8],0x8c
//   XREF to: Stack[-0x18] (READ)
// 0051b183: MOV EAX,0x2
// 0051b188: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051b18c: MOV EBX,dword ptr [EDI + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0051b192: LEA ESI,[EDI + 0x8]
// 0051b195: CMP EBX,EAX
// 0051b197: JLE 0x0051b24a
//   XREF to: 0051b24a (CONDITIONAL_JUMP)
// 0051b19d: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0051b1a2: ADD EAX,EDI
// 0051b1a4: ADD EAX,0x4
// 0051b1a7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 0051b1aa: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_0051b1aa
//   XREF to: Stack[-0x18] (READ)
// 0051b1ae: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0051b1b2: MOV DL,byte ptr [EDI + 0x16e9914]
//   XREF to: 016e9914 (DATA)
// 0051b1b8: INC ECX
// 0051b1b9: MOV EBX,dword ptr [EBX + 0xc]
// 0051b1bc: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0051b1c0: ADD EBX,EBP
// 0051b1c2: ADD EBP,0x8c
// 0051b1c8: TEST DL,DL
// 0051b1ca: JNZ 0x0051b28b
//   XREF to: 0051b28b (CONDITIONAL_JUMP)
// 0051b1d0: MOV dword ptr [EBX],0xffffffff
// 0051b1d6: MOV EAX,dword ptr [EDI + 0x16e9a88]
//   Label: LAB_0051b1d6
//   XREF to: 016e9a88 (DATA)
// 0051b1dc: MOV dword ptr [EBX + 0x4],EAX
// 0051b1df: MOV EAX,dword ptr [EDI + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0051b1e5: MOV dword ptr [EBX + 0x10],EAX
// 0051b1e8: MOV EAX,dword ptr [EDI + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0051b1ee: MOV dword ptr [EBX + 0x1c],EAX
// 0051b1f1: MOV EAX,dword ptr [EDI + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0051b1f7: MOV dword ptr [EBX + 0x20],EAX
// 0051b1fa: MOV EAX,dword ptr [ESI + 0x16e99c4]
//   XREF to: 016e99cc (DATA)
//   XREF to: 016e99d0 (DATA)
// 0051b200: MOV dword ptr [EBX + 0x14],EAX
// 0051b203: MOV EAX,dword ptr [ESI + 0x16e9a04]
//   XREF to: 016e9a0c (DATA)
//   XREF to: 016e9a10 (DATA)
// 0051b209: MOV dword ptr [EBX + 0x24],EAX
// 0051b20c: MOV EAX,dword ptr [ESI + 0x16e9a44]
//   XREF to: 016e9a4c (DATA)
//   XREF to: 016e9a50 (DATA)
// 0051b212: MOV dword ptr [EBX + 0x28],EAX
// 0051b215: MOV EAX,dword ptr [ESI + 0x16e99c8]
//   XREF to: 016e99d0 (DATA)
//   XREF to: 016e99d4 (DATA)
// 0051b21b: ADD ESI,0x4
// 0051b21e: MOV dword ptr [EBX + 0x18],EAX
// 0051b221: FLD float ptr [ESI + 0x16e9a04]
//   XREF to: 016e9a10 (DATA)
// 0051b227: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0051b22b: FSTP float ptr [EBX + 0x2c]
// 0051b22e: FLD float ptr [ESI + 0x16e9a44]
//   XREF to: 016e9a50 (DATA)
// 0051b234: INC EAX
// 0051b235: FSTP float ptr [EBX + 0x30]
// 0051b238: MOV EDX,dword ptr [EDI + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0051b23e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051b242: CMP EAX,EDX
// 0051b244: JL 0x0051b1aa
//   XREF to: 0051b1aa (CONDITIONAL_JUMP)
// 0051b24a: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_0051b24a
//   XREF to: Stack[-0x1c] (READ)
// 0051b24e: INC EDI
// 0051b24f: MOV EBP,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0051b255: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0051b259: CMP EDI,EBP
// 0051b25b: JL 0x0051b173
//   XREF to: 0051b173 (CONDITIONAL_JUMP)
// 0051b261: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0051b261
//   XREF to: Stack[0x4] (READ)
// 0051b265: MOV dword ptr [EAX + 0x18],0x2
// 0051b26c: MOV dword ptr [EAX + 0x1c],0x2
// 0051b273: PUSH EAX
// 0051b274: MOV dword ptr [EAX + 0x20],0x0
// 0051b27b: CALL shape_meshlod.cpp_FUN_0051b330
//   XREF to: 0051b330 (UNCONDITIONAL_CALL)
// 0051b280: ADD ESP,0x4
// 0051b283: ADD ESP,0x10
// 0051b286: POP EBP
// 0051b287: POP EDI
// 0051b288: POP ESI
// 0051b289: POP EBX
// 0051b28a: RET
// 0051b28b: MOV EAX,dword ptr [ESP]
//   Label: LAB_0051b28b
//   XREF to: Stack[-0x20] (DATA)
// 0051b28e: PUSH EAX
// 0051b28f: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0051b293: PUSH EDX
// 0051b294: CALL shape_meshlod.cpp_ReallocSomething_FUN_00518790
//   XREF to: 00518790 (UNCONDITIONAL_CALL)
// 0051b299: ADD ESP,0x8
// 0051b29c: MOV dword ptr [EBX],EAX
// 0051b29e: JMP 0x0051b1d6
//   XREF to: 0051b1d6 (UNCONDITIONAL_JUMP)
