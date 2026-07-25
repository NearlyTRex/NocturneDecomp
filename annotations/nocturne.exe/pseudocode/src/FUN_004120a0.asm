; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004120a0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBatCreature_0057882f
;   int INT_005acfa4 = 0x1
;   CDemonActorType CDemonActorType_007645cc
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 004120a0
        ;   Label: FUN_004120a0
    PUSH 0x1                            ; 004120a5
    PUSH 0x5acfa4                       ; 004120a7 | INT_005acfa4
    PUSH 0x4120d0                       ; 004120ac
    PUSH 0x57882f                       ; 004120b1 | = "CBatCreature"
    PUSH 0x7645cc                       ; 004120b6 | CDemonActorType_007645cc
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004120bb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004120c0
    RET                                 ; 004120c3

