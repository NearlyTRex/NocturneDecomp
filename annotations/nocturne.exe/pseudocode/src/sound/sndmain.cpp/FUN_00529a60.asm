; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00529a60(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a21c0                       ; 00529a60
        ;   Label: sound_sndmain.cpp_FUN_00529a60
    PUSH 0x40                           ; 00529a65
    MOV EDX,dword ptr [ESP + 0xc]       ; 00529a67
    PUSH EDX                            ; 00529a6b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 00529a6c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 00529a71
    RET                                 ; 00529a74

