#pragma once

// Function prototypes for support/codec.cpp
// Generated from Ghidra function signatures

// Original: support_codec.cpp_resetBitBuffer_FUN_00438a90
// Address: 00438a90
void __cdecl resetBitBuffer(undefined4 *param_1);

// Original: support_codec.cpp_readBitsFromStream_FUN_00438ab0
// Address: 00438ab0
uint __cdecl readBitsFromStream(byte *param_1,int param_2,int *param_3,int *param_4);

// Original: support_codec.cpp_writeBitsToStream_FUN_00438c40
// Address: 00438c40
void __cdecl writeBitsToStream(byte *param_1,int param_2,uint param_3,undefined4 param_4);

// Original: support_codec.cpp_flushBitBuffer_FUN_00438d60
// Address: 00438d60
void flushBitBuffer(int *param_1,undefined4 param_2);

// Original: support_codec.cpp_extractBitsFromBuffer_FUN_00438dc0
// Address: 00438dc0
uint __cdecl extractBitsFromBuffer(byte *param_1,int param_2,int *param_3,int *param_4);

// Original: support_codec.cpp_CCodec_ctor_FUN_00438f20
// Address: 00438f20
void __cdecl CCodec::ctor(undefined4 *param_1);

// Original: support_codec.cpp_CCodec_dtor_FUN_00438f30
// Address: 00438f30
undefined4 * __cdecl CCodec::dtor(undefined4 *param_1,uint param_2);

// Original: support_codec.cpp_CCodec_init_FUN_00438f50
// Address: 00438f50
void CCodec::init(void);

// Original: support_codec.cpp_CCodec_finalize_FUN_00438f80
// Address: 00438f80
undefined4 CCodec::finalize(void);

// Original: support_codec.cpp_CCodec_process_FUN_00438f90
// Address: 00438f90
undefined4 CCodec::process(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4);

// Original: support_codec.cpp_CCodec_processToBuffer_FUN_00439000
// Address: 00439000
int CCodec::processToBuffer(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,int param_6);

// Original: support_codec.cpp_CCodec_processFromBuffer_FUN_004390b0
// Address: 004390b0
undefined4 __cdecl CCodec::processFromBuffer(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);

// Original: support_codec.cpp_CCodec_processBuffer_FUN_00439120
// Address: 00439120
undefined4 CCodec::processBuffer(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5 ,undefined4 param_6);

// Original: support_codec.cpp_CCodec_processFiles_FUN_004391b0
// Address: 004391b0
int CCodec::processFiles(int *param_1,undefined4 param_2,undefined4 param_3);

// Original: support_codec.cpp_CCodec_finalizeBuffer_FUN_004392d0
// Address: 004392d0
undefined4 CCodec::finalizeBuffer(int *param_1,undefined4 param_2,int *param_3);

// Original: support_codec.cpp_CLZWDictionary_ctor_FUN_00439350
// Address: 00439350
void __cdecl CLZWDictionary::ctor(undefined4 *param_1);

// Original: support_codec.cpp_CLZWDictionary_dtor_FUN_00439370
// Address: 00439370
undefined4 __cdecl CLZWDictionary::dtor(undefined4 param_1);

// Original: support_codec.cpp_CLZWDictionary_free_FUN_00439390
// Address: 00439390
void __cdecl CLZWDictionary::free(undefined4 *param_1);

// Original: support_codec.cpp_CLZWDictionary_init_FUN_004393d0
// Address: 004393d0
void __cdecl CLZWDictionary::init(int *param_1,int param_2,int param_3);

// Original: support_codec.cpp_CLZWDictionary_initTable_FUN_00439450
// Address: 00439450
void __cdecl CLZWDictionary::initTable(int param_1);

// Original: support_codec.cpp_CLZWDictionary_findCode_FUN_004394b0
// Address: 004394b0
int __cdecl CLZWDictionary::findCode(int param_1,int param_2,int param_3);

// Original: support_codec.cpp_CLZWDictionary_addNode_FUN_004394f0
// Address: 004394f0
undefined4 __cdecl CLZWDictionary::addNode(int *param_1,undefined4 param_2,int param_3);

// Original: support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_00439590
// Address: 00439590
uint __cdecl CLZWDictionary::readCodeFromStream(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: support_codec.cpp_CLZWDictionary_readCodeFromBuffer_FUN_00439630
// Address: 00439630
uint __cdecl CLZWDictionary::readCodeFromBuffer(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_004396d0
// Address: 004396d0
void CLZWDictionary::writeCodeBits(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);

// Original: support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_00439760
// Address: 00439760
undefined4 CLZWDictionary::writeCodeSequence(int param_1,int param_2,undefined4 param_3);

// Original: support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0
// Address: 004397d0
undefined4 CLZWDictionary::decodeCodeToBuffer(int param_1,int param_2,int *param_3);

// Original: support_codec.cpp_CLZWCompress_ctor_FUN_00439830
// Address: 00439830
void __cdecl CLZWCompress::ctor(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: support_codec.cpp_CLZWCompress_init_FUN_00439880
// Address: 00439880
void __cdecl CLZWCompress::init(int param_1);

// Original: support_codec.cpp_CLZWCompress_process_FUN_004398c0
// Address: 004398c0
undefined4 __cdecl CLZWCompress::process(int param_1,int *param_2,int *param_3,undefined4 param_4);

// Original: support_codec.cpp_CLZWCompress_finalize_FUN_004399a0
// Address: 004399a0
undefined4 __cdecl CLZWCompress::finalize(int param_1,undefined4 param_2);

// Original: support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0
// Address: 004399f0
void __cdecl CLZWDecompress::ctor(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: support_codec.cpp_CLZWDecompress_init_FUN_00439a30
// Address: 00439a30
void __cdecl CLZWDecompress::init(int param_1);

// Original: support_codec.cpp_CLZWDecompress_process_FUN_00439a70
// Address: 00439a70
undefined4 __cdecl CLZWDecompress::process(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: support_codec.cpp_CLZWDecompress_finalize_FUN_00439af0
// Address: 00439af0
undefined4 __cdecl CLZWDecompress::finalize(int param_1,undefined4 param_2);

// Original: support_codec.cpp_CLZWDecompress_processBuffer_FUN_00439b30
// Address: 00439b30
undefined4 __cdecl CLZWDecompress::processBuffer(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,int param_6);

// Original: support_codec.cpp_CLZWDecompress_dtor_FUN_00439c10
// Address: 00439c10
int CLZWDecompress::dtor(int param_1,byte param_2);

// Original: support_codec.cpp_CLZWCompress_dtor_FUN_00439c70
// Address: 00439c70
int CLZWCompress::dtor(int param_1,byte param_2);
