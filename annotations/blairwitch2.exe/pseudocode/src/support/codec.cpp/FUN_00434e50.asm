; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_codec_cpp_FUN_00434e50(int param_1)
;
;
; XREF[2]:
;   support_codec.cpp_FUN_00434d30 at 00434d42
;   support_codec.cpp_FUN_00434d60 at 00434d66
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00434e50
        ;   Label: support_codec.cpp_FUN_00434e50
    IMUL EAX,dword ptr [EDX + 0x8],0x2ff0bd ; 00434e54
    INC EAX                             ; 00434e5b
    AND EAX,0xffffff                    ; 00434e5c
    MOV dword ptr [EDX + 0x8],EAX       ; 00434e61
    RET                                 ; 00434e64

