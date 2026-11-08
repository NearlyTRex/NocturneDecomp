; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005152b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01ed2c84
;
; Called Functions:
;   FUN_00514320
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x1ed2af0                      ; 005152b0
        ;   Label: FUN_005152b0
    CALL FUN_00514320                   ; 005152b5
        ;   XREF to: 00514320 (UNCONDITIONAL_CALL)  ; undefined FUN_00514320()
    ADD ESP,0x4                         ; 005152ba
    MOV EDX,0x5e3494                    ; 005152bd
    PUSH 0x60394c                       ; 005152c2
    MOV dword ptr [0x01ed2c84],EDX      ; 005152c7 | DAT_01ed2c84
    CALL FUN_005a3e13                   ; 005152cd
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 005152d2
    RET                                 ; 005152d5

