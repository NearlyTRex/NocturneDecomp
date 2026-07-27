; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048ce00(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d3e0                       ; 0048ce00
        ;   Label: core_fire.cpp_FUN_0048ce00
    PUSH 0x40                           ; 0048ce05
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ce07
    PUSH EDX                            ; 0048ce0b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ce0c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048ce11
    RET                                 ; 0048ce14

