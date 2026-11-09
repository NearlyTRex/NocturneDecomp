; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hiram_cpp_staticInit_FUN_004ed130(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d8136c                      ; 004ed130
        ;   Label: core_hiram.cpp_staticInit_FUN_004ed130
    PUSH 0x1                            ; 004ed135
    PUSH 0x61ef6c                       ; 004ed137
    PUSH 0x4ed160                       ; 004ed13c
    PUSH 0x5e4c39                       ; 004ed141
    PUSH 0x1d06b50                      ; 004ed146
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004ed14b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ed150
    RET                                 ; 004ed153

