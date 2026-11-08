; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040dc50(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040dc50
        ;   Label: FUN_0040dc50
    ADD EAX,0x158                       ; 0040dc54
    PUSH EAX                            ; 0040dc59
    CALL FUN_004688e0                   ; 0040dc5a
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 0040dc5f
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040dc62
    PUSH EDX                            ; 0040dc66
    CALL FUN_00408850                   ; 0040dc67
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 0040dc6c
    NOP                                 ; 0040dc6f
    RET                                 ; 0040dc70

