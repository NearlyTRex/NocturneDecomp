; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_barrier_cpp_staticInit_FUN_004116b0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBarrier_00578730
;   int g_CBarrierClassVersion = 0x2
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CBarrierClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004116b0 | g_CDemonActorClassInfo
        ;   Label: core_barrier.cpp_staticInit_FUN_004116b0
    PUSH 0x2                            ; 004116b5
    PUSH 0x5acf80                       ; 004116b7 | g_CBarrierClassVersion
    PUSH 0x4116e0                       ; 004116bc
    PUSH 0x578730                       ; 004116c1 | = "CBarrier"
    PUSH 0x764524                       ; 004116c6 | g_CBarrierClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004116cb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004116d0
    RET                                 ; 004116d3

