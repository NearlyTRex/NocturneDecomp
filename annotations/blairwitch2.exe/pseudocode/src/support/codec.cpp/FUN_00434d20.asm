; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_codec_cpp_FUN_00434d20(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_00434ce0 at 00434cfd
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00434d20
        ;   Label: support_codec.cpp_FUN_00434d20
    MOV EAX,dword ptr [ESP + 0x8]       ; 00434d24
    MOV dword ptr [EDX + 0x4],EAX       ; 00434d28
    RET                                 ; 00434d2b

