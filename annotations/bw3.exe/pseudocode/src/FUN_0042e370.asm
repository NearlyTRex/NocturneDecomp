; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0042e370(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0054a2f0
;   FUN_0054ea40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0042e370
        ;   Label: FUN_0042e370
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042e374
    PUSH EDX                            ; 0042e378
    ADD EAX,0x158                       ; 0042e379
    PUSH EAX                            ; 0042e37e
    CALL FUN_0054ea40                   ; 0042e37f
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    ADD ESP,0x4                         ; 0042e384
    PUSH EAX                            ; 0042e387
    CALL FUN_0054a2f0                   ; 0042e388
        ;   XREF to: 0054a2f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a2f0()
    ADD ESP,0x8                         ; 0042e38d
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0042e390
    RET                                 ; 0042e393

