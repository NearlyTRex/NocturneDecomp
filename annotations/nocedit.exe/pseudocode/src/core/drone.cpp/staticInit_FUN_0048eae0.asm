; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_drone.cpp_staticInit_FUN_0048eae0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CDrone_00622354
;   int g_CDroneClassVersion = 0x2
;   CDemonActorType g_CDroneClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 0048eae0 | g_CEnemyClassInfo
        ;   Label: core_drone.cpp_staticInit_FUN_0048eae0
    PUSH 0x2                            ; 0048eae5
    PUSH 0x672348                       ; 0048eae7 | g_CDroneClassVersion
    PUSH 0x48eb10                       ; 0048eaec
    PUSH 0x622354                       ; 0048eaf1 | = "CDrone"
    PUSH 0x2c9b2ec                      ; 0048eaf6 | g_CDroneClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0048eafb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0048eb00
    RET                                 ; 0048eb03

