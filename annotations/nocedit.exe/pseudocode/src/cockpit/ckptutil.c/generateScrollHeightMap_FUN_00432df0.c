// Name: cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0
// Address: 00432df0
// Address Range: [[00432df0, 00433022]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0(void * bitmap_data, int end_x, int start_x, int bitmap_height, int * height_output, int num_height_rows, int transparency_color)
// Globals:
//   TerminatedCString s_cockpit_ckptutil_c_00617aca
//   TerminatedCString s_Invalid_height_array_siz_00617ae0
//   TerminatedCString s_cockpit_ckptutil_c_00617afb
//   TerminatedCString s_cockpit_ckptutil_c_00617b11
//   TerminatedCString s_No_room_for_scroll_bitma_00617b27
//   TerminatedCString s_cockpit_ckptutil_c_00617b4f
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_generateScrollHeightMap_FUN_00432df0
          (void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output,
          int num_height_rows,int transparency_color)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int *in_stack_00000020;
  int in_stack_00000024;
  int local_30;
  int local_18;
  int *local_14;
  int *local_10;
  int *piVar8;
  
  if (bitmap_data != (void *)0x0) {
    if (num_height_rows < (end_x - bitmap_height) + 1) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 0x3f8;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid height array size.");
    }
    pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (bitmap_height * 4,"..\\cockpit\\ckptutil.c",0x3fc);
    if (pvVar1 == (void *)0x0) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 0x3fe;
      core_main_c_displayErrorAndQuit_FUN_00506f10("No room for scroll bitmap height table.");
    }
    iVar7 = 0;
    local_18 = 0;
    if (0 < bitmap_height) {
      local_10 = local_14;
      do {
        iVar3 = num_height_rows + -1;
        for (pbVar5 = (byte *)(local_30 + (num_height_rows + -1) * end_x + iVar7);
            (-1 < iVar3 && ((uint)*pbVar5 != transparency_color)); pbVar5 = pbVar5 + -end_x) {
          iVar3 = iVar3 + -1;
        }
        *local_10 = iVar3 + 1;
        if (local_18 <= iVar3) {
          local_18 = iVar3;
        }
        local_10 = local_10 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < bitmap_height);
    }
    *in_stack_00000020 = local_18;
    iVar7 = 1;
    if (1 < in_stack_00000024) {
      iVar3 = bitmap_height + -1;
      piVar8 = in_stack_00000020 + 1;
      do {
        iVar6 = num_height_rows + -1;
        for (pbVar5 = (byte *)(iVar3 + (num_height_rows + -1) * end_x + local_30 + iVar7);
            (-1 < iVar6 && ((uint)*pbVar5 != transparency_color)); pbVar5 = pbVar5 + -end_x) {
          iVar6 = iVar6 + -1;
        }
        iVar4 = 0;
        piVar2 = local_14;
        if (0 < iVar3) {
          do {
            iVar4 = iVar4 + 1;
            *piVar2 = piVar2[1];
            piVar2 = piVar2 + 1;
          } while (iVar4 < iVar3);
        }
        iVar4 = 0;
        local_14[bitmap_height + -1] = iVar6 + 1;
        iVar6 = 0;
        piVar2 = local_14;
        if (0 < bitmap_height) {
          do {
            if (iVar4 <= *piVar2) {
              iVar4 = *piVar2;
            }
            iVar6 = iVar6 + 1;
            piVar2 = piVar2 + 1;
          } while (iVar6 < bitmap_height);
        }
        iVar7 = iVar7 + 1;
        *piVar8 = iVar4;
        piVar8 = piVar8 + 1;
      } while (iVar7 < in_stack_00000024);
    }
    g_CurrentDebugFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentDebugLine = 0x439;
    shape_memdbg_cpp_debugFree_FUN_0050f210(local_14);
  }
  return;
}


// Assembly code:
// 00432df0: PUSH EBX
//   Label: cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0
// 00432df1: PUSH EDI
// 00432df2: PUSH EBP
// 00432df3: SUB ESP,0x30
// 00432df6: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00432dfa: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 00432dfe: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x10] (READ)
// 00432e02: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x1c] (READ)
// 00432e06: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x3c] (DATA)
// 00432e09: TEST EAX,EAX
// 00432e0b: JZ 0x00432fad
//   XREF to: 00432fad (CONDITIONAL_JUMP)
// 00432e11: PUSH ESI
// 00432e12: MOV EAX,EBX
// 00432e14: SUB EAX,EBP
// 00432e16: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x18] (READ)
// 00432e1a: INC EAX
// 00432e1b: CMP EAX,EDX
// 00432e1d: JG 0x00432fb4
//   XREF to: 00432fb4 (CONDITIONAL_JUMP)
// 00432e23: PUSH 0x3fc
//   Label: LAB_00432e23
// 00432e28: PUSH 0x617afb
//   XREF to: 00617afb (DATA)
// 00432e2d: LEA EAX,[EBP*0x4 + 0x0]
// 00432e34: PUSH EAX
// 00432e35: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00432e3a: ADD ESP,0xc
// 00432e3d: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00432e41: TEST EAX,EAX
// 00432e43: JZ 0x00432fdc
//   XREF to: 00432fdc (CONDITIONAL_JUMP)
// 00432e49: XOR ESI,ESI
//   Label: LAB_00432e49
// 00432e4b: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00432e4f: TEST EBP,EBP
// 00432e51: JLE 0x00432eae
//   XREF to: 00432eae (CONDITIONAL_JUMP)
// 00432e53: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 00432e57: DEC EAX
// 00432e58: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00432e5c: IMUL EAX,EBX
// 00432e5f: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00432e63: ADD EDX,EAX
// 00432e65: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00432e69: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00432e6d: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00432e71: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_00432e71
//   XREF to: Stack[-0x38] (READ)
// 00432e75: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 00432e79: ADD EDX,ESI
// 00432e7b: TEST EAX,EAX
// 00432e7d: JL 0x00432e8b
//   XREF to: 00432e8b (CONDITIONAL_JUMP)
// 00432e7f: XOR ECX,ECX
//   Label: LAB_00432e7f
// 00432e81: MOV CL,byte ptr [EDX]
// 00432e83: CMP ECX,EDI
// 00432e85: JNZ 0x00433003
//   XREF to: 00433003 (CONDITIONAL_JUMP)
// 00432e8b: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_00432e8b
//   XREF to: Stack[-0x1c] (READ)
// 00432e8f: LEA EDX,[EAX + 0x1]
// 00432e92: MOV dword ptr [ECX],EDX
// 00432e94: CMP EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 00432e98: JL 0x00432e9e
//   XREF to: 00432e9e (CONDITIONAL_JUMP)
// 00432e9a: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00432e9e: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00432e9e
//   XREF to: Stack[-0x1c] (READ)
// 00432ea2: ADD EAX,0x4
// 00432ea5: INC ESI
// 00432ea6: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00432eaa: CMP ESI,EBP
// 00432eac: JL 0x00432e71
//   XREF to: 00432e71 (CONDITIONAL_JUMP)
// 00432eae: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_00432eae
//   XREF to: Stack[0x14] (READ)
// 00432eb2: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 00432eb6: MOV dword ptr [EDX],EAX
// 00432eb8: MOV EDX,0x1
// 00432ebd: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x18] (READ)
// 00432ec1: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00432ec5: CMP ECX,EDX
// 00432ec7: JLE 0x00432f89
//   XREF to: 00432f89 (CONDITIONAL_JUMP)
// 00432ecd: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00432ed1: LEA EAX,[EBP*0x4 + 0x0]
// 00432ed8: ADD EDX,EAX
// 00432eda: LEA EAX,[EBP + -0x1]
// 00432edd: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00432ee1: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 00432ee5: DEC EAX
// 00432ee6: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00432eea: IMUL EAX,EBX
// 00432eed: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00432ef1: ADD EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00432ef5: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x10] (READ)
// 00432ef9: ADD EDX,EAX
// 00432efb: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x14] (READ)
// 00432eff: ADD EAX,0x4
// 00432f02: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 00432f06: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00432f0a: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00432f0a
//   XREF to: Stack[-0x34] (READ)
// 00432f0e: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00432f12: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00432f16: ADD EAX,ECX
// 00432f18: TEST EDX,EDX
// 00432f1a: JL 0x00432f28
//   XREF to: 00432f28 (CONDITIONAL_JUMP)
// 00432f1c: XOR ECX,ECX
//   Label: LAB_00432f1c
// 00432f1e: MOV CL,byte ptr [EAX]
// 00432f20: CMP ECX,EDI
// 00432f22: JNZ 0x00433013
//   XREF to: 00433013 (CONDITIONAL_JUMP)
// 00432f28: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_00432f28
//   XREF to: Stack[-0x10] (READ)
// 00432f2c: XOR ECX,ECX
// 00432f2e: TEST EAX,EAX
// 00432f30: JLE 0x00432f47
//   XREF to: 00432f47 (CONDITIONAL_JUMP)
// 00432f32: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00432f36: MOV ESI,dword ptr [EAX + 0x4]
//   Label: LAB_00432f36
// 00432f39: INC ECX
// 00432f3a: MOV dword ptr [EAX],ESI
// 00432f3c: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x10] (READ)
// 00432f40: ADD EAX,0x4
// 00432f43: CMP ECX,ESI
// 00432f45: JL 0x00432f36
//   XREF to: 00432f36 (CONDITIONAL_JUMP)
// 00432f47: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00432f47
//   XREF to: Stack[-0x30] (READ)
// 00432f4b: INC EDX
// 00432f4c: XOR ECX,ECX
// 00432f4e: MOV dword ptr [EAX + -0x4],EDX
// 00432f51: XOR EDX,EDX
// 00432f53: TEST EBP,EBP
// 00432f55: JLE 0x00432f6b
//   XREF to: 00432f6b (CONDITIONAL_JUMP)
// 00432f57: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00432f5b: MOV ESI,dword ptr [EAX]
//   Label: LAB_00432f5b
// 00432f5d: CMP ECX,ESI
// 00432f5f: JG 0x00432f63
//   XREF to: 00432f63 (CONDITIONAL_JUMP)
// 00432f61: MOV ECX,ESI
// 00432f63: INC EDX
//   Label: LAB_00432f63
// 00432f64: ADD EAX,0x4
// 00432f67: CMP EDX,EBP
// 00432f69: JL 0x00432f5b
//   XREF to: 00432f5b (CONDITIONAL_JUMP)
// 00432f6b: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00432f6b
//   XREF to: Stack[-0x18] (READ)
// 00432f6f: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00432f73: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x18] (READ)
// 00432f77: INC ESI
// 00432f78: MOV dword ptr [EAX],ECX
// 00432f7a: LEA ECX,[EAX + 0x4]
// 00432f7d: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00432f81: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00432f85: CMP ESI,EDX
// 00432f87: JL 0x00432f0a
//   XREF to: 00432f0a (CONDITIONAL_JUMP)
// 00432f89: MOV ECX,0x617b4f
//   Label: LAB_00432f89
//   XREF to: 00617b4f (DATA)
// 00432f8e: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00432f92: MOV EBX,0x439
// 00432f97: PUSH ESI
// 00432f98: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00432f9e: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 00432fa4: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00432fa9: ADD ESP,0x4
// 00432fac: POP ESI
// 00432fad: ADD ESP,0x30
//   Label: LAB_00432fad
// 00432fb0: POP EBP
// 00432fb1: POP EDI
// 00432fb2: POP EBX
// 00432fb3: RET
// 00432fb4: MOV ECX,0x617aca
//   Label: LAB_00432fb4
//   XREF to: 00617aca (DATA)
// 00432fb9: MOV ESI,0x3f8
// 00432fbe: PUSH 0x617ae0
//   XREF to: 00617ae0 (DATA)
// 00432fc3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00432fc9: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00432fcf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00432fd4: ADD ESP,0x4
// 00432fd7: JMP 0x00432e23
//   XREF to: 00432e23 (UNCONDITIONAL_JUMP)
// 00432fdc: MOV EAX,0x617b11
//   Label: LAB_00432fdc
//   XREF to: 00617b11 (DATA)
// 00432fe1: MOV EDX,0x3fe
// 00432fe6: PUSH 0x617b27
//   XREF to: 00617b27 (DATA)
// 00432feb: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00432ff0: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00432ff6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00432ffb: ADD ESP,0x4
// 00432ffe: JMP 0x00432e49
//   XREF to: 00432e49 (UNCONDITIONAL_JUMP)
// 00433003: DEC EAX
//   Label: LAB_00433003
// 00433004: SUB EDX,EBX
// 00433006: TEST EAX,EAX
// 00433008: JGE 0x00432e7f
//   XREF to: 00432e7f (CONDITIONAL_JUMP)
// 0043300e: JMP 0x00432e8b
//   XREF to: 00432e8b (UNCONDITIONAL_JUMP)
// 00433013: DEC EDX
//   Label: LAB_00433013
// 00433014: SUB EAX,EBX
// 00433016: TEST EDX,EDX
// 00433018: JGE 0x00432f1c
//   XREF to: 00432f1c (CONDITIONAL_JUMP)
// 0043301e: JMP 0x00432f28
//   XREF to: 00432f28 (UNCONDITIONAL_JUMP)
