; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamMemory_tell_FUN_005a1d10(COutStreamMemory *this_ptr)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00444020 at 0044409c
;   support_codec.cpp_FUN_00442c80 at 00442cc5
;   support_codec.cpp_FUN_00442f00 at 00442f39
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1d10
        ;   Label: support_trstream.cpp_COutStreamMemory_tell_FUN_005a1d10
    MOV EAX,dword ptr [EAX + 0xc]       ; 005a1d14
    RET                                 ; 005a1d17

