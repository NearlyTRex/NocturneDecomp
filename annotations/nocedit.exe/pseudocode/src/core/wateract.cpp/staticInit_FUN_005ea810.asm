; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_wateract.cpp_staticInit_FUN_005ea810(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CWaterActor_00657247
;   WatcomTypeInfo g_CVectorTypeInfo
;   WatcomTypeInfo g_SCollisionInfoTypeInfo
;   int g_CWaterActorVersion = 0x6
;   CDemonActorType g_CDemonActorClassInfo
;   CVector3f[100] DAT_03f8f638
;   SCollisionInfo[100] DAT_03f8fae8
;   CDemonActorType g_CWaterActorClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 005ea810 | g_CVectorTypeInfo
        ;   Label: core_wateract.cpp_staticInit_FUN_005ea810
    PUSH 0x64                           ; 005ea815
    PUSH 0x3f8f638                      ; 005ea817 | DAT_03f8f638
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005ea81c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005ea821
    PUSH 0x65c5d0                       ; 005ea824 | g_SCollisionInfoTypeInfo
    PUSH 0x64                           ; 005ea829
    PUSH 0x3f8fae8                      ; 005ea82b | DAT_03f8fae8
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005ea830
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005ea835
    PUSH 0x821ff8                       ; 005ea838 | g_CDemonActorClassInfo
    PUSH 0x6                            ; 005ea83d
    PUSH 0x684870                       ; 005ea83f | g_CWaterActorVersion
    PUSH 0x5ea860                       ; 005ea844
    PUSH 0x657247                       ; 005ea849 | = "CWaterActor"
    PUSH 0x3f93968                      ; 005ea84e | g_CWaterActorClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005ea853
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005ea858
    RET                                 ; 005ea85b

