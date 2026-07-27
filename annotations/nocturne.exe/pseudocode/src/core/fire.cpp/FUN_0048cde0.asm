; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048cde0(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d400                       ; 0048cde0
        ;   Label: core_fire.cpp_FUN_0048cde0
    PUSH 0x40                           ; 0048cde5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cde7
    PUSH EDX                            ; 0048cdeb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cdec
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048cdf1
    RET                                 ; 0048cdf4

