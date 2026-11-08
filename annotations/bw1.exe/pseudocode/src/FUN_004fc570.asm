; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc570(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fc570
        ;   Label: FUN_004fc570
    ADD EAX,0x158                       ; 004fc574
    PUSH EAX                            ; 004fc579
    CALL FUN_004688e0                   ; 004fc57a
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004fc57f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004fc582
    PUSH EDX                            ; 004fc586
    CALL FUN_00408850                   ; 004fc587
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 004fc58c
    RET                                 ; 004fc58f

