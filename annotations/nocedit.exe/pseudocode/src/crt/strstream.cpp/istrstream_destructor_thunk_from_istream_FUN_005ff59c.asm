; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_strstream_cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c (istream *this_ptr,int dtor_flags)
;
; Parameters:
; istream *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff59c
        ;   Label: crt_strstream.cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ff5a0
    PUSH EDX                            ; 005ff5a4
    SUB EAX,0x48                        ; 005ff5a5
    PUSH EAX                            ; 005ff5a8
    CALL crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca ; 005ff5a9
        ;   XREF to: 005ff5ca (UNCONDITIONAL_CALL)  ; istrstream * crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca(istrstream * this_ptr, int d1)
    ADD ESP,0x8                         ; 005ff5ae
    RET                                 ; 005ff5b1

