; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_bugs_cpp_FUN_00425620(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00425620
        ;   Label: core_bugs.cpp_FUN_00425620
    MOV EDX,dword ptr [EAX + 0x70]      ; 00425624
    CMP EDX,0x2                         ; 00425627
    JZ 0x0042563b                       ; 0042562a
        ;   XREF to: 0042563b (CONDITIONAL_JUMP)  ; LAB_0042563b
    CMP dword ptr [EAX + 0xbebc],0x3    ; 0042562c
    JNZ 0x00425610                      ; 00425633
        ;   XREF to: 00425610 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 00425635
    RET                                 ; 0042563a
    MOV EAX,EDX                         ; 0042563b
        ;   Label: LAB_0042563b
    RET                                 ; 0042563d

