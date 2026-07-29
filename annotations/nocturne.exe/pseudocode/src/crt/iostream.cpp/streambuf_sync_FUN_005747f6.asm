; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_iostream_cpp_streambuf_sync_FUN_005747f6(streambuf *streambuf_ptr)
;
; Parameters:
; streambuf *      Stack[0x4]:4   streambuf_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005747f6
        ;   Label: crt_iostream.cpp_streambuf_sync_FUN_005747f6
    MOV EDX,dword ptr [EAX + 0x14]      ; 005747fa
    MOV ECX,dword ptr [EAX + 0x10]      ; 005747fd
    CMP EDX,ECX                         ; 00574800
    JC 0x0057480e                       ; 00574802
        ;   XREF to: 0057480e (CONDITIONAL_JUMP)  ; LAB_0057480e
    MOV EDX,dword ptr [EAX + 0x20]      ; 00574804
    MOV EAX,dword ptr [EAX + 0x18]      ; 00574807
    CMP EDX,EAX                         ; 0057480a
    JBE 0x00574814                      ; 0057480c
        ;   XREF to: 00574814 (CONDITIONAL_JUMP)  ; LAB_00574814
    MOV EAX,0xffffffff                  ; 0057480e
        ;   Label: LAB_0057480e
    RET                                 ; 00574813
    XOR EAX,EAX                         ; 00574814
        ;   Label: LAB_00574814
    RET                                 ; 00574816

