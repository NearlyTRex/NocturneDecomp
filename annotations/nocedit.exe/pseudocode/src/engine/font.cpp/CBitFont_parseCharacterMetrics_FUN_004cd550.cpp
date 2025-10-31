// Name: engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
// Address: 004cd550
// Address Range: [[004cd550, 004cda1c]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550(CBitFont * this_ptr, int bitmapcount, int other2, int bitmap_index, int width, int height, int first_char)
// Cross-references:
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd235 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_font_cpp_0062a5d0
//   TerminatedCString s_engine_font_cpp_0062a5e3
//   TerminatedCString s_Out_of_memory_0062a5f6
//   TerminatedCString s_No_character_markers_fou_0062a604
//   TerminatedCString s_engine_font_cpp_0062a632
//   TerminatedCString s_Too_many_chars_fontfile__0062a645
//   TerminatedCString s_engine_font_cpp_0062a66b
//   TerminatedCString s_engine_font_cpp_0062a67e
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_free_FUN_005fe659
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
          (CBitFont *this_ptr,int bitmapcount,int other2,int bitmap_index,int width,int height,
          int first_char)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int iVar8;
  char acStack_164 [296];
  void *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  char (*local_24) [80];
  int local_20;
  int *local_1c;
  uint local_18;
  byte *local_14;
  
  local_3c = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (bitmap_index * 4,"..\\engine\\font.cpp",0x1b7);
  if (local_3c == (void *)0x0) {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 0x1b8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  pbVar5 = (byte *)this_ptr->bitmap_data[bitmap_index];
  iVar2 = 0;
  local_18 = this_ptr->load_flags;
  if (0 < other2 * bitmap_index) {
    do {
      local_18 = (uint)*pbVar5;
      if (local_18 != this_ptr->load_flags) break;
      iVar2 = iVar2 + 1;
      pbVar5 = pbVar5 + 1;
      local_18 = this_ptr->load_flags;
    } while (iVar2 < other2 * bitmap_index);
  }
  if (local_18 == this_ptr->load_flags) {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_164,"No character markers found in font file (%s).");
    g_CurrentLineNumber = 0x1cd;
    g_CurrentFilename = "..\\engine\\font.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffe98);
  }
  iVar2 = 0;
  pbVar5 = (byte *)this_ptr->bitmap_data[bitmap_index];
  local_2c = 0;
  piVar4 = local_38;
  if (0 < height) {
    do {
      iVar7 = 0;
      pbVar6 = pbVar5;
      if (0 < width) {
        do {
          if (*pbVar6 == local_18) {
            local_2c = local_2c + 1;
            *piVar4 = iVar2;
            piVar4 = piVar4 + 1;
            break;
          }
          iVar7 = iVar7 + 1;
          pbVar6 = pbVar6 + 1;
        } while (iVar7 < width);
      }
      iVar2 = iVar2 + 1;
      pbVar5 = pbVar5 + width;
    } while (iVar2 < height);
  }
  local_2c = local_2c + -1;
  local_30 = 0;
  iVar2 = first_char;
  if (0 < local_2c) {
    local_24 = this_ptr->bitmap_files + bitmap_index;
    local_34 = (int)(this_ptr->bitmap_files + -1) + 0x4c + bitmap_index * 4;
    local_28 = local_38;
    do {
      iVar8 = 0;
      pbVar5 = (byte *)(*(int *)(local_34 + 0x144) + *local_28 * width);
      bVar1 = false;
      local_1c = local_28;
      local_14 = pbVar5 + width;
      iVar7 = (int)(this_ptr->bitmap_files + -1) + 0x4c + iVar2 * 4;
      while( true ) {
        iVar3 = iVar8 - local_20;
        if (width <= iVar8) break;
        if (bVar1) {
          if (*pbVar5 != local_18) {
            *(int *)(iVar7 + 0x2568) = iVar3;
            bVar1 = false;
            if (this_ptr->max_char_height < iVar3) {
              this_ptr->max_char_height = iVar3;
            }
            iVar3 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
                              (this_ptr,*(uchar **)(iVar7 + 0x1d68),*(int *)(iVar7 + 0x2568),
                               local_1c[1] - (*local_1c + 1),width);
            *(int *)(iVar7 + 0x2968) = iVar3;
            if (this_ptr->max_char_width < iVar3) {
              this_ptr->max_char_width = iVar3;
            }
            iVar2 = iVar2 + 1;
            iVar7 = iVar7 + 4;
          }
        }
        else if (*pbVar5 == local_18) {
          bVar1 = true;
          local_20 = iVar8;
          if (0xff < iVar2) {
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (acStack_164,"Too many chars: fontfile %s, chars %d",local_24);
            g_CurrentLineNumber = 0x201;
            g_CurrentFilename = "..\\engine\\font.cpp";
            core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffe98);
          }
          *(byte **)(iVar7 + 0x1d68) = local_14;
        }
        iVar8 = iVar8 + 1;
        local_14 = local_14 + 1;
        pbVar5 = pbVar5 + 1;
      }
      if (bVar1) {
        *(int *)(iVar7 + 0x2568) = iVar3;
        if (this_ptr->max_char_height < iVar3) {
          this_ptr->max_char_height = iVar3;
        }
        iVar7 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
                          (this_ptr,(uchar *)this_ptr->char_positions[iVar2],
                           this_ptr->char_widths[iVar2],local_28[1] - (*local_28 + 1),width);
        this_ptr->char_heights[iVar2] = iVar7;
        if (this_ptr->max_char_width < iVar7) {
          this_ptr->max_char_width = iVar7;
        }
        iVar2 = iVar2 + 1;
      }
      local_28 = local_28 + 1;
      local_30 = local_30 + 1;
    } while (local_30 < local_2c);
  }
  if (first_char < iVar2) {
    iVar7 = (int)(this_ptr->bitmap_files + -1) + 0x4c + first_char * 4;
    do {
      first_char = first_char + 1;
      *(int *)(iVar7 + 0x2168) = bitmap_index;
      iVar7 = iVar7 + 4;
    } while (first_char < iVar2);
  }
  this_ptr->current_max_width = this_ptr->max_char_width;
  g_CurrentDebugFilename = "..\\engine\\font.cpp";
  g_CurrentDebugLine = 0x23e;
  crt_memory_c_free_FUN_005fe659(local_38);
  return;
}


// Assembly code:
// 004cd550: PUSH EBX
//   Label: engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
// 004cd551: PUSH ESI
// 004cd552: PUSH EDI
// 004cd553: PUSH EBP
// 004cd554: SUB ESP,0x15c
// 004cd55a: MOV ESI,dword ptr [ESP + 0x170]
//   XREF to: Stack[0x4] (READ)
// 004cd561: MOV EBX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0xc] (READ)
// 004cd568: MOV EDX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[0x10] (READ)
// 004cd56f: IMUL EBX,EDX
// 004cd572: PUSH 0x1b7
// 004cd577: PUSH 0x62a5d0
//   XREF to: 0062a5d0 (DATA)
// 004cd57c: LEA EAX,[EDX*0x4 + 0x0]
// 004cd583: PUSH EAX
// 004cd584: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 004cd589: ADD ESP,0xc
// 004cd58c: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004cd593: TEST EAX,EAX
// 004cd595: JZ 0x004cd7d0
//   XREF to: 004cd7d0 (CONDITIONAL_JUMP)
// 004cd59b: MOV EAX,dword ptr [ESI + 0x3188]
//   Label: LAB_004cd59b
// 004cd5a1: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004cd5a8: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x8] (READ)
// 004cd5af: MOV EDX,dword ptr [ESI + EAX*0x4 + 0x144]
// 004cd5b6: XOR EAX,EAX
// 004cd5b8: TEST EBX,EBX
// 004cd5ba: JLE 0x004cd5d5
//   XREF to: 004cd5d5 (CONDITIONAL_JUMP)
// 004cd5bc: XOR ECX,ECX
//   Label: LAB_004cd5bc
// 004cd5be: MOV EBP,dword ptr [ESI + 0x3188]
// 004cd5c4: MOV CL,byte ptr [EDX]
// 004cd5c6: CMP ECX,EBP
// 004cd5c8: JZ 0x004cd7f8
//   XREF to: 004cd7f8 (CONDITIONAL_JUMP)
// 004cd5ce: MOV dword ptr [ESP + 0x14c],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004cd5d5: MOV EAX,dword ptr [ESP + 0x14c]
//   Label: LAB_004cd5d5
//   XREF to: Stack[-0x20] (READ)
// 004cd5dc: CMP EAX,dword ptr [ESI + 0x3188]
// 004cd5e2: JNZ 0x004cd630
//   XREF to: 004cd630 (CONDITIONAL_JUMP)
// 004cd5e4: MOV EDX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x8] (READ)
// 004cd5eb: LEA EAX,[EDX*0x4 + 0x0]
// 004cd5f2: ADD EAX,EDX
// 004cd5f4: SHL EAX,0x4
// 004cd5f7: LEA EDX,[ESI + 0x4]
// 004cd5fa: ADD EAX,EDX
// 004cd5fc: PUSH EAX
// 004cd5fd: PUSH 0x62a604
//   XREF to: 0062a604 (DATA)
// 004cd602: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x16c] (DATA)
// 004cd606: PUSH EAX
// 004cd607: MOV EBX,0x1cd
// 004cd60c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004cd611: ADD ESP,0xc
// 004cd614: MOV EAX,ESP
// 004cd616: MOV ECX,0x62a632
//   XREF to: 0062a632 (PARAM)
// 004cd61b: PUSH EAX
// 004cd61c: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004cd622: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004cd628: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004cd62d: ADD ESP,0x4
// 004cd630: MOV EAX,dword ptr [ESP + 0x174]
//   Label: LAB_004cd630
//   XREF to: Stack[0x8] (READ)
// 004cd637: XOR EDI,EDI
// 004cd639: XOR EBP,EBP
// 004cd63b: MOV EDX,dword ptr [ESI + EAX*0x4 + 0x144]
// 004cd642: MOV EAX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[0x10] (READ)
// 004cd649: MOV dword ptr [ESP + 0x138],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 004cd650: TEST EAX,EAX
// 004cd652: JLE 0x004cd6a5
//   XREF to: 004cd6a5 (CONDITIONAL_JUMP)
// 004cd654: MOV ECX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x40] (READ)
// 004cd65b: MOV EAX,dword ptr [ESP + 0x178]
//   Label: LAB_004cd65b
//   XREF to: Stack[0xc] (READ)
// 004cd662: MOV EBX,EDX
// 004cd664: XOR EDI,EDI
// 004cd666: TEST EAX,EAX
// 004cd668: JLE 0x004cd690
//   XREF to: 004cd690 (CONDITIONAL_JUMP)
// 004cd66a: XOR EAX,EAX
//   Label: LAB_004cd66a
// 004cd66c: MOV AL,byte ptr [EBX]
// 004cd66e: CMP EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x20] (READ)
// 004cd675: JNZ 0x004cd807
//   XREF to: 004cd807 (CONDITIONAL_JUMP)
// 004cd67b: MOV EBX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x34] (READ)
// 004cd682: ADD ECX,0x4
// 004cd685: INC EBX
// 004cd686: MOV dword ptr [ECX + -0x4],EBP
// 004cd689: MOV dword ptr [ESP + 0x138],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 004cd690: MOV EBX,dword ptr [ESP + 0x178]
//   Label: LAB_004cd690
//   XREF to: Stack[0xc] (READ)
// 004cd697: MOV EDI,dword ptr [ESP + 0x17c]
//   XREF to: Stack[0x10] (READ)
// 004cd69e: INC EBP
// 004cd69f: ADD EDX,EBX
// 004cd6a1: CMP EBP,EDI
// 004cd6a3: JL 0x004cd65b
//   XREF to: 004cd65b (CONDITIONAL_JUMP)
// 004cd6a5: MOV EDX,dword ptr [ESP + 0x138]
//   Label: LAB_004cd6a5
//   XREF to: Stack[-0x34] (READ)
// 004cd6ac: MOV EBP,dword ptr [ESP + 0x180]
//   XREF to: Stack[0x14] (READ)
// 004cd6b3: XOR EAX,EAX
// 004cd6b5: DEC EDX
// 004cd6b6: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004cd6bd: MOV dword ptr [ESP + 0x138],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 004cd6c4: TEST EDX,EDX
// 004cd6c6: JLE 0x004cd9b6
//   XREF to: 004cd9b6 (CONDITIONAL_JUMP)
// 004cd6cc: MOV EDX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x8] (READ)
// 004cd6d3: LEA EAX,[EDX*0x4 + 0x0]
// 004cd6da: ADD EAX,EDX
// 004cd6dc: SHL EAX,0x4
// 004cd6df: LEA EDX,[ESI + 0x4]
// 004cd6e2: ADD EDX,EAX
// 004cd6e4: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x8] (READ)
// 004cd6eb: SHL EAX,0x2
// 004cd6ee: MOV dword ptr [ESP + 0x140],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004cd6f5: LEA EDX,[ESI + EAX*0x1]
// 004cd6f8: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x40] (READ)
// 004cd6ff: MOV dword ptr [ESP + 0x130],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 004cd706: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004cd70d: MOV EDX,dword ptr [ESP + 0x13c]
//   Label: LAB_004cd70d
//   XREF to: Stack[-0x30] (READ)
// 004cd714: MOV EBX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0xc] (READ)
// 004cd71b: MOV EDX,dword ptr [EDX]
// 004cd71d: IMUL EDX,EBX
// 004cd720: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x3c] (READ)
// 004cd727: MOV EAX,dword ptr [EAX + 0x144]
// 004cd72d: XOR EDI,EDI
// 004cd72f: ADD EAX,EDX
// 004cd731: MOV dword ptr [ESP + 0x154],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004cd738: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004cd73f: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x30] (READ)
// 004cd746: MOV EDX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0xc] (READ)
// 004cd74d: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004cd754: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x14] (READ)
// 004cd75b: LEA EBX,[EBP*0x4 + 0x0]
// 004cd762: ADD EAX,EDX
// 004cd764: ADD EBX,ESI
// 004cd766: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004cd76d: MOV ECX,dword ptr [ESP + 0x144]
//   Label: LAB_004cd76d
//   XREF to: Stack[-0x28] (READ)
// 004cd774: MOV EAX,EDI
// 004cd776: MOV EDX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0xc] (READ)
// 004cd77d: SUB EAX,ECX
// 004cd77f: CMP EDI,EDX
// 004cd781: JGE 0x004cd913
//   XREF to: 004cd913 (CONDITIONAL_JUMP)
// 004cd787: CMP dword ptr [ESP + 0x154],0x0
//   XREF to: Stack[-0x18] (READ)
// 004cd78f: JNZ 0x004cd885
//   XREF to: 004cd885 (CONDITIONAL_JUMP)
// 004cd795: MOV EDX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x14] (READ)
// 004cd79c: XOR EAX,EAX
// 004cd79e: MOV ECX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x20] (READ)
// 004cd7a5: MOV AL,byte ptr [EDX]
// 004cd7a7: CMP EAX,ECX
// 004cd7a9: JZ 0x004cd81d
//   XREF to: 004cd81d (CONDITIONAL_JUMP)
// 004cd7af: MOV EDX,dword ptr [ESP + 0x150]
//   Label: LAB_004cd7af
//   XREF to: Stack[-0x1c] (READ)
// 004cd7b6: MOV ECX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x14] (READ)
// 004cd7bd: INC EDI
// 004cd7be: INC EDX
// 004cd7bf: INC ECX
// 004cd7c0: MOV dword ptr [ESP + 0x150],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004cd7c7: MOV dword ptr [ESP + 0x158],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004cd7ce: JMP 0x004cd76d
//   XREF to: 004cd76d (UNCONDITIONAL_JUMP)
// 004cd7d0: MOV ECX,0x62a5e3
//   Label: LAB_004cd7d0
//   XREF to: 0062a5e3 (PARAM)
// 004cd7d5: MOV EDI,0x1b8
// 004cd7da: PUSH 0x62a5f6
//   XREF to: 0062a5f6 (DATA)
// 004cd7df: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004cd7e5: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004cd7eb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004cd7f0: ADD ESP,0x4
// 004cd7f3: JMP 0x004cd59b
//   XREF to: 004cd59b (UNCONDITIONAL_JUMP)
// 004cd7f8: INC EAX
//   Label: LAB_004cd7f8
// 004cd7f9: INC EDX
// 004cd7fa: CMP EAX,EBX
// 004cd7fc: JL 0x004cd5bc
//   XREF to: 004cd5bc (CONDITIONAL_JUMP)
// 004cd802: JMP 0x004cd5d5
//   XREF to: 004cd5d5 (UNCONDITIONAL_JUMP)
// 004cd807: MOV EAX,dword ptr [ESP + 0x178]
//   Label: LAB_004cd807
//   XREF to: Stack[0xc] (READ)
// 004cd80e: INC EDI
// 004cd80f: INC EBX
// 004cd810: CMP EDI,EAX
// 004cd812: JL 0x004cd66a
//   XREF to: 004cd66a (CONDITIONAL_JUMP)
// 004cd818: JMP 0x004cd690
//   XREF to: 004cd690 (UNCONDITIONAL_JUMP)
// 004cd81d: MOV EAX,0x1
//   Label: LAB_004cd81d
// 004cd822: MOV dword ptr [ESP + 0x144],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 004cd829: MOV dword ptr [ESP + 0x154],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004cd830: CMP EBP,0x100
// 004cd836: JL 0x004cd873
//   XREF to: 004cd873 (CONDITIONAL_JUMP)
// 004cd838: PUSH EBP
// 004cd839: MOV EDX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x2c] (READ)
// 004cd840: PUSH EDX
// 004cd841: PUSH 0x62a645
//   XREF to: 0062a645 (DATA)
// 004cd846: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x16c] (DATA)
// 004cd84a: PUSH EAX
// 004cd84b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004cd850: MOV EAX,0x201
// 004cd855: ADD ESP,0x10
// 004cd858: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004cd85d: MOV EAX,ESP
// 004cd85f: MOV ECX,0x62a66b
//   XREF to: 0062a66b (PARAM)
// 004cd864: PUSH EAX
// 004cd865: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004cd86b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004cd870: ADD ESP,0x4
// 004cd873: MOV EAX,dword ptr [ESP + 0x150]
//   Label: LAB_004cd873
//   XREF to: Stack[-0x1c] (READ)
// 004cd87a: MOV dword ptr [EBX + 0x1d68],EAX
// 004cd880: JMP 0x004cd7af
//   XREF to: 004cd7af (UNCONDITIONAL_JUMP)
// 004cd885: MOV ECX,dword ptr [ESP + 0x158]
//   Label: LAB_004cd885
//   XREF to: Stack[-0x14] (READ)
// 004cd88c: XOR EDX,EDX
// 004cd88e: MOV DL,byte ptr [ECX]
// 004cd890: MOV ECX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x20] (READ)
// 004cd897: CMP EDX,ECX
// 004cd899: JZ 0x004cd7af
//   XREF to: 004cd7af (CONDITIONAL_JUMP)
// 004cd89f: MOV dword ptr [EBX + 0x2568],EAX
// 004cd8a5: XOR EDX,EDX
// 004cd8a7: MOV ECX,dword ptr [ESI + 0x3168]
// 004cd8ad: MOV dword ptr [ESP + 0x154],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004cd8b4: CMP EAX,ECX
// 004cd8b6: JLE 0x004cd8be
//   XREF to: 004cd8be (CONDITIONAL_JUMP)
// 004cd8b8: MOV dword ptr [ESI + 0x3168],EAX
// 004cd8be: MOV EAX,dword ptr [ESP + 0x178]
//   Label: LAB_004cd8be
//   XREF to: Stack[0xc] (READ)
// 004cd8c5: PUSH EAX
// 004cd8c6: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x24] (READ)
// 004cd8cd: MOV EDX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x24] (READ)
// 004cd8d4: MOV EAX,dword ptr [EAX]
// 004cd8d6: MOV EDX,dword ptr [EDX + 0x4]
// 004cd8d9: INC EAX
// 004cd8da: SUB EDX,EAX
// 004cd8dc: PUSH EDX
// 004cd8dd: MOV EDX,dword ptr [EBX + 0x2568]
// 004cd8e3: PUSH EDX
// 004cd8e4: MOV ECX,dword ptr [EBX + 0x1d68]
// 004cd8ea: PUSH ECX
// 004cd8eb: PUSH ESI
// 004cd8ec: CALL engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
//   XREF to: 004cda20 (UNCONDITIONAL_CALL)
// 004cd8f1: MOV dword ptr [EBX + 0x2968],EAX
// 004cd8f7: MOV EDX,dword ptr [ESI + 0x316c]
// 004cd8fd: ADD ESP,0x14
// 004cd900: CMP EAX,EDX
// 004cd902: JLE 0x004cd90a
//   XREF to: 004cd90a (CONDITIONAL_JUMP)
// 004cd904: MOV dword ptr [ESI + 0x316c],EAX
// 004cd90a: INC EBP
//   Label: LAB_004cd90a
// 004cd90b: ADD EBX,0x4
// 004cd90e: JMP 0x004cd7af
//   XREF to: 004cd7af (UNCONDITIONAL_JUMP)
// 004cd913: CMP dword ptr [ESP + 0x154],0x1
//   Label: LAB_004cd913
//   XREF to: Stack[-0x18] (READ)
// 004cd91b: JNZ 0x004cd987
//   XREF to: 004cd987 (CONDITIONAL_JUMP)
// 004cd91d: MOV dword ptr [EBX + 0x2568],EAX
// 004cd923: CMP EAX,dword ptr [ESI + 0x3168]
// 004cd929: JLE 0x004cd931
//   XREF to: 004cd931 (CONDITIONAL_JUMP)
// 004cd92b: MOV dword ptr [ESI + 0x3168],EAX
// 004cd931: MOV EAX,dword ptr [ESP + 0x178]
//   Label: LAB_004cd931
//   XREF to: Stack[0xc] (READ)
// 004cd938: PUSH EAX
// 004cd939: MOV EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x30] (READ)
// 004cd940: MOV EDX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x30] (READ)
// 004cd947: MOV EAX,dword ptr [EAX]
// 004cd949: MOV EDX,dword ptr [EDX + 0x4]
// 004cd94c: INC EAX
// 004cd94d: LEA EBX,[EBP*0x4 + 0x0]
// 004cd954: SUB EDX,EAX
// 004cd956: ADD EBX,ESI
// 004cd958: PUSH EDX
// 004cd959: MOV EDX,dword ptr [EBX + 0x2568]
// 004cd95f: PUSH EDX
// 004cd960: MOV ECX,dword ptr [EBX + 0x1d68]
// 004cd966: PUSH ECX
// 004cd967: PUSH ESI
// 004cd968: CALL engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
//   XREF to: 004cda20 (UNCONDITIONAL_CALL)
// 004cd96d: MOV dword ptr [EBX + 0x2968],EAX
// 004cd973: MOV EDI,dword ptr [ESI + 0x316c]
// 004cd979: ADD ESP,0x14
// 004cd97c: CMP EAX,EDI
// 004cd97e: JLE 0x004cd986
//   XREF to: 004cd986 (CONDITIONAL_JUMP)
// 004cd980: MOV dword ptr [ESI + 0x316c],EAX
// 004cd986: INC EBP
//   Label: LAB_004cd986
// 004cd987: MOV EDI,dword ptr [ESP + 0x13c]
//   Label: LAB_004cd987
//   XREF to: Stack[-0x30] (READ)
// 004cd98e: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x38] (READ)
// 004cd995: MOV EDX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x34] (READ)
// 004cd99c: ADD EDI,0x4
// 004cd99f: INC EAX
// 004cd9a0: MOV dword ptr [ESP + 0x13c],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 004cd9a7: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004cd9ae: CMP EAX,EDX
// 004cd9b0: JL 0x004cd70d
//   XREF to: 004cd70d (CONDITIONAL_JUMP)
// 004cd9b6: MOV EBX,dword ptr [ESP + 0x180]
//   Label: LAB_004cd9b6
//   XREF to: Stack[0x14] (READ)
// 004cd9bd: CMP EBP,EBX
// 004cd9bf: JLE 0x004cd9e0
//   XREF to: 004cd9e0 (CONDITIONAL_JUMP)
// 004cd9c1: LEA EAX,[EBX*0x4 + 0x0]
// 004cd9c8: MOV EDX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x8] (READ)
// 004cd9cf: ADD EAX,ESI
// 004cd9d1: ADD EAX,0x4
//   Label: LAB_004cd9d1
// 004cd9d4: INC EBX
// 004cd9d5: MOV dword ptr [EAX + 0x2164],EDX
// 004cd9db: CMP EBX,EBP
// 004cd9dd: JL 0x004cd9d1
//   XREF to: 004cd9d1 (CONDITIONAL_JUMP)
// 004cd9df: NOP
// 004cd9e0: MOV EBX,0x62a67e
//   Label: LAB_004cd9e0
//   XREF to: 0062a67e (PARAM)
// 004cd9e5: MOV EDI,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x40] (READ)
// 004cd9ec: MOV EAX,dword ptr [ESI + 0x316c]
// 004cd9f2: PUSH EDI
// 004cd9f3: MOV dword ptr [ESI + 0x3170],EAX
// 004cd9f9: MOV ESI,0x23e
// 004cd9fe: MOV dword ptr [0x0067d20c],EBX
//   XREF to: 0067d20c (WRITE)
// 004cda04: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 004cda0a: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004cda0f: ADD ESP,0x4
// 004cda12: ADD ESP,0x15c
// 004cda18: POP EBP
// 004cda19: POP EDI
// 004cda1a: POP ESI
// 004cda1b: POP EBX
// 004cda1c: RET
