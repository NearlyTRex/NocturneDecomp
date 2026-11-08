; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00445bd0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445bd0
        ;   Label: FUN_00445bd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00445bd1
    PUSH EBX                            ; 00445bd5
    CALL FUN_00408600                   ; 00445bd6
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 00445bdb
    ADD EAX,0x158                       ; 00445bde
    PUSH EAX                            ; 00445be3
    CALL FUN_00462500                   ; 00445be4
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 00445be9
    LEA EBX,[EAX + 0xfffffea8]          ; 00445bec
    PUSH 0x5b99dd                       ; 00445bf2
    LEA EAX,[EBX + 0x158]               ; 00445bf7
    PUSH EAX                            ; 00445bfd
    MOV dword ptr [EBX + 0x154],0x5ddd54 ; 00445bfe
    CALL FUN_004625f0                   ; 00445c08
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 00445c0d
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00445c10
    MOV EAX,EBX                         ; 00445c1a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00445c1c
    POP EBX                             ; 00445c26
    RET                                 ; 00445c27

