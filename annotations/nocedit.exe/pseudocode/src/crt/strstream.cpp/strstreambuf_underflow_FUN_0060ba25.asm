; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_strstream.cpp_strstreambuf_underflow_FUN_0060ba25(strstreambuf * this_ptr)
;
; Parameters:
; strstreambuf *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060ba25
        ;   Label: crt_strstream.cpp_strstreambuf_underflow_FUN_0060ba25
    TEST byte ptr [EAX + 0x3c],0x4      ; 0060ba29
    JNZ 0x0060ba4e                      ; 0060ba2d | LAB_0060ba4e
        ;   XREF to: 0060ba4e (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX + 0x20]      ; 0060ba2f
    MOV ECX,dword ptr [EAX + 0x10]      ; 0060ba32
    CMP EDX,ECX                         ; 0060ba35
    JBE 0x0060ba6a                      ; 0060ba37 | LAB_0060ba6a
        ;   XREF to: 0060ba6a (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0x14]      ; 0060ba39
    TEST ECX,ECX                        ; 0060ba3c
    JZ 0x0060ba5c                       ; 0060ba3e | LAB_0060ba5c
        ;   XREF to: 0060ba5c (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x10],EDX      ; 0060ba40
    MOV EAX,dword ptr [EAX + 0x14]      ; 0060ba43
        ;   Label: LAB_0060ba43
    MOV AL,byte ptr [EAX]               ; 0060ba46
    AND EAX,0xff                        ; 0060ba48
    RET                                 ; 0060ba4d
    MOV ECX,dword ptr [EAX + 0x10]      ; 0060ba4e
        ;   Label: LAB_0060ba4e
    ADD ECX,0x200                       ; 0060ba51
    MOV dword ptr [EAX + 0x10],ECX      ; 0060ba57
    JMP 0x0060ba43                      ; 0060ba5a | LAB_0060ba43
        ;   XREF to: 0060ba43 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0x18]      ; 0060ba5c
        ;   Label: LAB_0060ba5c
    MOV dword ptr [EAX + 0x10],EDX      ; 0060ba5f
    MOV dword ptr [EAX + 0xc],ECX       ; 0060ba62
    MOV dword ptr [EAX + 0x14],ECX      ; 0060ba65
    JMP 0x0060ba43                      ; 0060ba68 | LAB_0060ba43
        ;   XREF to: 0060ba43 (UNCONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0060ba6a
        ;   Label: LAB_0060ba6a
    RET                                 ; 0060ba6f

