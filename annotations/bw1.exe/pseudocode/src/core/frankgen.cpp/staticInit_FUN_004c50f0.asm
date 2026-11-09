; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_frankgen_cpp_staticInit_FUN_004c50f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004c50f0
        ;   Label: core_frankgen.cpp_staticInit_FUN_004c50f0
    PUSH 0x1                            ; 004c50f5
    PUSH 0x61d864                       ; 004c50f7
    PUSH 0x4c5120                       ; 004c50fc
    PUSH 0x5e0aea                       ; 004c5101
    PUSH 0x1cc9074                      ; 004c5106
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004c510b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c5110
    RET                                 ; 004c5113

