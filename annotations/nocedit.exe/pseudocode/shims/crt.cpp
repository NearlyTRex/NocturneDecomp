// =============================================================================
// CRT SHIM - Cross-platform C Runtime bridge implementations
// =============================================================================
//
// Provides implementations for CRT bridge functions that map Ghidra's
// decompiled types (e.g., _FILE*, _tm*) to standard C library types.
// These were previously inline functions in system/crt.h.
//

#include "system/crt.h"
// Needed for the full _FILE struct layout (crt.h only forward-declares it).
// _FILE_to_FILE inspects _handle to route Watcom static streams to libc.
#include "system/stdio.h"

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
    if (dir && dir[0]) strcat(path, dir);
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
    f->_flag = (f->_flag & ~0x30u)
             | (feof(fp)   ? 0x10u : 0u)
             | (ferror(fp) ? 0x20u : 0u);
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

_FILE* _fopen(const char* filename, const char* mode) {
    return make_file_wrapper(fopen(normalize_path(filename).c_str(), mode));
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

int _vsprintf(char* buffer, const char* format, va_list_t args) {
    return vsprintf(buffer, format, reinterpret_cast<va_list&>(args));
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

time_t _mktime(_tm* t) {
    return mktime(reinterpret_cast<tm*>(t));
}

_tm* _localtime(const void* timer) {
    return reinterpret_cast<_tm*>(localtime(reinterpret_cast<const time_t*>(timer)));
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

int getFileStat(const char* path, struct _stat* buf) {
    return stat(normalize_path(path).c_str(), (struct stat*)buf);
}

int _utime(const char* path, void* times) {
    return utime(normalize_path(path).c_str(), (struct utimbuf*)times);
}
