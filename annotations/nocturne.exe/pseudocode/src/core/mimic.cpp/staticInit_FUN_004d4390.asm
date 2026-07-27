; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_staticInit_FUN_004d4390(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CMimic_00589237
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 004d4390
        ;   Label: core_mimic.cpp_staticInit_FUN_004d4390
    PUSH 0x3                            ; 004d4395
    PUSH 0x5baf48                       ; 004d4397
    PUSH 0x4d4420                       ; 004d439c
    PUSH 0x589237                       ; 004d43a1 | = "CMimic"
    PUSH 0x1cc9058                      ; 004d43a6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004d43ab
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d43b0
    RET                                 ; 004d43b3

