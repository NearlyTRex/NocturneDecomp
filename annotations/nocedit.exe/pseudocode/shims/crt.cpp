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
#include "debug_log.h"
#include <cerrno>
#include <dlfcn.h>          // dlsym / RTLD_NEXT for remove()/rename() interposition
// Full struct layouts for Watcom types that crt.h only forward-declares.
// The shims bridge these to libc equivalents field-by-field.
#include "system/stdio.h"   // _FILE  (for _FILE_to_FILE)
#include "system/stat.h"    // _stat  (for getFileStat)
#include "system/time.h"    // _tm    (for _mktime/_localtime)

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

extern "C" int rand(void) {
    g_WatcomRandSeed = g_WatcomRandSeed * 0x41c64e6du + 0x3039u;
    return (int)((g_WatcomRandSeed >> 16) & 0x7fff);
}

extern "C" void srand(unsigned int seed) {
    g_WatcomRandSeed = seed;
}

// ---------------------------------------------------------------------------
// String Comparison
// ---------------------------------------------------------------------------

int _strcmp(char* s1, char* s2) {
    return strcmp(s1, s2);
}

int _stricmp(char* s1, char* s2) {
    return strcasecmp(s1, s2);
}

int _strnicmp(char* s1, char* s2, size_t n) {
    return strncasecmp(s1, s2, n);
}

// ---------------------------------------------------------------------------
// String Conversion
// ---------------------------------------------------------------------------

char* strupr(char* s) {
    for (char* p = s; *p; ++p) *p = toupper(*p);
    return s;
}

char* strlwr(char* s) {
    for (char* p = s; *p; ++p) *p = tolower(*p);
    return s;
}

double _strtod(const char* str) {
    return strtod(str, nullptr);
}

// ---------------------------------------------------------------------------
// Path Manipulation
// ---------------------------------------------------------------------------

void splitpath(const char* path, char* drive, char* dir, char* fname, char* ext) {
    if (drive) drive[0] = 0;

    // Find last separator
    const char* last_sep = nullptr;
    for (const char* p = path; *p; ++p) {
        if (*p == '/' || *p == '\\') last_sep = p;
    }

    // Find last dot (after last separator)
    const char* last_dot = nullptr;
    const char* fname_start = last_sep ? last_sep + 1 : path;
    for (const char* p = fname_start; *p; ++p) {
        if (*p == '.') last_dot = p;
    }

    if (dir) {
        if (last_sep) {
            size_t len = last_sep - path + 1;
            strncpy(dir, path, len);
            dir[len] = 0;
        } else {
            dir[0] = 0;
        }
    }

    if (fname) {
        const char* end = last_dot ? last_dot : fname_start + strlen(fname_start);
        size_t len = end - fname_start;
        strncpy(fname, fname_start, len);
        fname[len] = 0;
    }

    if (ext) {
        if (last_dot) {
            strcpy(ext, last_dot);
        } else {
            ext[0] = 0;
        }
    }
}

void makepath(char* path, const char* drive, const char* dir, const char* fname, const char* ext) {
    path[0] = 0;
    if (drive && drive[0]) { strcat(path, drive); strcat(path, ":"); }
    if (dir && dir[0]) {
        strcat(path, dir);
        // Watcom's _makepath guarantees a separator between the directory and
        // the filename: if `dir` doesn't already end with one it inserts a
        // backslash. The game relies on this — it routinely passes directory
        // components without a trailing slash (e.g. a getcwd() result), and
        // without the inserted separator `dir` and `fname` fuse into one bogus
        // name. Use '\\' to match Watcom byte for byte; normalize_path()
        // rewrites it to '/' at open time.
        size_t n = strlen(path);
        if (n && path[n - 1] != '\\' && path[n - 1] != '/') strcat(path, "\\");
    }
    if (fname && fname[0]) strcat(path, fname);
    if (ext && ext[0]) { strcat(path, "."); strcat(path, ext); }
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
FILE* _FILE_to_FILE(_FILE* f) {
    if (!f) return nullptr;

    const unsigned int IO_FILE_MAGIC      = 0xFBAD0000u;
    const unsigned int IO_FILE_MAGIC_MASK = 0xFFFF0000u;
    unsigned int first_word = *reinterpret_cast<unsigned int*>(f);
    if ((first_word & IO_FILE_MAGIC_MASK) == IO_FILE_MAGIC) {
        return reinterpret_cast<FILE*>(f);
    }

    // Case 1: our wrapper — _link holds the real libc FILE*.
    if (f->_link != nullptr) {
        return reinterpret_cast<FILE*>(f->_link);
    }

    // Case 2: static standard-stream global — map by _handle.
    switch (f->_handle) {
        case 0: return stdin;
        case 1: return stdout;
        case 2: return stderr;
        default: break;
    }

    return reinterpret_cast<FILE*>(f);
}

// Keep the Watcom _flag byte in sync with libc's EOF/error state so game
// code that reads `stream->_flag & 0x10` (== feof) or `& 0x20` (== ferror)
// behaves the same as if it were reading a native Watcom FILE. Called by
// every shim read/write/seek path after the underlying libc op.
//
// Watcom flag bits: 0x10 = _IOEOF, 0x20 = _IOERR.
static void sync_file_flags(_FILE* f) {
    if (!f) return;
    FILE* fp = _FILE_to_FILE(f);
    if (!fp) return;
    unsigned int old_flag = f->_flag;
    f->_flag = (f->_flag & ~0x30u)
             | (feof(fp)   ? 0x10u : 0u)
             | (ferror(fp) ? 0x20u : 0u);
    // Probe: surface the moment ferror flips on. Game archive loaders
    // branch on `_flag & 0x20` and bail out without logging why, so this
    // catches the transition instead of the downstream panic.
    if (((old_flag & 0x20u) == 0) && ((f->_flag & 0x20u) != 0)) {
        DWARN("_FILE ferror set (fd=%d, errno=%d, feof=%d)",
              f->_handle, errno, feof(fp) ? 1 : 0);
    }
}

// ---------------------------------------------------------------------------
// Path Normalization
// ---------------------------------------------------------------------------
// The game was built for Windows and hardcodes backslash path separators
// plus mixed-case filenames (e.g. ".\\system\\nocturne.ini", "ACT1.POD").
// On Linux the backslashes are literal filename characters AND the
// filesystem is case-sensitive, so fopen fails if the on-disk case doesn't
// match the game's expectation byte-for-byte.
//
// normalize_path() translates \ -> / and does a case-insensitive component-
// by-component resolution against the real filesystem: for each path
// segment, if the exact case doesn't exist, we scan the parent directory
// for a case-insensitive match and substitute the real on-disk name.
// Returns a std::string that callers pass as .c_str() to libc.

#include <string>
#include <sys/stat.h>
#include <dirent.h>
#include <strings.h>

static bool path_exists(const std::string& p) {
    struct stat st;
    return stat(p.c_str(), &st) == 0;
}

static std::string resolve_case_insensitive(const std::string& slashed) {
    // Fast path: if the slashed path already exists as-is, no scan needed.
    if (slashed.empty() || path_exists(slashed)) {
        return slashed;
    }

    // Walk segment by segment, rebuilding a known-good prefix.
    std::string result;
    size_t i = 0;
    // Preserve a leading "/" or "./" so absolute/relative stays intact.
    if (slashed[0] == '/') {
        result = "/";
        i = 1;
    } else if (slashed.size() >= 2 && slashed[0] == '.' && slashed[1] == '/') {
        result = "./";
        i = 2;
    }

    while (i < slashed.size()) {
        size_t next = slashed.find('/', i);
        if (next == std::string::npos) next = slashed.size();
        std::string component(slashed, i, next - i);
        i = (next == slashed.size()) ? next : next + 1;

        if (component.empty() || component == ".") {
            continue;
        }

        std::string candidate = result + component;
        if (path_exists(candidate)) {
            result = candidate + (i < slashed.size() ? "/" : "");
            continue;
        }

        // Exact case failed — scan the parent for a case-insensitive match.
        std::string parent = result.empty() ? "." : result;
        // Strip the trailing "/" for opendir(), except for pure root "/".
        if (parent.size() > 1 && parent.back() == '/') parent.pop_back();
        DIR* d = opendir(parent.c_str());
        std::string matched;
        if (d) {
            while (struct dirent* e = readdir(d)) {
                if (strcasecmp(e->d_name, component.c_str()) == 0) {
                    matched = e->d_name;
                    break;
                }
            }
            closedir(d);
        }
        if (matched.empty()) {
            // No match; return the best-effort path so the caller's errno
            // carries the usual ENOENT and error paths don't change shape.
            result += component + (i < slashed.size() ? "/" : "");
            // Best-effort: append the rest unchanged.
            if (i < slashed.size()) result.append(slashed, i, std::string::npos);
            return result;
        }
        result += matched + (i < slashed.size() ? "/" : "");
    }

    return result;
}

static std::string normalize_path(const char* path) {
    if (!path) return std::string();
    std::string slashed(path);
    for (char& c : slashed) {
        if (c == '\\') c = '/';
    }
    return resolve_case_insensitive(slashed);
}

// Exposed for the reconstructed std:: file-stream keeps. std::ifstream/ofstream
// bypass _fopen (and thus this normalization), so opening a Watcom-style
// "save\\SAVE1.NOC" path fails on Linux on TWO counts: the backslash and the
// case (real file is save/SAVE1.noc). stream_compat.h's watcom_stream_open()
// calls this to apply the exact same '\\'->'/' + case-insensitive resolution
// _fopen uses, so C++ streams resolve paths identically to getFile/_fopen.
std::string watcom_resolve_fs_path(const char* path) {
    return normalize_path(path);
}

// ---------------------------------------------------------------------------
// File Manipulation
// ---------------------------------------------------------------------------
// Every _fopen/_freopen allocates a Watcom _FILE wrapper (heap) that stores
// the libc FILE* in its _link field. Every read/write shim calls
// sync_file_flags() after the libc op so game code can inspect
// stream->_flag for EOF / error and see accurate state. _fclose frees the
// wrapper only when _link is non-null (to avoid freeing the game's static
// stream globals).

static _FILE* make_file_wrapper(FILE* fp) {
    if (!fp) return nullptr;
    _FILE* w = new _FILE();
    w->_ptr = nullptr;
    w->_cnt = 0;
    w->_link = reinterpret_cast<struct streambuf*>(fp);
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
static bool mode_is_text(const char* mode) {
    if (!mode) return false;
    for (const char* p = mode; *p; ++p) {
        if (*p == 'b') return false;
    }
    return true;
}

static ssize_t text_cookie_read(void* cookie, char* buf, size_t size) {
    FILE* underlying = static_cast<FILE*>(cookie);
    size_t out = 0;
    while (out < size) {
        int c = fgetc(underlying);
        if (c == EOF) break;
        if (c == '\r') continue;
        buf[out++] = static_cast<char>(c);
    }
    return static_cast<ssize_t>(out);
}

static ssize_t text_cookie_write(void* cookie, const char* buf, size_t size) {
    FILE* underlying = static_cast<FILE*>(cookie);
    return static_cast<ssize_t>(fwrite(buf, 1, size, underlying));
}

static int text_cookie_seek(void* cookie, off64_t* offset, int whence) {
    FILE* underlying = static_cast<FILE*>(cookie);
    if (fseeko(underlying, static_cast<off_t>(*offset), whence) != 0) {
        return -1;
    }
    *offset = static_cast<off64_t>(ftello(underlying));
    return 0;
}

static int text_cookie_close(void* cookie) {
    return fclose(static_cast<FILE*>(cookie));
}

static FILE* fopen_text_aware(const char* path, const char* mode) {
    if (!mode_is_text(mode)) {
        return fopen(path, mode);
    }
    // Strip 't' for the underlying open so the mode string is portable.
    std::string effective;
    for (const char* p = mode; *p; ++p) {
        if (*p != 't') effective += *p;
    }
    FILE* underlying = fopen(path, effective.c_str());
    if (!underlying) return nullptr;
    cookie_io_functions_t ops = {
        text_cookie_read, text_cookie_write, text_cookie_seek, text_cookie_close
    };
    FILE* cooked = fopencookie(underlying, effective.c_str(), ops);
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

_FILE* _fopen(const char* filename, const char* mode) {
    return make_file_wrapper(fopen_text_aware(normalize_path(filename).c_str(), mode));
}

// The game calls plain remove()/rename() with hard-coded Windows paths — e.g.
// CIni::writeProfileString's temp-file swap of ".\\system\\nocturne.ini", which
// is how every nocturne.ini setting is persisted. libc's remove/rename would
// get the literal backslash names (not path separators on Linux) and fail
// silently, so ini writes never landed (settings appeared not to save).
// Interpose normalizing wrappers that run the path(s) through normalize_path
// (\ -> /, case-insensitive component match) before delegating to the real
// libc implementation found via RTLD_NEXT. _fopen already normalizes, so the
// temp file is created at the same resolved path these then operate on.
extern "C" int remove(const char* path) {
    using remove_fn = int (*)(const char*);
    static remove_fn real_remove = reinterpret_cast<remove_fn>(dlsym(RTLD_NEXT, "remove"));
    return real_remove(normalize_path(path).c_str());
}

extern "C" int rename(const char* oldpath, const char* newpath) {
    using rename_fn = int (*)(const char*, const char*);
    static rename_fn real_rename = reinterpret_cast<rename_fn>(dlsym(RTLD_NEXT, "rename"));
    return real_rename(normalize_path(oldpath).c_str(),
                       normalize_path(newpath).c_str());
}

int _fclose(_FILE* f) {
    if (!f) return 0;
    FILE* fp = _FILE_to_FILE(f);
    int rc = fp ? fclose(fp) : 0;
    // Only free our heap-allocated wrappers. Game static globals have
    // _link == null — leave them alone.
    if (f->_link != nullptr) {
        f->_link = nullptr;  // defensive: prevent use-after-free via this ptr
        delete f;
    }
    return rc;
}

int _fflush(_FILE* f) {
    int rc = fflush(_FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _feof(_FILE* f) {
    int rc = feof(_FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _ferror(_FILE* f) {
    int rc = ferror(_FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

long _ftell(_FILE* f) {
    return ftell(_FILE_to_FILE(f));
}

void _rewind(_FILE* f) {
    rewind(_FILE_to_FILE(f));
    sync_file_flags(f);
}

int _fgetc(_FILE* f) {
    int rc = fgetc(_FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _fputc(int c, _FILE* f) {
    int rc = fputc(c, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _ungetc(int c, _FILE* f) {
    int rc = ungetc(c, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

char* _fgets(char* s, int n, _FILE* f) {
    char* rc = fgets(s, n, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _fputs(const char* s, _FILE* f) {
    int rc = fputs(s, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

size_t _fread(void* ptr, size_t size, size_t count, _FILE* f) {
    size_t rc = fread(ptr, size, count, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

size_t _fwrite(const void* ptr, size_t size, size_t count, _FILE* f) {
    size_t rc = fwrite(ptr, size, count, _FILE_to_FILE(f));
    sync_file_flags(f);
    return rc;
}

int _fseek(_FILE* f, long offset, int whence) {
    int rc = fseek(_FILE_to_FILE(f), offset, whence);
    sync_file_flags(f);
    return rc;
}

int _fsetpos(_FILE* f, const fpos_t* pos) {
    int rc = fsetpos(_FILE_to_FILE(f), pos);
    sync_file_flags(f);
    return rc;
}

int _fgetpos(_FILE* f, fpos_t* pos) {
    return fgetpos(_FILE_to_FILE(f), pos);
}

int _setvbuf(_FILE* f, char* buf, int mode, size_t size) {
    return setvbuf(_FILE_to_FILE(f), buf, mode, size);
}

void _setbuf(_FILE* f, char* buf) {
    setbuf(_FILE_to_FILE(f), buf);
}

int _fprintf(_FILE* f, const char* format, ...) {
    va_list args;
    va_start(args, format);
    int result = vfprintf(_FILE_to_FILE(f), format, args);
    va_end(args);
    return result;
}

int _fscanf(_FILE* f, const char* format, ...) {
    va_list args;
    va_start(args, format);
    int result = vfscanf(_FILE_to_FILE(f), format, args);
    va_end(args);
    return result;
}

_FILE* _freopen(const char* filename, const char* mode, _FILE* stream) {
    FILE* fp = freopen(normalize_path(filename).c_str(),
                       mode, _FILE_to_FILE(stream));
    if (!fp) return nullptr;
    // If the caller's stream was one of the game's static stream globals
    // (wrapper _link is null, _handle is 0/1/2), freopen redirected the
    // libc-side fd for us and the caller wants the same pointer back.
    // Otherwise we were handed an _fopen wrapper; update its _link to
    // point at the new libc FILE and reset _flag. Either way, return
    // the same stream pointer the caller passed in.
    if (stream && stream->_link != nullptr) {
        stream->_link = reinterpret_cast<struct streambuf*>(fp);
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
int _vsprintf(char* buffer, const char* format, va_list_t args) {
#if defined(__i386__)
    static_assert(sizeof(va_list) == sizeof(char*),
                  "this bridge assumes i386 SysV va_list == char*");
#endif
    va_list va;
    __builtin_memcpy(&va, &args.value[0], sizeof(char*));
    return vsprintf(buffer, format, va);
}

int _sprintf(void* buffer, const char* format, ...) {
    va_list args;
    va_start(args, format);
    int result = vsprintf((char*)buffer, format, args);
    va_end(args);
    return result;
}

// ---------------------------------------------------------------------------
// String Type Bridges
// ---------------------------------------------------------------------------

char* _strncpy(void* dest, const void* src, size_t count) {
    return strncpy((char*)dest, (const char*)src, count);
}

// ---------------------------------------------------------------------------
// Time Manipulation
// ---------------------------------------------------------------------------

// Watcom _tm is 36 bytes (9 ints); glibc struct tm is 44 bytes (adds
// tm_gmtoff + tm_zone). ASan's mktime interceptor unpoisonsthe full
// 44-byte struct, overflowing the 36-byte Watcom buffer. Bridge by
// copying into a properly-sized local, calling libc, and copying back.
static void watcom_to_libc_tm(const _tm* src, struct tm* dst) {
    memset(dst, 0, sizeof(*dst));
    dst->tm_sec   = src->tm_sec;
    dst->tm_min   = src->tm_min;
    dst->tm_hour  = src->tm_hour;
    dst->tm_mday  = src->tm_mday;
    dst->tm_mon   = src->tm_mon;
    dst->tm_year  = src->tm_year;
    dst->tm_wday  = src->tm_wday;
    dst->tm_yday  = src->tm_yday;
    dst->tm_isdst = src->tm_isdst;
}

static void libc_to_watcom_tm(const struct tm* src, _tm* dst) {
    dst->tm_sec   = src->tm_sec;
    dst->tm_min   = src->tm_min;
    dst->tm_hour  = src->tm_hour;
    dst->tm_mday  = src->tm_mday;
    dst->tm_mon   = src->tm_mon;
    dst->tm_year  = src->tm_year;
    dst->tm_wday  = src->tm_wday;
    dst->tm_yday  = src->tm_yday;
    dst->tm_isdst = src->tm_isdst;
}

time_t _mktime(_tm* t) {
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

_tm* _localtime(const void* timer) {
    struct tm* libc_result = localtime(reinterpret_cast<const time_t*>(timer));
    if (!libc_result) return nullptr;
    libc_to_watcom_tm(libc_result, &s_localtime_buf);
    return &s_localtime_buf;
}

time_t _time(time_t* timer) {
    time_t t = time(nullptr);
    if (timer) *timer = t;
    return t;
}

char* _asctime(_tm* timeptr) {
    return asctime(reinterpret_cast<tm*>(timeptr));
}

size_t _strftime(char* dest_buffer, size_t buffer_size, const char* format_string, _tm* time_ptr) {
    return strftime(dest_buffer, buffer_size, format_string, reinterpret_cast<tm*>(time_ptr));
}

// ---------------------------------------------------------------------------
// Sorting
// ---------------------------------------------------------------------------

// Note: _qsort is a template in the header and remains there.
// The template instantiation happens at each call site.

// ---------------------------------------------------------------------------
// File Status / Timestamps
// ---------------------------------------------------------------------------

// Watcom _stat is 70 bytes; glibc struct stat is 88 on 32-bit. ASan's
// stat interceptor writes the full 88 bytes, overflowing the 70-byte
// Watcom buffer. Bridge the same way as _mktime/_tm.
int getFileStat(const char* path, struct _stat* buf) {
    struct stat libc_st;
    int rc = stat(normalize_path(path).c_str(), &libc_st);
    if (rc == 0 && buf) {
        memset(buf, 0, sizeof(*buf));
        buf->_st_dev   = libc_st.st_dev;
        buf->_st_ino   = libc_st.st_ino;
        buf->_st_mode  = libc_st.st_mode;
        buf->_st_nlink = libc_st.st_nlink;
        buf->_st_uid   = libc_st.st_uid;
        buf->_st_gid   = libc_st.st_gid;
        buf->_st_rdev  = libc_st.st_rdev;
        buf->_st_size  = libc_st.st_size;
        buf->_st_atime = libc_st.st_atime;
        buf->_st_mtime = libc_st.st_mtime;
        buf->_st_ctime = libc_st.st_ctime;
    }
    return rc;
}

int _utime(const char* path, void* times) {
    return utime(normalize_path(path).c_str(), (struct utimbuf*)times);
}
