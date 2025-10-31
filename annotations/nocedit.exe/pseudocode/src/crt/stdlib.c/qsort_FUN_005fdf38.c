// Name: crt_stdlib.c_qsort_FUN_005fdf38
// Address: 005fdf38
// Address Range: [[005fdf38, 005fe5de]]
// Convention: __watcallStack
// Signature: void crt_stdlib.c_qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
// Cross-references:
//   core_script.cpp_FUN_00567630 (00567630) at 005676c1 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056fbd0 (0056fbd0) at 0056fca3 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 (004070c0) at 00407113 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 (0048da80) at 0048dadd [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054fa6a [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 (00444d90) at 00444e79 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 (00445820) at 0044585a [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 0044625a [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 00467d07 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_sort_FUN_004a2f00 (004a2f00) at 004a2f59 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdlib.c_median_of_3_FUN_005fdea0
//   crt_stdlib.c_memory_swap_FUN_005fdf10

#include "nocturne.h"

void __watcallStack
crt_stdlib_c_qsort_FUN_005fdf38(void *base,SIZE_T num,SIZE_T size,QSORT_COMPARATOR compar)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *bytes;
  SIZE_T SVar3;
  void *pvVar4;
  void *ptr1;
  void *extraout_EAX;
  void *extraout_EAX_00;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  void *ptr2;
  void *ptr2_00;
  void *ptr2_01;
  BADSPACEBASE *in_ESP;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *unaff_EDI;
  undefined4 *puVar10;
  int *b;
  byte bVar11;
  int aiStack_16c [4];
  undefined4 uStack_15c;
  SIZE_T aSStack_ec [32];
  int local_6c;
  int local_68;
  SIZE_T local_64;
  int local_60;
  void *local_5c;
  int local_58;
  void *pvStack_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44;
  int local_40;
  QSORT_COMPARATOR local_3c;
  int local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  SIZE_T local_24;
  void *local_20;
  
  bVar11 = 0;
  local_48 = base;
  local_3c = compar;
  if ((((uint)base | size) & 3) == 0) {
    local_38 = (int)(4 < size);
  }
  else {
    local_38 = 2;
  }
  local_60 = size * 2;
  pvVar7 = (void *)0x0;
  local_58 = 0;
  local_64 = size * 3;
LAB_005fdfad:
  do {
    if (1 < num) {
      if (0xf < num) {
        b = (int *)((int)local_48 + (num >> 1) * size);
        if (0x1d < num) {
          local_5c = local_48;
          pvVar4 = (void *)((int)local_48 + (num - 1) * size);
          if (0x2a < num) {
            iVar8 = (num >> 3) * size;
            local_68 = iVar8 * 2;
            local_64 = (SIZE_T)crt_stdlib_c_median_of_3_FUN_005fdea0
                                         (local_48,(void *)((int)local_48 + iVar8),
                                          (void *)((int)local_48 + local_68),local_3c);
            b = (int *)crt_stdlib_c_median_of_3_FUN_005fdea0
                                 ((void *)((int)b - iVar8),b,(int *)((int)b + iVar8),
                                  (QSORT_COMPARATOR)local_44);
            pvVar4 = crt_stdlib_c_median_of_3_FUN_005fdea0
                               ((void *)((int)pvVar4 - local_6c),(void *)((int)pvVar4 - iVar8),
                                pvVar4,(QSORT_COMPARATOR)local_40);
          }
          pvVar7 = local_5c;
          b = (int *)crt_stdlib_c_median_of_3_FUN_005fdea0(local_5c,b,pvVar4,local_3c);
        }
        pvVar4 = (void *)local_38;
        if (local_38 == 0) {
          local_44 = &local_6c;
          local_6c = *b;
        }
        else {
          local_44 = local_48;
          if (local_38 == 0) {
                    /* WARNING: Load size is inaccurate */
            iVar8 = *local_48;
            *(int *)local_48 = *b;
            *b = iVar8;
            pvVar4 = local_48;
          }
          else {
            crt_stdlib_c_memory_swap_FUN_005fdf10(local_48,pvVar7,local_38);
          }
        }
        local_28 = local_48;
        local_34 = local_48;
        pvVar7 = (void *)((int)local_48 + (num - 1) * size);
        local_30 = pvVar7;
        local_2c = pvVar7;
        local_24 = num;
        ptr1 = (void *)num;
LAB_005fe29f:
        for (; local_24 != 0; local_24 = local_24 - 1) {
          ptr1 = (void *)(*local_3c)(local_28,local_44);
          pvVar7 = ptr2_00;
          if (0 < (int)ptr1) break;
          if (ptr1 == (void *)0x0) {
            if (local_38 == 0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
              uVar2 = *local_34;
              *(undefined4 *)local_34 = *local_28;
              *(undefined4 *)local_28 = uVar2;
              ptr1 = local_28;
              pvVar7 = local_34;
            }
            else {
              crt_stdlib_c_memory_swap_FUN_005fdf10((void *)0x0,ptr2_00,(SIZE_T)pvVar4);
              ptr1 = extraout_EAX;
            }
            local_34 = (void *)((int)local_34 + size);
          }
          local_28 = (void *)((int)local_28 + size);
        }
        for (; bytes = local_2c, local_24 != 0; local_24 = local_24 - 1) {
          ptr1 = (void *)(*local_3c)(local_2c,local_44);
          pvVar7 = ptr2_01;
          pvVar4 = bytes;
          if ((int)ptr1 < 0) break;
          if (ptr1 == (void *)0x0) {
            if (local_38 == 0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
              pvVar7 = *local_2c;
              *(undefined4 *)local_2c = *local_30;
              *(void **)local_30 = pvVar7;
              ptr1 = local_30;
            }
            else {
              crt_stdlib_c_memory_swap_FUN_005fdf10((void *)0x0,ptr2_01,(SIZE_T)bytes);
              ptr1 = extraout_EAX_00;
            }
            local_30 = (void *)((int)local_30 - size);
          }
          pvVar4 = (void *)((int)local_2c - size);
          local_2c = pvVar4;
        }
        if (local_24 != 0) {
          if (local_38 == 0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
            uVar2 = *local_28;
            *(undefined4 *)local_28 = *local_2c;
            *(undefined4 *)local_2c = uVar2;
            pvVar7 = local_2c;
          }
          else {
            crt_stdlib_c_memory_swap_FUN_005fdf10(ptr1,pvVar7,(SIZE_T)pvVar4);
          }
          SVar3 = local_24;
          local_28 = (void *)((int)local_28 + size);
          ptr1 = (void *)(local_24 - 1);
          local_24 = (SIZE_T)ptr1;
          if (ptr1 == (void *)0x0) goto LAB_005fe46e;
          pvVar4 = (void *)((int)local_2c - size);
          local_24 = SVar3 - 2;
          local_2c = pvVar4;
          goto LAB_005fe29f;
        }
LAB_005fe46e:
        iVar8 = local_58;
        pvVar7 = (void *)((int)local_48 + num * size);
        pvStack_54 = pvVar7;
        uVar6 = (int)local_34 - (int)local_48;
        if ((int)local_28 - (int)local_34 <= (int)local_34 - (int)local_48) {
          uVar6 = (int)local_28 - (int)local_34;
        }
        if (uVar6 != 0) {
          puVar10 = (undefined4 *)((int)local_28 - uVar6);
          puVar9 = (undefined4 *)local_48;
          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            LOCK();
            uVar2 = *puVar9;
            *puVar9 = *puVar10;
            UNLOCK();
            *puVar10 = uVar2;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          uVar5 = (uint)((byte)uVar6 & 3);
          uVar6 = uVar6 & 3;
          while (uVar6 != 0) {
            LOCK();
            uVar1 = *(undefined1 *)puVar9;
            *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
            UNLOCK();
            *(undefined1 *)puVar10 = uVar1;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            uVar5 = uVar5 - 1;
            puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar11 * -2 + 1);
            uVar6 = uVar5;
          }
        }
        uVar6 = (int)pvVar7 + (-size - (int)local_30);
        if ((uint)((int)local_30 - (int)local_2c) < uVar6) {
          uVar6 = (int)local_30 - (int)local_2c;
        }
        if (uVar6 != 0) {
          puVar10 = (undefined4 *)((int)pvVar7 - uVar6);
          puVar9 = (undefined4 *)local_28;
          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            LOCK();
            uVar2 = *puVar9;
            *puVar9 = *puVar10;
            UNLOCK();
            *puVar10 = uVar2;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          uVar5 = (uint)((byte)uVar6 & 3);
          uVar6 = uVar6 & 3;
          while (uVar6 != 0) {
            LOCK();
            uVar1 = *(undefined1 *)puVar9;
            *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
            UNLOCK();
            *(undefined1 *)puVar10 = uVar1;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            uVar5 = uVar5 - 1;
            puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar11 * -2 + 1);
            uVar6 = uVar5;
          }
        }
        uVar5 = (int)local_28 - (int)local_34;
        uVar6 = (int)local_30 - (int)local_2c;
        if (uVar6 < uVar5) {
          if (uVar5 <= size) goto LAB_005fe0ec;
          aiStack_16c[local_58] = (int)local_48;
          aSStack_ec[iVar8] = uVar5 / size;
          local_48 = (void *)((int)pvVar7 - uVar6);
        }
        else {
          aSStack_ec[local_58] = uVar6 / size;
          aiStack_16c[iVar8] = (int)((int)pvVar7 - uVar6);
          uVar6 = uVar5;
        }
        pvVar7 = (void *)(uVar6 % size);
        num = uVar6 / size;
        local_58 = local_58 + 1;
        goto LAB_005fdfad;
      }
      local_40 = local_64;
      if (0 < (int)local_64) {
        local_50 = (void *)((int)local_48 + num * size);
        do {
          local_4c = (void *)((int)local_48 + local_40);
          pvVar7 = local_50;
          if ((void *)((int)local_48 + local_40) < local_50) {
            do {
              local_20 = local_4c;
              if (local_48 < local_4c) {
                do {
                  puVar10 = (undefined4 *)((int)local_20 - local_40);
                  pvVar4 = (void *)(*local_3c)(puVar10,local_20);
                  if ((int)pvVar4 < 1) break;
                  if (local_24 == 0) {
                    uVar2 = *unaff_EDI;
                    *unaff_EDI = *puVar10;
                    *puVar10 = uVar2;
                  }
                  else {
                    uStack_15c = 0x5fe04b;
                    crt_stdlib_c_memory_swap_FUN_005fdf10(pvVar4,ptr2,(SIZE_T)pvVar7);
                  }
                  local_20 = (void *)((int)local_20 - local_40);
                  pvVar7 = local_48;
                } while (local_48 < local_20);
              }
              local_4c = (void *)((int)local_4c + local_40);
            } while (local_4c < local_50);
          }
          local_40 = local_40 - local_60;
        } while (0 < local_40);
      }
    }
LAB_005fe0ec:
    if (local_58 == 0) {
      return;
    }
    local_58 = local_58 + -1;
    pvVar7 = (void *)aiStack_16c[local_58];
    num = aSStack_ec[local_58];
    local_48 = pvVar7;
  } while( true );
}


// Assembly code:
// 005fdf38: PUSH EBX
//   Label: crt_stdlib.c_qsort_FUN_005fdf38
// 005fdf39: PUSH ESI
// 005fdf3a: PUSH EDI
// 005fdf3b: PUSH ES
// 005fdf3c: PUSH FS
// 005fdf3e: PUSH GS
// 005fdf40: PUSH EBP
// 005fdf41: SUB ESP,0x150
// 005fdf47: MOV EAX,dword ptr [ESP + 0x170]
//   XREF to: Stack[0x4] (READ)
// 005fdf4e: MOV EBP,dword ptr [ESP + 0x178]
//   XREF to: Stack[0xc] (READ)
// 005fdf55: MOV EDX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[0x10] (READ)
// 005fdf5c: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005fdf63: OR EAX,EBP
// 005fdf65: MOV dword ptr [ESP + 0x130],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 005fdf6c: TEST AL,0x3
// 005fdf6e: JZ 0x005fdf77
//   XREF to: 005fdf77 (CONDITIONAL_JUMP)
// 005fdf70: MOV EAX,0x2
// 005fdf75: JMP 0x005fdf82
//   XREF to: 005fdf82 (UNCONDITIONAL_JUMP)
// 005fdf77: CMP EBP,0x4
//   Label: LAB_005fdf77
// 005fdf7a: SETA AL
// 005fdf7d: AND EAX,0xff
// 005fdf82: MOV dword ptr [ESP + 0x134],EAX
//   Label: LAB_005fdf82
//   XREF to: Stack[-0x38] (WRITE)
// 005fdf89: LEA EAX,[EBP + EBP*0x1]
// 005fdf8d: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005fdf94: LEA EAX,[EBP*0x4 + 0x0]
// 005fdf9b: XOR EDX,EDX
// 005fdf9d: SUB EAX,EBP
// 005fdf9f: MOV dword ptr [ESP + 0x114],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 005fdfa6: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005fdfad: MOV EBX,dword ptr [ESP + 0x174]
//   Label: LAB_005fdfad
//   XREF to: Stack[0x8] (READ)
// 005fdfb4: CMP EBX,0x1
// 005fdfb7: JBE 0x005fe0ec
//   XREF to: 005fe0ec (CONDITIONAL_JUMP)
// 005fdfbd: CMP EBX,0x10
// 005fdfc0: JNC 0x005fe122
//   XREF to: 005fe122 (CONDITIONAL_JUMP)
// 005fdfc6: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x64] (READ)
// 005fdfcd: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005fdfd4: TEST EAX,EAX
// 005fdfd6: JLE 0x005fe0ec
//   XREF to: 005fe0ec (CONDITIONAL_JUMP)
// 005fdfdc: MOV EAX,EBX
// 005fdfde: IMUL EAX,EBP
// 005fdfe1: MOV EDX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x48] (READ)
// 005fdfe8: ADD EDX,EAX
// 005fdfea: MOV dword ptr [ESP + 0x11c],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 005fdff1: MOV EAX,dword ptr [ESP + 0x124]
//   Label: LAB_005fdff1
//   XREF to: Stack[-0x48] (READ)
// 005fdff8: ADD EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x40] (READ)
// 005fdfff: MOV EBX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x50] (READ)
// 005fe006: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005fe00d: CMP EAX,EBX
// 005fe00f: JNC 0x005fe0cd
//   XREF to: 005fe0cd (CONDITIONAL_JUMP)
// 005fe015: MOV EAX,dword ptr [ESP + 0x120]
//   Label: LAB_005fe015
//   XREF to: Stack[-0x4c] (READ)
// 005fe01c: MOV EDI,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x48] (READ)
// 005fe023: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005fe02a: CMP EAX,EDI
// 005fe02c: JA 0x005fe085
//   XREF to: 005fe085 (CONDITIONAL_JUMP)
// 005fe02e: JMP 0x005fe0a7
//   XREF to: 005fe0a7 (UNCONDITIONAL_JUMP)
// 005fe033: CMP dword ptr [ESP + 0x134],0x0
//   Label: LAB_005fe033
// 005fe03b: JZ 0x005fe04d
//   XREF to: 005fe04d (CONDITIONAL_JUMP)
// 005fe03d: MOV ESI,dword ptr [ESP + 0x14c]
// 005fe044: MOV ECX,EBP
// 005fe046: CALL crt_stdlib.c_memory_swap_FUN_005fdf10
//   XREF to: 005fdf10 (UNCONDITIONAL_CALL)
// 005fe04b: JMP 0x005fe063
//   XREF to: 005fe063 (UNCONDITIONAL_JUMP)
// 005fe04d: MOV EDX,dword ptr [ESP + 0x14c]
//   Label: LAB_005fe04d
// 005fe054: MOV EBX,dword ptr [ESP + 0x14c]
// 005fe05b: MOV EAX,dword ptr [EDI]
// 005fe05d: MOV EDX,dword ptr [EDX]
// 005fe05f: MOV dword ptr [EBX],EAX
// 005fe061: MOV dword ptr [EDI],EDX
// 005fe063: MOV EAX,dword ptr [ESP + 0x12c]
//   Label: LAB_005fe063
// 005fe06a: MOV EDX,dword ptr [ESP + 0x14c]
// 005fe071: SUB EDX,EAX
// 005fe073: MOV EBX,dword ptr [ESP + 0x124]
// 005fe07a: MOV dword ptr [ESP + 0x14c],EDX
// 005fe081: CMP EDX,EBX
// 005fe083: JBE 0x005fe0a7
//   XREF to: 005fe0a7 (CONDITIONAL_JUMP)
// 005fe085: MOV ECX,dword ptr [ESP + 0x14c]
//   Label: LAB_005fe085
//   XREF to: Stack[-0x20] (READ)
// 005fe08c: MOV ESI,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x40] (READ)
// 005fe093: MOV EDI,ECX
// 005fe095: PUSH ECX
// 005fe096: SUB EDI,ESI
// 005fe098: PUSH EDI
// 005fe099: CALL dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x3c] (READ)
// 005fe0a0: ADD ESP,0x8
// 005fe0a3: TEST EAX,EAX
// 005fe0a5: JG 0x005fe033
//   XREF to: 005fe033 (CONDITIONAL_JUMP)
// 005fe0a7: MOV EAX,dword ptr [ESP + 0x12c]
//   Label: LAB_005fe0a7
//   XREF to: Stack[-0x40] (READ)
// 005fe0ae: MOV ECX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x4c] (READ)
// 005fe0b5: ADD ECX,EAX
// 005fe0b7: MOV ESI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x50] (READ)
// 005fe0be: MOV dword ptr [ESP + 0x120],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 005fe0c5: CMP ECX,ESI
// 005fe0c7: JC 0x005fe015
//   XREF to: 005fe015 (CONDITIONAL_JUMP)
// 005fe0cd: MOV EAX,dword ptr [ESP + 0x10c]
//   Label: LAB_005fe0cd
//   XREF to: Stack[-0x60] (READ)
// 005fe0d4: MOV ESI,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x40] (READ)
// 005fe0db: SUB ESI,EAX
// 005fe0dd: MOV dword ptr [ESP + 0x12c],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 005fe0e4: TEST ESI,ESI
// 005fe0e6: JG 0x005fdff1
//   XREF to: 005fdff1 (CONDITIONAL_JUMP)
// 005fe0ec: MOV EDX,dword ptr [ESP + 0x114]
//   Label: LAB_005fe0ec
//   XREF to: Stack[-0x58] (READ)
// 005fe0f3: TEST EDX,EDX
// 005fe0f5: JZ 0x005fe5cf
//   XREF to: 005fe5cf (CONDITIONAL_JUMP)
// 005fe0fb: LEA EBX,[EDX + -0x1]
// 005fe0fe: MOV dword ptr [ESP + 0x114],EBX
//   XREF to: Stack[-0x58] (WRITE)
// 005fe105: MOV EDX,dword ptr [ESP + EBX*0x4]
// 005fe108: MOV EAX,dword ptr [ESP + EBX*0x4 + 0x80]
// 005fe10f: MOV dword ptr [ESP + 0x124],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 005fe116: MOV dword ptr [ESP + 0x174],EAX
//   XREF to: Stack[0x8] (WRITE)
// 005fe11d: JMP 0x005fdfad
//   XREF to: 005fdfad (UNCONDITIONAL_JUMP)
// 005fe122: MOV EAX,EBX
//   Label: LAB_005fe122
// 005fe124: SHR EAX,0x1
// 005fe126: IMUL EAX,EBP
// 005fe129: MOV EDI,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x48] (READ)
// 005fe130: ADD EDI,EAX
// 005fe132: CMP EBX,0x1d
// 005fe135: JBE 0x005fe20c
//   XREF to: 005fe20c (CONDITIONAL_JUMP)
// 005fe13b: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x48] (READ)
// 005fe142: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005fe149: LEA EAX,[EBX + -0x1]
// 005fe14c: IMUL EAX,EBP
// 005fe14f: MOV EBX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x48] (READ)
// 005fe156: ADD EBX,EAX
// 005fe158: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x8] (READ)
// 005fe15f: CMP EAX,0x2a
// 005fe162: JBE 0x005fe1f0
//   XREF to: 005fe1f0 (CONDITIONAL_JUMP)
// 005fe168: MOV ESI,EAX
// 005fe16a: SHR ESI,0x3
// 005fe16d: IMUL ESI,EBP
// 005fe170: LEA EAX,[ESI + ESI*0x1]
// 005fe173: MOV EDX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x3c] (READ)
// 005fe17a: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005fe181: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x48] (READ)
// 005fe188: MOV ECX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x68] (READ)
// 005fe18f: PUSH EDX
// 005fe190: ADD EAX,ECX
// 005fe192: PUSH EAX
// 005fe193: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x48] (READ)
// 005fe19a: ADD EAX,ESI
// 005fe19c: PUSH EAX
// 005fe19d: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x48] (READ)
// 005fe1a4: PUSH EAX
// 005fe1a5: CALL crt_stdlib.c_median_of_3_FUN_005fdea0
//   XREF to: 005fdea0 (UNCONDITIONAL_CALL)
// 005fe1aa: ADD ESP,0x10
// 005fe1ad: MOV EDX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x3c] (READ)
// 005fe1b4: PUSH EDX
// 005fe1b5: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005fe1bc: LEA EAX,[EDI + ESI*0x1]
// 005fe1bf: PUSH EAX
// 005fe1c0: PUSH EDI
// 005fe1c1: SUB EDI,ESI
// 005fe1c3: PUSH EDI
// 005fe1c4: CALL crt_stdlib.c_median_of_3_FUN_005fdea0
//   XREF to: 005fdea0 (UNCONDITIONAL_CALL)
// 005fe1c9: ADD ESP,0x10
// 005fe1cc: MOV ECX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x3c] (READ)
// 005fe1d3: PUSH ECX
// 005fe1d4: MOV EDI,EAX
// 005fe1d6: MOV EAX,EBX
// 005fe1d8: PUSH EBX
// 005fe1d9: SUB EAX,ESI
// 005fe1db: MOV ESI,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x68] (READ)
// 005fe1e2: PUSH EAX
// 005fe1e3: SUB EBX,ESI
// 005fe1e5: PUSH EBX
// 005fe1e6: CALL crt_stdlib.c_median_of_3_FUN_005fdea0
//   XREF to: 005fdea0 (UNCONDITIONAL_CALL)
// 005fe1eb: ADD ESP,0x10
// 005fe1ee: MOV EBX,EAX
// 005fe1f0: MOV EAX,dword ptr [ESP + 0x130]
//   Label: LAB_005fe1f0
//   XREF to: Stack[-0x3c] (READ)
// 005fe1f7: PUSH EAX
// 005fe1f8: PUSH EBX
// 005fe1f9: PUSH EDI
// 005fe1fa: MOV EDX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x5c] (READ)
// 005fe201: PUSH EDX
// 005fe202: CALL crt_stdlib.c_median_of_3_FUN_005fdea0
//   XREF to: 005fdea0 (UNCONDITIONAL_CALL)
// 005fe207: ADD ESP,0x10
// 005fe20a: MOV EDI,EAX
// 005fe20c: MOV EBX,dword ptr [ESP + 0x134]
//   Label: LAB_005fe20c
//   XREF to: Stack[-0x38] (READ)
// 005fe213: TEST EBX,EBX
// 005fe215: JZ 0x005fe243
//   XREF to: 005fe243 (CONDITIONAL_JUMP)
// 005fe217: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x48] (READ)
// 005fe21e: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005fe225: JZ 0x005fe232
//   XREF to: 005fe232 (CONDITIONAL_JUMP)
// 005fe227: MOV ECX,EBP
// 005fe229: MOV ESI,EAX
// 005fe22b: CALL crt_stdlib.c_memory_swap_FUN_005fdf10
//   XREF to: 005fdf10 (UNCONDITIONAL_CALL)
// 005fe230: JMP 0x005fe25a
//   XREF to: 005fe25a (UNCONDITIONAL_JUMP)
// 005fe232: MOV EBX,dword ptr [ESP + 0x124]
//   Label: LAB_005fe232
//   XREF to: Stack[-0x48] (READ)
// 005fe239: MOV EDX,dword ptr [EAX]
// 005fe23b: MOV EAX,dword ptr [EDI]
// 005fe23d: MOV dword ptr [EBX],EAX
// 005fe23f: MOV dword ptr [EDI],EDX
// 005fe241: JMP 0x005fe25a
//   XREF to: 005fe25a (UNCONDITIONAL_JUMP)
// 005fe243: LEA EAX,[ESP + 0x100]
//   Label: LAB_005fe243
//   XREF to: Stack[-0x6c] (DATA)
// 005fe24a: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005fe251: MOV EAX,dword ptr [EDI]
// 005fe253: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005fe25a: MOV EAX,dword ptr [ESP + 0x124]
//   Label: LAB_005fe25a
//   XREF to: Stack[-0x48] (READ)
// 005fe261: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005fe268: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005fe26f: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x8] (READ)
// 005fe276: DEC EAX
// 005fe277: IMUL EAX,EBP
// 005fe27a: MOV EDX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x48] (READ)
// 005fe281: ADD EDX,EAX
// 005fe283: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x8] (READ)
// 005fe28a: MOV dword ptr [ESP + 0x13c],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005fe291: MOV dword ptr [ESP + 0x140],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 005fe298: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005fe29f: CMP dword ptr [ESP + 0x148],0x0
//   Label: LAB_005fe29f
//   XREF to: Stack[-0x24] (READ)
// 005fe2a7: JZ 0x005fe33d
//   XREF to: 005fe33d (CONDITIONAL_JUMP)
// 005fe2ad: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x44] (READ)
// 005fe2b4: PUSH EAX
// 005fe2b5: MOV EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x28] (READ)
// 005fe2bc: PUSH EDX
// 005fe2bd: CALL dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x3c] (READ)
// 005fe2c4: ADD ESP,0x8
// 005fe2c7: TEST EAX,EAX
// 005fe2c9: JG 0x005fe33d
//   XREF to: 005fe33d (CONDITIONAL_JUMP)
// 005fe2cb: JNZ 0x005fe319
//   XREF to: 005fe319 (CONDITIONAL_JUMP)
// 005fe2cd: CMP dword ptr [ESP + 0x134],0x0
// 005fe2d5: JZ 0x005fe2ee
//   XREF to: 005fe2ee (CONDITIONAL_JUMP)
// 005fe2d7: MOV EDI,dword ptr [ESP + 0x144]
// 005fe2de: MOV ESI,dword ptr [ESP + 0x138]
// 005fe2e5: MOV ECX,EBP
// 005fe2e7: CALL crt_stdlib.c_memory_swap_FUN_005fdf10
//   XREF to: 005fdf10 (UNCONDITIONAL_CALL)
// 005fe2ec: JMP 0x005fe312
//   XREF to: 005fe312 (UNCONDITIONAL_JUMP)
// 005fe2ee: MOV EAX,dword ptr [ESP + 0x144]
//   Label: LAB_005fe2ee
// 005fe2f5: MOV EDI,dword ptr [ESP + 0x138]
// 005fe2fc: MOV EDX,dword ptr [ESP + 0x138]
// 005fe303: MOV EAX,dword ptr [EAX]
// 005fe305: MOV EDI,dword ptr [EDI]
// 005fe307: MOV dword ptr [EDX],EAX
// 005fe309: MOV EAX,dword ptr [ESP + 0x144]
// 005fe310: MOV dword ptr [EAX],EDI
// 005fe312: ADD dword ptr [ESP + 0x138],EBP
//   Label: LAB_005fe312
// 005fe319: MOV ESI,dword ptr [ESP + 0x144]
//   Label: LAB_005fe319
// 005fe320: MOV EDI,dword ptr [ESP + 0x148]
// 005fe327: ADD ESI,EBP
// 005fe329: DEC EDI
// 005fe32a: MOV dword ptr [ESP + 0x144],ESI
// 005fe331: MOV dword ptr [ESP + 0x148],EDI
// 005fe338: JMP 0x005fe29f
//   XREF to: 005fe29f (UNCONDITIONAL_JUMP)
// 005fe33d: CMP dword ptr [ESP + 0x148],0x0
//   Label: LAB_005fe33d
//   XREF to: Stack[-0x24] (READ)
// 005fe345: JZ 0x005fe3db
//   XREF to: 005fe3db (CONDITIONAL_JUMP)
// 005fe34b: MOV EDX,dword ptr [ESP + 0x128]
// 005fe352: PUSH EDX
// 005fe353: MOV EBX,dword ptr [ESP + 0x144]
// 005fe35a: PUSH EBX
// 005fe35b: CALL dword ptr [ESP + 0x138]
// 005fe362: ADD ESP,0x8
// 005fe365: TEST EAX,EAX
// 005fe367: JL 0x005fe3db
//   XREF to: 005fe3db (CONDITIONAL_JUMP)
// 005fe369: JNZ 0x005fe3b7
//   XREF to: 005fe3b7 (CONDITIONAL_JUMP)
// 005fe36b: CMP dword ptr [ESP + 0x134],0x0
// 005fe373: JZ 0x005fe38c
//   XREF to: 005fe38c (CONDITIONAL_JUMP)
// 005fe375: MOV EDI,dword ptr [ESP + 0x13c]
// 005fe37c: MOV ESI,dword ptr [ESP + 0x140]
// 005fe383: MOV ECX,EBP
// 005fe385: CALL crt_stdlib.c_memory_swap_FUN_005fdf10
//   XREF to: 005fdf10 (UNCONDITIONAL_CALL)
// 005fe38a: JMP 0x005fe3b0
//   XREF to: 005fe3b0 (UNCONDITIONAL_JUMP)
// 005fe38c: MOV EAX,dword ptr [ESP + 0x13c]
//   Label: LAB_005fe38c
// 005fe393: MOV EDX,dword ptr [ESP + 0x140]
// 005fe39a: MOV EBX,dword ptr [ESP + 0x140]
// 005fe3a1: MOV EAX,dword ptr [EAX]
// 005fe3a3: MOV EDX,dword ptr [EDX]
// 005fe3a5: MOV dword ptr [EBX],EAX
// 005fe3a7: MOV EAX,dword ptr [ESP + 0x13c]
// 005fe3ae: MOV dword ptr [EAX],EDX
// 005fe3b0: SUB dword ptr [ESP + 0x13c],EBP
//   Label: LAB_005fe3b0
// 005fe3b7: MOV EBX,dword ptr [ESP + 0x140]
//   Label: LAB_005fe3b7
// 005fe3be: MOV ECX,dword ptr [ESP + 0x148]
// 005fe3c5: SUB EBX,EBP
// 005fe3c7: DEC ECX
// 005fe3c8: MOV dword ptr [ESP + 0x140],EBX
// 005fe3cf: MOV dword ptr [ESP + 0x148],ECX
// 005fe3d6: JMP 0x005fe33d
//   XREF to: 005fe33d (UNCONDITIONAL_JUMP)
// 005fe3db: CMP dword ptr [ESP + 0x148],0x0
//   Label: LAB_005fe3db
// 005fe3e3: JZ 0x005fe46e
//   XREF to: 005fe46e (CONDITIONAL_JUMP)
// 005fe3e9: CMP dword ptr [ESP + 0x134],0x0
// 005fe3f1: JZ 0x005fe40a
//   XREF to: 005fe40a (CONDITIONAL_JUMP)
// 005fe3f3: MOV EDI,dword ptr [ESP + 0x140]
// 005fe3fa: MOV ESI,dword ptr [ESP + 0x144]
// 005fe401: MOV ECX,EBP
// 005fe403: CALL crt_stdlib.c_memory_swap_FUN_005fdf10
//   XREF to: 005fdf10 (UNCONDITIONAL_CALL)
// 005fe408: JMP 0x005fe42e
//   XREF to: 005fe42e (UNCONDITIONAL_JUMP)
// 005fe40a: MOV EDX,dword ptr [ESP + 0x140]
//   Label: LAB_005fe40a
// 005fe411: MOV EAX,dword ptr [ESP + 0x144]
// 005fe418: MOV EBX,dword ptr [ESP + 0x144]
// 005fe41f: MOV EDX,dword ptr [EDX]
// 005fe421: MOV EAX,dword ptr [EAX]
// 005fe423: MOV dword ptr [EBX],EDX
// 005fe425: MOV EDX,dword ptr [ESP + 0x140]
// 005fe42c: MOV dword ptr [EDX],EAX
// 005fe42e: MOV EDI,dword ptr [ESP + 0x144]
//   Label: LAB_005fe42e
// 005fe435: ADD EDI,EBP
// 005fe437: MOV EAX,dword ptr [ESP + 0x148]
// 005fe43e: MOV dword ptr [ESP + 0x144],EDI
// 005fe445: DEC EAX
// 005fe446: MOV dword ptr [ESP + 0x148],EAX
// 005fe44d: JZ 0x005fe46e
//   XREF to: 005fe46e (CONDITIONAL_JUMP)
// 005fe44f: MOV EBX,dword ptr [ESP + 0x140]
// 005fe456: LEA ECX,[EAX + -0x1]
// 005fe459: SUB EBX,EBP
// 005fe45b: MOV dword ptr [ESP + 0x148],ECX
// 005fe462: MOV dword ptr [ESP + 0x140],EBX
// 005fe469: JMP 0x005fe29f
//   XREF to: 005fe29f (UNCONDITIONAL_JUMP)
// 005fe46e: MOV EAX,dword ptr [ESP + 0x174]
//   Label: LAB_005fe46e
// 005fe475: IMUL EAX,EBP
// 005fe478: MOV EDX,dword ptr [ESP + 0x124]
// 005fe47f: MOV ECX,dword ptr [ESP + 0x138]
// 005fe486: MOV ESI,dword ptr [ESP + 0x124]
// 005fe48d: MOV EDI,dword ptr [ESP + 0x138]
// 005fe494: ADD EDX,EAX
// 005fe496: MOV EAX,dword ptr [ESP + 0x144]
// 005fe49d: SUB ECX,ESI
// 005fe49f: SUB EAX,EDI
// 005fe4a1: MOV dword ptr [ESP + 0x118],EDX
// 005fe4a8: CMP ECX,EAX
// 005fe4aa: JL 0x005fe4ae
//   XREF to: 005fe4ae (CONDITIONAL_JUMP)
// 005fe4ac: MOV ECX,EAX
// 005fe4ae: TEST ECX,ECX
//   Label: LAB_005fe4ae
// 005fe4b0: JBE 0x005fe4e7
//   XREF to: 005fe4e7 (CONDITIONAL_JUMP)
// 005fe4b2: MOV EDI,dword ptr [ESP + 0x144]
// 005fe4b9: MOV ESI,dword ptr [ESP + 0x124]
// 005fe4c0: SUB EDI,ECX
// 005fe4c2: PUSH ES
// 005fe4c3: PUSH DS
// 005fe4c4: POP ES
// 005fe4c5: MOVZX EDX,CL
// 005fe4c8: SHR ECX,0x2
// 005fe4cb: JZ 0x005fe4d8
//   XREF to: 005fe4d8 (CONDITIONAL_JUMP)
// 005fe4cd: MOV EAX,dword ptr [EDI]
//   Label: LAB_005fe4cd
// 005fe4cf: XCHG dword ptr [ESI],EAX
// 005fe4d1: STOSD ES:EDI
// 005fe4d2: ADD ESI,0x4
// 005fe4d5: DEC ECX
// 005fe4d6: JNZ 0x005fe4cd
//   XREF to: 005fe4cd (CONDITIONAL_JUMP)
// 005fe4d8: AND DL,0x3
//   Label: LAB_005fe4d8
// 005fe4db: JZ 0x005fe4e6
//   XREF to: 005fe4e6 (CONDITIONAL_JUMP)
// 005fe4dd: MOV AL,byte ptr [EDI]
//   Label: LAB_005fe4dd
// 005fe4df: XCHG byte ptr [ESI],AL
// 005fe4e1: STOSB ES:EDI
// 005fe4e2: INC ESI
// 005fe4e3: DEC EDX
// 005fe4e4: JNZ 0x005fe4dd
//   XREF to: 005fe4dd (CONDITIONAL_JUMP)
// 005fe4e6: POP ES
//   Label: LAB_005fe4e6
// 005fe4e7: MOV ECX,dword ptr [ESP + 0x118]
//   Label: LAB_005fe4e7
// 005fe4ee: MOV EAX,dword ptr [ESP + 0x13c]
// 005fe4f5: SUB ECX,EAX
// 005fe4f7: MOV EDX,dword ptr [ESP + 0x140]
// 005fe4fe: SUB ECX,EBP
// 005fe500: SUB EAX,EDX
// 005fe502: CMP EAX,ECX
// 005fe504: JNC 0x005fe508
//   XREF to: 005fe508 (CONDITIONAL_JUMP)
// 005fe506: MOV ECX,EAX
// 005fe508: TEST ECX,ECX
//   Label: LAB_005fe508
// 005fe50a: JBE 0x005fe541
//   XREF to: 005fe541 (CONDITIONAL_JUMP)
// 005fe50c: MOV EDI,dword ptr [ESP + 0x118]
// 005fe513: MOV ESI,dword ptr [ESP + 0x144]
// 005fe51a: SUB EDI,ECX
// 005fe51c: PUSH ES
// 005fe51d: PUSH DS
// 005fe51e: POP ES
// 005fe51f: MOVZX EDX,CL
// 005fe522: SHR ECX,0x2
// 005fe525: JZ 0x005fe532
//   XREF to: 005fe532 (CONDITIONAL_JUMP)
// 005fe527: MOV EAX,dword ptr [EDI]
//   Label: LAB_005fe527
// 005fe529: XCHG dword ptr [ESI],EAX
// 005fe52b: STOSD ES:EDI
// 005fe52c: ADD ESI,0x4
// 005fe52f: DEC ECX
// 005fe530: JNZ 0x005fe527
//   XREF to: 005fe527 (CONDITIONAL_JUMP)
// 005fe532: AND DL,0x3
//   Label: LAB_005fe532
// 005fe535: JZ 0x005fe540
//   XREF to: 005fe540 (CONDITIONAL_JUMP)
// 005fe537: MOV AL,byte ptr [EDI]
//   Label: LAB_005fe537
// 005fe539: XCHG byte ptr [ESI],AL
// 005fe53b: STOSB ES:EDI
// 005fe53c: INC ESI
// 005fe53d: DEC EDX
// 005fe53e: JNZ 0x005fe537
//   XREF to: 005fe537 (CONDITIONAL_JUMP)
// 005fe540: POP ES
//   Label: LAB_005fe540
// 005fe541: MOV EBX,dword ptr [ESP + 0x144]
//   Label: LAB_005fe541
// 005fe548: MOV ECX,dword ptr [ESP + 0x138]
// 005fe54f: MOV EDI,dword ptr [ESP + 0x13c]
// 005fe556: MOV ESI,dword ptr [ESP + 0x140]
// 005fe55d: SUB EBX,ECX
// 005fe55f: SUB EDI,ESI
// 005fe561: MOV ECX,dword ptr [ESP + 0x114]
// 005fe568: MOV ESI,dword ptr [ESP + 0x118]
// 005fe56f: SHL ECX,0x2
// 005fe572: SUB ESI,EDI
// 005fe574: CMP EDI,EBX
// 005fe576: JC 0x005fe590
//   XREF to: 005fe590 (CONDITIONAL_JUMP)
// 005fe578: MOV EAX,EDI
// 005fe57a: XOR EDX,EDX
// 005fe57c: DIV EBP
// 005fe57e: XOR EDX,EDX
// 005fe580: MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX
// 005fe587: MOV EAX,EBX
// 005fe589: DIV EBP
// 005fe58b: MOV dword ptr [ESP + ECX*0x1],ESI
// 005fe58e: JMP 0x005fe5bc
//   XREF to: 005fe5bc (UNCONDITIONAL_JUMP)
// 005fe590: CMP EBX,EBP
//   Label: LAB_005fe590
// 005fe592: JBE 0x005fe0ec
//   XREF to: 005fe0ec (CONDITIONAL_JUMP)
// 005fe598: MOV EAX,dword ptr [ESP + 0x124]
// 005fe59f: XOR EDX,EDX
// 005fe5a1: MOV dword ptr [ESP + ECX*0x1],EAX
// 005fe5a4: MOV EAX,EBX
// 005fe5a6: DIV EBP
// 005fe5a8: XOR EDX,EDX
// 005fe5aa: MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX
// 005fe5b1: MOV EAX,EDI
// 005fe5b3: DIV EBP
// 005fe5b5: MOV dword ptr [ESP + 0x124],ESI
// 005fe5bc: MOV dword ptr [ESP + 0x174],EAX
//   Label: LAB_005fe5bc
// 005fe5c3: INC dword ptr [ESP + 0x114]
// 005fe5ca: JMP 0x005fdfad
//   XREF to: 005fdfad (UNCONDITIONAL_JUMP)
// 005fe5cf: ADD ESP,0x150
//   Label: LAB_005fe5cf
// 005fe5d5: POP EBP
// 005fe5d6: POP GS
// 005fe5d8: POP FS
// 005fe5da: POP ES
// 005fe5db: POP EDI
// 005fe5dc: POP ESI
// 005fe5dd: POP EBX
// 005fe5de: RET
