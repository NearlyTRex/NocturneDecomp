#pragma once

// Function prototypes for crt/fstream.cpp
// Generated from Ghidra function signatures

// Original: crt_fstream.cpp_ifstream_ctor_FUN_00565072
// Address: 00565072
void __cdecl ifstream::ctor(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size);

// Original: crt_fstream.cpp_ofstream_ctor_FUN_0056511e
// Address: 0056511e
void __cdecl ofstream::ctor(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size);

// Original: crt_fstream.cpp_ofstream_dtor_FUN_005651ca
// Address: 005651ca
ofstream * __cdecl ofstream::dtor(void *this_ptr,uint flags);

// Original: crt_fstream.cpp_ifstream_dtor_FUN_00565264
// Address: 00565264
ifstream * __cdecl ifstream::dtor(void *this_ptr,uint flags);

// Original: crt_fstream.cpp_ifstream_ctor_FUN_005652fe
// Address: 005652fe
ifstream * __cdecl ifstream::ctor(void *this_ptr,int c1);

// Original: crt_fstream.cpp_ofstream_ctor_FUN_0056536a
// Address: 0056536a
ofstream * __cdecl ofstream::ctor(void *this_ptr,int c1);

// Original: crt_fstream.cpp_ostream_write_FUN_00565a13
// Address: 00565a13
_ostream * __cdecl ostream::write(_ostream *stream,void *buffer,SIZE_T count);

// Original: crt_fstream.cpp_openFile_FUN_00565eb5
// Address: 00565eb5
void __cdecl openFile(void *stream_obj,char *filename,int open_mode,SIZE_T buffer_size);

// Original: crt_fstream.cpp_istream_seekg_FUN_00565f14
// Address: 00565f14
_istream * __cdecl istream::seekg(void *this_ptr,int offset);

// Original: crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d
// Address: 0056b75d
char * fstreambase::ctor(int *param_1,byte param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: crt_fstream.cpp_fstreambase_dtor_FUN_0056b810
// Address: 0056b810
fstreambase * __cdecl fstreambase::dtor(fstreambase *this_ptr,uint flags);

// Original: crt_fstream.cpp_fstreambase_ctor_FUN_0056b896
// Address: 0056b896
fstreambase * __cdecl fstreambase::ctor(fstreambase *this_ptr,uint c1);

// Original: crt_fstream.cpp_filebuf_ctor_FUN_0057042d
// Address: 0057042d
filebuf * __cdecl filebuf::ctor(filebuf *this_ptr);

// Original: crt_fstream.cpp_filebuf_dtor_FUN_00570449
// Address: 00570449
filebuf * __watcallStack filebuf::dtor(filebuf *this_ptr,uint flags);

// Original: crt_fstream.cpp_filebuf_pbackfail_FUN_00571efe
// Address: 00571efe
int __watcallStack filebuf::pbackfail(filebuf *this_ptr,int character);

// Original: crt_fstream.cpp_filebuf_overflow_FUN_00571fd1
// Address: 00571fd1
int __watcallStack filebuf::overflow(filebuf *this_ptr,int character);

// Original: crt_fstream.cpp_filebuf_underflow_FUN_005721d7
// Address: 005721d7
int __watcallStack filebuf::underflow(filebuf *this_ptr);

// Original: crt_fstream.cpp_filebuf_setbuf_FUN_005722dc
// Address: 005722dc
streambuf * __watcallStack filebuf::setbuf(filebuf *this_ptr,char *buffer_ptr,int buffer_size);

// Original: crt_fstream.cpp_filebuf_seekoff_FUN_00572338
// Address: 00572338
int __watcallStack filebuf::seekoff(filebuf *this_ptr,long offset,int direction,int mode);

// Original: crt_fstream.cpp_filebuf_sync_FUN_005723ae
// Address: 005723ae
int __watcallStack filebuf::sync(filebuf *this_ptr);
