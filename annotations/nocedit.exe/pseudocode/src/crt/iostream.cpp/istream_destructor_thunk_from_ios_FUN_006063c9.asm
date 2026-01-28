; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_iostream_cpp_istream_destructor_thunk_from_ios_FUN_006063c9(ios *this_ptr,int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_iostream.cpp_istream_dtor_FUN_006063e1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 006063c9
        ;   Label: crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_006063c9
    MOV ECX,dword ptr [ESP + 0x8]       ; 006063cd
    MOV EDX,dword ptr [EAX + -0x4]      ; 006063d1
    PUSH ECX                            ; 006063d4
    SUB EAX,EDX                         ; 006063d5
    PUSH EAX                            ; 006063d7
    CALL crt_iostream.cpp_istream_dtor_FUN_006063e1 ; 006063d8
        ;   XREF to: 006063e1 (UNCONDITIONAL_CALL)  ; istream * crt_iostream.cpp_istream_dtor_FUN_006063e1(istream * this_ptr, uint d1, uint d2)
    ADD ESP,0x8                         ; 006063dd
    RET                                 ; 006063e0

