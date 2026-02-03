; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_strstream_cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445(ios *this_ptr,int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff445
        ;   Label: crt_strstream.cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ff449
    MOV EDX,dword ptr [EAX + -0x4]      ; 005ff44d
    PUSH ECX                            ; 005ff450
    SUB EAX,EDX                         ; 005ff451
    PUSH EAX                            ; 005ff453
    CALL crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a ; 005ff454
        ;   XREF to: 005ff48a (UNCONDITIONAL_CALL)  ; ostrstream * crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a(ostrstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ff459
    RET                                 ; 005ff45c

