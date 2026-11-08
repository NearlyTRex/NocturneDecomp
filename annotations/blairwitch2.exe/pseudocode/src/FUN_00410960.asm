; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410960(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00410ac0
;   FUN_00589c80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00410960
        ;   Label: FUN_00410960
    PUSH EDX                            ; 00410964
    CALL FUN_00410ac0                   ; 00410965
        ;   XREF to: 00410ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00410ac0()
    ADD ESP,0x4                         ; 0041096a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0041096d
    PUSH dword ptr [ESP + 0x8]          ; 00410971
    PUSH ECX                            ; 00410975
    CALL FUN_00589c80                   ; 00410976
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00589c80()
    ADD ESP,0x8                         ; 0041097b
    RET                                 ; 0041097e

