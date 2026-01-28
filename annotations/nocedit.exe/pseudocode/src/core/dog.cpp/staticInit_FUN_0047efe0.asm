; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dog_cpp_staticInit_FUN_0047efe0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CZombieDog_00620f81
;   int g_CZombieDogClassVersion = 0x2
;   CDemonActorType g_CZombieDogClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 0047efe0 | g_CEnemyClassInfo
        ;   Label: core_dog.cpp_staticInit_FUN_0047efe0
    PUSH 0x2                            ; 0047efe5
    PUSH 0x6702e8                       ; 0047efe7 | g_CZombieDogClassVersion
    PUSH 0x47f010                       ; 0047efec
    PUSH 0x620f81                       ; 0047eff1 | = "CZombieDog"
    PUSH 0x2c14c9c                      ; 0047eff6 | g_CZombieDogClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0047effb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0047f000
    RET                                 ; 0047f003

