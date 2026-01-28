#pragma once

// Function prototypes for crt/iostream.cpp
// Generated from Ghidra function signatures

// Original: crt_iostream.cpp_ostream_ctor_FUN_006061a2
// Address: 006061a2
ostream * __cdecl ostream::ctor(ostream *this_ptr,uint c1);

// Original: crt_iostream.cpp_ostream_destructor_thunk_FUN_006061e4
// Address: 006061e4
void __cdecl ostream::destructor_thunk(ios *this_ptr,int dtor_flags);

// Original: crt_iostream.cpp_ios_ctor_FUN_006061fc
// Address: 006061fc
ios * __cdecl ios::ctor(ios *this_ptr);

// Original: crt_iostream.cpp_ostream_dtor_FUN_00606231
// Address: 00606231
ostream * __cdecl ostream::dtor(ostream *this_ptr,uint d1,uint d2);

// Original: crt_iostream.cpp_ios_dtor_FUN_0060632c
// Address: 0060632c
ios * __cdecl ios::dtor(ios *this_ptr,uint d1,uint d2);

// Original: crt_iostream.cpp_istream_ctor_FUN_00606376
// Address: 00606376
istream * __cdecl istream::ctor(istream *this_ptr,uint c1);

// Original: crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_006063c9
// Address: 006063c9
void __cdecl istream::destructor_thunk_from_ios(ios *this_ptr,int dtor_flags);

// Original: crt_iostream.cpp_istream_dtor_FUN_006063e1
// Address: 006063e1
istream * __cdecl istream::dtor(istream *this_ptr,uint d1,uint d2);

// Original: crt_iostream.cpp_streambuf_do_sputn_FUN_00606780
// Address: 00606780
int __watcallStack streambuf::do_sputn(streambuf *buffer,void *input_buffer,SIZE_T bytes_to_write);

// Original: crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
// Address: 0060b7c2
streambuf * __watcallStack streambuf::constructor(streambuf *this_ptr);

// Original: crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
// Address: 0060b8da
void __watcallStack streambuf::initBuffer(streambuf *this_ptr,char *buffer_ptr,int buffer_size,char *put_start);

// Original: crt_iostream.cpp_streambuf_do_sgetn_FUN_0060b932
// Address: 0060b932
int __watcallStack streambuf::do_sgetn(streambuf *buffer,void *output_buffer,SIZE_T bytes_to_read);

// Original: crt_iostream.cpp_streambuf_seekoff_FUN_0060bb5f
// Address: 0060bb5f
void __watcallStack streambuf::seekoff(streambuf *this_ptr,int off,int dir,int which);

// Original: crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0
// Address: 0060bdc0
void __cdecl ios::freeBufferChain(ios *stream_ptr);

// Original: crt_iostream.cpp_streambuf_setbuf_FUN_0060d5ff
// Address: 0060d5ff
streambuf * __watcallStack streambuf::setbuf(streambuf *this_ptr,void *buffer_start,int buffer_size);

// Original: crt_iostream.cpp_streambuf_destructor_FUN_0060d64f
// Address: 0060d64f
streambuf * __watcallStack streambuf::destructor(streambuf *this_ptr);

// Original: crt_iostream.cpp_doallocate_FUN_0060d677
// Address: 0060d677
int __watcallStack doallocate(streambuf *this_ptr);

// Original: crt_iostream.cpp_setBuffer_FUN_0060d6a8
// Address: 0060d6a8
void __watcallStack setBuffer(streambuf *this_ptr,void *new_buffer,void *buffer_end,int ownership_flag);

// Original: crt_iostream.cpp_validateBufferSeek_FUN_0060d725
// Address: 0060d725
int __watcallStack validateBufferSeek(int seek_distance,int whence,char *buffer_start,char *current_ptr,char *buffer_end1, char *buffer_end2);

// Original: crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790
// Address: 0060d790
void * __watcallStack streambuf::allocBuffer(uint size);

// Original: crt_iostream.cpp_freeBuffer_FUN_0060d7a0
// Address: 0060d7a0
void __watcallStack freeBuffer(void *buffer);

// Original: crt_iostream.cpp_streambuf_seekoff_FUN_00610ab0
// Address: 00610ab0
int __watcallStack streambuf::seekoff(streambuf *this_ptr,int offset,int direction,int mode);

// Original: crt_iostream.cpp_streambuf_sync_FUN_00610ab6
// Address: 00610ab6
int __watcallStack streambuf::sync(streambuf *streambuf_ptr);
