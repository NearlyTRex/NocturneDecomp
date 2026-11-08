; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005409b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005adf90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005409b0
        ;   Label: FUN_005409b0
    PUSH EDX                            ; 005409b4
    CALL FUN_005adf90                   ; 005409b5
        ;   XREF to: 005adf90 (UNCONDITIONAL_CALL)  ; undefined FUN_005adf90()
    ADD ESP,0x4                         ; 005409ba
    RET                                 ; 005409bd

