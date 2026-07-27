; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moon_cpp_FUN_004df1f0(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59df00                       ; 004df1f0
        ;   Label: core_moon.cpp_FUN_004df1f0
    PUSH 0x1e                           ; 004df1f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004df1f7
    PUSH EDX                            ; 004df1fb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004df1fc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004df201
    RET                                 ; 004df204

