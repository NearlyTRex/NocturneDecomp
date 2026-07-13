; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b68b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004eed10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b68b0
        ;   Label: FUN_004b68b0
    PUSH EDX                            ; 004b68b4
    CALL FUN_004eed10                   ; 004b68b5
        ;   XREF to: 004eed10 (UNCONDITIONAL_CALL)  ; undefined FUN_004eed10()
    ADD ESP,0x4                         ; 004b68ba
    RET                                 ; 004b68bd

