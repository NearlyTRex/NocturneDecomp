; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_tvbat_cpp_jitterValue_FUN_005e3ec0(float value)
;
; Parameters:
; float            Stack[0x4]:4   value
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005e3ec0
        ;   Label: core_tvbat.cpp_jitterValue_FUN_005e3ec0
    PUSH 0x3f8ccccd                     ; 005e3ec3
    PUSH 0x3f666666                     ; 005e3ec8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005e3ecd
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 005e3ed2
    FLD float ptr [ESP + 0xc]           ; 005e3ed6
    ADD ESP,0x8                         ; 005e3eda
    FMUL float ptr [ESP + 0xc]          ; 005e3edd
    FSTP float ptr [ESP]                ; 005e3ee1
    MOV EAX,dword ptr [ESP]             ; 005e3ee4
    ADD ESP,0x8                         ; 005e3ee7
    RET                                 ; 005e3eea

