; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_armour_cpp_staticInit_FUN_00412130(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CArmour_00614da0
;   int g_CArmourClassVersion = 0x1
;   CDemonActorType g_CArmourClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 00412130 | g_CEnemyClassInfo
        ;   Label: core_armour.cpp_staticInit_FUN_00412130
    PUSH 0x1                            ; 00412135
    PUSH 0x66e3fc                       ; 00412137 | g_CArmourClassVersion
    PUSH 0x412160                       ; 0041213c
    PUSH 0x614da0                       ; 00412141 | = "CArmour"
    PUSH 0x822420                       ; 00412146 | g_CArmourClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0041214b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00412150
    RET                                 ; 00412153

