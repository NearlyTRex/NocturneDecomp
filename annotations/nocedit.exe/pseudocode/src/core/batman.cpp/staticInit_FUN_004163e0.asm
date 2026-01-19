; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_batman.cpp_staticInit_FUN_004163e0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBatman_006156c5
;   int g_CBatmanClassVersion = 0x3
;   CDemonActorType g_CBatmanClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 004163e0 | g_CEnemyClassInfo
        ;   Label: core_batman.cpp_staticInit_FUN_004163e0
    PUSH 0x3                            ; 004163e5
    PUSH 0x66e4dc                       ; 004163e7 | g_CBatmanClassVersion
    PUSH 0x416410                       ; 004163ec
    PUSH 0x6156c5                       ; 004163f1 | = "CBatman"
    PUSH 0x8227e8                       ; 004163f6 | g_CBatmanClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004163fb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00416400
    RET                                 ; 00416403

