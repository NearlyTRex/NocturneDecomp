// Name: core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0
// Address: 005769a0
// Address Range: [[005769a0, 00576d90]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0(void)
// Cross-references:
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00576ee1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setedit_cpp_006465a8
//   TerminatedCString s_Too_many_thumbs_006465bc
//   TerminatedCString s_s_s_raw_006465cd
//   TerminatedCString s_s_s_act_006465d6
//   TerminatedCString s_rb_006465df
//   TerminatedCString s_backdrop_006465e2
//   TerminatedCString s_rb_006465eb
//   TerminatedCString s_art_006465ee
//   TerminatedCString s_art_006465f2
//   TerminatedCString s_rb_006465f6
//   TerminatedCString s_art_006465f9
//   TerminatedCString s_backdrop_006465fd
//   TerminatedCString s_rb_00646606
//   TerminatedCString s_backdrop_00646609
//   TerminatedCString s_core_setedit_cpp_00646612
//   TerminatedCString s_Can_t_open_s_00646626
//   TerminatedCString s_core_setedit_cpp_00646634
//   TerminatedCString s_core_setedit_cpp_00646648
//   TerminatedCString s_Can_t_figure_out_image_d_0064665c
//   TerminatedCString s_core_setedit_cpp_00646685
//   TerminatedCString s_core_setedit_cpp_00646699
//   TerminatedCString s_Out_of_memory_006466ad
//   TerminatedCString s_core_setedit_cpp_006466bb
//   TerminatedCString s_core_setedit_cpp_006466cf
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   undefined4 g_ColorMagenta
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03365cbc
//   undefined4 DAT_03365cc0
//   undefined4 DAT_03365dc0
//   undefined4 DAT_03365dc4
//   undefined4 DAT_03653cc0
//   undefined4 DAT_03653cc1
//   undefined4 DAT_03653cc2
//   CPickList CPickList_03653fc0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0(void)

{
  FILE *pFVar1;
  int iVar2;
  uint uVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  FILE *unaff_EBP;
  SIZE_T unaff_retaddr;
  int in_stack_00000004;
  int iStack00000008;
  int in_stack_0000000c;
  void *pvStack00000010;
  void *in_stack_00000014;
  void *in_stack_00000018;
  int iStack0000001c;
  char *directory;
  char *mode;
  FILE *local_18;
  int iVar3;
  
  if (0xf9 < in_stack_0000000c) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many thumbs!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa8,"%s%s.raw");
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffbc,"%s%s.act");
  pFVar1 = engine_dosio_c_getFile_FUN_00481a50("backdrop",&stack0xffffffb0,"rb");
  if (pFVar1 == (FILE *)0x0) {
    pFVar1 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffffb4,"rb");
    if (pFVar1 == (FILE *)0x0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CPickList_03653fc0.base_strlist,&stack0xffffffb8);
      goto LAB_00576a3d;
    }
    uVar4 = engine_dosio_c_getFileSize_FUN_00481880("art",&stack0xffffffb8);
    mode = "rb";
    directory = "art";
  }
  else {
    uVar4 = engine_dosio_c_getFileSize_FUN_00481880("backdrop",&stack0xffffffb4);
    mode = "rb";
    directory = "backdrop";
  }
  pFVar1 = engine_dosio_c_getFile_FUN_00481a50(directory,&stack0xffffffc8,mode);
  if (pFVar1 == (FILE *)0x0) {
    g_CurrentLineNumber = 0xfd;
    g_CurrentFilename = "..\\core\\setedit.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s");
  }
  crt_stdio_c_fread_FUN_005fd990(&DAT_03653cc0,0x300,1,pFVar1);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\setedit.cpp",0xff);
  if (uVar4 < 0x40000) {
    if (0xffff < uVar4) {
      if (uVar4 < 0x10001) {
        pFVar1 = (FILE *)0x100;
        iVar5 = 0x100;
LAB_00576b4f:
        pvStack00000010 =
             shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (iVar5 * (int)pFVar1,"..\\core\\setedit.cpp",0x121);
        if (pvStack00000010 == (void *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x122;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
        }
        crt_stdio_c_fread_FUN_005fd990(in_stack_00000014,unaff_retaddr,(SIZE_T)pFVar1,unaff_EBP);
        pvStack00000010 = (void *)0x0;
        iVar5 = in_stack_0000000c * 0x3000;
        iStack00000008 = iVar5 + 0x100;
        in_stack_0000000c = 0;
        do {
          iVar6 = 0;
          iStack0000001c = iStack00000008;
          iVar3 = iVar5 + (int)pvStack00000010 * 0x100;
          do {
            iVar2 = iVar3 + 4;
            *(uint *)(&DAT_03365cc0 + iVar3) =
                 (uint)*(uint3 *)(&DAT_03653cc0 +
                                 (uint)*(byte *)(((int)((iVar6 + (iVar6 >> 0x1f) * -0x40) -
                                                       (uint)((iVar6 >> 0x1f) << 5 < 0)) >> 6) +
                                                 in_stack_00000004 * (in_stack_0000000c / 0x30) +
                                                (int)in_stack_00000018) * 3);
            iVar6 = iVar6 + unaff_retaddr;
            iVar3 = iVar2;
          } while (iVar2 != iStack00000008);
          pvStack00000010 = (void *)((int)pvStack00000010 + 1);
          in_stack_0000000c = (int)&pFVar1->_ptr + in_stack_0000000c;
          iStack00000008 = iStack00000008 + 0x100;
        } while ((int)pvStack00000010 < 0x30);
        shape_memdbg_cpp_debugFree_FUN_0050f460(in_stack_00000018,"..\\core\\setedit.cpp",0x133)
        ;
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\setedit.cpp",0x134);
        return;
      }
      if (uVar4 == 0x3f010) {
        pFVar1 = (FILE *)0x1fc;
        iVar5 = 0x1fc;
        goto LAB_00576b4f;
      }
    }
  }
  else {
    if (uVar4 < 0x40001) {
      pFVar1 = (FILE *)0x200;
      iVar5 = 0x200;
      goto LAB_00576b4f;
    }
    if (0x4afff < uVar4) {
      if (uVar4 < 0x4b001) {
        pFVar1 = (FILE *)0x1e0;
        iVar5 = 0x280;
        goto LAB_00576b4f;
      }
      if (uVar4 == 0x100000) {
        pFVar1 = (FILE *)0x400;
        iVar5 = 0x400;
        goto LAB_00576b4f;
      }
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\core\\setedit.cpp",0x11a);
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't figure out image dimensions for %s");
LAB_00576a3d:
  iVar6 = 0;
  iVar5 = in_stack_0000000c * 0x3000;
  do {
    iVar5 = iVar5 + 0x100;
    iVar3 = iVar6 * 0x100 + in_stack_0000000c * 0x3000;
    do {
      iVar2 = iVar3 + 4;
      *(undefined4 *)(&DAT_03365cc0 + iVar3) = 0xff00ff;
      iVar3 = iVar2;
    } while (iVar2 != iVar5);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x30);
  return;
}


// Assembly code:
// 005769a0: PUSH EBX
//   Label: core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0
// 005769a1: PUSH ESI
// 005769a2: PUSH EDI
// 005769a3: PUSH EBP
// 005769a4: SUB ESP,0x4c
// 005769a7: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 005769ab: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x8] (READ)
// 005769af: MOV EDI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 005769b3: CMP EDI,0xfa
// 005769b9: JGE 0x00576a80
//   XREF to: 00576a80 (CONDITIONAL_JUMP)
// 005769bf: PUSH EBX
//   Label: LAB_005769bf
// 005769c0: PUSH ESI
// 005769c1: PUSH 0x6465cd
//   XREF to: 006465cd (DATA)
// 005769c6: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x5c] (DATA)
// 005769ca: PUSH EAX
// 005769cb: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005769d0: ADD ESP,0x10
// 005769d3: PUSH EBX
// 005769d4: PUSH ESI
// 005769d5: PUSH 0x6465d6
//   XREF to: 006465d6 (DATA)
// 005769da: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x4c] (DATA)
// 005769de: PUSH EAX
// 005769df: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005769e4: ADD ESP,0x10
// 005769e7: PUSH 0x6465df
//   XREF to: 006465df (DATA)
// 005769ec: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 005769f0: PUSH EAX
// 005769f1: PUSH 0x6465e2
//   XREF to: 006465e2 (DATA)
// 005769f6: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005769fb: ADD ESP,0xc
// 005769fe: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00576a02: TEST EAX,EAX
// 00576a04: JNZ 0x00576cb2
//   XREF to: 00576cb2 (CONDITIONAL_JUMP)
// 00576a0a: PUSH 0x6465eb
//   XREF to: 006465eb (DATA)
// 00576a0f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 00576a13: PUSH EAX
// 00576a14: PUSH 0x6465ee
//   XREF to: 006465ee (DATA)
// 00576a19: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00576a1e: ADD ESP,0xc
// 00576a21: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00576a25: TEST EAX,EAX
// 00576a27: JNZ 0x00576aa8
//   XREF to: 00576aa8 (CONDITIONAL_JUMP)
// 00576a2d: MOV EAX,ESP
// 00576a2f: PUSH EAX
// 00576a30: PUSH 0x3653fc0
//   XREF to: 03653fc0 (DATA)
// 00576a35: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00576a3a: ADD ESP,0x8
// 00576a3d: LEA ESI,[EDI*0x4 + 0x0]
//   Label: LAB_00576a3d
// 00576a44: SUB ESI,EDI
// 00576a46: MOV EBP,0xff00ff
// 00576a4b: SHL ESI,0xc
// 00576a4e: XOR EBX,EBX
// 00576a50: LEA ECX,[ESI + 0x100]
// 00576a56: MOV EAX,EBX
//   Label: LAB_00576a56
// 00576a58: SHL EAX,0x8
// 00576a5b: MOV EDX,ECX
// 00576a5d: ADD EAX,ESI
// 00576a5f: ADD EAX,0x4
//   Label: LAB_00576a5f
// 00576a62: MOV dword ptr [EAX + 0x3365cbc],EBP
//   XREF to: 03365cbc (DATA)
//   XREF to: 00ff00ff (DATA)
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365dc0 (DATA)
//   XREF to: 03365dc4 (DATA)
// 00576a68: CMP EAX,EDX
// 00576a6a: JNZ 0x00576a5f
//   XREF to: 00576a5f (CONDITIONAL_JUMP)
// 00576a6c: INC EBX
// 00576a6d: ADD ECX,0x100
// 00576a73: CMP EBX,0x30
// 00576a76: JL 0x00576a56
//   XREF to: 00576a56 (CONDITIONAL_JUMP)
// 00576a78: ADD ESP,0x4c
// 00576a7b: POP EBP
// 00576a7c: POP EDI
// 00576a7d: POP ESI
// 00576a7e: POP EBX
// 00576a7f: RET
// 00576a80: MOV EDX,0x6465a8
//   Label: LAB_00576a80
//   XREF to: 006465a8 (PARAM)
// 00576a85: MOV ECX,0xd3
// 00576a8a: PUSH 0x6465bc
//   XREF to: 006465bc (DATA)
// 00576a8f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00576a95: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00576a9b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00576aa0: ADD ESP,0x4
// 00576aa3: JMP 0x005769bf
//   XREF to: 005769bf (UNCONDITIONAL_JUMP)
// 00576aa8: MOV EAX,ESP
//   Label: LAB_00576aa8
// 00576aaa: PUSH EAX
// 00576aab: PUSH 0x6465f2
//   XREF to: 006465f2 (DATA)
// 00576ab0: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 00576ab5: ADD ESP,0x8
// 00576ab8: PUSH 0x6465f6
//   XREF to: 006465f6 (DATA)
// 00576abd: MOV EBX,EAX
// 00576abf: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x4c] (DATA)
// 00576ac3: PUSH EAX
// 00576ac4: PUSH 0x6465f9
//   XREF to: 006465f9 (DATA)
// 00576ac9: CALL engine_dosio.c_getFile_FUN_00481a50
//   Label: LAB_00576ac9
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00576ace: ADD ESP,0xc
// 00576ad1: MOV ESI,EAX
// 00576ad3: TEST ESI,ESI
// 00576ad5: JNZ 0x00576afe
//   XREF to: 00576afe (CONDITIONAL_JUMP)
// 00576ad7: MOV dword ptr [0x02f0ca4c],0xfd
//   XREF to: 02f0ca4c (WRITE)
// 00576ae1: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x4c] (DATA)
// 00576ae5: PUSH EAX
// 00576ae6: MOV EBP,0x646612
//   XREF to: 00646612 (DATA)
// 00576aeb: PUSH 0x646626
//   XREF to: 00646626 (DATA)
// 00576af0: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00576af6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00576afb: ADD ESP,0x8
// 00576afe: PUSH ESI
//   Label: LAB_00576afe
// 00576aff: PUSH 0x1
// 00576b01: PUSH 0x300
// 00576b06: PUSH 0x3653cc0
//   XREF to: 03653cc0 (DATA)
// 00576b0b: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00576b10: ADD ESP,0x10
// 00576b13: PUSH 0xff
// 00576b18: PUSH 0x646634
//   XREF to: 00646634 (DATA)
// 00576b1d: PUSH ESI
// 00576b1e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00576b23: ADD ESP,0xc
// 00576b26: CMP EBX,0x40000
// 00576b2c: JNC 0x00576d19
//   XREF to: 00576d19 (CONDITIONAL_JUMP)
// 00576b32: CMP EBX,0x10000
// 00576b38: JC 0x00576d37
//   XREF to: 00576d37 (CONDITIONAL_JUMP)
// 00576b3e: JA 0x00576d2f
//   XREF to: 00576d2f (CONDITIONAL_JUMP)
// 00576b44: MOV EBP,0x100
// 00576b49: MOV EBX,EBP
// 00576b4b: MOV dword ptr [ESP + 0x30],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 00576b4f: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_00576b4f
//   XREF to: Stack[-0x2c] (READ)
// 00576b53: IMUL EAX,EBX
// 00576b56: PUSH 0x121
// 00576b5b: PUSH 0x646685
//   XREF to: 00646685 (DATA)
// 00576b60: PUSH EAX
// 00576b61: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00576b66: ADD ESP,0xc
// 00576b69: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00576b6d: TEST EAX,EAX
// 00576b6f: JZ 0x00576d6a
//   XREF to: 00576d6a (CONDITIONAL_JUMP)
// 00576b75: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_00576b75
//   XREF to: Stack[-0x3c] (READ)
// 00576b79: PUSH ECX
// 00576b7a: PUSH EBX
// 00576b7b: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x2c] (READ)
// 00576b7f: PUSH ESI
// 00576b80: MOV EBP,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 00576b84: PUSH EBP
// 00576b85: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00576b8a: ADD ESP,0x10
// 00576b8d: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 00576b91: IMUL EBX,EBX,0x0
// 00576b94: XOR EAX,EAX
// 00576b96: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00576b9a: LEA EAX,[EDI*0x4 + 0x0]
// 00576ba1: SUB EAX,EDI
// 00576ba3: SHL EAX,0xc
// 00576ba6: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00576baa: ADD EAX,0x100
// 00576baf: MOV dword ptr [ESP + 0x40],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00576bb3: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00576bb7: IMUL EAX,ESI,0x0
// 00576bba: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00576bbe: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00576bc2: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_00576bc2
//   XREF to: Stack[-0x24] (READ)
// 00576bc6: MOV EDX,EAX
// 00576bc8: MOV ECX,0x30
// 00576bcd: SAR EDX,0x1f
// 00576bd0: IDIV ECX
// 00576bd2: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c] (READ)
// 00576bd6: IMUL EBP,EAX
// 00576bd9: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x20] (READ)
// 00576bdd: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x30] (READ)
// 00576be1: SHL EAX,0x8
// 00576be4: ADD EBX,EAX
// 00576be6: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 00576bea: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x34] (READ)
// 00576bee: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00576bf2: MOV EDX,ECX
//   Label: LAB_00576bf2
// 00576bf4: MOV EAX,ECX
// 00576bf6: SAR EDX,0x1f
// 00576bf9: SHL EDX,0x6
// 00576bfc: SBB EAX,EDX
// 00576bfe: SAR EAX,0x6
// 00576c01: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 00576c05: ADD EAX,EBP
// 00576c07: ADD EAX,ESI
// 00576c09: MOV AL,byte ptr [EAX]
// 00576c0b: AND EAX,0xff
// 00576c10: LEA EAX,[EAX + EAX*0x2]
// 00576c13: XOR EDX,EDX
// 00576c15: MOVZX EDI,byte ptr [EAX + 0x3653cc0]
//   XREF to: 03653cc0 (DATA)
// 00576c1c: MOV DL,byte ptr [EAX + 0x3653cc1]
//   XREF to: 03653cc1 (DATA)
// 00576c22: MOVZX ESI,byte ptr [EAX + 0x3653cc2]
//   XREF to: 03653cc2 (DATA)
// 00576c29: MOV EAX,EDX
// 00576c2b: MOV EDX,ESI
// 00576c2d: SHL EAX,0x8
// 00576c30: SHL EDX,0x10
// 00576c33: ADD EAX,EDI
// 00576c35: ADD EBX,0x4
// 00576c38: ADD EAX,EDX
// 00576c3a: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x1c] (READ)
// 00576c3e: MOV dword ptr [EBX + 0x3365cbc],EAX
//   XREF to: 03365cbc (DATA)
//   XREF to: 03365cc0 (DATA)
// 00576c44: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 00576c48: ADD ECX,EDI
// 00576c4a: CMP EBX,EAX
// 00576c4c: JNZ 0x00576bf2
//   XREF to: 00576bf2 (CONDITIONAL_JUMP)
// 00576c4e: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x38] (READ)
// 00576c52: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 00576c56: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x20] (READ)
// 00576c5a: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 00576c5e: INC EBX
// 00576c5f: ADD ECX,EAX
// 00576c61: ADD EDX,0x100
// 00576c67: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00576c6b: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00576c6f: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00576c73: CMP EBX,0x30
// 00576c76: JL 0x00576bc2
//   XREF to: 00576bc2 (CONDITIONAL_JUMP)
// 00576c7c: PUSH 0x133
// 00576c81: PUSH 0x6466bb
//   XREF to: 006466bb (DATA)
// 00576c86: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x18] (READ)
// 00576c8a: PUSH EDI
// 00576c8b: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00576c90: ADD ESP,0xc
// 00576c93: PUSH 0x134
// 00576c98: PUSH 0x6466cf
//   XREF to: 006466cf (DATA)
// 00576c9d: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x3c] (READ)
// 00576ca1: PUSH EBP
// 00576ca2: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00576ca7: ADD ESP,0xc
// 00576caa: ADD ESP,0x4c
// 00576cad: POP EBP
// 00576cae: POP EDI
// 00576caf: POP ESI
// 00576cb0: POP EBX
// 00576cb1: RET
// 00576cb2: MOV EAX,ESP
//   Label: LAB_00576cb2
// 00576cb4: PUSH EAX
// 00576cb5: PUSH 0x6465fd
//   XREF to: 006465fd (DATA)
// 00576cba: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 00576cbf: ADD ESP,0x8
// 00576cc2: PUSH 0x646606
//   XREF to: 00646606 (DATA)
// 00576cc7: MOV EBX,EAX
// 00576cc9: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x4c] (DATA)
// 00576ccd: PUSH EAX
// 00576cce: PUSH 0x646609
//   XREF to: 00646609 (DATA)
// 00576cd3: JMP 0x00576ac9
//   XREF to: 00576ac9 (UNCONDITIONAL_JUMP)
// 00576cd8: MOV ESI,0x1fc
//   Label: LAB_00576cd8
// 00576cdd: MOV EBX,ESI
// 00576cdf: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00576ce3: JMP 0x00576b4f
//   XREF to: 00576b4f (UNCONDITIONAL_JUMP)
// 00576ce8: MOV EBX,0x200
//   Label: LAB_00576ce8
// 00576ced: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00576cf1: JMP 0x00576b4f
//   XREF to: 00576b4f (UNCONDITIONAL_JUMP)
// 00576cf6: MOV EDX,0x400
//   Label: LAB_00576cf6
// 00576cfb: MOV EBX,EDX
// 00576cfd: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00576d01: JMP 0x00576b4f
//   XREF to: 00576b4f (UNCONDITIONAL_JUMP)
// 00576d06: MOV ECX,0x280
//   Label: LAB_00576d06
// 00576d0b: MOV EBX,0x1e0
// 00576d10: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00576d14: JMP 0x00576b4f
//   XREF to: 00576b4f (UNCONDITIONAL_JUMP)
// 00576d19: JBE 0x00576ce8
//   Label: LAB_00576d19
//   XREF to: 00576ce8 (CONDITIONAL_JUMP)
// 00576d1b: CMP EBX,0x4b000
// 00576d21: JC 0x00576d37
//   XREF to: 00576d37 (CONDITIONAL_JUMP)
// 00576d23: JBE 0x00576d06
//   XREF to: 00576d06 (CONDITIONAL_JUMP)
// 00576d25: CMP EBX,0x100000
// 00576d2b: JZ 0x00576cf6
//   XREF to: 00576cf6 (CONDITIONAL_JUMP)
// 00576d2d: JMP 0x00576d37
//   XREF to: 00576d37 (UNCONDITIONAL_JUMP)
// 00576d2f: CMP EBX,0x3f010
//   Label: LAB_00576d2f
// 00576d35: JZ 0x00576cd8
//   XREF to: 00576cd8 (CONDITIONAL_JUMP)
// 00576d37: PUSH 0x11a
//   Label: LAB_00576d37
// 00576d3c: PUSH 0x646648
//   XREF to: 00646648 (DATA)
// 00576d41: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x3c] (READ)
// 00576d45: PUSH ECX
// 00576d46: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00576d4b: ADD ESP,0xc
// 00576d4e: MOV EAX,ESP
// 00576d50: PUSH EAX
// 00576d51: PUSH 0x64665c
//   XREF to: 0064665c (DATA)
// 00576d56: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00576d5c: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00576d5d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00576d62: ADD ESP,0xc
// 00576d65: JMP 0x00576a3d
//   XREF to: 00576a3d (UNCONDITIONAL_JUMP)
// 00576d6a: MOV EAX,0x646699
//   Label: LAB_00576d6a
//   XREF to: 00646699 (PARAM)
// 00576d6f: MOV EDX,0x122
// 00576d74: PUSH 0x6466ad
//   XREF to: 006466ad (DATA)
// 00576d79: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00576d7e: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00576d84: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00576d89: ADD ESP,0x4
// 00576d8c: JMP 0x00576b75
//   XREF to: 00576b75 (UNCONDITIONAL_JUMP)
