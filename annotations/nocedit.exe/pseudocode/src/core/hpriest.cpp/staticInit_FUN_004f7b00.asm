; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_hpriest.cpp_staticInit_FUN_004f7b00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHighPriestOfGardath_0062f534
;   int g_CHighPriestOfGardathClassVersion = 0x1
;   CDemonActorType g_CHighPriestOfGardathClassInfo
;   CDemonActorType g_CNPCClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2fd8ce0                      ; 004f7b00 | CDemonActorType g_CNPCClassInfo
        ;   Label: core_hpriest.cpp_staticInit_FUN_004f7b00
    PUSH 0x1                            ; 004f7b05
    PUSH 0x67cc88                       ; 004f7b07 | int g_CHighPriestOfGardathClassVersion
    PUSH 0x4f7b30                       ; 004f7b0c
    PUSH 0x62f534                       ; 004f7b11 | = "CHighPriestOfGardath" | s_CHighPriestOfGardath_0062f534 = CHighPriestOfGardath
    PUSH 0x2db8934                      ; 004f7b16 | CDemonActorType g_CHighPriestOfGardathClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004f7b1b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004f7b20
    RET                                 ; 004f7b23

