; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_00502750(undefined1 *param_1)
;
;
; XREF[3]:
;   FUN_00551d20 at 00551dba
;   FUN_00552350 at 00552436
;   FUN_00557570 at 00557746
;
; Called Functions:
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502750
        ;   Label: FUN_00502750
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502751
    PUSH 0x2c                           ; 00502755
    PUSH 0x0                            ; 00502757
    LEA EAX,[EBX + 0x5320]              ; 00502759
    MOV dword ptr [EBX + 0x108],0x0     ; 0050275f
    PUSH EAX                            ; 00502769
    MOV dword ptr [EBX + 0x10c],0x0     ; 0050276a
    CALL FUN_005a28f0                   ; 00502774
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 00502779
    MOV EAX,EBX                         ; 0050277c
    MOV byte ptr [EBX],0x0              ; 0050277e
    POP EBX                             ; 00502781
    RET                                 ; 00502782

