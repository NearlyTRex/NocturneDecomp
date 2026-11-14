; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStream * __cdecl support_trstream_cpp_CInStream_dtor_FUN_0057b9d0(CInStream *this_ptr,uint flags)
;
; Parameters:
; CInStream *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_dtor_FUN_00434f40 at 00434f5e
;   support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0 at 0057cede
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_0057d5a0 at 0057d5be
;
; Referenced Globals:
;   undefined1* PTR_support_trstream.cpp_CInStream_dtor_FUN_0057b9d0_005fd3b4 = 0057b9d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057b9d0
        ;   Label: support_trstream.cpp_CInStream_dtor_FUN_0057b9d0
    MOV dword ptr [EAX],0x5fd3b4        ; 0057b9d4 | PTR_support_trstream.cpp_CInStream_dtor_FUN_0057b9d0_005fd3b4
    RET                                 ; 0057b9da

