; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fstream_cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2(_istream *this_ptr,int dtor_flags)
;
; Parameters:
; _istream *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_fstream.cpp_ifstream_dtor_FUN_005ff856
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff6e2
        ;   Label: crt_fstream.cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ff6e6
    PUSH EDX                            ; 005ff6ea
    SUB EAX,0x44                        ; 005ff6eb
    PUSH EAX                            ; 005ff6ee
    CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856 ; 005ff6ef
        ;   XREF to: 005ff856 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ff6f4
    RET                                 ; 005ff6f7

