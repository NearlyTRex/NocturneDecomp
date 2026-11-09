; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMirror * __cdecl core_mirror_cpp_FUN_00518810(CMirror *this_ptr,uint flags)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_glass.cpp_CGlass_dtor_FUN_004e3a60 at 004e3a75
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00518810
        ;   Label: core_mirror.cpp_FUN_00518810
    RET                                 ; 00518814

