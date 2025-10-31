#pragma once

// Function prototypes for support/codec.cpp
// Generated from Ghidra function signatures

// Original: support_codec.cpp_resetDictionary_FUN_0043e510
// Address: 0043e510
void resetDictionary(CLZWDictionary * dict);

// Original: support_codec.cpp_readBitsFromStream_FUN_0043e530
// Address: 0043e530
int readBitsFromStream(SBitBuffer * bit_buffer, int bit_count, FILE * file_stream, int * bytes_remaining);

// Original: support_codec.cpp_writeBitsToStream_FUN_0043e6c0
// Address: 0043e6c0
void writeBitsToStream(SBitBuffer * bit_buffer, int bit_count, int bit_value, FILE * output_stream);

// Original: support_codec.cpp_flushBitBuffer_FUN_0043e7e0
// Address: 0043e7e0
void flushBitBuffer(SBitBuffer * bit_buffer, FILE * output_stream);

// Original: support_codec.cpp_extractBitsFromBuffer_FUN_0043e840
// Address: 0043e840
int extractBitsFromBuffer(SBitBuffer * bit_state, int bit_count, byte * * output_pos, int * bytes_remaining);

// Original: support_codec.cpp_CCodec_ctor_FUN_0043e9a0
// Address: 0043e9a0
CCodec * CCodec::ctor(CCodec * this_ptr);

// Original: support_codec.cpp_CCodec_dtor_FUN_0043e9b0
// Address: 0043e9b0
CCodec * CCodec::dtor(CCodec * this_ptr, int d1);

// Original: support_codec.cpp_CCodec_init_FUN_0043e9d0
// Address: 0043e9d0
void CCodec::init(CCodec * this_ptr);

// Original: support_codec.cpp_CCodec_finalize_FUN_0043ea00
// Address: 0043ea00
int CCodec::finalize(CCodec * this_ptr, FILE * output_file);

// Original: support_codec.cpp_CCodec_process_FUN_0043ea10
// Address: 0043ea10
int CCodec::process(CCodec * this_ptr, FILE * input_file, int byte_count, FILE * output_file);

// Original: support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80
// Address: 0043ea80
int CCodec::processToBuffer(CCodec * this_ptr, void * input_param, void * context_param, char * output_buffer, int * output_size, int enable_finalize);

// Original: support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30
// Address: 0043eb30
int CCodec::processFromBuffer(CCodec * this_ptr, byte * input, int * input_length, byte * output, int * output_length);

// Original: support_codec.cpp_CCodec_processBuffer_FUN_0043eba0
// Address: 0043eba0
int CCodec::processBuffer(CCodec * this_ptr, byte * input, int * input_length, byte * output, int * output_length, int enable_callback);

// Original: support_codec.cpp_CCodec_processFiles_FUN_0043ec30
// Address: 0043ec30
int CCodec::processFiles(CCodec * this_ptr, char * input_file_path, char * output_file_path);

// Original: support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50
// Address: 0043ed50
int CCodec::finalizeBuffer(CCodec * this_ptr, char * buffer_ptr, int * buffer_size_ptr);

// Original: support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0
// Address: 0043edd0
CLZWDictionary * CLZWDictionary::ctor(CLZWDictionary * this_ptr);

// Original: support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
// Address: 0043edf0
CLZWDictionary * CLZWDictionary::dtor(CLZWDictionary * this_ptr);

// Original: support_codec.cpp_CLZWDictionary_free_FUN_0043ee10
// Address: 0043ee10
void CLZWDictionary::free(CLZWDictionary * this_ptr);

// Original: support_codec.cpp_CLZWDictionary_init_FUN_0043ee60
// Address: 0043ee60
void CLZWDictionary::init(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits, int normal_code_width, int fallback_code_width);

// Original: support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0
// Address: 0043eef0
void CLZWDictionary::initTable(CLZWDictionary * this_ptr);

// Original: support_codec.cpp_CLZWDictionary_findCode_FUN_0043ef50
// Address: 0043ef50
int CLZWDictionary::findCode(CLZWDictionary * this_ptr, int search_code, int start_index);

// Original: support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
// Address: 0043ef90
int CLZWDictionary::addNode(CLZWDictionary * this_ptr, int code, int parent_index);

// Original: support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030
// Address: 0043f030
int CLZWDictionary::readCodeFromStream(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, FILE * input_file, int * bytes_remaining);

// Original: support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0
// Address: 0043f0d0
int CLZWDictionary::writeCodeToStream(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, byte * output_stream, int * bytes_remaining, int code_value);

// Original: support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
// Address: 0043f170
void CLZWDictionary::writeCodeBits(CLZWDictionary * this_ptr, int code_value, SBitBuffer * bit_buffer, FILE * output_stream);

// Original: support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
// Address: 0043f200
int CLZWDictionary::writeCodeSequence(CLZWDictionary * this_ptr, int code, FILE * output_file);

// Original: support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270
// Address: 0043f270
int CLZWDictionary::decodeCodeToBuffer(CLZWDictionary * this_ptr, int code, char * * buffer_ptr_ptr);

// Original: support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0
// Address: 0043f2d0
CLZWCompress * CLZWCompress::ctor(CLZWCompress * this_ptr);

// Original: support_codec.cpp_CLZWCompress_init_FUN_0043f320
// Address: 0043f320
void CLZWCompress::init(CLZWCompress * this_ptr);

// Original: support_codec.cpp_CLZWCompress_process_FUN_0043f360
// Address: 0043f360
int CLZWCompress::process(CLZWCompress * this_ptr, FILE * input_file, int byte_count, FILE * output_file);

// Original: support_codec.cpp_CLZWCompress_finalize_FUN_0043f440
// Address: 0043f440
int CLZWCompress::finalize(CLZWCompress * this_ptr, FILE * output_file);

// Original: support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490
// Address: 0043f490
CLZWDecompress * CLZWDecompress::ctor(CLZWDecompress * this_ptr, int buffer_size, int initial_bits);

// Original: support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0
// Address: 0043f4d0
void CLZWDecompress::init(CLZWDecompress * this_ptr);

// Original: support_codec.cpp_CLZWDecompress_process_FUN_0043f510
// Address: 0043f510
int CLZWDecompress::process(CLZWDecompress * this_ptr, FILE * input_file, int byte_count, FILE * output_file);

// Original: support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590
// Address: 0043f590
int CLZWDecompress::finalize(CLZWDecompress * this_ptr, FILE * output_file);

// Original: support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
// Address: 0043f5d0
int CLZWDecompress::processBuffer(CLZWDecompress * this_ptr, byte * input, int * input_length, byte * output, int * output_length, int enable_callback);

// Original: support_codec.cpp_CLZWDecompress_isDictionaryEmpty_FUN_0043f690
// Address: 0043f690
int CLZWDecompress::isDictionaryEmpty(CLZWDecompress * this_ptr);

// Original: support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0
// Address: 0043f6b0
CLZWDecompress * CLZWDecompress::dtor(CLZWDecompress * this_ptr, uint d1, uint d2, uint d3);

// Original: support_codec.cpp_CLZWCompress_dtor_FUN_0043f710
// Address: 0043f710
CLZWCompress * CLZWCompress::dtor(CLZWCompress * this_ptr, uint d1, uint d2, uint d3, uint d4);
