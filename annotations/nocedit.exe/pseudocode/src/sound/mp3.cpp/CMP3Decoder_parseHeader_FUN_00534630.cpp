// Name: sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630
// Address: 00534630
// Address Range: [[00534630, 005349dd]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630(CMP3Decoder * this_ptr, FILE * file_handle, int file_size)

#include "nocturne.h"

int __cdecl
sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630
          (CMP3Decoder *this_ptr,FILE *file_handle,int file_size)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  CFileBitStream *bitstream;
  uint uVar4;
  int iVar5;
  int extraout_EAX;
  uint uVar6;
  int extraout_EDX;
  CMP3Decoder *this_ptr_00;
  BADSPACEBASE *in_ESP;
  streambuf *unaff_EBP;
  FILE *pFVar7;
  double dVar8;
  int unaff_retaddr;
  int in_stack_0000001c;
  int in_stack_00000024;
  int local_58 [4];
  int local_48;
  byte *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  streambuf *local_18;
  int local_14;
  
  sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(this_ptr);
  local_18 = (streambuf *)0x1000;
  pFVar7 = file_handle + 0x2f8;
  if ((FILE *)pFVar7->_ptr != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pFVar7->_ptr,"..\\sound\\mp3.cpp",0x20b);
    pFVar7->_ptr = (char *)0x0;
  }
  if ((void *)file_handle[0x2f8]._cnt != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              ((void *)file_handle[0x2f8]._cnt,"..\\sound\\mp3.cpp",0x210);
    file_handle[0x2f8]._cnt = 0;
  }
  pFVar7->_ptr = (char *)file_size;
  lVar2 = crt_stdio_c_ftell_FUN_00601560((FILE *)file_size);
  file_handle[0x2f9]._cnt = lVar2;
  file_handle[0x2f9]._link = local_18;
  file_handle[0x2f8]._link = unaff_EBP;
  pvVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250((int)unaff_EBP,"..\\sound\\mp3.cpp",0x1ff);
  file_handle[0x2f8]._cnt = (int)pvVar3;
  if (pvVar3 == (void *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x200;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Out of memory.  File: %s",g_CurrentMp3Filename);
  }
  crt_stdio_c_fseek_FUN_005ffacc((FILE *)pFVar7->_ptr,file_handle[0x2f9]._cnt,0);
  file_handle[0x2f8]._handle = 0;
  file_handle[0x2f8]._bufsize = 0;
  file_handle[0x2f8]._flag = 0;
  file_handle[0x2f9]._flag = (uint)file_handle[0x2f9]._link;
  *(uint *)&file_handle[0x2f8]._ungotten = 0;
  bitstream = (CFileBitStream *)(in_stack_0000001c + 0x5320);
  file_handle[0x2f9]._ptr = (char *)0x0;
  uVar6 = *(uint *)(in_stack_0000001c + 0x532c) & 7;
  if (uVar6 != 0) {
    sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bitstream,8 - uVar6);
  }
  uVar6 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bitstream,0xc);
  while ((local_28 = (byte *)local_58, (uVar6 & 0x1fff) != 0xfff &&
         (*(int *)(in_stack_0000001c + 0x533c) == 0))) {
    uVar4 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bitstream,8);
    uVar6 = uVar6 << 8 | uVar4;
  }
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
            ((CFileBitStream *)(in_stack_00000024 + 0x5320),(SMpegFrameHeader *)&local_28);
  local_20 = local_24[7];
  local_14 = (local_20 != 3) + 1;
  if (local_24[1] == 2) {
    iVar1 = *local_24;
    local_58[0] = 0x534863;
    dVar8 = crt_math_c_round_FUN_005fe6b0(g_MpegSampleRateTable[iVar1][local_24[4]]);
    iVar5 = (int)ROUND(dVar8);
    if (iVar1 == 1) {
      if (((iVar5 == 0x30) && (0x37 < extraout_EDX)) ||
         ((0x37 < extraout_EDX && (extraout_EDX < 0x51)))) {
        iVar5 = 0;
      }
      else if ((iVar5 == 0x30) || (extraout_EDX < 0x60)) {
        if ((iVar5 == 0x20) || (0x30 < extraout_EDX)) {
          iVar5 = 3;
        }
        else {
          iVar5 = 2;
        }
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 4;
    }
    if (iVar5 != *(int *)(unaff_retaddr + 0xc)) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1a2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("MPEG Layer 2 - pick_table - can't load tables!  File: %s",g_CurrentMp3Filename);
    }
  }
  if (local_24[7] == 1) {
    iVar5 = local_24[1];
    iVar1 = local_24[8];
    if ((((iVar5 < 1) || (3 < iVar5)) || (iVar1 < 0)) || (3 < iVar1)) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1b2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("js_bound bad layer/modext (%d/%d)  File: %s",iVar5,iVar1,g_CurrentMp3Filename);
    }
  }
  iVar5 = 0x534945;
  dVar8 = crt_math_c_round_FUN_005fe6b0
                    (g_MpegSampleRateTable[local_58[0]][local_48] * 1000);
  *(int *)(extraout_EAX + 0x100) = (int)ROUND(dVar8);
  this_ptr_00->num_channels = local_1c;
  iVar5 = sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(this_ptr_00,iVar5);
  return iVar5;
}
