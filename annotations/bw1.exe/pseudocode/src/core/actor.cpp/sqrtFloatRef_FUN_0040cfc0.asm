; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_sqrtFloatRef_FUN_0040cfc0(float *value)
;
; Parameters:
; float *          Stack[0x4]:4   value
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0040cfc0
        ;   Label: core_actor.cpp_sqrtFloatRef_FUN_0040cfc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040cfc3
    FLD float ptr [EAX]                 ; 0040cfc7
    FSQRT                               ; 0040cfc9
    FSTP float ptr [ESP]                ; 0040cfcb
    MOV EAX,dword ptr [ESP]             ; 0040cfce
    ADD ESP,0x4                         ; 0040cfd1
    RET                                 ; 0040cfd4

