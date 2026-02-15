; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_iostream_cpp_streambuf_seekoff_FUN_0060bb5f(streambuf *this_ptr,int off,int dir,int which)
;
; Parameters:
; streambuf *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   off
; int              Stack[0xc]:4   dir
; int              Stack[0x10]:4   which
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060bb5f
        ;   Label: crt_iostream.cpp_streambuf_seekoff_FUN_0060bb5f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060bb60
    MOV ECX,dword ptr [ESP + 0x10]      ; 0060bb64
    PUSH ECX                            ; 0060bb68
    PUSH 0x0                            ; 0060bb69
    MOV EBX,dword ptr [ESP + 0x14]      ; 0060bb6b
    PUSH EBX                            ; 0060bb6f
    MOV EAX,dword ptr [EDX + 0x28]      ; 0060bb70
    PUSH EDX                            ; 0060bb73
    CALL dword ptr [EAX + 0x18]         ; 0060bb74
    ADD ESP,0x10                        ; 0060bb77
    POP EBX                             ; 0060bb7a
    RET                                 ; 0060bb7b

