; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00417cb0(int param_1)
;
;
; Called Functions:
;   FUN_0049f180
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00417cb0
        ;   Label: FUN_00417cb0
    ADD EAX,0xc                         ; 00417cb4
    PUSH EAX                            ; 00417cb7
    CALL FUN_0049f180                   ; 00417cb8
        ;   XREF to: 0049f180 (UNCONDITIONAL_CALL)  ; undefined FUN_0049f180()
    ADD ESP,0x4                         ; 00417cbd
    SUB EAX,0xc                         ; 00417cc0
    RET                                 ; 00417cc3

