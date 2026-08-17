#pragma once

// Function prototypes for crt/unknown.cpp
// Generated from Ghidra function signatures

// Original: crt_unknown.c_getc_helper_FUN_00563290
// Address: 00563290
int __cdecl getc::helper(scanf_state_t *state);

// Original: crt_unknown.c_ungetc_helper_FUN_005632b0
// Address: 005632b0
int __watcallStack ungetc::helper(int character,scanf_state_t *state);

// Original: crt_unknown.c_vfscanf_FUN_005632c8
// Address: 005632c8
int __cdecl vfscanf(_FILE *file,char *format,va_list_t args);

// Original: crt_unknown.c___CClose_FUN_005633c4
// Address: 005633c4
int __cdecl ::_CClose(_FILE *file_handle,int close_flags);

// Original: crt_unknown.c_hexDigitToChar_FUN_005633ec
// Address: 005633ec
char __watcallStack hexDigitToChar(int digit);

// Original: crt_unknown.c__tempnam_FUN_005633fc
// Address: 005633fc
void __watcallStack ::tempnam(char *buffer,int file_handle);

// Original: crt_unknown.c_fclose_FUN_005634b0
// Address: 005634b0
int __cdecl fclose(_FILE *file_handle,int force_close_flag);

// Original: crt_unknown.c_InternalHeapAlloc_FUN_005635c0
// Address: 005635c0
void * __cdecl InternalHeapAlloc(ulong size);

// Original: crt_unknown.c_ValidateHeapIntegrity_FUN_005638e0
// Address: 005638e0
void __cdecl ValidateHeapIntegrity(void *ptr);

// Original: crt_unknown.c_StringBufferCallback_FUN_005639f0
// Address: 005639f0
void __cdecl StringBufferCallback(StringOutputContext *context,char character);

// Original: crt_unknown.c_FUN_00563ce0
// Address: 00563ce0
void FUN_00563ce0(void);

// Original: crt_unknown.c_FUN_00563d12
// Address: 00563d12
void FUN_00563d12(void);

// Original: crt_unknown.c_FUN_00563d13
// Address: 00563d13
void FUN_00563d13(void);

// Original: crt_unknown.c_median_of_3_FUN_00563d20
// Address: 00563d20
void * __watcallStack median::of_3(void *a,void *b,void *c,QSORT_COMPARATOR compar);

// Original: crt_unknown.c_memory_swap_FUN_00563d90
// Address: 00563d90
void __watcallRegister memory::swap(void *ptr1,void *ptr2,SIZE_T bytes);

// Original: crt_unknown.c_FillBufferAndGetChar_FUN_00564640
// Address: 00564640
int __watcallStack FillBufferAndGetChar(_FILE *file);

// Original: crt_unknown.c_FillInputBuffer_FUN_00564670
// Address: 00564670
int __watcallStack FillInputBuffer(_FILE *file);

// Original: crt_unknown.c_GetRandomSeedPointer_FUN_00564880
// Address: 00564880
uint * __watcallRegister GetRandomSeedPointer(void);

// Original: crt_unknown.c___arrdtor_FUN_00564915
// Address: 00564915
void * __cdecl ::_arrdtor(WatcomTypeArrayInfo *destroy_info);

// Original: crt_unknown.c_realloc__FUN_00564a88
// Address: 00564a88
void * __cdecl realloc::(void *ptr,ulong new_size);

// Original: crt_unknown.c__atexit_FUN_00564bb0
// Address: 00564bb0
void __cdecl ::atexit(WatcomStaticDestructorNode *exit_node);

// Original: crt_unknown.c_FUN_00564e3d
// Address: 00564e3d
void FUN_00564e3d(int param_1,uint param_2);

// Original: crt_unknown.c_FUN_00564e53
// Address: 00564e53
void FUN_00564e53(int param_1,uint param_2);

// Original: crt_unknown.c_FUN_00564faa
// Address: 00564faa
void FUN_00564faa(int param_1,uint param_2);

// Original: crt_unknown.c_FUN_00564fc0
// Address: 00564fc0
void FUN_00564fc0(int param_1,uint param_2);

// Original: crt_unknown.c_FUN_005650f0
// Address: 005650f0
void FUN_005650f0(int param_1,uint param_2);

// Original: crt_unknown.c_FUN_00565106
// Address: 00565106
void FUN_00565106(int param_1,uint param_2);

// Original: crt_unknown.c_FUN_0056519c
// Address: 0056519c
void FUN_0056519c(int param_1,uint param_2);

// Original: crt_unknown.c_FUN_005651b2
// Address: 005651b2
void FUN_005651b2(int param_1,uint param_2);

// Original: crt_unknown.c_OpenModeStringParser_FUN_005653e0
// Address: 005653e0
int __cdecl OpenModeStringParser(char *mode_string,char *output_flags);

// Original: crt_unknown.c_OpenFileAndInitialize_FUN_0056551c
// Address: 0056551c
_FILE * __cdecl OpenFileAndInitialize(char *filename,char mode_char,int parsed_mode_flags,int stage1_result,int additional_flags,_FILE *file_struct);

// Original: crt_unknown.c_fopenWithFlags_FUN_00565630
// Address: 00565630
_FILE * __cdecl fopenWithFlags(char *filename,char *mode,int flags);

// Original: crt_unknown.c_FUN_005656a4
// Address: 005656a4
_FILE * FUN_005656a4(_FILE *param_1);

// Original: crt_unknown.c_seek_within_buffer_FUN_005657d0
// Address: 005657d0
int __cdecl seek::within_buffer(int offset,_FILE *file);

// Original: crt_unknown.c_seek_within_buffer_FUN_00565814
// Address: 00565814
int __cdecl seek::within_buffer(_FILE *file);

// Original: crt_unknown.c_integer_power_FUN_00565c12
// Address: 00565c12
void __fpureg integer::power(void);

// Original: crt_unknown.c___arrinit_dispatch_FUN_005661c2
// Address: 005661c2
void * __cdecl ::_arrinit_dispatch(void *array_ptr,int element_count,WatcomTypeInfo *type_info);

// Original: crt_unknown.c___vec_new_FUN_005661f4
// Address: 005661f4
void * __cdecl ::_vec_new(void *dest,int element_count,WatcomTypeInfo *type_info);

// Original: crt_unknown.c_FUN_0056621a
// Address: 0056621a
void FUN_0056621a(void *param_1,int param_2,WatcomTypeInfo *param_3);

// Original: crt_unknown.c_normalize_path_separator_FUN_00566250
// Address: 00566250
int __cdecl normalize::path_separator(int ch,int *preferred_separator);

// Original: crt_unknown.c_strncpy_safe_FUN_00566450
// Address: 00566450
void __watcallStack strncpy::safe(char *dest,char *src,int length,int maxlen);

// Original: crt_unknown.c_localtime_r_FUN_00566590
// Address: 00566590
_tm * __cdecl localtime::r(time_t *timer,_tm *result);

// Original: crt_unknown.c_formatTwoDigits_FUN_00566600
// Address: 00566600
void __cdecl formatTwoDigits(char *buffer,int value);

// Original: crt_unknown.c_string_getc_FUN_00566af0
// Address: 00566af0
int __cdecl string::getc(scanf_state_t *state);

// Original: crt_unknown.c_string_ungetc_FUN_00566b18
// Address: 00566b18
int __cdecl string::ungetc(int ch,scanf_state_t *state);

// Original: crt_unknown.c_vsscanf_FUN_00566b20
// Address: 00566b20
int __cdecl vsscanf(char *str,char *format,va_list_t args);

// Original: crt_unknown.c_heapWalk_FUN_00566ba0
// Address: 00566ba0
int __cdecl heapWalk(HeapState *heap_state_ptr,Heap *heap_ptr);

// Original: crt_unknown.c_heapCheck_FUN_00566c44
// Address: 00566c44
int __cdecl heapCheck(void *heap_state_ptr);

// Original: crt_unknown.c_FUN_00566c6c
// Address: 00566c6c
void FUN_00566c6c(void);

// Original: crt_unknown.c_FUN_00566c96
// Address: 00566c96
double FUN_00566c96(double param_1);

// Original: crt_unknown.c_FUN_00566ca9
// Address: 00566ca9
double FUN_00566ca9(double param_1,double param_2);

// Original: crt_unknown.c_reportAbnormalTermination_FUN_00566f98
// Address: 00566f98
void __watcallRegister reportAbnormalTermination(void);

// Original: crt_unknown.c_FUN_005670b0
// Address: 005670b0
void FUN_005670b0(void);

// Original: crt_unknown.c_FUN_005670b1
// Address: 005670b1
undefined4 FUN_005670b1(void);

// Original: crt_unknown.c_FUN_005670c1
// Address: 005670c1
undefined4 FUN_005670c1(void);

// Original: crt_unknown.c_stack_overflow_handler_FUN_005670e0
// Address: 005670e0
void __watcallStack stack::overflow_handler(SIZE_T required_bytes);

// Original: crt_unknown.c_ProbeStackSpace_FUN_005670ed
// Address: 005670ed
void __stdcall ProbeStackSpace(uint size);

// Original: crt_unknown.c_FUN_005671c6
// Address: 005671c6
void FUN_005671c6(void);

// Original: crt_unknown.c_FUN_005674f8
// Address: 005674f8
void FUN_005674f8(void);

// Original: crt_unknown.c_FUN_00567540
// Address: 00567540
void FUN_00567540(undefined4 *param_1);

// Original: crt_unknown.c_FUN_0056754c
// Address: 0056754c
void FUN_0056754c(undefined4 param_1,int param_2);

// Original: crt_unknown.c_FUN_00567560
// Address: 00567560
int FUN_00567560(int param_1,byte *param_2,undefined4 *param_3);

// Original: crt_unknown.c_FUN_0056782c
// Address: 0056782c
byte * FUN_0056782c(byte *param_1,int param_2);

// Original: crt_unknown.c_FUN_00567928
// Address: 00567928
int FUN_00567928(int param_1);

// Original: crt_unknown.c_FUN_00567964
// Address: 00567964
int FUN_00567964(int param_1,int *param_2);

// Original: crt_unknown.c_FUN_00567a5c
// Address: 00567a5c
int FUN_00567a5c(int param_1,int *param_2);

// Original: crt_unknown.c_FUN_00567bc0
// Address: 00567bc0
void FUN_00567bc0(int param_1,int *param_2,undefined4 param_3);

// Original: crt_unknown.c_FUN_00567c2c
// Address: 00567c2c
byte * FUN_00567c2c(byte *param_1,void *param_2);

// Original: crt_unknown.c_FUN_00567c74
// Address: 00567c74
int FUN_00567c74(int param_1,int *param_2,undefined4 *param_3);

// Original: crt_unknown.c_FUN_00567d88
// Address: 00567d88
int FUN_00567d88(int param_1,int *param_2);

// Original: crt_unknown.c_FUN_0056808c
// Address: 0056808c
int FUN_0056808c(int param_1,int *param_2,int param_3,int param_4);

// Original: crt_unknown.c_FUN_005684f8
// Address: 005684f8
int FUN_005684f8(int param_1);

// Original: crt_unknown.c_FUN_00568528
// Address: 00568528
undefined4 FUN_00568528(int param_1);

// Original: crt_unknown.c_FUN_00568658
// Address: 00568658
void FUN_00568658(void);

// Original: crt_unknown.c_FUN_00568690
// Address: 00568690
_FILE * FUN_00568690(void);

// Original: crt_unknown.c_FUN_00568890
// Address: 00568890
int FUN_00568890(undefined4 *param_1);

// Original: crt_unknown.c_AllocatorFallbackStub_FUN_00568e70
// Address: 00568e70
int __cdecl AllocatorFallbackStub(uint size);

// Original: crt_unknown.c_setvbuf_FUN_00568ed0
// Address: 00568ed0
int __cdecl setvbuf(_FILE *stream_ptr,char *buffer_ptr,int buffer_mode,SIZE_T buffer_size);

// Original: crt_unknown.c_FUN_00568f70
// Address: 00568f70
DWORD FUN_00568f70(uint param_1,LPVOID param_2,DWORD param_3);

// Original: crt_unknown.c_FUN_00569040
// Address: 00569040
undefined4 FUN_00569040(undefined4 param_1,char *param_2,int *param_3,code *param_4);

// Original: crt_unknown.c_FUN_00569468
// Address: 00569468
byte * FUN_00569468(undefined4 param_1,int *param_2,int param_3);

// Original: crt_unknown.c_FUN_005695cc
// Address: 005695cc
char * FUN_005695cc(char *param_1,int param_2);

// Original: crt_unknown.c_FUN_0056963c
// Address: 0056963c
void FUN_0056963c(char *param_1,undefined4 param_2,int param_3);

// Original: crt_unknown.c_FUN_0056966c
// Address: 0056966c
int FUN_0056966c(ushort *param_1,undefined4 param_2,int param_3);

// Original: crt_unknown.c_FUN_005696e8
// Address: 005696e8
void FUN_005696e8(int param_1,char *param_2,int param_3);

// Original: crt_unknown.c_FUN_0056974c
// Address: 0056974c
void FUN_0056974c(char *param_1,uint param_2,int param_3);

// Original: crt_unknown.c_FUN_00569850
// Address: 00569850
void FUN_00569850(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: crt_unknown.c_FUN_0056986c
// Address: 0056986c
void FUN_0056986c(int param_1);

// Original: crt_unknown.c_FUN_005698b0
// Address: 005698b0
void FUN_005698b0(ushort *param_1,undefined4 param_2,int param_3,code *param_4);

// Original: crt_unknown.c_FUN_00569928
// Address: 00569928
undefined8 FUN_00569928(byte *param_1,int *param_2,int param_3);

// Original: crt_unknown.c_FUN_00569f8c
// Address: 00569f8c
void FUN_00569f8c(byte *param_1);

// Original: crt_unknown.c_FUN_00569fb0
// Address: 00569fb0
DWORD FUN_00569fb0(uint param_1,LPCVOID param_2,DWORD param_3);

// Original: crt_unknown.c_FUN_0056a0c0
// Address: 0056a0c0
void FUN_0056a0c0(void);

// Original: crt_unknown.c_FUN_0056a0f7
// Address: 0056a0f7
void FUN_0056a0f7(void);

// Original: crt_unknown.c_FUN_0056a170
// Address: 0056a170
void FUN_0056a170(void);

// Original: crt_unknown.c__strtod_FUN_0056a189
// Address: 0056a189
double __cdecl ::strtod(char *str);

// Original: crt_unknown.c_FUN_0056a1b5
// Address: 0056a1b5
undefined4 FUN_0056a1b5(double *param_1,float *param_2);

// Original: crt_unknown.c_FUN_0056a234
// Address: 0056a234
void FUN_0056a234(float10 *param_1,uint param_2);

// Original: crt_unknown.c_FUN_0056a28c
// Address: 0056a28c
void FUN_0056a28c(float10 *param_1,int param_2);

// Original: crt_unknown.c_FUN_0056a320
// Address: 0056a320
void FUN_0056a320(undefined4 param_1,int param_2);

// Original: crt_unknown.c_FUN_0056a388
// Address: 0056a388
uint FUN_0056a388(uint *param_1,int *param_2,undefined1 *param_3);

// Original: crt_unknown.c_FUN_0056a697
// Address: 0056a697
void FUN_0056a697(void);

// Original: crt_unknown.c_FUN_0056a6ad
// Address: 0056a6ad
void FUN_0056a6ad(void);

// Original: crt_unknown.c_FUN_0056a6c4
// Address: 0056a6c4
void FUN_0056a6c4(void);

// Original: crt_unknown.c_FUN_0056a827
// Address: 0056a827
void FUN_0056a827(uint *param_1,char *param_2,uint param_3,uint param_4,char *param_5);

// Original: crt_unknown.c_FUN_0056aa38
// Address: 0056aa38
void FUN_0056aa38(int *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 *param_5);

// Original: crt_unknown.c_FUN_0056ad3f
// Address: 0056ad3f
void FUN_0056ad3f(void);

// Original: crt_unknown.c_FUN_0056ada0
// Address: 0056ada0
void FUN_0056ada0(void);

// Original: crt_unknown.c_FUN_0056ade4
// Address: 0056ade4
void FUN_0056ade4(void);

// Original: crt_unknown.c_FUN_0056adf0
// Address: 0056adf0
void FUN_0056adf0(undefined4 *param_1,int param_2);

// Original: crt_unknown.c_FUN_0056ae10
// Address: 0056ae10
undefined4 FUN_0056ae10(_FILE *param_1,undefined4 param_2,undefined4 param_3);

// Original: crt_unknown.c_FUN_0056aef0
// Address: 0056aef0
void FUN_0056aef0(void);

// Original: crt_unknown.c_FUN_0056aefc
// Address: 0056aefc
int FUN_0056aefc(uint param_1);

// Original: crt_unknown.c_FUN_0056af50
// Address: 0056af50
int FUN_0056af50(void);

// Original: crt_unknown.c_FUN_0056afd0
// Address: 0056afd0
void FUN_0056afd0(void *param_1,ulong param_2);

// Original: crt_unknown.c_FUN_0056b1ee
// Address: 0056b1ee
void FUN_0056b1ee(void);

// Original: crt_unknown.c_remove_FUN_0056bbf0
// Address: 0056bbf0
int __watcallStack remove(char *filename);

// Original: crt_unknown.c_FUN_0056bdc8
// Address: 0056bdc8
undefined1 FUN_0056bdc8(void);

// Original: crt_unknown.c_FUN_0056bf71
// Address: 0056bf71
void FUN_0056bf71(void);

// Original: crt_unknown.c_FUN_0056bf77
// Address: 0056bf77
void FUN_0056bf77(void);

// Original: crt_unknown.c_FUN_0056bf7c
// Address: 0056bf7c
void FUN_0056bf7c(void);

// Original: crt_unknown.c_FUN_0056bf82
// Address: 0056bf82
void FUN_0056bf82(void);

// Original: crt_unknown.c_FUN_0056bf87
// Address: 0056bf87
void FUN_0056bf87(void);

// Original: crt_unknown.c_FUN_0056bf8d
// Address: 0056bf8d
void FUN_0056bf8d(void);

// Original: crt_unknown.c_FUN_0056bf93
// Address: 0056bf93
void FUN_0056bf93(void);

// Original: crt_unknown.c_FUN_0056bf99
// Address: 0056bf99
void FUN_0056bf99(void);

// Original: crt_unknown.c_FUN_0056bfbb
// Address: 0056bfbb
void FUN_0056bfbb(void);

// Original: crt_unknown.c_FUN_0056bfc0
// Address: 0056bfc0
void FUN_0056bfc0(void);

// Original: crt_unknown.c_FUN_0056bfd6
// Address: 0056bfd6
void FUN_0056bfd6(void);

// Original: crt_unknown.c_fdiv_thunk_FUN_0056bfdb
// Address: 0056bfdb
void __fpu_thunk fdiv::thunk(void);

// Original: crt_unknown.c_FUN_0056bff7
// Address: 0056bff7
void FUN_0056bff7(void);

// Original: crt_unknown.c_FUN_0056c01b
// Address: 0056c01b
void FUN_0056c01b(void);

// Original: crt_unknown.c_FUN_0056c02b
// Address: 0056c02b
void FUN_0056c02b(void);

// Original: crt_unknown.c_FUN_0056c04b
// Address: 0056c04b
void FUN_0056c04b(void);

// Original: crt_unknown.c_FUN_0056c050
// Address: 0056c050
void FUN_0056c050(void);

// Original: crt_unknown.c_FUN_0056c06a
// Address: 0056c06a
void FUN_0056c06a(void);

// Original: crt_unknown.c_fdiv_thunk_FUN_0056c06f
// Address: 0056c06f
void __fpu_thunk fdiv::thunk(void);

// Original: crt_unknown.c_FUN_0056c08f
// Address: 0056c08f
void FUN_0056c08f(void);

// Original: crt_unknown.c_FUN_0056c0bb
// Address: 0056c0bb
void FUN_0056c0bb(void);

// Original: crt_unknown.c_FUN_0056c0cf
// Address: 0056c0cf
void FUN_0056c0cf(void);

// Original: crt_unknown.c_FUN_0056c0ef
// Address: 0056c0ef
void FUN_0056c0ef(void);

// Original: crt_unknown.c_FUN_0056c0f4
// Address: 0056c0f4
void FUN_0056c0f4(void);

// Original: crt_unknown.c_FUN_0056c10e
// Address: 0056c10e
void FUN_0056c10e(void);

// Original: crt_unknown.c_FUN_0056c113
// Address: 0056c113
void FUN_0056c113(void);

// Original: crt_unknown.c_FUN_0056c133
// Address: 0056c133
void FUN_0056c133(void);

// Original: crt_unknown.c_FUN_0056c147
// Address: 0056c147
void FUN_0056c147(void);

// Original: crt_unknown.c_FUN_0056c15f
// Address: 0056c15f
void FUN_0056c15f(void);

// Original: crt_unknown.c_FUN_0056c173
// Address: 0056c173
void FUN_0056c173(void);

// Original: crt_unknown.c_FUN_0056c193
// Address: 0056c193
void FUN_0056c193(void);

// Original: crt_unknown.c_FUN_0056c198
// Address: 0056c198
void FUN_0056c198(void);

// Original: crt_unknown.c_FUN_0056c1b2
// Address: 0056c1b2
void FUN_0056c1b2(void);

// Original: crt_unknown.c_fdiv_thunk_FUN_0056c1b7
// Address: 0056c1b7
void __fpu_thunk fdiv::thunk(void);

// Original: crt_unknown.c_FUN_0056c1d7
// Address: 0056c1d7
void FUN_0056c1d7(void);

// Original: crt_unknown.c_FUN_0056c203
// Address: 0056c203
void FUN_0056c203(void);

// Original: crt_unknown.c_FUN_0056c217
// Address: 0056c217
void FUN_0056c217(void);

// Original: crt_unknown.c_FUN_0056c237
// Address: 0056c237
void FUN_0056c237(void);

// Original: crt_unknown.c_FUN_0056c23c
// Address: 0056c23c
void FUN_0056c23c(void);

// Original: crt_unknown.c_FUN_0056c256
// Address: 0056c256
void FUN_0056c256(void);

// Original: crt_unknown.c_fdiv_thunk_FUN_0056c25b
// Address: 0056c25b
void __fpu_thunk fdiv::thunk(void);

// Original: crt_unknown.c_FUN_0056c27b
// Address: 0056c27b
void FUN_0056c27b(void);

// Original: crt_unknown.c_FUN_0056c2a7
// Address: 0056c2a7
void FUN_0056c2a7(void);

// Original: crt_unknown.c_FUN_0056c2bb
// Address: 0056c2bb
void FUN_0056c2bb(void);

// Original: crt_unknown.c_FUN_0056c2db
// Address: 0056c2db
void FUN_0056c2db(void);

// Original: crt_unknown.c_FUN_0056c2e0
// Address: 0056c2e0
void FUN_0056c2e0(void);

// Original: crt_unknown.c_FUN_0056c2fa
// Address: 0056c2fa
void FUN_0056c2fa(void);

// Original: crt_unknown.c_fdiv_thunk_FUN_0056c2ff
// Address: 0056c2ff
void __fpu_thunk fdiv::thunk(void);

// Original: crt_unknown.c_FUN_0056c31f
// Address: 0056c31f
void FUN_0056c31f(void);

// Original: crt_unknown.c_FUN_0056c34b
// Address: 0056c34b
void FUN_0056c34b(void);

// Original: crt_unknown.c_FUN_0056c35f
// Address: 0056c35f
void FUN_0056c35f(void);

// Original: crt_unknown.c_FUN_0056c37f
// Address: 0056c37f
void FUN_0056c37f(void);

// Original: crt_unknown.c_FUN_0056c384
// Address: 0056c384
void FUN_0056c384(void);

// Original: crt_unknown.c_FUN_0056c39e
// Address: 0056c39e
void FUN_0056c39e(void);

// Original: crt_unknown.c_FUN_0056c3a3
// Address: 0056c3a3
void FUN_0056c3a3(void);

// Original: crt_unknown.c_FUN_0056c3c3
// Address: 0056c3c3
void FUN_0056c3c3(void);

// Original: crt_unknown.c_FUN_0056c3ef
// Address: 0056c3ef
void FUN_0056c3ef(void);

// Original: crt_unknown.c_FUN_0056c416
// Address: 0056c416
void FUN_0056c416(void);

// Original: crt_unknown.c_FUN_0056c429
// Address: 0056c429
void FUN_0056c429(void);

// Original: crt_unknown.c_FUN_0056c4d4
// Address: 0056c4d4
undefined4 FUN_0056c4d4(uint param_1);

// Original: crt_unknown.c_FUN_0056c520
// Address: 0056c520
undefined4 FUN_0056c520(undefined4 param_1,uint param_2);

// Original: crt_unknown.c_FUN_0056c56c
// Address: 0056c56c
double FUN_0056c56c(int param_1,uint param_2);

// Original: crt_unknown.c_FUN_0056c6a0
// Address: 0056c6a0
void FUN_0056c6a0(undefined4 param_1,int param_2);

// Original: crt_unknown.c_FUN_0056c6b8
// Address: 0056c6b8
void FUN_0056c6b8(DWORD param_1,int param_2);

// Original: crt_unknown.c_FUN_0056cd52
// Address: 0056cd52
int FUN_0056cd52(int param_1);

// Original: crt_unknown.c_FUN_0056cd9b
// Address: 0056cd9b
int FUN_0056cd9b(int param_1,undefined4 param_2,uint param_3,undefined4 param_4);

// Original: crt_unknown.c_FUN_0056ce57
// Address: 0056ce57
int FUN_0056ce57(_FILE *param_1,int param_2);

// Original: crt_unknown.c_FUN_0056ced8
// Address: 0056ced8
int FUN_0056ced8(int param_1,int param_2);

// Original: crt_unknown.c_FUN_0056cfd8
// Address: 0056cfd8
undefined4 FUN_0056cfd8(int param_1,int param_2,undefined4 param_3);

// Original: crt_unknown.c_FUN_0056d308
// Address: 0056d308
undefined4 FUN_0056d308(int *param_1,int *param_2);

// Original: crt_unknown.c_FUN_0056d488
// Address: 0056d488
void FUN_0056d488(time_t *param_1,_tm *param_2);

// Original: crt_unknown.c_FUN_0056d4ab
// Address: 0056d4ab
void FUN_0056d4ab(undefined4 param_1);

// Original: crt_unknown.c_FUN_0056d4d0
// Address: 0056d4d0
uint FUN_0056d4d0(void);

// Original: crt_unknown.c_FUN_0056d4e8
// Address: 0056d4e8
uint FUN_0056d4e8(void);

// Original: crt_unknown.c_build_cmdline_FUN_0056ddf0
// Address: 0056ddf0
int __cdecl build::cmdline(int argc,char **argv,char *program,char **out_cmdline,char **out_environment,char **out_buffer,int *out_bufsize,int copy_program_flag);

// Original: crt_unknown.c_FUN_0056de90
// Address: 0056de90
void FUN_0056de90(void);

// Original: crt_unknown.c_FUN_0056deac
// Address: 0056deac
int FUN_0056deac(int param_1);

// Original: crt_unknown.c_FUN_0056dfc0
// Address: 0056dfc0
undefined4 FUN_0056dfc0(void);

// Original: crt_unknown.c_FUN_0056e010
// Address: 0056e010
int FUN_0056e010(int param_1);

// Original: crt_unknown.c_FUN_0056e09c
// Address: 0056e09c
void FUN_0056e09c(HANDLE param_1,uint param_2);

// Original: crt_unknown.c_FUN_0056e174
// Address: 0056e174
void FUN_0056e174(int param_1);

// Original: crt_unknown.c_FUN_0056e1a0
// Address: 0056e1a0
void FUN_0056e1a0(void);

// Original: crt_unknown.c_FUN_0056e208
// Address: 0056e208
HANDLE FUN_0056e208(void);

// Original: crt_unknown.c_FUN_0056e230
// Address: 0056e230
void FUN_0056e230(void);

// Original: crt_unknown.c_FUN_0056e250
// Address: 0056e250
void FUN_0056e250(void);

// Original: crt_unknown.c_FUN_0056e254
// Address: 0056e254
LPCRITICAL_SECTION FUN_0056e254(void);

// Original: crt_unknown.c_FUN_0056e2f8
// Address: 0056e2f8
void FUN_0056e2f8(void);

// Original: crt_unknown.c_FUN_0056e324
// Address: 0056e324
void FUN_0056e324(void);

// Original: crt_unknown.c_FUN_0056e37c
// Address: 0056e37c
void FUN_0056e37c(int param_1);

// Original: crt_unknown.c_FUN_0056e390
// Address: 0056e390
void FUN_0056e390(undefined4 *param_1);

// Original: crt_unknown.c_FUN_0056e3f4
// Address: 0056e3f4
void FUN_0056e3f4(undefined4 *param_1);

// Original: crt_unknown.c_FUN_0056e41c
// Address: 0056e41c
void FUN_0056e41c(void);

// Original: crt_unknown.c_FUN_0056e42c
// Address: 0056e42c
void FUN_0056e42c(void);

// Original: crt_unknown.c_FUN_0056e43c
// Address: 0056e43c
void FUN_0056e43c(uint param_1);

// Original: crt_unknown.c_FUN_0056e458
// Address: 0056e458
void FUN_0056e458(uint param_1);

// Original: crt_unknown.c_FUN_0056e474
// Address: 0056e474
void FUN_0056e474(undefined4 param_1);

// Original: crt_unknown.c_FUN_0056e484
// Address: 0056e484
void FUN_0056e484(uint param_1);

// Original: crt_unknown.c_FUN_0056e4ac
// Address: 0056e4ac
void FUN_0056e4ac(void);

// Original: crt_unknown.c_FUN_0056e4bc
// Address: 0056e4bc
void FUN_0056e4bc(void);

// Original: crt_unknown.c_FUN_0056e4cc
// Address: 0056e4cc
void FUN_0056e4cc(void);

// Original: crt_unknown.c_FUN_0056e4dc
// Address: 0056e4dc
void FUN_0056e4dc(void);

// Original: crt_unknown.c_FUN_0056e4ec
// Address: 0056e4ec
void FUN_0056e4ec(void);

// Original: crt_unknown.c_FUN_0056e4fc
// Address: 0056e4fc
void FUN_0056e4fc(void);

// Original: crt_unknown.c_FUN_0056e50c
// Address: 0056e50c
void FUN_0056e50c(void);

// Original: crt_unknown.c_FUN_0056e51c
// Address: 0056e51c
void FUN_0056e51c(void);

// Original: crt_unknown.c_FUN_0056e52c
// Address: 0056e52c
LPVOID FUN_0056e52c(void);

// Original: crt_unknown.c_FUN_0056e56c
// Address: 0056e56c
void * FUN_0056e56c(void *param_1);

// Original: crt_unknown.c_FUN_0056e5ac
// Address: 0056e5ac
bool FUN_0056e5ac(void);

// Original: crt_unknown.c_FUN_0056e608
// Address: 0056e608
undefined4 FUN_0056e608(undefined4 param_1);

// Original: crt_unknown.c_FUN_0056e664
// Address: 0056e664
void FUN_0056e664(int param_1);

// Original: crt_unknown.c_FUN_0056e6b8
// Address: 0056e6b8
BOOL FUN_0056e6b8(void);

// Original: crt_unknown.c_FUN_0056e6c4
// Address: 0056e6c4
void FUN_0056e6c4(void);

// Original: crt_unknown.c_FUN_0056e6e4
// Address: 0056e6e4
void FUN_0056e6e4(void);

// Original: crt_unknown.c_FUN_0056e7fc
// Address: 0056e7fc
void FUN_0056e7fc(void);

// Original: crt_unknown.c_FUN_0056e890
// Address: 0056e890
DWORD FUN_0056e890(HMODULE param_1,LPWSTR param_2,DWORD param_3);

// Original: crt_unknown.c_FUN_0056e940
// Address: 0056e940
char * FUN_0056e940(char *param_1);

// Original: crt_unknown.c_FUN_0056e990
// Address: 0056e990
void * FUN_0056e990(undefined4 param_1);

// Original: crt_unknown.c_FUN_0056f034
// Address: 0056f034
void FUN_0056f034(void);

// Original: crt_unknown.c_FUN_0056f0f0
// Address: 0056f0f0
void FUN_0056f0f0(void);

// Original: crt_unknown.c_FUN_0056f170
// Address: 0056f170
int FUN_0056f170(LPCSTR param_1,byte param_2);

// Original: crt_unknown.c_FUN_0056f220
// Address: 0056f220
undefined4 FUN_0056f220(uint param_1);

// Original: crt_unknown.c_FUN_0056f278
// Address: 0056f278
void FUN_0056f278(int param_1,uint param_2);

// Original: crt_unknown.c_FUN_0056f2d0
// Address: 0056f2d0
undefined4 FUN_0056f2d0(void);

// Original: crt_unknown.c_FUN_0056f30c
// Address: 0056f30c
undefined4 FUN_0056f30c(LPVOID param_1);

// Original: crt_unknown.c_FUN_0056f36c
// Address: 0056f36c
void FUN_0056f36c(int param_1);

// Original: crt_unknown.c_FUN_0056f480
// Address: 0056f480
char * FUN_0056f480(uint *param_1,char *param_2,int param_3);

// Original: crt_unknown.c_FUN_0056f544
// Address: 0056f544
char * FUN_0056f544(uint param_1,char *param_2,int param_3);

// Original: crt_unknown.c_FUN_0056f573
// Address: 0056f573
undefined8 FUN_0056f573(int param_1,int *param_2,int param_3);

// Original: crt_unknown.c_FUN_0056f938
// Address: 0056f938
undefined4 FUN_0056f938(int *param_1);

// Original: crt_unknown.c_FUN_0056f986
// Address: 0056f986
char * FUN_0056f986(char *param_1,int param_2);

// Original: crt_unknown.c_FUN_0056f9c4
// Address: 0056f9c4
void FUN_0056f9c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: crt_unknown.c_FUN_0056fa00
// Address: 0056fa00
void FUN_0056fa00(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5);

// Original: crt_unknown.c_FUN_0056fa40
// Address: 0056fa40
void FUN_0056fa40(void);

// Original: crt_unknown.c_ExitHookStub_FUN_0056fcd0
// Address: 0056fcd0
undefined1 __cdecl ExitHookStub(void);

// Original: crt_unknown.c_FUN_0056fd65
// Address: 0056fd65
int * FUN_0056fd65(int *param_1,undefined4 *param_2);

// Original: crt_unknown.c_FUN_0056fd83
// Address: 0056fd83
int * FUN_0056fd83(int *param_1,undefined4 *param_2);

// Original: crt_unknown.c_FUN_0056fda1
// Address: 0056fda1
int * FUN_0056fda1(int *param_1,undefined4 *param_2);

// Original: crt_unknown.c_FUN_0056fdbf
// Address: 0056fdbf
int * FUN_0056fdbf(int *param_1,undefined4 *param_2);

// Original: crt_unknown.c_FUN_00570510
// Address: 00570510
void FUN_00570510(int param_1,undefined4 *param_2,undefined4 *param_3);

// Original: crt_unknown.c_FUN_00570554
// Address: 00570554
void FUN_00570554(uint param_1,byte *param_2);

// Original: crt_unknown.c_FUN_00570630
// Address: 00570630
void FUN_00570630(void);

// Original: crt_unknown.c_FUN_005708c0
// Address: 005708c0
void FUN_005708c0(FILETIME *param_1,LPWORD param_2,LPWORD param_3);

// Original: crt_unknown.c_FUN_00570a70
// Address: 00570a70
int FUN_00570a70(uint param_1);

// Original: crt_unknown.c_FUN_00570ad0
// Address: 00570ad0
int FUN_00570ad0(char *param_1,uint *param_2,uint param_3);

// Original: crt_unknown.c_FUN_00570ce0
// Address: 00570ce0
char * FUN_00570ce0(char *param_1,char *param_2,ulong param_3);

// Original: crt_unknown.c_FUN_00570d50
// Address: 00570d50
undefined8 FUN_00570d50(void);

// Original: crt_unknown.c_FUN_00570eb0
// Address: 00570eb0
undefined8 FUN_00570eb0(void);

// Original: crt_unknown.c_FUN_00570ebb
// Address: 00570ebb
undefined8 FUN_00570ebb(void);

// Original: crt_unknown.c_FUN_00570ec8
// Address: 00570ec8
undefined8 FUN_00570ec8(void);

// Original: crt_unknown.c_FUN_00570edb
// Address: 00570edb
undefined8 FUN_00570edb(void);

// Original: crt_unknown.c_FUN_00570ef0
// Address: 00570ef0
undefined8 FUN_00570ef0(void);

// Original: crt_unknown.c_FUN_00570f03
// Address: 00570f03
undefined8 FUN_00570f03(void);

// Original: crt_unknown.c_FUN_00570f18
// Address: 00570f18
undefined8 FUN_00570f18(void);

// Original: crt_unknown.c_FUN_00570f2b
// Address: 00570f2b
undefined8 FUN_00570f2b(void);

// Original: crt_unknown.c_FUN_00570f60
// Address: 00570f60
void FUN_00570f60(void);

// Original: crt_unknown.c_FUN_0057104c
// Address: 0057104c
void FUN_0057104c(void);

// Original: crt_unknown.c_FUN_005710a0
// Address: 005710a0
void FUN_005710a0(char *param_1,char *param_2);

// Original: crt_unknown.c_FUN_00571160
// Address: 00571160
void FUN_00571160(void);

// Original: crt_unknown.c_FUN_00571170
// Address: 00571170
LPVOID FUN_00571170(void);

// Original: crt_unknown.c_FUN_005711a8
// Address: 005711a8
undefined4 * FUN_005711a8(void);

// Original: crt_unknown.c_FUN_00571280
// Address: 00571280
undefined4 FUN_00571280(undefined4 param_1,int param_2);

// Original: crt_unknown.c_FUN_005712ec
// Address: 005712ec
void FUN_005712ec(int param_1);

// Original: crt_unknown.c_FUN_00571364
// Address: 00571364
void FUN_00571364(void);

// Original: crt_unknown.c_FUN_005713a0
// Address: 005713a0
void FUN_005713a0(ThreadData *param_1);

// Original: crt_unknown.c_FUN_005713d0
// Address: 005713d0
void FUN_005713d0(void);

// Original: crt_unknown.c_FUN_005713e0
// Address: 005713e0
int FUN_005713e0(short *param_1);

// Original: crt_unknown.c_FUN_00571410
// Address: 00571410
undefined4 * FUN_00571410(undefined4 *param_1,undefined4 *param_2,uint param_3);

// Original: crt_unknown.c_FUN_00571440
// Address: 00571440
undefined4 FUN_00571440(short *param_1);

// Original: crt_unknown.c_GetConsoleInputHandle_FUN_005714e0
// Address: 005714e0
HANDLE __watcallRegister GetConsoleInputHandle(void);

// Original: crt_unknown.c_GetConsoleOutputHandle_FUN_005714ec
// Address: 005714ec
HANDLE __cdecl GetConsoleOutputHandle(void);

// Original: crt_unknown.c_ClearFPUExceptions_FUN_00571500
// Address: 00571500
void __cdecl ClearFPUExceptions(void);

// Original: crt_unknown.c_FUN_00571588
// Address: 00571588
undefined4 FUN_00571588(int param_1);

// Original: crt_unknown.c_FUN_005715ac
// Address: 005715ac
SIGNAL_HANDLER_TYPE FUN_005715ac(int param_1,int param_2);

// Original: crt_unknown.c_FUN_00571630
// Address: 00571630
undefined4 FUN_00571630(void);

// Original: crt_unknown.c_FUN_00571718
// Address: 00571718
SIGNAL_HANDLER_TYPE FUN_00571718(int param_1,int param_2);

// Original: crt_unknown.c_FUN_00571858
// Address: 00571858
undefined2 FUN_00571858(void);

// Original: crt_unknown.c_FUN_0057189c
// Address: 0057189c
void FUN_0057189c(void);

// Original: crt_unknown.c_FUN_005718c4
// Address: 005718c4
void FUN_005718c4(void);

// Original: crt_unknown.c_None_FUN_00571b2c
// Address: 00571b2c
void __cdecl None(byte *param_1,undefined8 *param_2);

// Original: crt_unknown.c_FUN_00571b8e
// Address: 00571b8e
void FUN_00571b8e(void);

// Original: crt_unknown.c_FUN_00571bd0
// Address: 00571bd0
int FUN_00571bd0(void);

// Original: crt_unknown.c_FUN_00571bdc
// Address: 00571bdc
undefined4 FUN_00571bdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7);

// Original: crt_unknown.c_FUN_00571cc6
// Address: 00571cc6
uint FUN_00571cc6(int *param_1);

// Original: crt_unknown.c_streambuf_allocBuffer_FUN_00571ee0
// Address: 00571ee0
void * __watcallStack streambuf::allocBuffer(uint size);

// Original: crt_unknown.c_freeBuffer_FUN_00571ef0
// Address: 00571ef0
void __watcallStack freeBuffer(void *buffer);

// Original: crt_unknown.c_FUN_00572b70
// Address: 00572b70
void FUN_00572b70(void);

// Original: crt_unknown.c_FUN_00572d50
// Address: 00572d50
void FUN_00572d50(byte *param_1,byte *param_2);

// Original: crt_unknown.c_FUN_00572d90
// Address: 00572d90
char * FUN_00572d90(char *param_1);

// Original: crt_unknown.c_FUN_00572e00
// Address: 00572e00
int FUN_00572e00(byte *param_1,byte *param_2);

// Original: crt_unknown.c_FUN_00572e60
// Address: 00572e60
undefined4 FUN_00572e60(void);

// Original: crt_unknown.c_FUN_00572e64
// Address: 00572e64
void FUN_00572e64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: crt_unknown.c_FUN_00572e88
// Address: 00572e88
void FUN_00572e88(void);

// Original: crt_unknown.c_FUN_00572e90
// Address: 00572e90
void FUN_00572e90(undefined4 param_1);

// Original: crt_unknown.c_FUN_00572ea0
// Address: 00572ea0
void FUN_00572ea0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);

// Original: crt_unknown.c_FUN_00572ef0
// Address: 00572ef0
uint FUN_00572ef0(uint param_1,uint param_2);

// Original: crt_unknown.c_ReadFileBytesMaybe_FUN_005733e0
// Address: 005733e0
uint __cdecl ReadFileBytesMaybe(uint param_1,char *param_2,DWORD param_3);

// Original: crt_unknown.c_FUN_00573650
// Address: 00573650
undefined4 FUN_00573650(void);

// Original: crt_unknown.c_FUN_00573db0
// Address: 00573db0
void FUN_00573db0(wchar_t param_1);

// Original: crt_unknown.c_FUN_00573e30
// Address: 00573e30
void FUN_00573e30(undefined4 *param_1);

// Original: crt_unknown.c_FUN_00573ed0
// Address: 00573ed0
HANDLE FUN_00573ed0(undefined4 param_1,int param_2,undefined4 param_3);

// Original: crt_unknown.c_FUN_00573fc8
// Address: 00573fc8
void FUN_00573fc8(void);

// Original: crt_unknown.c_FUN_00573ffb
// Address: 00573ffb
undefined4 FUN_00573ffb(void);

// Original: crt_unknown.c_FUN_00574000
// Address: 00574000
int FUN_00574000(char *param_1);

// Original: crt_unknown.c_FUN_00574030
// Address: 00574030
int FUN_00574030(wchar_t *param_1,char *param_2,int param_3);

// Original: crt_unknown.c_FUN_005740b0
// Address: 005740b0
int FUN_005740b0(wchar_t *param_1);

// Original: crt_unknown.c_FUN_00574264
// Address: 00574264
undefined4 FUN_00574264(short *param_1);

// Original: crt_unknown.c_FUN_00574404
// Address: 00574404
int FUN_00574404(short *param_1,int param_2);

// Original: crt_unknown.c_FUN_00574540
// Address: 00574540
short * FUN_00574540(short *param_1,short param_2);

// Original: crt_unknown.c_FUN_00574570
// Address: 00574570
BOOL FUN_00574570(LPCWSTR param_1,LPCWSTR param_2);

// Original: crt_unknown.c_FUN_00574680
// Address: 00574680
void FUN_00574680(void);

// Original: crt_unknown.c_FUN_005746f0
// Address: 005746f0
int FUN_005746f0(int param_1);
