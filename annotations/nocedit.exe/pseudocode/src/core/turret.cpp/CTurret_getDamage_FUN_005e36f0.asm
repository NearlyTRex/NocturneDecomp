; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_turret_cpp_CTurret_getDamage_FUN_005e36f0(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005e36f0
        ;   Label: core_turret.cpp_CTurret_getDamage_FUN_005e36f0
    PUSH 0x41700000                     ; 005e36f3
    PUSH 0x41200000                     ; 005e36f8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005e36fd
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 005e3702
    FLD float ptr [ESP + 0xc]           ; 005e3706
    ADD ESP,0x8                         ; 005e370a
    FSTP float ptr [ESP]                ; 005e370d
    MOV EAX,dword ptr [ESP]             ; 005e3710
    ADD ESP,0x8                         ; 005e3713
    RET                                 ; 005e3716

