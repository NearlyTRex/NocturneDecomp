; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ddb10(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ddb10
        ;   Label: FUN_004ddb10
    PUSH EDX                            ; 004ddb14
    CALL FUN_00408850                   ; 004ddb15
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 004ddb1a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ddb1d
    ADD EAX,0x158                       ; 004ddb21
    PUSH EAX                            ; 004ddb26
    CALL FUN_004688e0                   ; 004ddb27
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004ddb2c
    RET                                 ; 004ddb2f

