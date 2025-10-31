// Name: sound_sndmain.cpp_FUN_005a5200
// Address: 005a5200
// Address Range: [[005a5200, 005a5520]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a5200()
// Globals:
//   TerminatedCString s_mp3_0064fa62
//   TerminatedCString s_mp3_0064fa66
//   TerminatedCString s_sound_0064fa6b
//   TerminatedCString s_sound_sndmain_cpp_0064fa71
//   TerminatedCString s_sound_sndmain_cpp_0064fa86
//   TerminatedCString s_Out_of_memory_0064fa9b
//   TerminatedCString s_rb_0064faaa
//   TerminatedCString s_sound_0064faad
//   undefined4 DAT_00663164
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f62828
//   SfxSample[64] DAT_03f6282c
//   undefined4 DAT_03f6297c
//   undefined4 DAT_03f629ac
//   undefined4 DAT_03f62afc
//   undefined4 DAT_03f62b00
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_ftell_FUN_00601560
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   sound_mp3.cpp_OpenAndPrepareDecoding_FUN_00534550
//   sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0
//   sound_sndmain.cpp_ReallocSomething_FUN_005a6170
//   sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0
//   sound_sndmain.cpp_SfxSample_seek_FUN_005a65a0
//   sound_sndmain.cpp_WavReadingFunc1_FUN_005a3fe0

#include "nocturne.h"

SfxSample * sound_sndmain_cpp_FUN_005a5200(void)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  CMP3Decoder *this_ptr;
  FILE *pFVar4;
  long lVar5;
  int iVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  SfxSample *pSVar7;
  float10 fVar8;
  double dVar9;
  char *in_stack_00000008;
  undefined4 in_stack_00000020;
  SfxSample *local_14;
  
  iVar6 = 0;
  do {
    DAT_03f62828 = DAT_03f62828 + 1;
    if (0x3f < DAT_03f62828) {
      DAT_03f62828 = 0;
    }
    if ((DAT_03f6282c[DAT_03f62828].field_150 == 0) && (DAT_03f6282c[DAT_03f62828].ref_count == 0))
    {
      local_14 = DAT_03f6282c + DAT_03f62828;
      goto LAB_005a5242;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  local_14 = (SfxSample *)0x0;
LAB_005a5242:
  if (local_14 == (SfxSample *)0x0) {
    return (SfxSample *)0x0;
  }
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000008,(char *)0x0,(char *)0x0,(char *)0x0,&stack0xfffffeec);
  iVar6 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xfffffef0,"mp3");
  if ((iVar6 == 0) ||
     (iVar6 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xfffffef4,".mp3"), iVar6 == 0)) {
    iVar6 = engine_dosio_c_getFileSize_FUN_00481880("sound",in_stack_00000008);
    if (iVar6 < 1) goto LAB_005a5505;
    this_ptr = (CMP3Decoder *)
               shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\sndmain.cpp",0x3c5);
    if (this_ptr != (CMP3Decoder *)0x0) {
      this_ptr = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(this_ptr);
    }
    local_14->mp3_data = this_ptr;
    if (this_ptr == (CMP3Decoder *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x3c6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
    }
    sound_mp3_cpp_OpenAndPrepareDecoding_FUN_00534550();
    pSVar7 = local_14;
    do {
      cVar1 = *in_stack_00000008;
      pSVar7->name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000008[1];
      in_stack_00000008 = in_stack_00000008 + 2;
      pSVar7->name[1] = cVar1;
      pSVar7 = (SfxSample *)(pSVar7->name + 2);
    } while (cVar1 != '\0');
    local_14->field1_0x4[0xfc] = '\x01';
    local_14->field1_0x4[0xfd] = '\0';
    local_14->field1_0x4[0xfe] = '\0';
    local_14->field1_0x4[0xff] = '\0';
    pvVar2 = local_14->mp3_data;
    local_14->field1_0x4[0x100] = '\x10';
    local_14->field1_0x4[0x101] = '\0';
    local_14->field1_0x4[0x102] = '\0';
    local_14->field1_0x4[0x103] = '\0';
    *(undefined4 *)(local_14->field1_0x4 + 0x104) = *(undefined4 *)((int)pvVar2 + 0x104);
    uVar3 = *(undefined4 *)((int)local_14->mp3_data + 0x100);
    local_14->field1_0x4[0x10c] = -1;
    local_14->field1_0x4[0x10d] = -1;
    local_14->field1_0x4[0x10e] = -1;
    local_14->field1_0x4[0x10f] = -1;
    *(undefined4 *)(local_14->field1_0x4 + 0x108) = uVar3;
    sound_sndmain_cpp_CalculateDistanceMaybe_FUN_005a45c0();
    local_14->field_150 = 0;
    local_14->ref_count = 0;
    iVar6 = *(int *)(local_14->field1_0x4 + 0x108);
    local_14->buffer_id = (void *)0x0;
    fVar8 = (float10)iVar6 * (float10)DAT_00663164;
    local_14->field_160[4] = '\0';
    local_14->field_160[5] = '\0';
    local_14->field_160[6] = '\0';
    local_14->field_160[7] = '\0';
    local_14->field_160[8] = '\0';
    local_14->field_160[9] = '\0';
    local_14->field_160[10] = '\0';
    local_14->field_160[0xb] = '\0';
    dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,in_stack_00000020));
    *(int *)local_14->field_160 = (int)ROUND(fVar8);
    local_14->streaming_slot_index = SUB84(dVar9,0);
    iVar6 = sound_sndmain_cpp_ReallocSomething_FUN_005a6170
                      (SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20));
  }
  else {
    pFVar4 = engine_dosio_c_getFile_FUN_00481a50("sound",in_stack_00000008,"rb");
    local_14->file_handle = pFVar4;
    pSVar7 = local_14;
    if (pFVar4 == (FILE *)0x0) goto LAB_005a5505;
    do {
      cVar1 = *in_stack_00000008;
      pSVar7->name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000008[1];
      in_stack_00000008 = in_stack_00000008 + 2;
      pSVar7->name[1] = cVar1;
      pSVar7 = (SfxSample *)(pSVar7->name + 2);
    } while (cVar1 != '\0');
    lVar5 = crt_stdio_c_ftell_FUN_00601560(local_14->file_handle);
    local_14->field_368 = lVar5;
    iVar6 = sound_sndmain_cpp_WavReadingFunc1_FUN_005a3fe0();
    if (iVar6 == 0) goto LAB_005a5505;
    sound_sndmain_cpp_CalculateDistanceMaybe_FUN_005a45c0();
    local_14->field_150 = 0;
    local_14->ref_count = 0;
    iVar6 = *(int *)(local_14->field1_0x4 + 0x108);
    local_14->buffer_id = (void *)0x0;
    fVar8 = (float10)iVar6 * (float10)DAT_00663164;
    local_14->field_160[4] = '\0';
    local_14->field_160[5] = '\0';
    local_14->field_160[6] = '\0';
    local_14->field_160[7] = '\0';
    local_14->field_160[8] = '\0';
    local_14->field_160[9] = '\0';
    local_14->field_160[10] = '\0';
    local_14->field_160[0xb] = '\0';
    dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,in_stack_00000020));
    *(int *)local_14->field_160 = (int)ROUND(fVar8);
    local_14->streaming_slot_index = SUB84(dVar9,0);
    iVar6 = sound_sndmain_cpp_ReallocSomething_FUN_005a6170
                      (SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20));
  }
  if (iVar6 != 0) {
    sound_sndmain_cpp_SfxSample_seek_FUN_005a65a0();
    return local_14;
  }
LAB_005a5505:
  sound_sndmain_cpp_SfxSample_freeMemory_FUN_005a62c0(local_14);
  return (SfxSample *)0x0;
}


// Assembly code:
// 005a5200: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a5200
// 005a5201: PUSH ESI
// 005a5202: PUSH EDI
// 005a5203: PUSH EBP
// 005a5204: SUB ESP,0x104
// 005a520a: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a5210: MOV ESI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 005a5217: XOR EDX,EDX
// 005a5219: XOR EBP,EBP
// 005a521b: INC EBX
//   Label: LAB_005a521b
// 005a521c: CMP EBX,0x40
// 005a521f: JL 0x005a5223
//   XREF to: 005a5223 (CONDITIONAL_JUMP)
// 005a5221: MOV EBX,EBP
// 005a5223: IMUL EAX,EBX,0x180
//   Label: LAB_005a5223
// 005a5229: MOV ECX,dword ptr [EAX + 0x3f6297c]
//   XREF to: 03f6297c (READ)
//   XREF to: 03f62afc (READ)
// 005a522f: CMP EBP,ECX
// 005a5231: JZ 0x005a5266
//   XREF to: 005a5266 (CONDITIONAL_JUMP)
// 005a5233: INC EDX
//   Label: LAB_005a5233
// 005a5234: CMP EDX,0x40
// 005a5237: JL 0x005a521b
//   XREF to: 005a521b (CONDITIONAL_JUMP)
// 005a5239: XOR EBP,EBP
// 005a523b: MOV dword ptr [ESP + 0x100],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 005a5242: MOV EBP,dword ptr [ESP + 0x100]
//   Label: LAB_005a5242
//   XREF to: Stack[-0x14] (READ)
// 005a5249: MOV dword ptr [0x03f62828],EBX
//   XREF to: 03f62828 (WRITE)
// 005a524f: TEST EBP,EBP
// 005a5251: JNZ 0x005a527e
//   XREF to: 005a527e (CONDITIONAL_JUMP)
// 005a5253: XOR EAX,EAX
// 005a5255: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a525b: ADD ESP,0x104
// 005a5261: POP EBP
// 005a5262: POP EDI
// 005a5263: POP ESI
// 005a5264: POP EBX
// 005a5265: RET
// 005a5266: CMP ECX,dword ptr [EAX + 0x3f62980]
//   Label: LAB_005a5266
//   XREF to: 03f62b00 (READ)
// 005a526c: JNZ 0x005a5233
//   XREF to: 005a5233 (CONDITIONAL_JUMP)
// 005a526e: MOV EDX,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005a5273: ADD EDX,EAX
// 005a5275: MOV dword ptr [ESP + 0x100],EDX
//   XREF to: 03f629ac (DATA)
//   XREF to: Stack[-0x14] (WRITE)
// 005a527c: JMP 0x005a5242
//   XREF to: 005a5242 (UNCONDITIONAL_JUMP)
// 005a527e: MOV EAX,ESP
//   Label: LAB_005a527e
// 005a5280: PUSH EAX
// 005a5281: PUSH 0x0
// 005a5283: PUSH 0x0
// 005a5285: PUSH 0x0
// 005a5287: PUSH ESI
// 005a5288: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005a528d: ADD ESP,0x14
// 005a5290: PUSH 0x64fa62
//   XREF to: 0064fa62 (DATA)
// 005a5295: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 005a5299: PUSH EAX
// 005a529a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a529f: ADD ESP,0x8
// 005a52a2: TEST EAX,EAX
// 005a52a4: JNZ 0x005a540e
//   XREF to: 005a540e (CONDITIONAL_JUMP)
// 005a52aa: PUSH ESI
//   Label: LAB_005a52aa
// 005a52ab: PUSH 0x64fa6b
//   XREF to: 0064fa6b (DATA)
// 005a52b0: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005a52b5: ADD ESP,0x8
// 005a52b8: TEST EAX,EAX
// 005a52ba: JLE 0x005a5505
//   XREF to: 005a5505 (CONDITIONAL_JUMP)
// 005a52c0: PUSH 0x3c5
// 005a52c5: PUSH 0x64fa71
//   XREF to: 0064fa71 (DATA)
// 005a52ca: PUSH 0x8630
// 005a52cf: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005a52d4: ADD ESP,0xc
// 005a52d7: TEST EAX,EAX
// 005a52d9: JZ 0x005a52e4
//   XREF to: 005a52e4 (CONDITIONAL_JUMP)
// 005a52db: PUSH EAX
// 005a52dc: CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   XREF to: 005344f0 (UNCONDITIONAL_CALL)
// 005a52e1: ADD ESP,0x4
// 005a52e4: MOV dword ptr [EBP + 0x16c],EAX
//   Label: LAB_005a52e4
// 005a52ea: TEST EAX,EAX
// 005a52ec: JNZ 0x005a5310
//   XREF to: 005a5310 (CONDITIONAL_JUMP)
// 005a52ee: MOV EDI,0x64fa86
//   XREF to: 0064fa86 (DATA)
// 005a52f3: MOV EAX,0x3c6
// 005a52f8: PUSH 0x64fa9b
//   XREF to: 0064fa9b (DATA)
// 005a52fd: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005a5303: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005a5308: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a530d: ADD ESP,0x4
// 005a5310: PUSH ESI
//   Label: LAB_005a5310
// 005a5311: MOV EDX,dword ptr [EBP + 0x16c]
// 005a5317: PUSH EDX
// 005a5318: CALL sound_mp3.cpp_OpenAndPrepareDecoding_FUN_00534550
//   XREF to: 00534550 (UNCONDITIONAL_CALL)
// 005a531d: ADD ESP,0x8
// 005a5320: MOV EDI,EBP
// 005a5322: PUSH EDI
// 005a5323: MOV AL,byte ptr [ESI]
//   Label: LAB_005a5323
// 005a5325: MOV byte ptr [EDI],AL
// 005a5327: CMP AL,0x0
// 005a5329: JZ 0x005a533b
//   XREF to: 005a533b (CONDITIONAL_JUMP)
// 005a532b: MOV AL,byte ptr [ESI + 0x1]
// 005a532e: ADD ESI,0x2
// 005a5331: MOV byte ptr [EDI + 0x1],AL
// 005a5334: ADD EDI,0x2
// 005a5337: CMP AL,0x0
// 005a5339: JNZ 0x005a5323
//   XREF to: 005a5323 (CONDITIONAL_JUMP)
// 005a533b: POP EDI
//   Label: LAB_005a533b
// 005a533c: MOV dword ptr [EBP + 0x100],0x1
// 005a5346: MOV EAX,dword ptr [EBP + 0x16c]
// 005a534c: MOV dword ptr [EBP + 0x104],0x10
// 005a5356: MOV EAX,dword ptr [EAX + 0x104]
// 005a535c: MOV dword ptr [EBP + 0x108],EAX
// 005a5362: MOV EAX,dword ptr [EBP + 0x16c]
// 005a5368: MOV EAX,dword ptr [EAX + 0x100]
// 005a536e: MOV dword ptr [EBP + 0x110],0xffffffff
// 005a5378: PUSH EBP
// 005a5379: MOV dword ptr [EBP + 0x10c],EAX
// 005a537f: CALL sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0
//   XREF to: 005a45c0 (UNCONDITIONAL_CALL)
// 005a5384: MOV dword ptr [EBP + 0x150],0x0
// 005a538e: MOV dword ptr [EBP + 0x154],0x0
// 005a5398: FILD dword ptr [EBP + 0x10c]
// 005a539e: MOV dword ptr [EBP + 0x158],0x0
// 005a53a8: FMUL float ptr [0x00663164]
//   XREF to: 00663164 (READ)
// 005a53ae: MOV dword ptr [EBP + 0x164],0x0
// 005a53b8: ADD ESP,0x4
// 005a53bb: MOV dword ptr [EBP + 0x168],0x0
// 005a53c5: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005a53cc: PUSH EBP
// 005a53cd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a53d2: FISTP dword ptr [EBP + 0x160]
// 005a53d8: MOV dword ptr [EBP + 0x15c],EAX
// 005a53de: CALL sound_sndmain.cpp_ReallocSomething_FUN_005a6170
//   XREF to: 005a6170 (UNCONDITIONAL_CALL)
// 005a53e3: ADD ESP,0x4
// 005a53e6: TEST EAX,EAX
// 005a53e8: JZ 0x005a5505
//   XREF to: 005a5505 (CONDITIONAL_JUMP)
// 005a53ee: PUSH 0x0
//   Label: LAB_005a53ee
// 005a53f0: PUSH 0x0
// 005a53f2: PUSH EBP
// 005a53f3: CALL sound_sndmain.cpp_SfxSample_seek_FUN_005a65a0
//   XREF to: 005a65a0 (UNCONDITIONAL_CALL)
// 005a53f8: ADD ESP,0xc
// 005a53fb: MOV EAX,EBP
// 005a53fd: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a5403: ADD ESP,0x104
// 005a5409: POP EBP
// 005a540a: POP EDI
// 005a540b: POP ESI
// 005a540c: POP EBX
// 005a540d: RET
// 005a540e: PUSH 0x64fa66
//   Label: LAB_005a540e
//   XREF to: 0064fa66 (DATA)
// 005a5413: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 005a5417: PUSH EAX
// 005a5418: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a541d: ADD ESP,0x8
// 005a5420: TEST EAX,EAX
// 005a5422: JZ 0x005a52aa
//   XREF to: 005a52aa (CONDITIONAL_JUMP)
// 005a5428: PUSH 0x64faaa
//   XREF to: 0064faaa (DATA)
// 005a542d: PUSH ESI
// 005a542e: PUSH 0x64faad
//   XREF to: 0064faad (DATA)
// 005a5433: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005a5438: ADD ESP,0xc
// 005a543b: MOV dword ptr [EBP + 0x174],EAX
// 005a5441: TEST EAX,EAX
// 005a5443: JZ 0x005a5505
//   XREF to: 005a5505 (CONDITIONAL_JUMP)
// 005a5449: MOV EDI,EBP
// 005a544b: PUSH EDI
// 005a544c: MOV AL,byte ptr [ESI]
//   Label: LAB_005a544c
// 005a544e: MOV byte ptr [EDI],AL
// 005a5450: CMP AL,0x0
// 005a5452: JZ 0x005a5464
//   XREF to: 005a5464 (CONDITIONAL_JUMP)
// 005a5454: MOV AL,byte ptr [ESI + 0x1]
// 005a5457: ADD ESI,0x2
// 005a545a: MOV byte ptr [EDI + 0x1],AL
// 005a545d: ADD EDI,0x2
// 005a5460: CMP AL,0x0
// 005a5462: JNZ 0x005a544c
//   XREF to: 005a544c (CONDITIONAL_JUMP)
// 005a5464: POP EDI
//   Label: LAB_005a5464
// 005a5465: MOV ECX,dword ptr [EBP + 0x174]
// 005a546b: PUSH ECX
// 005a546c: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 005a5471: ADD ESP,0x4
// 005a5474: PUSH EBP
// 005a5475: MOV dword ptr [EBP + 0x170],EAX
// 005a547b: LEA EAX,[EBP + 0x170]
// 005a5481: PUSH EAX
// 005a5482: MOV EDI,dword ptr [EBP + 0x174]
// 005a5488: PUSH EDI
// 005a5489: CALL sound_sndmain.cpp_WavReadingFunc1_FUN_005a3fe0
//   XREF to: 005a3fe0 (UNCONDITIONAL_CALL)
// 005a548e: ADD ESP,0xc
// 005a5491: TEST EAX,EAX
// 005a5493: JZ 0x005a5505
//   XREF to: 005a5505 (CONDITIONAL_JUMP)
// 005a5495: PUSH EBP
// 005a5496: CALL sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0
//   XREF to: 005a45c0 (UNCONDITIONAL_CALL)
// 005a549b: MOV dword ptr [EBP + 0x150],0x0
// 005a54a5: MOV dword ptr [EBP + 0x154],0x0
// 005a54af: FILD dword ptr [EBP + 0x10c]
// 005a54b5: MOV dword ptr [EBP + 0x158],0x0
// 005a54bf: FMUL float ptr [0x00663164]
//   XREF to: 00663164 (READ)
// 005a54c5: MOV dword ptr [EBP + 0x164],0x0
// 005a54cf: ADD ESP,0x4
// 005a54d2: MOV dword ptr [EBP + 0x168],0x0
// 005a54dc: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005a54e3: PUSH EBP
// 005a54e4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a54e9: FISTP dword ptr [EBP + 0x160]
// 005a54ef: MOV dword ptr [EBP + 0x15c],EAX
// 005a54f5: CALL sound_sndmain.cpp_ReallocSomething_FUN_005a6170
//   XREF to: 005a6170 (UNCONDITIONAL_CALL)
// 005a54fa: ADD ESP,0x4
// 005a54fd: TEST EAX,EAX
// 005a54ff: JNZ 0x005a53ee
//   XREF to: 005a53ee (CONDITIONAL_JUMP)
// 005a5505: PUSH EBP
//   Label: LAB_005a5505
// 005a5506: CALL sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005a550b: ADD ESP,0x4
// 005a550e: XOR EAX,EAX
// 005a5510: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a5516: ADD ESP,0x104
// 005a551c: POP EBP
// 005a551d: POP EDI
// 005a551e: POP ESI
// 005a551f: POP EBX
// 005a5520: RET
