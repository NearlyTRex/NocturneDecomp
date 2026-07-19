#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/basetsd.h"
#include "system/crtdefs.h"
#include "system/ddraw.h"
#include "system/fltintrn.h"
#include "system/internal.h"
#include "system/mbstring.h"
#include "system/mtdll.h"
#include "system/new.h"
#include "system/setlocal.h"
#include "system/signal.h"
#include "system/stdlib.h"
#include "system/time.h"
#include "system/vadefs.h"
#include "system/windef.h"
#include "system/winnls.h"
#include "system/winnt.h"
#include "types/classes/CDX7TextureCache.h"
#include "types/classes/CExternalRenderer.h"
#include "types/classes/CExternalRendererBridge.h"
#include "types/structs/SMRGLPrimitiveTriangle.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SMRGLVertex.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SScreenVertex.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x10000000
// =============================================================================

void __ecxcall dll_dx7_cpp_CDX7TextureCache_init_FUN_10001020(CDX7TextureCache *this_ptr,int max_count,int texture_size);
int __ecxcall dll_dx7_cpp_CDX7TextureCache_acquireSlot_FUN_10001090(CDX7TextureCache *this_ptr,SMRGLTextureBasic *texture_info);
void __ecxcall dll_dx7_cpp_CDX7TextureCache_bindTexture_FUN_10001180(CDX7TextureCache *this_ptr,SMRGLTextureBasic *texture_info);
void __cdecl dll_dx7_cpp_initTextureCaches_FUN_10001200(void);
void __cdecl dll_dx7_cpp_readIniInt_FUN_10001440(char *section,char *key,uint *value_inout);
int __cdecl dll_dx7_cpp_resolveTextureSlot_FUN_10001470(SMRGLTextureBasic *texture_info);
void __cdecl dll_dx7_cpp_bindTextureBySize_FUN_100015d0(SMRGLTextureBasic *texture_info);
int __stdcall dll_dx7_cpp_enumAdapterCallback_FUN_100017b0(GUID *lp_guid,LPCSTR lp_driver_description,LPCSTR lp_driver_name,LPVOID lp_context,HMONITOR hmonitor);
int __cdecl dll_dx7_cpp_isAdapter3DCapable_FUN_10001900(GUID *adapter_guid);
void __cdecl dll_dx7_cpp_APIDLLInformation_FUN_100019a0(HMODULE dll_handle,CExternalRenderer *renderer);
int __cdecl dll_dx7_cpp_APIDLLinit_FUN_10001a80(HWND windowHandle,CExternalRendererBridge *interface);
void __cdecl dll_dx7_cpp_checkD3DResult_FUN_10001d70(HRESULT result);
void __cdecl dll_dx7_cpp_fatalError_FUN_10002340(char *message);
void __cdecl dll_dx7_cpp_releaseDirectXResources_FUN_10002370(void);
void __cdecl dll_dx7_cpp_APIDLLkill_FUN_10002460(void);
int __cdecl dll_dx7_cpp_APIDLLtoggle_FUN_100024b0(void);
int __cdecl dll_dx7_cpp_APIDLLsetVideoMode_FUN_10002500(void **scanline_ptrs);
void __cdecl dll_dx7_cpp_readIniInt_FUN_10002b20(char *section,char *key,uint *value_inout);
HRESULT __stdcall dll_dx7_cpp_enumZBufferFormatCallback_FUN_10002b50(DDPIXELFORMAT *lp_pixel_format,void *lp_context);
int __cdecl dll_dx7_cpp_APIDLLsetVideoMode2_FUN_10002bb0(int width,int height,int bits_per_pixel,void **screen_buffer_array);
int __cdecl dll_dx7_cpp_APIDLLrestoreVideoMode_FUN_10002be0(void);
int __cdecl dll_dx7_cpp_unlockBackBuffer_FUN_10002c50(void);
int __cdecl dll_dx7_cpp_unlockSurface_FUN_10002cb0(IDirectDrawSurface *surface);
int __cdecl dll_dx7_cpp_APIDLLbeginScene_FUN_10002ce0(void);
int __cdecl dll_dx7_cpp_APIDLLendScene_FUN_10002d10(void);
void __cdecl dll_dx7_cpp_resetRenderState_FUN_10002d50(void);
int __cdecl dll_dx7_cpp_APIDLLlockFrame_FUN_10002d90(void);
int __cdecl dll_dx7_cpp_lockBackBuffer_FUN_10002dc0(void);
int __cdecl dll_dx7_cpp_lockSurface_FUN_10002e20(IDirectDrawSurface *surface,DDSURFACEDESC2 *surface_desc);
int __cdecl dll_dx7_cpp_APIDLLunlockFrame_FUN_10002e60(void);
void __cdecl dll_dx7_cpp_releaseAllTextures_FUN_10002ea0(void);
int __cdecl dll_dx7_cpp_createDirect3D_FUN_10002f40(void);
int __cdecl dll_dx7_cpp_createTexture_FUN_10002f60(int texture_size);
int __cdecl dll_dx7_cpp_textureSizeToIndex_FUN_10003090(int texture_size);
void __cdecl dll_dx7_cpp_loadTexture_FUN_100030e0(int texture_index);
int __cdecl dll_dx7_cpp_initD3DDevice_FUN_10003100(void);
HRESULT __stdcall dll_dx7_cpp_pickTextureFormat_FUN_10003340(DDPIXELFORMAT *pixel_format,void *found_flag);
int __cdecl dll_dx7_cpp_createStagingTextures_FUN_10003400(void);
int __cdecl dll_dx7_cpp_initDefaultRenderStates_FUN_100035b0(void);
void __cdecl dll_dx7_cpp_setRenderStateCached_FUN_100037e0(uint render_state,DWORD value);
void __cdecl dll_dx7_cpp_expandTextureAndBuildMips_FUN_10003830(void);
uint * __cdecl dll_dx7_cpp_getMipLevelPtr_FUN_10003a30(int mip_size);
void __cdecl dll_dx7_cpp_uploadCurrentTexture_FUN_10003a80(void);
void __cdecl dll_dx7_cpp_convertMipTo16Bit_FUN_10003d90(ushort *dest,uint dest_pitch,int mip_size);
void __cdecl dll_dx7_cpp_copyMipTo32Bit_FUN_10003e40(uint *dest,uint dest_pitch,int mip_size);
int __cdecl dll_dx7_cpp_APIDLLselectTexture_FUN_10003e90(SMRGLTextureBasic *texture_info,int texture_dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data);
int __cdecl dll_dx7_cpp_APIDLLupdateTexture_FUN_10003ed0(SMRGLTextureBasic *texture_info,int texture_dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data);
int __cdecl dll_dx7_cpp_APIDLLsetMipMapLevel_FUN_10003f00(int mipmap_level);
void __cdecl dll_dx7_cpp_applyRenderState_FUN_10003f10(uint render_flags);
int __cdecl dll_dx7_cpp_APIDLLdrawPolygon_FUN_10004380(SRenderVertex *vertices,int vertex_count,int render_flags);
int __cdecl dll_dx7_cpp_APIDLLdrawPolygon2_FUN_100043c0(SRenderVertex **vertex_array,int vertex_count,int render_flags);
void __cdecl dll_dx7_cpp_buildTLVertex_FUN_100044b0(SRenderVertex *src,SScreenVertex *out,uint render_flags,int rhw_scale);
void __cdecl dll_dx7_cpp_flushBatch_FUN_100047b0(void);
int __cdecl dll_dx7_cpp_APIDLLaddParticle_FUN_10004800(void *particle_data,int particle_type);
int __cdecl dll_dx7_cpp_APIDLLflushParticleList_FUN_10004810(void);
int __cdecl dll_dx7_cpp_APIDLLadd3dLine_FUN_10004820(void *start_point,void *end_point,int line_style);
int __cdecl dll_dx7_cpp_APIDLLflushLineList_FUN_10004830(void);
int __cdecl dll_dx7_cpp_APIDLLclear_FUN_10004840(void);
int __cdecl dll_dx7_cpp_APIDLLsetFogColor_FUN_100049f0(int red,int green,int blue);
int __cdecl dll_dx7_cpp_APIDLLsync_FUN_10004a60(void);
int __cdecl dll_dx7_cpp_APIDLLclearZBuffer_FUN_10004a70(void);
int __cdecl dll_dx7_cpp_APIDLLclearZBox_FUN_10004ac0(int left,int right,int top,int bottom);
int __cdecl dll_dx7_cpp_APIDLLsetColorTable16_FUN_10004b30(uchar *source_palette,ushort *color_table);
int __cdecl dll_dx7_cpp_floorLog2_FUN_10004d10(uint value);
void __cdecl dll_dx7_cpp_APIDLLGetDisplayContext_FUN_10004d30(HDC *hdc);
void __cdecl dll_dx7_cpp_APIDLLReleaseDisplayContext_FUN_10004da0(HDC hdc);
int __cdecl dll_dx7_cpp_APIDLLmasterZBuffer_FUN_10004e10(int z_buffer_mode);
int __cdecl dll_dx7_cpp_APIDLLrestoreZBuffer_FUN_10004e90(int left,int top,int mode,int right,int bottom);
int __cdecl dll_dx7_cpp_APIDLLdrawPolyList_FUN_10004f00(SRenderVertex *vertex_buffer,SMRGLPrimitiveTriangle **polygons,int polygon_count,int render_flags);
uint __cdecl dll_dx7_cpp_getOrAddVertex_FUN_10005010(SMRGLVertex *poly_vertex,SRenderVertex *vertex_array,uint render_flags);
int __cdecl dll_dx7_cpp_APIDLLdrawPolyList2_FUN_10005130(SRenderVertex *vertex_buffer,ushort **polygons,int polygon_count,int render_flags);
int __cdecl dll_dx7_cpp_APIDLLgetVideoMemory_FUN_10005280(int *total_memory,int *available_memory,int *memory_type);
int __cdecl dll_dx7_cpp_APIDLLselectCard_FUN_100052c0(int card_index);
int __cdecl dll_dx7_cpp_APIDLLbuildCardList_FUN_100052e0(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids);
int __cdecl dll_dx7_cpp_APIDLLlockHoldBuffer_FUN_10005350(void);
int __cdecl dll_dx7_cpp_APIDLLunlockHoldBuffer_FUN_100053a0(void);
int __cdecl crt_stdio_c__fclose_FUN_10005430(_FILE *file);
int __cdecl crt_stdio_c__fclose_lk_FUN_10005470(_FILE *file);
int __cdecl crt_stdio_c_fprintf_FUN_100054d0(_FILE *file,char *format,...) __attribute__((format(printf, 2, 3)));
_FILE * __cdecl crt_stdio_c__fsopen_FUN_10005520(char *filename,char *mode,int sh_flag);
_FILE * __cdecl crt_stdio_c_fopen_FUN_10005560(char *filename,char *mode);
void __cdecl crt_fpu_c__fpmath_FUN_10005580(int flag);
void crt_fpu_c_FUN_100055a0(void);
void __cdecl crt_fpu_c__install_fp_handlers_FUN_100055b0(void);
void __cdecl crt_startup_c__chkstk_FUN_10005600(void);
int __cdecl crt_stdio_c__sprintf_FUN_10005630(char *dest,char *format);
BOOL __cdecl crt_startup_c___CRTDLL_INIT_FUN_100056a0(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved);
int __cdecl crt_startup_c__DllMainCRTStartup_FUN_100057f0(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved);
void __cdecl crt_startup_c__amsg_exit_FUN_100058c0(int rterrnum);
int __cdecl crt_thread_c__mtinitlocks_FUN_10005900(void);
void __cdecl crt_thread_c__mtdeletelocks_FUN_10005930(void);
void __cdecl crt_thread_c__lock_FUN_100059a0(int file);
void __cdecl crt_thread_c__unlock_FUN_10005a10(int locknum);
void __cdecl crt_thread_c__lock_file_FUN_10005a30(_FILE *file);
void __cdecl crt_stdio_c__lock_file2_FUN_10005a70(int index,void *stream);
void __cdecl crt_thread_c__unlock_file_FUN_10005aa0(_FILE *file);
void __cdecl crt_stdio_c__unlock_file2_FUN_10005ae0(int index,void *stream);
void __cdecl crt_heap_c_free_FUN_10005b30(void *block);
int __cdecl crt_io_c__close_FUN_10005b50(int file_handle);
int __cdecl crt_io_c__close_lk_FUN_10005bc0(int fh);
void __cdecl crt_stdio_c__freebuf_FUN_10005c50(_FILE *file);
int __cdecl crt_stdio_c_fflush_FUN_10005c90(_FILE *file);
int __cdecl crt_stdio_c__fflush_lk_FUN_10005cd0(_FILE *file);
int __cdecl crt_stdio_c__flush_FUN_10005d10(_FILE *file);
int __cdecl crt_stdio_c__flsall_FUN_10005d90(int flag);
int __cdecl crt_stdio_c__stbuf_FUN_10005e60(_FILE *file);
void __cdecl crt_stdio_c__ftbuf_FUN_10005f00(int flag,_FILE *file);
int __cdecl crt_stdio_c__output_FUN_10005f40(_FILE *file_handle,char *fmt,va_list args);
void __cdecl crt_stdio_c_write_char_FUN_10006920(int ch,_FILE *file,int *pnumwritten);
void __cdecl crt_stdio_c_write_multi_char_FUN_10006970(int ch,int count,_FILE *file,int *pnumwritten);
void __cdecl crt_stdio_c_write_string_FUN_100069b0(char *str,int len,_FILE *file,int *pnumwritten);
int __cdecl crt_stdio_c_get_int_arg_FUN_100069f0(va_list *parg);
longlong __cdecl crt_stdio_c_get_int64_arg_FUN_10006a00(va_list *parg);
short __cdecl crt_stdio_c_get_short_arg_FUN_10006a20(va_list *parg);
_FILE * __cdecl crt_stdio_c__openfile_FUN_10006a30(char *filename,char *mode,int sh_flag,_FILE *file);
_FILE * __cdecl crt_stdio_c__getstream_FUN_10006c40(void);
void __cdecl crt_fpu_c__setdefaultprecision_FUN_10006d30(void);
int __cdecl crt_math_c__ms_p5_test_fdiv_FUN_10006d50(void);
int __cdecl crt_fpu_c__ms_p5_mp_test_fdiv_FUN_10006da0(void);
void __cdecl crt_stdio_c__forcdecpt_FUN_10006ef0(char *buf);
void __cdecl crt_stdio_c__cropzeros_FUN_10006f60(char *buf);
int __cdecl crt_stdio_c__positive_FUN_10006fc0(double *value);
void __cdecl crt_stdio_c__fassign_FUN_10006fe0(int flag,void *value,char *str);
errno_t __cdecl crt_stdio_c__cftoe_FUN_10007030(double *value,char *buf,size_t size_in_bytes,int dec,int caps);
char * __cdecl crt_stdio_c__cftoe2_FUN_100070b0(char *buf,int dec,int caps,int *pflt,char is_g);
errno_t __cdecl crt_stdio_c__cftof_FUN_100071a0(double *value,char *buf,size_t size_in_bytes,int dec);
char * __cdecl crt_stdio_c__cftof2_FUN_10007210(char *buf,uint dec,int *pflt,char is_g);
void __cdecl crt_stdio_c__cftog_FUN_100072d0(double *value,char *buf,size_t size_in_bytes,int caps);
void __cdecl crt_stdio_c__cfltcvt_FUN_10007380(double *value,char *buf,int format,size_t size_in_bytes,int precision,int caps);
void __cdecl crt_stdio_c__shift_FUN_100073f0(char *str,int dist);
int __cdecl crt_stdio_c__flsbuf_FUN_10007420(int ch,_FILE *str);
int __cdecl crt_startup_c__cinit_FUN_10007570(int init_fp);
void __cdecl crt_startup_c__exit_crt_FUN_100075c0(int code);
void __cdecl crt_startup_c__cexit_FUN_100075e0(void);
void __cdecl crt_startup_c_doexit_FUN_10007600(int code,int quick,int retcaller);
void __cdecl crt_startup_c__lockexit_FUN_100076c0(void);
void __cdecl crt_startup_c__unlockexit_FUN_100076d0(void);
void __cdecl crt_startup_c__initterm_FUN_100076e0(char *pfbegin,char *pfend);
int __cdecl crt_thread_c__mtinit_FUN_10007700(void);
void __cdecl crt_thread_c__mtterm_FUN_10007760(void);
void __cdecl crt_thread_c__initptd_FUN_10007790(_ptiddata ptd,pthreadlocinfo locale);
_ptiddata __cdecl crt_thread_c__getptd_FUN_100077b0(void);
void __cdecl crt_thread_c__freeptd_FUN_10007820(_ptiddata ptd);
int __cdecl crt_heap_c__heap_init_FUN_100078f0(int mtflag);
void __cdecl crt_heap_c__heap_term_FUN_10007910(void);
int __cdecl crt_io_c__ioinit_FUN_10007920(void);
void __cdecl crt_startup_c__ioterm_FUN_10007b00(void);
int __cdecl crt_env_c__setenvp_FUN_10007b60(void);
int __cdecl crt_startup_c__setargv_FUN_10007c40(void);
void __cdecl crt_stdlib_c_parse_cmdline_FUN_10007ce0(char *cmdstart,char **argv,char *args,int *pnumargs,int *pnumchars);
int __cdecl crt_locale_c__setmbcp_FUN_10007eb0(int code_page);
uint __cdecl crt_locale_c_getSystemCP_FUN_100080e0(void);
int __cdecl crt_locale_c__CPtoLCID_FUN_10008130(int codepage);
void __cdecl crt_locale_c_setSBCS_FUN_10008190(void);
void __cdecl crt_locale_c__initmbctable_FUN_100081d0(void);
LPWSTR __cdecl crt_env_c___crtGetEnvironmentStringsW_FUN_100081e0(void);
char * __cdecl crt_env_c___crtGetEnvironmentStringsA_FUN_100083e0(void);
int __cdecl crt_stdlib_c__set_error_mode_FUN_10008580(int mode);
void __cdecl crt_startup_c___set_app_type_FUN_100085b0(int app_type);
BOOL __cdecl crt_startup_c_DllMain_FUN_100085c0(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved);
void __cdecl crt_startup_c__FF_MSGBANNER_FUN_100085d0(void);
int __cdecl crt_startup_c__NMSG_WRITE_FUN_10008610(int rterrnum);
char * __cdecl crt_startup_c__GET_RTERRMSG_FUN_10008800(int rterrnum);
void * __cdecl crt_heap_c_malloc_FUN_10008830(size_t size);
void * __cdecl crt_heap_c__nh_malloc_FUN_10008850(size_t size,int nh_flag);
void * __cdecl crt_heap_c__heap_alloc_FUN_10008890(size_t size);
void __cdecl crt_io_c__alloc_piob_FUN_100088b0(void);
void __cdecl crt_errno_c__dosmaperr_FUN_100089a0(ulong oserrno);
int * __cdecl crt_errno_c__errno_FUN_10008a20(void);
ulong * __cdecl crt_errno_c___doserrno_FUN_10008a30(void);
int __cdecl crt_io_c__alloc_osfhnd_FUN_10008a40(void);
int __cdecl crt_io_c__set_osfhnd_FUN_10008b80(int fh,intptr_t osfhandle);
int __cdecl crt_io_c__free_osfhnd_FUN_10008c30(int fh);
intptr_t __cdecl crt_io_c__get_osfhandle_FUN_10008cd0(int fh);
int __cdecl crt_io_c__open_osfhandle_FUN_10008d20(intptr_t osfhandle,int flags);
int __cdecl crt_io_c__lock_fhandle_FUN_10008de0(int filehandle);
void __cdecl crt_io_c__unlock_fhandle_FUN_10008e50(int filehandle);
int __cdecl crt_io_c__commit_FUN_10008e80(int fh);
int __cdecl crt_io_c__write_FUN_10008f30(int file_handle,void *buf,uint max_char_count);
int __cdecl crt_io_c__write_lk_FUN_10008fb0(int fh,void *buf,uint cnt);
int __cdecl crt_io_c__isatty_FUN_100091b0(int fh);
int __cdecl crt_locale_c__wctomb_FUN_100091e0(char *mb_ch,wchar_t w_ch);
int __cdecl crt_locale_c__wctomb_lk_FUN_10009240(LPSTR mbchar,WCHAR wchar);
double __cdecl crt_math_c__aulldiv_FUN_100092e0(uint dividend_lo,uint dividend_hi,uint divisor_lo,uint divisor_hi);
double __cdecl crt_math_c__aullrem_FUN_10009350(uint dividend_lo,uint dividend_hi,uint divisor_lo,uint divisor_hi);
int __cdecl crt_io_c__open_FUN_100093d0(char *filename,int oflag);
int __cdecl crt_io_c__sopen_FUN_100093f0(char *path,int oflag,int shflag,int pmode);
uint __cdecl crt_fpu_c__control87_FUN_10009890(uint new_value,uint mask);
uint __cdecl crt_fpu_c__controlfp_FUN_100098d0(uint new_value,uint mask);
void __cdecl crt_fpu_c__fpreset_FUN_100098f0(void);
uint __cdecl crt_fpu_c__abstract_cw_FUN_10009930(ushort control_word);
uint __cdecl crt_fpu_c__hw_cw_FUN_100099e0(uint control_word);
uint __cdecl crt_fpu_c__statusfp_FUN_10009a70(void);
void __cdecl crt_fpu_c__fptrap_FUN_10009ab0(void);
int __cdecl crt_ctype_c__isctype_FUN_10009ac0(int c,int type);
int __cdecl crt_ctype_c__tolower_FUN_10009b70(int c);
uint __cdecl crt_ctype_c__tolower_lk_FUN_10009be0(uint c);
int __cdecl crt_math_c__ZeroTail_FUN_10009cd0(int man,int bit);
void __cdecl crt_math_c__IncMan_FUN_10009d40(int man,int bit);
int __cdecl crt_math_c__RoundMan_FUN_10009db0(int man,int bit);
void __cdecl crt_math_c__CopyMan_FUN_10009e60(int *dst,int *src);
void __cdecl crt_math_c__FillZeroMan_FUN_10009e80(int *man);
int __cdecl crt_math_c__IsZeroMan_FUN_10009e90(int *man);
void __cdecl crt_math_c__ShrMan_FUN_10009eb0(uint *man,int count);
int __cdecl crt_math_c__ld12cvt_FUN_10009f60(ushort *ld,uint *result,int *prec);
INTRNCVT_STATUS __cdecl crt_math_c___ld12tod_FUN_1000a130(_LDBL12 *ifp,_CRT_DOUBLE *d);
INTRNCVT_STATUS __cdecl crt_math_c___ld12tof_FUN_1000a150(_LDBL12 *ifp,_CRT_FLOAT *f);
INTRNCVT_STATUS __cdecl crt_math_c___ld12told_FUN_1000a170(_LDBL12 *ifp,_LDOUBLE *ld);
int __cdecl crt_math_c__atodbl_FUN_1000a200(_CRT_DOUBLE *result,char *str);
int __cdecl crt_math_c__atoldbl_FUN_1000a240(_LDOUBLE *result,char *str);
int __cdecl crt_math_c__atoflt_FUN_1000a280(_CRT_FLOAT *result,char *str);
errno_t __cdecl crt_stdio_c__fptostr_FUN_1000a2c0(char *buf,size_t size_in_bytes,int digits,STRFLT pt_flt);
STRFLT __cdecl crt_stdio_c__fltout2_FUN_1000a350(_CRT_DOUBLE dbl,STRFLT flt,char *result_str,size_t size_in_bytes);
void __cdecl crt_math_c__dtold_FUN_1000a3e0(uint *dst,uint *src);
void * __cdecl crt_string_c_memcpy_FUN_1000a4a0(void *dst,void *src,size_t size);
int __cdecl crt_io_c__write_dup_FUN_1000a5f0(int file_handle,void *buf,uint max_char_count);
long __cdecl crt_io_c__lseek_lk_FUN_1000a670(int fh,long offset,int origin);
void __cdecl crt_stdio_c__getbuf_FUN_1000a700(_FILE *file);
void * __cdecl crt_heap_c_calloc_FUN_1000a750(size_t num,size_t size);
int __cdecl crt_signal_c__XcptFilter_FUN_1000a7b0(uint xcpt_num,_EXCEPTION_POINTERS *pxcpt_ptrs);
void * __cdecl crt_signal_c__xcptlookup_FUN_1000a900(void *table,int xcpt_num);
size_t __cdecl crt_string_c_wcslen_FUN_1000a930(wchar_t *str);
int __cdecl crt_system_c__crtMessageBoxA_FUN_1000a950(LPCSTR lp_text,LPCSTR lp_caption,UINT u_type);
char * __cdecl crt_string_c__strncpy_FUN_1000a9f0(char *dest,char *source,size_t count);
_PNH __cdecl crt_heap_c__set_new_handler_FUN_1000aaf0(_PNH pnh);
int __cdecl crt_heap_c__callnewh_FUN_1000ab30(size_t size);
void __cdecl crt_stdio_c___endstdio_FUN_1000ab70(void);
char * __cdecl crt_locale_c_setlocale_FUN_1000ac10(int category,char *locale);
char * __cdecl crt_locale_c_setlocale_set_cat_FUN_1000aee0(int category,char *locale);
char * __cdecl crt_locale_c_setlocale_get_all_FUN_1000b060(void);
int __cdecl crt_locale_c__expandlocale_FUN_1000b150(char *locale,char *cat,LC_ID *lc_id,UINT *code_page);
void __cdecl crt_locale_c__lc_lctostr_FUN_1000b330(char *dst,int count,...);
int __cdecl crt_locale_c__lc_strtolc_FUN_1000b380(char *lc,char *locale);
void __cdecl crt_locale_c__setlocale_catcopy_FUN_1000b480(char *dst,char *lc);
int __cdecl crt_io_c__chsize_FUN_1000b4f0(int fh,long size);
int __cdecl crt_io_c__chsize_lk_FUN_1000b560(int fh,long size);
int __cdecl crt_io_c__read_FUN_1000b6a0(int fh,void *buf,uint cnt);
int __cdecl crt_io_c__read_lk_FUN_1000b720(int fh,void *buf,uint cnt);
_sigfn __cdecl crt_signal_c_signal_FUN_1000b950(int sig,_sigfn handler);
void * __cdecl crt_signal_c_siglookup2_FUN_1000bb30(int sig);
int __cdecl crt_signal_c_raise_FUN_1000bbc0(int sig);
_XCPT_ACTION * __cdecl crt_signal_c_siglookup_FUN_1000bda0(int signum,_XCPT_ACTION *table);
void ** __cdecl crt_thread_c___pxcptinfoptrs_FUN_1000bdf0(void);
BOOL __cdecl crt_locale_c___crtGetStringTypeW_FUN_1000be00(DWORD info_type,LPCWSTR src,int cch_src,LPWORD char_type,UINT code_page,LCID lcid);
BOOL __cdecl crt_locale_c__crtGetStringTypeA_FUN_1000bfc0(_locale_t plocinfo,DWORD dw_info_type,LPCSTR lp_src_str,int cch_src,LPWORD lp_char_type,int code_page,BOOL b_error);
int __cdecl crt_locale_c___crtLCMapStringA_v2_FUN_1000c0f0(LCID lcid,DWORD map_flags,LPCSTR src,int cch_src,LPSTR dest,int cch_dest,UINT code_page,BOOL error);
size_t __cdecl crt_string_c_wcsnlen_FUN_1000c300(wchar_t *str,int max);
int __cdecl crt_locale_c___crtLCMapStringA_FUN_1000c340(LCID lcid,DWORD map_flags,LPCSTR src,int cch_src,LPWSTR dest,int cch_dest,UINT code_page);
size_t __cdecl crt_string_c__strncnt_FUN_1000c570(char *str,size_t count);
uint __cdecl crt_math_c__addl_FUN_1000c5a0(uint a,uint b,uint *result);
void __cdecl crt_math_c__add_12_FUN_1000c5d0(uint *a,uint *b);
void __cdecl crt_math_c__shl_12_FUN_1000c640(uint *p);
void __cdecl crt_math_c__shr_12_FUN_1000c680(uint *p);
void __cdecl crt_math_c__mtold12_FUN_1000c6c0(char *manptr,int cnt,uint *ld12);
uint __cdecl crt_math_c__strgtold12_FUN_1000c7b0(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,int implicit_e);
int __cdecl crt_stdlib_c__atodbl_v2_FUN_1000cf00(_CRT_DOUBLE *result,char *str);
int __cdecl crt_stdio_c__i10_output_FUN_1000cf50(int man_lo,uint man_hi,ushort exp_sign,int ndigits,byte flags,short *out);
uint __cdecl crt_time_c___get_lc_time_FUN_1000d3a0(__lc_time_data *lc_time);
void __cdecl crt_time_c___free_lc_time_FUN_1000d720(__lc_time_data *lc_time);
uint __cdecl crt_time_c__maketimefmt_FUN_1000d960(LCID lcid,__lc_time_data *tdata);
void __cdecl crt_locale_c__fix_grouping_FUN_1000dc80(char *grouping);
uint __cdecl crt_locale_c___get_lc_monetary_FUN_1000ddc0(lconv *lc);
void __cdecl crt_locale_c__fix_grouping_FUN_1000df10(char *grouping);
void __cdecl crt_locale_c___free_lconv_mon_FUN_1000df60(lconv *lc);
size_t __cdecl crt_string_c_strcspn_FUN_1000e290(char *str,char *control);
int __cdecl crt_string_c_strncmp_FUN_1000e2d0(char *str1,char *str2,size_t count);
char * __cdecl crt_string_c_strpbrk_FUN_1000e310(char *str,char *control);
int __cdecl crt_locale_c___get_qualified_locale_FUN_1000e350(char *locale,void *id,void *out);
uint __cdecl crt_locale_c_GetLcidFromLanguage_FUN_1000e650(char *lang);
uint __cdecl crt_locale_c_GetLcidFromCountry_FUN_1000e6b0(char *country);
int __cdecl crt_locale_c_GetLcidFromCountry_FUN_1000e710(ushort ctry);
int __cdecl crt_locale_c_GetLcidFromDefault_FUN_1000e760(ushort langid);
int __cdecl crt_locale_c_GetLcidFromLangCountry_FUN_1000e780(ushort *plang,ushort *pctry);
int __cdecl crt_io_c__setmode_FUN_1000e810(int fh,int mode);
int __cdecl crt_io_c__setmode_lk_FUN_1000e880(uint fh,int mode);
void __cdecl crt_math_c___multtwelve_FUN_1000e8f0(_LDBL12 *a,_LDBL12 *b);
void __cdecl crt_math_c__multtenpow12_FUN_1000eba0(_LDBL12 *ld12,uint pow,int flag);
size_t __cdecl crt_time_c_strftime_FUN_1000ec20(char *dest,size_t max_size,char *format,_tm *timeptr);
void __cdecl crt_time_c__expandtime_FUN_1000ed30(uchar code,_tm *tb,char **buf,size_t *count);
void __cdecl crt_time_c__store_str_FUN_1000f2a0(char *src,char **pbuf,int *pcount);
void __cdecl crt_time_c__store_number_FUN_1000f2d0(int value,uint width,char **buf,size_t *count);
void __cdecl crt_time_c__store_number_rev_FUN_1000f360(int value,char **buf,size_t *count);
void __cdecl crt_time_c__expand_locale_picture_FUN_1000f3c0(char *picture,uint flags,char **buf,size_t *count);
int __cdecl crt_locale_c___getlocaleinfo_FUN_1000f6e0(int type,LCID lcid,LCTYPE lc_type,void *out);
char * __cdecl crt_stdlib_c__itoa_FUN_1000f8b0(int val,char *buf,int radix);
void __cdecl crt_stdlib_c_xtoa_FUN_1000f8f0(ulong val,char *buf,uint radix,int neg);
char * __cdecl crt_stdlib_c__ltoa_FUN_1000f950(long val,char *buf,int radix);
char * __cdecl crt_stdlib_c__ultoa_FUN_1000f980(ulong val,char *buf,int radix);
int __cdecl crt_locale_c___crtGetLocaleInfoW_FUN_1000f9a0(LCID lcid,LCTYPE lc_type,LPWSTR dest,int cch,UINT code_page);
int __cdecl crt_locale_c___crtGetLocaleInfoA_FUN_1000fad0(LCID lcid,LCTYPE lc_type,LPSTR dest,int cch,UINT code_page);
long __cdecl crt_stdlib_c_wcstol_FUN_1000fc10(wchar_t *nptr,wchar_t **endptr,int base);
ulong __cdecl crt_stdlib_c_wcstoxl_FUN_1000fc30(wchar_t *nptr,wchar_t **endptr,int base,int flags);
ulong __cdecl crt_stdlib_c_wcstoul_FUN_1000fe40(wchar_t *nptr,wchar_t **endptr,int base);
long __cdecl crt_stdlib_c_atol_FUN_1000fe60(char *str);
int __cdecl crt_stdlib_c_atoi_FUN_1000ff10(char *str);
int __cdecl crt_string_c__stricmp_FUN_1000ff20(char *str1,char *str2);
void __cdecl crt_time_c___tzset_FUN_1000fff0(void);

