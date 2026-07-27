; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_FUN_0041fb00(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59ac90                       ; 0041fb00
        ;   Label: core_boxactor.cpp_FUN_0041fb00
    PUSH 0x8                            ; 0041fb05
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041fb07
    PUSH EDX                            ; 0041fb0b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0041fb0c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0041fb11
    RET                                 ; 0041fb14

