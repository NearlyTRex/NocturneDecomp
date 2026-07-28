; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ios * __cdecl crt_iostream_cpp_ios_ctor_FUN_0056b503(ios *this_ptr)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d at 0056b775
;   crt_fstream.cpp_fstreambase_ctor_FUN_0056b896 at 0056b8f2
;   crt_fstream.cpp_ifstream_ctor_FUN_00565072 at 005650e3
;   crt_fstream.cpp_ifstream_ctor_FUN_005652fe at 0056535d
;   crt_fstream.cpp_ofstream_ctor_FUN_0056511e at 0056518f
;   crt_fstream.cpp_ofstream_ctor_FUN_0056536a at 005653c9
;   crt_iostream.cpp_istream_ctor_FUN_0056b67d at 0056b6c3
;   crt_iostream.cpp_ostream_ctor_FUN_0056b4a9 at 0056b4de
;   crt_strstream.cpp_istrstream_ctor_FUN_00564f32 at 00564f9d
;   crt_strstream.cpp_ostrstream_ctor_FUN_00564d92 at 00564e25
;   ... and 1 more
;
; Referenced Globals:
;   void* PTR_crt_iostream.cpp_ios_dtor_FUN_0056b633_005a4948 = 0056b633
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b503
        ;   Label: crt_iostream.cpp_ios_ctor_FUN_0056b503
    MOV dword ptr [EAX + 0x28],0x5a4948 ; 0056b507 | PTR_crt_iostream.cpp_ios_dtor_FUN_0056b633_005a4948
    RET                                 ; 0056b50e

