; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd400(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004fd610
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fd400
        ;   Label: FUN_004fd400
    PUSH EDX                            ; 004fd404
    CALL FUN_004fd610                   ; 004fd405
        ;   XREF to: 004fd610 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd610()
    ADD ESP,0x4                         ; 004fd40a
    RET                                 ; 004fd40d

