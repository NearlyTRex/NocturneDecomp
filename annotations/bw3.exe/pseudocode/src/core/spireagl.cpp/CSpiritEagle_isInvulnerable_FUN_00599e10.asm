; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spireagl_cpp_CSpiritEagle_isInvulnerable_FUN_00599e10(CSpiritEagle *this_ptr)
;
; Parameters:
; CSpiritEagle *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00599e10
        ;   Label: core_spireagl.cpp_CSpiritEagle_isInvulnerable_FUN_00599e10
    CMP dword ptr [EAX + 0x20864],0x0   ; 00599e14
    SETZ AL                             ; 00599e1b
    AND EAX,0xff                        ; 00599e1e
    RET                                 ; 00599e23

