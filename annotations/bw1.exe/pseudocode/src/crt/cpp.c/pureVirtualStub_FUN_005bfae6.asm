; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_cpp_c_pureVirtualStub_FUN_005bfae6(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c32d4
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005bfae6
        ;   Label: crt_cpp.c_pureVirtualStub_FUN_005bfae6
    PUSH 0x5fa9c6                       ; 005bfae8
    CALL crt_unknown.c_FUN_005c32d4     ; 005bfaed
        ;   XREF to: 005c32d4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c32d4()
    ADD ESP,0x8                         ; 005bfaf2
    RET                                 ; 005bfaf5

