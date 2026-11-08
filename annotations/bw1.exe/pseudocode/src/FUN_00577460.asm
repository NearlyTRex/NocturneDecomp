; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00577460(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005726e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577460
        ;   Label: FUN_00577460
    MOV EBX,dword ptr [ESP + 0x8]       ; 00577461
    PUSH EBX                            ; 00577465
    CALL FUN_005726e0                   ; 00577466
        ;   XREF to: 005726e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005726e0()
    ADD ESP,0x4                         ; 0057746b
    MOV EAX,EBX                         ; 0057746e
    POP EBX                             ; 00577470
    RET                                 ; 00577471

