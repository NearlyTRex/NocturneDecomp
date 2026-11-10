; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spirindi_cpp_CSpiritIndian_isInvulnerable_FUN_0059a940(CSpiritIndian *this_ptr)
;
; Parameters:
; CSpiritIndian *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059a940
        ;   Label: core_spirindi.cpp_CSpiritIndian_isInvulnerable_FUN_0059a940
    CMP dword ptr [EAX + 0x34160],0x0   ; 0059a944
    SETZ AL                             ; 0059a94b
    AND EAX,0xff                        ; 0059a94e
    RET                                 ; 0059a953

