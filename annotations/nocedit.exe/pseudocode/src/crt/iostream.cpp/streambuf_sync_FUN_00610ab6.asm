; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_iostream_cpp_streambuf_sync_FUN_00610ab6(streambuf *streambuf_ptr)
;
; Parameters:
; streambuf *      Stack[0x4]:4   streambuf_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00610ab6
        ;   Label: crt_iostream.cpp_streambuf_sync_FUN_00610ab6
    MOV EDX,dword ptr [EAX + 0x14]      ; 00610aba
    MOV ECX,dword ptr [EAX + 0x10]      ; 00610abd
    CMP EDX,ECX                         ; 00610ac0
    JC 0x00610ace                       ; 00610ac2
        ;   XREF to: 00610ace (CONDITIONAL_JUMP)  ; LAB_00610ace
    MOV EDX,dword ptr [EAX + 0x20]      ; 00610ac4
    MOV EAX,dword ptr [EAX + 0x18]      ; 00610ac7
    CMP EDX,EAX                         ; 00610aca
    JBE 0x00610ad4                      ; 00610acc
        ;   XREF to: 00610ad4 (CONDITIONAL_JUMP)  ; LAB_00610ad4
    MOV EAX,0xffffffff                  ; 00610ace
        ;   Label: LAB_00610ace
    RET                                 ; 00610ad3
    XOR EAX,EAX                         ; 00610ad4
        ;   Label: LAB_00610ad4
    RET                                 ; 00610ad6

