// Name: core_skeledit.cpp_FUN_005897b0
// Address: 005897b0
// Address Range: [[005897b0, 00589a33]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_005897b0()
// Globals:
//   TerminatedCString s_core_skeledit_cpp_00649d0a
//   TerminatedCString s_rt_00649d1f
//   TerminatedCString s_d_00649d22
//   TerminatedCString s_core_skeledit_cpp_00649d26
//   TerminatedCString s_Deleting_old_s_file_00649d3b
//   TerminatedCString s_core_skeledit_cpp_00649d51
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   TerminatedCString s_skeledit_ini_00681868
//   CEditorTools g_CEditorToolsPtr
//   undefined1 DAT_03670848
//   undefined1 DAT_03670849
//   undefined1 DAT_03670950
//   undefined1 DAT_03670951
//   undefined1 DAT_03670a58
//   undefined1 DAT_03670a59
// Function calls:
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void core_skeledit_cpp_FUN_005897b0(undefined4 param_1,undefined4 param_2,int unaff_EBX)

{
  FILE *file;
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x28);
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("skeledit.ini",(char *)0x0,"rt","..\\core\\skeledit.cpp",
                    0x124);
  if (file == (FILE *)0x0) {
    return;
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n");
  if (unaff_EBX != 1) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x12d);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Deleting old %s file.");
    crt_io_c_deleteFile_FUN_005ff9d0("skeledit.ini");
    return;
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  DAT_03670848 = 0;
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if ((iVar2 < 0) || (iVar2 == 10)) goto LAB_00589863;
    puVar3 = &DAT_03670848;
  } while (iVar2 != 0x22);
  while ((iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file), -1 < iVar2 && (iVar2 != 10))) {
    if (iVar2 == 0x22) {
      iVar2 = 1;
      goto LAB_005899ac;
    }
    *puVar3 = (char)iVar2;
    puVar3[1] = 0;
    puVar3 = puVar3 + 1;
  }
  goto LAB_00589863;
  while ((iVar1 != 10 || (iVar2 = iVar2 + -1, 0 < iVar2))) {
LAB_00589a04:
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  }
  goto LAB_005898a6;
  while ((iVar1 != 10 || (iVar2 = iVar2 + -1, 0 < iVar2))) {
LAB_0058990c:
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  }
  goto LAB_00589923;
  while ((iVar1 != 10 || (iVar2 = iVar2 + -1, 0 < iVar2))) {
LAB_005899ac:
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  }
LAB_00589863:
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  DAT_03670950 = 0;
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if ((iVar2 < 0) || (iVar2 == 10)) goto LAB_005898a6;
    puVar3 = &DAT_03670950;
  } while (iVar2 != 0x22);
  while ((iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file), -1 < iVar2 && (iVar2 != 10))) {
    if (iVar2 == 0x22) {
      iVar2 = 1;
      goto LAB_00589a04;
    }
    *puVar3 = (char)iVar2;
    puVar3[1] = 0;
    puVar3 = puVar3 + 1;
  }
LAB_005898a6:
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  DAT_03670a58 = 0;
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if ((iVar2 < 0) || (iVar2 == 10)) goto LAB_00589923;
    puVar3 = &DAT_03670a58;
  } while (iVar2 != 0x22);
  while ((iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file), -1 < iVar2 && (iVar2 != 10))) {
    if (iVar2 == 0x22) {
      iVar2 = 1;
      goto LAB_0058990c;
    }
    *puVar3 = (char)iVar2;
    puVar3[1] = 0;
    puVar3 = puVar3 + 1;
  }
LAB_00589923:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x13f);
  return;
}


// Assembly code:
// 005897b0: PUSH 0x28
//   Label: core_skeledit.cpp_FUN_005897b0
// 005897b5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 005897ba: PUSH EBX
// 005897bb: PUSH ESI
// 005897bc: PUSH EDI
// 005897bd: SUB ESP,0x4
// 005897c0: PUSH 0x124
// 005897c5: PUSH 0x649d0a
//   XREF to: 00649d0a (DATA)
// 005897ca: PUSH 0x649d1f
//   XREF to: 00649d1f (DATA)
// 005897cf: PUSH 0x0
// 005897d1: PUSH 0x681868
//   XREF to: 00681868 (DATA)
// 005897d6: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005897db: ADD ESP,0x14
// 005897de: MOV EDI,EAX
// 005897e0: TEST EAX,EAX
// 005897e2: JZ 0x00589936
//   XREF to: 00589936 (CONDITIONAL_JUMP)
// 005897e8: MOV EBX,0x1
// 005897ed: MOV ESI,EAX
// 005897ef: PUSH ESI
//   Label: LAB_005897ef
// 005897f0: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005897f5: ADD ESP,0x4
// 005897f8: TEST EAX,EAX
// 005897fa: JL 0x00589806
//   XREF to: 00589806 (CONDITIONAL_JUMP)
// 005897fc: CMP EAX,0xa
// 005897ff: JNZ 0x005897ef
//   XREF to: 005897ef (CONDITIONAL_JUMP)
// 00589801: DEC EBX
// 00589802: TEST EBX,EBX
// 00589804: JG 0x005897ef
//   XREF to: 005897ef (CONDITIONAL_JUMP)
// 00589806: MOV EAX,ESP
//   Label: LAB_00589806
// 00589808: PUSH EAX
// 00589809: PUSH 0x649d22
//   XREF to: 00649d22 (DATA)
// 0058980e: PUSH EDI
// 0058980f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00589814: ADD ESP,0xc
// 00589817: MOV EDX,dword ptr [ESP]
// 0058981a: CMP EDX,0x1
// 0058981d: JNZ 0x0058993d
//   XREF to: 0058993d (CONDITIONAL_JUMP)
// 00589823: MOV EBX,EDX
// 00589825: MOV ESI,EDI
// 00589827: PUSH ESI
//   Label: LAB_00589827
// 00589828: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058982d: ADD ESP,0x4
// 00589830: TEST EAX,EAX
// 00589832: JL 0x0058983e
//   XREF to: 0058983e (CONDITIONAL_JUMP)
// 00589834: CMP EAX,0xa
// 00589837: JNZ 0x00589827
//   XREF to: 00589827 (CONDITIONAL_JUMP)
// 00589839: DEC EBX
// 0058983a: TEST EBX,EBX
// 0058983c: JG 0x00589827
//   XREF to: 00589827 (CONDITIONAL_JUMP)
// 0058983e: MOV EBX,0x3670848
//   Label: LAB_0058983e
//   XREF to: 03670848 (DATA)
// 00589843: XOR AH,AH
// 00589845: MOV ESI,EDI
// 00589847: MOV byte ptr [0x03670848],AH
//   XREF to: 03670848 (WRITE)
// 0058984d: PUSH ESI
//   Label: LAB_0058984d
// 0058984e: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00589853: ADD ESP,0x4
// 00589856: TEST EAX,EAX
// 00589858: JL 0x00589863
//   XREF to: 00589863 (CONDITIONAL_JUMP)
// 0058985a: CMP EAX,0xa
// 0058985d: JNZ 0x0058997d
//   XREF to: 0058997d (CONDITIONAL_JUMP)
// 00589863: MOV EBX,0x1
//   Label: LAB_00589863
// 00589868: MOV ESI,EDI
// 0058986a: PUSH ESI
//   Label: LAB_0058986a
// 0058986b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00589870: ADD ESP,0x4
// 00589873: TEST EAX,EAX
// 00589875: JL 0x00589881
//   XREF to: 00589881 (CONDITIONAL_JUMP)
// 00589877: CMP EAX,0xa
// 0058987a: JNZ 0x0058986a
//   XREF to: 0058986a (CONDITIONAL_JUMP)
// 0058987c: DEC EBX
// 0058987d: TEST EBX,EBX
// 0058987f: JG 0x0058986a
//   XREF to: 0058986a (CONDITIONAL_JUMP)
// 00589881: MOV EBX,0x3670950
//   Label: LAB_00589881
//   XREF to: 03670950 (DATA)
// 00589886: XOR DL,DL
// 00589888: MOV ESI,EDI
// 0058988a: MOV byte ptr [0x03670950],DL
//   XREF to: 03670950 (WRITE)
// 00589890: PUSH ESI
//   Label: LAB_00589890
// 00589891: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00589896: ADD ESP,0x4
// 00589899: TEST EAX,EAX
// 0058989b: JL 0x005898a6
//   XREF to: 005898a6 (CONDITIONAL_JUMP)
// 0058989d: CMP EAX,0xa
// 005898a0: JNZ 0x005899d5
//   XREF to: 005899d5 (CONDITIONAL_JUMP)
// 005898a6: MOV EBX,0x1
//   Label: LAB_005898a6
// 005898ab: MOV ESI,EDI
// 005898ad: PUSH ESI
//   Label: LAB_005898ad
// 005898ae: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005898b3: ADD ESP,0x4
// 005898b6: TEST EAX,EAX
// 005898b8: JL 0x005898c4
//   XREF to: 005898c4 (CONDITIONAL_JUMP)
// 005898ba: CMP EAX,0xa
// 005898bd: JNZ 0x005898ad
//   XREF to: 005898ad (CONDITIONAL_JUMP)
// 005898bf: DEC EBX
// 005898c0: TEST EBX,EBX
// 005898c2: JG 0x005898ad
//   XREF to: 005898ad (CONDITIONAL_JUMP)
// 005898c4: MOV EBX,0x3670a58
//   Label: LAB_005898c4
//   XREF to: 03670a58 (DATA)
// 005898c9: XOR DH,DH
// 005898cb: MOV ESI,EDI
// 005898cd: MOV byte ptr [0x03670a58],DH
//   XREF to: 03670a58 (WRITE)
// 005898d3: PUSH ESI
//   Label: LAB_005898d3
// 005898d4: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005898d9: ADD ESP,0x4
// 005898dc: TEST EAX,EAX
// 005898de: JL 0x00589923
//   XREF to: 00589923 (CONDITIONAL_JUMP)
// 005898e0: CMP EAX,0xa
// 005898e3: JZ 0x00589923
//   XREF to: 00589923 (CONDITIONAL_JUMP)
// 005898e5: CMP EAX,0x22
// 005898e8: JNZ 0x005898d3
//   XREF to: 005898d3 (CONDITIONAL_JUMP)
// 005898ea: PUSH ESI
//   Label: LAB_005898ea
// 005898eb: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005898f0: ADD ESP,0x4
// 005898f3: MOV EDX,EAX
// 005898f5: TEST EAX,EAX
// 005898f7: JL 0x00589923
//   XREF to: 00589923 (CONDITIONAL_JUMP)
// 005898f9: CMP EAX,0xa
// 005898fc: JZ 0x00589923
//   XREF to: 00589923 (CONDITIONAL_JUMP)
// 005898fe: CMP EAX,0x22
// 00589901: JNZ 0x00589a2d
//   XREF to: 00589a2d (CONDITIONAL_JUMP)
// 00589907: MOV EBX,0x1
// 0058990c: PUSH ESI
//   Label: LAB_0058990c
// 0058990d: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00589912: ADD ESP,0x4
// 00589915: TEST EAX,EAX
// 00589917: JL 0x00589923
//   XREF to: 00589923 (CONDITIONAL_JUMP)
// 00589919: CMP EAX,0xa
// 0058991c: JNZ 0x0058990c
//   XREF to: 0058990c (CONDITIONAL_JUMP)
// 0058991e: DEC EBX
// 0058991f: TEST EBX,EBX
// 00589921: JG 0x0058990c
//   XREF to: 0058990c (CONDITIONAL_JUMP)
// 00589923: PUSH 0x13f
//   Label: LAB_00589923
// 00589928: PUSH 0x649d51
//   XREF to: 00649d51 (DATA)
// 0058992d: PUSH EDI
// 0058992e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00589933: ADD ESP,0xc
// 00589936: ADD ESP,0x4
//   Label: LAB_00589936
// 00589939: POP EDI
// 0058993a: POP ESI
// 0058993b: POP EBX
// 0058993c: RET
// 0058993d: PUSH 0x12d
//   Label: LAB_0058993d
// 00589942: PUSH 0x649d26
//   XREF to: 00649d26 (DATA)
// 00589947: PUSH EDI
// 00589948: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0058994d: ADD ESP,0xc
// 00589950: PUSH 0x681868
//   XREF to: 00681868 (DATA)
// 00589955: PUSH 0x649d3b
//   XREF to: 00649d3b (DATA)
// 0058995a: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00589960: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00589961: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00589966: ADD ESP,0xc
// 00589969: PUSH 0x681868
//   XREF to: 00681868 (DATA)
// 0058996e: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00589973: ADD ESP,0x4
// 00589976: ADD ESP,0x4
// 00589979: POP EDI
// 0058997a: POP ESI
// 0058997b: POP EBX
// 0058997c: RET
// 0058997d: CMP EAX,0x22
//   Label: LAB_0058997d
// 00589980: JNZ 0x0058984d
//   XREF to: 0058984d (CONDITIONAL_JUMP)
// 00589986: PUSH ESI
//   Label: LAB_00589986
// 00589987: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058998c: ADD ESP,0x4
// 0058998f: MOV EDX,EAX
// 00589991: TEST EAX,EAX
// 00589993: JL 0x00589863
//   XREF to: 00589863 (CONDITIONAL_JUMP)
// 00589999: CMP EAX,0xa
// 0058999c: JZ 0x00589863
//   XREF to: 00589863 (CONDITIONAL_JUMP)
// 005899a2: CMP EAX,0x22
// 005899a5: JNZ 0x005899cc
//   XREF to: 005899cc (CONDITIONAL_JUMP)
// 005899a7: MOV EBX,0x1
// 005899ac: PUSH ESI
//   Label: LAB_005899ac
// 005899ad: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005899b2: ADD ESP,0x4
// 005899b5: TEST EAX,EAX
// 005899b7: JL 0x00589863
//   XREF to: 00589863 (CONDITIONAL_JUMP)
// 005899bd: CMP EAX,0xa
// 005899c0: JNZ 0x005899ac
//   XREF to: 005899ac (CONDITIONAL_JUMP)
// 005899c2: DEC EBX
// 005899c3: TEST EBX,EBX
// 005899c5: JG 0x005899ac
//   XREF to: 005899ac (CONDITIONAL_JUMP)
// 005899c7: JMP 0x00589863
//   XREF to: 00589863 (UNCONDITIONAL_JUMP)
// 005899cc: INC EBX
//   Label: LAB_005899cc
// 005899cd: MOV byte ptr [EBX + -0x1],DL
//   XREF to: 03670848 (WRITE)
// 005899d0: MOV byte ptr [EBX],0x0
//   XREF to: 03670849 (WRITE)
// 005899d3: JMP 0x00589986
//   XREF to: 00589986 (UNCONDITIONAL_JUMP)
// 005899d5: CMP EAX,0x22
//   Label: LAB_005899d5
// 005899d8: JNZ 0x00589890
//   XREF to: 00589890 (CONDITIONAL_JUMP)
// 005899de: PUSH ESI
//   Label: LAB_005899de
// 005899df: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005899e4: ADD ESP,0x4
// 005899e7: MOV EDX,EAX
// 005899e9: TEST EAX,EAX
// 005899eb: JL 0x005898a6
//   XREF to: 005898a6 (CONDITIONAL_JUMP)
// 005899f1: CMP EAX,0xa
// 005899f4: JZ 0x005898a6
//   XREF to: 005898a6 (CONDITIONAL_JUMP)
// 005899fa: CMP EAX,0x22
// 005899fd: JNZ 0x00589a24
//   XREF to: 00589a24 (CONDITIONAL_JUMP)
// 005899ff: MOV EBX,0x1
// 00589a04: PUSH ESI
//   Label: LAB_00589a04
// 00589a05: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00589a0a: ADD ESP,0x4
// 00589a0d: TEST EAX,EAX
// 00589a0f: JL 0x005898a6
//   XREF to: 005898a6 (CONDITIONAL_JUMP)
// 00589a15: CMP EAX,0xa
// 00589a18: JNZ 0x00589a04
//   XREF to: 00589a04 (CONDITIONAL_JUMP)
// 00589a1a: DEC EBX
// 00589a1b: TEST EBX,EBX
// 00589a1d: JG 0x00589a04
//   XREF to: 00589a04 (CONDITIONAL_JUMP)
// 00589a1f: JMP 0x005898a6
//   XREF to: 005898a6 (UNCONDITIONAL_JUMP)
// 00589a24: INC EBX
//   Label: LAB_00589a24
// 00589a25: MOV byte ptr [EBX + -0x1],DL
//   XREF to: 03670950 (WRITE)
// 00589a28: MOV byte ptr [EBX],0x0
//   XREF to: 03670951 (WRITE)
// 00589a2b: JMP 0x005899de
//   XREF to: 005899de (UNCONDITIONAL_JUMP)
// 00589a2d: INC EBX
//   Label: LAB_00589a2d
// 00589a2e: MOV byte ptr [EBX + -0x1],DL
//   XREF to: 03670a58 (WRITE)
// 00589a31: MOV byte ptr [EBX],0x0
//   XREF to: 03670a59 (WRITE)
