; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_addRandomJitter_FUN_005decc0(float *value)
;
; Parameters:
; float *          Stack[0x4]:4   value
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005decc0
        ;   Label: core_trash.cpp_addRandomJitter_FUN_005decc0
    PUSH 0x3d4ccccd                     ; 005decc3
    PUSH 0xbd4ccccd                     ; 005decc8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005deccd
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005decd2
    FLD float ptr [ESP + 0x8]           ; 005decd6
    ADD ESP,0x8                         ; 005decda
    MOV EAX,dword ptr [ESP + 0x8]       ; 005decdd
    FADD float ptr [EAX]                ; 005dece1
    FSTP float ptr [EAX]                ; 005dece3
    ADD ESP,0x4                         ; 005dece5
    RET                                 ; 005dece8

