; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_staticInit_FUN_0048a8d0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH 0x5fb430                       ; 0048a8d0
        ;   Label: core_dtrace.cpp_staticInit_FUN_0048a8d0
    PUSH 0x4e20                         ; 0048a8d5
    PUSH 0x1c02aa0                      ; 0048a8da
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0048a8df
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0048a8e4
    RET                                 ; 0048a8e7

