#pragma once

// Function prototypes for sound/mp3.cpp
// Generated from Ghidra function signatures

// Original: sound_mp3.cpp_validateLayer2AllocationTable_FUN_0052e8d0
// Address: 0052e8d0
int __cdecl validateLayer2AllocationTable(SMpegFrame *frame);

// Original: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_0052ea10
// Address: 0052ea10
void * __cdecl getMpegLayer2AllocationTable(int layer,int mode_extension);

// Original: sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80
// Address: 0052ea80
void __cdecl calculateMpegFrame(SMpegFrame *frame);

// Original: sound_mp3.cpp_CFileBitStream_fillBuffer_FUN_0052ec40
// Address: 0052ec40
void __cdecl CFileBitStream::fillBuffer(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_reset_FUN_0052eca0
// Address: 0052eca0
void __cdecl CFileBitStream::reset(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_init_FUN_0052ecf0
// Address: 0052ecf0
void __cdecl CFileBitStream::init(CFileBitStream *this_ptr,_FILE *file_handle,int buffer_size,int stream_length);

// Original: sound_mp3.cpp_CFileBitStream_close_FUN_0052edf0
// Address: 0052edf0
void __cdecl CFileBitStream::close(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
// Address: 0052ee50
uint __cdecl CFileBitStream::readBit(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
// Address: 0052ef40
uint __cdecl CFileBitStream::readBits(CFileBitStream *bitstream,int num_bits);

// Original: sound_mp3.cpp_CFileBitStream_getTotalBitsRead_FUN_0052f0c0
// Address: 0052f0c0
int __cdecl CFileBitStream::getTotalBitsRead(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_getErrorFlag_FUN_0052f0d0
// Address: 0052f0d0
int __cdecl CFileBitStream::getErrorFlag(CFileBitStream *this_ptr);

// Original: sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_0052f0e0
// Address: 0052f0e0
int __cdecl CFileBitStream::syncToPattern(CFileBitStream *this_ptr,uint sync_pattern,uint pattern_bits);

// Original: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
// Address: 0052f160
uint __cdecl CMP3Decoder::getTotalBitsRead(CMP3Decoder *this_ptr);

// Original: sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
// Address: 0052f170
uint __cdecl CMP3Decoder::readBits(CMP3Decoder *this_ptr,uint num_bits);

// Original: sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
// Address: 0052f250
void __cdecl CMP3Decoder::readBit(CMP3Decoder *this_ptr);

// Original: sound_mp3.cpp_CMP3Decoder_putByte_FUN_0052f260
// Address: 0052f260
void __cdecl CMP3Decoder::putByte(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte);

// Original: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0
// Address: 0052f2c0
void __cdecl CMP3Decoder::unreadBits(CMP3Decoder *this_ptr,int num_bits);

// Original: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_0052f320
// Address: 0052f320
void __cdecl CMP3Decoder::rewindBytes(CMP3Decoder *this_ptr,int num_bytes);

// Original: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
// Address: 0052f350
int __cdecl CMP3Decoder::huffmanDecode(CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out, int *w_out);

// Original: sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
// Address: 0052f5b0
void __cdecl CFileBitStream::readFrameHeader(CFileBitStream *this_ptr,SMpegFrameHeader *header_out);

// Original: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670
// Address: 0052f670
void __cdecl CFileBitStream::readAllocationValues(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation, SBitAllocationTable *alloc_table_info);

// Original: sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
// Address: 0052f7a0
void __cdecl CFileBitStream::readAllocationTable(CFileBitStream *this_ptr,uint *output_array,SBitAllocationTable *alloc_table);

// Original: sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_0052f850
// Address: 0052f850
void __cdecl CFileBitStream::readScalefactors(CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices, SMpegSubbandScalefactors *scalefactors,SBitAllocationTable *alloc_info);

// Original: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
// Address: 0052f8e0
void __cdecl CFileBitStream::readScaleFactorsSCFSI(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array, SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array, SBitAllocationTable *allocation_table);

// Original: sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
// Address: 0052fb50
void __cdecl CFileBitStream::readQuantizedSamples(CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples, SMpegSubbandAllocation *allocation,SBitAllocationTable *alloc_table);

// Original: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
// Address: 0052fc50
void __cdecl CFileBitStream::readQuantizedSamplesGrouped(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array, SMpegSubbandAllocation *allocation_array,SBitAllocationTable *allocation_table);

// Original: sound_mp3.cpp_requantizeLayer3Samples_FUN_0052fee0
// Address: 0052fee0
void __cdecl requantizeLayer3Samples(int *scalefactor_indices,uint *quantized_samples,float *dequantized_output, SMpegFrame *frame_info);

// Original: sound_mp3.cpp_requantizeSamples_FUN_005301b0
// Address: 005301b0
void __cdecl requantizeSamples(SMpegSubbandScalefactors *quantized_samples,SMpegSubbandScalefactors *dequantized_samples ,SMpegSubbandAllocation *allocation,SMpegFrameHeader *header);

// Original: sound_mp3.cpp_applyScalefactorsToSubbands_FUN_005302f0
// Address: 005302f0
void __cdecl applyScalefactorsToSubbands(float *spectral_samples,int *scalefactor_band_indices,SMpegFrame *frame_info, int channel_or_granule_index);

// Original: sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_005303a0
// Address: 005303a0
void __cdecl applyScalefactorsToLayer2Samples(float *sample_array,int *scalefactor_indices,SMpegFrame *frame_info);

// Original: sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400
// Address: 00530400
void __cdecl initializeSynthesisDctTable(float *output_dct_table);

// Original: sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
// Address: 005304f0
void __cdecl CMP3Decoder::synthesisFilterbank(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output);

// Original: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
// Address: 005307a0
void __cdecl CMP3Decoder::readLayer3SideInfo(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3Granule *side_info_array, SMpegFrame *frame);

// Original: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
// Address: 00530d20
void __cdecl CMP3Decoder::readLayer3Scalefactors(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info,int channel, int granule_index,SMpegFrame *frame);

// Original: sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
// Address: 005310f0
void __cdecl CMP3Decoder::decodeScalefacCompress(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info,int channel, int granule,SMpegFrame *frame);

// Original: sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
// Address: 00531480
void __cdecl CMP3Decoder::readLayer3ScalefactorsLSF(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info,int channel, int granule,SMpegFrame *frame);

// Original: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
// Address: 00531680
uint __cdecl CMP3Decoder::huffmanDecodeLayer3Samples(CMP3Decoder *this_ptr,float *spectral_dest,SMpegLayer3Granule *granule_info,int channel, int granule,SMpegFrame *frame,int bit_budget);

// Original: sound_mp3.cpp_requantizeLayer3Samples_FUN_00531d50
// Address: 00531d50
void __cdecl requantizeLayer3Samples(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples, int *scalefactor_data,SMpegLayer3Granule *granule_info,int channel_index, SMpegLayer3Granule **granule_array);

// Original: sound_mp3.cpp_reorderShortBlockSamples_FUN_00532200
// Address: 00532200
void __cdecl reorderShortBlockSamples(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples, SMpegFrame *frame_info,SMpegLayer3Granule **granule_array);

// Original: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540
// Address: 00532540
void __cdecl calculateIntensityStereoRatio(int intensity_position,double ratio,int unused_param3,int sample_index, float *output_buffer);

// Original: sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005325e0
// Address: 005325e0
void __cdecl mpegLayer3StereoProcess(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples, SMpegScalefactorBandData *scalefactor_data,SMpegFrame *frame_info, SMpegLayer3Granule **granule_array);

// Original: sound_mp3.cpp_antiAliasingButterfly_FUN_005334b0
// Address: 005334b0
void __cdecl antiAliasingButterfly(float *input_samples,float *output_samples,SMpegFrame *frame_info,void *unused_param4);

// Original: sound_mp3.cpp_applyPolyphaseWindow_FUN_00533690
// Address: 00533690
void __cdecl applyPolyphaseWindow(float *input_samples,float *output_samples,int mpeg_block_type);

// Original: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
// Address: 00533ba0
void __cdecl CMP3Decoder::synthesisPoly(CMP3Decoder *this_ptr,void *unknown_param2,float *output_buffer,int subband_index, int channel,SMpegFrame *frame_info,void *unknown_param7);

// Original: sound_mp3.cpp_calculateMainDataSize_FUN_00533c50
// Address: 00533c50
int __cdecl calculateMainDataSize(SMpegFrame frame_info);

// Original: sound_mp3.cpp_initializeHuffmanTables_FUN_00533d30
// Address: 00533d30
int __cdecl initializeHuffmanTables(void);

// Original: sound_mp3.cpp_initializeHuffmanTables_FUN_00533f80
// Address: 00533f80
void __cdecl initializeHuffmanTables(void);

// Original: sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210
// Address: 00534210
void __cdecl testMP3DecoderBenchmark(void);

// Original: sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
// Address: 005344f0
CMP3Decoder * __cdecl CMP3Decoder::ctor(CMP3Decoder *this_ptr);

// Original: sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
// Address: 00534530
CMP3Decoder * __cdecl CMP3Decoder::dtor(CMP3Decoder *this_ptr,uint flags);

// Original: sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
// Address: 00534550
void __cdecl CMP3Decoder::openFile(CMP3Decoder *this_ptr,char *filename);

// Original: sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630
// Address: 00534630
int __cdecl CMP3Decoder::parseHeader(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size);

// Original: sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
// Address: 005349e0
void __cdecl CMP3Decoder::free(CMP3Decoder *this_ptr);

// Original: sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
// Address: 00534a60
int __cdecl CMP3Decoder::read(CMP3Decoder *this_ptr,short *output_buffer,int samples_requested);

// Original: sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0
// Address: 00534ba0
int __cdecl CMP3Decoder::seek(CMP3Decoder *this_ptr,int sample_offset);

// Original: sound_mp3.cpp_CMP3Decoder_getTotalSamples_FUN_00534d10
// Address: 00534d10
int __cdecl CMP3Decoder::getTotalSamples(CMP3Decoder *this_ptr);

// Original: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
// Address: 00534d40
int __cdecl CMP3Decoder::decodeFrame(CMP3Decoder *this_ptr);
