; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b503(int param_1)
;
;
; XREF[11]:
;   FUN_0056b405 at 0056b484
;   FUN_0056b4a9 at 0056b4de
;   FUN_0056b67d at 0056b6c3
;   FUN_0056b75d at 0056b775
;   FUN_0056b896 at 0056b8f2
;   crt_fstream.cpp_ifstream_ctor_FUN_00565072 at 005650e3
;   crt_fstream.cpp_ifstream_ctor_FUN_005652fe at 0056535d
;   crt_fstream.cpp_ofstream_ctor_FUN_0056511e at 0056518f
;   crt_fstream.cpp_ofstream_ctor_FUN_0056536a at 005653c9
;   crt_strstream.cpp_istrstream_ctor_FUN_00564f32 at 00564f9d
;   ... and 1 more
;
; Referenced Globals:
;   void* PTR_FUN_005a4948 = 0056b633
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b503
        ;   Label: FUN_0056b503
    MOV dword ptr [EAX + 0x28],0x5a4948 ; 0056b507 | PTR_FUN_005a4948
    RET                                 ; 0056b50e

