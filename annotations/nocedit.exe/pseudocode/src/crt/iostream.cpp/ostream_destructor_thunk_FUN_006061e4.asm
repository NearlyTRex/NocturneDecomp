; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_iostream_cpp_ostream_destructor_thunk_FUN_006061e4(ios *this_ptr,int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_iostream.cpp_ostream_dtor_FUN_00606231
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 006061e4
        ;   Label: crt_iostream.cpp_ostream_destructor_thunk_FUN_006061e4
    MOV ECX,dword ptr [ESP + 0x8]       ; 006061e8
    MOV EDX,dword ptr [EAX + -0x4]      ; 006061ec
    PUSH ECX                            ; 006061ef
    SUB EAX,EDX                         ; 006061f0
    PUSH EAX                            ; 006061f2
    CALL crt_iostream.cpp_ostream_dtor_FUN_00606231 ; 006061f3
        ;   XREF to: 00606231 (UNCONDITIONAL_CALL)  ; _ostream * crt_iostream.cpp_ostream_dtor_FUN_00606231(_ostream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 006061f8
    RET                                 ; 006061fb

