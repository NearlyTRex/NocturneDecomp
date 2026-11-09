; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_staticInit_FUN_004723e0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH 0x5f22b0                       ; 004723e0
        ;   Label: core_dtrace.cpp_staticInit_FUN_004723e0
    PUSH 0x4e20                         ; 004723e5
    PUSH 0x1be74e4                      ; 004723ea
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004723ef
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 004723f4
    RET                                 ; 004723f7

