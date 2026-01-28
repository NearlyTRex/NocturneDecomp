; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_fstream_cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4(ios *this_ptr,int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff7a4
        ;   Label: crt_fstream.cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ff7a8
    MOV EDX,dword ptr [EAX + -0x4]      ; 005ff7ac
    PUSH ECX                            ; 005ff7af
    SUB EAX,EDX                         ; 005ff7b0
    PUSH EAX                            ; 005ff7b2
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 005ff7b3
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 005ff7b8
    RET                                 ; 005ff7bb

