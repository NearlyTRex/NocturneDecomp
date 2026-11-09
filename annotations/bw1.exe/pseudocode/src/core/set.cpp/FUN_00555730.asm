; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_00555730(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_glass.cpp_FUN_004e34b0 at 004e3882
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00555730
        ;   Label: core_set.cpp_FUN_00555730
    MOV dword ptr [EAX + 0x16166c],0x1  ; 00555734
    RET                                 ; 0055573e

