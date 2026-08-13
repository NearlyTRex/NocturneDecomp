; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fstream_cpp_fstream_destructor_thunk_from_ios_FUN_0056b7f8(ios *this_ptr,int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_dtor_FUN_0056b810
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b7f8
        ;   Label: crt_fstream.cpp_fstream_destructor_thunk_from_ios_FUN_0056b7f8
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056b7fc
    MOV EDX,dword ptr [EAX + -0x4]      ; 0056b800
    PUSH ECX                            ; 0056b803
    SUB EAX,EDX                         ; 0056b804
    PUSH EAX                            ; 0056b806
    CALL crt_fstream.cpp_fstreambase_dtor_FUN_0056b810 ; 0056b807
        ;   XREF to: 0056b810 (UNCONDITIONAL_CALL)  ; fstreambase * crt_fstream.cpp_fstreambase_dtor_FUN_0056b810(fstreambase * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056b80c
    RET                                 ; 0056b80f

