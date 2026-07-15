# tridx7.dll — CRT function identification & naming

Statically-linked **MSVC VC6 C runtime**. (The `compiler: watcomcpp` tag in `metadata.json` is a mis-detection — this is MSVC.)

- **Driver code** (the `APIDLL*` renderer exports + private helpers; see [`../11-tridx7_3d_renderer_dll/`](../11-tridx7_3d_renderer_dll/)) is entirely **below 0x10005400** — out of scope here.
- **CRT** = everything **≥ 0x10005400**, catalogued below in the `crt_<header>_<name>_FUN_<addr>` standard.
- **248 CRT functions catalogued** — all named; **200 fully signatured** (return type + params + `__cdecl` + snake_case parameter names); the only unsignatured function is the naked `_chkstk`.

`conf`: H=certain · M=likely · L=needs work (all rows currently H/M). Buckets are coarse/conceptual (nocedit.exe convention).

## ✅ Flagged items — verified

All resolved by reading asm/decomp:

| addr | FID/prev label | **verified as** | how |
|------|----------------|-----------------|-----|
| 100054d0 | FID_conflict `_fwprintf` | **`fprintf`** | narrow `_output`, not wide |
| 10005560 | FID_conflict `_wfopen` | **`fopen`** | `_fsopen(name,mode,0x40)` |
| 1000a4a0 | FID_conflict `_memcpy` | **`memcpy`/`memmove`** | shared fwd/bwd body |
| 1000a130 | FID_conflict `_ld12tod` | **`__ld12tod`** (double) | table@76a0 prec 53 |
| 1000a150 | FID_conflict `_ld12tod` | **`__ld12tof`** (float) | table@76b8 prec 24 |
| 1000a200 | FID_conflict `_atodbl` | **`_atodbl`** (double) | →__ld12tod |
| 1000a280 | FID_conflict `_atodbl` | **`_atoflt`** (float) | →__ld12tof |
| 1000ed30 / 1000f3c0 | 2×`_expandtime` | **`_expandtime`** + **`_expand_locale_picture`** | picture-translator recurses into expandtime |
| 1000f2d0 / 1000f360 | 2×`_store_number` | fixed-width vs reversed-minimal | distinct static helpers |

**Also found: 2 functions Ghidra never defined** — `1000a170` (`__ld12told`) and `1000a240` (`_atoldbl`), the long-double members of the ld12/ato families. ✅ Now defined (a170 via the boundary-fix pass; a240 by user) and present in the re-export.

## crt_startup.c  (17)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 10005600 | `crt_startup.c__chkstk_FUN_10005600` | `void __declspec(naked)(void)` | H | CMP 0x1000 stack-probe loop (_alloca_probe) |
| 100056a0 | `crt_startup.c___CRTDLL_INIT_FUN_100056a0` | `BOOL __cdecl(HINSTANCE hinst_dll, DWORD reason, LPVOID reserved)` | H | entry XREF; __cinit/__mtinit/__setargv/GetVersion |
| 100057f0 | `crt_startup.c__DllMainCRTStartup_FUN_100057f0` | `int __cdecl(HINSTANCE hinst_dll, DWORD reason, LPVOID reserved)` | H | FID: PE entry point |
| 100058c0 | `crt_startup.c__amsg_exit_FUN_100058c0` | `void __cdecl(int rterrnum)` | H | FID |
| 10007570 | `crt_startup.c__cinit_FUN_10007570` | `int __cdecl(int init_fp)` | H | FID |
| 100075c0 | `crt_startup.c__exit_crt_FUN_100075c0` | `void __cdecl(int code)` | H | FID: __exit |
| 100075e0 | `crt_startup.c__cexit_FUN_100075e0` | `void __cdecl(void)` | H | calls doexit(0,0,1) |
| 10007600 | `crt_startup.c_doexit_FUN_10007600` | `void __cdecl(int code, int quick, int retcaller)` | H | __initterm, ExitProcess |
| 100076c0 | `crt_startup.c__lockexit_FUN_100076c0` | `void __cdecl(void)` | H | __lock(13) = _EXIT_LOCK1 |
| 100076d0 | `crt_startup.c__unlockexit_FUN_100076d0` | `void __cdecl(void)` | H | _unlock(13) |
| 100076e0 | `crt_startup.c__initterm_FUN_100076e0` | `void __cdecl(char* pfbegin, char* pfend)` | H | FID |
| 10007b00 | `crt_startup.c__ioterm_FUN_10007b00` | `void __cdecl(void)` | H | FID |
| 10007c40 | `crt_startup.c__setargv_FUN_10007c40` | `int __cdecl(void)` | H | FID |
| 100085b0 | `crt_startup.c___set_app_type_FUN_100085b0` | `void __cdecl(int app_type)` | H | stores __app_type |
| 100085c0 | `crt_startup.c_DllMain_FUN_100085c0` | `BOOL __cdecl(HINSTANCE hinst_dll, DWORD reason, LPVOID reserved)` | M | RET 0xc, returns TRUE |
| 100085d0 | `crt_startup.c__FF_MSGBANNER_FUN_100085d0` | `void __cdecl(void)` | H | FID |
| 10008610 | `crt_startup.c__NMSG_WRITE_FUN_10008610` | `int __cdecl(int rterrnum)` | H | "R6009","Runtime Error",___crtMessageBoxA |

## crt_stdio.c  (32)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 10005430 | `crt_stdio.c__fclose_FUN_10005430` | `int __cdecl(FILE* file)` | H | FID |
| 10005470 | `crt_stdio.c__fclose_lk_FUN_10005470` | `int __cdecl(FILE* file)` | H | FID: _flush/_freebuf/_close under lock, ret -1/0 |
| 100054d0 | `crt_stdio.c_fprintf_FUN_100054d0` | `int __cdecl(FILE* file, const char* format, ...)` | H | was FID_conflict _fwprintf; body = lock/_stbuf/_output/_ftbuf = **fprintf** (narrow, not wide) |
| 10005520 | `crt_stdio.c__fsopen_FUN_10005520` | `FILE* __cdecl(char* filename, char* mode, int sh_flag)` | H | FID |
| 10005560 | `crt_stdio.c_fopen_FUN_10005560` | `FILE* __cdecl(const char* filename, const char* mode)` | H | was FID_conflict _wfopen; body = _fsopen(name,mode,0x40) = **fopen** |
| 10005630 | `crt_stdio.c__sprintf_FUN_10005630` | `int __cdecl(char* dest, char* format)` | H | FID |
| 10005a70 | `crt_stdio.c__lock_file2_FUN_10005a70` | `void __cdecl(int index, void * stream)` | H | idx<20 __lock(idx+0x1c) else EnterCriticalSection |
| 10005ae0 | `crt_stdio.c__unlock_file2_FUN_10005ae0` | `void __cdecl(int index, void * stream)` | H | mirror of _lock_file2 |
| 10005c50 | `crt_stdio.c__freebuf_FUN_10005c50` | `void __cdecl(FILE* file)` | H | FID |
| 10005d10 | `crt_stdio.c__flush_FUN_10005d10` | `int __cdecl(FILE* file)` | H | FID |
| 10005e60 | `crt_stdio.c__stbuf_FUN_10005e60` | `int __cdecl(FILE* file)` | H | FID |
| 10005f00 | `crt_stdio.c__ftbuf_FUN_10005f00` | `void __cdecl(int flag, FILE* file)` | H | FID |
| 10005f40 | `crt_stdio.c__output_FUN_10005f40` | `int __cdecl(FILE*, const char * fmt, va_list)` | H | printf core; XREF sprintf/fwprintf |
| 10006920 | `crt_stdio.c_write_char_FUN_10006920` | `void __cdecl(int ch, FILE* file, int* pnumwritten)` | H | FID: _output helper |
| 10006970 | `crt_stdio.c_write_multi_char_FUN_10006970` | `void __cdecl(int ch, int count, FILE* file, int* pnumwritten)` | H | FID: _output helper |
| 100069b0 | `crt_stdio.c_write_string_FUN_100069b0` | `void __cdecl(char* str, int len, FILE* file, int* pnumwritten)` | H | FID: _output helper |
| 100069f0 | `crt_stdio.c_get_int_arg_FUN_100069f0` | `int __cdecl(va_list* parg)` | H | _output arg fetch (*p+=4) |
| 10006a00 | `crt_stdio.c_get_int64_arg_FUN_10006a00` | `longlong __cdecl(va_list* parg)` | H | *p+=8, EDX:EAX |
| 10006a20 | `crt_stdio.c_get_short_arg_FUN_10006a20` | `short __cdecl(va_list* parg)` | H | *p+=4, 2-byte AX |
| 10006a30 | `crt_stdio.c__openfile_FUN_10006a30` | `FILE* __cdecl(char* filename, char* mode, int sh_flag, FILE* file)` | H | FID |
| 10006c40 | `crt_stdio.c__getstream_FUN_10006c40` | `FILE * __cdecl(void)` | H | scans __piob[_nstream=0x83] |
| 10007030 | `crt_stdio.c__cftoe_FUN_10007030` | `errno_t __cdecl(double* value, char* buf, size_t size_in_bytes, int dec, int caps)` | H | FID |
| 100070b0 | `crt_stdio.c__cftoe2_FUN_100070b0` | `char * __cdecl(char* buf, int dec, int caps, int* pflt, char is_g)` | H | FID |
| 100071a0 | `crt_stdio.c__cftof_FUN_100071a0` | `errno_t __cdecl(double* value, char* buf, size_t size_in_bytes, int dec)` | H | FID |
| 10007210 | `crt_stdio.c__cftof2_FUN_10007210` | `char * __cdecl(char* buf, uint dec, int* pflt, char is_g)` | H | FID |
| 100072d0 | `crt_stdio.c__cftog_FUN_100072d0` | `void __cdecl(double* value, char* buf, size_t size_in_bytes, int caps)` | H | FID |
| 100073f0 | `crt_stdio.c__shift_FUN_100073f0` | `void __cdecl(char* str, int dist)` | H | FID |
| 10007420 | `crt_stdio.c__flsbuf_FUN_10007420` | `int __cdecl(int ch, FILE * str)` | H | __getbuf/__write flush-buffer |
| 1000a2c0 | `crt_stdio.c__fptostr_FUN_1000a2c0` | `errno_t __cdecl(char* buf, size_t size_in_bytes, int digits, STRFLT pt_flt)` | H | FID |
| 1000a350 | `crt_stdio.c__fltout2_FUN_1000a350` | `STRFLT __cdecl(_CRT_DOUBLE dbl, STRFLT flt, char* result_str, size_t size_in_bytes)` | H | FID |
| 1000a700 | `crt_stdio.c__getbuf_FUN_1000a700` | `void __cdecl(FILE* file)` | H | FID |
| 1000cf50 | `crt_stdio.c__i10_output_FUN_1000cf50` | `int __cdecl(int man_lo, uint man_hi, ushort exp_sign, int ndigits, byte flags, short* out)` | H | FID: $I10_OUTPUT |

## crt_io.c  (18)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 10005b50 | `crt_io.c__close_FUN_10005b50` | `int __cdecl(int file_handle)` | H | FID |
| 10005bc0 | `crt_io.c__close_lk_FUN_10005bc0` | `int __cdecl(int fh)` | H | FID |
| 10007920 | `crt_io.c__ioinit_FUN_10007920` | `int __cdecl(void)` | H | GetStartupInfoA, SetHandleCount |
| 10008a40 | `crt_io.c__alloc_osfhnd_FUN_10008a40` | `int __cdecl(void)` | H | FID |
| 10008b80 | `crt_io.c__set_osfhnd_FUN_10008b80` | `int __cdecl(int fh, intptr_t osfhandle)` | H | _pioinfo, SetStdHandle for 0/1/2 |
| 10008c30 | `crt_io.c__free_osfhnd_FUN_10008c30` | `int __cdecl(int fh)` | H | FOPEN check, SetStdHandle, clears osfhnd |
| 10008cd0 | `crt_io.c__get_osfhandle_FUN_10008cd0` | `intptr_t __cdecl(int fh)` | H | returns osfhnd if FOPEN else EBADF |
| 10008de0 | `crt_io.c__lock_fhandle_FUN_10008de0` | `int __cdecl(int filehandle)` | H | FID |
| 10008e50 | `crt_io.c__unlock_fhandle_FUN_10008e50` | `void __cdecl(int filehandle)` | H | FID |
| 10008f30 | `crt_io.c__write_FUN_10008f30` | `int __cdecl(int file_handle, void* buf, uint max_char_count)` | H | FID |
| 10008fb0 | `crt_io.c__write_lk_FUN_10008fb0` | `int __cdecl(int fh, const void* buf, unsigned int cnt)` | H | WriteFile + LF->CRLF, __dosmaperr |
| 100091b0 | `crt_io.c__isatty_FUN_100091b0` | `int __cdecl(int fh)` | H | _osfile(fh) & FDEV(0x40) |
| 100093f0 | `crt_io.c__sopen_FUN_100093f0` | `int __cdecl(const char* path, int oflag, int shflag, int pmode)` | H | CreateFileA, _alloc_osfhnd |
| 1000a5f0 | `crt_io.c__write_dup_FUN_1000a5f0` | `int __cdecl(int file_handle, void* buf, uint max_char_count)` | H | FID: dup body of _write |
| 1000a670 | `crt_io.c__lseek_lk_FUN_1000a670` | `long __cdecl(int fh, long offset, int origin)` | H | FID |
| 1000b560 | `crt_io.c__chsize_lk_FUN_1000b560` | `int __cdecl(int fh, long size)` | H | FID: lseek/write-zero/SetEndOfFile grow-or-shrink under lock |
| 1000b720 | `crt_io.c__read_lk_FUN_1000b720` | `int __cdecl(int fh, void* buf, unsigned int cnt)` | M | ReadFile + CRLF->LF/^Z xlate |
| 1000e880 | `crt_io.c__setmode_lk_FUN_1000e880` | `int __cdecl(uint fh, int mode)` | H | FID |

## crt_string.c  (12)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 1000a4a0 | `crt_string.c_memcpy_FUN_1000a4a0` | `void* __cdecl(void* dst, const void* src, size_t size)` | H | was FID_conflict; dual fwd/bwd switch tables = **memcpy/memmove** shared body |
| 1000a930 | `crt_string.c_wcslen_FUN_1000a930` | `size_t __cdecl(const wchar_t* str)` | H | word scan, (end-start)>>1 |
| 1000a9f0 | `crt_string.c__strncpy_FUN_1000a9f0` | `char* __cdecl(char* dest, char* source, size_t count)` | H | FID |
| 1000c570 | `crt_string.c__strncnt_FUN_1000c570` | `size_t __cdecl(char* str, size_t count)` | M | count chars to NUL/cnt; helper of __crtLCMapStringA |
| 1000ff20 | `crt_string.c__stricmp_FUN_1000ff20` | `int __cdecl(char* str1, char* str2)` | H | __tolower_lk under lock |
| 10010be0 | `crt_string.c__wcsnlen_FUN_10010be0` | `size_t __cdecl(const wchar_t* str, size_t max)` | H | bounded wide strlen, returns count+1 if NUL within max |
| 10011330 | `crt_string.c_strncnt_FUN_10011330` | `int __cdecl(char* str, int count)` | M | count-bytes-to-nul helper for __crtCompareStringA |
| 100116f0 | `crt_string.c__mbschr_FUN_100116f0` | `uchar * __cdecl(uchar* str, uint c)` | M | mbcs gate -> strchr / leadbyte scan |
| 100117b0 | `crt_string.c__strdup_FUN_100117b0` | `char* __cdecl(const char* s)` | H | strlen+1 -> malloc -> strcpy |
| 100117f0 | `crt_string.c_strchr_FUN_100117f0` | `char* __cdecl(const char* s, int c)` | H | word-aligned char scan |
| 100118b0 | `crt_string.c_strlen_FUN_100118b0` | `size_t __cdecl(const char* s)` | H | 0x7efefeff word-length magic |
| 10011930 | `crt_string.c_strcpy_FUN_10011930` | `char* __cdecl(char* dst, const char* src)` | H | 0x7efefeff word-copy magic |

## crt_ctype.c  (3)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 10009ac0 | `crt_ctype.c__isctype_FUN_10009ac0` | `int __cdecl(int c, int type)` | H | FID |
| 10009b70 | `crt_ctype.c__tolower_FUN_10009b70` | `int __cdecl(int c)` | H | FID |
| 10009be0 | `crt_ctype.c__tolower_lk_FUN_10009be0` | `uint __cdecl(uint c)` | H | FID |

## crt_locale.c  (18)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 10007eb0 | `crt_locale.c__setmbcp_FUN_10007eb0` | `int __cdecl(int code_page)` | H | FID |
| 100080e0 | `crt_locale.c_getSystemCP_FUN_100080e0` | `uint __cdecl(void)` | H | FID |
| 10008130 | `crt_locale.c__CPtoLCID_FUN_10008130` | `int __cdecl(int codepage)` | H | FID |
| 10008190 | `crt_locale.c_setSBCS_FUN_10008190` | `void __cdecl(void)` | H | FID: zeroes the mbc lead/trail tables (single-byte codepage) |
| 100081d0 | `crt_locale.c__initmbctable_FUN_100081d0` | `void __cdecl(void)` | H | FID: _setmbcp(-3) |
| 100091e0 | `crt_locale.c__wctomb_FUN_100091e0` | `int __cdecl(char* mb_ch, wchar_t w_ch)` | H | FID |
| 10009240 | `crt_locale.c__wctomb_lk_FUN_10009240` | `int __cdecl(LPSTR mbchar, WCHAR wchar)` | H | FID |
| 1000be00 | `crt_locale.c___crtGetStringTypeW_FUN_1000be00` | `BOOL __cdecl(DWORD info_type, LPCWSTR src, int cch_src, LPWORD char_type, UINT code_page, LCID lcid)` | H | GetStringTypeW/A + WideCharToMultiByte fallback |
| 1000bfc0 | `crt_locale.c__crtGetStringTypeA_FUN_1000bfc0` | `BOOL __cdecl(_locale_t plocinfo, DWORD dw_info_type, LPCSTR lp_src_str, int cch_src, LPWORD lp_char_type, int code_page, BOOL b_error)` | H | FID |
| 1000c340 | `crt_locale.c___crtLCMapStringA_FUN_1000c340` | `int __cdecl(LCID lcid, DWORD map_flags, LPCSTR src, int cch_src, LPWSTR dest, int cch_dest, UINT code_page)` | H | LCMapStringW/A, MB2WC |
| 1000dc80 | `crt_locale.c__fix_grouping_FUN_1000dc80` | `void __cdecl(char* grouping)` | M | digit-'0' + strip ';' grouping fixup |
| 1000ddc0 | `crt_locale.c___get_lc_monetary_FUN_1000ddc0` | `uint __cdecl(lconv* lc)` | M | SCURRENCY/SMON* indices, fix_grouping |
| 1000df10 | `crt_locale.c__fix_grouping_FUN_1000df10` | `void __cdecl(char* grouping)` | M | monetary grouping fixup (copy) |
| 1000df60 | `crt_locale.c___free_lconv_mon_FUN_1000df60` | `void __cdecl(lconv* lc)` | M | frees monetary lconv ptrs +0xc..+0x24 |
| 1000f6e0 | `crt_locale.c___getlocaleinfo_FUN_1000f6e0` | `int __cdecl(int type, LCID lcid, LCTYPE lc_type, void* out)` | M | wraps __crtGetLocaleInfoA/W |
| 1000f9a0 | `crt_locale.c___crtGetLocaleInfoW_FUN_1000f9a0` | `int __cdecl(LCID lcid, LCTYPE lc_type, LPWSTR dest, int cch, UINT code_page)` | H | GetLocaleInfoW/A + MB2WC fallback |
| 1000fad0 | `crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0` | `int __cdecl(LCID lcid, LCTYPE lc_type, LPSTR dest, int cch, UINT code_page)` | H | GetLocaleInfoA/W + WC2MB fallback |
| 10011040 | `crt_locale.c___crtCompareStringA_FUN_10011040` | `int __cdecl(LCID lcid, DWORD flags, LPCSTR str1, int cch1, LPCSTR str2, int cch2, int code_page)` | H | CompareStringA/W,GetCPInfo,MultiByteToWideChar |

## crt_fpu.c  (9)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 10005580 | `crt_fpu.c__fpmath_FUN_10005580` | `void __cdecl(int flag)` | H | FID |
| 100055b0 | `crt_fpu.c__install_fp_handlers_FUN_100055b0` | `void __cdecl(void)` | M | installs 6 __fptrap exception vectors (10016d48..5c) |
| 10006d30 | `crt_fpu.c__setdefaultprecision_FUN_10006d30` | `void __cdecl(void)` | H | FID: _controlfp(0x10000,0x30000) = 53-bit precision |
| 10006da0 | `crt_fpu.c__ms_p5_mp_test_fdiv_FUN_10006da0` | `int __cdecl(void)` | H | _ms_p5_test_fdiv + affinity mask |
| 10009890 | `crt_fpu.c__control87_FUN_10009890` | `uint __cdecl(uint new_value, uint mask)` | H | FID |
| 100098d0 | `crt_fpu.c__controlfp_FUN_100098d0` | `uint __cdecl(uint new_value, uint mask)` | H | FID |
| 10009930 | `crt_fpu.c__abstract_cw_FUN_10009930` | `uint __cdecl(ushort control_word)` | H | FID |
| 100099e0 | `crt_fpu.c__hw_cw_FUN_100099e0` | `uint __cdecl(uint control_word)` | H | reads [ESP+4] abstract CW, returns hardware x87 CW; inverse of _abstract_cw |
| 10009ab0 | `crt_fpu.c__fptrap_FUN_10009ab0` | `void __cdecl(void)` | H | FID |

## crt_math.c  (24)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 10006d50 | `crt_math.c__ms_p5_test_fdiv_FUN_10006d50` | `int __cdecl(void)` | H | FID: Pentium FDIV test, returns 0 (no bug) |
| 100092e0 | `crt_math.c__aulldiv_FUN_100092e0` | `double __cdecl(uint dividend_lo, uint dividend_hi, uint divisor_lo, uint divisor_hi)` | H | FID |
| 10009350 | `crt_math.c__aullrem_FUN_10009350` | `double __cdecl(uint dividend_lo, uint dividend_hi, uint divisor_lo, uint divisor_hi)` | H | FID |
| 10009cd0 | `crt_math.c__ZeroTail_FUN_10009cd0` | `int __cdecl(int man, int bit)` | H | FID |
| 10009d40 | `crt_math.c__IncMan_FUN_10009d40` | `void __cdecl(int man, int bit)` | H | FID |
| 10009db0 | `crt_math.c__RoundMan_FUN_10009db0` | `int __cdecl(int man, int bit)` | H | FID |
| 10009e60 | `crt_math.c__CopyMan_FUN_10009e60` | `void __cdecl(int* dst, int* src)` | H | FID |
| 10009e80 | `crt_math.c__FillZeroMan_FUN_10009e80` | `void __cdecl(int* man)` | H | FID |
| 10009e90 | `crt_math.c__IsZeroMan_FUN_10009e90` | `int __cdecl(int* man)` | H | FID |
| 10009eb0 | `crt_math.c__ShrMan_FUN_10009eb0` | `void __cdecl(uint* man, int count)` | H | FID |
| 10009f60 | `crt_math.c__ld12cvt_FUN_10009f60` | `int __cdecl(ushort* ld, uint* result, int* prec)` | H | FID |
| 1000a130 | `crt_math.c___ld12tod_FUN_1000a130` | `INTRNCVT_STATUS __cdecl(_LDBL12* ifp, _CRT_DOUBLE* d)` | H | table@0x100176a0 prec=0x35(53) -> **double** |
| 1000a150 | `crt_math.c___ld12tof_FUN_1000a150` | `INTRNCVT_STATUS __cdecl(_LDBL12* ifp, _CRT_FLOAT* f)` | H | was 2nd _ld12tod; table@0x100176b8 prec=0x18(24) -> **float** (__ld12tof) |
| 1000a200 | `crt_math.c__atodbl_FUN_1000a200` | `int __cdecl(_CRT_DOUBLE* result, char* str)` | H | strgtold12 -> __ld12tod = **_atodbl** (correct) |
| 1000a280 | `crt_math.c__atoflt_FUN_1000a280` | `int __cdecl(_CRT_FLOAT* result, char* str)` | H | was 2nd _atodbl; strgtold12 -> __ld12tof = **_atoflt** (float) |
| 1000a3e0 | `crt_math.c__dtold_FUN_1000a3e0` | `void __cdecl(uint* dst, uint* src)` | H | FID |
| 1000c5a0 | `crt_math.c__addl_FUN_1000c5a0` | `uint __cdecl(uint a, uint b, uint* result)` | H | FID |
| 1000c5d0 | `crt_math.c__add_12_FUN_1000c5d0` | `void __cdecl(uint* a, uint* b)` | H | FID |
| 1000c640 | `crt_math.c__shl_12_FUN_1000c640` | `void __cdecl(uint* p)` | H | FID |
| 1000c680 | `crt_math.c__shr_12_FUN_1000c680` | `void __cdecl(uint* p)` | H | FID |
| 1000c6c0 | `crt_math.c__mtold12_FUN_1000c6c0` | `void __cdecl(char* manptr, int cnt, uint* ld12)` | H | FID |
| 1000c7b0 | `crt_math.c__strgtold12_FUN_1000c7b0` | `uint __cdecl(_LDBL12* pld12, char** p_end_ptr, char* str, int mult12, int scale, int decpt, int implicit_e)` | H | FID |
| 1000e8f0 | `crt_math.c___multtwelve_FUN_1000e8f0` | `void __cdecl(_LDBL12* a, _LDBL12* b)` | H | XREF $I10_OUTPUT/__multtenpow12; __addl/__shl_12 |
| 1000eba0 | `crt_math.c__multtenpow12_FUN_1000eba0` | `void __cdecl(_LDBL12* ld12, uint pow, int flag)` | H | FID |

## crt_time.c  (11)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 1000d3a0 | `crt_time.c___get_lc_time_FUN_1000d3a0` | `uint __cdecl(__lc_time_data* lc_time)` | M | LOCALE day/month/AMPM/date indices |
| 1000d720 | `crt_time.c___free_lc_time_FUN_1000d720` | `void __cdecl(__lc_time_data* lc_time)` | M | frees string ptrs +0..+0xa8 |
| 1000d960 | `crt_time.c__maketimefmt_FUN_1000d960` | `uint __cdecl(LCID lcid, struct __lc_time_data* tdata)` | H | builds "HH:mm:ss" picture from LOCALE_ITIME/ITLZERO/STIME into +0xa8 |
| 1000ed30 | `crt_time.c__expandtime_FUN_1000ed30` | `void __cdecl(unsigned char code, struct tm* tb, char** buf, size_t* count)` | H | per-code strftime expander (day/month tables) |
| 1000f2a0 | `crt_time.c__store_str_FUN_1000f2a0` | `void __cdecl(char* src, char** pbuf, int* pcount)` | M | strftime helper: copy str into buf |
| 1000f2d0 | `crt_time.c__store_number_FUN_1000f2d0` | `void __cdecl(int value, uint width, char** buf, size_t* count)` | M | strftime static helper: fixed-width zero-padded field |
| 1000f360 | `crt_time.c__store_number_rev_FUN_1000f360` | `void __cdecl(int value, char** buf, size_t* count)` | M | strftime static helper: minimal digits, reversed in place |
| 1000f3c0 | `crt_time.c__expand_locale_picture_FUN_1000f3c0` | `void __cdecl(char* picture, uint flags, char** buf, size_t* count)` | H | translates Win32 date/time picture ("h:mm:ss tt") -> strftime codes -> _expandtime |
| 1000fe60 | `crt_stdlib.c_atol_FUN_1000fe60` | `long __cdecl(const char* str)` | H | signed parser (_SPACE/sign/_DIGIT); `atoi` (1000ff10) tail-calls it |
| 1000fff0 | `crt_time.c___tzset_FUN_1000fff0` | `void __cdecl(void)` | M | once-flag guard + __lock(11) -> tzset worker |
| 10010050 | `crt_time.c__tzset_FUN_10010050` | `void __cdecl(void)` | H | GetTimeZoneInformation + "TZ" + getenv + wcstombs |

## crt_env.c  (8)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 10007b60 | `crt_env.c__setenvp_FUN_10007b60` | `int __cdecl(void)` | H | env parse, malloc, __amsg_exit |
| 100083e0 | `crt_env.c___crtGetEnvironmentStringsA_FUN_100083e0` | `char* __cdecl(void)` | H | GetEnvironmentStringsW, WideCharToMultiByte |
| 10010c50 | `crt_env.c_getenv_FUN_10010c50` | `char * __cdecl(char* name)` | M | scans _environ, returns ptr past '=' |
| 10010cf0 | `crt_env.c___env_compare_FUN_10010cf0` | `int __cdecl(const char* s1, const char* s2, int len)` | H | __crtCompareStringA(NORM_IGNORECASE), returns result-2 |
| 10010d30 | `crt_env.c__build_ansi_environ_FUN_10010d30` | `int __cdecl(void)` | H | wide _wenviron -> ANSI via WideCharToMultiByte(OEMCP) + __crtsetenv |
| 10011360 | `crt_env.c___crtsetenv_FUN_10011360` | `int __cdecl(const char* option, int primary)` | H | SetEnvironmentVariableA + findenv/realloc |
| 100115b0 | `crt_env.c_findenv_FUN_100115b0` | `int __cdecl(const char* name, int len)` | M | scans _environ, returns index |
| 10011610 | `crt_env.c_copy_environ_FUN_10011610` | `char** __cdecl(char** oldenviron)` | M | malloc(n*4+4), strdup each, __amsg_exit(9) |

## crt_thread.c  (11)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 10005900 | `crt_thread.c__mtinitlocks_FUN_10005900` | `int __cdecl(void)` | H | FID |
| 10005930 | `crt_thread.c__mtdeletelocks_FUN_10005930` | `void __cdecl(void)` | H | FID |
| 100059a0 | `crt_thread.c__lock_FUN_100059a0` | `void __cdecl(int file)` | H | FID |
| 10005a10 | `crt_thread.c__unlock_FUN_10005a10` | `void __cdecl(int locknum)` | H | LeaveCriticalSection(&_locktable[idx]) |
| 10005a30 | `crt_thread.c__lock_file_FUN_10005a30` | `void __cdecl(FILE* file)` | H | FID |
| 10005aa0 | `crt_thread.c__unlock_file_FUN_10005aa0` | `void __cdecl(FILE* file)` | H | FID |
| 10007700 | `crt_thread.c__mtinit_FUN_10007700` | `int __cdecl(void)` | H | FID |
| 10007760 | `crt_thread.c__mtterm_FUN_10007760` | `void __cdecl(void)` | H | FID |
| 10007790 | `crt_thread.c__initptd_FUN_10007790` | `void __cdecl(_ptiddata ptd, pthreadlocinfo locale)` | H | FID |
| 100077b0 | `crt_thread.c__getptd_FUN_100077b0` | `_ptiddata __cdecl(void)` | H | FID |
| 10007820 | `crt_thread.c__freeptd_FUN_10007820` | `void __cdecl(_ptiddata ptd)` | H | FID |

## crt_heap.c  (9)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 10005b30 | `crt_heap.c_free_FUN_10005b30` | `void __cdecl(void * block)` | M | HeapFree(_crtheap,0,block) |
| 100078f0 | `crt_heap.c__heap_init_FUN_100078f0` | `int __cdecl(int mtflag)` | H | HeapCreate -> _crtheap |
| 10007910 | `crt_heap.c__heap_term_FUN_10007910` | `void __cdecl(void)` | H | HeapDestroy(_crtheap) |
| 10008830 | `crt_heap.c_malloc_FUN_10008830` | `void* __cdecl(size_t)` | H | _nh_malloc/_newmode, __callnewh retry |
| 10008850 | `crt_heap.c__nh_malloc_FUN_10008850` | `void* __cdecl(size_t size, int nh_flag)` | H | _heap_alloc + __callnewh retry |
| 10008890 | `crt_heap.c__heap_alloc_FUN_10008890` | `void* __cdecl(size_t size)` | H | HeapAlloc(_crtheap,0,size) |
| 1000a750 | `crt_heap.c_calloc_FUN_1000a750` | `void* __cdecl(size_t num, size_t size)` | H | count*size, HeapAlloc zero flag |
| 1000ab30 | `crt_heap.c__callnewh_FUN_1000ab30` | `int __cdecl(size_t size)` | H | FID |
| 10011680 | `crt_heap.c_realloc_FUN_10011680` | `void* __cdecl(void* ptr, size_t size)` | H | HeapReAlloc + __callnewh retry |

## crt_errno.c  (3)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 100089a0 | `crt_errno.c__dosmaperr_FUN_100089a0` | `void __cdecl(ulong oserrno)` | H | FID |
| 10008a20 | `crt_errno.c__errno_FUN_10008a20` | `int* __cdecl(void)` | H | __getptd()+8 |
| 10008a30 | `crt_errno.c___doserrno_FUN_10008a30` | `unsigned long* __cdecl(void)` | H | __getptd()+0xc |

## crt_stdlib.c  (3)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 10007ce0 | `crt_stdlib.c_parse_cmdline_FUN_10007ce0` | `void __cdecl(char* cmdstart, char** argv, char* args, int* pnumargs, int* pnumchars)` | H | called by __setargv |
| 10010910 | `crt_stdlib.c_wcstombs_FUN_10010910` | `size_t __cdecl(char* mbstr, wchar_t* wcstr, size_t count)` | H | locale-lock wrapper over worker |
| 10010970 | `crt_stdlib.c__wcstombs_lk_FUN_10010970` | `size_t __cdecl(char* mbstr, wchar_t* wcstr, size_t count)` | H | WideCharToMultiByte loop, errno EILSEQ |

## crt_signal.c  (1)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 1000bda0 | `crt_signal.c_siglookup_FUN_1000bda0` | `struct _XCPT_ACTION* __cdecl(int signum, struct _XCPT_ACTION* table)` | H | 12-byte-stride _XcptActTab search, key@+4; textbook **siglookup** |

## crt_system.c  (1)

| addr | proposed name | signature | conf | note/evidence |
|------|---------------|-----------|:----:|---------------|
| 1000a950 | `crt_system.c__crtMessageBoxA_FUN_1000a950` | `int __cdecl(LPCSTR lp_text, LPCSTR lp_caption, UINT u_type)` | H | FID |

## ⛔ Undefined functions (not in Ghidra — define first)

| addr | proposed name | signature | conf | note |
|------|---------------|-----------|:----:|------|
| 1000a170 | `crt_math.c___ld12told_FUN_1000a170` | `INTRNCVT_STATUS __cdecl(_LDBL12* ifp, _LDOUBLE* ld)` | H | 80-bit output via __RoundMan; 3rd ld12->X converter |
| 1000a240 | `crt_math.c__atoldbl_FUN_1000a240` | `int __cdecl(_LDOUBLE* result, char* str)` | H | strgtold12(flag=1) -> __ld12told; **_atoldbl** |

---

# Part 2 — newly-defined CRT internals (2026-07-13 re-export)

62 functions defined in Ghidra since the first export (255→319 funcs). Identified from asm.

## ✅ Boundary fixes — APPLIED & re-exported (2026-07-13)

DONE via `scripts/Python/fix_tridx7_boundaries.py --apply`: each function re-created at the correct 16-aligned start and saved; annotations re-exported. Row addresses below already reflect the corrected starts. (`raise` @1000bbc0 has a cosmetic 3-byte post-`__exit` dead-code gap — left as-is.)

| defined at | real start | missing prologue |
|-----------|-----------|------------------|
| 100081e3 | **100081e0** | `sub esp,0x8` |
| 10008d24 | **10008d20** | `mov eax,[esp+8]` |
| 1000ac16 | **1000ac10** | `sub esp,0x90` |
| 1000b953 | **1000b950** | `sub esp,0x4` |
| 1000bbc3 | **1000bbc0** | `sub esp,0xc (also 3-byte body hole @1000bc9c)` |
| 1000cf0b | **1000cf00** | `mov eax,[esp+0x10]; sub esp,0xc; mov ecx,[esp+0x18]` |
| 1000ec2a | **1000ec20** | `sub esp,0x8; cmp [0x10240854],0` |
| 1000f954 | **1000f950** | `mov ecx,[esp+0xc]` |

## ⚠️ Corrections & duplicate notes

- **`1000fe60`** — reclassify from `time.c/_parse_tz_number` to **`crt_stdlib.c_atol`** (Part-1 M row). `atoi` (1000ff10) tail-calls it.
- **Expected MSVC multi-copies** (same helper emitted in several TUs — all correct, not errors): `wcsnlen` ×3 (10010be0, 1000c300, 10011000), `__crtCompareStringA` ×2 (10011040, 10010dc0), `__crtLCMapStringA` ×2 (1000c340, 1000c0f0), `_ioinit`-like ×2 (10007920, 100088b0).
- **Verify the 12-byte-table searchers**: `1000a900` `_xcptlookup` (exception table) vs `1000bda0`/`1000bb30` `siglookup` (signal table) — confirm which table each walks.

## crt_stdio.c  (4 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 10005c90 | `crt_stdio.c_fflush_FUN_10005c90` | `int __cdecl(FILE*)` | H | null->flushall(0), else lock+_fflush_lk |
| 10005cd0 | `crt_stdio.c__fflush_lk_FUN_10005cd0` | `int __cdecl(FILE*)` | H | __flush then _commit if _IOCOMMIT |
| 10005d90 | `crt_stdio.c__flsall_FUN_10005d90` | `int __cdecl(int flag)` | M | iterates __piob/_nstream, calls _fflush_lk |
| 1000ab70 | `crt_stdio.c___endstdio_FUN_1000ab70` | `void __cdecl(void)` | M | __piob[3..nstream] fclose+DeleteCriticalSection+free |

## crt_io.c  (7 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 100088b0 | `crt_io.c__alloc_piob_FUN_100088b0` | `void __cdecl(void)` | M | allocs __piob to _iob, seeds __pioinfo; DUP? vs _ioinit 10007920 |
| 10008d20 | `crt_io.c__open_osfhandle_FUN_10008d20` | `int __cdecl(intptr_t osfhandle, int flags)` | H | O_APPEND/O_TEXT flags, __alloc_osfhnd; TRUNCATED start (->10008d20) |
| 10008e80 | `crt_io.c__commit_FUN_10008e80` | `int __cdecl(int fh)` | H | FlushFileBuffers, lock_fhandle, __dosmaperr |
| 100093d0 | `crt_io.c__open_FUN_100093d0` | `int __cdecl(char* filename, int oflag)` | H | tail-calls _sopen(_SH_DENYNO 0x40) |
| 1000b4f0 | `crt_io.c__chsize_FUN_1000b4f0` | `int __cdecl(int fh, long size)` | H | lock_fhandle, __chsize_lk, EBADF |
| 1000b6a0 | `crt_io.c__read_FUN_1000b6a0` | `int __cdecl(int fh, void* buf, unsigned int cnt)` | H | locks fh, worker=_read_lk(1000b720) |
| 1000e810 | `crt_io.c__setmode_FUN_1000e810` | `int __cdecl(int fh, int mode)` | H | _osfhnd/FVISIBLE, __setmode_lk under lock |

## crt_string.c  (5 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 1000c300 | `crt_string.c_wcsnlen_FUN_1000c300` | `size_t __cdecl(wchar_t* str, int max)` | M | count wchars to nul, (p-start)>>1 |
| 1000e290 | `crt_string.c_strcspn_FUN_1000e290` | `size_t __cdecl(char* str, char* control)` | H | 256-bit BTS bitset, count until member |
| 1000e2d0 | `crt_string.c_strncmp_FUN_1000e2d0` | `int __cdecl(char* str1, char* str2, size_t count)` | M | SCASB then REPE CMPSB |
| 1000e310 | `crt_string.c_strpbrk_FUN_1000e310` | `char * __cdecl(char* str, char* control)` | H | BTS bitset, returns match ptr |
| 10011000 | `crt_string.c_wcsnlen_v3_FUN_10011000` | `int __cdecl(wchar_t* str, int max)` | M | bounded wide length; dup family |

## crt_ctype.c  (4 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 10010750 | `crt_ctype.c_towupper_FUN_10010750` | `wint_t __cdecl(wint_t c)` | H | C-locale a-z->A-Z fast path, wide |
| 100107d0 | `crt_ctype.c__towupper_FUN_100107d0` | `wint_t __cdecl(wint_t c)` | H | iswctype(_LOWER)+LCMapStringW UPPERCASE |
| 10010870 | `crt_ctype.c_iswctype_FUN_10010870` | `int __cdecl(wint_t c, wctype_t mask)` | H | _pwctype table&mask, else GetStringTypeW |
| 100108f0 | `crt_ctype.c_is_wctype_FUN_100108f0` | `int __cdecl(wint_t c, wctype_t mask)` | M | deprecated alias -> iswctype |

## crt_locale.c  (15 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 1000ac10 | `crt_locale.c_setlocale_FUN_1000ac10` | `char * __cdecl(int category, char* locale)` | H | LC_* ptr table, lock+retry; TRUNCATED start (->1000ac10) |
| 1000aee0 | `crt_locale.c_setlocale_set_cat_FUN_1000aee0` | `char * __cdecl(int category, char* locale)` | M | per-category setter, calls _expandlocale |
| 1000b060 | `crt_locale.c_setlocale_get_all_FUN_1000b060` | `char* __cdecl(void)` | M | builds combined LC string |
| 1000b150 | `crt_locale.c__expandlocale_FUN_1000b150` | `int __cdecl(char* locale, char* cat, LC_ID* lc_id, UINT* code_page)` | M | locale-expr parser, __crtGetLocaleInfoA |
| 1000b330 | `crt_locale.c__lc_lctostr_FUN_1000b330` | `void __cdecl(char* dst, int count, ...)` | H | appends `count` vararg strings onto dst (reads &stack[0xc]); caller passes (dst,2,sep,catstr) |
| 1000b380 | `crt_locale.c__lc_strtolc_FUN_1000b380` | `int __cdecl(char* lc, const char* locale)` | H | zeroes 3x0x40 cat struct, strcspn-splits locale into +0/+0x40/+0x80; ret 0 / -1 |
| 1000b480 | `crt_locale.c__setlocale_catcopy_FUN_1000b480` | `void __cdecl(char* dst, const char* lc)` | H | strcpy first cat, then _lc_lctostr-appends +0x40/+0x80 cats |
| 1000c0f0 | `crt_locale.c___crtLCMapStringA_v2_FUN_1000c0f0` | `int __cdecl(LCID lcid, DWORD map_flags, LPCSTR src, int cch_src, LPSTR dest, int cch_dest, UINT code_page, BOOL error)` | H | LCMapStringA/W wrapper (2nd variant) |
| 1000e350 | `crt_locale.c___get_qualified_locale_FUN_1000e350` | `int __cdecl(char* locale, void* id, void* out)` | H | IsValidLocale/CodePage, "OCP"/"ACP" |
| 1000e650 | `crt_locale.c_GetLcidFromLanguage_FUN_1000e650` | `uint __cdecl(char* lang)` | M | binary-search language table |
| 1000e6b0 | `crt_locale.c_GetLcidFromCountry_FUN_1000e6b0` | `uint __cdecl(char* country)` | M | binary-search country table |
| 1000e710 | `crt_locale.c_GetLcidFromCountry_FUN_1000e710` | `int __cdecl(unsigned short ctry)` | M | ctry%100 indexes 3-word table; getqloc helper |
| 1000e760 | `crt_locale.c_GetLcidFromDefault_FUN_1000e760` | `int __cdecl(unsigned short langid)` | H | getqloc.c static: langid==0x354 ? 0xc04 : 0 (default-fallback LCID map) |
| 1000e780 | `crt_locale.c_GetLcidFromLangCountry_FUN_1000e780` | `int __cdecl(ushort* plang, ushort* pctry)` | M | XOR langid & 0x3ff PRIMARYLANGID compare |
| 10010dc0 | `crt_locale.c___crtCompareStringA_v2_FUN_10010dc0` | `int __cdecl(LCID lcid, DWORD flags, LPCSTR str1, int cch1, LPCSTR str2, int cch2, UINT code_page)` | H | CompareStringW->CompareStringA fallback (2nd variant) |

## crt_fpu.c  (2 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 100098f0 | `crt_fpu.c__fpreset_FUN_100098f0` | `void __cdecl(void)` | H | FNINIT + __setdefaultprecision + ptd reset |
| 10009a70 | `crt_fpu.c__statusfp_FUN_10009a70` | `unsigned int __cdecl(void)` | M | x87 SW bits -> _SW_ flags |

## crt_math.c  (1 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|

## crt_time.c  (4 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 1000ec20 | `crt_time.c_strftime_FUN_1000ec20` | `size_t __cdecl(char* dest, size_t max_size, char* format, tm* timeptr)` | H | '%'/'#' loop, tm expand; TRUNCATED start (->1000ec20) |
| 10010330 | `crt_time.c__isindst_FUN_10010330` | `int __cdecl(tm* tb)` | M | locks _TIME_LOCK -> isindst worker |
| 10010360 | `crt_time.c__isindst_lk_FUN_10010360` | `int __cdecl(tm* tb)` | H | tm_year vs cached-year, DST rule globals |
| 100105c0 | `crt_time.c_cvtdate_FUN_100105c0` | `time_t __cdecl(int trantype, int datetype, int year, int month, int week, int weekday, int date, int hour, int min, int sec, int msec)` | H | 11 args, days/lpdays, weekday |

## crt_env.c  (2 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 100081e0 | `crt_env.c___crtGetEnvironmentStringsW_FUN_100081e0` | `LPWSTR __cdecl(void)` | M | GetEnvironmentStringsW/A+MB2WC; TRUNCATED start (->100081e0) |
| 10010c20 | `crt_env.c_getenv_FUN_10010c20` | `char * __cdecl(char* name)` | H | locks _ENV_LOCK, worker=10010c50; called w/ "TZ" |

## crt_thread.c  (1 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 1000bdf0 | `crt_thread.c___pxcptinfoptrs_FUN_1000bdf0` | `void** __cdecl(void)` | M | returns &__getptd()->[0x54] (a void* slot) = MSVC __pxcptinfoptrs; NOT __fpecode (that returns int*) |

## crt_heap.c  (1 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 1000aaf0 | `crt_heap.c__set_new_handler_FUN_1000aaf0` | `_PNH __cdecl(_PNH pnh)` | M | lock; old=g;g=new; return old |

## crt_stdlib.c  (10 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 10008580 | `crt_stdlib.c__set_error_mode_FUN_10008580` | `int __cdecl(int mode)` | H | 0-2 set/return old, 3 query __error_mode |
| 1000cf00 | `crt_stdlib.c__atodbl_v2_FUN_1000cf00` | `int __cdecl(_CRT_DOUBLE* result, char* str)` | M | __strgtold12+_fassign; TRUNCATED start (->1000cf00) |
| 1000f8b0 | `crt_stdlib.c__itoa_FUN_1000f8b0` | `char* __cdecl(int val, char* buf, int radix)` | H | radix10&neg flag, tail-calls xtoa |
| 1000f8f0 | `crt_stdlib.c_xtoa_FUN_1000f8f0` | `void __cdecl(unsigned long val, char* buf, unsigned radix, int neg)` | H | shared digit loop, reverse |
| 1000f950 | `crt_stdlib.c__ltoa_FUN_1000f950` | `char* __cdecl(long val, char* buf, int radix)` | H | itoa-twin; TRUNCATED start (->1000f950) |
| 1000f980 | `crt_stdlib.c__ultoa_FUN_1000f980` | `char* __cdecl(unsigned long val, char* buf, int radix)` | H | passes neg=0 to xtoa |
| 1000fc10 | `crt_stdlib.c_wcstol_FUN_1000fc10` | `long __cdecl(wchar_t* nptr, wchar_t** endptr, int base)` | H | flags=0 signed -> wcstoxl |
| 1000fc30 | `crt_stdlib.c_wcstoxl_FUN_1000fc30` | `ulong __cdecl(wchar_t* nptr, wchar_t** endptr, int base, int flags)` | H | wide input, iswctype _SPACE core |
| 1000fe40 | `crt_stdlib.c_wcstoul_FUN_1000fe40` | `ulong __cdecl(wchar_t* nptr, wchar_t** endptr, int base)` | H | flags=1 unsigned -> wcstoxl |
| 1000ff10 | `crt_stdlib.c_atoi_FUN_1000ff10` | `int __cdecl(char* str)` | H | tail-calls atol (1000fe60) |

## crt_signal.c  (5 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 1000a7b0 | `crt_signal.c__XcptFilter_FUN_1000a7b0` | `int __cdecl(uint xcpt_num, _EXCEPTION_POINTERS* pxcpt_ptrs)` | H | __getptd + UnhandledExceptionFilter + xcpt table |
| 1000a900 | `crt_signal.c__xcptlookup_FUN_1000a900` | `void * __cdecl(void* table, int xcpt_num)` | M | _XcptActTab stride-12 search |
| 1000b950 | `crt_signal.c_signal_FUN_1000b950` | `_sigfn __cdecl(int sig, _sigfn handler)` | H | SetConsoleCtrlHandler, __lock, switch on signals |
| 1000bb30 | `crt_signal.c_siglookup2_FUN_1000bb30` | `void * __cdecl(int sig)` | M | signal-only XREF, handler-table DAT_178f8; DUP? vs 1000bda0 |
| 1000bbc0 | `crt_signal.c_raise_FUN_1000bbc0` | `int __cdecl(int sig)` | H | switch sig 2..22, __getptd/__lock/__exit |

## crt_startup.c  (1 new)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 10008800 | `crt_startup.c__GET_RTERRMSG_FUN_10008800` | `char * __cdecl(int rterrnum)` | H | {errnum,msg} stride-8 table, R6008/R6009 |

## crt_stdio.c  (5 float-format helpers, params 2026-07-14)

| addr | proposed name | signature | conf | evidence |
|------|---------------|-----------|:----:|----------|
| 10006ef0 | `crt_stdio.c__forcdecpt_FUN_10006ef0` | `void __cdecl(char* buf)` | H | inserts locale decimal point into a formatted number |
| 10006f60 | `crt_stdio.c__cropzeros_FUN_10006f60` | `void __cdecl(char* buf)` | H | strips trailing zeros from a formatted float |
| 10006fc0 | `crt_stdio.c__positive_FUN_10006fc0` | `int __cdecl(double* value)` | H | returns *value >= 0.0 |
| 10006fe0 | `crt_stdio.c__fassign_FUN_10006fe0` | `void __cdecl(int flag, void* value, char* str)` | H | atodbl/atoflt by flag into value |
| 10007380 | `crt_stdio.c__cfltcvt_FUN_10007380` | `void __cdecl(double* value, char* buf, int format, size_t size_in_bytes, int precision, int caps)` | H | dispatches to _cftoe/_cftof/_cftog by format char |
