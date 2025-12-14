; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_curtain.cpp_staticInit_FUN_00449610(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CCurtain_00619bba
;   WatcomTypeInfo g_CVectorTypeInfo
;   WatcomTypeInfo g_SCollisionInfoTypeInfo
;   int g_CCurtainClassVersion = 0x6
;   CDemonActorType g_CDemonActorClassInfo
;   CVector3f[100] DAT_008879c0
;   SCollisionInfo[100] DAT_00887e70
;   CDemonActorType g_CCurtainClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 00449610 | g_CVectorTypeInfo
        ;   Label: core_curtain.cpp_staticInit_FUN_00449610
    PUSH 0x64                           ; 00449615
    PUSH 0x8879c0                       ; 00449617 | DAT_008879c0
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0044961c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00449621
    PUSH 0x65c5d0                       ; 00449624 | g_SCollisionInfoTypeInfo
    PUSH 0x64                           ; 00449629
    PUSH 0x887e70                       ; 0044962b | DAT_00887e70
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00449630
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00449635
    PUSH 0x821ff8                       ; 00449638 | g_CDemonActorClassInfo
    PUSH 0x6                            ; 0044963d
    PUSH 0x66eca4                       ; 0044963f | g_CCurtainClassVersion
    PUSH 0x449660                       ; 00449644
    PUSH 0x619bba                       ; 00449649 | = "CCurtain"
    PUSH 0x888e10                       ; 0044964e | g_CCurtainClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00449653
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00449658
    RET                                 ; 0044965b

