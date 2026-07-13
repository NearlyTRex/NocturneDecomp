; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0bd0(int param_1)
;
;
; Called Functions:
;   FUN_00409fc0
;   FUN_00454510
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b0bd0
        ;   Label: FUN_004b0bd0
    ADD EAX,0x150                       ; 004b0bd4
    PUSH EAX                            ; 004b0bd9
    CALL FUN_00454510                   ; 004b0bda
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 004b0bdf
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b0be2
    PUSH EDX                            ; 004b0be6
    CALL FUN_00409fc0                   ; 004b0be7
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    ADD ESP,0x4                         ; 004b0bec
    RET                                 ; 004b0bef

