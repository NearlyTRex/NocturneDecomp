; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_iostream.cpp_doallocate_FUN_0060d677(streambuf * this_ptr)
;
; Parameters:
; streambuf *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_iostream.cpp_setBuffer_FUN_0060d6a8
;   crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790
;
; *****************************************************************************

section .text

    PUSH 0x204                          ; 0060d677
        ;   Label: crt_iostream.cpp_doallocate_FUN_0060d677
    CALL crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790 ; 0060d67c
        ;   XREF to: 0060d790 (UNCONDITIONAL_CALL)  ; void * crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790(uint size)
    ADD ESP,0x4                         ; 0060d681
    TEST EAX,EAX                        ; 0060d684
    JNZ 0x0060d68e                      ; 0060d686
        ;   XREF to: 0060d68e (CONDITIONAL_JUMP)  ; LAB_0060d68e
    MOV EAX,0xffffffff                  ; 0060d688
    RET                                 ; 0060d68d
    PUSH 0x1                            ; 0060d68e
        ;   Label: LAB_0060d68e
    LEA EDX,[EAX + 0x204]               ; 0060d690
    PUSH EDX                            ; 0060d696
    PUSH EAX                            ; 0060d697
    MOV EDX,dword ptr [ESP + 0x10]      ; 0060d698
    PUSH EDX                            ; 0060d69c
    CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8 ; 0060d69d
        ;   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_0060d6a8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    ADD ESP,0x10                        ; 0060d6a2
    XOR EAX,EAX                         ; 0060d6a5
    RET                                 ; 0060d6a7

