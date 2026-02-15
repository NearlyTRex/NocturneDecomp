; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_FUN_00570c60(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_glass.cpp_CGlass_shatter_FUN_004eaef0 at 004eb1f7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00570c60
        ;   Label: core_set.cpp_CDemonSet_FUN_00570c60
    MOV dword ptr [EAX + 0x161654],0x1  ; 00570c64
    RET                                 ; 00570c6e

