; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8da0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a4870
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8da0
        ;   Label: FUN_005a8da0
    PUSH EDX                            ; 005a8da4
    CALL FUN_005a4870                   ; 005a8da5
        ;   XREF to: 005a4870 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4870()
    ADD ESP,0x4                         ; 005a8daa
    RET                                 ; 005a8dad

