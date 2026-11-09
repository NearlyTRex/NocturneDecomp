; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059aa80_cpp_FUN_0059bb40(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059bb40
        ;   Label: unkaddr_0059aa80.cpp_FUN_0059bb40
    MOV EDX,dword ptr [EAX + 0x24]      ; 0059bb44
    MOV dword ptr [EAX + 0x2c],0x0      ; 0059bb47
    MOV dword ptr [EAX + 0x28],EDX      ; 0059bb4e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0059bb51
    MOV dword ptr [EAX + 0x24],EDX      ; 0059bb55
    RET                                 ; 0059bb58

