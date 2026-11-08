; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e69c0(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e69c0
        ;   Label: FUN_004e69c0
    ADD EAX,0x158                       ; 004e69c4
    PUSH EAX                            ; 004e69c9
    CALL FUN_004688e0                   ; 004e69ca
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004e69cf
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e69d2
    PUSH EDX                            ; 004e69d6
    CALL FUN_00408850                   ; 004e69d7
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 004e69dc
    RET                                 ; 004e69df

