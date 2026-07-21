#pragma once

// Function prototypes for sound/mp3.cpp
// Generated from Ghidra function signatures

// Original: sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0
// Address: 004e29d0
uint __cdecl CFileBitStream::readBit(undefined4 *param_1);

// Original: sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
// Address: 004e2ac0
uint __cdecl CFileBitStream::readBits(undefined4 *param_1,int param_2);

// Original: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0
// Address: 004e2ce0
undefined4 __cdecl CMP3Decoder::getTotalBitsRead(int param_1);

// Original: sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0
// Address: 004e2cf0
uint __cdecl CMP3Decoder::readBits(int param_1,uint param_2);

// Original: sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0
// Address: 004e2dd0
void __cdecl CMP3Decoder::readBit(undefined4 param_1);

// Original: sound_mp3.cpp_CMP3Decoder_putByte_FUN_004e2de0
// Address: 004e2de0
void __cdecl CMP3Decoder::putByte(int param_1,undefined4 param_2,int param_3);

// Original: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_004e2e40
// Address: 004e2e40
void __cdecl CMP3Decoder::unreadBits(int param_1,int param_2);

// Original: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0
// Address: 004e2ea0
void __cdecl CMP3Decoder::rewindBytes(int param_1,int param_2);

// Original: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0
// Address: 004e2ed0
undefined4 CMP3Decoder::huffmanDecode(undefined4 param_1,char *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6);

// Original: sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004e3130
// Address: 004e3130
void __cdecl CFileBitStream::readFrameHeader(undefined4 param_1,int *param_2);

// Original: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004e31f0
// Address: 004e31f0
void __cdecl CFileBitStream::readAllocationValues(undefined4 param_1,int param_2,int param_3);

// Original: sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_004e3320
// Address: 004e3320
void __cdecl CFileBitStream::readAllocationTable(undefined4 param_1,int param_2,int param_3);

// Original: sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_004e33d0
// Address: 004e33d0
void __cdecl CFileBitStream::readScalefactors(undefined4 param_1,int param_2,int param_3,int param_4);

// Original: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460
// Address: 004e3460
void __cdecl CFileBitStream::readScaleFactorsSCFSI(undefined4 param_1,int param_2,int param_3,int param_4,int param_5);

// Original: sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0
// Address: 004e36d0
void __cdecl CFileBitStream::readQuantizedSamples(undefined4 param_1,int param_2,int param_3,int param_4);

// Original: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0
// Address: 004e37d0
void __cdecl CFileBitStream::readQuantizedSamplesGrouped(undefined4 param_1,int param_2,int param_3,int param_4);

// Original: sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_004e3a60
// Address: 004e3a60
void __cdecl requantizeLayer3SamplesSimple(int param_1,int param_2,int param_3,int param_4);

// Original: sound_mp3.cpp_requantizeSamples_FUN_004e3d30
// Address: 004e3d30
void __cdecl requantizeSamples(int param_1,int param_2,int param_3,int param_4);

// Original: sound_mp3.cpp_applyScalefactorsToSubbands_FUN_004e3e70
// Address: 004e3e70
void __cdecl applyScalefactorsToSubbands(int param_1,int param_2,int param_3,int param_4);

// Original: sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070
// Address: 004e4070
int __cdecl CMP3Decoder::synthesisFilterbank(int param_1,int param_2,int param_3,int param_4);

// Original: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320
// Address: 004e4320
void __cdecl CMP3Decoder::readLayer3SideInfo(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);

// Original: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0
// Address: 004e48a0
void __cdecl CMP3Decoder::readLayer3Scalefactors(undefined4 param_1,int param_2,int param_3,int param_4,int param_5);

// Original: sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70
// Address: 004e4c70
void CMP3Decoder::decodeScalefacCompress(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int *param_6);

// Original: sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004e5000
// Address: 004e5000
void CMP3Decoder::readLayer3ScalefactorsLSF(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6);

// Original: sound_mp3.cpp_requantizeLayer3Samples_FUN_004e58d0
// Address: 004e58d0
void __cdecl requantizeLayer3Samples(uint *param_1,float *param_2,int param_3,int param_4,int param_5,int *param_6);

// Original: sound_mp3.cpp_reorderShortBlockSamples_FUN_004e5d80
// Address: 004e5d80
void __cdecl reorderShortBlockSamples(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4);

// Original: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0
// Address: 004e60c0
void __cdecl calculateIntensityStereoRatio(int param_1,double param_2,int param_3,int param_4);

// Original: sound_mp3.cpp_antiAliasingButterfly_FUN_004e7030
// Address: 004e7030
void __cdecl antiAliasingButterfly(float *param_1,float *param_2,int param_3);

// Original: sound_mp3.cpp_applyPolyphaseWindow_FUN_004e7210
// Address: 004e7210
void __cdecl applyPolyphaseWindow(float *param_1,int param_2,int param_3);

// Original: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_004e7720
// Address: 004e7720
void __cdecl CMP3Decoder::synthesisPoly(int param_1,undefined4 param_2,float *param_3,int param_4,int param_5,int param_6);

// Original: sound_mp3.cpp_calculateMainDataSize_FUN_004e77d0
// Address: 004e77d0
int calculateMainDataSize(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);

// Original: sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90
// Address: 004e7d90
undefined1 * __cdecl CMP3Decoder::ctor(undefined1 *param_1);

// Original: sound_mp3.cpp_CMP3Decoder_dtor_FUN_004e7dd0
// Address: 004e7dd0
undefined4 __cdecl CMP3Decoder::dtor(undefined4 param_1);

// Original: sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0
// Address: 004e7df0
void __cdecl CMP3Decoder::openFile(char *param_1,char *param_2);

// Original: sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260
// Address: 004e8260
void __cdecl CMP3Decoder::free(undefined1 *param_1);

// Original: sound_mp3.cpp_CMP3Decoder_read_FUN_004e82d0
// Address: 004e82d0
int __cdecl CMP3Decoder::read(char *param_1,undefined4 *param_2,int param_3);

// Original: sound_mp3.cpp_CMP3Decoder_seek_FUN_004e8410
// Address: 004e8410
undefined4 __cdecl CMP3Decoder::seek(int param_1,int param_2);

// Original: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0
// Address: 004e85b0
int __cdecl CMP3Decoder::decodeFrame(int **param_1,undefined2 *param_2);
