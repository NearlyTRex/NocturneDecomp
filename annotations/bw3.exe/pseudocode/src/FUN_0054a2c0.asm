; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054a2c0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00548750 at 0054876e
;
; Called Functions:
;   FUN_0054bb60
;   FUN_0054bd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a2c0
        ;   Label: FUN_0054a2c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054a2c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054a2c5
    PUSH EBX                            ; 0054a2c9
    MOV dword ptr [EBX + 0x35ac],EAX    ; 0054a2ca
    CALL FUN_0054bb60                   ; 0054a2d0
        ;   XREF to: 0054bb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bb60()
    ADD ESP,0x4                         ; 0054a2d5
    PUSH EBX                            ; 0054a2d8
    CALL FUN_0054bd10                   ; 0054a2d9
        ;   XREF to: 0054bd10 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bd10()
    ADD ESP,0x4                         ; 0054a2de
    POP EBX                             ; 0054a2e1
    RET                                 ; 0054a2e2

