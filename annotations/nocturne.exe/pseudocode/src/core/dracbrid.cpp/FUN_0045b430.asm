; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dracbrid_cpp_FUN_0045b430(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59c560                       ; 0045b430
        ;   Label: core_dracbrid.cpp_FUN_0045b430
    PUSH 0x6                            ; 0045b435
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045b437
    PUSH EDX                            ; 0045b43b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0045b43c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0045b441
    RET                                 ; 0045b444

