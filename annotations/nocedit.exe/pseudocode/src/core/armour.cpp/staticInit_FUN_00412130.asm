; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_armour.cpp_staticInit_FUN_00412130(void)
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

    PUSH 0x2cf2bb8                      ; 00412130 | CDemonActorType g_CEnemyClassInfo
        ;   Label: core_armour.cpp_staticInit_FUN_00412130
    PUSH 0x1                            ; 00412135
    PUSH 0x66e3fc                       ; 00412137 | int g_CArmourClassVersion
    PUSH 0x412160                       ; 0041213c
    PUSH 0x614da0                       ; 00412141 | = "CArmour" | s_CArmour_00614da0 = CArmour
    PUSH 0x822420                       ; 00412146 | CDemonActorType g_CArmourClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0041214b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00412150
    RET                                 ; 00412153

