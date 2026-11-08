; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ad00(int param_1)
;
;
; XREF[1]:
;   FUN_004a1760 at 004a1876
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ad00
        ;   Label: FUN_0049ad00
    MOV EDX,dword ptr [EAX + 0x20]      ; 0049ad04
    DEC EDX                             ; 0049ad07
    MOV dword ptr [EAX + 0x20],EDX      ; 0049ad08
    TEST EDX,EDX                        ; 0049ad0b
    JL 0x0049ad10                       ; 0049ad0d
        ;   XREF to: 0049ad10 (CONDITIONAL_JUMP)  ; LAB_0049ad10
    RET                                 ; 0049ad0f
    MOV dword ptr [EAX + 0x20],0x0      ; 0049ad10
        ;   Label: LAB_0049ad10
    RET                                 ; 0049ad17

