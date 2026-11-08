; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e0100(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;   FUN_00495b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0100
        ;   Label: FUN_004e0100
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e0101
    PUSH EBX                            ; 004e0105
    CALL FUN_00408600                   ; 004e0106
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 004e010b
    ADD EAX,0x158                       ; 004e010e
    PUSH EAX                            ; 004e0113
    CALL FUN_00462500                   ; 004e0114
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 004e0119
    LEA EBX,[EAX + 0x2c8]               ; 004e011c
    PUSH EBX                            ; 004e0122
    CALL FUN_00495b40                   ; 004e0123
        ;   XREF to: 00495b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00495b40()
    ADD ESP,0x4                         ; 004e0128
    SUB EBX,0x420                       ; 004e012b
    PUSH 0x5c68d1                       ; 004e0131
    LEA EAX,[EBX + 0x158]               ; 004e0136
    PUSH EAX                            ; 004e013c
    MOV dword ptr [EBX + 0x154],0x5e23d4 ; 004e013d
    CALL FUN_004625f0                   ; 004e0147
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004e014c
    MOV byte ptr [EBX + 0x2e0],0x0      ; 004e0156
    MOV byte ptr [EBX + 0x344],0x0      ; 004e015d
    MOV byte ptr [EBX + 0x3a8],0x0      ; 004e0164
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004e016b
    MOV dword ptr [EBX + 0x40c],0x1     ; 004e0175
    MOV dword ptr [EBX + 0x410],0x0     ; 004e017f
    MOV dword ptr [EBX + 0x414],0x17    ; 004e0189
    MOV dword ptr [EBX + 0x418],0x0     ; 004e0193
    MOV dword ptr [EBX + 0x41c],0x0     ; 004e019d
    ADD ESP,0x8                         ; 004e01a7
    MOV dword ptr [EBX + 0x80c],0x2     ; 004e01aa
    MOV EAX,EBX                         ; 004e01b4
    MOV dword ptr [EBX + 0x810],0x1     ; 004e01b6
    POP EBX                             ; 004e01c0
    RET                                 ; 004e01c1

