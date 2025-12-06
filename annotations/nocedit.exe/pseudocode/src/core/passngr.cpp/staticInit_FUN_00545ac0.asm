; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_passngr.cpp_staticInit_FUN_00545ac0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CPassenger_0063e765
;   undefined4 g_CPassengerClassVersion
;   CDemonActorType g_CNPCClassInfo
;   CDemonActorType g_CPassengerClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2fd8ce0                      ; 00545ac0 | CDemonActorType g_CNPCClassInfo
        ;   Label: core_passngr.cpp_staticInit_FUN_00545ac0
    PUSH 0x6                            ; 00545ac5
    PUSH 0x680b98                       ; 00545ac7 | undefined4 g_CPassengerClassVersion
    PUSH 0x545af0                       ; 00545acc
    PUSH 0x63e765                       ; 00545ad1 | = "CPassenger" | s_CPassenger_0063e765 = CPassenger
    PUSH 0x2fd9020                      ; 00545ad6 | CDemonActorType g_CPassengerClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00545adb | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00545ae0
    RET                                 ; 00545ae3

