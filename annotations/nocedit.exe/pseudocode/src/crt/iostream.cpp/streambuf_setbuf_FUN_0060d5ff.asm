; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack streambuf * __watcallStack crt_iostream_cpp_streambuf_setbuf_FUN_0060d5ff (streambuf *this_ptr,void *buffer_start,int buffer_size)
;
; Parameters:
; streambuf *      Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   buffer_start
; int              Stack[0xc]:4   buffer_size
;
; Called Functions:
;   crt_iostream.cpp_setBuffer_FUN_0060d6a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d5ff
        ;   Label: crt_iostream.cpp_streambuf_setbuf_FUN_0060d5ff
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060d600
    MOV ECX,dword ptr [ESP + 0xc]       ; 0060d604
    MOV EDX,dword ptr [ESP + 0x10]      ; 0060d608
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060d60c
    TEST EAX,EAX                        ; 0060d60f
    JNZ 0x0060d633                      ; 0060d611
        ;   XREF to: 0060d633 (CONDITIONAL_JUMP)  ; LAB_0060d633
    TEST ECX,ECX                        ; 0060d613
    JZ 0x0060d637                       ; 0060d615
        ;   XREF to: 0060d637 (CONDITIONAL_JUMP)  ; LAB_0060d637
    TEST EDX,EDX                        ; 0060d617
    JLE 0x0060d637                      ; 0060d619
        ;   XREF to: 0060d637 (CONDITIONAL_JUMP)  ; LAB_0060d637
    CMP EDX,0x4                         ; 0060d61b
    JLE 0x0060d63f                      ; 0060d61e
        ;   XREF to: 0060d63f (CONDITIONAL_JUMP)  ; LAB_0060d63f
    PUSH EAX                            ; 0060d620
    LEA EAX,[ECX + EDX*0x1]             ; 0060d621
    PUSH EAX                            ; 0060d624
    PUSH ECX                            ; 0060d625
    PUSH EBX                            ; 0060d626
        ;   Label: LAB_0060d626
    CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8 ; 0060d627
        ;   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_0060d6a8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    ADD ESP,0x10                        ; 0060d62c
    MOV EAX,EBX                         ; 0060d62f
    POP EBX                             ; 0060d631
    RET                                 ; 0060d632
    XOR EAX,EAX                         ; 0060d633
        ;   Label: LAB_0060d633
    POP EBX                             ; 0060d635
    RET                                 ; 0060d636
    PUSH 0x0                            ; 0060d637
        ;   Label: LAB_0060d637
    PUSH 0x0                            ; 0060d639
    PUSH 0x0                            ; 0060d63b
    JMP 0x0060d626                      ; 0060d63d
        ;   XREF to: 0060d626 (UNCONDITIONAL_JUMP)  ; LAB_0060d626
    PUSH EAX                            ; 0060d63f
        ;   Label: LAB_0060d63f
    PUSH EAX                            ; 0060d640
    PUSH EAX                            ; 0060d641
    PUSH EBX                            ; 0060d642
    CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8 ; 0060d643
        ;   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_0060d6a8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    ADD ESP,0x10                        ; 0060d648
    XOR EAX,EAX                         ; 0060d64b
    POP EBX                             ; 0060d64d
    RET                                 ; 0060d64e

