; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_platfrm.cpp_FUN_0054e2e0()
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054e2e0
        ;   Label: core_platfrm.cpp_FUN_0054e2e0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0054e2e4
    MOV EAX,EDX                         ; 0054e2e8
    ADD EDX,0x208                       ; 0054e2ea
    CMP ECX,dword ptr [EAX + 0x51c]     ; 0054e2f0
        ;   Label: LAB_0054e2f0
    JZ 0x0054e300                       ; 0054e2f6 | LAB_0054e300
        ;   XREF to: 0054e300 (CONDITIONAL_JUMP)
    ADD EAX,0x34                        ; 0054e2f8
    CMP EAX,EDX                         ; 0054e2fb
    JNZ 0x0054e2f0                      ; 0054e2fd | LAB_0054e2f0
        ;   XREF to: 0054e2f0 (CONDITIONAL_JUMP)
    RET                                 ; 0054e2ff
    MOV dword ptr [EAX + 0x51c],0x0     ; 0054e300
        ;   Label: LAB_0054e300
    ADD EAX,0x34                        ; 0054e30a
    CMP EAX,EDX                         ; 0054e30d
    JNZ 0x0054e2f0                      ; 0054e30f | LAB_0054e2f0
        ;   XREF to: 0054e2f0 (CONDITIONAL_JUMP)
    RET                                 ; 0054e311

