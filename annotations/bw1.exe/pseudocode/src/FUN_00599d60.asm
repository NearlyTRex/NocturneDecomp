; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00599d60(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599d60
        ;   Label: FUN_00599d60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599d61
    PUSH EBX                            ; 00599d65
    CALL FUN_00408850                   ; 00599d66
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 00599d6b
    LEA EAX,[EBX + 0x158]               ; 00599d6e
    PUSH EAX                            ; 00599d74
    CALL FUN_004688e0                   ; 00599d75
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 00599d7a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00599d7d
    POP EBX                             ; 00599d87
    RET                                 ; 00599d88

