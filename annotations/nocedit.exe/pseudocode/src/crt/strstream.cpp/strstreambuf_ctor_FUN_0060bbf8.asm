; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl strstreambuf * crt_strstream.cpp_strstreambuf_ctor_FUN_0060bbf8(strstreambuf * this_ptr)
;
; Parameters:
; strstreambuf *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   strstreambuf_vtable g_StrstreambufVTable
;
; Called Functions:
;   crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
;   crt_strstream.cpp_strstreambuf_init_FUN_0060b815
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060bbf8
        ;   Label: crt_strstream.cpp_strstreambuf_ctor_FUN_0060bbf8
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060bbf9
    PUSH EDX                            ; 0060bbfd
    CALL crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2 ; 0060bbfe
        ;   XREF to: 0060b7c2 (UNCONDITIONAL_CALL)  ; streambuf * crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2(streambuf * this_ptr)
    ADD ESP,0x4                         ; 0060bc03
    PUSH 0x0                            ; 0060bc06
    PUSH 0x0                            ; 0060bc08
    PUSH 0x0                            ; 0060bc0a
    PUSH EAX                            ; 0060bc0c
    MOV EBX,EAX                         ; 0060bc0d
    MOV dword ptr [EAX + 0x28],0x665d34 ; 0060bc0f | g_StrstreambufVTable
    CALL crt_strstream.cpp_strstreambuf_init_FUN_0060b815 ; 0060bc16
        ;   XREF to: 0060b815 (UNCONDITIONAL_CALL)  ; void crt_strstream.cpp_strstreambuf_init_FUN_0060b815(strstreambuf * this_ptr, char * buffer_ptr, int buffer_size, char * put_start)
    ADD ESP,0x10                        ; 0060bc1b
    MOV EAX,EBX                         ; 0060bc1e
    POP EBX                             ; 0060bc20
    RET                                 ; 0060bc21

