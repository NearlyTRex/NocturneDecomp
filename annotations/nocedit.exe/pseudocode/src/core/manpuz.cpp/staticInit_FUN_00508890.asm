; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_manpuz.cpp_staticInit_FUN_00508890(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CMansionPuzzleCircle_0063566d
;   TerminatedCString s_CMirrorHack_00635682
;   int g_CMansionPuzzleCircleClassVersion = 0x3
;   int g_CMirrorHackClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CMansionPuzzleCircleClassInfo
;   CDemonActorType g_CMirrorHackClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00508890 | g_CDemonActorClassInfo
        ;   Label: core_manpuz.cpp_staticInit_FUN_00508890
    PUSH 0x3                            ; 00508895
    PUSH 0x67d0d4                       ; 00508897 | g_CMansionPuzzleCircleClassVersion
    PUSH 0x5088e0                       ; 0050889c
    PUSH 0x63566d                       ; 005088a1 | = "CMansionPuzzleCircle"
    PUSH 0x2f0caa4                      ; 005088a6 | g_CMansionPuzzleCircleClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005088ab
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005088b0
    PUSH 0x821ff8                       ; 005088b3 | g_CDemonActorClassInfo
    PUSH 0x1                            ; 005088b8
    PUSH 0x67d0d8                       ; 005088ba | g_CMirrorHackClassVersion
    PUSH 0x50b0d0                       ; 005088bf
    PUSH 0x635682                       ; 005088c4 | = "CMirrorHack"
    PUSH 0x2f0cae0                      ; 005088c9 | g_CMirrorHackClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005088ce
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005088d3
    RET                                 ; 005088d6

