; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad640(int param_1)
;
;
; XREF[2]:
;   FUN_004104c0 at 004104c5
;   FUN_005a21a0 at 005a21bb
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;   FUN_005ade40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad640
        ;   Label: FUN_005ad640
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ad641
    PUSH EBX                            ; 005ad645
    CALL FUN_00408850                   ; 005ad646
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 005ad64b
    LEA EAX,[EBX + 0x158]               ; 005ad64e
    PUSH EAX                            ; 005ad654
    CALL FUN_004688e0                   ; 005ad655
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 005ad65a
    PUSH EBX                            ; 005ad65d
    CALL FUN_005ade40                   ; 005ad65e
        ;   XREF to: 005ade40 (UNCONDITIONAL_CALL)  ; undefined FUN_005ade40()
    ADD ESP,0x4                         ; 005ad663
    MOV dword ptr [EBX + 0x574],0x0     ; 005ad666
    POP EBX                             ; 005ad670
    RET                                 ; 005ad671

