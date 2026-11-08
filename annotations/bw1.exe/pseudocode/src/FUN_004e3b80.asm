; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e3b80(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e3b80
        ;   Label: FUN_004e3b80
    PUSH EDX                            ; 004e3b84
    CALL FUN_00408850                   ; 004e3b85
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 004e3b8a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e3b8d
    ADD EAX,0x158                       ; 004e3b91
    PUSH EAX                            ; 004e3b96
    CALL FUN_004688e0                   ; 004e3b97
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004e3b9c
    RET                                 ; 004e3b9f

