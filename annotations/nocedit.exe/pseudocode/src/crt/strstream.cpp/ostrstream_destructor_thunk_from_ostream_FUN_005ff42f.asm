; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_strstream_cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f(ostream *this_ptr,int dtor_flags)
;
; Parameters:
; ostream *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff42f
        ;   Label: crt_strstream.cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ff433
    PUSH EDX                            ; 005ff437
    SUB EAX,0x48                        ; 005ff438
    PUSH EAX                            ; 005ff43b
    CALL crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a ; 005ff43c
        ;   XREF to: 005ff48a (UNCONDITIONAL_CALL)  ; ostrstream * crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a(ostrstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ff441
    RET                                 ; 005ff444

