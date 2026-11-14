; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_tommygun_cpp_CTommyGun_getDamage_FUN_00598d20(CTommyGun *this_ptr)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00598d20
        ;   Label: core_tommygun.cpp_CTommyGun_getDamage_FUN_00598d20
    PUSH 0x41700000                     ; 00598d23
    PUSH 0x41200000                     ; 00598d28
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00598d2d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 00598d32
    FLD float ptr [ESP + 0xc]           ; 00598d36
    ADD ESP,0x8                         ; 00598d3a
    FSTP float ptr [ESP]                ; 00598d3d
    MOV EAX,dword ptr [ESP]             ; 00598d40
    ADD ESP,0x8                         ; 00598d43
    RET                                 ; 00598d46

