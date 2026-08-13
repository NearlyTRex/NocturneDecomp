; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_strstream_cpp_strstreambase_destructor_thunk_FUN_0056b491(ios *this_ptr,int dtor_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dtor_flags
;
; Called Functions:
;   crt_strstream.cpp_strstreambase_dtor_FUN_0056b5ad
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b491
        ;   Label: crt_strstream.cpp_strstreambase_destructor_thunk_FUN_0056b491
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056b495
    MOV EDX,dword ptr [EAX + -0x4]      ; 0056b499
    PUSH ECX                            ; 0056b49c
    SUB EAX,EDX                         ; 0056b49d
    PUSH EAX                            ; 0056b49f
    CALL crt_strstream.cpp_strstreambase_dtor_FUN_0056b5ad ; 0056b4a0
        ;   XREF to: 0056b5ad (UNCONDITIONAL_CALL)  ; strstreambase * crt_strstream.cpp_strstreambase_dtor_FUN_0056b5ad(strstreambase * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056b4a5
    RET                                 ; 0056b4a8

