; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00506b20(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_00447db0
;   FUN_005069f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506b20
        ;   Label: FUN_00506b20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00506b21
    PUSH EBX                            ; 00506b25
    CALL FUN_00408850                   ; 00506b26
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 00506b2b
    LEA EAX,[EBX + 0x158]               ; 00506b2e
    PUSH EAX                            ; 00506b34
    LEA EAX,[EBX + 0x1a4]               ; 00506b35
    PUSH EAX                            ; 00506b3b
    CALL FUN_00447db0                   ; 00506b3c
        ;   XREF to: 00447db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00447db0()
    ADD ESP,0x8                         ; 00506b41
    PUSH EBX                            ; 00506b44
    CALL FUN_005069f0                   ; 00506b45
        ;   XREF to: 005069f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005069f0()
    ADD ESP,0x4                         ; 00506b4a
    MOV dword ptr [EBX + 0x17c],0x0     ; 00506b4d
    POP EBX                             ; 00506b57
    RET                                 ; 00506b58

