; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl filebuf * crt_fstream.cpp_filebuf_ctor_FUN_0060bddd(filebuf * this_ptr)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   crt_fstream.cpp_fstreambase_constructor_FUN_00606456 at 0060647d
;   crt_fstream.cpp_fstreambase_ctor_FUN_0060658f at 0060659f
;
; Referenced Globals:
;   filebuf_vtable g_FilebufVTable
;
; Called Functions:
;   crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0060bddd
        ;   Label: crt_fstream.cpp_filebuf_ctor_FUN_0060bddd
    PUSH EDX                            ; 0060bde1
    CALL crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2 ; 0060bde2
        ;   XREF to: 0060b7c2 (UNCONDITIONAL_CALL)  ; streambuf * crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2(streambuf * this_ptr)
    MOV dword ptr [EAX + 0x2c],0xffffffff ; 0060bde7
    ADD ESP,0x4                         ; 0060bdee
    MOV dword ptr [EAX + 0x28],0x665fcc ; 0060bdf1 | g_FilebufVTable
    RET                                 ; 0060bdf8

