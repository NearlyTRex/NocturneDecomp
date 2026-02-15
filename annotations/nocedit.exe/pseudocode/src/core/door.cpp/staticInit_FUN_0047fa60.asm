; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_staticInit_FUN_0047fa60(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CDoor_00621079
;   int g_CDoorClassVersion = 0xb
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CDoorClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 0047fa60 | g_CDemonActorClassInfo
        ;   Label: core_door.cpp_staticInit_FUN_0047fa60
    PUSH 0xb                            ; 0047fa65
    PUSH 0x670378                       ; 0047fa67 | g_CDoorClassVersion
    PUSH 0x47fa90                       ; 0047fa6c
    PUSH 0x621079                       ; 0047fa71 | = "CDoor"
    PUSH 0x2c14cdc                      ; 0047fa76 | g_CDoorClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0047fa7b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0047fa80
    RET                                 ; 0047fa83

