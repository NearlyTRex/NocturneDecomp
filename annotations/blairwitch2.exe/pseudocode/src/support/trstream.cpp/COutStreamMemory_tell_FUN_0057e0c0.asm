; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamMemory_tell_FUN_0057e0c0(COutStreamMemory *this_ptr)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00435300 at 0043537c
;   support_codec.cpp_FUN_00433f60 at 00433fa5
;   support_codec.cpp_FUN_004341e0 at 00434219
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057e0c0
        ;   Label: support_trstream.cpp_COutStreamMemory_tell_FUN_0057e0c0
    MOV EAX,dword ptr [EAX + 0xc]       ; 0057e0c4
    RET                                 ; 0057e0c7

