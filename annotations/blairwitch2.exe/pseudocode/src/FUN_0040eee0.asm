; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040eee0(int param_1)
;
;
; Called Functions:
;   FUN_00487eb0
;   FUN_00547480
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040eee0
        ;   Label: FUN_0040eee0
    PUSH EDX                            ; 0040eee4
    CALL FUN_00487eb0                   ; 0040eee5
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    ADD ESP,0x4                         ; 0040eeea
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040eeed
    ADD EAX,0x2b4                       ; 0040eef1
    PUSH EAX                            ; 0040eef6
    CALL FUN_00547480                   ; 0040eef7
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 0040eefc
    RET                                 ; 0040eeff

