; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_cpp_c_pureVirtualStub_FUN_005b7740(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bb007
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005b7740
        ;   Label: crt_cpp.c_pureVirtualStub_FUN_005b7740
    PUSH 0x5f1820                       ; 005b7742
    CALL crt_unknown.c_FUN_005bb007     ; 005b7747
        ;   XREF to: 005bb007 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb007()
    ADD ESP,0x8                         ; 005b774c
    RET                                 ; 005b774f

