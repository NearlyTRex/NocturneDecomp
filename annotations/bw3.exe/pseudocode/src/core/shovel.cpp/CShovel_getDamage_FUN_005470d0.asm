; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_shovel_cpp_CShovel_getDamage_FUN_005470d0(CShovel *this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005470d0
        ;   Label: core_shovel.cpp_CShovel_getDamage_FUN_005470d0
    PUSH 0x41700000                     ; 005470d3
    PUSH 0x41200000                     ; 005470d8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 005470dd
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 005470e2
    FLD float ptr [ESP + 0xc]           ; 005470e6
    ADD ESP,0x8                         ; 005470ea
    FSTP float ptr [ESP]                ; 005470ed
    MOV EAX,dword ptr [ESP]             ; 005470f0
    ADD ESP,0x8                         ; 005470f3
    LEA EAX,[EAX]                       ; 005470f6
    LEA EDX,[EDX]                       ; 005470fc

