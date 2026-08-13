#pragma once

// Function prototypes for sound/mp3.cpp
// Generated from Ghidra function signatures

// Original: sound_mp3.cpp_validateLayer2AllocationTable_FUN_004e2480
// Address: 004e2480
int __cdecl validateLayer2AllocationTable(SMpegFrame *frame);

// Original: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_004e25c0
// Address: 004e25c0
void * __cdecl getMpegLayer2AllocationTable(int layer,int mode_extension);

// Original: sound_mp3.cpp_calculateMpegFrame_FUN_004e2630
// Address: 004e2630
void __cdecl calculateMpegFrame(SMpegFrame *frame);

// Original: sound_mp3.cpp_CFileBitStream_fillBuffer_FUN_004e27f0
// Address: 004e27f0
void __cdecl CFileBitStream::fillBuffer(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_reset_FUN_004e2850
// Address: 004e2850
void __cdecl CFileBitStream::reset(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_FUN_004e28a0
// Address: 004e28a0
void __cdecl CFileBitStream(CFileBitStream *this_ptr,_FILE *param_2,ulong param_3,int param_4);

// Original: sound_mp3.cpp_CFileBitStream_FUN_004e2980
// Address: 004e2980
void __cdecl CFileBitStream(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0
// Address: 004e29d0
uint __cdecl CFileBitStream::readBit(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
// Address: 004e2ac0
uint __cdecl CFileBitStream::readBits(CFileBitStream *bitstream,int num_bits);

// Original: sound_mp3.cpp_CFileBitStream_getTotalBitsRead_FUN_004e2c40
// Address: 004e2c40
int __cdecl CFileBitStream::getTotalBitsRead(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_FUN_004e2c50
// Address: 004e2c50
int __cdecl CFileBitStream(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_004e2c60
// Address: 004e2c60
int __cdecl CFileBitStream::syncToPattern(CFileBitStream *this_ptr,uint sync_pattern,uint pattern_bits);

// Original: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0
// Address: 004e2ce0
uint __cdecl CMP3Decoder::getTotalBitsRead(CMP3Decoder *this_ptr);

// Original: sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0
// Address: 004e2cf0
uint __cdecl CMP3Decoder::readBits(CMP3Decoder *this_ptr,uint num_bits);

// Original: sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0
// Address: 004e2dd0
uint __cdecl CMP3Decoder::readBit(CMP3Decoder *this_ptr);

// Original: sound_mp3.cpp_CMP3Decoder_putByte_FUN_004e2de0
// Address: 004e2de0
void __cdecl CMP3Decoder::putByte(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte);

// Original: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_004e2e40
// Address: 004e2e40
void __cdecl CMP3Decoder::unreadBits(CMP3Decoder *this_ptr,int num_bits);

// Original: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0
// Address: 004e2ea0
void __cdecl CMP3Decoder::rewindBytes(CMP3Decoder *this_ptr,int num_bytes);

// Original: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0
// Address: 004e2ed0
int __cdecl CMP3Decoder::huffmanDecode(CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out,int *w_out);

// Original: sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004e3130
// Address: 004e3130
void __cdecl CFileBitStream::readFrameHeader(CFileBitStream *this_ptr,SMpegFrameHeader **header_out);

// Original: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004e31f0
// Address: 004e31f0
void __cdecl CFileBitStream::readAllocationValues(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegFrame *frame);

// Original: sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_004e3320
// Address: 004e3320
void __cdecl CFileBitStream::readAllocationTable(CFileBitStream *this_ptr,uint *output_array,SMpegFrame *frame);

// Original: sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_004e33d0
// Address: 004e33d0
void __cdecl CFileBitStream::readScalefactors(CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices,SMpegSubbandScalefactors *scalefactors,SMpegFrame *frame);

// Original: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460
// Address: 004e3460
void __cdecl CFileBitStream::readScaleFactorsSCFSI(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SMpegFrame *frame);

// Original: sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0
// Address: 004e36d0
void __cdecl CFileBitStream::readQuantizedSamples(CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame);

// Original: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0
// Address: 004e37d0
void __cdecl CFileBitStream::readQuantizedSamplesGrouped(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,SMpegSubbandAllocation *allocation_array,SMpegFrame *frame);

// Original: sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_004e3a60
// Address: 004e3a60
void __cdecl requantizeLayer3SamplesSimple(int *scalefactor_indices,uint *quantized_samples,float *dequantized_output,SMpegFrame *frame);

// Original: sound_mp3.cpp_requantizeSamples_FUN_004e3d30
// Address: 004e3d30
void __cdecl requantizeSamples(SMpegSubbandScalefactors *quantized_samples,SMpegSubbandScalefactors *dequantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame);

// Original: sound_mp3.cpp_applyScalefactorsToSubbands_FUN_004e3e70
// Address: 004e3e70
void __cdecl applyScalefactorsToSubbands(float *spectral_samples,int *scalefactor_band_indices,SMpegFrame *frame_info,int channel_or_granule_index);

// Original: sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_004e3f20
// Address: 004e3f20
void __cdecl applyScalefactorsToLayer2Samples(float *sample_array,int *scalefactor_indices,SMpegFrame *frame_info);

// Original: sound_mp3.cpp_initializeSynthesisDctTable_FUN_004e3f80
// Address: 004e3f80
void __cdecl initializeSynthesisDctTable(float *output_dct_table);

// Original: sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070
// Address: 004e4070
void __cdecl CMP3Decoder::synthesisFilterbank(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output);

// Original: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320
// Address: 004e4320
void __cdecl CMP3Decoder::readLayer3SideInfo(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame);

// Original: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0
// Address: 004e48a0
void __cdecl CMP3Decoder::readLayer3Scalefactors(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule_index,SMpegFrame *frame);

// Original: sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70
// Address: 004e4c70
void __cdecl CMP3Decoder::decodeScalefacCompress(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame);

// Original: sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004e5000
// Address: 004e5000
void __cdecl CMP3Decoder::readLayer3ScalefactorsLSF(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame);

// Original: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004e5200
// Address: 004e5200
void __cdecl CMP3Decoder::huffmanDecodeLayer3Samples(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame);

// Original: sound_mp3.cpp_requantizeLayer3Samples_FUN_004e58d0
// Address: 004e58d0
void __cdecl requantizeLayer3Samples(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3GranuleInfo *granule,int channel_index,SMpegFrame *frame);

// Original: sound_mp3.cpp_reorderShortBlockSamples_FUN_004e5d80
// Address: 004e5d80
void __cdecl reorderShortBlockSamples(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame);

// Original: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0
// Address: 004e60c0
void __cdecl calculateIntensityStereoRatio(int intensity_position,double ratio,int sample_index,float *ratio_buffer);

// Original: sound_mp3.cpp_mpegLayer3StereoProcess_FUN_004e6160
// Address: 004e6160
void __cdecl mpegLayer3StereoProcess(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame);

// Original: sound_mp3.cpp_antiAliasingButterfly_FUN_004e7030
// Address: 004e7030
void __cdecl antiAliasingButterfly(float *input_samples,float *output_samples,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header);

// Original: sound_mp3.cpp_applyPolyphaseWindow_FUN_004e7210
// Address: 004e7210
void __cdecl applyPolyphaseWindow(float *input_samples,float *output_samples,int mpeg_block_type);

// Original: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_004e7720
// Address: 004e7720
void __cdecl CMP3Decoder::synthesisPoly(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index,int channel,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header);

// Original: sound_mp3.cpp_calculateMainDataSize_FUN_004e77d0
// Address: 004e77d0
int __cdecl calculateMainDataSize(SMpegFrame frame_info);

// Original: sound_mp3.cpp_initializeHuffmanTables_FUN_004e78b0
// Address: 004e78b0
int __cdecl initializeHuffmanTables(void);

// Original: sound_mp3.cpp_initializeHuffmanTablesOnce_FUN_004e7b00
// Address: 004e7b00
void __cdecl initializeHuffmanTablesOnce(void);

// Original: sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90
// Address: 004e7d90
CMP3Decoder * __cdecl CMP3Decoder::ctor(CMP3Decoder *this_ptr);

// Original: sound_mp3.cpp_CMP3Decoder_dtor_FUN_004e7dd0
// Address: 004e7dd0
CMP3Decoder * __cdecl CMP3Decoder::dtor(CMP3Decoder *this_ptr,uint flags);

// Original: sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0
// Address: 004e7df0
void __cdecl CMP3Decoder::openFile(CMP3Decoder *this_ptr,char *filename);

// Original: sound_mp3.cpp_FUN_004e7ed0
// Address: 004e7ed0
int __cdecl FUN_004e7ed0(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size);

// Original: sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260
// Address: 004e8260
void __cdecl CMP3Decoder::free(CMP3Decoder *this_ptr);

// Original: sound_mp3.cpp_CMP3Decoder_read_FUN_004e82d0
// Address: 004e82d0
int __cdecl CMP3Decoder::read(CMP3Decoder *this_ptr,short *output_buffer,int samples_requested);

// Original: sound_mp3.cpp_CMP3Decoder_seek_FUN_004e8410
// Address: 004e8410
int __cdecl CMP3Decoder::seek(CMP3Decoder *this_ptr,int sample_offset);

// Original: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0
// Address: 004e85b0
int __cdecl CMP3Decoder::decodeFrame(CMP3Decoder *this_ptr,short *pcm_output);
