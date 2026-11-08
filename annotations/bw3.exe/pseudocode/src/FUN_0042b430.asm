; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b430(int param_1)
;
;
; Called Functions:
;   FUN_004088d0
;   FUN_004fc2c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b430
        ;   Label: FUN_0042b430
    ADD EAX,0x158                       ; 0042b434
    PUSH EAX                            ; 0042b439
    CALL FUN_004fc2c0                   ; 0042b43a
        ;   XREF to: 004fc2c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc2c0()
    ADD ESP,0x4                         ; 0042b43f
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b442
    PUSH EDX                            ; 0042b446
    CALL FUN_004088d0                   ; 0042b447
        ;   XREF to: 004088d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088d0()
    ADD ESP,0x4                         ; 0042b44c
    RET                                 ; 0042b44f

