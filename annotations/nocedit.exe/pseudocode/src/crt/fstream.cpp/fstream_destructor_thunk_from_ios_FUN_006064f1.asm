; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_fstream.cpp_fstream_destructor_thunk_from_ios_FUN_006064f1(ios * this_ptr, int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_dtor_FUN_00606509
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 006064f1
        ;   Label: crt_fstream.cpp_fstream_destructor_thunk_from_ios_FUN_006064f1
    MOV ECX,dword ptr [ESP + 0x8]       ; 006064f5
    MOV EDX,dword ptr [EAX + -0x4]      ; 006064f9
    PUSH ECX                            ; 006064fc
    SUB EAX,EDX                         ; 006064fd
    PUSH EAX                            ; 006064ff
    CALL crt_fstream.cpp_fstreambase_dtor_FUN_00606509 ; 00606500
        ;   XREF to: 00606509 (UNCONDITIONAL_CALL)  ; fstreambase * crt_fstream.cpp_fstreambase_dtor_FUN_00606509(fstreambase * this_ptr, uint d1, uint d2, uint d3)
    ADD ESP,0x8                         ; 00606505
    RET                                 ; 00606508

