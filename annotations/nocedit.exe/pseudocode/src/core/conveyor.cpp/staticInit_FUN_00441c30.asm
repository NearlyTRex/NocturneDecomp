; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_conveyor_cpp_staticInit_FUN_00441c30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CConveyor_00618e1b
;   int g_CConveyorClassVersion = 0x2
;   CDemonActorType g_CConveyorClassInfo
;   CDemonActorType g_CPlatformClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x30d5054                      ; 00441c30 | g_CPlatformClassInfo
        ;   Label: core_conveyor.cpp_staticInit_FUN_00441c30
    PUSH 0x2                            ; 00441c35
    PUSH 0x66e910                       ; 00441c37 | g_CConveyorClassVersion
    PUSH 0x441c60                       ; 00441c3c
    PUSH 0x618e1b                       ; 00441c41 | = "CConveyor"
    PUSH 0x83c160                       ; 00441c46 | g_CConveyorClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00441c4b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00441c50
    RET                                 ; 00441c53

