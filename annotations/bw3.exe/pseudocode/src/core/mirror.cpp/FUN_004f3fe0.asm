; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMirror * __cdecl core_mirror_cpp_FUN_004f3fe0(CMirror *this_ptr,uint flags)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_glass.cpp_CGlass_dtor_FUN_004cc5f0 at 004cc605
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3fe0
        ;   Label: core_mirror.cpp_FUN_004f3fe0
    RET                                 ; 004f3fe4

