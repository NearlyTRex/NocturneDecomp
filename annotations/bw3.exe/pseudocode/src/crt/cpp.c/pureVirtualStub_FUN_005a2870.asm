; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_cpp_c_pureVirtualStub_FUN_005a2870(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005a6144
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a2870
        ;   Label: crt_cpp.c_pureVirtualStub_FUN_005a2870
    PUSH 0x5da682                       ; 005a2872
    CALL crt_unknown.c_FUN_005a6144     ; 005a2877
        ;   XREF to: 005a6144 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6144()
    ADD ESP,0x8                         ; 005a287c
    RET                                 ; 005a287f

