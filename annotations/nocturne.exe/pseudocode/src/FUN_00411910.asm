; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00411910(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBat_00578777
;   int INT_005acf94 = 0x4
;   CDemonActorType CDemonActorType_00763e48
;   CDemonActorType CDemonActorType_00764560
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00411910 | CDemonActorType_00763e48
        ;   Label: FUN_00411910
    PUSH 0x4                            ; 00411915
    PUSH 0x5acf94                       ; 00411917 | INT_005acf94
    PUSH 0x4119e0                       ; 0041191c
    PUSH 0x578777                       ; 00411921 | = "CBat"
    PUSH 0x764560                       ; 00411926 | CDemonActorType_00764560
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041192b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00411930
    RET                                 ; 00411933

