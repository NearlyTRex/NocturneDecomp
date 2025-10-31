// Name: shape_design.c_loadTextureData_FUN_0046b060
// Address: 0046b060
// Address Range: [[0046b060, 0046b6d9]]
// Convention: __cdecl
// Signature: void shape_design.c_loadTextureData_FUN_0046b060(STextureLoadConfig * config_ptr, void * rgb_buffer, void * alpha_buffer, int atlas_width, int atlas_height)
// Cross-references:
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046d2ac [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_0061d29e
//   TerminatedCString s_art_0061d2a1
//   TerminatedCString s_shape_design_c_0061d2a5
//   TerminatedCString s_rb_0061d2b7
//   TerminatedCString s_shape_design_c_0061d2ba
//   TerminatedCString s_Unable_to_load_input_0061d2cc
//   TerminatedCString s_shape_design_c_0061d2e1
//   TerminatedCString s_shape_design_c_0061d2f3
//   TerminatedCString s_shape_design_c_0061d305
//   TerminatedCString s_Out_of_mem_0061d317
//   TerminatedCString s_Unable_to_read_file_s_0061d323
//   TerminatedCString s_shape_design_c_0061d33d
//   TerminatedCString s_shape_design_c_0061d34f
//   TerminatedCString s_shape_design_c_0061d361
//   double g_CoordinateRoundingOffset = 0.5
//   double g_TextureScalingFactor = 5.96046447753906E-8
//   TerminatedCString s_shape_design_c_0061d386
//   TerminatedCString s_shape_design_c_0061d398
//   int g_TextureManagerMode
//   int g_TextureAtlasDimension
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_design.c_readPixelRowFromFile_FUN_0046abf0
//   shape_design.c_sampleAndFilterPixel_FUN_0046ae20
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
shape_design_c_loadTextureData_FUN_0046b060
          (STextureLoadConfig *config_ptr,void *rgb_buffer,void *alpha_buffer,int atlas_width,
          int atlas_height)

{
  int iVar1;
  STextureLoadConfig *extraout_EDX;
  STextureLoadConfig *pSVar2;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  double dVar4;
  int in_stack_00000018;
  double coord_x1;
  byte *in_stack_fffffeac;
  byte *in_stack_fffffeb0;
  char local_148 [260];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  void *local_28;
  void *local_24;
  int local_20;
  FILE *local_1c;
  uint local_18;
  int local_14;
  
  if (g_TextureManagerMode == 0) {
    local_1c = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (config_ptr->field0_0x0,(char *)0x0,"rb","..\\shape\\design.c"
                          ,0x27a2);
  }
  else {
    local_1c = engine_dosio_c_getFile_FUN_00481a50
                         ("art",config_ptr->field0_0x0,"rb");
  }
  if (local_1c == (FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x27a4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to load input");
  }
  crt_stdio_c_fseek_FUN_005ffacc(local_1c,0x11,0);
  local_18 = crt_stdio_c_fgetc_FUN_005fe840(local_1c);
  local_20 = config_ptr->source_width * config_ptr->source_height * 3;
  local_28 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(local_20,"..\\shape\\design.c",0x27ad);
  local_24 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (config_ptr->source_width * config_ptr->source_height,
                        "..\\shape\\design.c",0x27ae);
  if ((local_28 == (void *)0x0) || (local_24 == (void *)0x0)) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x27af;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of mem!");
  }
  local_14 = config_ptr->source_width * 3;
  if ((local_18 & 0x20) == 0) {
    local_3c = config_ptr->source_height;
    while (local_3c = local_3c + -1, -1 < local_3c) {
      shape_design_c_readPixelRowFromFile_FUN_0046abf0
                (local_1c,(byte *)(local_3c * local_14 + (int)local_28),
                 (byte *)(local_3c * config_ptr->source_width + (int)local_24),
                 config_ptr->source_width,atlas_width);
    }
  }
  else {
    for (local_3c = 0; local_3c < config_ptr->source_height; local_3c = local_3c + 1) {
      shape_design_c_readPixelRowFromFile_FUN_0046abf0
                (local_1c,(byte *)(local_3c * local_14 + (int)local_28),
                 (byte *)(local_3c * config_ptr->source_width + (int)local_24),
                 config_ptr->source_width,atlas_width);
    }
  }
  if ((local_1c->_flag & 0x20) != 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_148,"Unable to read file (%s).");
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\shape\\design.c",0x27c2);
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x27c3;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_148);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\shape\\design.c",0x27c5);
  for (local_44 = 0;
      (iVar1 = config_ptr->source_width * config_ptr->source_height,
      iVar1 - local_44 != 0 && local_44 <= iVar1 && (*(char *)((int)local_24 + local_44) == '\0'));
      local_44 = local_44 + 1) {
  }
  iVar1 = config_ptr->source_width * config_ptr->source_height;
  pSVar2 = config_ptr;
  if (iVar1 - local_44 == 0 || iVar1 < local_44) {
    crt_memory_c_memset_FUN_005fde40
              (local_24,0xff,config_ptr->source_width * config_ptr->source_height);
    pSVar2 = extraout_EDX;
  }
  fVar3 = ((float10)g_TextureAtlasDimension * (float10)config_ptr->src_x2) / (float10)atlas_height +
          (float10)g_CoordinateRoundingOffset;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pSVar2,config_ptr));
  local_38 = (int)ROUND(fVar3);
  fVar3 = ((float10)g_TextureAtlasDimension * (float10)config_ptr->src_y2) /
          (float10)in_stack_00000018 + (float10)g_CoordinateRoundingOffset;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),config_ptr));
  local_34 = (int)ROUND(fVar3);
  config_ptr->scaled_dest_x = local_38;
  config_ptr->scaled_dest_y = local_34;
  fVar3 = ((float10)g_TextureAtlasDimension * (float10)config_ptr->src_x1) / (float10)atlas_height +
          (float10)g_CoordinateRoundingOffset;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(config_ptr,config_ptr));
  local_30 = (int)ROUND(fVar3);
  fVar3 = ((float10)g_TextureAtlasDimension * (float10)config_ptr->src_y1) /
          (float10)in_stack_00000018 + (float10)g_CoordinateRoundingOffset;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),config_ptr));
  local_2c = (int)ROUND(fVar3);
  if (g_TextureAtlasDimension + -1 < local_30) {
    local_30 = g_TextureAtlasDimension + -1;
  }
  if (g_TextureAtlasDimension + -1 < local_2c) {
    local_2c = g_TextureAtlasDimension + -1;
  }
  config_ptr->dest_x = local_30;
  config_ptr->dest_y = local_2c;
  for (local_3c = 0; local_3c < local_34; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < local_38; local_40 = local_40 + 1) {
      dVar4 = (double)config_ptr->source_height *
              ((double)config_ptr->atlas_y1 +
              ((double)(local_3c + 1) * (double)(config_ptr->atlas_y2 - config_ptr->atlas_y1)) /
              (double)local_34) * g_TextureScalingFactor;
      coord_x1 = (double)CONCAT44(&stack0xfffffeac,&stack0xfffffe80);
      shape_design_c_sampleAndFilterPixel_FUN_0046ae20
                (local_28,local_24,config_ptr->source_width,config_ptr->source_height,coord_x1,
                 (double)CONCAT44(&stack0xfffffe7c,(int)((ulonglong)dVar4 >> 0x20)),
                 (double)CONCAT44(SUB84(dVar4,0),
                                  SUB84((double)config_ptr->source_width *
                                        ((double)config_ptr->atlas_x1 +
                                        ((double)(local_40 + 1) *
                                        (double)(config_ptr->atlas_x2 - config_ptr->atlas_x1)) /
                                        (double)local_38) * g_TextureScalingFactor,0)),dVar4,
                 (int)&stack0xfffffe7c,(int)&stack0xfffffe80,&stack0xfffffeac,&stack0xfffffe84,
                 in_stack_fffffeac,in_stack_fffffeb0);
      if (config_ptr->processing_mode == 0) {
        in_stack_fffffeb0 =
             (byte *)(g_TextureAtlasDimension * (local_2c + local_3c) + local_30 + local_40);
      }
      else {
        in_stack_fffffeb0 =
             (byte *)((local_2c + local_40) * g_TextureAtlasDimension +
                     local_30 + ((local_34 + -1) - local_3c));
      }
      iVar1 = (int)in_stack_fffffeb0 * 3;
      *(char *)((int)rgb_buffer + iVar1) = SUB81(coord_x1,0);
      *(char *)((int)rgb_buffer + iVar1 + 1) = (char)((ulonglong)coord_x1 >> 0x20);
      *(byte *)((int)rgb_buffer + iVar1 + 2) = (byte)in_stack_fffffeac;
      *(byte *)((int)alpha_buffer + (int)in_stack_fffffeb0) = (byte)((ulonglong)dVar4 >> 0x20);
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_28,"..\\shape\\design.c",0x2818);
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_24,"..\\shape\\design.c",0x2819);
  return;
}


// Assembly code:
// 0046b060: PUSH EBX
//   Label: shape_design.c_loadTextureData_FUN_0046b060
// 0046b061: PUSH ESI
// 0046b062: PUSH EDI
// 0046b063: PUSH EBP
// 0046b064: MOV EBP,ESP
// 0046b066: SUB ESP,0x174
// 0046b06c: CMP dword ptr [0x01eb1484],0x0
//   XREF to: 01eb1484 (READ)
// 0046b073: JZ 0x0046b092
//   XREF to: 0046b092 (CONDITIONAL_JUMP)
// 0046b075: MOV EAX,0x61d29e
//   XREF to: 0061d29e (DATA)
// 0046b07a: PUSH EAX
//   XREF to: 0061d29e (DATA)
// 0046b07b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b07e: PUSH EAX
// 0046b07f: MOV EAX,0x61d2a1
//   XREF to: 0061d2a1 (DATA)
// 0046b084: PUSH EAX
//   XREF to: 0061d2a1 (DATA)
// 0046b085: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0046b08a: ADD ESP,0xc
// 0046b08d: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046b090: JMP 0x0046b0b4
//   XREF to: 0046b0b4 (UNCONDITIONAL_JUMP)
// 0046b092: PUSH 0x27a2
//   Label: LAB_0046b092
// 0046b097: MOV EAX,0x61d2a5
//   XREF to: 0061d2a5 (DATA)
// 0046b09c: PUSH EAX
//   XREF to: 0061d2a5 (DATA)
// 0046b09d: MOV EAX,0x61d2b7
//   XREF to: 0061d2b7 (DATA)
// 0046b0a2: PUSH EAX
//   XREF to: 0061d2b7 (DATA)
// 0046b0a3: PUSH 0x0
// 0046b0a5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b0a8: PUSH EAX
// 0046b0a9: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0046b0ae: ADD ESP,0x14
// 0046b0b1: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046b0b4: CMP dword ptr [EBP + -0xc],0x0
//   Label: LAB_0046b0b4
//   XREF to: Stack[-0x1c] (READ)
// 0046b0b8: JNZ 0x0046b0dc
//   XREF to: 0046b0dc (CONDITIONAL_JUMP)
// 0046b0ba: MOV dword ptr [0x02f0ca48],0x61d2ba
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061d2ba (DATA)
// 0046b0c4: MOV dword ptr [0x02f0ca4c],0x27a4
//   XREF to: 02f0ca4c (WRITE)
// 0046b0ce: MOV EAX,0x61d2cc
//   XREF to: 0061d2cc (DATA)
// 0046b0d3: PUSH EAX
//   XREF to: 0061d2cc (DATA)
// 0046b0d4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0046b0d9: ADD ESP,0x4
// 0046b0dc: PUSH 0x0
//   Label: LAB_0046b0dc
// 0046b0de: PUSH 0x11
// 0046b0e0: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046b0e3: PUSH EAX
// 0046b0e4: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0046b0e9: ADD ESP,0xc
// 0046b0ec: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046b0ef: PUSH EAX
// 0046b0f0: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0046b0f5: ADD ESP,0x4
// 0046b0f8: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046b0fb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b0fe: MOV EAX,dword ptr [EAX + 0x200]
// 0046b104: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b107: IMUL EAX,dword ptr [EDX + 0x204]
// 0046b10e: LEA EAX,[EAX + EAX*0x2]
// 0046b111: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0046b114: PUSH 0x27ad
// 0046b119: MOV EAX,0x61d2e1
//   XREF to: 0061d2e1 (DATA)
// 0046b11e: PUSH EAX
//   XREF to: 0061d2e1 (DATA)
// 0046b11f: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046b122: PUSH EAX
// 0046b123: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0046b128: ADD ESP,0xc
// 0046b12b: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0046b12e: PUSH 0x27ae
// 0046b133: MOV EAX,0x61d2f3
//   XREF to: 0061d2f3 (DATA)
// 0046b138: PUSH EAX
//   XREF to: 0061d2f3 (DATA)
// 0046b139: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b13c: MOV EAX,dword ptr [EAX + 0x200]
// 0046b142: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b145: IMUL EAX,dword ptr [EDX + 0x204]
// 0046b14c: PUSH EAX
// 0046b14d: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0046b152: ADD ESP,0xc
// 0046b155: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0046b158: CMP dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (READ)
// 0046b15c: JZ 0x0046b164
//   XREF to: 0046b164 (CONDITIONAL_JUMP)
// 0046b15e: CMP dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (READ)
// 0046b162: JNZ 0x0046b186
//   XREF to: 0046b186 (CONDITIONAL_JUMP)
// 0046b164: MOV dword ptr [0x02f0ca48],0x61d305
//   Label: LAB_0046b164
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061d305 (DATA)
// 0046b16e: MOV dword ptr [0x02f0ca4c],0x27af
//   XREF to: 02f0ca4c (WRITE)
// 0046b178: MOV EAX,0x61d317
//   XREF to: 0061d317 (DATA)
// 0046b17d: PUSH EAX
//   XREF to: 0061d317 (DATA)
// 0046b17e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0046b183: ADD ESP,0x4
// 0046b186: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046b186
//   XREF to: Stack[0x4] (READ)
// 0046b189: MOV EAX,dword ptr [EAX + 0x200]
// 0046b18f: LEA EAX,[EAX + EAX*0x2]
// 0046b192: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046b195: TEST dword ptr [EBP + -0x8],0x20
//   XREF to: Stack[-0x18] (READ)
// 0046b19c: JZ 0x0046b1f3
//   XREF to: 0046b1f3 (CONDITIONAL_JUMP)
// 0046b19e: MOV dword ptr [EBP + -0x2c],0x0
//   XREF to: Stack[-0x3c] (WRITE)
// 0046b1a5: JMP 0x0046b1aa
//   XREF to: 0046b1aa (UNCONDITIONAL_JUMP)
// 0046b1a7: INC dword ptr [EBP + -0x2c]
//   Label: LAB_0046b1a7
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 0046b1aa: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0046b1aa
//   XREF to: Stack[-0x3c] (READ)
// 0046b1ad: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b1b0: CMP EAX,dword ptr [EDX + 0x204]
// 0046b1b6: JGE 0x0046b1f1
//   XREF to: 0046b1f1 (CONDITIONAL_JUMP)
// 0046b1b8: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0046b1bb: PUSH EAX
// 0046b1bc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b1bf: PUSH dword ptr [EAX + 0x200]
// 0046b1c5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b1c8: MOV EDX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b1cb: IMUL EDX,dword ptr [EAX + 0x200]
// 0046b1d2: MOV EAX,EDX
// 0046b1d4: ADD EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046b1d7: PUSH EAX
// 0046b1d8: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b1db: IMUL EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046b1df: ADD EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046b1e2: PUSH EAX
// 0046b1e3: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046b1e6: PUSH EAX
// 0046b1e7: CALL shape_design.c_readPixelRowFromFile_FUN_0046abf0
//   XREF to: 0046abf0 (UNCONDITIONAL_CALL)
// 0046b1ec: ADD ESP,0x14
// 0046b1ef: JMP 0x0046b1a7
//   XREF to: 0046b1a7 (UNCONDITIONAL_JUMP)
// 0046b1f1: JMP 0x0046b245
//   Label: LAB_0046b1f1
//   XREF to: 0046b245 (UNCONDITIONAL_JUMP)
// 0046b1f3: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046b1f3
//   XREF to: Stack[0x4] (READ)
// 0046b1f6: MOV EAX,dword ptr [EAX + 0x204]
// 0046b1fc: DEC EAX
// 0046b1fd: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0046b200: JMP 0x0046b206
//   XREF to: 0046b206 (UNCONDITIONAL_JUMP)
// 0046b202: ADD dword ptr [EBP + -0x2c],-0x1
//   Label: LAB_0046b202
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 0046b206: CMP dword ptr [EBP + -0x2c],0x0
//   Label: LAB_0046b206
//   XREF to: Stack[-0x3c] (READ)
// 0046b20a: JL 0x0046b245
//   XREF to: 0046b245 (CONDITIONAL_JUMP)
// 0046b20c: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0046b20f: PUSH EAX
// 0046b210: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b213: PUSH dword ptr [EAX + 0x200]
// 0046b219: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b21c: MOV EDX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b21f: IMUL EDX,dword ptr [EAX + 0x200]
// 0046b226: MOV EAX,EDX
// 0046b228: ADD EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046b22b: PUSH EAX
// 0046b22c: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b22f: IMUL EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046b233: ADD EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046b236: PUSH EAX
// 0046b237: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046b23a: PUSH EAX
// 0046b23b: CALL shape_design.c_readPixelRowFromFile_FUN_0046abf0
//   XREF to: 0046abf0 (UNCONDITIONAL_CALL)
// 0046b240: ADD ESP,0x14
// 0046b243: JMP 0x0046b202
//   XREF to: 0046b202 (UNCONDITIONAL_JUMP)
// 0046b245: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046b245
//   XREF to: Stack[-0x1c] (READ)
// 0046b248: TEST byte ptr [EAX + 0xc],0x20
// 0046b24c: JZ 0x0046b2a1
//   XREF to: 0046b2a1 (CONDITIONAL_JUMP)
// 0046b24e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b251: PUSH EAX
// 0046b252: MOV EAX,0x61d323
//   XREF to: 0061d323 (DATA)
// 0046b257: PUSH EAX
//   XREF to: 0061d323 (DATA)
// 0046b258: LEA EAX,[EBP + 0xfffffec8]
//   XREF to: Stack[-0x148] (DATA)
// 0046b25e: PUSH EAX
// 0046b25f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0046b264: ADD ESP,0xc
// 0046b267: PUSH 0x27c2
// 0046b26c: MOV EAX,0x61d33d
//   XREF to: 0061d33d (DATA)
// 0046b271: PUSH EAX
//   XREF to: 0061d33d (DATA)
// 0046b272: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046b275: PUSH EAX
// 0046b276: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0046b27b: ADD ESP,0xc
// 0046b27e: MOV dword ptr [0x02f0ca48],0x61d34f
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061d34f (DATA)
// 0046b288: MOV dword ptr [0x02f0ca4c],0x27c3
//   XREF to: 02f0ca4c (WRITE)
// 0046b292: LEA EAX,[EBP + 0xfffffec8]
//   XREF to: Stack[-0x148] (DATA)
// 0046b298: PUSH EAX
// 0046b299: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0046b29e: ADD ESP,0x4
// 0046b2a1: PUSH 0x27c5
//   Label: LAB_0046b2a1
// 0046b2a6: MOV EAX,0x61d361
//   XREF to: 0061d361 (DATA)
// 0046b2ab: PUSH EAX
//   XREF to: 0061d361 (DATA)
// 0046b2ac: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046b2af: PUSH EAX
// 0046b2b0: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0046b2b5: ADD ESP,0xc
// 0046b2b8: MOV dword ptr [EBP + -0x34],0x0
//   XREF to: Stack[-0x44] (WRITE)
// 0046b2bf: JMP 0x0046b2c4
//   XREF to: 0046b2c4 (UNCONDITIONAL_JUMP)
// 0046b2c1: INC dword ptr [EBP + -0x34]
//   Label: LAB_0046b2c1
//   XREF to: Stack[-0x44] (READ_WRITE)
// 0046b2c4: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046b2c4
//   XREF to: Stack[0x4] (READ)
// 0046b2c7: MOV EAX,dword ptr [EAX + 0x200]
// 0046b2cd: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b2d0: IMUL EAX,dword ptr [EDX + 0x204]
// 0046b2d7: CMP EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0046b2da: JLE 0x0046b2eb
//   XREF to: 0046b2eb (CONDITIONAL_JUMP)
// 0046b2dc: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046b2df: ADD EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0046b2e2: CMP byte ptr [EAX],0x0
// 0046b2e5: JZ 0x0046b2e9
//   XREF to: 0046b2e9 (CONDITIONAL_JUMP)
// 0046b2e7: JMP 0x0046b2eb
//   XREF to: 0046b2eb (UNCONDITIONAL_JUMP)
// 0046b2e9: JMP 0x0046b2c1
//   Label: LAB_0046b2e9
//   XREF to: 0046b2c1 (UNCONDITIONAL_JUMP)
// 0046b2eb: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046b2eb
//   XREF to: Stack[0x4] (READ)
// 0046b2ee: MOV EAX,dword ptr [EAX + 0x200]
// 0046b2f4: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b2f7: IMUL EAX,dword ptr [EDX + 0x204]
// 0046b2fe: CMP EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0046b301: JG 0x0046b328
//   XREF to: 0046b328 (CONDITIONAL_JUMP)
// 0046b303: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b306: MOV EAX,dword ptr [EAX + 0x200]
// 0046b30c: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b30f: IMUL EAX,dword ptr [EDX + 0x204]
// 0046b316: PUSH EAX
// 0046b317: PUSH 0xff
// 0046b31c: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046b31f: PUSH EAX
// 0046b320: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0046b325: ADD ESP,0xc
// 0046b328: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046b328
//   XREF to: Stack[0x4] (READ)
// 0046b32b: FILD dword ptr [EAX + 0x220]
// 0046b331: FILD dword ptr [0x01eb1760]
//   XREF to: 01eb1760 (READ)
// 0046b337: FMULP
// 0046b339: FILD dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046b33c: FDIVP
// 0046b33e: FADD double ptr [0x0061d376]
//   XREF to: 0061d376 (READ)
// 0046b344: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046b349: FISTP dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 0046b34c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b34f: FILD dword ptr [EAX + 0x224]
// 0046b355: FILD dword ptr [0x01eb1760]
//   XREF to: 01eb1760 (READ)
// 0046b35b: FMULP
// 0046b35d: FILD dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0046b360: FDIVP
// 0046b362: FADD double ptr [0x0061d376]
//   XREF to: 0061d376 (READ)
// 0046b368: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046b36d: FISTP dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0046b370: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046b373: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b376: MOV dword ptr [EDX + 0x230],EAX
// 0046b37c: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046b37f: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b382: MOV dword ptr [EDX + 0x234],EAX
// 0046b388: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b38b: FILD dword ptr [EAX + 0x218]
// 0046b391: FILD dword ptr [0x01eb1760]
//   XREF to: 01eb1760 (READ)
// 0046b397: FMULP
// 0046b399: FILD dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046b39c: FDIVP
// 0046b39e: FADD double ptr [0x0061d376]
//   XREF to: 0061d376 (READ)
// 0046b3a4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046b3a9: FISTP dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0046b3ac: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b3af: FILD dword ptr [EAX + 0x21c]
// 0046b3b5: FILD dword ptr [0x01eb1760]
//   XREF to: 01eb1760 (READ)
// 0046b3bb: FMULP
// 0046b3bd: FILD dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0046b3c0: FDIVP
// 0046b3c2: FADD double ptr [0x0061d376]
//   XREF to: 0061d376 (READ)
// 0046b3c8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046b3cd: FISTP dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0046b3d0: MOV EAX,[0x01eb1760]
//   XREF to: 01eb1760 (READ)
// 0046b3d5: DEC EAX
// 0046b3d6: CMP EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046b3d9: JGE 0x0046b3e4
//   XREF to: 0046b3e4 (CONDITIONAL_JUMP)
// 0046b3db: MOV EAX,[0x01eb1760]
//   XREF to: 01eb1760 (READ)
// 0046b3e0: DEC EAX
// 0046b3e1: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0046b3e4: MOV EAX,[0x01eb1760]
//   Label: LAB_0046b3e4
//   XREF to: 01eb1760 (READ)
// 0046b3e9: DEC EAX
// 0046b3ea: CMP EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046b3ed: JGE 0x0046b3f8
//   XREF to: 0046b3f8 (CONDITIONAL_JUMP)
// 0046b3ef: MOV EAX,[0x01eb1760]
//   XREF to: 01eb1760 (READ)
// 0046b3f4: DEC EAX
// 0046b3f5: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0046b3f8: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_0046b3f8
//   XREF to: Stack[-0x30] (READ)
// 0046b3fb: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b3fe: MOV dword ptr [EDX + 0x228],EAX
// 0046b404: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046b407: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b40a: MOV dword ptr [EDX + 0x22c],EAX
// 0046b410: MOV dword ptr [EBP + -0x2c],0x0
//   XREF to: Stack[-0x3c] (WRITE)
// 0046b417: JMP 0x0046b41f
//   XREF to: 0046b41f (UNCONDITIONAL_JUMP)
// 0046b419: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0046b419
//   XREF to: Stack[-0x3c] (READ)
// 0046b41c: INC dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 0046b41f: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0046b41f
//   XREF to: Stack[-0x3c] (READ)
// 0046b422: CMP EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046b425: JGE 0x0046b6a5
//   XREF to: 0046b6a5 (CONDITIONAL_JUMP)
// 0046b42b: MOV dword ptr [EBP + -0x30],0x0
//   XREF to: Stack[-0x40] (WRITE)
// 0046b432: JMP 0x0046b43a
//   XREF to: 0046b43a (UNCONDITIONAL_JUMP)
// 0046b434: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0046b434
//   XREF to: Stack[-0x40] (READ)
// 0046b437: INC dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ_WRITE)
// 0046b43a: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0046b43a
//   XREF to: Stack[-0x40] (READ)
// 0046b43d: CMP EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046b440: JGE 0x0046b6a0
//   XREF to: 0046b6a0 (CONDITIONAL_JUMP)
// 0046b446: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b449: MOV EDX,dword ptr [EAX + 0x248]
// 0046b44f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b452: SUB EDX,dword ptr [EAX + 0x240]
// 0046b458: MOV dword ptr [EBP + 0xfffffeb8],EDX
//   XREF to: Stack[-0x158] (WRITE)
// 0046b45e: FILD dword ptr [EBP + 0xfffffeb8]
//   XREF to: Stack[-0x158] (READ)
// 0046b464: FILD dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046b467: FMULP
// 0046b469: FILD dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046b46c: FDIVP
// 0046b46e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b471: FILD dword ptr [EAX + 0x240]
// 0046b477: FADDP
// 0046b479: FMUL double ptr [0x0061d37e]
//   XREF to: 0061d37e (READ)
// 0046b47f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b482: FILD dword ptr [EAX + 0x200]
// 0046b488: FMULP
// 0046b48a: FSTP double ptr [EBP + 0xfffffeb0]
//   XREF to: Stack[-0x160] (WRITE)
// 0046b490: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b493: MOV EDX,dword ptr [EAX + 0x24c]
// 0046b499: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b49c: SUB EDX,dword ptr [EAX + 0x244]
// 0046b4a2: MOV dword ptr [EBP + 0xfffffeb8],EDX
//   XREF to: Stack[-0x158] (WRITE)
// 0046b4a8: FILD dword ptr [EBP + 0xfffffeb8]
//   XREF to: Stack[-0x158] (READ)
// 0046b4ae: FILD dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b4b1: FMULP
// 0046b4b3: FILD dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046b4b6: FDIVP
// 0046b4b8: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b4bb: FILD dword ptr [EAX + 0x244]
// 0046b4c1: FADDP
// 0046b4c3: FMUL double ptr [0x0061d37e]
//   XREF to: 0061d37e (READ)
// 0046b4c9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b4cc: FILD dword ptr [EAX + 0x204]
// 0046b4d2: FMULP
// 0046b4d4: FSTP double ptr [EBP + 0xfffffea8]
//   XREF to: Stack[-0x168] (WRITE)
// 0046b4da: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b4dd: MOV EDX,dword ptr [EAX + 0x248]
// 0046b4e3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b4e6: SUB EDX,dword ptr [EAX + 0x240]
// 0046b4ec: MOV EAX,EDX
// 0046b4ee: MOV dword ptr [EBP + 0xfffffeb8],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 0046b4f4: FILD dword ptr [EBP + 0xfffffeb8]
//   XREF to: Stack[-0x158] (READ)
// 0046b4fa: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046b4fd: INC EAX
// 0046b4fe: MOV dword ptr [EBP + 0xfffffeb8],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 0046b504: FILD dword ptr [EBP + 0xfffffeb8]
//   XREF to: Stack[-0x158] (READ)
// 0046b50a: FMULP
// 0046b50c: FILD dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046b50f: FDIVP
// 0046b511: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b514: FILD dword ptr [EAX + 0x240]
// 0046b51a: FADDP
// 0046b51c: FMUL double ptr [0x0061d37e]
//   XREF to: 0061d37e (READ)
// 0046b522: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b525: FILD dword ptr [EAX + 0x200]
// 0046b52b: FMULP
// 0046b52d: FSTP double ptr [EBP + 0xfffffea0]
//   XREF to: Stack[-0x170] (WRITE)
// 0046b533: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b536: MOV EDX,dword ptr [EAX + 0x24c]
// 0046b53c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b53f: SUB EDX,dword ptr [EAX + 0x244]
// 0046b545: MOV EAX,EDX
// 0046b547: MOV dword ptr [EBP + 0xfffffeb8],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 0046b54d: FILD dword ptr [EBP + 0xfffffeb8]
//   XREF to: Stack[-0x158] (READ)
// 0046b553: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b556: INC EAX
// 0046b557: MOV dword ptr [EBP + 0xfffffeb8],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 0046b55d: FILD dword ptr [EBP + 0xfffffeb8]
//   XREF to: Stack[-0x158] (READ)
// 0046b563: FMULP
// 0046b565: FILD dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046b568: FDIVP
// 0046b56a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b56d: FILD dword ptr [EAX + 0x244]
// 0046b573: FADDP
// 0046b575: FMUL double ptr [0x0061d37e]
//   XREF to: 0061d37e (READ)
// 0046b57b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b57e: FILD dword ptr [EAX + 0x204]
// 0046b584: FMULP
// 0046b586: FSTP double ptr [EBP + 0xfffffe98]
//   XREF to: Stack[-0x178] (WRITE)
// 0046b58c: LEA EAX,[EBP + 0xfffffe94]
//   XREF to: Stack[-0x17c] (DATA)
// 0046b592: PUSH EAX
// 0046b593: LEA EAX,[EBP + 0xfffffebc]
//   XREF to: Stack[-0x154] (DATA)
// 0046b599: PUSH EAX
// 0046b59a: LEA EAX,[EBP + 0xfffffe90]
//   XREF to: Stack[-0x180] (DATA)
// 0046b5a0: PUSH EAX
// 0046b5a1: LEA EAX,[EBP + 0xfffffe8c]
//   XREF to: Stack[-0x184] (DATA)
// 0046b5a7: PUSH EAX
// 0046b5a8: FLD double ptr [EBP + 0xfffffe98]
//   XREF to: Stack[-0x178] (READ)
// 0046b5ae: SUB ESP,0x8
// 0046b5b1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x19c] (DATA)
// 0046b5b4: FLD double ptr [EBP + 0xfffffea0]
//   XREF to: Stack[-0x170] (READ)
// 0046b5ba: SUB ESP,0x8
// 0046b5bd: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1a4] (DATA)
// 0046b5c0: FLD double ptr [EBP + 0xfffffea8]
//   XREF to: Stack[-0x168] (READ)
// 0046b5c6: SUB ESP,0x8
// 0046b5c9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1ac] (DATA)
// 0046b5cc: FLD double ptr [EBP + 0xfffffeb0]
//   XREF to: Stack[-0x160] (READ)
// 0046b5d2: SUB ESP,0x8
// 0046b5d5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1b4] (DATA)
// 0046b5d8: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b5db: PUSH dword ptr [EAX + 0x204]
// 0046b5e1: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b5e4: PUSH dword ptr [EAX + 0x200]
// 0046b5ea: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046b5ed: PUSH EAX
// 0046b5ee: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046b5f1: PUSH EAX
// 0046b5f2: CALL shape_design.c_sampleAndFilterPixel_FUN_0046ae20
//   XREF to: 0046ae20 (UNCONDITIONAL_CALL)
// 0046b5f7: ADD ESP,0x40
// 0046b5fa: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b5fd: CMP dword ptr [EAX + 0x214],0x0
// 0046b604: JNZ 0x0046b625
//   XREF to: 0046b625 (CONDITIONAL_JUMP)
// 0046b606: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046b609: ADD EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b60c: MOV EDX,dword ptr [0x01eb1760]
//   XREF to: 01eb1760 (READ)
// 0046b612: IMUL EDX,EAX
// 0046b615: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046b618: ADD EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046b61b: ADD EDX,EAX
// 0046b61d: MOV dword ptr [EBP + 0xfffffec0],EDX
//   XREF to: Stack[-0x150] (WRITE)
// 0046b623: JMP 0x0046b646
//   XREF to: 0046b646 (UNCONDITIONAL_JUMP)
// 0046b625: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_0046b625
//   XREF to: Stack[-0x34] (READ)
// 0046b628: DEC EAX
// 0046b629: SUB EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b62c: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046b62f: ADD EDX,EAX
// 0046b631: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046b634: ADD EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046b637: IMUL EAX,dword ptr [0x01eb1760]
//   XREF to: 01eb1760 (READ)
// 0046b63e: ADD EAX,EDX
// 0046b640: MOV dword ptr [EBP + 0xfffffec0],EAX
//   XREF to: Stack[-0x150] (WRITE)
// 0046b646: MOV EAX,dword ptr [EBP + 0xfffffec0]
//   Label: LAB_0046b646
//   XREF to: Stack[-0x150] (READ)
// 0046b64c: LEA EAX,[EAX + EAX*0x2]
// 0046b64f: MOV dword ptr [EBP + 0xfffffec4],EAX
//   XREF to: Stack[-0x14c] (WRITE)
// 0046b655: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046b658: ADD EDX,dword ptr [EBP + 0xfffffec4]
//   XREF to: Stack[-0x14c] (READ)
// 0046b65e: MOV AL,byte ptr [EBP + 0xfffffe8c]
//   XREF to: Stack[-0x184] (READ)
// 0046b664: MOV byte ptr [EDX],AL
// 0046b666: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046b669: ADD EDX,dword ptr [EBP + 0xfffffec4]
//   XREF to: Stack[-0x14c] (READ)
// 0046b66f: MOV AL,byte ptr [EBP + 0xfffffe90]
//   XREF to: Stack[-0x180] (READ)
// 0046b675: MOV byte ptr [EDX + 0x1],AL
// 0046b678: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046b67b: ADD EDX,dword ptr [EBP + 0xfffffec4]
//   XREF to: Stack[-0x14c] (READ)
// 0046b681: MOV AL,byte ptr [EBP + 0xfffffebc]
//   XREF to: Stack[-0x154] (READ)
// 0046b687: MOV byte ptr [EDX + 0x2],AL
// 0046b68a: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046b68d: ADD EDX,dword ptr [EBP + 0xfffffec0]
//   XREF to: Stack[-0x150] (READ)
// 0046b693: MOV AL,byte ptr [EBP + 0xfffffe94]
//   XREF to: Stack[-0x17c] (READ)
// 0046b699: MOV byte ptr [EDX],AL
// 0046b69b: JMP 0x0046b434
//   XREF to: 0046b434 (UNCONDITIONAL_JUMP)
// 0046b6a0: JMP 0x0046b419
//   Label: LAB_0046b6a0
//   XREF to: 0046b419 (UNCONDITIONAL_JUMP)
// 0046b6a5: PUSH 0x2818
//   Label: LAB_0046b6a5
// 0046b6aa: MOV EAX,0x61d386
//   XREF to: 0061d386 (DATA)
// 0046b6af: PUSH EAX
//   XREF to: 0061d386 (DATA)
// 0046b6b0: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046b6b3: PUSH EAX
// 0046b6b4: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0046b6b9: ADD ESP,0xc
// 0046b6bc: PUSH 0x2819
// 0046b6c1: MOV EAX,0x61d398
//   XREF to: 0061d398 (DATA)
// 0046b6c6: PUSH EAX
//   XREF to: 0061d398 (DATA)
// 0046b6c7: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046b6ca: PUSH EAX
// 0046b6cb: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0046b6d0: ADD ESP,0xc
// 0046b6d3: MOV ESP,EBP
// 0046b6d5: POP EBP
// 0046b6d6: POP EDI
// 0046b6d7: POP ESI
// 0046b6d8: POP EBX
// 0046b6d9: RET
