; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_npc_cpp_staticInit_FUN_00531610(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c6344                       ; 00531610
        ;   Label: core_npc.cpp_staticInit_FUN_00531610
    PUSH 0x6                            ; 00531615
    PUSH 0x622714                       ; 00531617
    PUSH 0x531640                       ; 0053161c
    PUSH 0x5ec70f                       ; 00531621
    PUSH 0x1d8136c                      ; 00531626
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0053162b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00531630
    RET                                 ; 00531633

