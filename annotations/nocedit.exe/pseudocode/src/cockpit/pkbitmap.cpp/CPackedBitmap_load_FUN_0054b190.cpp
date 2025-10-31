// Name: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
// Address: 0054b190
// Address Range: [[0054b190, 0054b3ec]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, int stride_bytes, uchar transparency_color)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 (0054b000) at 0054b046 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054c117 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063ef81
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063ef99
//   TerminatedCString s_Unable_to_allocate_memor_0063efb1
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063eff6
//   TerminatedCString s_Out_of_memory_packing_fi_0063f00e
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f04f
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f067
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190
          (CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int stride_bytes,
          uchar transparency_color)

{
  ushort uVar1;
  void **ppvVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  int new_size;
  int iVar11;
  undefined4 *puVar12;
  byte bVar13;
  uint in_stack_00000020;
  int in_stack_00000024;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int new_size_00;
  
  bVar13 = 0;
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(this_ptr);
  this_ptr->width = height;
  this_ptr->height = stride_bytes;
  ppvVar2 = (void **)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               ((this_ptr->height + 1) * 4,"..\\cockpit\\pkbitmap.cpp",0x378);
  this_ptr->row_pointers = ppvVar2;
  if (ppvVar2 == (void **)0x0) {
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    g_CurrentLineNumber = 0x37a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for rowOffset table in CPackedBitmap::load");
  }
  new_size = 0;
  local_18 = 0;
  local_1c = 0;
  new_size_00 = 0;
  do {
    *(int *)((int)this_ptr->row_pointers + local_1c) = new_size;
    if (this_ptr->height <= local_18) {
      pcVar6 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                 (this_ptr->packed_data,new_size,"..\\cockpit\\pkbitmap.cpp",
                                  0x3d6);
      this_ptr->packed_data = pcVar6;
      return;
    }
    iVar9 = 0;
    iVar11 = new_size;
    if (0 < this_ptr->width) {
      do {
        pbVar3 = (byte *)(stride_bytes + iVar9);
        iVar10 = iVar9;
        if (*pbVar3 == in_stack_00000020) {
          iVar10 = iVar9 + 1;
          new_size = iVar11;
        }
        else {
          do {
            iVar10 = iVar10 + 1;
            pbVar3 = pbVar3 + 1;
            if (this_ptr->width <= iVar10) break;
          } while (*pbVar3 != in_stack_00000020);
          iVar4 = iVar10 - iVar9;
          iVar5 = (iVar4 + 3U & 0xfffffffc) + iVar11;
          new_size = iVar5 + 4;
          if (new_size_00 < new_size) {
            new_size_00 = iVar5 + 0x4004;
            pcVar6 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                       (this_ptr->packed_data,new_size_00,
                                        "..\\cockpit\\pkbitmap.cpp",0x3ac);
            this_ptr->packed_data = pcVar6;
            if (pcVar6 == (char *)0x0) {
              crt_stdio_c_sprintf_FUN_005fdbd0
                        (&stack0xfffffeb0,"Out of memory packing file \"%s\" on row %u trying to get %u bytes",this_ptr,local_20,
                         iVar4);
              g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
              g_CurrentLineNumber = 0x3b2;
              core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffeb4);
            }
          }
          puVar7 = (ushort *)(this_ptr->packed_data + iVar11);
          *puVar7 = (ushort)iVar9;
          puVar7[1] = (ushort)iVar4;
          uVar1 = puVar7[1];
          puVar12 = (undefined4 *)((uint)*puVar7 + stride_bytes);
          puVar7 = puVar7 + 2;
          for (uVar8 = (uint)(uVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)puVar7 = *puVar12;
            puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar13 * -4 + 2;
          }
          for (uVar8 = (byte)uVar1 & 0xffffff03; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar12;
            puVar12 = (undefined4 *)((int)puVar12 + (uint)bVar13 * -2 + 1);
            puVar7 = (ushort *)((int)puVar7 + (uint)bVar13 * -2 + 1);
          }
        }
        iVar9 = iVar10;
        iVar11 = new_size;
      } while (iVar10 < this_ptr->width);
    }
    local_18 = local_18 + 1;
    local_1c = local_1c + 4;
    stride_bytes = stride_bytes + in_stack_00000024;
  } while( true );
}


// Assembly code:
// 0054b190: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
// 0054b191: PUSH ESI
// 0054b192: PUSH EDI
// 0054b193: PUSH EBP
// 0054b194: SUB ESP,0x144
// 0054b19a: MOV EBP,dword ptr [ESP + 0x158]
//   XREF to: Stack[0x4] (READ)
// 0054b1a1: PUSH EBP
// 0054b1a2: CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
//   XREF to: 0054a8e0 (UNCONDITIONAL_CALL)
// 0054b1a7: ADD ESP,0x4
// 0054b1aa: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0xc] (READ)
// 0054b1b1: MOV dword ptr [EBP + 0x18],EAX
// 0054b1b4: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x10] (READ)
// 0054b1bb: MOV EDX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[0x18] (READ)
// 0054b1c2: MOV dword ptr [EBP + 0x1c],EAX
// 0054b1c5: TEST EDX,EDX
// 0054b1c7: JNZ 0x0054b1d3
//   XREF to: 0054b1d3 (CONDITIONAL_JUMP)
// 0054b1c9: MOV EAX,dword ptr [EBP + 0x18]
// 0054b1cc: MOV dword ptr [ESP + 0x16c],EAX
//   XREF to: Stack[0x18] (WRITE)
// 0054b1d3: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0054b1d3
// 0054b1d6: PUSH 0x378
// 0054b1db: INC EAX
// 0054b1dc: PUSH 0x63ef81
//   XREF to: 0063ef81 (DATA)
// 0054b1e1: SHL EAX,0x2
// 0054b1e4: PUSH EAX
// 0054b1e5: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0054b1ea: ADD ESP,0xc
// 0054b1ed: MOV dword ptr [EBP + 0x20],EAX
// 0054b1f0: TEST EAX,EAX
// 0054b1f2: JZ 0x0054b39d
//   XREF to: 0054b39d (CONDITIONAL_JUMP)
// 0054b1f8: MOV EAX,dword ptr [ESP + 0x15c]
//   Label: LAB_0054b1f8
//   XREF to: Stack[0x8] (READ)
// 0054b1ff: XOR EDI,EDI
// 0054b201: XOR ESI,ESI
// 0054b203: MOV dword ptr [ESP + 0x130],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0054b20a: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054b211: MOV dword ptr [ESP + 0x12c],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0054b218: MOV dword ptr [ESP + 0x13c],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0054b21f: MOV ECX,dword ptr [ESP + 0x12c]
//   Label: LAB_0054b21f
//   XREF to: Stack[-0x28] (READ)
// 0054b226: MOV EAX,dword ptr [EBP + 0x20]
// 0054b229: ADD EAX,ECX
// 0054b22b: MOV dword ptr [EAX],ESI
// 0054b22d: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x24] (READ)
// 0054b234: CMP EAX,dword ptr [EBP + 0x1c]
// 0054b237: JGE 0x0054b3c8
//   XREF to: 0054b3c8 (CONDITIONAL_JUMP)
// 0054b23d: MOV EDI,dword ptr [EBP + 0x18]
// 0054b240: XOR EBX,EBX
// 0054b242: TEST EDI,EDI
// 0054b244: JLE 0x0054b361
//   XREF to: 0054b361 (CONDITIONAL_JUMP)
// 0054b24a: MOV EAX,dword ptr [ESP + 0x140]
//   Label: LAB_0054b24a
//   XREF to: Stack[-0x14] (READ)
// 0054b251: ADD EAX,EBX
// 0054b253: XOR EDX,EDX
// 0054b255: MOV EDI,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x14] (READ)
// 0054b25c: MOV DL,byte ptr [EAX]
// 0054b25e: CMP EDX,EDI
// 0054b260: JZ 0x0054b3c5
//   XREF to: 0054b3c5 (CONDITIONAL_JUMP)
// 0054b266: MOV ECX,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x14] (READ)
// 0054b26d: MOV EDI,EBX
// 0054b26f: INC EBX
//   Label: LAB_0054b26f
// 0054b270: MOV EDX,dword ptr [EBP + 0x18]
// 0054b273: INC EAX
// 0054b274: CMP EBX,EDX
// 0054b276: JGE 0x0054b280
//   XREF to: 0054b280 (CONDITIONAL_JUMP)
// 0054b278: XOR EDX,EDX
// 0054b27a: MOV DL,byte ptr [EAX]
// 0054b27c: CMP EDX,ECX
// 0054b27e: JNZ 0x0054b26f
//   XREF to: 0054b26f (CONDITIONAL_JUMP)
// 0054b280: MOV EAX,EBX
//   Label: LAB_0054b280
// 0054b282: SUB EAX,EDI
// 0054b284: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0054b28b: ADD EAX,0x3
// 0054b28e: AND AL,0xfc
// 0054b290: ADD EAX,ESI
// 0054b292: ADD EAX,0x4
// 0054b295: MOV EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x18] (READ)
// 0054b29c: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0054b2a3: CMP EAX,EDX
// 0054b2a5: JLE 0x0054b315
//   XREF to: 0054b315 (CONDITIONAL_JUMP)
// 0054b2a7: PUSH 0x3ac
// 0054b2ac: PUSH 0x63eff6
//   XREF to: 0063eff6 (DATA)
// 0054b2b1: ADD EAX,0x4000
// 0054b2b6: PUSH EAX
// 0054b2b7: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0054b2be: MOV EAX,dword ptr [EBP + 0x14]
// 0054b2c1: PUSH EAX
// 0054b2c2: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0054b2c7: ADD ESP,0x10
// 0054b2ca: MOV dword ptr [EBP + 0x14],EAX
// 0054b2cd: TEST EAX,EAX
// 0054b2cf: JNZ 0x0054b315
//   XREF to: 0054b315 (CONDITIONAL_JUMP)
// 0054b2d1: MOV ECX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x18] (READ)
// 0054b2d8: PUSH ECX
// 0054b2d9: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x24] (READ)
// 0054b2e0: PUSH EAX
// 0054b2e1: PUSH EBP
// 0054b2e2: PUSH 0x63f00e
//   XREF to: 0063f00e (DATA)
// 0054b2e7: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x154] (DATA)
// 0054b2eb: PUSH EAX
// 0054b2ec: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054b2f1: MOV EDX,0x63f04f
//   XREF to: 0063f04f (DATA)
// 0054b2f6: ADD ESP,0x14
// 0054b2f9: MOV EAX,ESP
// 0054b2fb: MOV ECX,0x3b2
// 0054b300: PUSH EAX
// 0054b301: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0054b307: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0054b30d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054b312: ADD ESP,0x4
// 0054b315: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0054b315
// 0054b318: ADD EAX,ESI
// 0054b31a: MOV ECX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x20] (READ)
// 0054b321: LEA EDX,[EAX + 0x4]
// 0054b324: MOV word ptr [EAX],DI
// 0054b327: XOR ESI,ESI
// 0054b329: MOV word ptr [EAX + 0x2],CX
// 0054b32d: MOV EDI,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x14] (READ)
// 0054b334: XOR ECX,ECX
// 0054b336: MOV SI,word ptr [EAX]
// 0054b339: MOV CX,word ptr [EAX + 0x2]
// 0054b33d: ADD ESI,EDI
// 0054b33f: MOV EDI,EDX
// 0054b341: PUSH EDI
// 0054b342: MOV EAX,ECX
// 0054b344: SHR ECX,0x2
// 0054b347: MOVSD.REP ES:EDI,ESI
// 0054b349: MOV CL,AL
// 0054b34b: AND CL,0x3
// 0054b34e: MOVSB.REP ES:EDI,ESI
// 0054b350: POP EDI
// 0054b351: MOV ESI,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x1c] (READ)
// 0054b358: CMP EBX,dword ptr [EBP + 0x18]
//   Label: LAB_0054b358
// 0054b35b: JL 0x0054b24a
//   XREF to: 0054b24a (CONDITIONAL_JUMP)
// 0054b361: MOV ECX,dword ptr [ESP + 0x130]
//   Label: LAB_0054b361
//   XREF to: Stack[-0x24] (READ)
// 0054b368: MOV EDX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x28] (READ)
// 0054b36f: MOV EAX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[0x18] (READ)
// 0054b376: MOV EBX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x14] (READ)
// 0054b37d: INC ECX
// 0054b37e: ADD EDX,0x4
// 0054b381: ADD EBX,EAX
// 0054b383: MOV dword ptr [ESP + 0x130],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0054b38a: MOV dword ptr [ESP + 0x140],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0054b391: MOV dword ptr [ESP + 0x12c],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0054b398: JMP 0x0054b21f
//   XREF to: 0054b21f (UNCONDITIONAL_JUMP)
// 0054b39d: MOV EBX,0x63ef99
//   Label: LAB_0054b39d
//   XREF to: 0063ef99 (DATA)
// 0054b3a2: MOV ESI,0x37a
// 0054b3a7: PUSH 0x63efb1
//   XREF to: 0063efb1 (DATA)
// 0054b3ac: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0054b3b2: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0054b3b8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054b3bd: ADD ESP,0x4
// 0054b3c0: JMP 0x0054b1f8
//   XREF to: 0054b1f8 (UNCONDITIONAL_JUMP)
// 0054b3c5: INC EBX
//   Label: LAB_0054b3c5
// 0054b3c6: JMP 0x0054b358
//   XREF to: 0054b358 (UNCONDITIONAL_JUMP)
// 0054b3c8: PUSH 0x3d6
//   Label: LAB_0054b3c8
// 0054b3cd: PUSH 0x63f067
//   XREF to: 0063f067 (DATA)
// 0054b3d2: PUSH ESI
// 0054b3d3: MOV EAX,dword ptr [EBP + 0x14]
// 0054b3d6: PUSH EAX
// 0054b3d7: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0054b3dc: ADD ESP,0x10
// 0054b3df: MOV dword ptr [EBP + 0x14],EAX
// 0054b3e2: ADD ESP,0x144
// 0054b3e8: POP EBP
// 0054b3e9: POP EDI
// 0054b3ea: POP ESI
// 0054b3eb: POP EBX
// 0054b3ec: RET
