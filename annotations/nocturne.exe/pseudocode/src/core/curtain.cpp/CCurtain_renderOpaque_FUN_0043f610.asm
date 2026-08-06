; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_0043f610(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_curtain.cpp_CCurtain_FUN_0043f330
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043f610
        ;   Label: core_curtain.cpp_CCurtain_renderOpaque_FUN_0043f610
    CMP dword ptr [EAX + 0x174],0xfde8  ; 0043f614
    JG 0x0043f623                       ; 0043f61e
        ;   XREF to: 0043f623 (CONDITIONAL_JUMP)  ; LAB_0043f623
    XOR EAX,EAX                         ; 0043f620
    RET                                 ; 0043f622
    PUSH EAX                            ; 0043f623
        ;   Label: LAB_0043f623
    CALL core_curtain.cpp_CCurtain_FUN_0043f330 ; 0043f624
        ;   XREF to: 0043f330 (UNCONDITIONAL_CALL)  ; int core_curtain.cpp_CCurtain_FUN_0043f330(CCurtain * this_ptr)
    ADD ESP,0x4                         ; 0043f629
    RET                                 ; 0043f62c

