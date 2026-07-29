; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_iostream_cpp_doallocate_FUN_00571dc7(streambuf *this_ptr)
;
; Parameters:
; streambuf *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_iostream.cpp_setBuffer_FUN_00571df8
;   FUN_00571ee0
;
; *****************************************************************************

section .text

    PUSH 0x204                          ; 00571dc7
        ;   Label: crt_iostream.cpp_doallocate_FUN_00571dc7
    CALL FUN_00571ee0                   ; 00571dcc
        ;   XREF to: 00571ee0 (UNCONDITIONAL_CALL)  ; void * FUN_00571ee0(uint size)
    ADD ESP,0x4                         ; 00571dd1
    TEST EAX,EAX                        ; 00571dd4
    JNZ 0x00571dde                      ; 00571dd6
        ;   XREF to: 00571dde (CONDITIONAL_JUMP)  ; LAB_00571dde
    MOV EAX,0xffffffff                  ; 00571dd8
    RET                                 ; 00571ddd
    PUSH 0x1                            ; 00571dde
        ;   Label: LAB_00571dde
    LEA EDX,[EAX + 0x204]               ; 00571de0
    PUSH EDX                            ; 00571de6
    PUSH EAX                            ; 00571de7
    MOV EDX,dword ptr [ESP + 0x10]      ; 00571de8
    PUSH EDX                            ; 00571dec
    CALL crt_iostream.cpp_setBuffer_FUN_00571df8 ; 00571ded
        ;   XREF to: 00571df8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_00571df8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    ADD ESP,0x10                        ; 00571df2
    XOR EAX,EAX                         ; 00571df5
    RET                                 ; 00571df7

