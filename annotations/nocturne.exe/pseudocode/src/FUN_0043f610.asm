; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043f610(int param_1)
;
;
; Called Functions:
;   FUN_0043f330
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043f610
        ;   Label: FUN_0043f610
    CMP dword ptr [EAX + 0x174],0xfde8  ; 0043f614
    JG 0x0043f623                       ; 0043f61e
        ;   XREF to: 0043f623 (CONDITIONAL_JUMP)  ; LAB_0043f623
    XOR EAX,EAX                         ; 0043f620
    RET                                 ; 0043f622
    PUSH EAX                            ; 0043f623
        ;   Label: LAB_0043f623
    CALL FUN_0043f330                   ; 0043f624
        ;   XREF to: 0043f330 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f330()
    ADD ESP,0x4                         ; 0043f629
    RET                                 ; 0043f62c

