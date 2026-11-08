; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414470(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414470
        ;   Label: FUN_00414470
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414471
    PUSH EBX                            ; 00414475
    CALL FUN_00408850                   ; 00414476
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 0041447b
    LEA EAX,[EBX + 0x158]               ; 0041447e
    PUSH EAX                            ; 00414484
    CALL FUN_004688e0                   ; 00414485
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 0041448a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0041448d
    POP EBX                             ; 00414497
    RET                                 ; 00414498

