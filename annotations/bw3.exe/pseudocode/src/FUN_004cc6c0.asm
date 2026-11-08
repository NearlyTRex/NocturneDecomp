; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cc6c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc6c0
        ;   Label: FUN_004cc6c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cc6c1
    PUSH EBX                            ; 004cc6c5
    CALL FUN_00408600                   ; 004cc6c6
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 004cc6cb
    ADD EAX,0x158                       ; 004cc6ce
    PUSH EAX                            ; 004cc6d3
    CALL FUN_00462500                   ; 004cc6d4
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 004cc6d9
    LEA EBX,[EAX + 0xfffffea8]          ; 004cc6dc
    PUSH 0x5c4601                       ; 004cc6e2
    LEA EAX,[EBX + 0x158]               ; 004cc6e7
    PUSH EAX                            ; 004cc6ed
    MOV dword ptr [EBX + 0x154],0x5e0d04 ; 004cc6ee
    CALL FUN_004625f0                   ; 004cc6f8
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 004cc6fd
    MOV EAX,EBX                         ; 004cc700
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004cc702
    POP EBX                             ; 004cc70c
    RET                                 ; 004cc70d

