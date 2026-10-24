// =============================================================================
// CRASH REPORT — implementation
// =============================================================================
//
// See crash_report.h.
//
// Includes <windows.h> and nothing from include/. That is load-bearing, the
// same as in winsock_win32.c: system/*.h declare DWORD, HANDLE and friends with
// the decompiled binary's layouts, and both sets in one TU would collide.
//
// The handler runs in a process that has just faulted, possibly with a corrupt
// heap. So it allocates nothing: static buffers, snprintf into them, and
// CreateFile/WriteFile.

#include "core/crash_report.h"

#if defined(_WIN32)

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <cstdarg>
#include <cstdio>

// The desktop has a message box and an unhandled-exception filter of its own;
// a packaged app has neither to rely on.
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#define NOCTURNE_CRASH_DESKTOP 1
#endif

namespace {

const char *s_version = "";
char s_dir[MAX_PATH];

char s_report[16384];
size_t s_used = 0;

void append(const char *fmt, ...) {
    if (s_used >= sizeof(s_report) - 1) return;
    va_list args;
    va_start(args, fmt);
    const int n = vsnprintf(s_report + s_used, sizeof(s_report) - s_used, fmt, args);
    va_end(args);
    if (n > 0) s_used += (size_t)n;
    if (s_used > sizeof(s_report) - 1) s_used = sizeof(s_report) - 1;
}

const char kUnknown[] = "unknown exception";

const char *describe(DWORD code) {
    switch (code) {
    case EXCEPTION_ACCESS_VIOLATION:      return "access violation";
    case EXCEPTION_IN_PAGE_ERROR:         return "in-page error";
    case EXCEPTION_ILLEGAL_INSTRUCTION:   return "illegal instruction";
    case EXCEPTION_PRIV_INSTRUCTION:      return "privileged instruction";
    case EXCEPTION_STACK_OVERFLOW:        return "stack overflow";
    case EXCEPTION_INT_DIVIDE_BY_ZERO:    return "integer divide by zero";
    case EXCEPTION_DATATYPE_MISALIGNMENT: return "misaligned access";
    case EXCEPTION_ARRAY_BOUNDS_EXCEEDED: return "array bounds exceeded";
    case EXCEPTION_FLT_INVALID_OPERATION: return "floating-point invalid operation";
    case EXCEPTION_FLT_DIVIDE_BY_ZERO:    return "floating-point divide by zero";
    default:                              return kUnknown;
    }
}

// "nocturne.exe+0x1a2b3c", or the bare address outside every module. The image
// base is the module's handle.
void append_location(DWORD64 address) {
    void *base = nullptr;
    if (RtlPcToFileHeader((PVOID)(ULONG_PTR)address, &base) != nullptr) {
        char path[MAX_PATH];
        const DWORD length = GetModuleFileNameA((HMODULE)base, path, sizeof(path));
        const char *name = path;
        for (DWORD i = 0; i < length; i++) {
            if (path[i] == '\\' || path[i] == '/') name = path + i + 1;
        }
        append("%s+0x%llx", length != 0 ? name : "?",
               (unsigned long long)(address - (DWORD64)(ULONG_PTR)base));
    } else {
        append("0x%016llx", (unsigned long long)address);
    }
}

// Walks the x64 unwind tables from the faulting context. Functions without an
// entry are leaves, whose return address is still on top of the stack — read
// only while that is inside this thread's stack, which is the thread that
// faulted.
void append_stack(const CONTEXT *fault) {
#if defined(_M_X64) || defined(__x86_64__)
    const NT_TIB *tib = (const NT_TIB *)NtCurrentTeb();
    const DWORD64 stack_low = (DWORD64)(ULONG_PTR)tib->StackLimit;
    const DWORD64 stack_high = (DWORD64)(ULONG_PTR)tib->StackBase;
    CONTEXT context = *fault;
    for (int frame = 0; frame < 48 && context.Rip != 0; frame++) {
        append("  #%-2d ", frame);
        append_location(context.Rip);
        append("\n");

        DWORD64 image_base = 0;
        PRUNTIME_FUNCTION entry = RtlLookupFunctionEntry(context.Rip, &image_base, nullptr);
        if (entry == nullptr) {
            if (context.Rsp < stack_low || stack_high < context.Rsp + sizeof(DWORD64)) break;
            context.Rip = *(const DWORD64 *)(ULONG_PTR)context.Rsp;
            context.Rsp += sizeof(DWORD64);
            continue;
        }
        void *handler_data = nullptr;
        DWORD64 establisher = 0;
        RtlVirtualUnwind(UNW_FLAG_NHANDLER, image_base, context.Rip, entry, &context,
                         &handler_data, &establisher, nullptr);
    }
#else
    (void)fault;
    append("  (no unwinder for this architecture)\n");
#endif
}

// The directory set for the run; else on the desktop %LOCALAPPDATA%\
// NocturneDecomp\, and the temp directory. Empty on failure.
bool report_path(char *out, size_t size) {
    if (s_dir[0] != '\0') {
        snprintf(out, size, "%s\\nocturne_crash.txt", s_dir);
        return true;
    }
    char base[MAX_PATH];
    DWORD length;
#if defined(NOCTURNE_CRASH_DESKTOP)
    length = GetEnvironmentVariableA("LOCALAPPDATA", base, sizeof(base));
    if (length != 0 && length < sizeof(base)) {
        char dir[MAX_PATH];
        snprintf(dir, sizeof(dir), "%s\\NocturneDecomp", base);
        CreateDirectoryA(dir, nullptr);
        snprintf(out, size, "%s\\nocturne_crash.txt", dir);
        return true;
    }
#endif
    length = GetTempPathA(sizeof(base), base);
    if (length != 0 && length < sizeof(base)) {
        snprintf(out, size, "%snocturne_crash.txt", base);
        return true;
    }
    return false;
}

HANDLE create_report_file(const char *path) {
#if defined(NOCTURNE_CRASH_DESKTOP)
    return CreateFileA(path, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL,
                       nullptr);
#else
    // A packaged app has only the wide CreateFile2.
    static wchar_t wide[MAX_PATH];
    if (MultiByteToWideChar(CP_ACP, 0, path, -1, wide, MAX_PATH) == 0) {
        return INVALID_HANDLE_VALUE;
    }
    return CreateFile2(wide, GENERIC_WRITE, 0, CREATE_ALWAYS, nullptr);
#endif
}

bool write_file(const char *path) {
    HANDLE file = create_report_file(path);
    if (file == INVALID_HANDLE_VALUE) return false;
    DWORD written = 0;
    const BOOL ok = WriteFile(file, s_report, (DWORD)s_used, &written, nullptr);
    CloseHandle(file);
    return ok && written == s_used;
}

// Writes the report for `info` to stderr and the file, and on the desktop says
// where it went.
void report(EXCEPTION_POINTERS *info) {
    const EXCEPTION_RECORD *record = info->ExceptionRecord;
    SYSTEMTIME now;
    GetLocalTime(&now);

    append("Nocturne crash report\n");
    append("%s\n", s_version);
    append("time: %04u-%02u-%02u %02u:%02u:%02u\n", now.wYear, now.wMonth, now.wDay,
           now.wHour, now.wMinute, now.wSecond);
    char exe[MAX_PATH];
    if (GetModuleFileNameA(nullptr, exe, sizeof(exe)) != 0) append("exe: %s\n", exe);
    append("thread: %lu\n\n", GetCurrentThreadId());

    append("exception: 0x%08lx (%s)\n", record->ExceptionCode, describe(record->ExceptionCode));
    append("at: ");
    append_location((DWORD64)(ULONG_PTR)record->ExceptionAddress);
    append("\n");
    if ((record->ExceptionCode == EXCEPTION_ACCESS_VIOLATION ||
         record->ExceptionCode == EXCEPTION_IN_PAGE_ERROR) &&
        record->NumberParameters >= 2) {
        const ULONG_PTR kind = record->ExceptionInformation[0];
        append("%s address 0x%016llx\n",
               kind == 0 ? "reading" : kind == 1 ? "writing" : "executing",
               (unsigned long long)record->ExceptionInformation[1]);
    }

    append("\nstack:\n");
    append_stack(info->ContextRecord);

    fwrite(s_report, 1, s_used, stderr);
    fflush(stderr);

    char path[MAX_PATH];
    const bool saved = report_path(path, sizeof(path)) && write_file(path);

#if defined(NOCTURNE_CRASH_DESKTOP)
    char message[1024];
    if (saved) {
        snprintf(message, sizeof(message),
                 "Nocturne crashed (%s).\n\nA crash report was saved to:\n%s\n\n"
                 "Please attach it to your bug report.",
                 describe(record->ExceptionCode), path);
    } else {
        snprintf(message, sizeof(message),
                 "Nocturne crashed (%s) and could not save a crash report.",
                 describe(record->ExceptionCode));
    }
    MessageBoxA(nullptr, message, "Nocturne", MB_OK | MB_ICONERROR | MB_TOPMOST | MB_SETFOREGROUND);
#else
    if (saved) {
        fprintf(stderr, "crash report saved to %s\n", path);
        fflush(stderr);
    }
#endif
}

// A second fault inside the handler must not recurse into it.
bool first_entry() {
    static volatile LONG entered = 0;
    return InterlockedExchange(&entered, 1) == 0;
}

#if defined(NOCTURNE_CRASH_DESKTOP)

LONG WINAPI on_unhandled_exception(EXCEPTION_POINTERS *info) {
    if (first_entry()) report(info);
    // Ends the process with the exception code as its exit code, as before.
    return EXCEPTION_EXECUTE_HANDLER;
}

void install() { SetUnhandledExceptionFilter(on_unhandled_exception); }

#else

// A vectored handler sees every exception first, the ones code expects to
// catch included — a C++ throw is one. Only those describe() names end a
// process, and only they are reported; the search then goes on, so the process
// ends as it would have.
LONG CALLBACK on_vectored_exception(EXCEPTION_POINTERS *info) {
    const DWORD code = info->ExceptionRecord->ExceptionCode;
    if (describe(code) != kUnknown && first_entry()) report(info);
    return EXCEPTION_CONTINUE_SEARCH;
}

// AddVectoredExceptionHandler is exported to packaged apps but not declared
// for them, so it is found at run time, in the module that holds GetLastError:
// kernelbase, or kernel32 before it, export both. Found that way because not
// every SDK declares GetModuleHandle for packaged apps either.
void install() {
    typedef PVOID(WINAPI * AddHandler)(ULONG, PVECTORED_EXCEPTION_HANDLER);
    void *base = nullptr;
    if (RtlPcToFileHeader((PVOID)&GetLastError, &base) == nullptr) return;
    AddHandler add =
        (AddHandler)(void *)GetProcAddress((HMODULE)base, "AddVectoredExceptionHandler");
    if (add != nullptr) add(1, on_vectored_exception);
}

#endif

}  // namespace

extern "C" void nocturne_install_crash_handler(const char *version) {
    s_version = version != nullptr ? version : "";
    install();
}

extern "C" void nocturne_crash_report_set_dir(const char *dir) {
    snprintf(s_dir, sizeof(s_dir), "%s", dir != nullptr ? dir : "");
}

#else

extern "C" void nocturne_install_crash_handler(const char *version) { (void)version; }
extern "C" void nocturne_crash_report_set_dir(const char *dir) { (void)dir; }

#endif
