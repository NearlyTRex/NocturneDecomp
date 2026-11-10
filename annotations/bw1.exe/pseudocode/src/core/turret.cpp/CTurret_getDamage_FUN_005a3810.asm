; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_turret_cpp_CTurret_getDamage_FUN_005a3810(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005a3810
        ;   Label: core_turret.cpp_CTurret_getDamage_FUN_005a3810
    PUSH 0x41700000                     ; 005a3813
    PUSH 0x41200000                     ; 005a3818
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005a381d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 005a3822
    FLD float ptr [ESP + 0xc]           ; 005a3826
    ADD ESP,0x8                         ; 005a382a
    FSTP float ptr [ESP]                ; 005a382d
    MOV EAX,dword ptr [ESP]             ; 005a3830
    ADD ESP,0x8                         ; 005a3833
    RET                                 ; 005a3836

