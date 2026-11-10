; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_asgaya_cpp_CAsgaya_isInvulnerable_FUN_005a1b20(CAsgaya *this_ptr)
;
; Parameters:
; CAsgaya *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1b20
        ;   Label: core_asgaya.cpp_CAsgaya_isInvulnerable_FUN_005a1b20
    CMP dword ptr [EAX + 0x33fa4],0x0   ; 005a1b24
    SETZ AL                             ; 005a1b2b
    AND EAX,0xff                        ; 005a1b2e
    RET                                 ; 005a1b33

