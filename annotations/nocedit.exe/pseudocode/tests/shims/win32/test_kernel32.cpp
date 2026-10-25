// =============================================================================
// KERNEL32 — the Win32 the game is written against
// =============================================================================
//
// Driven the way the game drives it: shims_init_kernel32 wires every entry point
// into a function pointer, and the decompiled code calls through those. So do
// these. Nothing here reaches a shim_ function directly — the pointers are the
// interface, and testing through them is testing what the game will get.
//
// The threading, the clock, the directory calls, the allocator and the loader
// all moved off POSIX. That move changed answers as well as headers: a
// directory that already exists, a buffer too small to hold a path, an
// allocation that cannot be honoured, a library that is not there. The game
// reads those answers, so they are what is checked.
//
// Concurrency is tested for the properties that can be: that a lock excludes,
// that an event wakes a waiter, that a timeout expires, that a thread runs and
// can be waited for, and that thread-local slots are per thread. Timings are
// generous — a test that fails when the machine is busy teaches nobody anything.

#include "globals/globals_610000.h"
#include "nocturne_test.h"
#include "system/kernel32.h"

#include <atomic>
#include <chrono>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fcntl.h>
#include <filesystem>
#include <fstream>
#include <new>
#include <string>
#include <sys/stat.h>
#include <system_error>
#include <thread>
#include <vector>
#if defined(_WIN32)
#include <io.h>
#include <process.h>
// mingw's headers carry these POSIX names; the Microsoft runtime has only its
// own spellings of the permission bits.
#if defined(_MSC_VER)
typedef long long ssize_t;
#define S_IRUSR _S_IREAD
#define S_IWUSR _S_IWRITE
#endif
#else
#include <sys/wait.h>
#include <unistd.h>
#endif

#include "win32/shim_init.h" // shims_init_kernel32 — C++ linkage, as declared

extern "C" void *nocturne_test_proc_one(void);

// -----------------------------------------------------------------------------
// An allocator that can be told to refuse. The shims allocate their handles and
// buffers with the non-throwing forms of new, and report ERROR_NOT_ENOUGH_MEMORY
// when one comes back empty; these replacements make that happen on demand.
// Otherwise they hand over to the standard allocators, so the matching deletes
// are the standard ones.
// -----------------------------------------------------------------------------

namespace {
std::atomic<bool> g_refuse_allocation(false);

struct RefusingAllocation {
    RefusingAllocation() {
        g_refuse_allocation = true;
    }
    ~RefusingAllocation() {
        g_refuse_allocation = false;
    }
};
} // namespace

void *operator new(std::size_t size, const std::nothrow_t &) noexcept {
    if (g_refuse_allocation)
        return nullptr;
    try {
        return ::operator new(size);
    } catch (...) {
        return nullptr;
    }
}

void *operator new[](std::size_t size, const std::nothrow_t &) noexcept {
    if (g_refuse_allocation)
        return nullptr;
    try {
        return ::operator new[](size);
    } catch (...) {
        return nullptr;
    }
}

void *operator new(std::size_t size, std::align_val_t alignment, const std::nothrow_t &) noexcept {
    if (g_refuse_allocation)
        return nullptr;
    try {
        return ::operator new(size, alignment);
    } catch (...) {
        return nullptr;
    }
}

namespace {

namespace fs = std::filesystem;

// Wires the entry points once, as the program does at startup.
struct Wired {
    Wired() {
        static bool done = false;
        if (!done) {
            shims_init_kernel32();
            done = true;
        }
    }
};

struct Tree : Wired {
    fs::path root;
    fs::path previous;

    Tree() {
        std::error_code ec;
        previous = fs::current_path(ec);
        root = fs::temp_directory_path(ec) / fs::path("nocturne_kernel32_test");
        fs::remove_all(root, ec);
        fs::create_directories(root / "existing", ec);
        std::ofstream((root / "afile.txt").string().c_str()) << "x";
        fs::current_path(root, ec);
    }
    ~Tree() {
        std::error_code ec;
        fs::current_path(previous, ec);
        fs::remove_all(root, ec);
    }
};

const DWORD kInfinite = 0xFFFFFFFFu;
const DWORD kWaitObject0 = 0x00000000u;
const DWORD kWaitTimeout = 0x00000102u;

} // namespace

// -----------------------------------------------------------------------------
// Directories and files. Win32 says whether it did the thing, and the game asks.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(creating_a_directory_reports_whether_it_created_one) {
    Tree tree;
    CHECK(g_CreateDirectoryAFunc("fresh", nullptr) != 0);
    std::error_code ec;
    CHECK(fs::is_directory(fs::path("fresh"), ec));

    // Already there is a failure with a reason, not a quiet success. The
    // standard library calls this success, and the game does not.
    CHECK_EQ(g_CreateDirectoryAFunc("existing", nullptr), 0);
    CHECK_EQ(g_GetLastErrorFunc(), 183u); // ERROR_ALREADY_EXISTS
}

NOCTURNE_TEST(deleting_a_file_reports_whether_it_deleted_one) {
    Tree tree;
    CHECK(g_DeleteFileAFunc("afile.txt") != 0);
    std::error_code ec;
    CHECK(!fs::exists(fs::path("afile.txt"), ec));

    CHECK_EQ(g_DeleteFileAFunc("afile.txt"), 0);
    CHECK_EQ(g_GetLastErrorFunc(), 2u); // ERROR_FILE_NOT_FOUND
}

NOCTURNE_TEST(the_working_directory_is_reported_and_can_be_moved) {
    Tree tree;
    char buffer[4096];
    const DWORD length = g_GetCurrentDirectoryAFunc(sizeof(buffer), buffer);
    CHECK(length > 0);
    CHECK_EQ((size_t)length, strlen(buffer));

    std::error_code ec;
    CHECK(fs::equivalent(fs::path(buffer), tree.root, ec));

    CHECK(g_SetCurrentDirectoryAFunc("existing") != 0);
    g_GetCurrentDirectoryAFunc(sizeof(buffer), buffer);
    CHECK(fs::equivalent(fs::path(buffer), tree.root / "existing", ec));

    CHECK_EQ(g_SetCurrentDirectoryAFunc("no_such_directory"), 0);
}

NOCTURNE_TEST(a_buffer_too_small_is_told_how_much_it_needed) {
    Tree tree;
    char buffer[4096];
    const DWORD needed = g_GetCurrentDirectoryAFunc(sizeof(buffer), buffer);

    // Win32 reports the size required INCLUDING the terminator, and writes
    // nothing. Truncating instead would hand back a path naming a different
    // directory, which is worse than refusing.
    char tiny[2] = {'\x7f', '\x7f'};
    const DWORD asked = g_GetCurrentDirectoryAFunc(sizeof(tiny), tiny);
    CHECK(asked > needed);
    CHECK_EQ(tiny[0], '\x7f');
}

// -----------------------------------------------------------------------------
// Locks. A critical section is recursive — the thread holding one can enter it
// again — and it must actually exclude another thread.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_critical_section_can_be_entered_twice_by_its_owner) {
    Wired wired;
    _RTL_CRITICAL_SECTION section;
    g_InitializeCriticalSectionFunc(&section);
    g_EnterCriticalSectionFunc(&section);
    g_EnterCriticalSectionFunc(&section); // would deadlock if not recursive
    g_LeaveCriticalSectionFunc(&section);
    g_LeaveCriticalSectionFunc(&section);
    g_DeleteCriticalSectionFunc(&section);
}

NOCTURNE_TEST(a_critical_section_keeps_another_thread_out) {
    Wired wired;
    _RTL_CRITICAL_SECTION section;
    g_InitializeCriticalSectionFunc(&section);

    std::atomic<int> got_in(0);
    g_EnterCriticalSectionFunc(&section);
    std::thread other([&]() {
        g_EnterCriticalSectionFunc(&section);
        got_in = 1;
        g_LeaveCriticalSectionFunc(&section);
    });

    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    CHECK_EQ(got_in.load(), 0); // still held here
    g_LeaveCriticalSectionFunc(&section);

    other.join();
    CHECK_EQ(got_in.load(), 1);
    g_DeleteCriticalSectionFunc(&section);
}

// -----------------------------------------------------------------------------
// Events. Waiting on one is the only thing in here with a timeout, and the
// difference between the two kinds is what happens to everyone else when one
// waiter is let through.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(waiting_on_an_event_that_is_already_set_returns_at_once) {
    Wired wired;
    HANDLE event = g_CreateEventAFunc(nullptr, 1 /*manual*/, 1 /*set*/, nullptr);
    CHECK(event != nullptr);
    CHECK_EQ(g_WaitForSingleObjectFunc(event, 0), kWaitObject0);
    g_CloseHandleFunc(event);
}

NOCTURNE_TEST(waiting_on_an_event_nobody_sets_times_out) {
    Wired wired;
    HANDLE event = g_CreateEventAFunc(nullptr, 1, 0 /*clear*/, nullptr);
    const auto started = std::chrono::steady_clock::now();
    CHECK_EQ(g_WaitForSingleObjectFunc(event, 50), kWaitTimeout);
    const auto waited = std::chrono::steady_clock::now() - started;
    // It waited rather than returning immediately.
    CHECK(waited >= std::chrono::milliseconds(40));
    g_CloseHandleFunc(event);
}

NOCTURNE_TEST(setting_an_event_wakes_a_waiter) {
    Wired wired;
    HANDLE event = g_CreateEventAFunc(nullptr, 1, 0, nullptr);
    std::atomic<int> woke(0);
    std::thread waiter([&]() {
        if (g_WaitForSingleObjectFunc(event, kInfinite) == kWaitObject0)
            woke = 1;
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(30));
    CHECK_EQ(woke.load(), 0);
    g_SetEventFunc(event);
    waiter.join();
    CHECK_EQ(woke.load(), 1);
    g_CloseHandleFunc(event);
}

NOCTURNE_TEST(an_automatic_event_is_consumed_and_a_manual_one_is_not) {
    Wired wired;
    // Manual: stays set, so a second wait also passes.
    HANDLE manual = g_CreateEventAFunc(nullptr, 1, 0, nullptr);
    g_SetEventFunc(manual);
    CHECK_EQ(g_WaitForSingleObjectFunc(manual, 0), kWaitObject0);
    CHECK_EQ(g_WaitForSingleObjectFunc(manual, 0), kWaitObject0);
    g_CloseHandleFunc(manual);

    // Automatic: the first wait takes it and the second finds nothing.
    HANDLE automatic = g_CreateEventAFunc(nullptr, 0, 0, nullptr);
    g_SetEventFunc(automatic);
    CHECK_EQ(g_WaitForSingleObjectFunc(automatic, 0), kWaitObject0);
    CHECK_EQ(g_WaitForSingleObjectFunc(automatic, 10), kWaitTimeout);
    g_CloseHandleFunc(automatic);
}

// -----------------------------------------------------------------------------
// Mutexes. Waiting on one takes it; releasing gives it back.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_mutex_is_taken_by_waiting_and_given_back_by_releasing) {
    Wired wired;
    HANDLE mutex = g_CreateMutexAFunc(nullptr, 0, nullptr);
    CHECK(mutex != nullptr);

    CHECK_EQ(g_WaitForSingleObjectFunc(mutex, kInfinite), kWaitObject0);

    std::atomic<int> took(0);
    std::thread other([&]() {
        if (g_WaitForSingleObjectFunc(mutex, kInfinite) == kWaitObject0) {
            took = 1;
            g_ReleaseMutexFunc(mutex);
        }
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    CHECK_EQ(took.load(), 0);
    CHECK(g_ReleaseMutexFunc(mutex) != 0);
    other.join();
    CHECK_EQ(took.load(), 1);
    g_CloseHandleFunc(mutex);
}

// -----------------------------------------------------------------------------
// Threads. One is created, it runs, and it can be waited for.
// -----------------------------------------------------------------------------

namespace {
std::atomic<int> g_thread_ran(0);
DWORD test_thread_body(LPVOID parameter) {
    g_thread_ran = (int)(intptr_t)parameter;
    return 7;
}
} // namespace

NOCTURNE_TEST(a_thread_runs_its_body_and_can_be_waited_for) {
    Wired wired;
    g_thread_ran = 0;
    DWORD id = 0;
    HANDLE thread = g_CreateThreadFunc(nullptr, 0, test_thread_body, (LPVOID)(intptr_t)42, 0, &id);
    CHECK(thread != nullptr);
    CHECK_EQ(g_WaitForSingleObjectFunc(thread, kInfinite), kWaitObject0);
    CHECK_EQ(g_thread_ran.load(), 42);
    g_CloseHandleFunc(thread);
}

// -----------------------------------------------------------------------------
// Thread-local storage. The whole point is that a slot holds a different value
// in each thread, which is the one thing a single-threaded test cannot see.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_tls_slot_holds_a_value_per_thread) {
    Wired wired;
    const DWORD slot = g_TlsAllocFunc();
    CHECK(slot != 0xFFFFFFFFu);

    CHECK(g_TlsSetValueFunc(slot, (LPVOID)(intptr_t)111) != 0);
    CHECK_EQ((intptr_t)g_TlsGetValueFunc(slot), (intptr_t)111);

    std::atomic<intptr_t> seen_before(-1), seen_after(-1);
    std::thread other([&]() {
        // A slot this thread has never written reads as nothing, not as what
        // another thread put there.
        seen_before = (intptr_t)g_TlsGetValueFunc(slot);
        g_TlsSetValueFunc(slot, (LPVOID)(intptr_t)222);
        seen_after = (intptr_t)g_TlsGetValueFunc(slot);
    });
    other.join();

    CHECK_EQ(seen_before.load(), (intptr_t)0);
    CHECK_EQ(seen_after.load(), (intptr_t)222);
    // And the other thread's write did not reach this one.
    CHECK_EQ((intptr_t)g_TlsGetValueFunc(slot), (intptr_t)111);

    CHECK(g_TlsFreeFunc(slot) != 0);
    CHECK_EQ(g_TlsFreeFunc(slot), 0); // freeing twice is a failure
}

NOCTURNE_TEST(tls_slots_are_handed_out_distinctly) {
    Wired wired;
    const DWORD first = g_TlsAllocFunc();
    const DWORD second = g_TlsAllocFunc();
    CHECK(first != second);
    g_TlsSetValueFunc(first, (LPVOID)(intptr_t)1);
    g_TlsSetValueFunc(second, (LPVOID)(intptr_t)2);
    CHECK_EQ((intptr_t)g_TlsGetValueFunc(first), (intptr_t)1);
    CHECK_EQ((intptr_t)g_TlsGetValueFunc(second), (intptr_t)2);
    g_TlsFreeFunc(first);
    g_TlsFreeFunc(second);
}

// -----------------------------------------------------------------------------
// The clock. It counts forwards, and it does not go backwards.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(the_performance_counter_only_moves_forwards) {
    Wired wired;
    LARGE_INTEGER frequency;
    CHECK(g_QueryPerformanceFrequencyFunc(&frequency) != 0);
    CHECK(frequency.QuadPart > 0);

    LARGE_INTEGER first, second;
    CHECK(g_QueryPerformanceCounterFunc(&first) != 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(20));
    CHECK(g_QueryPerformanceCounterFunc(&second) != 0);
    CHECK(second.QuadPart > first.QuadPart);

    // And the elapsed time it reports is roughly the time that passed.
    const double seconds = (double)(second.QuadPart - first.QuadPart) / (double)frequency.QuadPart;
    CHECK(seconds > 0.010);
    CHECK(seconds < 2.0);
}

// -----------------------------------------------------------------------------
// VirtualAlloc. It now refuses what it cannot honour rather than handing back
// something that only looks right.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(virtual_alloc_gives_zeroed_aligned_memory) {
    Wired wired;
    const DWORD kCommit = 0x1000, kReadWrite = 0x04;
    unsigned char *memory = (unsigned char *)g_VirtualAllocFunc(nullptr, 8192, kCommit, kReadWrite);
    CHECK(memory != nullptr);
    CHECK_EQ((uintptr_t)memory % 4096u, (uintptr_t)0);
    for (int i = 0; i < 8192; ++i)
        CHECK_EQ(memory[i], (unsigned char)0);
    memory[0] = 1; // writable
    CHECK(g_VirtualFreeFunc(memory, 0, 0x8000) != 0);
}

NOCTURNE_TEST(virtual_alloc_refuses_what_it_cannot_promise) {
    Wired wired;
    const DWORD kCommit = 0x1000, kReserve = 0x2000, kReadWrite = 0x04;
    const DWORD kExecuteReadWrite = 0x40;
    const DWORD kNotSupported = 50;

    // Executable pages: not something the language grants.
    CHECK(g_VirtualAllocFunc(nullptr, 4096, kCommit, kExecuteReadWrite) == nullptr);
    CHECK_EQ(g_GetLastErrorFunc(), kNotSupported);

    // A chosen address is a request about the address space.
    char somewhere[16];
    CHECK(g_VirtualAllocFunc(somewhere, 4096, kCommit, kReadWrite) == nullptr);
    CHECK_EQ(g_GetLastErrorFunc(), kNotSupported);

    // Reserving without committing wants address space with nothing behind it.
    CHECK(g_VirtualAllocFunc(nullptr, 4096, kReserve, kReadWrite) == nullptr);
    CHECK_EQ(g_GetLastErrorFunc(), kNotSupported);

    // And nothing at all is a bad request rather than an unsupported one.
    CHECK(g_VirtualAllocFunc(nullptr, 0, kCommit, kReadWrite) == nullptr);
}

// -----------------------------------------------------------------------------
// The loader. Everything is compiled in, so the registry is the whole answer and
// a name it does not know is a library this build does not have.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_registered_module_loads_and_exports) {
    Wired wired;
    HMODULE module = g_LoadLibraryAFunc("modulea.dll");
    CHECK(module != nullptr);
    // Whatever case it is asked for by, as a Windows loader would.
    CHECK(g_LoadLibraryAFunc("MODULEA.DLL") == module);

    FARPROC proc = g_GetProcAddressFunc(module, "ProcOne");
    CHECK(proc != nullptr);
    CHECK((void *)proc == nocturne_test_proc_one());
    CHECK(g_FreeLibraryFunc(module) != 0);
}

NOCTURNE_TEST(an_unregistered_module_is_refused_rather_than_sought) {
    Wired wired;
    // There is no dynamic loader behind this. A name the registry does not know
    // is a library this build does not have, and asking the host would only be
    // a second way to get the same no.
    CHECK(g_LoadLibraryAFunc("libc.so.6") == nullptr);
    CHECK_EQ(g_GetLastErrorFunc(), 126u); // ERROR_MOD_NOT_FOUND
    CHECK(g_LoadLibraryAFunc("winmm.dll") == nullptr);
    CHECK(g_GetModuleHandleAFunc("winmm.dll") == nullptr);
}

NOCTURNE_TEST(an_export_is_looked_up_in_the_module_that_was_asked) {
    Wired wired;
    HMODULE a = g_LoadLibraryAFunc("modulea.dll");
    HMODULE b = g_LoadLibraryAFunc("moduleb.dll");
    CHECK(a != b);

    // Module B exports nothing, so a symbol that exists in A must not be found
    // through B — the lookup is per module, not a search of everything loaded.
    CHECK(g_GetProcAddressFunc(a, "ProcOne") != nullptr);
    CHECK(g_GetProcAddressFunc(b, "ProcOne") == nullptr);
    CHECK_EQ(g_GetLastErrorFunc(), 127u); // ERROR_PROC_NOT_FOUND

    CHECK(g_GetProcAddressFunc(a, "NoSuchProc") == nullptr);
    g_FreeLibraryFunc(a);
    g_FreeLibraryFunc(b);
}

// -----------------------------------------------------------------------------
// Finding files. The pod loader mounts every *.pod this way at startup: first,
// next until there are no more, then close, reading GetLastError on the way.
// -----------------------------------------------------------------------------

namespace {

const HANDLE kInvalidHandle = (HANDLE)(intptr_t)-1;
const DWORD kErrorFileNotFound = 2;
const DWORD kErrorNoMoreFiles = 18;
const DWORD kAttributeDirectory = 0x10;

// A game folder: three pods, one in upper case, and something that is not one
struct Pods : Tree {
    Pods() {
        std::error_code ec;
        fs::create_directories(root / "pods", ec);
        for (const char *name : {"act1.pod", "ENGLISH.POD", "music.pod", "notes.txt"}) {
            std::ofstream((root / "pods" / name).string().c_str()) << name;
        }
    }
};

// Every name a search reports, first to last, and the error it ended on
struct Walk {
    std::vector<std::string> names;
    DWORD final_error = 0;
};

Walk walk(const char *spec) {
    Walk result;
    WIN32_FIND_DATAA data;
    HANDLE handle = g_FindFirstFileAFunc(spec, &data);
    if (handle == kInvalidHandle) {
        result.final_error = g_GetLastErrorFunc();
        return result;
    }
    do {
        result.names.push_back(data.cFileName);
    } while (g_FindNextFileAFunc(handle, &data));
    result.final_error = g_GetLastErrorFunc();
    CHECK(g_FindCloseFunc(handle) != 0);
    return result;
}

} // namespace

NOCTURNE_TEST(a_search_reports_every_match_then_no_more_files) {
    Pods pods;
    Walk found = walk("pods\\*.pod");
    CHECK_EQ(found.names.size(), 3u);
    CHECK_EQ(found.final_error, kErrorNoMoreFiles);
}

// cFileName is the name alone however the search was spelled: the game joins
// it to its own directory, so a path here would be a path twice over.
NOCTURNE_TEST(the_found_name_is_the_name_alone) {
    Pods pods;
    for (const std::string &spec : {std::string("pods\\*.pod"), std::string("pods/*.pod"),
                                    (pods.root / "pods").string() + "\\*.pod"}) {
        for (const std::string &name : walk(spec.c_str()).names) {
            CHECK(name == "act1.pod" || name == "ENGLISH.POD" || name == "music.pod");
        }
    }
}

NOCTURNE_TEST(the_find_data_describes_the_file) {
    Pods pods;
    WIN32_FIND_DATAA data;
    std::memset(&data, 0xcc, sizeof(data));
    HANDLE handle = g_FindFirstFileAFunc("pods\\notes.txt", &data);
    CHECK(handle != kInvalidHandle);
    CHECK_EQ(std::string(data.cFileName), std::string("notes.txt"));
    CHECK_EQ(data.nFileSizeLow, 9u);
    CHECK_EQ(data.nFileSizeHigh, 0u);
    CHECK_EQ(data.dwFileAttributes & kAttributeDirectory, 0u);
    // Nothing is left from what the buffer held before
    CHECK_EQ(data.cAlternateFileName[0], '\0');
    g_FindCloseFunc(handle);

    handle = g_FindFirstFileAFunc("pods", &data);
    CHECK(handle != kInvalidHandle);
    CHECK(data.dwFileAttributes & kAttributeDirectory);
    g_FindCloseFunc(handle);
}

NOCTURNE_TEST(finding_nothing_is_file_not_found) {
    Pods pods;
    Walk found = walk("pods\\*.nothing");
    CHECK(found.names.empty());
    CHECK_EQ(found.final_error, kErrorFileNotFound);
    CHECK_EQ(walk("no_such_dir\\*.pod").final_error, kErrorFileNotFound);
}

NOCTURNE_TEST(a_finished_search_stays_finished) {
    Pods pods;
    WIN32_FIND_DATAA data;
    HANDLE handle = g_FindFirstFileAFunc("pods\\music.pod", &data);
    CHECK(handle != kInvalidHandle);
    CHECK_EQ(g_FindNextFileAFunc(handle, &data), 0);
    CHECK_EQ(g_FindNextFileAFunc(handle, &data), 0);
    CHECK_EQ(g_GetLastErrorFunc(), kErrorNoMoreFiles);
    CHECK(g_FindCloseFunc(handle) != 0);
}

NOCTURNE_TEST(what_is_not_a_search_handle_is_refused) {
    Wired wired;
    WIN32_FIND_DATAA data;
    CHECK_EQ(g_FindNextFileAFunc(kInvalidHandle, &data), 0);
    CHECK_EQ(g_FindNextFileAFunc(nullptr, &data), 0);
    CHECK_EQ(g_FindCloseFunc(kInvalidHandle), 0);
    CHECK_EQ(g_FindCloseFunc(nullptr), 0);
}

NOCTURNE_TEST(searches_open_at_once_keep_their_own_place) {
    Pods pods;
    WIN32_FIND_DATAA a, b;
    HANDLE first = g_FindFirstFileAFunc("pods\\*.pod", &a);
    HANDLE second = g_FindFirstFileAFunc("pods\\*.pod", &b);
    CHECK(first != second);
    CHECK_EQ(std::string(a.cFileName), std::string(b.cFileName));
    CHECK(g_FindNextFileAFunc(first, &a) != 0);
    CHECK(g_FindNextFileAFunc(first, &a) != 0);
    CHECK(g_FindNextFileAFunc(second, &b) != 0);
    CHECK(std::string(a.cFileName) != std::string(b.cFileName));
    g_FindCloseFunc(first);
    g_FindCloseFunc(second);
}

// The last error is per thread. Ending a search on a worker records the error
// there, which is a thread-local write, and leaves this thread's alone.
NOCTURNE_TEST(a_search_ended_on_another_thread_keeps_its_error_there) {
    Pods pods;
    g_SetLastErrorFunc(0);
    DWORD worker_error = 0;
    std::thread worker([&] { worker_error = walk("pods\\*.pod").final_error; });
    worker.join();
    CHECK_EQ(worker_error, kErrorNoMoreFiles);
    CHECK_EQ(g_GetLastErrorFunc(), 0u);
}

// The loader opens and walks a search per mount pass; many in a row must not
// grow or corrupt anything a later one depends on.
NOCTURNE_TEST(many_searches_in_a_row_all_complete) {
    Pods pods;
    for (int i = 0; i < 2000; i++) {
        Walk found = walk("pods\\*.pod");
        if (found.names.size() != 3u || found.final_error != kErrorNoMoreFiles) {
            CHECK_EQ(found.names.size(), 3u);
            CHECK_EQ(found.final_error, kErrorNoMoreFiles);
            break;
        }
    }
}

// -----------------------------------------------------------------------------
// Reading files. Bytes come back as they are on disk: no text-mode translation
// of CR LF or of 0x1A, which a Windows runtime would otherwise apply.
// -----------------------------------------------------------------------------

namespace {

const DWORD kGenericRead = 0x80000000u;
const DWORD kGenericWrite = 0x40000000u;
const DWORD kCreateAlways = 2;
const DWORD kOpenExisting = 3;
const DWORD kFileBegin = 0;
const DWORD kFileCurrent = 1;
const DWORD kFileEnd = 2;

HANDLE open_file(const char *name, DWORD access, DWORD disposition) {
    return g_CreateFileAFunc(name, access, 0, nullptr, disposition, 0, nullptr);
}

std::string read_all(HANDLE handle, DWORD size) {
    std::string bytes(size, '\0');
    DWORD read = 0;
    CHECK(g_ReadFileFunc(handle, &bytes[0], size, &read, nullptr) != 0);
    bytes.resize(read);
    return bytes;
}

} // namespace

NOCTURNE_TEST(a_file_reads_back_byte_for_byte) {
    Tree tree;
    const std::string written("pod\r\n\x1a"
                              "after\0end",
                              15);
    std::ofstream("binary.pod", std::ios::binary) << written;
    HANDLE handle = open_file("binary.pod", kGenericRead, kOpenExisting);
    CHECK(handle != kInvalidHandle);
    CHECK(read_all(handle, 64) == written);
    g_CloseHandleFunc(handle);
}

// A file handle is a descriptor, a small number. Closing it, or handing it to a
// call meant for another kind of handle, must never read it as an object's address.
NOCTURNE_TEST(a_file_handle_is_never_read_as_an_object) {
    Tree tree;
    HANDLE handle = open_file("afile.txt", kGenericRead, kOpenExisting);
    CHECK(handle != kInvalidHandle);
    WIN32_FIND_DATAA data;
    CHECK_EQ(g_FindNextFileAFunc(handle, &data), 0);
    CHECK_EQ(g_FindCloseFunc(handle), 0);
    CHECK_EQ(g_WaitForSingleObjectFunc(handle, 0), 0xFFFFFFFFu); // WAIT_FAILED
    CHECK(g_CloseHandleFunc(handle) != 0);
    // Closed once is closed: the descriptor is gone
    CHECK_EQ(g_CloseHandleFunc(handle), 0);
}

NOCTURNE_TEST(seeking_moves_by_the_whole_offset) {
    Tree tree;
    std::ofstream("seek.bin", std::ios::binary) << std::string(256, 'x');
    HANDLE handle = open_file("seek.bin", kGenericRead, kOpenExisting);

    CHECK_EQ(g_SetFilePointerFunc(handle, 100, nullptr, kFileBegin), 100u);
    CHECK_EQ(g_SetFilePointerFunc(handle, -10, nullptr, kFileCurrent), 90u);
    CHECK_EQ(g_SetFilePointerFunc(handle, -6, nullptr, kFileEnd), 250u);

    // With a high word the offset is 64 bits: zero above, and -1 above a
    // negative low word, are the same small moves.
    LONG high = 0;
    CHECK_EQ(g_SetFilePointerFunc(handle, 20, &high, kFileBegin), 20u);
    CHECK_EQ(high, 0);
    high = -1;
    CHECK_EQ(g_SetFilePointerFunc(handle, -4, &high, kFileCurrent), 16u);
    CHECK_EQ(high, 0);
    g_CloseHandleFunc(handle);
}

// Past 4 GB the high word carries the rest. Seeking beyond the end of a file
// opened for writing is allowed and writes nothing.
NOCTURNE_TEST(a_high_word_reaches_past_four_gigabytes) {
    Tree tree;
    HANDLE handle = open_file("big.bin", kGenericRead | kGenericWrite, kCreateAlways);
    CHECK(handle != kInvalidHandle);
    LONG high = 1;
    CHECK_EQ(g_SetFilePointerFunc(handle, 16, &high, kFileBegin), 16u);
    CHECK_EQ(high, 1);
    high = 0;
    CHECK_EQ(g_SetFilePointerFunc(handle, 0, &high, kFileCurrent), 16u);
    CHECK_EQ(high, 1);
    g_CloseHandleFunc(handle);
}

// -----------------------------------------------------------------------------
// Writing, and the other things a file handle answers. A handle that has been
// closed is the cheapest way to make each of them fail.
// -----------------------------------------------------------------------------

namespace {

const DWORD kCreateNew = 1;
const DWORD kOpenAlways = 4;
const DWORD kTruncateExisting = 5;
const DWORD kInvalidFileAttributes = 0xFFFFFFFFu;
const DWORD kAttributeReadOnly = 0x01;
const DWORD kAttributeNormal = 0x80;

// A time broken into parts, UTC or local. Windows' runtime spells these _s
// with the arguments the other way round.
struct tm utc_parts(time_t when) {
    struct tm parts;
#if defined(_WIN32)
    gmtime_s(&parts, &when);
#else
    gmtime_r(&when, &parts);
#endif
    return parts;
}

struct tm local_parts(time_t when) {
    struct tm parts;
#if defined(_WIN32)
    localtime_s(&parts, &when);
#else
    localtime_r(&when, &parts);
#endif
    return parts;
}

// A descriptor that was valid a moment ago and is not now.
HANDLE closed_handle() {
    HANDLE handle = open_file("closed.bin", kGenericWrite, kCreateAlways);
    g_CloseHandleFunc(handle);
    return handle;
}

std::string contents_of(const char *name) {
    std::ifstream in(name, std::ios::binary);
    return std::string((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
}

} // namespace

NOCTURNE_TEST(a_file_written_reports_what_it_wrote) {
    Tree tree;
    HANDLE handle = open_file("out.bin", kGenericWrite, kCreateAlways);
    CHECK(handle != kInvalidHandle);
    DWORD wrote = 0;
    CHECK(g_WriteFileFunc(handle, "nocturne", 8, &wrote, nullptr) != 0);
    CHECK_EQ(wrote, 8u);
    // The count is optional.
    CHECK(g_WriteFileFunc(handle, "!", 1, nullptr, nullptr) != 0);
    g_CloseHandleFunc(handle);
    CHECK(contents_of("out.bin") == "nocturne!");
    // Reading back, the count is optional too.
    handle = open_file("out.bin", kGenericRead, kOpenExisting);
    char buffer[8];
    CHECK(g_ReadFileFunc(handle, buffer, 8, nullptr, nullptr) != 0);
    CHECK(std::string(buffer, 8) == "nocturne");
    g_CloseHandleFunc(handle);
}

NOCTURNE_TEST(reading_or_writing_a_closed_handle_moves_nothing) {
    Tree tree;
    HANDLE handle = closed_handle();
    char buffer[4];
    DWORD moved = 99;
    CHECK_EQ(g_ReadFileFunc(handle, buffer, 4, &moved, nullptr), 0);
    CHECK_EQ(moved, 0u);
    CHECK_EQ(g_ReadFileFunc(handle, buffer, 4, nullptr, nullptr), 0);
    moved = 99;
    CHECK_EQ(g_WriteFileFunc(handle, "x", 1, &moved, nullptr), 0);
    CHECK_EQ(moved, 0u);
    CHECK_EQ(g_WriteFileFunc(handle, "x", 1, nullptr, nullptr), 0);
    CHECK(g_GetLastErrorFunc() != 0u);
}

NOCTURNE_TEST(each_creation_disposition_does_what_it_says) {
    Tree tree;
    // CREATE_NEW refuses a file that is there and makes one that is not.
    CHECK(open_file("afile.txt", kGenericWrite, kCreateNew) == kInvalidHandle);
    HANDLE fresh = open_file("new.txt", kGenericWrite, kCreateNew);
    CHECK(fresh != kInvalidHandle);
    g_CloseHandleFunc(fresh);

    // OPEN_ALWAYS makes one when needed and keeps what is there.
    HANDLE always = open_file("always.txt", kGenericRead | kGenericWrite, kOpenAlways);
    CHECK(always != kInvalidHandle);
    g_WriteFileFunc(always, "kept", 4, nullptr, nullptr);
    g_CloseHandleFunc(always);
    always = open_file("always.txt", kGenericRead, kOpenAlways);
    CHECK(read_all(always, 16) == "kept");
    g_CloseHandleFunc(always);

    // TRUNCATE_EXISTING empties it.
    HANDLE truncated = open_file("always.txt", kGenericWrite, kTruncateExisting);
    CHECK(truncated != kInvalidHandle);
    g_CloseHandleFunc(truncated);
    CHECK(contents_of("always.txt").empty());

    // A disposition Win32 does not define opens what is there, as OPEN_EXISTING.
    HANDLE unknown = open_file("afile.txt", kGenericRead, 0);
    CHECK(read_all(unknown, 16) == "x");
    g_CloseHandleFunc(unknown);
}

NOCTURNE_TEST(a_handle_opened_for_writing_only_cannot_be_read) {
    Tree tree;
    HANDLE handle = open_file("afile.txt", kGenericWrite, kOpenExisting);
    char buffer[4];
    CHECK_EQ(g_ReadFileFunc(handle, buffer, 4, nullptr, nullptr), 0);
    g_CloseHandleFunc(handle);
}

NOCTURNE_TEST(a_file_that_cannot_be_opened_is_an_invalid_handle_with_a_reason) {
    Tree tree;
    g_SetLastErrorFunc(0);
    CHECK(open_file("no_such_file.bin", kGenericRead, kOpenExisting) == kInvalidHandle);
    CHECK_EQ(g_GetLastErrorFunc(), kErrorFileNotFound);
}

NOCTURNE_TEST(a_seek_that_cannot_be_made_fails) {
    Tree tree;
    HANDLE handle = open_file("afile.txt", kGenericRead, kOpenExisting);
    CHECK_EQ(g_SetFilePointerFunc(handle, -10, nullptr, kFileBegin), 0xFFFFFFFFu);
    // A move method Win32 does not define is taken from the start.
    CHECK_EQ(g_SetFilePointerFunc(handle, 1, nullptr, 7), 1u);
    g_CloseHandleFunc(handle);
}

NOCTURNE_TEST(the_end_of_a_file_is_set_where_its_pointer_is) {
    Tree tree;
    std::ofstream("long.bin", std::ios::binary) << std::string(100, 'z');
    HANDLE handle = open_file("long.bin", kGenericRead | kGenericWrite, kOpenExisting);
    g_SetFilePointerFunc(handle, 40, nullptr, kFileBegin);
    CHECK(g_SetEndOfFileFunc(handle) != 0);
    g_CloseHandleFunc(handle);
    CHECK_EQ(contents_of("long.bin").size(), 40u);

    // Not on a handle that cannot write, nor on one that is closed.
    HANDLE reading = open_file("long.bin", kGenericRead, kOpenExisting);
    CHECK_EQ(g_SetEndOfFileFunc(reading), 0);
    g_CloseHandleFunc(reading);
    CHECK_EQ(g_SetEndOfFileFunc(closed_handle()), 0);
}

NOCTURNE_TEST(flushing_a_file_reports_whether_it_could) {
    Tree tree;
    HANDLE handle = open_file("afile.txt", kGenericWrite, kOpenExisting);
    CHECK(g_FlushFileBuffersFunc(handle) != 0);
    g_CloseHandleFunc(handle);
    CHECK_EQ(g_FlushFileBuffersFunc(closed_handle()), 0);
}

NOCTURNE_TEST(moving_a_file_reports_whether_it_moved) {
    Tree tree;
    CHECK(g_MoveFileAFunc("afile.txt", "moved.txt") != 0);
    CHECK(contents_of("moved.txt") == "x");
    CHECK_EQ(g_MoveFileAFunc("afile.txt", "again.txt"), 0);
    CHECK_EQ(g_GetLastErrorFunc(), kErrorFileNotFound);
}

NOCTURNE_TEST(deleting_or_creating_what_cannot_be_is_a_failure_with_a_reason) {
    Tree tree;
    // A directory with something in it is not a file to delete.
    std::ofstream((tree.root / "existing" / "inside.txt").string().c_str()) << "x";
    g_SetLastErrorFunc(0);
    CHECK_EQ(g_DeleteFileAFunc("existing"), 0);
    CHECK(g_GetLastErrorFunc() != 0u);
    // A directory inside one that is not there.
    g_SetLastErrorFunc(0);
    CHECK_EQ(g_CreateDirectoryAFunc("no_such_parent/child", nullptr), 0);
    CHECK(g_GetLastErrorFunc() != 0u);
}

NOCTURNE_TEST(attributes_say_directory_read_only_or_normal) {
    Tree tree;
    CHECK(g_GetFileAttributesAFunc("existing") & kAttributeDirectory);
    CHECK_EQ(g_GetFileAttributesAFunc("afile.txt"), kAttributeNormal);
    std::ofstream("locked.txt") << "x";
    chmod("locked.txt", S_IRUSR);
    CHECK(g_GetFileAttributesAFunc("locked.txt") & kAttributeReadOnly);
    chmod("locked.txt", S_IRUSR | S_IWUSR);
    CHECK_EQ(g_GetFileAttributesAFunc("no_such_file"), kInvalidFileAttributes);
    // Setting attributes is accepted and changes nothing the host can carry.
    CHECK(g_SetFileAttributesAFunc("afile.txt", kAttributeReadOnly) != 0);
}

NOCTURNE_TEST(a_files_times_are_reported_as_filetimes) {
    Tree tree;
    HANDLE handle = open_file("afile.txt", kGenericRead, kOpenExisting);
    FILETIME created, accessed, written;
    CHECK(g_GetFileTimeFunc(handle, &created, &accessed, &written) != 0);
    // Written in the last day, as a FILETIME counts from 1601.
    SYSTEMTIME when;
    g_FileTimeToSystemTimeFunc(&written, &when);
    const struct tm today = utc_parts(time(nullptr));
    CHECK_EQ((int)when.wYear, today.tm_year + 1900);
    // Any of them may be left out.
    CHECK(g_GetFileTimeFunc(handle, nullptr, nullptr, nullptr) != 0);
    // Setting them is accepted and changes nothing.
    CHECK(g_SetFileTimeFunc(handle, &created, &accessed, &written) != 0);
    g_CloseHandleFunc(handle);
    CHECK_EQ(g_GetFileTimeFunc(closed_handle(), &created, &accessed, &written), 0);
}

NOCTURNE_TEST(a_file_handle_says_what_kind_of_file_it_is) {
    Tree tree;
    const DWORD kDisk = 1, kChar = 2, kPipe = 3, kUnknown = 0;
    HANDLE handle = open_file("afile.txt", kGenericRead, kOpenExisting);
    CHECK_EQ(g_GetFileTypeFunc(handle), kDisk);
    g_CloseHandleFunc(handle);
    CHECK_EQ(g_GetFileTypeFunc(closed_handle()), kUnknown);
#if !defined(_WIN32)
    const int null_fd = open("/dev/null", O_RDONLY);
    CHECK_EQ(g_GetFileTypeFunc((HANDLE)(intptr_t)null_fd), kChar);
    close(null_fd);
    int ends[2];
    CHECK_EQ(pipe(ends), 0);
    CHECK_EQ(g_GetFileTypeFunc((HANDLE)(intptr_t)ends[0]), kPipe);
    close(ends[0]);
    close(ends[1]);
    // Anything else that is open, such as a directory, counts as on disk.
    const int dir_fd = open(".", O_RDONLY);
    CHECK_EQ(g_GetFileTypeFunc((HANDLE)(intptr_t)dir_fd), kDisk);
    close(dir_fd);
#else
    (void)kChar;
    (void)kPipe;
#endif
}

// -----------------------------------------------------------------------------
// Full path names. Resolved against the working directory, whether or not the
// file is there, and with the same answer as GetCurrentDirectory when the
// buffer is too small.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_full_path_is_resolved_against_the_working_directory) {
    Tree tree;
    char buffer[4096];
    char *file_part = nullptr;
    const DWORD length = g_GetFullPathNameAFunc("afile.txt", sizeof(buffer), buffer, &file_part);
    CHECK_EQ((size_t)length, strlen(buffer));
    std::error_code ec;
    CHECK(fs::equivalent(fs::path(buffer), tree.root / "afile.txt", ec));
    CHECK_EQ(std::string(file_part), std::string("afile.txt"));
}

NOCTURNE_TEST(a_full_path_need_not_exist_and_is_normalised) {
    Tree tree;
    char buffer[4096];
    CHECK(g_GetFullPathNameAFunc("ghost/../missing.txt", sizeof(buffer), buffer, nullptr) > 0);
    CHECK(fs::path(buffer) == (fs::absolute(tree.root) / "missing.txt").lexically_normal());
}

NOCTURNE_TEST(a_full_path_too_long_for_the_buffer_reports_the_size_it_needs) {
    Tree tree;
    char full[4096];
    const DWORD length = g_GetFullPathNameAFunc("afile.txt", sizeof(full), full, nullptr);
    char tiny[4] = {'\x7f', '\x7f', '\x7f', '\x7f'};
    CHECK_EQ(g_GetFullPathNameAFunc("afile.txt", sizeof(tiny), tiny, nullptr), length + 1);
    CHECK_EQ(tiny[0], '\x7f');
    // No buffer at all is the same question.
    CHECK_EQ(g_GetFullPathNameAFunc("afile.txt", 0, nullptr, nullptr), length + 1);
}

#if !defined(_WIN32)
// A working directory that has been deleted cannot be resolved against.
NOCTURNE_TEST(a_full_path_cannot_be_had_without_a_working_directory) {
    Tree tree;
    std::error_code ec;
    fs::create_directories(tree.root / "doomed", ec);
    fs::current_path(tree.root / "doomed", ec);
    fs::remove(tree.root / "doomed", ec);
    char buffer[4096];
    CHECK_EQ(g_GetFullPathNameAFunc("afile.txt", sizeof(buffer), buffer, nullptr), 0u);
    CHECK(g_GetLastErrorFunc() != 0u);
    // Nor is there a current directory to report.
    g_SetLastErrorFunc(0);
    CHECK_EQ(g_GetCurrentDirectoryAFunc(sizeof(buffer), buffer), 0u);
    CHECK(g_GetLastErrorFunc() != 0u);
}

// A link to nothing is found by a search, and described with what is known.
NOCTURNE_TEST(a_found_entry_that_cannot_be_examined_is_still_named) {
    Tree tree;
    std::error_code ec;
    fs::create_symlink("nowhere", tree.root / "dangling.lnk", ec);
    WIN32_FIND_DATAA data;
    HANDLE handle = g_FindFirstFileAFunc("*.lnk", &data);
    CHECK(handle != kInvalidHandle);
    CHECK_EQ(std::string(data.cFileName), std::string("dangling.lnk"));
    CHECK_EQ(data.dwFileAttributes, 0u);
    CHECK_EQ(data.nFileSizeLow, 0u);
    g_FindCloseFunc(handle);
}
#endif

// -----------------------------------------------------------------------------
// The console and the standard handles, which are descriptors 0, 1 and 2.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(the_standard_handles_are_the_standard_descriptors) {
    Wired wired;
    CHECK(g_GetStdHandleFunc((DWORD)-10) == (HANDLE)(intptr_t)0);
    CHECK(g_GetStdHandleFunc((DWORD)-11) == (HANDLE)(intptr_t)1);
    CHECK(g_GetStdHandleFunc((DWORD)-12) == (HANDLE)(intptr_t)2);
    CHECK(g_GetStdHandleFunc(7) == kInvalidHandle);
}

NOCTURNE_TEST(a_standard_handle_can_be_pointed_somewhere_else) {
    Tree tree;
    fflush(stdout);
    fflush(stderr);
    const int saved[3] = {dup(0), dup(1), dup(2)};
    HANDLE file = open_file("console.txt", kGenericRead | kGenericWrite, kCreateAlways);

    const bool redirected = g_SetStdHandleFunc((DWORD)-11, file) != 0;
    const ssize_t wrote = write(1, "out", 3);
    // Each of the three, and the same descriptor straight back.
    const bool input = g_SetStdHandleFunc((DWORD)-10, (HANDLE)(intptr_t)saved[0]) != 0;
    const bool error = g_SetStdHandleFunc((DWORD)-12, (HANDLE)(intptr_t)saved[2]) != 0;
    const bool unknown = g_SetStdHandleFunc(7, file) != 0;
    const bool closed = g_SetStdHandleFunc((DWORD)-11, closed_handle()) != 0;

    dup2(saved[1], 1);
    for (int fd : saved)
        close(fd);
    g_CloseHandleFunc(file);

    CHECK(redirected);
    CHECK_EQ(wrote, (ssize_t)3);
    CHECK(contents_of("console.txt") == "out");
    CHECK(input);
    CHECK(error);
    CHECK(!unknown);
    CHECK(!closed);
}

NOCTURNE_TEST(console_output_is_written_to_the_handle) {
    Tree tree;
    HANDLE file = open_file("console.txt", kGenericWrite, kCreateAlways);
    char text[] = "line";
    DWORD wrote = 0;
    CHECK(g_WriteConsoleAFunc(file, text, 4, &wrote, nullptr) != 0);
    CHECK_EQ(wrote, 4u);
    CHECK(g_WriteConsoleAFunc(file, text, 1, nullptr, nullptr) != 0);
    g_CloseHandleFunc(file);
    CHECK(contents_of("console.txt") == "linel");

    HANDLE closed = closed_handle();
    wrote = 99;
    CHECK_EQ(g_WriteConsoleAFunc(closed, text, 4, &wrote, nullptr), 0);
    CHECK_EQ(wrote, 0u);
    CHECK_EQ(g_WriteConsoleAFunc(closed, text, 4, nullptr, nullptr), 0);
}

NOCTURNE_TEST(the_console_has_no_modes_handlers_or_input) {
    Wired wired;
    DWORD mode = 99;
    CHECK(g_GetConsoleModeFunc((HANDLE)(intptr_t)1, &mode) != 0);
    CHECK_EQ(mode, 0u);
    CHECK(g_GetConsoleModeFunc((HANDLE)(intptr_t)1, nullptr) != 0);
    CHECK(g_SetConsoleModeFunc((HANDLE)(intptr_t)1, 3) != 0);
    CHECK(g_SetConsoleCtrlHandlerFunc(nullptr, 1) != 0);
    DWORD events = 99;
    CHECK_EQ(g_ReadConsoleInputAFunc((HANDLE)(intptr_t)0, nullptr, 1, &events), 0);
    CHECK_EQ(events, 0u);
    CHECK_EQ(g_ReadConsoleInputAFunc((HANDLE)(intptr_t)0, nullptr, 1, nullptr), 0);
}

// -----------------------------------------------------------------------------
// Threads, and waiting with a timeout on each kind of object.
// -----------------------------------------------------------------------------

namespace {
HANDLE g_release_event = nullptr;
DWORD wait_for_release(LPVOID) {
    g_WaitForSingleObjectFunc(g_release_event, kInfinite);
    return 3;
}
} // namespace

NOCTURNE_TEST(a_running_thread_times_out_and_a_finished_one_does_not) {
    Wired wired;
    g_release_event = g_CreateEventAFunc(nullptr, 1, 0, nullptr);
    // The id is optional.
    HANDLE thread = g_CreateThreadFunc(nullptr, 0, wait_for_release, nullptr, 0, nullptr);
    CHECK(thread != nullptr);
    CHECK_EQ(g_WaitForSingleObjectFunc(thread, 0), kWaitTimeout);
    g_SetEventFunc(g_release_event);
    CHECK_EQ(g_WaitForSingleObjectFunc(thread, kInfinite), kWaitObject0);
    // Waiting again, for any time, finds it finished.
    CHECK_EQ(g_WaitForSingleObjectFunc(thread, kInfinite), kWaitObject0);
    CHECK_EQ(g_WaitForSingleObjectFunc(thread, 0), kWaitObject0);
    // Joined already, so closing has nothing to let go of.
    CHECK(g_CloseHandleFunc(thread) != 0);
    g_CloseHandleFunc(g_release_event);
}

NOCTURNE_TEST(closing_a_running_thread_lets_it_run_on) {
    Wired wired;
    g_release_event = g_CreateEventAFunc(nullptr, 1, 0, nullptr);
    HANDLE thread = g_CreateThreadFunc(nullptr, 0, wait_for_release, nullptr, 0, nullptr);
    CHECK(g_CloseHandleFunc(thread) != 0);
    g_SetEventFunc(g_release_event);
    // The detached thread still reads the event; give it time before the event goes.
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    g_CloseHandleFunc(g_release_event);
}

NOCTURNE_TEST(a_thread_has_one_id_and_other_threads_have_others) {
    Wired wired;
    const DWORD mine = g_GetCurrentThreadIdFunc();
    CHECK_EQ(g_GetCurrentThreadIdFunc(), mine);
    DWORD theirs = mine;
    std::thread other([&] { theirs = g_GetCurrentThreadIdFunc(); });
    other.join();
    CHECK(theirs != mine);
    // The pseudo-handle for "this thread", as Win32 spells it.
    CHECK(g_GetCurrentThreadFunc() == (HANDLE)(intptr_t)-2);
    CHECK(g_SetThreadPriorityFunc(g_GetCurrentThreadFunc(), 2) != 0);
    // Ending a thread early is a no-op: the game never does it.
    g_ExitThreadFunc(0);
}

NOCTURNE_TEST(a_mutex_held_elsewhere_times_out_a_timed_wait) {
    Wired wired;
    // Owned from the start by the thread that made it.
    HANDLE mutex = g_CreateMutexAFunc(nullptr, 1, nullptr);
    DWORD while_held = 0, once_free = 1;
    std::thread other([&] { while_held = g_WaitForSingleObjectFunc(mutex, 20); });
    other.join();
    g_ReleaseMutexFunc(mutex);
    std::thread later([&] {
        once_free = g_WaitForSingleObjectFunc(mutex, 1000);
        g_ReleaseMutexFunc(mutex);
    });
    later.join();
    CHECK_EQ(while_held, kWaitTimeout);
    CHECK_EQ(once_free, kWaitObject0);
    g_CloseHandleFunc(mutex);
}

NOCTURNE_TEST(each_call_refuses_a_handle_of_the_wrong_kind) {
    Pods pods;
    HANDLE event = g_CreateEventAFunc(nullptr, 1, 0, nullptr);
    HANDLE mutex = g_CreateMutexAFunc(nullptr, 0, nullptr);
    WIN32_FIND_DATAA data;
    HANDLE search = g_FindFirstFileAFunc("pods\\*.pod", &data);
    CHECK_EQ(g_ReleaseMutexFunc(event), 0);
    CHECK_EQ(g_ReleaseMutexFunc(kInvalidHandle), 0);
    CHECK_EQ(g_SetEventFunc(mutex), 0);
    CHECK_EQ(g_SetEventFunc(kInvalidHandle), 0);
    // A search is a handle, but nothing to wait on; a mutex is no search.
    CHECK_EQ(g_WaitForSingleObjectFunc(search, 0), 0xFFFFFFFFu);
    CHECK_EQ(g_FindNextFileAFunc(mutex, &data), 0);
    CHECK_EQ(g_FindCloseFunc(mutex), 0);
    CHECK_EQ(g_FreeLibraryFunc((HMODULE)mutex), 0);
    CHECK(g_CloseHandleFunc(search) != 0);
    CHECK(g_CloseHandleFunc(mutex) != 0);
    CHECK(g_CloseHandleFunc(event) != 0);
}

NOCTURNE_TEST(closing_something_that_is_no_handle_at_all_fails) {
    Wired wired;
    // An object at a real address whose tag is none of the kinds.
    static int not_a_handle[16] = {0x12345678};
    CHECK_EQ(g_CloseHandleFunc((HANDLE)not_a_handle), 0);
    CHECK_EQ(g_CloseHandleFunc(nullptr), 0);
    CHECK_EQ(g_CloseHandleFunc(kInvalidHandle), 0);
}

// -----------------------------------------------------------------------------
// Running out of memory. Each handle and buffer the shims allocate comes back
// as nothing, with ERROR_NOT_ENOUGH_MEMORY, rather than as a crash.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(without_memory_no_handle_is_made_and_the_reason_is_given) {
    Wired wired;
    const DWORD kNotEnoughMemory = 8;
    HANDLE thread, mutex, event;
    LPVOID pages;
    LPSTR environment;
    {
        RefusingAllocation refusing;
        thread = g_CreateThreadFunc(nullptr, 0, test_thread_body, nullptr, 0, nullptr);
        mutex = g_CreateMutexAFunc(nullptr, 0, nullptr);
        event = g_CreateEventAFunc(nullptr, 0, 0, nullptr);
        pages = g_VirtualAllocFunc(nullptr, 4096, 0x1000, 0x04);
        environment = g_GetEnvironmentStringsFunc();
    }
    CHECK(thread == nullptr);
    CHECK(mutex == nullptr);
    CHECK(event == nullptr);
    CHECK(pages == nullptr);
    CHECK(environment == nullptr);
    CHECK_EQ(g_GetLastErrorFunc(), kNotEnoughMemory);
}

// A critical section that could not get its lock is one that does nothing.
NOCTURNE_TEST(a_critical_section_without_memory_does_nothing_harmful) {
    Wired wired;
    _RTL_CRITICAL_SECTION section;
    {
        RefusingAllocation refusing;
        g_InitializeCriticalSectionFunc(&section);
    }
    CHECK(section.LockSemaphore == nullptr);
    g_EnterCriticalSectionFunc(&section);
    g_LeaveCriticalSectionFunc(&section);
    g_DeleteCriticalSectionFunc(&section);
    CHECK(section.LockSemaphore == nullptr);
}

// -----------------------------------------------------------------------------
// The process.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(the_process_is_described_but_no_other_can_be_started) {
    Wired wired;
    CHECK_EQ(g_CreateProcessAFunc("game.exe", nullptr, nullptr, nullptr, 0, 0, nullptr, nullptr,
                                  nullptr, nullptr),
             0);
    CHECK_EQ(g_GetLastErrorFunc(), 5u);                 // ERROR_ACCESS_DENIED
    CHECK(g_GetCurrentProcessFunc() == kInvalidHandle); // the pseudo-handle is -1
#if defined(_WIN32)
    CHECK_EQ(g_GetCurrentProcessIdFunc(), (DWORD)_getpid());
#else
    CHECK_EQ(g_GetCurrentProcessIdFunc(), (DWORD)getpid());
#endif
    DWORD code = 99;
    CHECK(g_GetExitCodeProcessFunc(g_GetCurrentProcessFunc(), &code) != 0);
    CHECK_EQ(code, 0u);
    CHECK(g_GetExitCodeProcessFunc(g_GetCurrentProcessFunc(), nullptr) != 0);
}

NOCTURNE_TEST(a_duplicated_file_handle_is_a_second_handle_to_the_same_file) {
    Tree tree;
    HANDLE original = open_file("afile.txt", kGenericRead, kOpenExisting);
    HANDLE copy = nullptr;
    CHECK(g_DuplicateHandleFunc(g_GetCurrentProcessFunc(), original, g_GetCurrentProcessFunc(),
                                &copy, 0, 0, 2) != 0);
    CHECK(copy != original);
    g_CloseHandleFunc(original);
    CHECK(read_all(copy, 16) == "x");
    g_CloseHandleFunc(copy);
    // Where the copy goes is optional; a closed handle has nothing to copy.
    HANDLE again = open_file("afile.txt", kGenericRead, kOpenExisting);
    CHECK(g_DuplicateHandleFunc(nullptr, again, nullptr, nullptr, 0, 0, 0) != 0);
    g_CloseHandleFunc(again);
    CHECK_EQ(g_DuplicateHandleFunc(nullptr, closed_handle(), nullptr, &copy, 0, 0, 0), 0);
}

#if !defined(_WIN32)
NOCTURNE_TEST(exiting_the_process_ends_it_with_the_code_given) {
    Wired wired;
    fflush(stdout);
    const pid_t child = fork();
    if (child == 0)
        g_ExitProcessFunc(7);
    int status = 0;
    waitpid(child, &status, 0);
    CHECK(WIFEXITED(status));
    CHECK_EQ(WEXITSTATUS(status), 7);
}
#endif

// -----------------------------------------------------------------------------
// Memory, as Win32 describes it.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(querying_memory_describes_a_committed_read_write_page) {
    Wired wired;
    _MEMORY_BASIC_INFORMATION info;
    char somewhere[16];
    CHECK_EQ(g_VirtualQueryFunc(somewhere, &info, sizeof(info)), (SIZE_T)sizeof(info));
    CHECK(info.BaseAddress == (PVOID)somewhere);
    CHECK_EQ(info.RegionSize, (SIZE_T)4096);
    CHECK_EQ(info.State, 0x1000u);
    CHECK_EQ(info.Protect, 0x04u);
    // Nowhere to put it, or not room enough, is nothing.
    CHECK_EQ(g_VirtualQueryFunc(somewhere, nullptr, sizeof(info)), (SIZE_T)0);
    CHECK_EQ(g_VirtualQueryFunc(somewhere, &info, sizeof(info) - 1), (SIZE_T)0);
    CHECK_EQ(g_VirtualFreeFunc(nullptr, 0, 0x8000), 0);
    // Reserving and committing in one call is committing.
    void *pages = g_VirtualAllocFunc(nullptr, 4096, 0x2000 | 0x1000, 0x04);
    CHECK(pages != nullptr);
    g_VirtualFreeFunc(pages, 0, 0x8000);
}

NOCTURNE_TEST(global_memory_is_zeroed_fixed_memory) {
    Wired wired;
    unsigned char *block = (unsigned char *)g_GlobalAllocFunc(0, 32);
    CHECK(block != nullptr);
    for (int i = 0; i < 32; ++i)
        CHECK_EQ(block[i], (unsigned char)0);
    // Fixed memory: locking it is the address itself.
    CHECK(g_GlobalLockFunc(block) == block);
    CHECK(g_GlobalUnlockFunc(block) != 0);
    CHECK(g_GlobalFreeFunc(block) == nullptr);
    // Nothing asked for is still something to free.
    void *empty = g_GlobalAllocFunc(0, 0);
    CHECK(empty != nullptr);
    g_GlobalFreeFunc(empty);
}

NOCTURNE_TEST(the_memory_status_is_filled_in_and_never_negative) {
    Wired wired;
    g_GlobalMemoryStatusFunc(nullptr); // nowhere to write is not a crash
    _MEMORYSTATUS status;
    std::memset(&status, 0xff, sizeof(status));
    g_GlobalMemoryStatusFunc(&status);
    CHECK_EQ(status.dwLength, (DWORD)sizeof(_MEMORYSTATUS));
    CHECK(status.dwTotalPhys > 0);
    CHECK(status.dwTotalPhys <= (SIZE_T)0x7FFFFFFF);
    CHECK(status.dwAvailPageFile <= (SIZE_T)0x7FFFFFFF);
}

// -----------------------------------------------------------------------------
// Modules and the program's own path.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(the_program_has_no_module_handle_and_nothing_else_exports) {
    Wired wired;
    CHECK(g_GetModuleHandleAFunc(nullptr) == nullptr);
    static int not_a_module;
    CHECK(g_GetProcAddressFunc((HMODULE)&not_a_module, "ProcOne") == nullptr);
    CHECK_EQ(g_GetLastErrorFunc(), 127u);
}

NOCTURNE_TEST(the_programs_path_is_reported_narrow_and_wide) {
    Wired wired;
    char narrow[4096];
    const DWORD length = g_GetModuleFileNameAFunc(nullptr, narrow, sizeof(narrow));
    CHECK(length > 0);
    CHECK_EQ((size_t)length, strlen(narrow));
    std::error_code ec;
    CHECK(fs::exists(fs::path(narrow), ec));

    wchar_t wide[4096];
    CHECK_EQ(g_GetModuleFileNameWFunc(nullptr, wide, 4096), length);
    for (DWORD i = 0; i <= length; ++i)
        CHECK_EQ((int)wide[i], (int)(unsigned char)narrow[i]);
}

NOCTURNE_TEST(the_programs_path_is_cut_to_the_buffer_and_terminated) {
    Wired wired;
    char narrow[5];
    CHECK_EQ(g_GetModuleFileNameAFunc(nullptr, narrow, sizeof(narrow)), 4u);
    CHECK_EQ(narrow[4], '\0');
    wchar_t wide[5];
    CHECK_EQ(g_GetModuleFileNameWFunc(nullptr, wide, 5), 4u);
    CHECK_EQ((int)wide[4], 0);
    // No room at all writes nothing.
    char untouched = '\x7f';
    wchar_t untouched_wide = L'\x7f';
    CHECK_EQ(g_GetModuleFileNameAFunc(nullptr, &untouched, 0), 0u);
    CHECK_EQ(g_GetModuleFileNameWFunc(nullptr, &untouched_wide, 0), 0u);
    CHECK_EQ(untouched, '\x7f');
    CHECK_EQ((int)untouched_wide, 0x7f);
}

// -----------------------------------------------------------------------------
// The clock, the calendar and the time zone.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(sleeping_waits_about_as_long_as_asked) {
    Wired wired;
    const auto started = std::chrono::steady_clock::now();
    g_SleepFunc(30);
    CHECK(std::chrono::steady_clock::now() - started >= std::chrono::milliseconds(25));
}

NOCTURNE_TEST(the_local_time_is_now) {
    Wired wired;
    SYSTEMTIME now;
    g_GetLocalTimeFunc(&now);
    const struct tm local = local_parts(time(nullptr));
    CHECK_EQ((int)now.wYear, local.tm_year + 1900);
    CHECK_EQ((int)now.wMonth, local.tm_mon + 1);
    CHECK(now.wDayOfWeek <= 6);
    CHECK_EQ((int)now.wMilliseconds, 0);
}

NOCTURNE_TEST(the_time_zone_bias_is_minutes_to_add_to_local_time_for_utc) {
    Wired wired;
    _TIME_ZONE_INFORMATION zone;
    CHECK_EQ(g_GetTimeZoneInformationFunc(&zone), 0u); // TIME_ZONE_ID_UNKNOWN
    // A local FILETIME plus the bias is the UTC one. Both are taken now: the
    // bias is today's, daylight saving included.
    const struct tm parts = utc_parts(time(nullptr));
    SYSTEMTIME moment = {};
    moment.wYear = (WORD)(parts.tm_year + 1900);
    moment.wMonth = (WORD)(parts.tm_mon + 1);
    moment.wDay = (WORD)parts.tm_mday;
    moment.wHour = (WORD)parts.tm_hour;
    FILETIME utc, local;
    g_SystemTimeToFileTimeFunc(&moment, &utc);
    g_FileTimeToLocalFileTimeFunc(&utc, &local);
    const long long difference = ((long long)local.dwHighDateTime << 32 | local.dwLowDateTime) -
                                 ((long long)utc.dwHighDateTime << 32 | utc.dwLowDateTime);
    CHECK_EQ((long long)zone.Bias, -difference / 600000000LL);
}

NOCTURNE_TEST(the_version_is_windows_2000) {
    Wired wired;
    CHECK_EQ(g_GetVersionFunc(), 0x05000000u);
}

NOCTURNE_TEST(a_system_time_and_a_filetime_convert_both_ways) {
    Wired wired;
    SYSTEMTIME moment = {};
    moment.wYear = 2001;
    moment.wMonth = 2;
    moment.wDay = 3;
    moment.wHour = 4;
    moment.wMinute = 5;
    moment.wSecond = 6;
    moment.wMilliseconds = 789;
    FILETIME file;
    CHECK(g_SystemTimeToFileTimeFunc(&moment, &file) != 0);
    SYSTEMTIME back;
    CHECK(g_FileTimeToSystemTimeFunc(&file, &back) != 0);
    CHECK_EQ((int)back.wYear, 2001);
    CHECK_EQ((int)back.wMonth, 2);
    CHECK_EQ((int)back.wDay, 3);
    CHECK_EQ((int)back.wDayOfWeek, 6); // a Saturday
    CHECK_EQ((int)back.wHour, 4);
    CHECK_EQ((int)back.wMinute, 5);
    CHECK_EQ((int)back.wSecond, 6);
    CHECK_EQ((int)back.wMilliseconds, 789);

    // The Unix epoch is this many 100-nanosecond steps after 1601.
    SYSTEMTIME epoch = {};
    epoch.wYear = 1970;
    epoch.wMonth = 1;
    epoch.wDay = 1;
    g_SystemTimeToFileTimeFunc(&epoch, &file);
    CHECK_EQ(((unsigned long long)file.dwHighDateTime << 32) | file.dwLowDateTime,
             116444736000000000ull);
}

NOCTURNE_TEST(local_and_utc_filetimes_convert_both_ways) {
    Wired wired;
    FILETIME utc, local, back;
    utc.dwHighDateTime = 0x01d9a000;
    utc.dwLowDateTime = 0x12345670;
    CHECK(g_FileTimeToLocalFileTimeFunc(&utc, &local) != 0);
    CHECK(g_LocalFileTimeToFileTimeFunc(&local, &back) != 0);
    CHECK_EQ(back.dwHighDateTime, utc.dwHighDateTime);
    CHECK_EQ(back.dwLowDateTime, utc.dwLowDateTime);
}

NOCTURNE_TEST(a_dos_date_and_time_and_a_filetime_convert_both_ways) {
    Wired wired;
    // 2004-05-06 07:08:10, in two-second steps: DOS cannot hold an odd second.
    const WORD date = (WORD)((24 << 9) | (5 << 5) | 6);
    const WORD time_of_day = (WORD)((7 << 11) | (8 << 5) | 5);
    FILETIME file;
    CHECK(g_DosDateTimeToFileTimeFunc(date, time_of_day, &file) != 0);
    SYSTEMTIME seen;
    g_FileTimeToSystemTimeFunc(&file, &seen);
    CHECK_EQ((int)seen.wYear, 2004);
    CHECK_EQ((int)seen.wSecond, 10);
    WORD date_back = 0, time_back = 0;
    CHECK(g_FileTimeToDosDateTimeFunc(&file, &date_back, &time_back) != 0);
    CHECK_EQ(date_back, date);
    CHECK_EQ(time_back, time_of_day);
    // Either half may be left out.
    CHECK(g_FileTimeToDosDateTimeFunc(&file, nullptr, nullptr) != 0);
}

// -----------------------------------------------------------------------------
// TLS indices out of range, and running out of them.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_tls_read_says_whether_it_failed_or_the_slot_was_empty) {
    Wired wired;
    const DWORD kInvalidParameter = 87;
    const DWORD slot = g_TlsAllocFunc();
    g_SetLastErrorFunc(5);
    CHECK(g_TlsGetValueFunc(slot) == nullptr); // empty, and that is no failure
    CHECK_EQ(g_GetLastErrorFunc(), 0u);
    CHECK(g_TlsGetValueFunc(9999) == nullptr);
    CHECK_EQ(g_GetLastErrorFunc(), kInvalidParameter);
    g_TlsFreeFunc(slot);
    CHECK(g_TlsGetValueFunc(slot) == nullptr); // freed is no slot either
    CHECK_EQ(g_GetLastErrorFunc(), kInvalidParameter);
    CHECK_EQ(g_TlsSetValueFunc(slot, nullptr), 0);
    CHECK_EQ(g_TlsSetValueFunc(9999, nullptr), 0);
    CHECK_EQ(g_TlsFreeFunc(9999), 0);
}

NOCTURNE_TEST(tls_indices_run_out_and_come_back) {
    Wired wired;
    std::vector<DWORD> taken;
    DWORD slot;
    while ((slot = g_TlsAllocFunc()) != 0xFFFFFFFFu)
        taken.push_back(slot);
    CHECK(!taken.empty());
    CHECK(g_TlsFreeFunc(taken.back()) != 0);
    CHECK_EQ(g_TlsAllocFunc(), taken.back());
    for (DWORD each : taken)
        g_TlsFreeFunc(each);
}

// -----------------------------------------------------------------------------
// Errors that are never raised here, and the program's environment.
// -----------------------------------------------------------------------------

namespace {
LONGVAL some_filter(struct _EXCEPTION_POINTERS *) {
    return 1;
}
} // namespace

NOCTURNE_TEST(the_unhandled_exception_filter_is_kept_and_handed_back) {
    Wired wired;
    LPTOP_LEVEL_EXCEPTION_FILTER before = g_SetUnhandledExceptionFilterFunc(some_filter);
    CHECK(g_SetUnhandledExceptionFilterFunc(before) == some_filter);
    CHECK_EQ(g_UnhandledExceptionFilterFunc(nullptr), 0); // EXCEPTION_CONTINUE_SEARCH
}

NOCTURNE_TEST(the_command_line_is_the_arguments_main_was_given) {
    Wired wired;
    char program[] = "nocturne.exe", flag[] = "-window";
    char *argv[] = {program, flag};
    shims_set_command_line(2, argv);
    CHECK_EQ(std::string(g_GetCommandLineAFunc()), std::string("nocturne.exe -window"));
    const LPWSTR wide = g_GetCommandLineWFunc();
    CHECK_EQ((int)wide[0], (int)'n');
    CHECK_EQ((int)wide[19], (int)'w');
    CHECK_EQ((int)wide[20], 0);
    shims_set_command_line(0, nullptr);
    CHECK_EQ(std::string(g_GetCommandLineAFunc()), std::string(""));
}

// winMain copies it into a 256-byte buffer, so it never comes back longer.
NOCTURNE_TEST(a_command_line_too_long_for_the_game_is_cut_to_fit) {
    Wired wired;
    std::string long_word(300, 'a');
    char program[] = "nocturne.exe";
    char *argv[] = {program, &long_word[0], &long_word[0]};
    shims_set_command_line(3, argv);
    CHECK_EQ(strlen(g_GetCommandLineAFunc()), (size_t)255);
    shims_set_command_line(0, nullptr);
}

NOCTURNE_TEST(environment_variables_are_set_listed_and_removed) {
    Wired wired;
    CHECK(g_SetEnvironmentVariableAFunc("NOCTURNE_K32_TEST", "narrow") != 0);
    const wchar_t wide_name[] = L"NOCTURNE_K32_WIDE";
    const wchar_t wide_value[] = L"wide";
    CHECK(g_SetEnvironmentVariableWFunc(wide_name, wide_value) != 0);

    LPSTR block = g_GetEnvironmentStringsFunc();
    bool narrow_listed = false, wide_listed = false;
    for (const char *entry = block; *entry; entry += strlen(entry) + 1) {
        narrow_listed |= std::string(entry) == "NOCTURNE_K32_TEST=narrow";
        wide_listed |= std::string(entry) == "NOCTURNE_K32_WIDE=wide";
    }
    CHECK(g_FreeEnvironmentStringsAFunc(block) != 0);
    CHECK(narrow_listed);
    CHECK(wide_listed);

    CHECK(g_SetEnvironmentVariableAFunc("NOCTURNE_K32_TEST", nullptr) != 0);
    CHECK(g_SetEnvironmentVariableWFunc(wide_name, nullptr) != 0);
    CHECK(getenv("NOCTURNE_K32_TEST") == nullptr);
    CHECK(getenv("NOCTURNE_K32_WIDE") == nullptr);
}

// Wide names and values are narrowed into fixed buffers, so overlong ones are cut.
NOCTURNE_TEST(an_overlong_wide_variable_is_cut_to_fit) {
    Wired wired;
    std::wstring name(300, L'N');
    std::wstring value(1100, L'v');
    CHECK(g_SetEnvironmentVariableWFunc(name.c_str(), value.c_str()) != 0);
    const char *seen = getenv(std::string(255, 'N').c_str());
    CHECK(seen != nullptr);
    CHECK_EQ(seen ? strlen(seen) : 0u, (size_t)1023);
    g_SetEnvironmentVariableWFunc(name.c_str(), nullptr);
}

NOCTURNE_TEST(the_computer_name_is_the_host_name) {
    Wired wired;
    char expected[256] = "";
    gethostname(expected, sizeof(expected) - 1);
    char name[256];
    DWORD size = sizeof(name);
    CHECK(g_GetComputerNameAFunc(name, &size) != 0);
    CHECK_EQ(std::string(name), std::string(expected));
    CHECK_EQ((size_t)size, strlen(expected));

    // A buffer too small is told how much it needs, and gets nothing.
    char tiny[1] = {'\x7f'};
    DWORD tiny_size = 1;
    CHECK_EQ(g_GetComputerNameAFunc(tiny, &tiny_size), 0);
    CHECK_EQ(g_GetLastErrorFunc(), 111u); // ERROR_BUFFER_OVERFLOW
    CHECK_EQ((size_t)tiny_size, strlen(expected) + 1);
    CHECK_EQ(tiny[0], '\x7f');
}

// -----------------------------------------------------------------------------
// Code pages and string conversion: Windows-1252, a byte to a character.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(the_code_pages_are_western_european_single_byte) {
    Wired wired;
    CHECK_EQ(g_GetACPFunc(), 1252u);
    CHECK_EQ(g_GetOEMCPFunc(), 437u);
    _cpinfo info;
    CHECK(g_GetCPInfoFunc(1252, &info) != 0);
    CHECK_EQ(info.MaxCharSize, 1u);
    CHECK_EQ(info.DefaultChar[0], (BYTE)'?');
    CHECK_EQ(info.LeadByte[0], (BYTE)0);
    CHECK_EQ(g_GetCPInfoFunc(1252, nullptr), 0);
}

NOCTURNE_TEST(narrow_text_widens_a_byte_at_a_character) {
    Wired wired;
    const char text[] = "caf\xe9";
    // With -1 the terminator is included, and asking with no room is asking the size.
    CHECK_EQ(g_MultiByteToWideCharFunc(1252, 0, text, -1, nullptr, 0), 5);
    wchar_t wide[8] = {};
    CHECK_EQ(g_MultiByteToWideCharFunc(1252, 0, text, -1, wide, 8), 5);
    CHECK_EQ((int)wide[3], 0xe9);
    CHECK_EQ((int)wide[4], 0);
    // An explicit length, and a buffer shorter than the text.
    CHECK_EQ(g_MultiByteToWideCharFunc(1252, 0, text, 2, wide, 8), 2);
    CHECK_EQ(g_MultiByteToWideCharFunc(1252, 0, text, -1, wide, 3), 3);
}

NOCTURNE_TEST(wide_text_narrows_and_marks_what_did_not_fit) {
    Wired wired;
    const wchar_t text[] = {L'o', L'k', (wchar_t)0x263a, 0};
    CHECK_EQ(g_WideCharToMultiByteFunc(1252, 0, text, -1, nullptr, 0, nullptr, nullptr), 4);
    char narrow[8] = {};
    BOOL used_default = 1;
    CHECK_EQ(g_WideCharToMultiByteFunc(1252, 0, text, 2, narrow, 8, nullptr, &used_default), 2);
    CHECK_EQ(used_default, 0);
    CHECK_EQ(g_WideCharToMultiByteFunc(1252, 0, text, -1, narrow, 8, nullptr, &used_default), 4);
    CHECK_EQ(std::string(narrow), std::string("ok?"));
    CHECK_EQ(used_default, 1);
    // The caller's own stand-in, and a buffer shorter than the text.
    const char star = '*';
    CHECK_EQ(g_WideCharToMultiByteFunc(1252, 0, text, -1, narrow, 8, &star, nullptr), 4);
    CHECK_EQ(narrow[2], '*');
    CHECK_EQ(g_WideCharToMultiByteFunc(1252, 0, text, -1, narrow, 1, nullptr, nullptr), 1);
}

NOCTURNE_TEST_MAIN()
