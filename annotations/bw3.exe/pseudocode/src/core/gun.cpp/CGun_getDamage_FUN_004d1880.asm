; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gun_cpp_CGun_getDamage_FUN_004d1880(CGun *this_ptr)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004d1880
        ;   Label: core_gun.cpp_CGun_getDamage_FUN_004d1880
    PUSH 0x41c80000                     ; 004d1883
    PUSH 0x41200000                     ; 004d1888
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004d188d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 004d1892
    FLD float ptr [ESP + 0xc]           ; 004d1896
    ADD ESP,0x8                         ; 004d189a
    FSTP float ptr [ESP]                ; 004d189d
    MOV EAX,dword ptr [ESP]             ; 004d18a0
    ADD ESP,0x8                         ; 004d18a3
    RET                                 ; 004d18a6

