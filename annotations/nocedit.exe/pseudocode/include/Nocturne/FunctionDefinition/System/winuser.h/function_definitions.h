#pragma once

// Function Definition: IS_SPECIAL_DEVICE_FUNC
typedef int (*IS_SPECIAL_DEVICE_FUNC)(int file_handle_index);

// Function Definition: SPECIAL_CONSOLE_INPUT_HANDLER_FUNC
typedef int (*SPECIAL_CONSOLE_INPUT_HANDLER_FUNC)(int device_type);

// Function Definition: SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC
typedef int (*SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC)(int device_type, int character);

// Function Definition: SPECIAL_DEVICE_CLEANUP_FUNC
typedef int (*SPECIAL_DEVICE_CLEANUP_FUNC)(int fd);

// Function Definition: SPECIAL_DEVICE_CLOSE_FUNC
typedef void (*SPECIAL_DEVICE_CLOSE_FUNC)(int cleanup_result);

// Function Definition: SPECIAL_DEVICE_READ_FUNC
typedef int (*SPECIAL_DEVICE_READ_FUNC)(int device_type, void* buffer, int bytes_to_read);

// Function Definition: SPECIAL_DEVICE_WRITE_FUNC
typedef int (*SPECIAL_DEVICE_WRITE_FUNC)(int device_id, void* buffer, int bytes_to_write);

// Function Definition: WNDPROC_FUNC
typedef LRESULT (*WNDPROC_FUNC)(HWND param0, UINT param1, WPARAM param2, LPARAM param3);

