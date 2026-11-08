; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0042f390(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00565760
;   FUN_00569eb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0042f390
        ;   Label: FUN_0042f390
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042f394
    PUSH EDX                            ; 0042f398
    ADD EAX,0x158                       ; 0042f399
    PUSH EAX                            ; 0042f39e
    CALL FUN_00569eb0                   ; 0042f39f
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 0042f3a4
    PUSH EAX                            ; 0042f3a7
    CALL FUN_00565760                   ; 0042f3a8
        ;   XREF to: 00565760 (UNCONDITIONAL_CALL)  ; undefined FUN_00565760()
    ADD ESP,0x8                         ; 0042f3ad
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0042f3b0
    RET                                 ; 0042f3b3

