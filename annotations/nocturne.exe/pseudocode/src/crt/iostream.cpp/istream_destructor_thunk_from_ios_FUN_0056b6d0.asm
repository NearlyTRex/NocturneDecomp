; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_iostream_cpp_istream_destructor_thunk_from_ios_FUN_0056b6d0(ios *this_ptr,int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_iostream.cpp_istream_dtor_FUN_0056b6e8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b6d0
        ;   Label: crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_0056b6d0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056b6d4
    MOV EDX,dword ptr [EAX + -0x4]      ; 0056b6d8
    PUSH ECX                            ; 0056b6db
    SUB EAX,EDX                         ; 0056b6dc
    PUSH EAX                            ; 0056b6de
    CALL crt_iostream.cpp_istream_dtor_FUN_0056b6e8 ; 0056b6df
        ;   XREF to: 0056b6e8 (UNCONDITIONAL_CALL)  ; _istream * crt_iostream.cpp_istream_dtor_FUN_0056b6e8(_istream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056b6e4
    RET                                 ; 0056b6e7

