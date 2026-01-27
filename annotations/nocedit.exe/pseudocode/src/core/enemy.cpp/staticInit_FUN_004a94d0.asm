; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_enemy.cpp_staticInit_FUN_004a94d0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CEnemy_00624302
;   int g_CEnemyClassVersion = 0xa
;   CDemonActorType g_CCharacterClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x823c14                       ; 004a94d0 | g_CCharacterClassInfo
        ;   Label: core_enemy.cpp_staticInit_FUN_004a94d0
    PUSH 0xa                            ; 004a94d5
    PUSH 0x67937c                       ; 004a94d7 | g_CEnemyClassVersion
    PUSH 0x0                            ; 004a94dc
    PUSH 0x624302                       ; 004a94de | = "CEnemy"
    PUSH 0x2cf2bb8                      ; 004a94e3 | g_CEnemyClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004a94e8
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a94ed
    RET                                 ; 004a94f0

