; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStream * __cdecl support_trstream_cpp_CInStream_dtor_FUN_0059f550(CInStream *this_ptr,uint flags)
;
; Parameters:
; CInStream *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_dtor_FUN_00443c60 at 00443c7e
;   support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50 at 005a0a6e
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_005a11e0 at 005a11fe
;
; Referenced Globals:
;   undefined1* PTR_support_trstream.cpp_CInStream_dtor_FUN_0059f550_00607354 = 0059f550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059f550
        ;   Label: support_trstream.cpp_CInStream_dtor_FUN_0059f550
    MOV dword ptr [EAX],0x607354        ; 0059f554 | PTR_support_trstream.cpp_CInStream_dtor_FUN_0059f550_00607354
    RET                                 ; 0059f55a

