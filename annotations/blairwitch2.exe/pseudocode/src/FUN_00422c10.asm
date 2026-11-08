; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00422c10(int param_1)
;
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00503810
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422c10
        ;   Label: FUN_00422c10
    ADD EAX,0x2b4                       ; 00422c14
    PUSH EAX                            ; 00422c19
    CALL FUN_00503810                   ; 00422c1a
        ;   XREF to: 00503810 (UNCONDITIONAL_CALL)  ; undefined FUN_00503810()
    ADD ESP,0x4                         ; 00422c1f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00422c22
    PUSH EDX                            ; 00422c26
    CALL FUN_00408ac0                   ; 00422c27
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    ADD ESP,0x4                         ; 00422c2c
    RET                                 ; 00422c2f

