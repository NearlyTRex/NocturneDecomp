; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBug * __cdecl core_bugs_cpp_SBug_dtor_FUN_00427cb0(SBug *this_ptr,uint flags)
;
; Parameters:
; SBug *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00427cb0
        ;   Label: core_bugs.cpp_SBug_dtor_FUN_00427cb0
    RET                                 ; 00427cb4

