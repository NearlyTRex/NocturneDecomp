; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_strstream.cpp_strstreambase_destructor_thunk_FUN_0060618a(ios * this_ptr, int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060618a
        ;   Label: crt_strstream.cpp_strstreambase_destructor_thunk_FUN_0060618a
    MOV ECX,dword ptr [ESP + 0x8]       ; 0060618e
    MOV EDX,dword ptr [EAX + -0x4]      ; 00606192
    PUSH ECX                            ; 00606195
    SUB EAX,EDX                         ; 00606196
    PUSH EAX                            ; 00606198
    CALL crt_strstream.cpp_strstreambase_dtor_FUN_006062a6 ; 00606199 | strstreambase * crt_strstream.cpp_strstreambase_dtor_FUN_006062a6(strstreambase * this_ptr, uint d1, uint d2, uint d3)
        ;   XREF to: 006062a6 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060619e
    RET                                 ; 006061a1

