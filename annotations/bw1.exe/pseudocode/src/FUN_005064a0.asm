; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005064a0(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005064a0
        ;   Label: FUN_005064a0
    PUSH EDX                            ; 005064a4
    CALL FUN_00408850                   ; 005064a5
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 005064aa
    MOV EAX,dword ptr [ESP + 0x4]       ; 005064ad
    ADD EAX,0x158                       ; 005064b1
    PUSH EAX                            ; 005064b6
    CALL FUN_004688e0                   ; 005064b7
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 005064bc
    RET                                 ; 005064bf

