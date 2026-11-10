; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_shovel_cpp_CShovel_getDamage_FUN_0053fec0(CShovel *this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0053fec0
        ;   Label: core_shovel.cpp_CShovel_getDamage_FUN_0053fec0
    PUSH 0x41700000                     ; 0053fec3
    PUSH 0x41200000                     ; 0053fec8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0053fecd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0053fed2
    FLD float ptr [ESP + 0xc]           ; 0053fed6
    ADD ESP,0x8                         ; 0053feda
    FSTP float ptr [ESP]                ; 0053fedd
    MOV EAX,dword ptr [ESP]             ; 0053fee0
    ADD ESP,0x8                         ; 0053fee3
    LEA EAX,[EAX]                       ; 0053fee6
    LEA EDX,[EDX]                       ; 0053feec

