; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamMemory_tell_FUN_00574d00(COutStreamMemory *this_ptr)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00441c80 at 00441cfc
;   support_codec.cpp_FUN_004408e0 at 00440925
;   support_codec.cpp_FUN_00440b60 at 00440b99
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574d00
        ;   Label: support_trstream.cpp_COutStreamMemory_tell_FUN_00574d00
    MOV EAX,dword ptr [EAX + 0xc]       ; 00574d04
    RET                                 ; 00574d07

