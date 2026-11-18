; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bat_cpp_staticInit_FUN_00411910(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBat_00578777
;   int g_CBatClassVersion = 0x4
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CBatClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00411910 | g_CDemonActorClassInfo
        ;   Label: core_bat.cpp_staticInit_FUN_00411910
    PUSH 0x4                            ; 00411915
    PUSH 0x5acf94                       ; 00411917 | g_CBatClassVersion
    PUSH 0x4119e0                       ; 0041191c
    PUSH 0x578777                       ; 00411921 | = "CBat"
    PUSH 0x764560                       ; 00411926 | g_CBatClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041192b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00411930
    RET                                 ; 00411933

