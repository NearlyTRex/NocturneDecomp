; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041b150(int param_1)
;
;
; Called Functions:
;   FUN_00408730
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b150
        ;   Label: FUN_0041b150
    PUSH 0x1                            ; 0041b154
    ADD EAX,0xc                         ; 0041b156
    PUSH EAX                            ; 0041b159
    CALL FUN_00408730                   ; 0041b15a
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0041b15f
    SUB EAX,0xc                         ; 0041b162
    RET                                 ; 0041b165

