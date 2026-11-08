; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d1d80(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004d2180 at 004d2186
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1d80
        ;   Label: FUN_004d1d80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d1d81
    PUSH EBX                            ; 004d1d85
    CALL FUN_00408600                   ; 004d1d86
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 004d1d8b
    ADD EAX,0x158                       ; 004d1d8e
    PUSH EAX                            ; 004d1d93
    CALL FUN_00462500                   ; 004d1d94
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 004d1d99
    LEA EBX,[EAX + 0xfffffea8]          ; 004d1d9c
    PUSH 0x5c4a7a                       ; 004d1da2
    LEA EAX,[EBX + 0x158]               ; 004d1da7
    PUSH EAX                            ; 004d1dad
    MOV dword ptr [EBX + 0x154],0x5e1314 ; 004d1dae
    CALL FUN_004625f0                   ; 004d1db8
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004d1dbd
    MOV dword ptr [EBX + 0x2d8],0x42480000 ; 004d1dc7
    ADD ESP,0x8                         ; 004d1dd1
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004d1dd4
    MOV EAX,EBX                         ; 004d1dde
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004d1de0
    POP EBX                             ; 004d1dea
    RET                                 ; 004d1deb

