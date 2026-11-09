; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shotgun_cpp_staticInit_FUN_00546260(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00546260
        ;   Label: core_shotgun.cpp_staticInit_FUN_00546260
    PUSH 0x1                            ; 00546265
    PUSH 0x604130                       ; 00546267
    PUSH 0x546290                       ; 0054626c
    PUSH 0x5d1416                       ; 00546271
    PUSH 0x270f908                      ; 00546276
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0054627b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00546280
    RET                                 ; 00546283

