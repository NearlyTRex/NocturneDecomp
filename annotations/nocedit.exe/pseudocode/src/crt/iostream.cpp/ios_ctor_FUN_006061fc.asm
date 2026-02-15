; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ios * __cdecl crt_iostream_cpp_ios_ctor_FUN_006061fc(ios *this_ptr)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   crt_fstream.cpp_fstreambase_constructor_FUN_00606456 at 0060646e
;   crt_fstream.cpp_fstreambase_ctor_FUN_0060658f at 006065eb
;   crt_fstream.cpp_ifstream_constructor_FUN_005ff664 at 005ff6d5
;   crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0 at 005ff94f
;   crt_fstream.cpp_ofstream_constructor_FUN_005ff710 at 005ff781
;   crt_fstream.cpp_ofstream_ctor_FUN_005ff95c at 005ff9bb
;   crt_iostream.cpp_istream_ctor_FUN_00606376 at 006063bc
;   crt_iostream.cpp_ostream_ctor_FUN_006061a2 at 006061d7
;   crt_strstream.cpp_istrstream_constructor_FUN_005ff524 at 005ff58f
;   crt_strstream.cpp_ostrstream_ctor_FUN_005ff384 at 005ff417
;   ... and 1 more
;
; Referenced Globals:
;   void* g_IOS_Destructor = 0060632c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 006061fc
        ;   Label: crt_iostream.cpp_ios_ctor_FUN_006061fc
    MOV dword ptr [EAX + 0x28],0x665df8 ; 00606200 | g_IOS_Destructor
    RET                                 ; 00606207

