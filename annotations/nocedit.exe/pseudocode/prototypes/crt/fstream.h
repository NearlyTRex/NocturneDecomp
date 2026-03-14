#pragma once

// Function prototypes for crt/fstream.cpp
// Generated from Ghidra function signatures

// Original: crt_fstream.cpp_ifstream_ctor_FUN_005ff664
// Address: 005ff664
void __cdecl ifstream::ctor(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size);

// Original: crt_fstream.cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2
// Address: 005ff6e2
void __cdecl ifstream::destructor_thunk_from_istream(_istream *this_ptr,int dtor_flags);

// Original: crt_fstream.cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8
// Address: 005ff6f8
void __cdecl ifstream::destructor_thunk_from_ios(ios *this_ptr,int dtor_flags);

// Original: crt_fstream.cpp_ofstream_ctor_FUN_005ff710
// Address: 005ff710
void __cdecl ofstream::ctor(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size);

// Original: crt_fstream.cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e
// Address: 005ff78e
void __cdecl ofstream::destructor_thunk_from_ostream(_ostream *this_ptr,int dtor_flags);

// Original: crt_fstream.cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4
// Address: 005ff7a4
void __cdecl ofstream::destructor_thunk_from_ios(ios *this_ptr,int dtor_flags);

// Original: crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
// Address: 005ff7bc
ofstream * __cdecl ofstream::dtor(void *this_ptr,uint flags);

// Original: crt_fstream.cpp_ifstream_dtor_FUN_005ff856
// Address: 005ff856
ifstream * __cdecl ifstream::dtor(void *this_ptr,uint flags);

// Original: crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0
// Address: 005ff8f0
ifstream * __cdecl ifstream::ctor(void *this_ptr,int c1);

// Original: crt_fstream.cpp_ofstream_ctor_FUN_005ff95c
// Address: 005ff95c
ofstream * __cdecl ofstream::ctor(void *this_ptr,int c1);

// Original: crt_fstream.cpp_ostream_write_FUN_005ffcb3
// Address: 005ffcb3
_ostream * __cdecl ostream::write(_ostream *stream,void *buffer,SIZE_T count);

// Original: crt_fstream.cpp_openFile_FUN_00600e85
// Address: 00600e85
void __cdecl openFile(void *stream_obj,char *filename,int open_mode,SIZE_T buffer_size);

// Original: crt_fstream.cpp_istream_seekg_FUN_00600ee4
// Address: 00600ee4
_istream * __cdecl istream::seekg(void *this_ptr,int offset);

// Original: crt_fstream.cpp_fstreambase_ctor_FUN_00606456
// Address: 00606456
void __cdecl fstreambase::ctor(fstreambase *this_ptr,int ctor_flags,int fd,int mode,char *buffer,SIZE_T buffer_size);

// Original: crt_fstream.cpp_fstream_destructor_thunk_from_ios_FUN_006064f1
// Address: 006064f1
void __cdecl fstream::destructor_thunk_from_ios(ios *this_ptr,int dtor_flags);

// Original: crt_fstream.cpp_fstreambase_dtor_FUN_00606509
// Address: 00606509
fstreambase * __cdecl fstreambase::dtor(fstreambase *this_ptr,uint flags);

// Original: crt_fstream.cpp_fstreambase_ctor_FUN_0060658f
// Address: 0060658f
fstreambase * __cdecl fstreambase::ctor(fstreambase *this_ptr,uint c1);

// Original: crt_fstream.cpp_filebuf_close_FUN_00608bcc
// Address: 00608bcc
filebuf * __watcallStack filebuf::close(filebuf *this_ptr);

// Original: crt_fstream.cpp_filebuf_open_FUN_00608c15
// Address: 00608c15
int __cdecl filebuf::open(filebuf *this_ptr,char *filename,int mode,int permissions);

// Original: crt_fstream.cpp_filebuf_ctor_FUN_0060bddd
// Address: 0060bddd
filebuf * __cdecl filebuf::ctor(filebuf *this_ptr);

// Original: crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9
// Address: 0060bdf9
filebuf * __watcallStack filebuf::dtor(filebuf *this_ptr,uint flags);

// Original: crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340
// Address: 0060c340
int __cdecl convertModesAndOpenFile(char *filename,int *iostream_mode,int permissions);

// Original: crt_fstream.cpp_filebuf_pbackfail_FUN_0060d7ae
// Address: 0060d7ae
int __watcallStack filebuf::pbackfail(filebuf *this_ptr,int character);

// Original: crt_fstream.cpp_filebuf_overflow_FUN_0060d881
// Address: 0060d881
int __watcallStack filebuf::overflow(filebuf *this_ptr,int character);

// Original: crt_fstream.cpp_filebuf_underflow_FUN_0060da87
// Address: 0060da87
int __watcallStack filebuf::underflow(filebuf *this_ptr);

// Original: crt_fstream.cpp_filebuf_setbuf_FUN_0060db8c
// Address: 0060db8c
streambuf * __watcallStack filebuf::setbuf(filebuf *this_ptr,char *buffer_ptr,int buffer_size);

// Original: crt_fstream.cpp_filebuf_seekoff_FUN_0060dbe8
// Address: 0060dbe8
int __watcallStack filebuf::seekoff(filebuf *this_ptr,long offset,int direction,int mode);

// Original: crt_fstream.cpp_filebuf_sync_FUN_0060dc5e
// Address: 0060dc5e
int __watcallStack filebuf::sync(filebuf *this_ptr);
