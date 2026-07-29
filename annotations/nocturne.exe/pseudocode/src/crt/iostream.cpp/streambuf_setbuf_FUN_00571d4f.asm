; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; streambuf * __watcallStack crt_iostream_cpp_streambuf_setbuf_FUN_00571d4f(streambuf *this_ptr,void *buffer_start,int buffer_size)
;
; Parameters:
; streambuf *      Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   buffer_start
; int              Stack[0xc]:4   buffer_size
;
; Called Functions:
;   crt_iostream.cpp_setBuffer_FUN_00571df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571d4f
        ;   Label: crt_iostream.cpp_streambuf_setbuf_FUN_00571d4f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00571d50
    MOV ECX,dword ptr [ESP + 0xc]       ; 00571d54
    MOV EDX,dword ptr [ESP + 0x10]      ; 00571d58
    MOV EAX,dword ptr [EBX + 0x4]       ; 00571d5c
    TEST EAX,EAX                        ; 00571d5f
    JNZ 0x00571d83                      ; 00571d61
        ;   XREF to: 00571d83 (CONDITIONAL_JUMP)  ; LAB_00571d83
    TEST ECX,ECX                        ; 00571d63
    JZ 0x00571d87                       ; 00571d65
        ;   XREF to: 00571d87 (CONDITIONAL_JUMP)  ; LAB_00571d87
    TEST EDX,EDX                        ; 00571d67
    JLE 0x00571d87                      ; 00571d69
        ;   XREF to: 00571d87 (CONDITIONAL_JUMP)  ; LAB_00571d87
    CMP EDX,0x4                         ; 00571d6b
    JLE 0x00571d8f                      ; 00571d6e
        ;   XREF to: 00571d8f (CONDITIONAL_JUMP)  ; LAB_00571d8f
    PUSH EAX                            ; 00571d70
    LEA EAX,[ECX + EDX*0x1]             ; 00571d71
    PUSH EAX                            ; 00571d74
    PUSH ECX                            ; 00571d75
    PUSH EBX                            ; 00571d76
        ;   Label: LAB_00571d76
    CALL crt_iostream.cpp_setBuffer_FUN_00571df8 ; 00571d77
        ;   XREF to: 00571df8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_00571df8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    ADD ESP,0x10                        ; 00571d7c
    MOV EAX,EBX                         ; 00571d7f
    POP EBX                             ; 00571d81
    RET                                 ; 00571d82
    XOR EAX,EAX                         ; 00571d83
        ;   Label: LAB_00571d83
    POP EBX                             ; 00571d85
    RET                                 ; 00571d86
    PUSH 0x0                            ; 00571d87
        ;   Label: LAB_00571d87
    PUSH 0x0                            ; 00571d89
    PUSH 0x0                            ; 00571d8b
    JMP 0x00571d76                      ; 00571d8d
        ;   XREF to: 00571d76 (UNCONDITIONAL_JUMP)  ; LAB_00571d76
    PUSH EAX                            ; 00571d8f
        ;   Label: LAB_00571d8f
    PUSH EAX                            ; 00571d90
    PUSH EAX                            ; 00571d91
    PUSH EBX                            ; 00571d92
    CALL crt_iostream.cpp_setBuffer_FUN_00571df8 ; 00571d93
        ;   XREF to: 00571df8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_00571df8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    ADD ESP,0x10                        ; 00571d98
    XOR EAX,EAX                         ; 00571d9b
    POP EBX                             ; 00571d9d
    RET                                 ; 00571d9e

