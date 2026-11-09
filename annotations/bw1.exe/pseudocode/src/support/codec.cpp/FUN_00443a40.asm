; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_codec_cpp_FUN_00443a40(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_00443a00 at 00443a1d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443a40
        ;   Label: support_codec.cpp_FUN_00443a40
    MOV EAX,dword ptr [ESP + 0x8]       ; 00443a44
    MOV dword ptr [EDX + 0x4],EAX       ; 00443a48
    RET                                 ; 00443a4b

