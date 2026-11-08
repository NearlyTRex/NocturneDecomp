; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056d1e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d1e0
        ;   Label: FUN_0056d1e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056d1e1
    PUSH EBX                            ; 0056d1e5
    CALL FUN_00408600                   ; 0056d1e6
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 0056d1eb
    ADD EAX,0x158                       ; 0056d1ee
    PUSH EAX                            ; 0056d1f3
    CALL FUN_00462500                   ; 0056d1f4
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 0056d1f9
    LEA EBX,[EAX + 0xfffffea8]          ; 0056d1fc
    PUSH 0x5d6596                       ; 0056d202
    LEA EAX,[EBX + 0x158]               ; 0056d207
    PUSH EAX                            ; 0056d20d
    MOV dword ptr [EBX + 0x154],0x5e57b4 ; 0056d20e
    CALL FUN_004625f0                   ; 0056d218
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0056d21d
    MOV EAX,EBX                         ; 0056d220
    POP EBX                             ; 0056d222
    RET                                 ; 0056d223

