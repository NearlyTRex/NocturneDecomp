; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_npc.cpp_staticInit_FUN_00544770(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CNPC_0063e2f4
;   undefined4 g_CNPCClassVersion
;   CDemonActorType g_CCharacterClassInfo
;   CDemonActorType g_CNPCClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x823c14                       ; 00544770 | CDemonActorType g_CCharacterClassInfo
        ;   Label: core_npc.cpp_staticInit_FUN_00544770
    PUSH 0x4                            ; 00544775
    PUSH 0x680b94                       ; 00544777 | undefined4 g_CNPCClassVersion
    PUSH 0x5447a0                       ; 0054477c
    PUSH 0x63e2f4                       ; 00544781 | = "CNPC" | s_CNPC_0063e2f4 = CNPC
    PUSH 0x2fd8ce0                      ; 00544786 | CDemonActorType g_CNPCClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0054478b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00544790
    RET                                 ; 00544793

