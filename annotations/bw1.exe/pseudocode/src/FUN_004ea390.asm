; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea390(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ea390
        ;   Label: FUN_004ea390
    ADD EAX,0x158                       ; 004ea394
    PUSH EAX                            ; 004ea399
    CALL FUN_004688e0                   ; 004ea39a
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004ea39f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ea3a2
    PUSH EDX                            ; 004ea3a6
    CALL FUN_00408850                   ; 004ea3a7
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 004ea3ac
    NOP                                 ; 004ea3af
    RET                                 ; 004ea3b0

