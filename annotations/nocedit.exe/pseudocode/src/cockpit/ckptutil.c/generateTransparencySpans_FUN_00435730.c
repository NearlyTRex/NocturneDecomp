// Name: cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730
// Address: 00435730
// Address Range: [[00435730, 0043597e]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730(void * bitmap_buffer, char * filename, int width, int height, void * span_data_buffer, int transparent_color_index)
// Cross-references:
//   cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0 (004317b0) at 00431802 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Invalid_transparent_colo_00618082
//   TerminatedCString s_cockpit_ckptutil_c_006180a6
//   TerminatedCString s_Too_many_spans_bitmap_s__006180bc
//   TerminatedCString s_cockpit_ckptutil_c_006180ed
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_generateTransparencySpans_FUN_00435730
          (void *bitmap_buffer,char *filename,int width,int height,void *span_data_buffer,
          int transparent_color_index)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
  int in_stack_0000001c;
  uint in_stack_00000020;
  int iStack_12c;
  char acStack_124 [252];
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  int *local_14;
  int iVar7;
  
  if (0xff < (uint)transparent_color_index) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffed0,"Invalid transparent color index: %d",transparent_color_index);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x942;
    core_main_c_displayErrorAndQuit_FUN_00506f10((char *)&iStack_12c);
  }
  local_18 = 0;
  if (0 < in_stack_0000001c) {
    local_28 = transparent_color_index + -1;
    local_24 = transparent_color_index;
    local_1c = (byte *)width;
    local_20 = 0;
    local_14 = (int *)span_data_buffer;
    do {
      bVar1 = false;
      iVar3 = 0;
      iVar7 = 0;
      if (0 < transparent_color_index) {
        iVar5 = -1;
        iVar6 = 0;
        pbVar4 = local_1c;
        do {
          iVar2 = iVar6 + local_20;
          if (bVar1) {
            if (*pbVar4 == in_stack_00000020) {
              *(int *)((int)span_data_buffer + iVar2 + 0x44) =
                   (iVar5 - *(int *)((int)span_data_buffer + iVar2 + 4)) + 1;
              iVar6 = iVar6 + 4;
              iVar7 = iVar7 + 1;
              bVar1 = false;
            }
          }
          else if (*pbVar4 != in_stack_00000020) {
            bVar1 = true;
            *(int *)((int)span_data_buffer + iVar2 + 4) = iVar3;
          }
          pbVar4 = pbVar4 + 1;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar3 < transparent_color_index);
      }
      if (0xf < iVar7) {
        iStack_12c = local_18;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffed8,"Too many spans: bitmap %s, spans %d, scanline %d",height);
        g_CurrentFilename = "..\\cockpit\\ckptutil.c";
        g_CurrentLineNumber = 0x972;
        iStack_12c = 0x435878;
        core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_124);
      }
      iVar3 = iVar7;
      if (bVar1) {
        iVar3 = iVar7 + 1;
        local_14[iVar7 + 0x11] = (local_28 - local_14[iVar7 + 1]) + 1;
      }
      local_20 = local_20 + 0x84;
      local_18 = local_18 + 1;
      *local_14 = iVar3;
      local_1c = local_1c + local_24;
      local_14 = local_14 + 0x21;
    } while (local_18 < in_stack_0000001c);
  }
  return;
}


// Assembly code:
// 00435730: PUSH EBX
//   Label: cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730
// 00435731: PUSH ESI
// 00435732: PUSH EDI
// 00435733: PUSH EBP
// 00435734: SUB ESP,0x120
// 0043573a: MOV EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x18] (READ)
// 00435741: CMP EDX,0xff
// 00435747: JA 0x00435929
//   XREF to: 00435929 (CONDITIONAL_JUMP)
// 0043574d: XOR EDI,EDI
//   Label: LAB_0043574d
// 0043574f: MOV EBP,dword ptr [ESP + 0x144]
//   XREF to: Stack[0x14] (READ)
// 00435756: MOV dword ptr [ESP + 0x110],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0043575d: TEST EBP,EBP
// 0043575f: JLE 0x0043591e
//   XREF to: 0043591e (CONDITIONAL_JUMP)
// 00435765: MOV EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[0x10] (READ)
// 0043576c: DEC EAX
// 0043576d: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00435774: MOV EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[0x10] (READ)
// 0043577b: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00435782: IMUL EAX,EDI
// 00435785: MOV EDX,dword ptr [ESP + 0x134]
//   XREF to: Stack[0x4] (READ)
// 0043578c: ADD EAX,EDX
// 0043578e: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00435795: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0xc] (READ)
// 0043579c: MOV dword ptr [ESP + 0x108],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 004357a3: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004357aa: MOV ESI,dword ptr [ESP + 0x140]
//   Label: LAB_004357aa
//   XREF to: Stack[0x10] (READ)
// 004357b1: XOR EBX,EBX
// 004357b3: XOR EAX,EAX
// 004357b5: MOV dword ptr [ESP + 0x11c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004357bc: TEST ESI,ESI
// 004357be: JLE 0x0043582b
//   XREF to: 0043582b (CONDITIONAL_JUMP)
// 004357c0: MOV EDX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x28] (READ)
// 004357c7: MOV ESI,0xffffffff
// 004357cc: XOR EDI,EDI
// 004357ce: MOV dword ptr [ESP + 0x118],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004357d5: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x24] (READ)
// 004357dc: MOV ECX,dword ptr [ESP + 0x13c]
//   Label: LAB_004357dc
//   XREF to: Stack[0xc] (READ)
// 004357e3: ADD ECX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x18] (READ)
// 004357ea: ADD ECX,EDI
// 004357ec: TEST EBX,EBX
// 004357ee: JZ 0x00435962
//   XREF to: 00435962 (CONDITIONAL_JUMP)
// 004357f4: MOVZX EBP,byte ptr [EDX]
// 004357f7: CMP EBP,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x18] (READ)
// 004357fe: JNZ 0x0043581d
//   XREF to: 0043581d (CONDITIONAL_JUMP)
// 00435800: MOV EBP,ESI
// 00435802: SUB EBP,dword ptr [ECX + 0x4]
// 00435805: INC EBP
// 00435806: MOV dword ptr [ECX + 0x44],EBP
// 00435809: MOV ECX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x14] (READ)
// 00435810: ADD EDI,0x4
// 00435813: INC ECX
// 00435814: XOR EBX,EBX
// 00435816: MOV dword ptr [ESP + 0x11c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0043581d: MOV EBP,dword ptr [ESP + 0x140]
//   Label: LAB_0043581d
//   XREF to: Stack[0x10] (READ)
// 00435824: INC EDX
// 00435825: INC EAX
// 00435826: INC ESI
// 00435827: CMP EAX,EBP
// 00435829: JL 0x004357dc
//   XREF to: 004357dc (CONDITIONAL_JUMP)
// 0043582b: MOV EAX,dword ptr [ESP + 0x11c]
//   Label: LAB_0043582b
//   XREF to: Stack[-0x14] (READ)
// 00435832: CMP EAX,0x10
// 00435835: JL 0x0043587b
//   XREF to: 0043587b (CONDITIONAL_JUMP)
// 00435837: MOV EDX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x20] (READ)
// 0043583e: PUSH EDX
// 0043583f: PUSH EAX
// 00435840: MOV ESI,dword ptr [ESP + 0x140]
//   XREF to: Stack[0x8] (READ)
// 00435847: PUSH ESI
// 00435848: PUSH 0x6180bc
//   XREF to: 006180bc (DATA)
// 0043584d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x130] (DATA)
// 00435851: PUSH EAX
// 00435852: MOV EDI,0x6180ed
//   XREF to: 006180ed (DATA)
// 00435857: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0043585c: ADD ESP,0x14
// 0043585f: MOV EAX,ESP
// 00435861: MOV EBP,0x972
// 00435866: PUSH EAX
// 00435867: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0043586d: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00435873: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00435878: ADD ESP,0x4
// 0043587b: CMP EBX,0x1
//   Label: LAB_0043587b
// 0043587e: JNZ 0x004358b1
//   XREF to: 004358b1 (CONDITIONAL_JUMP)
// 00435880: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x14] (READ)
// 00435887: MOV EDX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x1c] (READ)
// 0043588e: SHL EAX,0x2
// 00435891: ADD EAX,EDX
// 00435893: MOV EDX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x30] (READ)
// 0043589a: SUB EDX,dword ptr [EAX + 0x4]
// 0043589d: ADD EDX,EBX
// 0043589f: MOV EBX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x14] (READ)
// 004358a6: INC EBX
// 004358a7: MOV dword ptr [EAX + 0x44],EDX
// 004358aa: MOV dword ptr [ESP + 0x11c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004358b1: MOV EAX,dword ptr [ESP + 0x11c]
//   Label: LAB_004358b1
//   XREF to: Stack[-0x14] (READ)
// 004358b8: MOV EDX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x1c] (READ)
// 004358bf: MOV ECX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x1c] (READ)
// 004358c6: MOV EBX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x28] (READ)
// 004358cd: MOV ESI,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x20] (READ)
// 004358d4: MOV EDI,dword ptr [ESP + 0x144]
//   XREF to: Stack[0x14] (READ)
// 004358db: ADD ECX,0x84
// 004358e1: ADD EBX,0x84
// 004358e7: INC ESI
// 004358e8: MOV dword ptr [EDX],EAX
// 004358ea: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (READ)
// 004358f1: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x24] (READ)
// 004358f8: MOV dword ptr [ESP + 0x114],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004358ff: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 00435906: ADD EDX,EAX
// 00435908: MOV dword ptr [ESP + 0x110],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0043590f: MOV dword ptr [ESP + 0x10c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00435916: CMP ESI,EDI
// 00435918: JL 0x004357aa
//   XREF to: 004357aa (CONDITIONAL_JUMP)
// 0043591e: ADD ESP,0x120
//   Label: LAB_0043591e
// 00435924: POP EBP
// 00435925: POP EDI
// 00435926: POP ESI
// 00435927: POP EBX
// 00435928: RET
// 00435929: PUSH EDX
//   Label: LAB_00435929
// 0043592a: PUSH 0x618082
//   XREF to: 00618082 (DATA)
// 0043592f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x130] (DATA)
// 00435933: PUSH EAX
// 00435934: MOV EBX,0x6180a6
//   XREF to: 006180a6 (DATA)
// 00435939: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0043593e: ADD ESP,0xc
// 00435941: MOV EAX,ESP
// 00435943: MOV ESI,0x942
// 00435948: PUSH EAX
// 00435949: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0043594f: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00435955: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043595a: ADD ESP,0x4
// 0043595d: JMP 0x0043574d
//   XREF to: 0043574d (UNCONDITIONAL_JUMP)
// 00435962: MOVZX EBP,byte ptr [EDX]
//   Label: LAB_00435962
// 00435965: CMP EBP,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x18] (READ)
// 0043596c: JZ 0x0043581d
//   XREF to: 0043581d (CONDITIONAL_JUMP)
// 00435972: MOV EBX,0x1
// 00435977: MOV dword ptr [ECX + 0x4],EAX
// 0043597a: JMP 0x0043581d
//   XREF to: 0043581d (UNCONDITIONAL_JUMP)
