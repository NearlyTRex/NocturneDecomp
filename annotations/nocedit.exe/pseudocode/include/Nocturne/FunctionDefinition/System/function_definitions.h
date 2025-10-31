#pragma once

// Function Definition: ENTER_CRITICAL_SECTION_BY_INDEX_FUNC
typedef void (*ENTER_CRITICAL_SECTION_BY_INDEX_FUNC)(int file_index);

// Function Definition: ENTER_CRITICAL_SECTION_FUNC
typedef void (*ENTER_CRITICAL_SECTION_FUNC)(LPCRITICAL_SECTION param0);

// Function Definition: ENTER_THREAD_CRITICAL_SECTION_FUNC
typedef void (*ENTER_THREAD_CRITICAL_SECTION_FUNC)(void);

// Function Definition: EXCEPTION_CLEANUP_FUNC
typedef void (*EXCEPTION_CLEANUP_FUNC)(int action);

// Function Definition: EXCEPTION_FILTER_FUNC
typedef int (*EXCEPTION_FILTER_FUNC)(int action, DWORD exceptionCode);

// Function Definition: EXIT_CRITICAL_SECTION_BY_INDEX_FUNC
typedef void (*EXIT_CRITICAL_SECTION_BY_INDEX_FUNC)(int file_index);

// Function Definition: EXIT_CRITICAL_SECTION_FUNC
typedef void (*EXIT_CRITICAL_SECTION_FUNC)(LPCRITICAL_SECTION param0);

// Function Definition: EXIT_THREAD_CRITICAL_SECTION_FUNC
typedef void (*EXIT_THREAD_CRITICAL_SECTION_FUNC)(void);

// Function Definition: GET_TLS_FUNC
typedef ThreadData* (*GET_TLS_FUNC)(void);

// Function Definition: INVALIDATE_HANDLE_FUNC
typedef void (*INVALIDATE_HANDLE_FUNC)(int handle_index);

// Function Definition: MATH_CHECK_REPORTING_FUNC
typedef int (*MATH_CHECK_REPORTING_FUNC)(MathErrorContext* param0);

// Function Definition: OUTPUT_CALLBACK_FUNC
typedef int (*OUTPUT_CALLBACK_FUNC)(void* output_context, int character);

// Function Definition: REGISTER_HANDLE_FUNC
typedef int (*REGISTER_HANDLE_FUNC)(HANDLE file_handle);

// Function Definition: RUNTIME_HANDLER_FUNC
typedef void (*RUNTIME_HANDLER_FUNC)(void);

// Function Definition: SIGNAL_HANDLER_FUNC
typedef void (*SIGNAL_HANDLER_FUNC)(int param0);

// Function Definition: STRTOD_FUNC
typedef double (*STRTOD_FUNC)(double* result, char* str);

// Function Definition: VOID_FUNC
typedef void (*VOID_FUNC)(void);

// Function Definition: WATCOM_COPY_CONSTRUCTOR_FUNC
typedef void (*WATCOM_COPY_CONSTRUCTOR_FUNC)(void* param0, void* param1);

// Function Definition: WATCOM_DEFAULT_CONSTRUCTOR_FUNC
typedef void (*WATCOM_DEFAULT_CONSTRUCTOR_FUNC)(void* param0);

// Function Definition: WATCOM_VIRTUAL_DESTRUCTOR_FUNC
typedef void (*WATCOM_VIRTUAL_DESTRUCTOR_FUNC)(void* object_ptr, int flags);

