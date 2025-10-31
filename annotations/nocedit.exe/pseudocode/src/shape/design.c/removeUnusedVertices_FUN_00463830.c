// Name: shape_design.c_removeUnusedVertices_FUN_00463830
// Address: 00463830
// Address Range: [[00463830, 00463a1f]]
// Convention: __cdecl
// Signature: void shape_design.c_removeUnusedVertices_FUN_00463830(void)
// Cross-references:
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 0046483b [UNCONDITIONAL_CALL]
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 00465785 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveGlobalWeld_FUN_00466040 (00466040) at 004661be [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveWeldVertices_FUN_00465e90 (00465e90) at 0046602d [UNCONDITIONAL_CALL]
//   shape_design.c_mergePolygonsWithValidation_FUN_00465b40 (00465b40) at 00465c43 [UNCONDITIONAL_CALL]
//   shape_design.c_optimizePolygonMesh_FUN_004658e0 (004658e0) at 00465ab4 [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 00467db4 [UNCONDITIONAL_CALL]
//   shape_design.c_weldNearbyVertices_FUN_00465c50 (00465c50) at 00465d3d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_design_c_0061c04e
//   TerminatedCString s_ERROR_Can_t_allocate_mem_0061c060
//   TerminatedCString s_shape_design_c_0061c098
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626418
//   undefined4 DAT_0162641c
//   undefined4 DAT_01626420
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e99b4
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   engine_2d.c_drawText_FUN_00401fd0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_removeUnusedVertices_FUN_00463830(void)

{
  void *dest;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  int iVar6;
  int local_24;
  int local_1c;
  
  bVar5 = 0;
  if (0 < g_VertexCount) {
    dest = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (g_VertexCount << 2,"..\\shape\\design.c",0x189a);
    if (dest == (void *)0x0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("ERROR: Can't allocate memory to remove unused vertices.",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      crt_memory_c_memset_FUN_005fde40(dest,0,g_VertexCount << 2);
      for (local_1c = 0; iVar6 = g_VertexCount, local_1c < g_PolygonCount; local_1c = local_1c + 1)
      {
        for (local_24 = 0; local_24 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
            local_24 = local_24 + 1) {
          *(undefined4 *)(g_ModelPolygonData[local_1c].vertex_indices[local_24] * 4 + (int)dest) = 1
          ;
        }
      }
      g_VertexCount = 0;
      for (local_1c = 0; local_1c < iVar6; local_1c = local_1c + 1) {
        if (*(int *)(local_1c * 4 + (int)dest) == 0) {
          *(undefined4 *)(local_1c * 4 + (int)dest) = 0xffffffff;
        }
        else {
          if (g_VertexCount != local_1c) {
            puVar3 = (undefined4 *)(g_VertexCount * 0x14 + 0x1626410 + (uint)bVar5 * -8);
            puVar1 = (undefined4 *)(local_1c * 0x14 + 0x1626410 + (uint)bVar5 * -8);
            g_LoadedVertices[g_VertexCount].vertex.x = g_LoadedVertices[local_1c].vertex.x;
            puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
            puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
            *puVar3 = *puVar1;
            *puVar4 = *puVar2;
            puVar4[(uint)bVar5 * -2 + 1] = puVar2[(uint)bVar5 * -2 + 1];
            (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
                 (puVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
          }
          *(int *)((int)dest + local_1c * 4) = g_VertexCount;
          g_VertexCount = g_VertexCount + 1;
        }
      }
      for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
        for (iVar6 = 0; iVar6 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
            iVar6 = iVar6 + 1) {
          g_ModelPolygonData[local_1c].vertex_indices[iVar6] =
               *(uint *)((int)dest + g_ModelPolygonData[local_1c].vertex_indices[iVar6] * 4);
        }
      }
      shape_memdbg_cpp_debugFree_FUN_0050f460(dest,"..\\shape\\design.c",0x18d4);
    }
  }
  return;
}


// Assembly code:
// 00463830: PUSH EBX
//   Label: shape_design.c_removeUnusedVertices_FUN_00463830
// 00463831: PUSH ESI
// 00463832: PUSH EDI
// 00463833: PUSH EBP
// 00463834: MOV EBP,ESP
// 00463836: SUB ESP,0x1c
// 0046383c: CMP dword ptr [0x01626408],0x1
//   XREF to: 01626408 (READ)
// 00463843: JGE 0x0046384a
//   XREF to: 0046384a (CONDITIONAL_JUMP)
// 00463845: JMP 0x00463a19
//   XREF to: 00463a19 (UNCONDITIONAL_JUMP)
// 0046384a: PUSH 0x189a
//   Label: LAB_0046384a
// 0046384f: MOV EAX,0x61c04e
//   XREF to: 0061c04e (DATA)
// 00463854: PUSH EAX
//   XREF to: 0061c04e (DATA)
// 00463855: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 0046385a: SHL EAX,0x2
// 0046385d: PUSH EAX
// 0046385e: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00463863: ADD ESP,0xc
// 00463866: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00463869: CMP dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (READ)
// 0046386d: JNZ 0x00463895
//   XREF to: 00463895 (CONDITIONAL_JUMP)
// 0046386f: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00463874: PUSH 0x0
// 00463876: PUSH 0x0
// 00463878: MOV EAX,0x61c060
//   XREF to: 0061c060 (PARAM)
// 0046387d: PUSH EAX
//   XREF to: 0061c060 (DATA)
// 0046387e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00463883: ADD ESP,0xc
// 00463886: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046388b: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00463890: JMP 0x00463a19
//   XREF to: 00463a19 (UNCONDITIONAL_JUMP)
// 00463895: MOV EAX,[0x01626408]
//   Label: LAB_00463895
//   XREF to: 01626408 (READ)
// 0046389a: SHL EAX,0x2
// 0046389d: PUSH EAX
// 0046389e: PUSH 0x0
// 004638a0: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004638a3: PUSH EAX
// 004638a4: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004638a9: ADD ESP,0xc
// 004638ac: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 004638b3: JMP 0x004638b8
//   XREF to: 004638b8 (UNCONDITIONAL_JUMP)
// 004638b5: INC dword ptr [EBP + -0xc]
//   Label: LAB_004638b5
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 004638b8: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004638b8
//   XREF to: Stack[-0x1c] (READ)
// 004638bb: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 004638c1: JGE 0x0046390d
//   XREF to: 0046390d (CONDITIONAL_JUMP)
// 004638c3: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 004638ca: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004638cf: ADD EDX,EAX
// 004638d1: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004638d4: MOV dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (WRITE)
// 004638db: JMP 0x004638e0
//   XREF to: 004638e0 (UNCONDITIONAL_JUMP)
// 004638dd: INC dword ptr [EBP + -0x14]
//   Label: LAB_004638dd
//   XREF to: Stack[-0x24] (READ_WRITE)
// 004638e0: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_004638e0
//   XREF to: Stack[-0x24] (READ)
// 004638e3: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004638e6: CMP EAX,dword ptr [EDX + 0xa4]
//   XREF to: 016e99b4 (DATA)
// 004638ec: JGE 0x0046390b
//   XREF to: 0046390b (CONDITIONAL_JUMP)
// 004638ee: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004638f1: SHL EAX,0x2
// 004638f4: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004638f7: MOV EAX,dword ptr [EAX + 0xb8]
// 004638fd: SHL EAX,0x2
// 00463900: ADD EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00463903: MOV dword ptr [EAX],0x1
// 00463909: JMP 0x004638dd
//   XREF to: 004638dd (UNCONDITIONAL_JUMP)
// 0046390b: JMP 0x004638b5
//   Label: LAB_0046390b
//   XREF to: 004638b5 (UNCONDITIONAL_JUMP)
// 0046390d: MOV EAX,[0x01626408]
//   Label: LAB_0046390d
//   XREF to: 01626408 (READ)
// 00463912: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00463915: MOV dword ptr [0x01626408],0x0
//   XREF to: 01626408 (WRITE)
// 0046391f: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00463926: JMP 0x0046392b
//   XREF to: 0046392b (UNCONDITIONAL_JUMP)
// 00463928: INC dword ptr [EBP + -0xc]
//   Label: LAB_00463928
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046392b: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046392b
//   XREF to: Stack[-0x1c] (READ)
// 0046392e: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463931: JGE 0x00463992
//   XREF to: 00463992 (CONDITIONAL_JUMP)
// 00463933: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00463936: SHL EAX,0x2
// 00463939: ADD EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046393c: CMP dword ptr [EAX],0x0
// 0046393f: JZ 0x00463981
//   XREF to: 00463981 (CONDITIONAL_JUMP)
// 00463941: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00463946: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00463949: JZ 0x00463967
//   XREF to: 00463967 (CONDITIONAL_JUMP)
// 0046394b: IMUL ESI,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0046394f: IMUL EDI,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00463956: LEA EDI,[EDI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046395c: LEA ESI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00463962: MOVSD ES:EDI,ESI
//   XREF to: 01626420 (WRITE)
//   XREF to: 0162640c (WRITE)
// 00463963: MOVSD ES:EDI,ESI
//   XREF to: 01626424 (WRITE)
//   XREF to: 01626410 (WRITE)
// 00463964: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (WRITE)
// 00463965: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (WRITE)
// 00463966: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (WRITE)
// 00463967: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00463967
//   XREF to: Stack[-0x1c] (READ)
// 0046396a: SHL EAX,0x2
// 0046396d: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00463970: ADD EDX,EAX
// 00463972: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00463977: MOV dword ptr [EDX],EAX
// 00463979: INC dword ptr [0x01626408]
//   XREF to: 01626408 (READ_WRITE)
// 0046397f: JMP 0x00463990
//   XREF to: 00463990 (UNCONDITIONAL_JUMP)
// 00463981: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00463981
//   XREF to: Stack[-0x1c] (READ)
// 00463984: SHL EAX,0x2
// 00463987: ADD EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046398a: MOV dword ptr [EAX],0xffffffff
// 00463990: JMP 0x00463928
//   Label: LAB_00463990
//   XREF to: 00463928 (UNCONDITIONAL_JUMP)
// 00463992: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_00463992
//   XREF to: Stack[-0x1c] (WRITE)
// 00463999: JMP 0x0046399e
//   XREF to: 0046399e (UNCONDITIONAL_JUMP)
// 0046399b: INC dword ptr [EBP + -0xc]
//   Label: LAB_0046399b
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046399e: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046399e
//   XREF to: Stack[-0x1c] (READ)
// 004639a1: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 004639a7: JGE 0x00463a02
//   XREF to: 00463a02 (CONDITIONAL_JUMP)
// 004639a9: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 004639b0: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004639b5: ADD EDX,EAX
// 004639b7: MOV dword ptr [EBP + -0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004639ba: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 004639c1: JMP 0x004639c6
//   XREF to: 004639c6 (UNCONDITIONAL_JUMP)
// 004639c3: INC dword ptr [EBP + -0x1c]
//   Label: LAB_004639c3
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 004639c6: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_004639c6
//   XREF to: Stack[-0x2c] (READ)
// 004639c9: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004639cc: CMP EAX,dword ptr [EDX + 0xa4]
//   XREF to: 016e99b4 (DATA)
// 004639d2: JGE 0x00463a00
//   XREF to: 00463a00 (CONDITIONAL_JUMP)
// 004639d4: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004639d7: SHL EAX,0x2
// 004639da: ADD EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004639dd: MOV EAX,dword ptr [EAX + 0xb8]
// 004639e3: SHL EAX,0x2
// 004639e6: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004639e9: ADD EDX,EAX
// 004639eb: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004639ee: SHL EAX,0x2
// 004639f1: MOV ECX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004639f4: ADD ECX,EAX
// 004639f6: MOV EAX,dword ptr [EDX]
// 004639f8: MOV dword ptr [ECX + 0xb8],EAX
// 004639fe: JMP 0x004639c3
//   XREF to: 004639c3 (UNCONDITIONAL_JUMP)
// 00463a00: JMP 0x0046399b
//   Label: LAB_00463a00
//   XREF to: 0046399b (UNCONDITIONAL_JUMP)
// 00463a02: PUSH 0x18d4
//   Label: LAB_00463a02
// 00463a07: MOV EAX,0x61c098
//   XREF to: 0061c098 (DATA)
// 00463a0c: PUSH EAX
//   XREF to: 0061c098 (DATA)
// 00463a0d: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00463a10: PUSH EAX
// 00463a11: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00463a16: ADD ESP,0xc
// 00463a19: MOV ESP,EBP
//   Label: LAB_00463a19
// 00463a1b: POP EBP
// 00463a1c: POP EDI
// 00463a1d: POP ESI
// 00463a1e: POP EBX
// 00463a1f: RET
