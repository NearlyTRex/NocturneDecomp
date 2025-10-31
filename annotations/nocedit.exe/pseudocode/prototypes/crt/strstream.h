#pragma once

// Function prototypes for crt/strstream.cpp
// Generated from Ghidra function signatures

// Original: crt_strstream.cpp_ostrstream_ctor_FUN_005ff384
// Address: 005ff384
ostrstream * ostrstream::ctor(ostrstream * this_ptr, int flags, char * buffer, int buffer_size, int mode);

// Original: crt_strstream.cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f
// Address: 005ff42f
void ostrstream::destructor_thunk_from_ostream(ostream * this_ptr, int dtor_flags);

// Original: crt_strstream.cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445
// Address: 005ff445
void ostrstream::destructor_thunk_from_ios(ios * this_ptr, int dtor_flags);

// Original: crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d
// Address: 005ff45d
int ostrstream::tellp(ostrstream * this_ptr);

// Original: crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
// Address: 005ff48a
ostrstream * ostrstream::dtor(ostrstream * this_ptr, int d1);

// Original: crt_strstream.cpp_istrstream_constructor_FUN_005ff524
// Address: 005ff524
istrstream * istrstream::constructor(istrstream * this_ptr, int ctor_flags, char * buffer, int size);

// Original: crt_strstream.cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c
// Address: 005ff59c
void istrstream::destructor_thunk_from_istream(istream * this_ptr, int dtor_flags);

// Original: crt_strstream.cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2
// Address: 005ff5b2
void istrstream::destructor_thunk_from_ios(ios * this_ptr, int dtor_flags);

// Original: crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
// Address: 005ff5ca
istrstream * istrstream::dtor(istrstream * this_ptr, int d1);

// Original: crt_strstream.cpp_strstreambase_constructor_FUN_006060fe
// Address: 006060fe
strstreambase * strstreambase::constructor(strstreambase * this_ptr, int ctor_flags, char * buffer, int size, char * pstart);

// Original: crt_strstream.cpp_strstreambase_destructor_thunk_FUN_0060618a
// Address: 0060618a
void strstreambase::destructor_thunk(ios * this_ptr, int dtor_flags);

// Original: crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
// Address: 006062a6
strstreambase * strstreambase::dtor(strstreambase * this_ptr, uint d1, uint d2, uint d3);

// Original: crt_strstream.cpp_strstreambuf_init_FUN_0060b815
// Address: 0060b815
void strstreambuf::init(strstreambuf * this_ptr, char * buffer_ptr, int buffer_size, char * put_start);

// Original: crt_strstream.cpp_strstreambuf_overflow_FUN_0060b9bd
// Address: 0060b9bd
int strstreambuf::overflow(strstreambuf * this_ptr, int character);

// Original: crt_strstream.cpp_strstreambuf_underflow_FUN_0060ba25
// Address: 0060ba25
int strstreambuf::underflow(strstreambuf * this_ptr);

// Original: crt_strstream.cpp_strstreambuf_setbuf_FUN_0060ba70
// Address: 0060ba70
strstreambuf * strstreambuf::setbuf(strstreambuf * this_ptr, char * ignored_buffer, int allocation_size);

// Original: crt_strstream.cpp_strstreambuf_seekoff_FUN_0060ba80
// Address: 0060ba80
int strstreambuf::seekoff(strstreambuf * this_ptr, int seek_distance, int seek_mode, int flags);

// Original: crt_strstream.cpp_strstreambuf_sync_FUN_0060bb7c
// Address: 0060bb7c
int strstreambuf::sync(void);

// Original: crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f
// Address: 0060bb7f
strstreambuf * strstreambuf::dtor(strstreambuf * this_ptr, uint d1);

// Original: crt_strstream.cpp_strstreambuf_ctor_FUN_0060bbf8
// Address: 0060bbf8
strstreambuf * strstreambuf::ctor(strstreambuf * this_ptr);

// Original: crt_strstream.cpp_strstreambuf_doallocate_FUN_0060bc22
// Address: 0060bc22
int strstreambuf::doallocate(strstreambuf * this_ptr);
