; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBug * __cdecl core_bugs_cpp_SBug_ctor_FUN_004221f0(SBug *this_ptr)
;
; Parameters:
; SBug *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004221f0
        ;   Label: core_bugs.cpp_SBug_ctor_FUN_004221f0
    RET                                 ; 004221f4

