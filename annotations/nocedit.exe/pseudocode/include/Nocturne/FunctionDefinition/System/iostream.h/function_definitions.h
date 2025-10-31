#pragma once

// Function Definition: cpp_streambuf_destructor
typedef streambuf* (*cpp_streambuf_destructor)(streambuf* param0);

// Function Definition: cpp_streambuf_do_sgetn
typedef int (*cpp_streambuf_do_sgetn)(streambuf* param0, char* param1, int param2);

// Function Definition: cpp_streambuf_do_sputn
typedef int (*cpp_streambuf_do_sputn)(streambuf* param0, char* param1, int param2);

// Function Definition: cpp_streambuf_doallocate
typedef int (*cpp_streambuf_doallocate)(streambuf* param0);

// Function Definition: cpp_streambuf_overflow
typedef int (*cpp_streambuf_overflow)(streambuf* param0, int param1);

// Function Definition: cpp_streambuf_pbackfail
typedef int (*cpp_streambuf_pbackfail)(streambuf* param0, int param1);

// Function Definition: cpp_streambuf_seekoff
typedef int (*cpp_streambuf_seekoff)(streambuf* param0, int param1, int param2, int param3);

// Function Definition: cpp_streambuf_seekpos
typedef int (*cpp_streambuf_seekpos)(streambuf* param0, int param1, int param2);

// Function Definition: cpp_streambuf_setbuf
typedef streambuf* (*cpp_streambuf_setbuf)(streambuf* param0, char* param1, int param2);

// Function Definition: cpp_streambuf_sync
typedef int (*cpp_streambuf_sync)(streambuf* param0);

// Function Definition: cpp_streambuf_underflow
typedef int (*cpp_streambuf_underflow)(streambuf* param0);

