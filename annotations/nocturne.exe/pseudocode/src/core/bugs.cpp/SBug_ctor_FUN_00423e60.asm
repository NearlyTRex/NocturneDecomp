; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBug * __cdecl core_bugs_cpp_SBug_ctor_FUN_00423e60(SBug *this_ptr)
;
; Parameters:
; SBug *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423e60
        ;   Label: core_bugs.cpp_SBug_ctor_FUN_00423e60
    RET                                 ; 00423e64

