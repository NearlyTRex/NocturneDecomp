; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052ebb0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[7]:
;   FUN_0046edc0 at 0046ee49
;   FUN_0048d0c0 at 0048d46d
;   FUN_0048eb30 at 0048eb67
;   FUN_004a9270 at 004aaca7
;   FUN_004f6170 at 004f6712
;   FUN_0052dff0 at 0052e569
;   FUN_0052e9d0 at 0052e9de
;
; Called Functions:
;   FUN_00527230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0052ebb0
        ;   Label: FUN_0052ebb0
    PUSH EDX                            ; 0052ebb4
    CALL FUN_00527230                   ; 0052ebb5
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 0052ebba
    RET                                 ; 0052ebbd

