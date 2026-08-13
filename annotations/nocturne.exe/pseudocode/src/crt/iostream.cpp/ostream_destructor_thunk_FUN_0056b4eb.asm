; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_iostream_cpp_ostream_destructor_thunk_FUN_0056b4eb(ios *this_ptr,int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_iostream.cpp_ostream_dtor_FUN_0056b538
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b4eb
        ;   Label: crt_iostream.cpp_ostream_destructor_thunk_FUN_0056b4eb
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056b4ef
    MOV EDX,dword ptr [EAX + -0x4]      ; 0056b4f3
    PUSH ECX                            ; 0056b4f6
    SUB EAX,EDX                         ; 0056b4f7
    PUSH EAX                            ; 0056b4f9
    CALL crt_iostream.cpp_ostream_dtor_FUN_0056b538 ; 0056b4fa
        ;   XREF to: 0056b538 (UNCONDITIONAL_CALL)  ; _ostream * crt_iostream.cpp_ostream_dtor_FUN_0056b538(_ostream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056b4ff
    RET                                 ; 0056b502

