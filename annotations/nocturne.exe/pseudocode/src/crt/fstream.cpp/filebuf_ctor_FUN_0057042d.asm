; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; filebuf * __cdecl crt_fstream_cpp_filebuf_ctor_FUN_0057042d(filebuf *this_ptr)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d at 0056b784
;   crt_fstream.cpp_fstreambase_ctor_FUN_0056b896 at 0056b8a6
;
; Referenced Globals:
;   filebuf_vtable g_FilebufVTable
;
; Called Functions:
;   crt_iostream.cpp_streambuf_ctor_FUN_0056fe12
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057042d
        ;   Label: crt_fstream.cpp_filebuf_ctor_FUN_0057042d
    PUSH EDX                            ; 00570431
    CALL crt_iostream.cpp_streambuf_ctor_FUN_0056fe12 ; 00570432
        ;   XREF to: 0056fe12 (UNCONDITIONAL_CALL)  ; streambuf * crt_iostream.cpp_streambuf_ctor_FUN_0056fe12(streambuf * this_ptr)
    MOV dword ptr [EAX + 0x2c],0xffffffff ; 00570437
    ADD ESP,0x4                         ; 0057043e
    MOV dword ptr [EAX + 0x28],0x5a4b0c ; 00570441 | g_FilebufVTable
    RET                                 ; 00570448

