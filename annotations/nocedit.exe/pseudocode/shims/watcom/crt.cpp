// =============================================================================
// CRT SHIM - Cross-platform C Runtime bridge implementations
// =============================================================================
//
// Provides implementations for CRT bridge functions that map Ghidra's
// decompiled types (e.g., _FILE*, _tm*) to standard C library types.
// These were previously inline functions in system/crt.h.
//

// Needed for fopencookie / cookie_io_functions_t / off64_t when compiling
// with strict C++ standards. Must come before any <stdio.h> include.
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include "system/crt.h"

#include "core/ascii_case.h" // the one case fold, for _stricmp/_strnicmp
#include "core/debug_log.h"
#include "net/rng.h"     // nocturne_rng_note_raw_draw() — the rand() audit
#include "watcom/path.h" // watcom_resolve_fs_path() — the Windows-path shim

#include <cerrno>
#include <string>
// Full struct layouts for Watcom types that crt.h only forward-declares.
// The shims bridge these to libc equivalents field-by-field.
#include "system/stdio.h"  // _FILE       (for _FILE_to_FILE)
#include "system/time.h"   // _tm         (for _mktime/_localtime)
#include "system/watcom.h" // WatcomStat  (for getFileStat)

// ---------------------------------------------------------------------------
// rand() — Watcom/Win32 semantics
// ---------------------------------------------------------------------------
//
// The original binary was compiled assuming `rand()` returns 0..0x7FFF
// (Watcom/MSVCRT RAND_MAX = 32767). Many call sites bake in the constant
// 3.051851e-05f ≈ 1/32767 as the "rand() → [0, 1)" scale factor. glibc's
// rand() returns 0..2^31-1, so those formulas over-scale by ~65000× and
// blow past int range when cast back (caught by UBSan in e.g.
// CGhoul_ctor's `(int)ROUND(fVar2 * 65536)`).
//
// Bring the distribution in line with the original runtime by implementing
// the same linear-congruential generator Watcom shipped in its CRT
// (seed = seed*0x41c64e6d + 0x3039; return (seed >> 16) & 0x7FFF).
// This also makes `srand()` behave as callers expect.
//
// Overriding libc's rand/srand is safe: the game's decompile is the only
// user of these names, and the shims live in the main executable so the
// dynamic linker resolves references here before libc.so.
static unsigned int g_WatcomRandSeed = 1;

// Every draw is reported to the RNG funnel's audit (rng.h), which discards the
// ones that came through one of its doors and counts the rest. Reporting from
// here rather than instrumenting call sites means a rand() added later is
// caught without anyone remembering to mark it.
extern "C" int rand(void) {
    nocturne_rng_note_raw_draw();
    g_WatcomRandSeed = g_WatcomRandSeed * 0x41c64e6du + 0x3039u;
    return (int)((g_WatcomRandSeed >> 16) & 0x7fff);
}

extern "C" void srand(unsigned int seed) {
    g_WatcomRandSeed = seed;
}

// ---------------------------------------------------------------------------
// String Comparison
// ---------------------------------------------------------------------------

int _strcmp(char *s1, char *s2) {
    return strcmp(s1, s2);
}

// The C library's versions follow the locale; these do not. In the "C" locale —
// which is what the game has always run under — the two agree, and outside it
// the fixed fold is the one that keeps an asset name matching itself.
int _stricmp(char *s1, char *s2) {
    return nocturne_ascii_icompare(s1, s2);
}

int _strnicmp(char *s1, char *s2, size_t n) {
    return nocturne_ascii_icompare_n(s1, s2, n);
}

// ---------------------------------------------------------------------------
// String Conversion
// ---------------------------------------------------------------------------

// Through unsigned char: toupper and tolower are undefined for the negative
// values a plain char holds above 0x7F.
char *strupr(char *s) {
    for (char *p = s; *p; ++p)
        *p = (char)toupper((unsigned char)*p);
    return s;
}

char *strlwr(char *s) {
    for (char *p = s; *p; ++p)
        *p = (char)tolower((unsigned char)*p);
    return s;
}

double _strtod(const char *str) {
    return strtod(str, nullptr);
}

// ---------------------------------------------------------------------------
// Path Manipulation
// ---------------------------------------------------------------------------

// Open Watcom's limits for these, from its <stdlib.h> for Win32. Neither call
// takes buffer sizes; the caller's buffers are sized by these, so each part is
// cut to fit them.
static const size_t kMaxPath = 260, kMaxDrive = 3, kMaxPart = 256;

// Up to len bytes of src into a buffer of cap bytes, terminated.
static void copy_part(char *out, size_t cap, const char *src, size_t len) {
    if (len > cap - 1)
        len = cap - 1;
    memcpy(out, src, len);
    out[len] = 0;
}

void splitpath(const char *path, char *drive, char *dir, char *fname, char *ext) {
    // A drive is a letter and a colon, and keeps the colon; the directory is
    // what follows it.
    const bool has_drive = isalpha((unsigned char)path[0]) && path[1] == ':';
    if (drive)
        copy_part(drive, kMaxDrive, path, has_drive ? 2 : 0);
    if (has_drive)
        path += 2;

    // Find last separator
    const char *last_sep = nullptr;
    for (const char *p = path; *p; ++p) {
        if (*p == '/' || *p == '\\')
            last_sep = p;
    }

    // Find last dot (after last separator)
    const char *last_dot = nullptr;
    const char *fname_start = last_sep ? last_sep + 1 : path;
    for (const char *p = fname_start; *p; ++p) {
        if (*p == '.')
            last_dot = p;
    }

    if (dir)
        copy_part(dir, kMaxPart, path, last_sep ? (size_t)(last_sep - path + 1) : 0);

    if (fname) {
        const char *end = last_dot ? last_dot : fname_start + strlen(fname_start);
        copy_part(fname, kMaxPart, fname_start, (size_t)(end - fname_start));
    }

    // The extension keeps its leading period, as Watcom's does.
    if (ext)
        copy_part(ext, kMaxPart, last_dot ? last_dot : "", last_dot ? strlen(last_dot) : 0);
}

// The parts joined as Watcom's _makepath joins them: a colon after a drive and
// a period before an extension unless they already carry one, so what
// splitpath took apart goes back together unchanged.
void makepath(char *path, const char *drive, const char *dir, const char *fname, const char *ext) {
    std::string joined;
    if (drive && drive[0]) {
        joined += drive;
        if (joined.back() != ':')
            joined += ':';
    }
    if (dir && dir[0]) {
        joined += dir;
        // Watcom's _makepath guarantees a separator between the directory and
        // the filename: if `dir` doesn't already end with one it inserts a
        // backslash. The game relies on this — it routinely passes directory
        // components without a trailing slash (e.g. a getcwd() result), and
        // without the inserted separator `dir` and `fname` fuse into one bogus
        // name. Use '\\' to match Watcom byte for byte; the path shim rewrites
        // it to '/' at open time.
        if (joined.back() != '\\' && joined.back() != '/')
            joined += '\\';
    }
    if (fname && fname[0])
        joined += fname;
    if (ext && ext[0]) {
        if (ext[0] != '.')
            joined += '.';
        joined += ext;
    }
    copy_part(path, kMaxPath, joined.c_str(), joined.size());
}

// ---------------------------------------------------------------------------
// File Type Bridge
// ---------------------------------------------------------------------------

// A Watcom _FILE* can come from three sources:
//
//   1. Our _fopen / _freopen / etc. — which now allocate a Watcom-shaped
//      _FILE wrapper and stash the real libc FILE* in the _link field.
//      Game code that reads wrapper->_flag sees a value we keep in sync
//      via sync_file_flags() after every read/write.
//
//   2. Static _FILE structs defined by the game (g_StdoutLogFile,
//      g_StderrLogFile). These have _link=null, _handle={1,2}. We route
//      to libc's real stdin/stdout/stderr by _handle.
//
//   3. A raw libc FILE* cast to _FILE* from some older path we haven't
//      updated yet. Detect by glibc's _IO_FILE magic (_flags = 0xFBADxxxx
//      in the first 4 bytes) and pass through.
FILE *_FILE_to_FILE(_FILE *f) {
    if (!f)
        return nullptr;

    const unsigned int IO_FILE_MAGIC = 0xFBAD0000u;
    const unsigned int IO_FILE_MAGIC_MASK = 0xFFFF0000u;
    unsigned int first_word = *reinterpret_cast<unsigned int *>(f);
    if ((first_word & IO_FILE_MAGIC_MASK) == IO_FILE_MAGIC) {
        return reinterpret_cast<FILE *>(f);
    }

    // Case 1: our wrapper — _link holds the real libc FILE*.
    if (f->_link != nullptr) {
        return reinterpret_cast<FILE *>(f->_link);
    }

    // Case 2: static standard-stream global — map by _handle.
    switch (f->_handle) {
    case 0:
        return stdin;
    case 1:
        return stdout;
    case 2:
        return stderr;
    default:
        break;
    }

    return reinterpret_cast<FILE *>(f);
}

// Keep the Watcom _flag byte in sync with libc's EOF/error state so game
// code that reads `stream->_flag & 0x10` (== feof) or `& 0x20` (== ferror)
// behaves the same as if it were reading a native Watcom FILE. Called by
// every shim read/write/seek path after the underlying libc op.
//
// Watcom flag bits: 0x10 = _IOEOF, 0x20 = _IOERR. Every caller has just handed
// the stream to the C library, so it is one.
static void sync_file_flags(_FILE *f) {
    FILE *fp = _FILE_to_FILE(f);
    unsigned int old_flag = f->_flag;
    f->_flag = (f->_flag & ~0x30u) | (feof(fp) ? 0x10u : 0u) | (ferror(fp) ? 0x20u : 0u);
    // Probe: surface the moment ferror flips on. Game archive loaders
    // branch on `_flag & 0x20` and bail out without logging why, so this
    // catches the transition instead of the downstream panic.
    if (((old_flag & 0x20u) == 0) && ((f->_flag & 0x20u) != 0)) {
        DWARN("_FILE ferror set (fd=%d, errno=%d, feof=%d)", f->_handle, errno, feof(fp) ? 1 : 0);
    }
}

// ---------------------------------------------------------------------------
// Path Normalization
// ---------------------------------------------------------------------------
// A path the game asks for is a Windows path: backslash separators and whatever
// case the 1999 build happened to spell. Turning that into one the filesystem
// will accept lives in watcom/path.cpp, which is where its tests can reach it —
// this file replaces two dozen CRT entry points and cannot be linked into a test
// without replacing them there too.

#include <string>
#include <sys/stat.h>
// utime() and struct utimbuf, for _utime below. Windows keeps both in
// <sys/utime.h>; it spells them _utime/_utimbuf but provides the unprefixed
// names too. These belong here rather than in the generated system/crt.h,
// which declares _utime as taking a void* and so needs neither.
#if defined(_WIN32)
#include <sys/utime.h>
#else
#include <utime.h>
#endif

// ---------------------------------------------------------------------------
// File Manipulation
// ---------------------------------------------------------------------------
// Every _fopen/_freopen allocates a Watcom _FILE wrapper (heap) that stores
// the libc FILE* in its _link field. Every read/write shim calls
// sync_file_flags() after the libc op so game code can inspect
// stream->_flag for EOF / error and see accurate state. _fclose frees the
// wrapper only when _link is non-null (to avoid freeing the game's static
// stream globals).

static _FILE *make_file_wrapper(FILE *fp) {
    if (!fp)
        return nullptr;
    _FILE *w = new _FILE();
    w->_ptr = nullptr;
    w->_cnt = 0;
    w->_link = reinterpret_cast<struct streambuf *>(fp);
    w->_flag = 0;
    w->_handle = fileno(fp);
    w->_bufsize = 0;
    w->_ungotten = 0;
    return w;
}

// Linux has no "text mode" in stdio — fopen ignores 't' in mode strings and
// never translates line endings. Watcom/MSVC on Windows strip \r\n -> \n on
// text-mode reads, which the game's text parsers (KFM model files, etc.)
// depend on: they use fscanf("%[^\n]\n", ...) and would otherwise pull the
// trailing \r into tokens like texture names.
//
// Wrap text-mode streams in a fopencookie layer that drops \r on read. Seek
// is supported for round-trip ftell/fseek because POD archives are opened
// in the caller's mode and seeked to the inner file's offset — but note
// that byte offsets in the underlying file don't correspond 1:1 with the
// logical (CR-stripped) stream, so arbitrary SEEK_SET offsets computed
// externally would be wrong. In practice the game only seeks text files
// via rewind() or offsets returned from ftell() on the same stream, which
// both round-trip correctly through the underlying fseeko.
// None of that is needed on Windows, where the CRT still does the translation
// this layer exists to imitate — and neither fopencookie nor funopen exists
// there anyway. Passing the mode string through unaltered, 't' included,
// gets the behaviour from the runtime that originally defined it.
#if defined(_WIN32)

static FILE *fopen_text_aware(const char *path, const char *mode) {
    return fopen(path, mode);
}

#else

static bool mode_is_text(const char *mode) {
    for (const char *p = mode; *p; ++p) {
        if (*p == 'b')
            return false;
    }
    return true;
}

static size_t text_cookie_read_bytes(void *cookie, char *buf, size_t size) {
    FILE *underlying = static_cast<FILE *>(cookie);
    size_t out = 0;
    while (out < size) {
        int c = fgetc(underlying);
        if (c == EOF)
            break;
        if (c == '\r')
            continue;
        buf[out++] = static_cast<char>(c);
    }
    return out;
}

static int text_cookie_close(void *cookie) {
    return fclose(static_cast<FILE *>(cookie));
}

// The same layer through each libc's custom-stream call: glibc's fopencookie,
// and funopen on Apple and the BSDs, which takes int sizes and returns the new
// position from its seek rather than writing it back.
#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
static int text_cookie_read(void *cookie, char *buf, int size) {
    return static_cast<int>(text_cookie_read_bytes(cookie, buf, static_cast<size_t>(size)));
}

static int text_cookie_write(void *cookie, const char *buf, int size) {
    return static_cast<int>(fwrite(buf, 1, static_cast<size_t>(size), static_cast<FILE *>(cookie)));
}

static fpos_t text_cookie_seek(void *cookie, fpos_t offset, int whence) {
    FILE *underlying = static_cast<FILE *>(cookie);
    if (fseeko(underlying, static_cast<off_t>(offset), whence) != 0) {
        return -1;
    }
    return static_cast<fpos_t>(ftello(underlying));
}

static FILE *open_text_cookie(FILE *underlying, const char *) {
    return funopen(underlying, text_cookie_read, text_cookie_write, text_cookie_seek,
                   text_cookie_close);
}
#else
static ssize_t text_cookie_read(void *cookie, char *buf, size_t size) {
    return static_cast<ssize_t>(text_cookie_read_bytes(cookie, buf, size));
}

static ssize_t text_cookie_write(void *cookie, const char *buf, size_t size) {
    return static_cast<ssize_t>(fwrite(buf, 1, size, static_cast<FILE *>(cookie)));
}

static int text_cookie_seek(void *cookie, off64_t *offset, int whence) {
    FILE *underlying = static_cast<FILE *>(cookie);
    if (fseeko(underlying, static_cast<off_t>(*offset), whence) != 0) {
        return -1;
    }
    *offset = static_cast<off64_t>(ftello(underlying));
    return 0;
}

static FILE *open_text_cookie(FILE *underlying, const char *mode) {
    cookie_io_functions_t ops = {text_cookie_read, text_cookie_write, text_cookie_seek,
                                 text_cookie_close};
    return fopencookie(underlying, mode, ops);
}
#endif

static FILE *fopen_text_aware(const char *path, const char *mode) {
    if (!mode_is_text(mode)) {
        return fopen(path, mode);
    }
    // Strip 't' for the underlying open so the mode string is portable.
    std::string effective;
    for (const char *p = mode; *p; ++p) {
        if (*p != 't')
            effective += *p;
    }
    FILE *underlying = fopen(path, effective.c_str());
    if (!underlying)
        return nullptr;
    FILE *cooked = open_text_cookie(underlying, effective.c_str());
    if (!cooked) {
        fclose(underlying);
        return nullptr;
    }
    // Disable the cooked stream's own buffer. glibc otherwise aligns fseek
    // targets to BUFSIZ (8192) and consumes the delta via cookie_read —
    // which breaks here because CR stripping means "N output bytes" does
    // NOT equal "N underlying bytes". Unbuffered mode sends every fseek
    // straight to cookie_seek with the caller's exact offset. The
    // underlying FILE* keeps its own libc buffer, so per-byte fgetc from
    // the cookie stream is still fast.
    setvbuf(cooked, nullptr, _IONBF, 0);
    return cooked;
}

#endif // !_WIN32

_FILE *_fopen(const char *filename, const char *mode) {
    const WatcomPathUse use = watcom_mode_writes(mode) ? WatcomPathUse::Write : WatcomPathUse::Read;
    return make_file_wrapper(fopen_text_aware(watcom_resolve_fs_path(filename, use).c_str(), mode));
}

// The game's paths are Windows paths, ".\\system\\nocturne.ini" in
// CIni::writeProfileString's temp-file swap among them, and with a user
// directory set (watcom/path.h) the temp file is written there, so the swap has
// to happen there too.
int _remove(const char *filename) {
    return remove(watcom_resolve_fs_path(filename, WatcomPathUse::Write).c_str());
}

int _rename(const char *old_filename, const char *new_filename) {
    return rename(watcom_resolve_fs_path(old_filename, WatcomPathUse::Write).c_str(),
                  watcom_resolve_fs_path(new_filename, WatcomPathUse::Write).c_str());
}

int _fclose(_FILE *f) {
    if (!f)
        return 0;
    int rc = fclose(_FILE_to_FILE(f));
    // Only free our heap-allocated wrappers. Game static globals have
    // _link == null — leave them alone.
    if (f->_link != nullptr) {
        f->_link = nullptr; // defensive: prevent use-after-free via this ptr
        delete f;
    }
    return rc;
}

int _fflush(_FILE *f) {
    int rc = fflush(_FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _feof(_FILE *f) {
    int rc = feof(_FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _ferror(_FILE *f) {
    int rc = ferror(_FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

long _ftell(_FILE *f) {
    return ftell(_FILE_to_FILE(f));
}

// rewind is defined as exactly this; spelled out, the seek can say whether it
// worked.
void _rewind(_FILE *f) {
    FILE *file = _FILE_to_FILE(f);
    (void)fseek(file, 0L, SEEK_SET);
    clearerr(file);
    sync_file_flags(f);
}

int _fgetc(_FILE *f) {
    int rc = fgetc(_FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _fputc(int c, _FILE *f) {
    int rc = fputc(c, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _ungetc(int c, _FILE *f) {
    int rc = ungetc(c, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

char *_fgets(char *s, int n, _FILE *f) {
    char *rc = fgets(s, n, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _fputs(const char *s, _FILE *f) {
    int rc = fputs(s, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

size_t _fread(void *ptr, size_t size, size_t count, _FILE *f) {
    size_t rc = fread(ptr, size, count, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

size_t _fwrite(const void *ptr, size_t size, size_t count, _FILE *f) {
    size_t rc = fwrite(ptr, size, count, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _fseek(_FILE *f, long offset, int whence) {
    int rc = fseek(_FILE_to_FILE(f), offset, whence);
    sync_file_flags(f);
    return rc;
}

int _fsetpos(_FILE *f, const fpos_t *pos) {
    int rc = fsetpos(_FILE_to_FILE(f), pos);
    sync_file_flags(f);
    return rc;
}

int _fgetpos(_FILE *f, fpos_t *pos) {
    return fgetpos(_FILE_to_FILE(f), pos);
}

int _setvbuf(_FILE *f, char *buf, int mode, size_t size) {
    return setvbuf(_FILE_to_FILE(f), buf, mode, size);
}

// setbuf is defined as this setvbuf call.
void _setbuf(_FILE *f, char *buf) {
    (void)setvbuf(_FILE_to_FILE(f), buf, buf ? _IOFBF : _IONBF, BUFSIZ);
}

int _fprintf(_FILE *f, const char *format, ...) {
    va_list args;
    va_start(args, format);
    int result = vfprintf(_FILE_to_FILE(f), format, args);
    va_end(args);
    return result;
}

int _fscanf(_FILE *f, const char *format, ...) {
    va_list args;
    va_start(args, format);
    int result = vfscanf(_FILE_to_FILE(f), format, args);
    va_end(args);
    return result;
}

_FILE *_freopen(const char *filename, const char *mode, _FILE *stream) {
    // No stream is nothing to reopen; the C library's freopen would take it as one.
    if (!stream)
        return nullptr;
    const WatcomPathUse use = watcom_mode_writes(mode) ? WatcomPathUse::Write : WatcomPathUse::Read;
    FILE *fp = freopen(watcom_resolve_fs_path(filename, use).c_str(), mode, _FILE_to_FILE(stream));
    if (!fp)
        return nullptr;
    // If the caller's stream was one of the game's static stream globals
    // (wrapper _link is null, _handle is 0/1/2), freopen redirected the
    // libc-side fd for us and the caller wants the same pointer back.
    // Otherwise we were handed an _fopen wrapper; update its _link to
    // point at the new libc FILE and reset _flag. Either way, return
    // the same stream pointer the caller passed in.
    if (stream->_link != nullptr) {
        stream->_link = reinterpret_cast<struct streambuf *>(fp);
        stream->_flag = 0;
        stream->_handle = fileno(fp);
    }
    return stream;
}

// ---------------------------------------------------------------------------
// Printf/Scanf Type Bridges
// ---------------------------------------------------------------------------

// Watcom's va_list is a struct whose sole member is a `char*` into the
// caller's stack arg block. glibc's va_list on i386 SysV happens to be
// the same size (char*), so we can convert by raw bit-copy.
//
// The previous `return vsprintf(buffer, format, reinterpret_cast<va_list&>(args));`
// relied on strict-aliasing punning of `va_list_t` ↔ `va_list`, which under
// -O2 across TU boundaries miscompiled (the call looked fine in isolation,
// but in the full game build vsprintf read zeros). Copying the raw pointer
// byte-wise into a real `va_list` sidesteps the aliasing question entirely.
int _vsprintf(char *buffer, const char *format, va_list_t args) {
    // va_list_t carries a full __builtin_va_list (VA_START_T copied all of it);
    // copy the whole thing back, not just a leading char*. On x86-64 SysV a
    // va_list is a 24-byte __va_list_tag[1], so a char*-sized copy dropped the
    // overflow_arg_area/reg_save_area pointers and vsprintf crashed on %s.
    static_assert(sizeof(va_list) <= sizeof(va_list_t),
                  "va_list_t must be large enough to hold a full va_list");
    va_list va;
    __builtin_memcpy(&va, (const void *)&args.value[0], sizeof(va_list));
    // Filled by the copy above, which the analyzer cannot see as va_start or
    // va_copy; a va_list cannot be built any other way from va_list_t.
    return vsprintf(buffer, format, va); // NOLINT(clang-analyzer-valist.Uninitialized)
}

int _sprintf(void *buffer, const char *format, ...) {
    va_list args;
    va_start(args, format);
    int result = vsprintf((char *)buffer, format, args);
    va_end(args);
    return result;
}

// ---------------------------------------------------------------------------
// String Type Bridges
// ---------------------------------------------------------------------------

char *_strncpy(void *dest, const void *src, size_t count) {
    return strncpy((char *)dest, (const char *)src, count);
}

// ---------------------------------------------------------------------------
// Time Manipulation
// ---------------------------------------------------------------------------

// Watcom _tm is 36 bytes (9 ints); glibc struct tm is 44 bytes (adds
// tm_gmtoff + tm_zone). ASan's mktime interceptor unpoisonsthe full
// 44-byte struct, overflowing the 36-byte Watcom buffer. Bridge by
// copying into a properly-sized local, calling libc, and copying back.
static void watcom_to_libc_tm(const _tm *src, struct tm *dst) {
    memset(dst, 0, sizeof(*dst));
    dst->tm_sec = src->tm_sec;
    dst->tm_min = src->tm_min;
    dst->tm_hour = src->tm_hour;
    dst->tm_mday = src->tm_mday;
    dst->tm_mon = src->tm_mon;
    dst->tm_year = src->tm_year;
    dst->tm_wday = src->tm_wday;
    dst->tm_yday = src->tm_yday;
    dst->tm_isdst = src->tm_isdst;
}

static void libc_to_watcom_tm(const struct tm *src, _tm *dst) {
    dst->tm_sec = src->tm_sec;
    dst->tm_min = src->tm_min;
    dst->tm_hour = src->tm_hour;
    dst->tm_mday = src->tm_mday;
    dst->tm_mon = src->tm_mon;
    dst->tm_year = src->tm_year;
    dst->tm_wday = src->tm_wday;
    dst->tm_yday = src->tm_yday;
    dst->tm_isdst = src->tm_isdst;
}

time_t _mktime(_tm *t) {
    struct tm libc_tm;
    watcom_to_libc_tm(t, &libc_tm);
    time_t result = mktime(&libc_tm);
    libc_to_watcom_tm(&libc_tm, t);
    return result;
}

// Thread-local buffer for _localtime — libc's localtime returns a static
// pointer to its own struct tm, but we need to hand back a _tm*. Copy
// into a thread-local _tm so the caller gets the right layout.
static thread_local _tm s_localtime_buf;

// The 32 bits Watcom's time_t had: some callers pass a host time_t and some a
// 32-bit timestamp out of a file record, and the low word is the time in both.
_tm *_localtime(const void *timer) {
    time_t t = *reinterpret_cast<const int *>(timer);
    struct tm *libc_result = localtime(&t);
    if (!libc_result)
        return nullptr;
    libc_to_watcom_tm(libc_result, &s_localtime_buf);
    return &s_localtime_buf;
}

time_t _time(time_t *timer) {
    time_t t = time(nullptr);
    if (timer)
        *timer = t;
    return t;
}

// asctime as the C standard defines it, "Sun Sep 16 01:03:52 1973\n", written
// with a bound. One static buffer, as asctime's own: the next call overwrites
// it. A day or month out of range is "???" rather than a read off the table.
char *_asctime(_tm *timeptr) {
    static const char days[7][4] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    static const char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                       "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    static char text[64];
    const _tm *t = timeptr;
    const bool day_ok = t->tm_wday >= 0 && t->tm_wday < 7;
    const bool month_ok = t->tm_mon >= 0 && t->tm_mon < 12;
    snprintf(text, sizeof(text), "%.3s %.3s%3d %.2d:%.2d:%.2d %d\n",
             day_ok ? days[t->tm_wday] : "???", month_ok ? months[t->tm_mon] : "???", t->tm_mday,
             t->tm_hour, t->tm_min, t->tm_sec, 1900 + t->tm_year);
    return text;
}

// Through a host struct tm, which is larger: strftime reads its zone fields for
// %z and %Z, past the end of the game's 36 bytes.
size_t _strftime(char *dest_buffer, size_t buffer_size, const char *format_string, _tm *time_ptr) {
    struct tm libc_tm;
    watcom_to_libc_tm(time_ptr, &libc_tm);
    return strftime(dest_buffer, buffer_size, format_string, &libc_tm);
}

// ---------------------------------------------------------------------------
// Sorting
// ---------------------------------------------------------------------------

// Note: _qsort is a template in the header and remains there.
// The template instantiation happens at each call site.

// ---------------------------------------------------------------------------
// File Status / Timestamps
// ---------------------------------------------------------------------------

// WatcomStat is 70 bytes; glibc struct stat is 88 on 32-bit. ASan's
// stat interceptor writes the full 88 bytes, overflowing the 70-byte
// Watcom buffer. Bridge the same way as _mktime/_tm.
int getFileStat(const char *path, struct WatcomStat *buf) {
    struct stat libc_st;
    int rc = stat(watcom_resolve_fs_path(path).c_str(), &libc_st);
    if (rc == 0 && buf) {
        memset(buf, 0, sizeof(*buf));
        // Every field narrows: the host's are 64-bit where Watcom's are 16 or
        // 32, and they differ again between hosts. Spelled out so the loss is
        // visible rather than left to an implicit conversion.
        buf->_st_dev = (int)libc_st.st_dev;
        buf->_st_ino = (uint)libc_st.st_ino;
        buf->_st_mode = (ushort)libc_st.st_mode;
        buf->_st_nlink = (short)libc_st.st_nlink;
        buf->_st_uid = (ulong)libc_st.st_uid;
        buf->_st_gid = (short)libc_st.st_gid;
        buf->_st_rdev = (int)libc_st.st_rdev;
        buf->_st_size = (long)libc_st.st_size;
        buf->_st_atime = (time_t)libc_st.st_atime;
        buf->_st_mtime = (time_t)libc_st.st_mtime;
        buf->_st_ctime = (time_t)libc_st.st_ctime;
    }
    return rc;
}

int _utime(const char *path, void *times) {
    return utime(watcom_resolve_fs_path(path, WatcomPathUse::Write).c_str(),
                 (struct utimbuf *)times);
}
