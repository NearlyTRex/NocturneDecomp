; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_004e7d90(undefined1 *param_1)
;
;
; XREF[3]:
;   FUN_00522480 at 0052251c
;   FUN_005265a0 at 005269ab
;   FUN_005279e0 at 00527b70
;
; Called Functions:
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7d90
        ;   Label: FUN_004e7d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7d91
    PUSH 0x2c                           ; 004e7d95
    PUSH 0x0                            ; 004e7d97
    LEA EAX,[EBX + 0x5320]              ; 004e7d99
    MOV dword ptr [EBX + 0x108],0x0     ; 004e7d9f
    PUSH EAX                            ; 004e7da9
    MOV dword ptr [EBX + 0x10c],0x0     ; 004e7daa
    CALL FUN_00563cc0                   ; 004e7db4
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 004e7db9
    MOV EAX,EBX                         ; 004e7dbc
    MOV byte ptr [EBX],0x0              ; 004e7dbe
    POP EBX                             ; 004e7dc1
    RET                                 ; 004e7dc2

