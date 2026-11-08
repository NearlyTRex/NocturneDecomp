; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_0052ae40(undefined1 *param_1)
;
;
; XREF[3]:
;   FUN_0056e830 at 0056e8ca
;   FUN_00572d20 at 0057317e
;   FUN_00574410 at 005745e6
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ae40
        ;   Label: FUN_0052ae40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052ae41
    PUSH 0x2c                           ; 0052ae45
    PUSH 0x0                            ; 0052ae47
    LEA EAX,[EBX + 0x5320]              ; 0052ae49
    MOV dword ptr [EBX + 0x108],0x0     ; 0052ae4f
    PUSH EAX                            ; 0052ae59
    MOV dword ptr [EBX + 0x10c],0x0     ; 0052ae5a
    CALL FUN_005bfb70                   ; 0052ae64
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0052ae69
    MOV EAX,EBX                         ; 0052ae6c
    MOV byte ptr [EBX],0x0              ; 0052ae6e
    POP EBX                             ; 0052ae71
    RET                                 ; 0052ae72

