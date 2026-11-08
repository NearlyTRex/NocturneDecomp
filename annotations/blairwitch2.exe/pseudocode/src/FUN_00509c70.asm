; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_00509c70(undefined1 *param_1)
;
;
; XREF[3]:
;   FUN_0054c1c0 at 0054c25a
;   FUN_0054c7f0 at 0054c8d6
;   FUN_005519e0 at 00551bb4
;
; Called Functions:
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509c70
        ;   Label: FUN_00509c70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00509c71
    PUSH 0x2c                           ; 00509c75
    PUSH 0x0                            ; 00509c77
    LEA EAX,[EBX + 0x5320]              ; 00509c79
    MOV dword ptr [EBX + 0x108],0x0     ; 00509c7f
    PUSH EAX                            ; 00509c89
    MOV dword ptr [EBX + 0x10c],0x0     ; 00509c8a
    CALL FUN_005b77c0                   ; 00509c94
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00509c99
    MOV EAX,EBX                         ; 00509c9c
    MOV byte ptr [EBX],0x0              ; 00509c9e
    POP EBX                             ; 00509ca1
    RET                                 ; 00509ca2

