; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cbb50(int param_1)
;
;
; Called Functions:
;   FUN_00409fc0
;   FUN_00454510
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cbb50
        ;   Label: FUN_004cbb50
    PUSH EDX                            ; 004cbb54
    CALL FUN_00409fc0                   ; 004cbb55
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    ADD ESP,0x4                         ; 004cbb5a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cbb5d
    ADD EAX,0x150                       ; 004cbb61
    PUSH EAX                            ; 004cbb66
    CALL FUN_00454510                   ; 004cbb67
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 004cbb6c
    RET                                 ; 004cbb6f

