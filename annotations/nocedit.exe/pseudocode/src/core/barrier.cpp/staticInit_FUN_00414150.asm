; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_barrier_cpp_staticInit_FUN_00414150(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBarrier_0061513f
;   int g_CBarrierClassVersion = 0x2
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CBarrierClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00414150 | g_CDemonActorClassInfo
        ;   Label: core_barrier.cpp_staticInit_FUN_00414150
    PUSH 0x2                            ; 00414155
    PUSH 0x66e4a0                       ; 00414157 | g_CBarrierClassVersion
    PUSH 0x414180                       ; 0041415c
    PUSH 0x61513f                       ; 00414161 | = "CBarrier"
    PUSH 0x8226d4                       ; 00414166 | g_CBarrierClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0041416b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00414170
    RET                                 ; 00414173

