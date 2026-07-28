#pragma once

// Function prototypes for support/codec.cpp
// Generated from Ghidra function signatures

// Original: support_codec.cpp_readByteWithCount_FUN_00438a40
// Address: 00438a40
uint readByteWithCount(_istream *param_1,int *param_2);

// Original: support_codec.cpp_resetBitBuffer_FUN_00438a90
// Address: 00438a90
void __cdecl resetBitBuffer(SBitBuffer *bit_buffer);

// Original: support_codec.cpp_readBitsFromStream_FUN_00438ab0
// Address: 00438ab0
int __cdecl readBitsFromStream(SBitBuffer *bit_buffer,int bit_count,_istream *istream,int *bytes_remaining);

// Original: support_codec.cpp_writeBitsToStream_FUN_00438c40
// Address: 00438c40
void __cdecl writeBitsToStream(SBitBuffer *bit_buffer,int bit_count,int bit_value,_ostream *ostream);

// Original: support_codec.cpp_flushBitBuffer_FUN_00438d60
// Address: 00438d60
void flushBitBuffer(int *param_1,_ostream *param_2);

// Original: support_codec.cpp_extractBitsFromBuffer_FUN_00438dc0
// Address: 00438dc0
int __cdecl extractBitsFromBuffer(SBitBuffer *bit_state,int bit_count,char **output_pos,int *bytes_remaining);

// Original: support_codec.cpp_CCodec_ctor_FUN_00438f20
// Address: 00438f20
CCodec * __cdecl CCodec::ctor(CCodec *this_ptr);

// Original: support_codec.cpp_CCodec_dtor_FUN_00438f30
// Address: 00438f30
CCodec * __cdecl CCodec::dtor(CCodec *this_ptr,uint flags);

// Original: support_codec.cpp_CCodec_init_FUN_00438f50
// Address: 00438f50
void CCodec::init(void);

// Original: support_codec.cpp_CCodec_finalize_FUN_00438f80
// Address: 00438f80
undefined4 CCodec::finalize(void);

// Original: support_codec.cpp_CCodec_process_FUN_00438f90
// Address: 00438f90
undefined4 CCodec::process(undefined4 param_1,_istream *param_2,int *param_3,_ostream *param_4);

// Original: support_codec.cpp_CCodec_processToBuffer_FUN_00439000
// Address: 00439000
int CCodec::processToBuffer(int *param_1,undefined4 param_2,undefined4 param_3,char *param_4,int *param_5,int param_6);

// Original: support_codec.cpp_CCodec_processFromBuffer_FUN_004390b0
// Address: 004390b0
int __cdecl CCodec::processFromBuffer(CCodec *this_ptr,char *input,int *input_length,_ostream *ostream);

// Original: support_codec.cpp_CCodec_processBuffer_FUN_00439120
// Address: 00439120
undefined4 CCodec::processBuffer(int *param_1,char *param_2,int *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: support_codec.cpp_CCodec_processFiles_FUN_004391b0
// Address: 004391b0
int CCodec::processFiles(int *param_1,char *param_2,char *param_3);

// Original: support_codec.cpp_CCodec_finalizeBuffer_FUN_004392d0
// Address: 004392d0
undefined4 CCodec::finalizeBuffer(int *param_1,char *param_2,int *param_3);

// Original: support_codec.cpp_CLZWDictionary_ctor_FUN_00439350
// Address: 00439350
CLZWDictionary * __cdecl CLZWDictionary::ctor(CLZWDictionary *this_ptr);

// Original: support_codec.cpp_CLZWDictionary_dtor_FUN_00439370
// Address: 00439370
CLZWDictionary * __cdecl CLZWDictionary::dtor(CLZWDictionary *this_ptr,uint flags);

// Original: support_codec.cpp_CLZWDictionary_free_FUN_00439390
// Address: 00439390
void __cdecl CLZWDictionary::free(CLZWDictionary *this_ptr);

// Original: support_codec.cpp_CLZWDictionary_init_FUN_004393d0
// Address: 004393d0
void __cdecl CLZWDictionary::init(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits);

// Original: support_codec.cpp_CLZWDictionary_initTable_FUN_00439450
// Address: 00439450
void __cdecl CLZWDictionary::initTable(CLZWDictionary *this_ptr);

// Original: support_codec.cpp_CLZWDictionary_findCode_FUN_004394b0
// Address: 004394b0
int __cdecl CLZWDictionary::findCode(CLZWDictionary *this_ptr,int search_code,int start_index);

// Original: support_codec.cpp_CLZWDictionary_addNode_FUN_004394f0
// Address: 004394f0
int __cdecl CLZWDictionary::addNode(CLZWDictionary *this_ptr,int code,int parent_index);

// Original: support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_00439590
// Address: 00439590
int __cdecl CLZWDictionary::readCodeFromStream(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining);

// Original: support_codec.cpp_CLZWDictionary_readCodeFromBuffer_FUN_00439630
// Address: 00439630
int __cdecl CLZWDictionary::readCodeFromBuffer(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,char **input_buffer,int *bytes_remaining);

// Original: support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_004396d0
// Address: 004396d0
void CLZWDictionary::writeCodeBits(int param_1,uint param_2,SBitBuffer *param_3,_ostream *param_4);

// Original: support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_00439760
// Address: 00439760
undefined4 CLZWDictionary::writeCodeSequence(int param_1,int param_2,_ostream *param_3);

// Original: support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0
// Address: 004397d0
undefined4 CLZWDictionary::decodeCodeToBuffer(int param_1,int param_2,int *param_3);

// Original: support_codec.cpp_CLZWCompress_ctor_FUN_00439830
// Address: 00439830
CLZWCompress * __cdecl CLZWCompress::ctor(CLZWCompress *this_ptr,int buffer_size,int num_bits);

// Original: support_codec.cpp_CLZWCompress_init_FUN_00439880
// Address: 00439880
void __cdecl CLZWCompress::init(CLZWCompress *this_ptr);

// Original: support_codec.cpp_CLZWCompress_process_FUN_004398c0
// Address: 004398c0
int __cdecl CLZWCompress::process(CLZWCompress *this_ptr,_istream *istream,int *byte_count,_ostream *ostream);

// Original: support_codec.cpp_CLZWCompress_finalize_FUN_004399a0
// Address: 004399a0
int __cdecl CLZWCompress::finalize(CLZWCompress *this_ptr,_ostream *ostream);

// Original: support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0
// Address: 004399f0
CLZWDecompress * __cdecl CLZWDecompress::ctor(CLZWDecompress *this_ptr,int buffer_size,int initial_bits);

// Original: support_codec.cpp_CLZWDecompress_init_FUN_00439a30
// Address: 00439a30
void __cdecl CLZWDecompress::init(CLZWDecompress *this_ptr);

// Original: support_codec.cpp_CLZWDecompress_process_FUN_00439a70
// Address: 00439a70
int __cdecl CLZWDecompress::process(CLZWDecompress *this_ptr,_istream *istream,int *byte_count,_ostream *ostream);

// Original: support_codec.cpp_CLZWDecompress_finalize_FUN_00439af0
// Address: 00439af0
int __cdecl CLZWDecompress::finalize(CLZWDecompress *this_ptr,_ostream *ostream);

// Original: support_codec.cpp_CLZWDecompress_processBuffer_FUN_00439b30
// Address: 00439b30
int __cdecl CLZWDecompress::processBuffer(CLZWDecompress *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback);

// Original: support_codec.cpp_CLZWDecompress_isDictionaryEmpty_FUN_00439bf0
// Address: 00439bf0
bool CLZWDecompress::isDictionaryEmpty(int param_1);

// Original: support_codec.cpp_CLZWDecompress_dtor_FUN_00439c10
// Address: 00439c10
CCodec * CLZWDecompress::dtor(CCodec *param_1,byte param_2);

// Original: support_codec.cpp_CLZWCompress_dtor_FUN_00439c70
// Address: 00439c70
CCodec * CLZWCompress::dtor(CCodec *param_1,byte param_2);
