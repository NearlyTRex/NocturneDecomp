; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_fstream.cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8(ios * this_ptr, int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_fstream.cpp_ifstream_dtor_FUN_005ff856
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff6f8
        ;   Label: crt_fstream.cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ff6fc
    MOV EDX,dword ptr [EAX + -0x4]      ; 005ff700
    PUSH ECX                            ; 005ff703
    SUB EAX,EDX                         ; 005ff704
    PUSH EAX                            ; 005ff706
    CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856 ; 005ff707 | void * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 005ff856 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ff70c
    RET                                 ; 005ff70f

