; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; streambuf * __watcallStack crt_iostream_cpp_streambuf_destructor_FUN_0060d64f(streambuf *this_ptr)
;
; Parameters:
; streambuf *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9 at 0060be37
;   crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f at 0060bbb8
;
; Referenced Globals:
;   streambuf_vtable g_StreambufVTable
;
; Called Functions:
;   crt_iostream.cpp_freeBuffer_FUN_0060d7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d64f
        ;   Label: crt_iostream.cpp_streambuf_destructor_FUN_0060d64f
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060d650
    MOV AH,byte ptr [EBX + 0x24]        ; 0060d654
    MOV dword ptr [EBX + 0x28],0x665f70 ; 0060d657 | g_StreambufVTable
    TEST AH,0x2                         ; 0060d65e
    JNZ 0x0060d667                      ; 0060d661
        ;   XREF to: 0060d667 (CONDITIONAL_JUMP)  ; LAB_0060d667
    MOV EAX,EBX                         ; 0060d663
    POP EBX                             ; 0060d665
    RET                                 ; 0060d666
    MOV EDX,dword ptr [EBX + 0x4]       ; 0060d667
        ;   Label: LAB_0060d667
    PUSH EDX                            ; 0060d66a
    CALL crt_iostream.cpp_freeBuffer_FUN_0060d7a0 ; 0060d66b
        ;   XREF to: 0060d7a0 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_freeBuffer_FUN_0060d7a0(void * buffer)
    ADD ESP,0x4                         ; 0060d670
    MOV EAX,EBX                         ; 0060d673
    POP EBX                             ; 0060d675
    RET                                 ; 0060d676

