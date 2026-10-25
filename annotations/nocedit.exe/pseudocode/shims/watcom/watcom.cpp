#include <string>
#include <vector>

// =============================================================================
// WATCOM SHIM - Watcom C++ runtime and CRT bridge implementations
// =============================================================================
//
// Provides implementations for the Watcom 11 C++ runtime helper functions
// (array new/delete, copy construction, destruction) and Watcom-specific
// CRT wrappers that bridge to POSIX equivalents.
//
// These were previously inline functions in system/watcom.h.
//

#include "core/file_search.h" // nocturne_find_files() — shared with kernel32
#include "system/dos.h"       // _find_t, which a search fills in
#include "system/watcom.h"
#include "watcom/path.h" // watcom_resolve_fs_path()

#include <cerrno>
#include <chrono>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <mutex>
#include <system_error>
#include <thread>
#include <unordered_map>
// The descriptor-based half of Watcom's io.h — here just lseek and ftruncate.
// A file descriptor is not POSIX-only: Windows' own runtime has both, as _lseek
// and _chsize in <io.h>, so this is a spelling difference rather than a port.
#if defined(_WIN32)
#include <io.h>
#else
#include <unistd.h>
#endif

// =============================================================================
// Array Construction Functions
// =============================================================================

// WATCOM_TRAMPOLINE is defined in system/watcom.h — see the comment there.

WATCOM_TRAMPOLINE
void *__arrinit(void *array_start, int count, WatcomTypeInfo *ti) {
    char *p = (char *)array_start;
    for (int i = 0; i < count; i++, p += ti->instance_size)
        if (ti->ctor)
            (*ti->ctor)(p);
    return array_start;
}

void *__arrinit_(void *array_start, int count, WatcomTypeInfo *ti) {
    return __arrinit(array_start, count, ti);
}

void *__arrinit_dispatch(void *array_ptr, int count, WatcomTypeInfo *ti) {
    if (!array_ptr)
        return 0;
    return __arrinit(array_ptr, count, ti);
}

void *__vec_new_(void *dest, int count, WatcomTypeInfo *ti) {
    if (!dest)
        return 0;
    *(int *)dest = count;
    return __arrinit_dispatch((char *)dest + 4, count, ti);
}

void *__vec_new(void *dest, int count, WatcomTypeInfo *ti) {
    return __vec_new_(dest, count, ti);
}

WATCOM_TRAMPOLINE
void *__arrcopy(void *dest, void *src, int count, WatcomTypeInfo *ti) {
    char *d = (char *)dest;
    char *s = (char *)src;
    for (int i = 0; i < count; i++, d += ti->instance_size, s += ti->instance_size)
        if (ti->copy)
            (*ti->copy)(d, s);
    return dest;
}

// Note: __arr_op is a template and remains in the header.

// =============================================================================
// Array Destruction Functions
// =============================================================================

WATCOM_TRAMPOLINE
void *__arrdtor(WatcomTypeArrayInfo *info) {
    char *p =
        (char *)info->obj_array + (ptrdiff_t)(info->obj_count - 1) * info->type_info->instance_size;
    for (int i = info->obj_count - 1; i >= 0; i--, p -= info->type_info->instance_size)
        if (info->type_info->dtor)
            (*info->type_info->dtor)(p, 0);
    return (void *)info->obj_array;
}

void *__arrfini(void *obj_array, int count, WatcomTypeInfo *ti) {
    WatcomTypeArrayInfo info;
    info.obj_count = count;
    info.type_info = ti;
    info.obj_array = (void **)obj_array;
    __arrdtor(&info);
    return obj_array;
}

void *__vec_delete(void *ptr, WatcomTypeInfo *ti) {
    if (!ptr)
        return 0;
    int *base = ((int *)ptr) - 1;
    __arrfini(ptr, *base, ti);
    return base;
}

// =============================================================================
// Memory Helper Functions
// =============================================================================

void __memfill(void *dest, unsigned int value, unsigned int count) {
    unsigned char *p = (unsigned char *)dest;
    for (unsigned int i = 0; i < count; i++)
        *p++ = (unsigned char)value;
}

void __stosd(void *dest, unsigned int value, unsigned int dword_count) {
    unsigned int *p = (unsigned int *)dest;
    for (unsigned int i = 0; i < dword_count; i++)
        *p++ = value;
}

// =============================================================================
// Watcom CRT Internal Functions
// =============================================================================

void notifyAbnormalTermination() {
    // Called by error handlers before abort
}

void __STK() {}

void __STK(size_t size) {
    volatile char *p = (volatile char *)&size;
    while (size > 4096) {
        p -= 4096;
        (void)*p;
        size -= 4096;
    }
}

// =============================================================================
// Watcom CRT Wrappers (io.h)
// =============================================================================

void *_memcpy(void *dest, const void *src, size_t count) {
    return memcpy(dest, src, count);
}

void *_memset(void *dest, int value, size_t count) {
    return memset(dest, value, count);
}

long tell(int fd) {
    return lseek(fd, 0, SEEK_CUR);
}

#if defined(_MSC_VER)
// system/watcom.h renames this to nocturne_watcom_sleep; the Microsoft runtime
// has no sleep(), and the game's callers pass seconds as POSIX does.
unsigned int sleep(unsigned int seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
    return 0;
}
#endif

int chsize(int fd, long size) {
    // Watcom's own name for this was chsize, and so is Windows' — the POSIX
    // spelling is the odd one out. <io.h> has no ftruncate to call.
#if defined(_WIN32)
    return _chsize(fd, size);
#else
    return ftruncate(fd, size);
#endif
}

// A buffer that is too small is ERANGE and no answer, never a cut-down path:
// the caller would open what it was given. Without a buffer, one the size of
// the answer is allocated and the length is not a limit.
static char *copy_out(char *buffer, size_t room, const std::string &text) {
#if defined(_WIN32)
    if (buffer == 0)
        return _strdup(text.c_str());
#else
    if (buffer == 0)
        return strdup(text.c_str());
#endif
    if (text.size() + 1 > room) {
        errno = ERANGE;
        return 0;
    }
    memcpy(buffer, text.c_str(), text.size() + 1);
    return buffer;
}

char *_fullpath(char *buffer, const char *path, size_t maxlen) {
    // No path at all is the working directory, as in Watcom.
    if (path == 0 || *path == '\0')
        path = ".";
    // Watcom's _fullpath answers even for a path that does not exist yet, which
    // is what the game asks it for — a place to write. weakly_canonical does
    // the same, resolving as far as the filesystem goes and taking the rest
    // lexically. The path is handed back unchanged if even that fails, which is
    // what the caller was going to use anyway. It is resolved against the roots
    // (watcom/path.h) first: findFileNormally opens what this returns, and an
    // absolute path made from the working directory would bypass them.
    std::error_code ec;
    const std::filesystem::path full =
        std::filesystem::weakly_canonical(std::filesystem::path(watcom_resolve_fs_path(path)), ec);
    return copy_out(buffer, maxlen, ec ? std::string(path) : full.string());
}

char *_getcwd(char *buffer, int size) {
    std::error_code ec;
    const std::string here = std::filesystem::current_path(ec).string();
    if (ec) {
        errno = ec.value();
        return 0;
    }
    return copy_out(buffer, size > 0 ? (size_t)size : 0, here);
}

// =============================================================================
// File Find Functions (Watcom io.h)
// =============================================================================
// The search itself is in core/file_search.cpp, shared with the Win32 flavour
// of the same question in kernel32.cpp. What is left here is Watcom's shape for
// it: a long handle, and an iterator that reports the end by returning -1.
//
// Results are collected up front, so _findnext is an index bump. That matches
// the API — the caller is not told how many there are and cannot go back — and
// it means the directory is read once rather than being held open across calls
// the game makes no promise about the timing of.

// Internal linkage, deliberately. kernel32.cpp has a handle of its own with a
// different layout, and two definitions of one class name in a program is an ODR
// violation the linker resolves by keeping whichever destructor it saw first —
// silently giving one of them the other's field offsets. Anonymous namespaces
// here and there make the two unrelated types they always were. Sharing the
// search below removes the reason they ever looked alike.
namespace {

struct FindHandle {
    std::vector<std::string> matches;
    size_t current_index;
};

// What the caller reads back about each match: its name without the directory,
// size, the directory and read-only bits, and when it was written. The host
// keeps no creation or access time this can portably read, which is -1, as the
// Microsoft runtime answers for a filesystem without them.
void describe(const std::string &match, void *fileinfo) {
    namespace fs = std::filesystem;
    _find_t *out = (_find_t *)fileinfo;
    if (out == 0)
        return;
    memset(out, 0, sizeof(*out));
    snprintf(out->name, sizeof(out->name), "%s", watcom_path_leaf(match.c_str()));
    out->cr_time = -1;
    out->ac_time = -1;

    // Listed but not there to ask about, such as a link to nothing: the name is
    // all there is.
    const fs::path path(watcom_resolve_fs_path(match.c_str()));
    std::error_code ec;
    const uintmax_t size = fs::is_directory(path, ec) ? 0 : fs::file_size(path, ec);
    const fs::file_time_type written = fs::last_write_time(path, ec);
    if (ec)
        return;

    out->attrib = (uchar)__getfileattr(match.c_str());
    out->size = (long)size;
    // C++17 has no conversion between the two clocks; their offset now is it.
    const auto since = written - fs::file_time_type::clock::now();
    out->wr_time = std::chrono::system_clock::to_time_t(
        std::chrono::system_clock::now() +
        std::chrono::duration_cast<std::chrono::system_clock::duration>(since));
}

// The handle is a `long`, which is 32 bits on Windows even in a 64-bit build,
// so it cannot carry a pointer. Open searches live in a table instead, keyed
// by a number that counts up from 1: never 0 or -1, which are not handles.
std::mutex s_find_mutex;
std::unordered_map<long, FindHandle> s_find_handles;
long s_next_find_handle = 1;

} // namespace

long _findfirst(const char *filespec, void *fileinfo) {
    std::vector<std::string> matches = nocturne_find_files(filespec);
    if (matches.empty())
        return -1;
    describe(matches[0], fileinfo);

    std::lock_guard<std::mutex> held(s_find_mutex);
    const long handle_val = s_next_find_handle;
    s_next_find_handle = s_next_find_handle % LONG_MAX + 1;
    s_find_handles[handle_val] = FindHandle{std::move(matches), 0};
    return handle_val;
}

// -1 is what _findfirst returns when it found nothing, so it is the value most
// likely to arrive here by mistake — from a caller that did not check, or one
// that passed the failure straight on. Like any number _findfirst never handed
// out, or one already closed, it is answered as no search at all.
int _findnext(long handle_val, void *fileinfo) {
    std::lock_guard<std::mutex> held(s_find_mutex);
    auto found = s_find_handles.find(handle_val);
    if (found == s_find_handles.end())
        return -1;

    FindHandle &handle = found->second;
    // Held at the end, so a caller that keeps asking keeps hearing -1.
    if (handle.current_index + 1 >= handle.matches.size())
        return -1;
    handle.current_index++;
    describe(handle.matches[handle.current_index], fileinfo);
    return 0;
}

int _findclose(long handle_val) {
    std::lock_guard<std::mutex> held(s_find_mutex);
    return s_find_handles.erase(handle_val) == 1 ? 0 : -1;
}

// =============================================================================
// Directory Functions (direct.h)
// =============================================================================

int _mkdir(const char *path) {
    std::error_code ec;
    // Watcom answers 0 for success and -1 otherwise, including when the
    // directory is already there.
    const std::string resolved = watcom_resolve_fs_path(path, WatcomPathUse::Write);
    return std::filesystem::create_directory(std::filesystem::path(resolved), ec) ? 0 : -1;
}

// =============================================================================
// File Attribute Functions (io.h)
// =============================================================================

// Watcom maps the mode onto the one attribute Windows has: read-only unless
// S_IWRITE (0x80) is set. Writable gives the owner write; read-only takes write
// from everyone, since Microsoft's std::filesystem sets the attribute only once
// no write bit is left.
int _chmod(const char *path, int mode) {
    namespace fs = std::filesystem;
    std::error_code ec;
    const bool writable = (mode & 0x80) != 0;
    fs::permissions(fs::path(watcom_resolve_fs_path(path)),
                    writable
                        ? fs::perms::owner_write
                        : fs::perms::owner_write | fs::perms::group_write | fs::perms::others_write,
                    writable ? fs::perm_options::add : fs::perm_options::remove, ec);
    if (ec) {
        // Windows reports its own error numbers; the condition is the errno.
        errno = ec.default_error_condition().value();
        return -1;
    }
    return 0;
}

// =============================================================================
// Heap Functions (malloc.h)
// =============================================================================

int _heapchk(void) {
    return 0; // _HEAPOK
}

int _heapwalk(struct WatcomHeapInfo *entry) {
    (void)entry;
    return 4; // _HEAPEND
}

size_t _memmax(void) {
    return 0x7FFFFFFF;
}

size_t memavl(void) {
    return 0x7FFFFFFF;
}

// =============================================================================
// Watcom Internal CRT Functions
// =============================================================================

unsigned long __getfileattr(const char *filename) {
    std::error_code ec;
    const std::filesystem::path path(watcom_resolve_fs_path(filename));
    const std::filesystem::file_status status = std::filesystem::status(path, ec);
    // A status that could not be read is not known to exist.
    if (!std::filesystem::exists(status))
        return 0xFFFFFFFF; // INVALID_FILE_ATTRIBUTES

    unsigned long attrs = 0;
    if (std::filesystem::is_directory(status))
        attrs |= 0x10; // DIRECTORY
    // Windows has one read-only bit for the file; POSIX has three write bits for
    // three audiences. The owner's is the one that decides whether this process
    // can write, which is the question the attribute is asked to answer.
    if ((status.permissions() & std::filesystem::perms::owner_write) ==
        std::filesystem::perms::none) {
        attrs |= 0x01; // FILE_ATTRIBUTE_READONLY
    }
    return attrs;
}

unsigned long __set_errno(void) {
    return 0;
}

// Watcom's accessor for the per-thread errno slot. Windows' own runtime exports
// it under this exact name and meaning — its <errno.h> defines errno as
// (*_errno()) — so defining it here as well would be a duplicate symbol.
#if !defined(_WIN32)
int *_errno(void) {
    return &errno;
}
#endif

// =============================================================================
// Static Destructor Registration
// =============================================================================

void _atexit(WatcomStaticDestructorNode *node) {
    (void)node;
    // In a full runtime, this would register the destructor for atexit() cleanup.
    // For now, static destructors are not critical for execution.
}
