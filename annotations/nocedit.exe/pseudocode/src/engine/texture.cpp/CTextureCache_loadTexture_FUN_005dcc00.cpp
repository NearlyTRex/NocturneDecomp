// Name: engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00
// Address: 005dcc00
// Address Range: [[005dcc00, 005dd172]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache * cache, char * texture_name)
// Cross-references:
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 (005dd800) at 005dd84c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_art_00655184
//   TerminatedCString s_CTextureCache_load_Bad_t_00655188
//   TerminatedCString s_engine_texture_cpp_006551b9
//   TerminatedCString s_engine_texture_cpp_006551cf
//   TerminatedCString s_engine_texture_cpp_006551e5
//   TerminatedCString s_CTextureCache_load_Out_o_006551fb
//   TerminatedCString s_engine_texture_cpp_0065524e
//   TerminatedCString s_CTextureCache_load_Can_t_00655264
//   TerminatedCString s_act_0065528f
//   TerminatedCString s_rb_00655294
//   TerminatedCString s_art_00655297
//   TerminatedCString s_engine_texture_cpp_0065529b
//   TerminatedCString s_engine_texture_cpp_006552b1
//   TerminatedCString s_engine_texture_cpp_006552c7
//   TerminatedCString s_engine_texture_cpp_006552dd
//   TerminatedCString s_engine_texture_cpp_006552f3
//   TerminatedCString s_CTextureCache_load_Out_o_00655309
//   TerminatedCString s_raw_0065535c
//   TerminatedCString s_rb_00655361
//   TerminatedCString s_art_00655364
//   TerminatedCString s_engine_texture_cpp_00655368
//   TerminatedCString s_opa_0065537e
//   TerminatedCString s_rb_00655383
//   TerminatedCString s_art_00655386
//   TerminatedCString s_engine_texture_cpp_0065538a
//   TerminatedCString s_engine_texture_cpp_006553a0
//   TerminatedCString s_engine_texture_cpp_006553b6
//   TerminatedCString s_engine_texture_cpp_006553cc
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f4c
//   undefined4 CHAR_ARRAY_02d01f4d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl
engine_texture_cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache *cache,char *texture_name)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  FILE *pFVar4;
  void *pvVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  SIZE_T unaff_EBP;
  char *pcVar7;
  char *pcVar8;
  char (*pacVar9) [64];
  char *pcVar10;
  byte *pbVar11;
  byte bVar12;
  undefined4 in_stack_0000000c;
  char *in_stack_00000014;
  char *in_stack_00000024;
  char *in_stack_00000034;
  
  bVar12 = 0;
  uVar2 = engine_dosio_c_getFileSize_FUN_00481880("art",texture_name);
  if (uVar2 < 0x4000) {
    if (0x3ff < uVar2) {
      if (uVar2 < 0x401) {
        unaff_EBP = 0x20;
        goto LAB_005dcc85;
      }
      if (uVar2 == 0x1000) {
        unaff_EBP = 0x40;
        goto LAB_005dcc85;
      }
    }
  }
  else {
    if (uVar2 < 0x4001) {
      unaff_EBP = 0x80;
      goto LAB_005dcc85;
    }
    if (uVar2 < 0x40000) {
      if (uVar2 == 0x10000) {
        unaff_EBP = 0x100;
        goto LAB_005dcc85;
      }
    }
    else {
      if (uVar2 < 0x40001) {
        unaff_EBP = 0x200;
        goto LAB_005dcc85;
      }
      if (uVar2 == 0x100000) {
        unaff_EBP = 0x400;
        goto LAB_005dcc85;
      }
    }
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xfffffef0,"CTextureCache::load - Bad texture length : %s,%d",in_stack_0000000c,uVar2);
  g_CurrentLineNumber = 0x101;
  g_CurrentFilename = "..\\engine\\texture.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffef4);
LAB_005dcc85:
  if (cache->texture_palette_ptrs[cache->current_texture_count] == (byte *)0x0) {
    pbVar3 = (byte *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                               (0x300,"..\\engine\\texture.cpp",0x107);
    cache->texture_palette_ptrs[cache->current_texture_count] = pbVar3;
    if (cache->texture_palette_ptrs[cache->current_texture_count] == (byte *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 0x109;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM");
    }
  }
  pcVar8 = &stack0xfffffef8;
  do {
    cVar1 = *in_stack_00000014;
    *pcVar8 = cVar1;
    pcVar10 = &stack0xfffffef8;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000014[1];
    in_stack_00000014 = in_stack_00000014 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar10 = &stack0xfffffef8;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar10;
    if (*pcVar10 == '.') goto LAB_005dcd2c;
    if (*pcVar10 == '\0') break;
    pcVar8 = pcVar10 + 1;
    if (*pcVar8 == '.') goto LAB_005dcd2c;
    pcVar10 = pcVar10 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_005dcd2c:
  if (pcVar8 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\texture.cpp";
    g_CurrentLineNumber = 0x111;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Can't find extension");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar8,".act");
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xfffffefc,"rb");
  if (pFVar4 == (FILE *)0x0) {
    pbVar3 = (byte *)g_SourcePaletteData;
    pbVar11 = cache->texture_palette_ptrs[cache->current_texture_count];
    for (iVar6 = 0xc0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + (uint)bVar12 * -8 + 4;
      pbVar11 = pbVar11 + (uint)bVar12 * -8 + 4;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pbVar11 = *pbVar3;
      pbVar3 = pbVar3 + (uint)bVar12 * -2 + 1;
      pbVar11 = pbVar11 + (uint)bVar12 * -2 + 1;
    }
  }
  else {
    crt_stdio_c_fread_FUN_005fd990
              (cache->texture_palette_ptrs[cache->current_texture_count],0x100,3,pFVar4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\engine\\texture.cpp",0x117);
  }
  pacVar9 = cache->texture_names + cache->current_texture_count;
  pcVar8 = in_stack_00000024;
  do {
    cVar1 = *pcVar8;
    (*pacVar9)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    (*pacVar9)[1] = cVar1;
    pacVar9 = (char (*) [64])(*pacVar9 + 2);
  } while (cVar1 != '\0');
  if (unaff_EBP != cache->texture_dimensions[cache->current_texture_count]) {
    if (cache->texture_data_ptrs[cache->current_texture_count] != (void *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (cache->texture_data_ptrs[cache->current_texture_count],
                 "..\\engine\\texture.cpp",0x124);
      if (cache->texture_opacity_ptrs[cache->current_texture_count] != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (cache->texture_opacity_ptrs[cache->current_texture_count],
                   "..\\engine\\texture.cpp",0x126);
        cache->texture_opacity_ptrs[cache->current_texture_count] = (void *)0x0;
      }
    }
    pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       ((int)texture_name,"..\\engine\\texture.cpp",0x12a);
    cache->texture_data_ptrs[cache->current_texture_count] = pvVar5;
    if (cache->texture_data_ptrs[cache->current_texture_count] == (void *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 300;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM");
    }
  }
  pcVar10 = &stack0xffffff08;
  pcVar8 = in_stack_00000024;
  do {
    cVar1 = *pcVar8;
    *pcVar10 = cVar1;
    pcVar7 = &stack0xffffff08;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
    pcVar7 = &stack0xffffff08;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar7;
    if (*pcVar7 == '.') goto LAB_005dceea;
    if (*pcVar7 == '\0') break;
    pcVar8 = pcVar7 + 1;
    if (*pcVar8 == '.') goto LAB_005dceea;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_005dceea:
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar8,".raw");
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffff0c,"rb");
  if (pFVar4 == (FILE *)0x0) {
    crt_memory_c_memset_FUN_005fde40
              (cache->texture_data_ptrs[cache->current_texture_count],0,unaff_EBP * unaff_EBP);
  }
  else {
    crt_stdio_c_fread_FUN_005fd990
              (cache->texture_data_ptrs[cache->current_texture_count],unaff_EBP,unaff_EBP,pFVar4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\engine\\texture.cpp",0x13a);
  }
  pcVar8 = &stack0xffffff18;
  do {
    cVar1 = *in_stack_00000034;
    *pcVar8 = cVar1;
    pcVar10 = &stack0xffffff18;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000034[1];
    in_stack_00000034 = in_stack_00000034 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar10 = &stack0xffffff18;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar10;
    if (*pcVar10 == '.') goto LAB_005dcf75;
    if (*pcVar10 == '\0') break;
    pcVar8 = pcVar10 + 1;
    if (*pcVar8 == '.') goto LAB_005dcf75;
    pcVar10 = pcVar10 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_005dcf75:
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar8,".opa");
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffff1c,"rb");
  if (pFVar4 == (FILE *)0x0) {
    if (cache->texture_opacity_ptrs[cache->current_texture_count] != (void *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (cache->texture_opacity_ptrs[cache->current_texture_count],
                 "..\\engine\\texture.cpp",0x14e);
      cache->texture_opacity_ptrs[cache->current_texture_count] = (void *)0x0;
    }
  }
  else {
    if (unaff_EBP != cache->texture_dimensions[cache->current_texture_count]) {
      if (cache->texture_opacity_ptrs[cache->current_texture_count] != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (cache->texture_opacity_ptrs[cache->current_texture_count],
                   "..\\engine\\texture.cpp",0x146);
      }
      pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                         ((int)in_stack_00000024,"..\\engine\\texture.cpp",0x148);
      cache->texture_opacity_ptrs[cache->current_texture_count] = pvVar5;
    }
    crt_stdio_c_fread_FUN_005fd990
              (cache->texture_opacity_ptrs[cache->current_texture_count],unaff_EBP,unaff_EBP,pFVar4)
    ;
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\engine\\texture.cpp",0x14b);
  }
  cache->texture_dimensions[cache->current_texture_count] = unaff_EBP;
  iVar6 = cache->current_texture_count + 1;
  cache->current_texture_count = iVar6;
  if (cache->max_texture_count <= iVar6) {
    cache->wrap_indicator = 1;
    cache->current_texture_count = 0;
    return;
  }
  return;
}


// Assembly code:
// 005dcc00: PUSH EBX
//   Label: engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00
// 005dcc01: PUSH ESI
// 005dcc02: PUSH EDI
// 005dcc03: PUSH EBP
// 005dcc04: SUB ESP,0x104
// 005dcc0a: MOV EBX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005dcc11: MOV EDX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 005dcc18: PUSH EDX
// 005dcc19: PUSH 0x655184
//   XREF to: 00655184 (DATA)
// 005dcc1e: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005dcc23: ADD ESP,0x8
// 005dcc26: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005dcc2d: CMP EAX,0x4000
// 005dcc32: JNC 0x005dd08f
//   XREF to: 005dd08f (CONDITIONAL_JUMP)
// 005dcc38: CMP EAX,0x400
// 005dcc3d: JNC 0x005dd0b2
//   XREF to: 005dd0b2 (CONDITIONAL_JUMP)
// 005dcc43: MOV ECX,dword ptr [ESP + 0x100]
//   Label: LAB_005dcc43
//   XREF to: Stack[-0x14] (READ)
// 005dcc4a: PUSH ECX
// 005dcc4b: MOV ESI,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 005dcc52: PUSH ESI
// 005dcc53: PUSH 0x655188
//   XREF to: 00655188 (DATA)
// 005dcc58: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x114] (DATA)
// 005dcc5c: PUSH EAX
// 005dcc5d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005dcc62: MOV EAX,0x101
// 005dcc67: ADD ESP,0x10
// 005dcc6a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005dcc6f: MOV EAX,ESP
// 005dcc71: MOV EDI,0x6551b9
//   XREF to: 006551b9 (DATA)
// 005dcc76: PUSH EAX
// 005dcc77: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005dcc7d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dcc82: ADD ESP,0x4
// 005dcc85: MOV EAX,dword ptr [EBX + 0x14008]
//   Label: LAB_005dcc85
// 005dcc8b: CMP dword ptr [EBX + EAX*0x4 + 0x13008],0x0
// 005dcc93: JNZ 0x005dcced
//   XREF to: 005dcced (CONDITIONAL_JUMP)
// 005dcc95: PUSH 0x107
// 005dcc9a: PUSH 0x6551cf
//   XREF to: 006551cf (DATA)
// 005dcc9f: PUSH 0x300
// 005dcca4: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005dcca9: MOV ESI,dword ptr [EBX + 0x14008]
// 005dccaf: MOV dword ptr [EBX + ESI*0x4 + 0x13008],EAX
// 005dccb6: MOV EAX,dword ptr [EBX + 0x14008]
// 005dccbc: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x13008]
// 005dccc3: ADD ESP,0xc
// 005dccc6: TEST ECX,ECX
// 005dccc8: JNZ 0x005dcced
//   XREF to: 005dcced (CONDITIONAL_JUMP)
// 005dccca: MOV ESI,0x6551e5
//   XREF to: 006551e5 (DATA)
// 005dcccf: MOV EDI,0x109
// 005dccd4: PUSH 0x6551fb
//   XREF to: 006551fb (DATA)
// 005dccd9: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005dccdf: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005dcce5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dccea: ADD ESP,0x4
// 005dcced: MOV ESI,dword ptr [ESP + 0x11c]
//   Label: LAB_005dcced
//   XREF to: Stack[0x8] (READ)
// 005dccf4: MOV EDI,ESP
// 005dccf6: MOV DL,0x2e
// 005dccf8: PUSH EDI
// 005dccf9: MOV AL,byte ptr [ESI]
//   Label: LAB_005dccf9
// 005dccfb: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x114] (DATA)
// 005dccfd: CMP AL,0x0
// 005dccff: JZ 0x005dcd11
//   XREF to: 005dcd11 (CONDITIONAL_JUMP)
// 005dcd01: MOV AL,byte ptr [ESI + 0x1]
// 005dcd04: ADD ESI,0x2
// 005dcd07: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x113] (WRITE)
// 005dcd0a: ADD EDI,0x2
// 005dcd0d: CMP AL,0x0
// 005dcd0f: JNZ 0x005dccf9
//   XREF to: 005dccf9 (CONDITIONAL_JUMP)
// 005dcd11: POP EDI
//   Label: LAB_005dcd11
// 005dcd12: MOV ESI,ESP
// 005dcd14: MOV AL,byte ptr [ESI]
//   Label: LAB_005dcd14
//   XREF to: Stack[-0x114] (DATA)
// 005dcd16: CMP AL,DL
// 005dcd18: JZ 0x005dcd2c
//   XREF to: 005dcd2c (CONDITIONAL_JUMP)
// 005dcd1a: CMP AL,0x0
// 005dcd1c: JZ 0x005dcd2a
//   XREF to: 005dcd2a (CONDITIONAL_JUMP)
// 005dcd1e: INC ESI
// 005dcd1f: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x113] (DATA)
// 005dcd21: CMP AL,DL
// 005dcd23: JZ 0x005dcd2c
//   XREF to: 005dcd2c (CONDITIONAL_JUMP)
// 005dcd25: INC ESI
// 005dcd26: CMP AL,0x0
// 005dcd28: JNZ 0x005dcd14
//   XREF to: 005dcd14 (CONDITIONAL_JUMP)
// 005dcd2a: SUB ESI,ESI
//   Label: LAB_005dcd2a
// 005dcd2c: MOV EDI,ESI
//   Label: LAB_005dcd2c
// 005dcd2e: TEST ESI,ESI
// 005dcd30: JNZ 0x005dcd54
//   XREF to: 005dcd54 (CONDITIONAL_JUMP)
// 005dcd32: MOV EAX,0x65524e
//   XREF to: 0065524e (PARAM)
// 005dcd37: MOV EDX,0x111
// 005dcd3c: PUSH 0x655264
//   XREF to: 00655264 (DATA)
// 005dcd41: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005dcd46: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005dcd4c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dcd51: ADD ESP,0x4
// 005dcd54: PUSH 0x65528f
//   Label: LAB_005dcd54
//   XREF to: 0065528f (DATA)
// 005dcd59: PUSH EDI
// 005dcd5a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005dcd5f: ADD ESP,0x8
// 005dcd62: PUSH 0x655294
//   XREF to: 00655294 (DATA)
// 005dcd67: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 005dcd6b: PUSH EAX
// 005dcd6c: PUSH 0x655297
//   XREF to: 00655297 (DATA)
// 005dcd71: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005dcd76: MOV ESI,EAX
// 005dcd78: ADD ESP,0xc
// 005dcd7b: TEST EAX,EAX
// 005dcd7d: JZ 0x005dd0c0
//   XREF to: 005dd0c0 (CONDITIONAL_JUMP)
// 005dcd83: PUSH EAX
// 005dcd84: PUSH 0x3
// 005dcd86: MOV EAX,dword ptr [EBX + 0x14008]
// 005dcd8c: PUSH 0x100
// 005dcd91: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x13008]
// 005dcd98: PUSH ECX
// 005dcd99: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005dcd9e: ADD ESP,0x10
// 005dcda1: PUSH 0x117
// 005dcda6: PUSH 0x65529b
//   XREF to: 0065529b (DATA)
// 005dcdab: PUSH ESI
// 005dcdac: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005dcdb1: ADD ESP,0xc
// 005dcdb4: MOV EDI,dword ptr [EBX + 0x14008]
//   Label: LAB_005dcdb4
// 005dcdba: LEA EAX,[EBX + 0x3008]
// 005dcdc0: SHL EDI,0x6
// 005dcdc3: MOV ESI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 005dcdca: ADD EDI,EAX
// 005dcdcc: PUSH EDI
// 005dcdcd: MOV AL,byte ptr [ESI]
//   Label: LAB_005dcdcd
// 005dcdcf: MOV byte ptr [EDI],AL
// 005dcdd1: CMP AL,0x0
// 005dcdd3: JZ 0x005dcde5
//   XREF to: 005dcde5 (CONDITIONAL_JUMP)
// 005dcdd5: MOV AL,byte ptr [ESI + 0x1]
// 005dcdd8: ADD ESI,0x2
// 005dcddb: MOV byte ptr [EDI + 0x1],AL
// 005dcdde: ADD EDI,0x2
// 005dcde1: CMP AL,0x0
// 005dcde3: JNZ 0x005dcdcd
//   XREF to: 005dcdcd (CONDITIONAL_JUMP)
// 005dcde5: POP EDI
//   Label: LAB_005dcde5
// 005dcde6: MOV EAX,dword ptr [EBX + 0x14008]
// 005dcdec: SHL EAX,0x2
// 005dcdef: ADD EAX,EBX
// 005dcdf1: CMP EBP,dword ptr [EAX + 0x8]
// 005dcdf4: JZ 0x005dceab
//   XREF to: 005dceab (CONDITIONAL_JUMP)
// 005dcdfa: MOV EDI,dword ptr [EAX + 0x1008]
// 005dce00: TEST EDI,EDI
// 005dce02: JZ 0x005dce50
//   XREF to: 005dce50 (CONDITIONAL_JUMP)
// 005dce04: PUSH 0x124
// 005dce09: PUSH 0x6552b1
//   XREF to: 006552b1 (DATA)
// 005dce0e: PUSH EDI
// 005dce0f: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005dce14: MOV EAX,dword ptr [EBX + 0x14008]
// 005dce1a: SHL EAX,0x2
// 005dce1d: ADD EAX,EBX
// 005dce1f: MOV ECX,dword ptr [EAX + 0x2008]
// 005dce25: ADD ESP,0xc
// 005dce28: TEST ECX,ECX
// 005dce2a: JZ 0x005dce50
//   XREF to: 005dce50 (CONDITIONAL_JUMP)
// 005dce2c: PUSH 0x126
// 005dce31: PUSH 0x6552c7
//   XREF to: 006552c7 (DATA)
// 005dce36: PUSH ECX
// 005dce37: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005dce3c: MOV EAX,dword ptr [EBX + 0x14008]
// 005dce42: ADD ESP,0xc
// 005dce45: MOV dword ptr [EBX + EAX*0x4 + 0x2008],0x0
// 005dce50: PUSH 0x12a
//   Label: LAB_005dce50
// 005dce55: PUSH 0x6552dd
//   XREF to: 006552dd (DATA)
// 005dce5a: MOV EDI,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 005dce61: PUSH EDI
// 005dce62: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005dce67: MOV ESI,dword ptr [EBX + 0x14008]
// 005dce6d: MOV dword ptr [EBX + ESI*0x4 + 0x1008],EAX
// 005dce74: MOV EAX,dword ptr [EBX + 0x14008]
// 005dce7a: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x1008]
// 005dce81: ADD ESP,0xc
// 005dce84: TEST EDX,EDX
// 005dce86: JNZ 0x005dceab
//   XREF to: 005dceab (CONDITIONAL_JUMP)
// 005dce88: MOV ECX,0x6552f3
//   XREF to: 006552f3 (PARAM)
// 005dce8d: MOV ESI,0x12c
// 005dce92: PUSH 0x655309
//   XREF to: 00655309 (DATA)
// 005dce97: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005dce9d: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005dcea3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dcea8: ADD ESP,0x4
// 005dceab: MOV ESI,dword ptr [ESP + 0x11c]
//   Label: LAB_005dceab
//   XREF to: Stack[0x8] (READ)
// 005dceb2: MOV EDI,ESP
// 005dceb4: MOV DL,0x2e
// 005dceb6: PUSH EDI
// 005dceb7: MOV AL,byte ptr [ESI]
//   Label: LAB_005dceb7
// 005dceb9: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x114] (DATA)
// 005dcebb: CMP AL,0x0
// 005dcebd: JZ 0x005dcecf
//   XREF to: 005dcecf (CONDITIONAL_JUMP)
// 005dcebf: MOV AL,byte ptr [ESI + 0x1]
// 005dcec2: ADD ESI,0x2
// 005dcec5: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x113] (WRITE)
// 005dcec8: ADD EDI,0x2
// 005dcecb: CMP AL,0x0
// 005dcecd: JNZ 0x005dceb7
//   XREF to: 005dceb7 (CONDITIONAL_JUMP)
// 005dcecf: POP EDI
//   Label: LAB_005dcecf
// 005dced0: MOV ESI,ESP
// 005dced2: MOV AL,byte ptr [ESI]
//   Label: LAB_005dced2
//   XREF to: Stack[-0x114] (DATA)
// 005dced4: CMP AL,DL
// 005dced6: JZ 0x005dceea
//   XREF to: 005dceea (CONDITIONAL_JUMP)
// 005dced8: CMP AL,0x0
// 005dceda: JZ 0x005dcee8
//   XREF to: 005dcee8 (CONDITIONAL_JUMP)
// 005dcedc: INC ESI
// 005dcedd: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x113] (DATA)
// 005dcedf: CMP AL,DL
// 005dcee1: JZ 0x005dceea
//   XREF to: 005dceea (CONDITIONAL_JUMP)
// 005dcee3: INC ESI
// 005dcee4: CMP AL,0x0
// 005dcee6: JNZ 0x005dced2
//   XREF to: 005dced2 (CONDITIONAL_JUMP)
// 005dcee8: SUB ESI,ESI
//   Label: LAB_005dcee8
// 005dceea: PUSH 0x65535c
//   Label: LAB_005dceea
//   XREF to: 0065535c (DATA)
// 005dceef: PUSH ESI
// 005dcef0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005dcef5: ADD ESP,0x8
// 005dcef8: PUSH 0x655361
//   XREF to: 00655361 (DATA)
// 005dcefd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 005dcf01: PUSH EAX
// 005dcf02: PUSH 0x655364
//   XREF to: 00655364 (DATA)
// 005dcf07: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005dcf0c: MOV ESI,EAX
// 005dcf0e: ADD ESP,0xc
// 005dcf11: TEST EAX,EAX
// 005dcf13: JNZ 0x005dd0ec
//   XREF to: 005dd0ec (CONDITIONAL_JUMP)
// 005dcf19: MOV EAX,EBP
// 005dcf1b: IMUL EAX,EBP
// 005dcf1e: PUSH EAX
// 005dcf1f: MOV EAX,dword ptr [EBX + 0x14008]
// 005dcf25: PUSH ESI
// 005dcf26: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x1008]
// 005dcf2d: PUSH EDX
// 005dcf2e: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005dcf33: ADD ESP,0xc
//   Label: LAB_005dcf33
// 005dcf36: MOV ESI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 005dcf3d: MOV EDI,ESP
// 005dcf3f: MOV DL,0x2e
// 005dcf41: PUSH EDI
// 005dcf42: MOV AL,byte ptr [ESI]
//   Label: LAB_005dcf42
// 005dcf44: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x114] (DATA)
// 005dcf46: CMP AL,0x0
// 005dcf48: JZ 0x005dcf5a
//   XREF to: 005dcf5a (CONDITIONAL_JUMP)
// 005dcf4a: MOV AL,byte ptr [ESI + 0x1]
// 005dcf4d: ADD ESI,0x2
// 005dcf50: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x113] (WRITE)
// 005dcf53: ADD EDI,0x2
// 005dcf56: CMP AL,0x0
// 005dcf58: JNZ 0x005dcf42
//   XREF to: 005dcf42 (CONDITIONAL_JUMP)
// 005dcf5a: POP EDI
//   Label: LAB_005dcf5a
// 005dcf5b: MOV ESI,ESP
// 005dcf5d: MOV AL,byte ptr [ESI]
//   Label: LAB_005dcf5d
//   XREF to: Stack[-0x114] (DATA)
// 005dcf5f: CMP AL,DL
// 005dcf61: JZ 0x005dcf75
//   XREF to: 005dcf75 (CONDITIONAL_JUMP)
// 005dcf63: CMP AL,0x0
// 005dcf65: JZ 0x005dcf73
//   XREF to: 005dcf73 (CONDITIONAL_JUMP)
// 005dcf67: INC ESI
// 005dcf68: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x113] (DATA)
// 005dcf6a: CMP AL,DL
// 005dcf6c: JZ 0x005dcf75
//   XREF to: 005dcf75 (CONDITIONAL_JUMP)
// 005dcf6e: INC ESI
// 005dcf6f: CMP AL,0x0
// 005dcf71: JNZ 0x005dcf5d
//   XREF to: 005dcf5d (CONDITIONAL_JUMP)
// 005dcf73: SUB ESI,ESI
//   Label: LAB_005dcf73
// 005dcf75: PUSH 0x65537e
//   Label: LAB_005dcf75
//   XREF to: 0065537e (DATA)
// 005dcf7a: PUSH ESI
// 005dcf7b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005dcf80: ADD ESP,0x8
// 005dcf83: PUSH 0x655383
//   XREF to: 00655383 (DATA)
// 005dcf88: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 005dcf8c: PUSH EAX
// 005dcf8d: PUSH 0x655386
//   XREF to: 00655386 (DATA)
// 005dcf92: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005dcf97: ADD ESP,0xc
// 005dcf9a: MOV ESI,EAX
// 005dcf9c: TEST EAX,EAX
// 005dcf9e: JZ 0x005dd11a
//   XREF to: 005dd11a (CONDITIONAL_JUMP)
// 005dcfa4: MOV EAX,dword ptr [EBX + 0x14008]
// 005dcfaa: SHL EAX,0x2
// 005dcfad: ADD EAX,EBX
// 005dcfaf: CMP EBP,dword ptr [EAX + 0x8]
// 005dcfb2: JZ 0x005dcff8
//   XREF to: 005dcff8 (CONDITIONAL_JUMP)
// 005dcfb4: MOV EDX,dword ptr [EAX + 0x2008]
// 005dcfba: TEST EDX,EDX
// 005dcfbc: JZ 0x005dcfd1
//   XREF to: 005dcfd1 (CONDITIONAL_JUMP)
// 005dcfbe: PUSH 0x146
// 005dcfc3: PUSH 0x65538a
//   XREF to: 0065538a (DATA)
// 005dcfc8: PUSH EDX
// 005dcfc9: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005dcfce: ADD ESP,0xc
// 005dcfd1: PUSH 0x148
//   Label: LAB_005dcfd1
// 005dcfd6: PUSH 0x6553a0
//   XREF to: 006553a0 (DATA)
// 005dcfdb: MOV EDI,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 005dcfe2: PUSH EDI
// 005dcfe3: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005dcfe8: MOV EDI,dword ptr [EBX + 0x14008]
// 005dcfee: ADD ESP,0xc
// 005dcff1: MOV dword ptr [EBX + EDI*0x4 + 0x2008],EAX
// 005dcff8: PUSH ESI
//   Label: LAB_005dcff8
// 005dcff9: PUSH EBP
// 005dcffa: MOV EAX,dword ptr [EBX + 0x14008]
// 005dd000: PUSH EBP
// 005dd001: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2008]
// 005dd008: PUSH EDX
// 005dd009: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005dd00e: ADD ESP,0x10
// 005dd011: PUSH 0x14b
// 005dd016: PUSH 0x6553b6
//   XREF to: 006553b6 (DATA)
// 005dd01b: PUSH ESI
// 005dd01c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005dd021: ADD ESP,0xc
// 005dd024: MOV EAX,dword ptr [EBX + 0x14008]
//   Label: LAB_005dd024
// 005dd02a: MOV dword ptr [EBX + EAX*0x4 + 0x8],EBP
// 005dd02e: MOV EAX,dword ptr [EBX + 0x14008]
// 005dd034: LEA ESI,[EAX + 0x1]
// 005dd037: MOV ECX,dword ptr [EBX + 0x4]
// 005dd03a: MOV dword ptr [EBX + 0x14008],ESI
// 005dd040: CMP ESI,ECX
// 005dd042: JGE 0x005dd158
//   XREF to: 005dd158 (CONDITIONAL_JUMP)
// 005dd048: ADD ESP,0x104
// 005dd04e: POP EBP
// 005dd04f: POP EDI
// 005dd050: POP ESI
// 005dd051: POP EBX
// 005dd052: RET
// 005dd053: MOV EBP,0x20
//   Label: LAB_005dd053
// 005dd058: JMP 0x005dcc85
//   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
// 005dd05d: MOV EBP,0x40
//   Label: LAB_005dd05d
// 005dd062: JMP 0x005dcc85
//   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
// 005dd067: MOV EBP,0x80
//   Label: LAB_005dd067
// 005dd06c: JMP 0x005dcc85
//   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
// 005dd071: MOV EBP,0x100
//   Label: LAB_005dd071
// 005dd076: JMP 0x005dcc85
//   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
// 005dd07b: MOV EBP,0x200
//   Label: LAB_005dd07b
// 005dd080: JMP 0x005dcc85
//   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
// 005dd085: MOV EBP,0x400
//   Label: LAB_005dd085
// 005dd08a: JMP 0x005dcc85
//   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
// 005dd08f: JBE 0x005dd067
//   Label: LAB_005dd08f
//   XREF to: 005dd067 (CONDITIONAL_JUMP)
// 005dd091: CMP EAX,0x40000
// 005dd096: JNC 0x005dd0a4
//   XREF to: 005dd0a4 (CONDITIONAL_JUMP)
// 005dd098: CMP EAX,0x10000
// 005dd09d: JZ 0x005dd071
//   XREF to: 005dd071 (CONDITIONAL_JUMP)
// 005dd09f: JMP 0x005dcc43
//   XREF to: 005dcc43 (UNCONDITIONAL_JUMP)
// 005dd0a4: JBE 0x005dd07b
//   Label: LAB_005dd0a4
//   XREF to: 005dd07b (CONDITIONAL_JUMP)
// 005dd0a6: CMP EAX,0x100000
// 005dd0ab: JZ 0x005dd085
//   XREF to: 005dd085 (CONDITIONAL_JUMP)
// 005dd0ad: JMP 0x005dcc43
//   XREF to: 005dcc43 (UNCONDITIONAL_JUMP)
// 005dd0b2: JBE 0x005dd053
//   Label: LAB_005dd0b2
//   XREF to: 005dd053 (CONDITIONAL_JUMP)
// 005dd0b4: CMP EAX,0x1000
// 005dd0b9: JZ 0x005dd05d
//   XREF to: 005dd05d (CONDITIONAL_JUMP)
// 005dd0bb: JMP 0x005dcc43
//   XREF to: 005dcc43 (UNCONDITIONAL_JUMP)
// 005dd0c0: MOV EAX,dword ptr [EBX + 0x14008]
//   Label: LAB_005dd0c0
// 005dd0c6: MOV ECX,0x300
// 005dd0cb: MOV ESI,0x2d01f48
//   XREF to: 02d01f48 (DATA)
// 005dd0d0: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x13008]
// 005dd0d7: PUSH EDI
// 005dd0d8: MOV EAX,ECX
// 005dd0da: SHR ECX,0x2
// 005dd0dd: MOVSD.REP ES:EDI,ESI
//   XREF to: 02d01f48 (READ)
//   XREF to: 02d01f4c (READ)
// 005dd0df: MOV CL,AL
// 005dd0e1: AND CL,0x3
// 005dd0e4: MOVSB.REP ES:EDI,ESI
//   XREF to: 02d01f48 (READ)
//   XREF to: 02d01f4c (READ)
//   XREF to: 02d01f4d (READ)
// 005dd0e6: POP EDI
// 005dd0e7: JMP 0x005dcdb4
//   XREF to: 005dcdb4 (UNCONDITIONAL_JUMP)
// 005dd0ec: PUSH EAX
//   Label: LAB_005dd0ec
// 005dd0ed: PUSH EBP
// 005dd0ee: MOV EAX,dword ptr [EBX + 0x14008]
// 005dd0f4: PUSH EBP
// 005dd0f5: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1008]
// 005dd0fc: PUSH EDI
// 005dd0fd: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005dd102: ADD ESP,0x10
// 005dd105: PUSH 0x13a
// 005dd10a: PUSH 0x655368
//   XREF to: 00655368 (DATA)
// 005dd10f: PUSH ESI
// 005dd110: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005dd115: JMP 0x005dcf33
//   XREF to: 005dcf33 (UNCONDITIONAL_JUMP)
// 005dd11a: MOV EAX,dword ptr [EBX + 0x14008]
//   Label: LAB_005dd11a
// 005dd120: SHL EAX,0x2
// 005dd123: ADD EAX,EBX
// 005dd125: MOV ECX,dword ptr [EAX + 0x2008]
// 005dd12b: TEST ECX,ECX
// 005dd12d: JZ 0x005dd024
//   XREF to: 005dd024 (CONDITIONAL_JUMP)
// 005dd133: PUSH 0x14e
// 005dd138: PUSH 0x6553cc
//   XREF to: 006553cc (DATA)
// 005dd13d: PUSH ECX
// 005dd13e: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005dd143: MOV EAX,dword ptr [EBX + 0x14008]
// 005dd149: ADD ESP,0xc
// 005dd14c: MOV dword ptr [EBX + EAX*0x4 + 0x2008],ESI
// 005dd153: JMP 0x005dd024
//   XREF to: 005dd024 (UNCONDITIONAL_JUMP)
// 005dd158: MOV dword ptr [EBX],0x1
//   Label: LAB_005dd158
// 005dd15e: MOV dword ptr [EBX + 0x14008],0x0
// 005dd168: ADD ESP,0x104
// 005dd16e: POP EBP
// 005dd16f: POP EDI
// 005dd170: POP ESI
// 005dd171: POP EBX
// 005dd172: RET
