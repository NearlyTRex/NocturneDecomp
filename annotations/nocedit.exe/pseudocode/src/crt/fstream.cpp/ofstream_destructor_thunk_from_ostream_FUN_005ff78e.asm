; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_fstream.cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e(ostream * this_ptr, int dtor_flags)
;
; Parameters:
; ostream *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff78e
        ;   Label: crt_fstream.cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ff792
    PUSH EDX                            ; 005ff796
    SUB EAX,0x44                        ; 005ff797
    PUSH EAX                            ; 005ff79a
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 005ff79b | ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ff7a0
    RET                                 ; 005ff7a3

