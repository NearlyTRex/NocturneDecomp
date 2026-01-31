; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_icepick_cpp_CIcePick_FUN_004f9770(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f9770
        ;   Label: core_icepick.cpp_CIcePick_FUN_004f9770
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f9774
    MOV dword ptr [EDX + 0x1fbd4],EAX   ; 004f9778
    RET                                 ; 004f977e

