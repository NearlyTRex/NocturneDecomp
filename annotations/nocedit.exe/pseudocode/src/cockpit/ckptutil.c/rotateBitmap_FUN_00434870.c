// Name: cockpit_ckptutil.c_rotateBitmap_FUN_00434870
// Address: 00434870
// Address Range: [[00434870, 00434a41]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_rotateBitmap_FUN_00434870(uchar * source_data, int width, int height, int bytes_per_pixel)
// Globals:
//   TerminatedCString s_cockpit_ckptutil_c_00617f25
//   TerminatedCString s_Unable_to_allocate_u_byt_00617f3b
//   TerminatedCString s_cockpit_ckptutil_c_00617f75
//   TerminatedCString s_cockpit_ckptutil_c_00617f8b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_rotateBitmap_FUN_00434870
          (uchar *source_data,int width,int height,int bytes_per_pixel)

{
  undefined4 *ptr;
  void *pvVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int size;
  undefined1 *puVar5;
  undefined4 *puVar6;
  BADSPACEBASE *in_ESP;
  uint uVar7;
  undefined4 *puVar8;
  uint unaff_EDI;
  undefined1 *puVar9;
  undefined4 *puVar10;
  byte bVar11;
  int in_stack_00000014;
  uint in_stack_00000018;
  uint local_14;
  
  bVar11 = 0;
  ptr = (undefined4 *)(width * bytes_per_pixel);
  size = width * height * bytes_per_pixel;
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\ckptutil.c",0x807);
  if (pvVar1 == (void *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff8c,"Unable to allocate %u bytes for temporary rotated bitmap.",size);
    g_CurrentLineNumber = 0x80a;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff90);
  }
  if (bytes_per_pixel == 1) {
    uVar7 = 0;
    if (in_stack_00000018 != 0) {
      puVar9 = (undefined1 *)0x0;
      do {
        puVar5 = (undefined1 *)((int)ptr + (in_stack_00000018 - uVar7) + -1);
        uVar2 = 0;
        puVar3 = puVar9;
        if (unaff_EDI != 0) {
          do {
            puVar3 = puVar3 + 1;
            *puVar5 = *puVar3;
            uVar2 = uVar2 + 1;
            puVar5 = puVar5 + in_stack_00000018;
          } while (uVar2 < unaff_EDI);
        }
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + unaff_EDI;
      } while (uVar7 < in_stack_00000018);
    }
  }
  else {
    local_14 = 0;
    if (in_stack_00000018 != 0) {
      do {
        puVar4 = (undefined4 *)(local_14 * unaff_EDI);
        puVar6 = (undefined4 *)((int)ptr + ((in_stack_00000018 - local_14) + -1) * bytes_per_pixel);
        uVar7 = 0;
        if (unaff_EDI != 0) {
          do {
            puVar4 = (undefined4 *)((int)puVar4 + bytes_per_pixel);
            puVar8 = puVar4;
            puVar10 = puVar6;
            for (uVar2 = (uint)bytes_per_pixel >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
              puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
            }
            for (uVar2 = bytes_per_pixel & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar11 * -2 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar11 * -2 + 1);
            }
            uVar7 = uVar7 + 1;
            puVar6 = (undefined4 *)((int)puVar6 + in_stack_00000018 * bytes_per_pixel);
          } while (uVar7 < unaff_EDI);
        }
        local_14 = local_14 + 1;
      } while (local_14 < in_stack_00000018);
    }
  }
  uVar2 = in_stack_00000014 * in_stack_00000018 * bytes_per_pixel;
  puVar4 = ptr;
  for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)bytes_per_pixel = *puVar4;
    puVar4 = puVar4 + (uint)bVar11 * -2 + 1;
    bytes_per_pixel = (int)(bytes_per_pixel + ((uint)bVar11 * -2 + 1) * 4);
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)bytes_per_pixel = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar11 * -2 + 1);
    bytes_per_pixel = (int)(bytes_per_pixel + (uint)bVar11 * -2 + 1);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\cockpit\\ckptutil.c",0x82b);
  return;
}


// Assembly code:
// 00434870: PUSH EBX
//   Label: cockpit_ckptutil.c_rotateBitmap_FUN_00434870
// 00434871: PUSH ESI
// 00434872: PUSH EDI
// 00434873: PUSH EBP
// 00434874: SUB ESP,0x68
// 00434877: MOV EBP,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x10] (READ)
// 0043487e: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 00434885: IMUL EAX,EBP
// 00434888: MOV EBX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 0043488f: IMUL EBX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 00434897: IMUL EBX,EBP
// 0043489a: PUSH 0x807
// 0043489f: PUSH 0x617f25
//   XREF to: 00617f25 (DATA)
// 004348a4: PUSH EBX
// 004348a5: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004348a9: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004348ae: ADD ESP,0xc
// 004348b1: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004348b5: TEST EAX,EAX
// 004348b7: JZ 0x00434970
//   XREF to: 00434970 (CONDITIONAL_JUMP)
// 004348bd: CMP EBP,0x1
//   Label: LAB_004348bd
// 004348c0: JNZ 0x004349a9
//   XREF to: 004349a9 (CONDITIONAL_JUMP)
// 004348c6: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 004348cd: XOR ESI,ESI
// 004348cf: TEST EAX,EAX
// 004348d1: JBE 0x00434927
//   XREF to: 00434927 (CONDITIONAL_JUMP)
// 004348d3: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 004348d7: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004348db: IMUL EDI,EAX,0x0
// 004348de: MOV EAX,dword ptr [ESP + 0x84]
//   Label: LAB_004348de
//   XREF to: Stack[0xc] (READ)
// 004348e5: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 004348e9: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 004348ed: SUB EAX,ESI
// 004348ef: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 004348f3: DEC EAX
// 004348f4: ADD EDX,EDI
// 004348f6: ADD EBX,EAX
// 004348f8: XOR EAX,EAX
// 004348fa: TEST ECX,ECX
// 004348fc: JBE 0x00434915
//   XREF to: 00434915 (CONDITIONAL_JUMP)
// 004348fe: MOV CL,byte ptr [EDX]
//   Label: LAB_004348fe
// 00434900: MOV byte ptr [EBX],CL
// 00434902: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 00434909: INC EAX
// 0043490a: ADD EBX,ECX
// 0043490c: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 00434910: INC EDX
// 00434911: CMP EAX,ECX
// 00434913: JC 0x004348fe
//   XREF to: 004348fe (CONDITIONAL_JUMP)
// 00434915: MOV EBX,dword ptr [ESP + 0x50]
//   Label: LAB_00434915
//   XREF to: Stack[-0x28] (READ)
// 00434919: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 00434920: INC ESI
// 00434921: ADD EDI,EBX
// 00434923: CMP ESI,EAX
// 00434925: JC 0x004348de
//   XREF to: 004348de (CONDITIONAL_JUMP)
// 00434927: MOV ECX,dword ptr [ESP + 0x80]
//   Label: LAB_00434927
//   XREF to: Stack[0x8] (READ)
// 0043492e: IMUL ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 00434936: IMUL ECX,EBP
// 00434939: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 0043493d: MOV EDI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 00434941: PUSH EDI
// 00434942: MOV EAX,ECX
// 00434944: SHR ECX,0x2
// 00434947: MOVSD.REP ES:EDI,ESI
// 00434949: MOV CL,AL
// 0043494b: AND CL,0x3
// 0043494e: MOVSB.REP ES:EDI,ESI
// 00434950: POP EDI
// 00434951: PUSH 0x82b
// 00434956: PUSH 0x617f8b
//   XREF to: 00617f8b (DATA)
// 0043495b: MOV ESI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x24] (READ)
// 0043495f: PUSH ESI
// 00434960: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00434965: ADD ESP,0xc
// 00434968: ADD ESP,0x68
// 0043496b: POP EBP
// 0043496c: POP EDI
// 0043496d: POP ESI
// 0043496e: POP EBX
// 0043496f: RET
// 00434970: PUSH EBX
//   Label: LAB_00434970
// 00434971: PUSH 0x617f3b
//   XREF to: 00617f3b (DATA)
// 00434976: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 0043497a: PUSH EAX
// 0043497b: MOV EBX,0x80a
// 00434980: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00434985: ADD ESP,0xc
// 00434988: MOV EAX,ESP
// 0043498a: MOV ECX,0x617f75
//   XREF to: 00617f75 (DATA)
// 0043498f: PUSH EAX
// 00434990: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00434996: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0043499c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004349a1: ADD ESP,0x4
// 004349a4: JMP 0x004348bd
//   XREF to: 004348bd (UNCONDITIONAL_JUMP)
// 004349a9: XOR ESI,ESI
//   Label: LAB_004349a9
// 004349ab: MOV EDI,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 004349b2: MOV dword ptr [ESP + 0x58],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 004349b6: TEST EDI,EDI
// 004349b8: JBE 0x00434927
//   XREF to: 00434927 (CONDITIONAL_JUMP)
// 004349be: MOV EAX,EDI
// 004349c0: IMUL EAX,EBP
// 004349c3: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004349c7: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_004349c7
//   XREF to: Stack[-0x20] (READ)
// 004349cb: IMUL EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 004349d0: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 004349d7: SUB EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x20] (READ)
// 004349db: DEC EAX
// 004349dc: IMUL EAX,EBP
// 004349df: MOV ESI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 004349e3: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 004349e7: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 004349eb: ADD EBX,EAX
// 004349ed: XOR EAX,EAX
// 004349ef: ADD EDX,ESI
// 004349f1: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004349f5: TEST ECX,ECX
// 004349f7: JBE 0x00434a28
//   XREF to: 00434a28 (CONDITIONAL_JUMP)
// 004349f9: MOV ECX,EBP
//   Label: LAB_004349f9
// 004349fb: MOV ESI,EDX
// 004349fd: MOV EDI,EBX
// 004349ff: PUSH EDI
// 00434a00: MOV EAX,ECX
// 00434a02: SHR ECX,0x2
// 00434a05: MOVSD.REP ES:EDI,ESI
// 00434a07: MOV CL,AL
// 00434a09: AND CL,0x3
// 00434a0c: MOVSB.REP ES:EDI,ESI
// 00434a0e: POP EDI
// 00434a0f: MOV ESI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x1c] (READ)
// 00434a13: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 00434a17: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 00434a1b: ADD EDX,EBP
// 00434a1d: INC EDI
// 00434a1e: ADD EBX,ESI
// 00434a20: MOV dword ptr [ESP + 0x64],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00434a24: CMP EDI,ECX
// 00434a26: JC 0x004349f9
//   XREF to: 004349f9 (CONDITIONAL_JUMP)
// 00434a28: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_00434a28
//   XREF to: Stack[-0x20] (READ)
// 00434a2c: INC EDX
// 00434a2d: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 00434a34: MOV dword ptr [ESP + 0x58],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00434a38: CMP EDX,ECX
// 00434a3a: JNC 0x00434927
//   XREF to: 00434927 (CONDITIONAL_JUMP)
// 00434a40: JMP 0x004349c7
//   XREF to: 004349c7 (UNCONDITIONAL_JUMP)
