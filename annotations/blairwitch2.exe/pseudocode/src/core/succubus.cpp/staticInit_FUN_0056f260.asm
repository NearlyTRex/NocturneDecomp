; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_succubus_cpp_staticInit_FUN_0056f260(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 0056f260
        ;   Label: core_succubus.cpp_staticInit_FUN_0056f260
    PUSH 0x1                            ; 0056f265
    PUSH 0x61e2f8                       ; 0056f267
    PUSH 0x56f290                       ; 0056f26c
    PUSH 0x5ebf8a                       ; 0056f271
    PUSH 0x264befc                      ; 0056f276
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0056f27b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0056f280
    RET                                 ; 0056f283

