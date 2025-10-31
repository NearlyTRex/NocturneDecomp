// Name: core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730
// Address: 00470730
// Address Range: [[00470730, 004708d3]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730(CFilterFx * this_ptr, char * filename)
// Cross-references:
//   core_filmreel.cpp_CFilmProjector_load_FUN_004beb40 (004beb40) at 004bec99 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_movscrn_raw_0061e78a
//   TerminatedCString s_movscrn_raw_0061e796
//   TerminatedCString s_s_txt_0061e7a2
//   TerminatedCString s_rt_0061e7a9
//   TerminatedCString s_core_dfilter_cpp_0061e7ac
//   TerminatedCString s_Can_t_open_movie_s_txt_0061e7c0
//   TerminatedCString s_d_0061e7d8
//   TerminatedCString s_core_dfilter_cpp_0061e7dc
//   TerminatedCString s_core_dfilter_cpp_0061e7f0
//   TerminatedCString s_s_mov_0061e804
//   TerminatedCString s_rb_0061e80b
//   TerminatedCString s_core_dfilter_cpp_0061e80e
//   TerminatedCString s_Can_t_open_movie_s_mov_0061e822
//   TerminatedCString s_core_dfilter_cpp_0061e83a
//   CFilterCache* g_CFilterCachePtr = 020a4c08
//   CFilterCache g_CFilterCacheInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
//   core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0
//   core_dfilter.cpp_CFilterFX_free_FUN_00470700
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_00470730(CFilterFx *this_ptr,char *filename)

{
  FILE *pFVar1;
  void *pvVar2;
  CDemonFilter *this_ptr_00;
  int iVar3;
  BADSPACEBASE *in_ESP;
  
  core_dfilter_cpp_CFilterFX_free_FUN_00470700(this_ptr);
  if (filename != (char *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef8,"%s.txt",filename);
    pFVar1 = engine_dosio_c_getFile_FUN_00481a50(filename,&stack0xfffffefc,"rt");
    if (pFVar1 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\dfilter.cpp";
      g_CurrentLineNumber = 0x15a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open movie %s.txt");
    }
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar1,"%d\n");
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\dfilter.cpp",0x15c);
    pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (this_ptr->frame_count << 0xd,"..\\core\\dfilter.cpp",0x160);
    this_ptr->movie_data = pvVar2;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff10,"%s.mov");
    pFVar1 = engine_dosio_c_getFile_FUN_00481a50(filename,&stack0xffffff14,"rb");
    if (pFVar1 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\dfilter.cpp";
      g_CurrentLineNumber = 0x166;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open movie %s.mov");
    }
    crt_stdio_c_fread_FUN_005fd990(this_ptr->movie_data,0x2000,this_ptr->frame_count,pFVar1);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\dfilter.cpp",0x168);
    for (iVar3 = 0; iVar3 < this_ptr->frame_count * 0x2000; iVar3 = iVar3 + 1) {
      *(char *)(iVar3 + (int)this_ptr->movie_data) =
           (char)((uint)((int)(uint)*(byte *)(iVar3 + (int)this_ptr->movie_data) >> 2) / 2);
    }
    this_ptr->current_frame = 0;
    return;
  }
  this_ptr_00 = core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0
                          (g_CFilterCachePtr,"movscrn.raw");
  core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(this_ptr_00,"movscrn.raw");
  return;
}


// Assembly code:
// 00470730: PUSH EBX
//   Label: core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730
// 00470731: PUSH ESI
// 00470732: PUSH EBP
// 00470733: SUB ESP,0x100
// 00470739: MOV ESI,dword ptr [ESP + 0x110]
//   XREF to: Stack[0x4] (READ)
// 00470740: MOV EBX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x8] (READ)
// 00470747: PUSH ESI
// 00470748: CALL core_dfilter.cpp_CFilterFX_free_FUN_00470700
//   XREF to: 00470700 (UNCONDITIONAL_CALL)
// 0047074d: ADD ESP,0x4
// 00470750: TEST EBX,EBX
// 00470752: JZ 0x0047086f
//   XREF to: 0047086f (CONDITIONAL_JUMP)
// 00470758: PUSH EDI
// 00470759: PUSH EBX
// 0047075a: PUSH 0x61e7a2
//   XREF to: 0061e7a2 (DATA)
// 0047075f: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x10c] (DATA)
// 00470763: PUSH EAX
// 00470764: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00470769: ADD ESP,0xc
// 0047076c: PUSH 0x61e7a9
//   XREF to: 0061e7a9 (DATA)
// 00470771: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x10c] (DATA)
// 00470775: PUSH EAX
// 00470776: PUSH EBX
// 00470777: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0047077c: ADD ESP,0xc
// 0047077f: MOV EDI,EAX
// 00470781: TEST EAX,EAX
// 00470783: JNZ 0x004707a9
//   XREF to: 004707a9 (CONDITIONAL_JUMP)
// 00470785: PUSH EBX
// 00470786: MOV EDX,0x61e7ac
//   XREF to: 0061e7ac (PARAM)
// 0047078b: MOV ECX,0x15a
// 00470790: PUSH 0x61e7c0
//   XREF to: 0061e7c0 (DATA)
// 00470795: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0047079b: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004707a1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004707a6: ADD ESP,0x8
// 004707a9: PUSH ESI
//   Label: LAB_004707a9
// 004707aa: PUSH 0x61e7d8
//   XREF to: 0061e7d8 (DATA)
// 004707af: PUSH EDI
// 004707b0: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004707b5: ADD ESP,0xc
// 004707b8: PUSH 0x15c
// 004707bd: PUSH 0x61e7dc
//   XREF to: 0061e7dc (DATA)
// 004707c2: PUSH EDI
// 004707c3: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004707c8: ADD ESP,0xc
// 004707cb: PUSH 0x160
// 004707d0: MOV EAX,dword ptr [ESI]
// 004707d2: PUSH 0x61e7f0
//   XREF to: 0061e7f0 (DATA)
// 004707d7: SHL EAX,0xd
// 004707da: PUSH EAX
// 004707db: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004707e0: ADD ESP,0xc
// 004707e3: PUSH EBX
// 004707e4: PUSH 0x61e804
//   XREF to: 0061e804 (DATA)
// 004707e9: MOV dword ptr [ESI + 0x4],EAX
// 004707ec: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x10c] (DATA)
// 004707f0: PUSH EAX
// 004707f1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004707f6: ADD ESP,0xc
// 004707f9: PUSH 0x61e80b
//   XREF to: 0061e80b (DATA)
// 004707fe: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x10c] (DATA)
// 00470802: PUSH EAX
// 00470803: PUSH EBX
// 00470804: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00470809: ADD ESP,0xc
// 0047080c: MOV EDI,EAX
// 0047080e: TEST EAX,EAX
// 00470810: JZ 0x0047089b
//   XREF to: 0047089b (CONDITIONAL_JUMP)
// 00470816: PUSH EDI
//   Label: LAB_00470816
// 00470817: MOV EDX,dword ptr [ESI]
// 00470819: PUSH EDX
// 0047081a: PUSH 0x2000
// 0047081f: MOV ECX,dword ptr [ESI + 0x4]
// 00470822: PUSH ECX
// 00470823: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00470828: ADD ESP,0x10
// 0047082b: PUSH 0x168
// 00470830: PUSH 0x61e83a
//   XREF to: 0061e83a (DATA)
// 00470835: PUSH EDI
// 00470836: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0047083b: ADD ESP,0xc
// 0047083e: XOR ECX,ECX
// 00470840: POP EDI
// 00470841: MOV EAX,dword ptr [ESI]
//   Label: LAB_00470841
// 00470843: SHL EAX,0xd
// 00470846: CMP ECX,EAX
// 00470848: JGE 0x004708c3
//   XREF to: 004708c3 (CONDITIONAL_JUMP)
// 0047084a: MOV EBX,dword ptr [ESI + 0x4]
// 0047084d: XOR EDX,EDX
// 0047084f: MOV DL,byte ptr [ECX + EBX*0x1]
// 00470852: MOV EAX,EDX
// 00470854: SAR EDX,0x1f
// 00470857: SHL EDX,0x2
// 0047085a: SBB EAX,EDX
// 0047085c: SAR EAX,0x2
// 0047085f: MOV EDX,EAX
// 00470861: SAR EDX,0x1f
// 00470864: SUB EAX,EDX
// 00470866: SAR EAX,0x1
// 00470868: INC ECX
// 00470869: MOV byte ptr [ECX + EBX*0x1 + -0x1],AL
// 0047086d: JMP 0x00470841
//   XREF to: 00470841 (UNCONDITIONAL_JUMP)
// 0047086f: PUSH 0x61e78a
//   Label: LAB_0047086f
//   XREF to: 0061e78a (DATA)
// 00470874: MOV EBX,dword ptr [0x0066efcc]
//   XREF to: 020a4c08 (PARAM)
//   XREF to: 0066efcc (READ)
// 0047087a: PUSH EBX
//   XREF to: 020a4c08 (DATA)
// 0047087b: CALL core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0
//   XREF to: 004701a0 (UNCONDITIONAL_CALL)
// 00470880: ADD ESP,0x8
// 00470883: PUSH 0x61e796
//   XREF to: 0061e796 (DATA)
// 00470888: PUSH EAX
// 00470889: CALL core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
//   XREF to: 004702f0 (UNCONDITIONAL_CALL)
// 0047088e: ADD ESP,0x8
// 00470891: ADD ESP,0x100
// 00470897: POP EBP
// 00470898: POP ESI
// 00470899: POP EBX
// 0047089a: RET
// 0047089b: PUSH EBX
//   Label: LAB_0047089b
// 0047089c: MOV EBP,0x61e80e
//   XREF to: 0061e80e (DATA)
// 004708a1: MOV EAX,0x166
// 004708a6: PUSH 0x61e822
//   XREF to: 0061e822 (DATA)
// 004708ab: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004708b1: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004708b6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004708bb: ADD ESP,0x8
// 004708be: JMP 0x00470816
//   XREF to: 00470816 (UNCONDITIONAL_JUMP)
// 004708c3: MOV dword ptr [ESI + 0x8],0x0
//   Label: LAB_004708c3
// 004708ca: ADD ESP,0x100
// 004708d0: POP EBP
// 004708d1: POP ESI
// 004708d2: POP EBX
// 004708d3: RET
