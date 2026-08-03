#pragma once

// Function prototypes for crt/iostream.cpp
// Generated from Ghidra function signatures

// Original: crt_iostream.cpp_istream_get_FUN_00564c53
// Address: 00564c53
_istream * __cdecl istream::get(_istream *this_ptr,char *c);

// Original: crt_iostream.cpp_ostream_put_FUN_00564ce5
// Address: 00564ce5
_ostream * __cdecl ostream::put(_ostream *this_ptr,int character);

// Original: crt_iostream.cpp_ostream_ctor_FUN_0056b4a9
// Address: 0056b4a9
_ostream * __cdecl ostream::ctor(_ostream *this_ptr,uint c1);

// Original: crt_iostream.cpp_ios_ctor_FUN_0056b503
// Address: 0056b503
ios * __cdecl ios::ctor(ios *this_ptr);

// Original: crt_iostream.cpp_ostream_dtor_FUN_0056b538
// Address: 0056b538
_ostream * __cdecl ostream::dtor(_ostream *this_ptr,uint flags);

// Original: crt_iostream.cpp_ios_dtor_FUN_0056b633
// Address: 0056b633
ios * __cdecl ios::dtor(ios *this_ptr,uint flags);

// Original: crt_iostream.cpp_istream_ctor_FUN_0056b67d
// Address: 0056b67d
_istream * __cdecl istream::ctor(_istream *this_ptr,uint c1);

// Original: crt_iostream.cpp_istream_dtor_FUN_0056b6e8
// Address: 0056b6e8
_istream * __cdecl istream::dtor(_istream *this_ptr,uint flags);

// Original: crt_iostream.cpp_streambuf_do_sputn_FUN_0056bc70
// Address: 0056bc70
int __watcallStack streambuf::do_sputn(streambuf *buffer,void *input_buffer,SIZE_T bytes_to_write);

// Original: crt_iostream.cpp_streambuf_ctor_FUN_0056fe12
// Address: 0056fe12
streambuf * __cdecl streambuf::ctor(streambuf *this_ptr);

// Original: crt_iostream.cpp_streambuf_initBuffer_FUN_0056ff2a
// Address: 0056ff2a
void __watcallStack streambuf::initBuffer(streambuf *this_ptr,char *buffer_ptr);

// Original: crt_iostream.cpp_streambuf_do_sgetn_FUN_0056ff82
// Address: 0056ff82
int __watcallStack streambuf::do_sgetn(streambuf *buffer,void *output_buffer,SIZE_T bytes_to_read);

// Original: crt_iostream.cpp_streambuf_seekoff_FUN_005701af
// Address: 005701af
void __watcallStack streambuf::seekoff(streambuf *this_ptr,int off,int dir,int which);

// Original: crt_iostream.cpp_ios_freeBufferChain_FUN_00570410
// Address: 00570410
void __cdecl ios::freeBufferChain(ios *stream_ptr);

// Original: crt_iostream.cpp_streambuf_setbuf_FUN_00571d4f
// Address: 00571d4f
streambuf * __watcallStack streambuf::setbuf(streambuf *this_ptr,void *buffer_start,int buffer_size);

// Original: crt_iostream.cpp_streambuf_destructor_FUN_00571d9f
// Address: 00571d9f
streambuf * __watcallStack streambuf::destructor(streambuf *this_ptr);

// Original: crt_iostream.cpp_doallocate_FUN_00571dc7
// Address: 00571dc7
int __watcallStack doallocate(streambuf *this_ptr);

// Original: crt_iostream.cpp_setBuffer_FUN_00571df8
// Address: 00571df8
void __watcallStack setBuffer(streambuf *this_ptr,void *new_buffer,void *buffer_end,int ownership_flag);

// Original: crt_iostream.cpp_validateBufferSeek_FUN_00571e75
// Address: 00571e75
int __watcallStack validateBufferSeek(int seek_distance,int whence,char *buffer_start,char *current_ptr,char *buffer_end1,char *buffer_end2);

// Original: crt_iostream.cpp_streambuf_seekoff_FUN_005747f0
// Address: 005747f0
undefined4 streambuf::seekoff(void);

// Original: crt_iostream.cpp_streambuf_sync_FUN_005747f6
// Address: 005747f6
int __watcallStack streambuf::sync(streambuf *streambuf_ptr);
