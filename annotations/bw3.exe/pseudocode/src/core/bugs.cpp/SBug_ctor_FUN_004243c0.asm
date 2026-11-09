; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBug * core_bugs_cpp_SBug_ctor_FUN_004243c0(SBug *this_ptr)
;
; Parameters:
; SBug *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004243c0
        ;   Label: core_bugs.cpp_SBug_ctor_FUN_004243c0
    RET                                 ; 004243c4

