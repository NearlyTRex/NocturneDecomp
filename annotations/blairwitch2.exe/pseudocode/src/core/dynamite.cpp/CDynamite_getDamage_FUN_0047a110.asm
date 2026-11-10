; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dynamite_cpp_CDynamite_getDamage_FUN_0047a110(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0047a110
        ;   Label: core_dynamite.cpp_CDynamite_getDamage_FUN_0047a110
    PUSH 0x43fa0000                     ; 0047a113
    PUSH 0x43c80000                     ; 0047a118
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0047a11d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0047a122
    FLD float ptr [ESP + 0xc]           ; 0047a126
    ADD ESP,0x8                         ; 0047a12a
    FSTP float ptr [ESP]                ; 0047a12d
    MOV EAX,dword ptr [ESP]             ; 0047a130
    ADD ESP,0x8                         ; 0047a133
    LEA EAX,[EAX]                       ; 0047a136
    LEA EDX,[EDX]                       ; 0047a13c

