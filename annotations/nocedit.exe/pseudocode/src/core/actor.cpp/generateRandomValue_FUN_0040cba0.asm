; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_generateRandomValue_FUN_0040cba0(void)
;
;
; XREF[4]:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 at 0040cc2e
;   core_actor.cpp_getRandomFloat_FUN_0040cbc0 at 0040cbd1
;   core_actor.cpp_getRandomInt_FUN_0040cc70 at 0040ccea
;   core_actor.cpp_randomChance_FUN_0040cd10 at 0040cd21
;
; Referenced Globals:
;   uint g_RandomSeedValue
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00822368]      ; 0040cba0 | g_RandomSeedValue
        ;   Label: core_actor.cpp_generateRandomValue_FUN_0040cba0
    IMUL EDX,EDX,0x2ff0bd               ; 0040cba6
    INC EDX                             ; 0040cbac
    AND EDX,0xffffff                    ; 0040cbad
    MOV dword ptr [0x00822368],EDX      ; 0040cbb3 | g_RandomSeedValue
    MOV EAX,EDX                         ; 0040cbb9
    RET                                 ; 0040cbbb

