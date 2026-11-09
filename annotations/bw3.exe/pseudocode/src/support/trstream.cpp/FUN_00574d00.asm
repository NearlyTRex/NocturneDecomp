; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_00574d00(int param_1)
;
;
; XREF[3]:
;   support_codec.cpp_FUN_004408e0 at 00440925
;   support_codec.cpp_FUN_00440b60 at 00440b99
;   support_codec.cpp_FUN_00441c80 at 00441cfc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574d00
        ;   Label: support_trstream.cpp_FUN_00574d00
    MOV EAX,dword ptr [EAX + 0xc]       ; 00574d04
    RET                                 ; 00574d07

