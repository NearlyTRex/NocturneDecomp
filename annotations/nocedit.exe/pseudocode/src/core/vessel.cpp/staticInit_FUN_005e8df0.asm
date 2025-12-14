; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_vessel.cpp_staticInit_FUN_005e8df0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CCryptVessel_00656fe1
;   int g_CCryptVesselClassVersion = 0x4
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CCryptVesselClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 005e8df0 | g_CDemonActorClassInfo
        ;   Label: core_vessel.cpp_staticInit_FUN_005e8df0
    PUSH 0x4                            ; 005e8df5
    PUSH 0x6844c8                       ; 005e8df7 | g_CCryptVesselClassVersion
    PUSH 0x5e8e20                       ; 005e8dfc
    PUSH 0x656fe1                       ; 005e8e01 | = "CCryptVessel"
    PUSH 0x3f875a0                      ; 005e8e06 | g_CCryptVesselClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005e8e0b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005e8e10
    RET                                 ; 005e8e13

