; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_shovel_cpp_CShovel_getDamage_FUN_005624b0(CShovel *this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005624b0
        ;   Label: core_shovel.cpp_CShovel_getDamage_FUN_005624b0
    PUSH 0x41700000                     ; 005624b3
    PUSH 0x41200000                     ; 005624b8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005624bd
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 005624c2
    FLD float ptr [ESP + 0xc]           ; 005624c6
    ADD ESP,0x8                         ; 005624ca
    FSTP float ptr [ESP]                ; 005624cd
    MOV EAX,dword ptr [ESP]             ; 005624d0
    ADD ESP,0x8                         ; 005624d3
    LEA EAX,[EAX]                       ; 005624d6
    LEA EDX,[EDX]                       ; 005624dc

