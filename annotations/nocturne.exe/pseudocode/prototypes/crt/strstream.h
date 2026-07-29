#pragma once

// Function prototypes for crt/strstream.cpp
// Generated from Ghidra function signatures

// Original: crt_strstream.cpp_ostrstream_ctor_FUN_00564d92
// Address: 00564d92
_ostrstream * __cdecl ostrstream::ctor(void *this_ptr,int flags,char *buffer,int buffer_size,int mode);

// Original: crt_strstream.cpp_ostrstream_tellp_FUN_00564e6b
// Address: 00564e6b
int __cdecl ostrstream::tellp(void *this_ptr);

// Original: crt_strstream.cpp_ostrstream_dtor_FUN_00564e98
// Address: 00564e98
_ostrstream * __cdecl ostrstream::dtor(void *this_ptr,uint flags);

// Original: crt_strstream.cpp_istrstream_ctor_FUN_00564f32
// Address: 00564f32
_istrstream * __cdecl istrstream::ctor(void *this_ptr,int ctor_flags,char *buffer,int size);

// Original: crt_strstream.cpp_istrstream_dtor_FUN_00564fd8
// Address: 00564fd8
_istrstream * __cdecl istrstream::dtor(void *this_ptr,uint flags);

// Original: crt_strstream.cpp_strstreambase_ctor_FUN_0056b405
// Address: 0056b405
strstreambase * __cdecl strstreambase::ctor(strstreambase *this_ptr,int ctor_flags,char *buffer,int size,char *pstart);

// Original: crt_strstream.cpp_strstreambase_dtor_FUN_0056b5ad
// Address: 0056b5ad
strstreambase * __cdecl strstreambase::dtor(strstreambase *this_ptr,uint flags);

// Original: crt_strstream.cpp_strstreambuf_init_FUN_0056fe65
// Address: 0056fe65
void __watcallStack strstreambuf::init(strstreambuf *this_ptr,char *buffer_ptr,int buffer_size,char *put_start);

// Original: crt_strstream.cpp_strstreambuf_overflow_FUN_0057000d
// Address: 0057000d
int __watcallStack strstreambuf::overflow(strstreambuf *this_ptr,int character);

// Original: crt_strstream.cpp_strstreambuf_underflow_FUN_00570075
// Address: 00570075
int __watcallStack strstreambuf::underflow(strstreambuf *this_ptr);

// Original: crt_strstream.cpp_strstreambuf_setbuf_FUN_005700c0
// Address: 005700c0
strstreambuf * __watcallStack strstreambuf::setbuf(strstreambuf *this_ptr,char *ignored_buffer,int allocation_size);

// Original: crt_strstream.cpp_strstreambuf_seekoff_FUN_005700d0
// Address: 005700d0
int __watcallStack strstreambuf::seekoff(strstreambuf *this_ptr,int seek_distance,int seek_mode,int flags);

// Original: crt_strstream.cpp_strstreambuf_sync_FUN_005701cc
// Address: 005701cc
undefined4 strstreambuf::sync(void);

// Original: crt_strstream.cpp_strstreambuf_dtor_FUN_005701cf
// Address: 005701cf
strstreambuf * __cdecl strstreambuf::dtor(strstreambuf *this_ptr,uint flags);

// Original: crt_strstream.cpp_strstreambuf_ctor_FUN_00570248
// Address: 00570248
strstreambuf * __cdecl strstreambuf::ctor(strstreambuf *this_ptr);

// Original: crt_strstream.cpp_strstreambuf_doallocate_FUN_00570272
// Address: 00570272
int __watcallStack strstreambuf::doallocate(strstreambuf *this_ptr);
