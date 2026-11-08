; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a3550(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004a3570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3550
        ;   Label: FUN_004a3550
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a3551
    PUSH EBX                            ; 004a3555
    CALL FUN_004a3570                   ; 004a3556
        ;   XREF to: 004a3570 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3570()
    ADD ESP,0x4                         ; 004a355b
    MOV EAX,EBX                         ; 004a355e
    POP EBX                             ; 004a3560
    RET                                 ; 004a3561

