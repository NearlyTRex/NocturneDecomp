; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_staticInit_FUN_004d16b0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFrankenstienMachine_0062a8c5
;   int g_CFrankenstienMachineClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CFrankenstienMachineClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 004d16b0 | g_CDemonActorClassInfo
        ;   Label: core_frankgen.cpp_staticInit_FUN_004d16b0
    PUSH 0x1                            ; 004d16b5
    PUSH 0x67b584                       ; 004d16b7 | g_CFrankenstienMachineClassVersion
    PUSH 0x4d16e0                       ; 004d16bc
    PUSH 0x62a8c5                       ; 004d16c1 | = "CFrankenstienMachine"
    PUSH 0x2d7b7b4                      ; 004d16c6 | g_CFrankenstienMachineClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004d16cb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d16d0
    RET                                 ; 004d16d3

