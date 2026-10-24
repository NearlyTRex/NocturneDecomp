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

#include "nocturne_test.h"

#include "system/kernel32.h"
#include "globals/globals_610000.h"

#include <atomic>
#include <chrono>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>
#include <thread>
#include <vector>

#include "win32/shim_init.h"    // shims_init_kernel32 — C++ linkage, as declared

extern "C" void *nocturne_test_proc_one(void);

namespace {

namespace fs = std::filesystem;

// Wires the entry points once, as the program does at startup.
struct Wired {
    Wired() {
        static bool done = false;
        if (!done) { shims_init_kernel32(); done = true; }
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
        std::ofstream(( root / "afile.txt").string().c_str()) << "x";
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

}  // namespace

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
    CHECK_EQ(g_GetLastErrorFunc(), 183u);   // ERROR_ALREADY_EXISTS
}

NOCTURNE_TEST(deleting_a_file_reports_whether_it_deleted_one) {
    Tree tree;
    CHECK(g_DeleteFileAFunc("afile.txt") != 0);
    std::error_code ec;
    CHECK(!fs::exists(fs::path("afile.txt"), ec));

    CHECK_EQ(g_DeleteFileAFunc("afile.txt"), 0);
    CHECK_EQ(g_GetLastErrorFunc(), 2u);     // ERROR_FILE_NOT_FOUND
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
    char tiny[2] = { '\x7f', '\x7f' };
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
    g_EnterCriticalSectionFunc(&section);   // would deadlock if not recursive
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
    CHECK_EQ(got_in.load(), 0);     // still held here
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
        if (g_WaitForSingleObjectFunc(event, kInfinite) == kWaitObject0) woke = 1;
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
}  // namespace

NOCTURNE_TEST(a_thread_runs_its_body_and_can_be_waited_for) {
    Wired wired;
    g_thread_ran = 0;
    DWORD id = 0;
    HANDLE thread = g_CreateThreadFunc(nullptr, 0, test_thread_body,
                                       (LPVOID)(intptr_t)42, 0, &id);
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
    CHECK_EQ(g_TlsFreeFunc(slot), 0);       // freeing twice is a failure
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
    const double seconds =
        (double)(second.QuadPart - first.QuadPart) / (double)frequency.QuadPart;
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
    unsigned char *memory =
        (unsigned char *)g_VirtualAllocFunc(nullptr, 8192, kCommit, kReadWrite);
    CHECK(memory != nullptr);
    CHECK_EQ((uintptr_t)memory % 4096u, (uintptr_t)0);
    for (int i = 0; i < 8192; ++i) CHECK_EQ(memory[i], (unsigned char)0);
    memory[0] = 1;   // writable
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
    CHECK_EQ(g_GetLastErrorFunc(), 126u);       // ERROR_MOD_NOT_FOUND
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
    CHECK_EQ(g_GetLastErrorFunc(), 127u);       // ERROR_PROC_NOT_FOUND

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

}  // namespace

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

}  // namespace

NOCTURNE_TEST(a_file_reads_back_byte_for_byte) {
    Tree tree;
    const std::string written("pod\r\n\x1a" "after\0end", 15);
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
    CHECK_EQ(g_WaitForSingleObjectFunc(handle, 0), 0xFFFFFFFFu);  // WAIT_FAILED
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

NOCTURNE_TEST_MAIN()
