; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059d350_cpp_FUN_0059da70(int param_1)
;
;
; XREF[4]:
;   unkaddr_0059d350.cpp_FUN_0059da20 at 0059da64
;   unkaddr_0059d350.cpp_FUN_0059dc80 at 0059dc90
;   unkafter_basicene.cpp_FUN_0059e3b0 at 0059e589
;   unkafter_basicene.cpp_FUN_0059e6a0 at 0059e73c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059da70
        ;   Label: unkaddr_0059d350.cpp_FUN_0059da70
    MOV EDX,dword ptr [EAX + 0x844]     ; 0059da74
    TEST EDX,EDX                        ; 0059da7a
    JNZ 0x0059da93                      ; 0059da7c
        ;   XREF to: 0059da93 (CONDITIONAL_JUMP)  ; LAB_0059da93
    MOV dword ptr [EAX + 0x848],0x0     ; 0059da7e
        ;   Label: LAB_0059da7e
    MOV dword ptr [EAX + 0x844],0x0     ; 0059da88
    RET                                 ; 0059da92
    MOV dword ptr [EAX + 0x840],EDX     ; 0059da93
        ;   Label: LAB_0059da93
    JMP 0x0059da7e                      ; 0059da99
        ;   XREF to: 0059da7e (UNCONDITIONAL_JUMP)  ; LAB_0059da7e

