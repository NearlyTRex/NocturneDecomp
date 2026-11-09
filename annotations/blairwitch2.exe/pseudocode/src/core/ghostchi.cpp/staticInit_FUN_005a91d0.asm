; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ghostchi_cpp_staticInit_FUN_005a91d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005a91d0
        ;   Label: core_ghostchi.cpp_staticInit_FUN_005a91d0
    PUSH 0x1                            ; 005a91d5
    PUSH 0x61ec90                       ; 005a91d7
    PUSH 0x5a9200                       ; 005a91dc
    PUSH 0x5f08a7                       ; 005a91e1
    PUSH 0x266886c                      ; 005a91e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a91eb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a91f0
    RET                                 ; 005a91f3

