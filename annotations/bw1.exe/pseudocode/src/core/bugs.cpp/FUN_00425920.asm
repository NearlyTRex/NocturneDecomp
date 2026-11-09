; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bugs_cpp_FUN_00425920(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00425920
        ;   Label: core_bugs.cpp_FUN_00425920
    MOV EDX,dword ptr [EAX + 0x70]      ; 00425924
    CMP EDX,0x2                         ; 00425927
    JZ 0x0042593b                       ; 0042592a
        ;   XREF to: 0042593b (CONDITIONAL_JUMP)  ; LAB_0042593b
    CMP dword ptr [EAX + 0xc268],0x3    ; 0042592c
    JNZ 0x00425910                      ; 00425933
        ;   XREF to: 00425910 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 00425935
    RET                                 ; 0042593a
    MOV EAX,EDX                         ; 0042593b
        ;   Label: LAB_0042593b
    RET                                 ; 0042593d

