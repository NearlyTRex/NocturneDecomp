; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack filebuf * crt_fstream.cpp_filebuf_close_FUN_00608bcc(filebuf * this_ptr)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9 at 0060be2c
;   crt_stdio.c_fflush_FUN_00600e29 at 00600e3d
;
; Called Functions:
;   crt_io.c_close_handle_safe_FUN_0060c2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608bcc
        ;   Label: crt_fstream.cpp_filebuf_close_FUN_00608bcc
    PUSH ESI                            ; 00608bcd
    MOV EBX,dword ptr [ESP + 0xc]       ; 00608bce
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00608bd2
    CMP EAX,-0x1                        ; 00608bd5
    JNZ 0x00608bdf                      ; 00608bd8 | LAB_00608bdf
        ;   XREF to: 00608bdf (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00608bda
        ;   Label: LAB_00608bda
    POP ESI                             ; 00608bdc
        ;   Label: LAB_00608bdc
    POP EBX                             ; 00608bdd
    RET                                 ; 00608bde
    PUSH EBX                            ; 00608bdf
        ;   Label: LAB_00608bdf
    MOV EAX,dword ptr [EBX + 0x28]      ; 00608be0
    CALL dword ptr [EAX + 0x20]         ; 00608be3
    MOV ESI,EAX                         ; 00608be6
    MOV DL,byte ptr [EBX + 0x39]        ; 00608be8
    ADD ESP,0x4                         ; 00608beb
    AND DL,0xfe                         ; 00608bee
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00608bf1
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00608bf4
    PUSH EAX                            ; 00608bfb
    MOV byte ptr [EBX + 0x39],DL        ; 00608bfc
    CALL crt_io.c_close_handle_safe_FUN_0060c2e0 ; 00608bff | int crt_io.c_close_handle_safe_FUN_0060c2e0(int handle_index)
        ;   XREF to: 0060c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00608c04
    TEST EAX,EAX                        ; 00608c07
    JNZ 0x00608bda                      ; 00608c09 | LAB_00608bda
        ;   XREF to: 00608bda (CONDITIONAL_JUMP)
    CMP ESI,-0x1                        ; 00608c0b
    JZ 0x00608bdc                       ; 00608c0e | LAB_00608bdc
        ;   XREF to: 00608bdc (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00608c10
    POP ESI                             ; 00608c12
    POP EBX                             ; 00608c13
    RET                                 ; 00608c14

