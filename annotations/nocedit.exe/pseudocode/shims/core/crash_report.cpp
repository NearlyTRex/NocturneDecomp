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
// The filter runs in a process that has just faulted, possibly with a corrupt
// heap. So it allocates nothing: static buffers, snprintf into them, and
// CreateFile/WriteFile.

#include "core/crash_report.h"

#if defined(_WIN32)

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <cstdarg>
#include <cstdio>

namespace {

const char *s_version = "";

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
    default:                              return "unknown exception";
    }
}

// "nocturne.exe+0x1a2b3c", or the bare address outside every module.
void append_location(DWORD64 address) {
    HMODULE module = nullptr;
    if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                               GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           (LPCSTR)(ULONG_PTR)address, &module)) {
        char path[MAX_PATH];
        const DWORD length = GetModuleFileNameA(module, path, sizeof(path));
        const char *name = path;
        for (DWORD i = 0; i < length; i++) {
            if (path[i] == '\\' || path[i] == '/') name = path + i + 1;
        }
        append("%s+0x%llx", length != 0 ? name : "?",
               (unsigned long long)(address - (DWORD64)(ULONG_PTR)module));
    } else {
        append("0x%016llx", (unsigned long long)address);
    }
}

// Walks the x64 unwind tables from the faulting context. Functions without an
// entry are leaves, whose return address is still on top of the stack.
void append_stack(const CONTEXT *fault) {
#if defined(_M_X64) || defined(__x86_64__)
    CONTEXT context = *fault;
    for (int frame = 0; frame < 48 && context.Rip != 0; frame++) {
        append("  #%-2d ", frame);
        append_location(context.Rip);
        append("\n");

        DWORD64 image_base = 0;
        PRUNTIME_FUNCTION entry = RtlLookupFunctionEntry(context.Rip, &image_base, nullptr);
        if (entry == nullptr) {
            if (IsBadReadPtr((const void *)(ULONG_PTR)context.Rsp, sizeof(DWORD64))) break;
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

// %LOCALAPPDATA%\NocturneDecomp\, else the temp directory. Empty on failure.
bool report_path(char *out, size_t size) {
    char base[MAX_PATH];
    DWORD length = GetEnvironmentVariableA("LOCALAPPDATA", base, sizeof(base));
    if (length != 0 && length < sizeof(base)) {
        char dir[MAX_PATH];
        snprintf(dir, sizeof(dir), "%s\\NocturneDecomp", base);
        CreateDirectoryA(dir, nullptr);
        snprintf(out, size, "%s\\nocturne_crash.txt", dir);
        return true;
    }
    length = GetTempPathA(sizeof(base), base);
    if (length != 0 && length < sizeof(base)) {
        snprintf(out, size, "%snocturne_crash.txt", base);
        return true;
    }
    return false;
}

bool write_file(const char *path) {
    HANDLE file = CreateFileA(path, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS,
                              FILE_ATTRIBUTE_NORMAL, nullptr);
    if (file == INVALID_HANDLE_VALUE) return false;
    DWORD written = 0;
    const BOOL ok = WriteFile(file, s_report, (DWORD)s_used, &written, nullptr);
    CloseHandle(file);
    return ok && written == s_used;
}

LONG WINAPI on_unhandled_exception(EXCEPTION_POINTERS *info) {
    // A second fault inside this filter must not recurse into it.
    static volatile LONG entered = 0;
    if (InterlockedExchange(&entered, 1) != 0) return EXCEPTION_EXECUTE_HANDLER;

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

    // Ends the process with the exception code as its exit code, as before.
    return EXCEPTION_EXECUTE_HANDLER;
}

}  // namespace

extern "C" void nocturne_install_crash_handler(const char *version) {
    s_version = version != nullptr ? version : "";
    SetUnhandledExceptionFilter(on_unhandled_exception);
}

#else

extern "C" void nocturne_install_crash_handler(const char *version) { (void)version; }

#endif
