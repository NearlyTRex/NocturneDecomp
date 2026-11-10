; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_melee_cpp_CMelee_getDamage_FUN_004eab50(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004eab50
        ;   Label: core_melee.cpp_CMelee_getDamage_FUN_004eab50
    MOV EAX,dword ptr [ESP + 0xc]       ; 004eab53
    PUSH dword ptr [EAX + 0x6dc]        ; 004eab57
    PUSH dword ptr [EAX + 0x6d8]        ; 004eab5d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004eab63
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 004eab68
    FLD float ptr [ESP + 0xc]           ; 004eab6c
    ADD ESP,0x8                         ; 004eab70
    FSTP float ptr [ESP]                ; 004eab73
    MOV EAX,dword ptr [ESP]             ; 004eab76
    ADD ESP,0x8                         ; 004eab79
    LEA EAX,[EAX]                       ; 004eab7c

