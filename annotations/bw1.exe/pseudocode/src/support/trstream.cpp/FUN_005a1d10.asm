; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_005a1d10(int param_1)
;
;
; XREF[3]:
;   support_codec.cpp_FUN_00442c80 at 00442cc5
;   support_codec.cpp_FUN_00442f00 at 00442f39
;   support_codec.cpp_FUN_00444020 at 0044409c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1d10
        ;   Label: support_trstream.cpp_FUN_005a1d10
    MOV EAX,dword ptr [EAX + 0xc]       ; 005a1d14
    RET                                 ; 005a1d17

