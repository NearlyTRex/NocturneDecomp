; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_minecar.cpp_staticInit_FUN_00520e20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CMineCar_00638958
;   int g_CMineCarClassVersion = 0x1
;   CDemonActorType g_CMineCarClassInfo
;   CDemonActorType g_CPlatformClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x30d5054                      ; 00520e20 | g_CPlatformClassInfo
        ;   Label: core_minecar.cpp_staticInit_FUN_00520e20
    PUSH 0x1                            ; 00520e25
    PUSH 0x67d524                       ; 00520e27 | g_CMineCarClassVersion
    PUSH 0x520e50                       ; 00520e2c
    PUSH 0x638958                       ; 00520e31 | = "CMineCar"
    PUSH 0x2f333c8                      ; 00520e36 | g_CMineCarClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00520e3b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00520e40
    RET                                 ; 00520e43

