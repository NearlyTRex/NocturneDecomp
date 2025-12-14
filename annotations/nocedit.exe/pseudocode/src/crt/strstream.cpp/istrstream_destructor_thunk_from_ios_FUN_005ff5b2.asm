; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_strstream.cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2(ios * this_ptr, int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff5b2
        ;   Label: crt_strstream.cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ff5b6
    MOV EDX,dword ptr [EAX + -0x4]      ; 005ff5ba
    PUSH ECX                            ; 005ff5bd
    SUB EAX,EDX                         ; 005ff5be
    PUSH EAX                            ; 005ff5c0
    CALL crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca ; 005ff5c1
        ;   XREF to: 005ff5ca (UNCONDITIONAL_CALL)  ; istrstream * crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca(istrstream * this_ptr, int d1)
    ADD ESP,0x8                         ; 005ff5c6
    RET                                 ; 005ff5c9

