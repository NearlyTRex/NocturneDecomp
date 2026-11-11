; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ghostchi_cpp_factoryFuncGhostChild_FUN_005a9200(void)
;
;
; Called Functions:
;   core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11868                        ; 005a9200
        ;   Label: core_ghostchi.cpp_factoryFuncGhostChild_FUN_005a9200
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a9205
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a920a
    TEST EAX,EAX                        ; 005a920d
    JNZ 0x005a9212                      ; 005a920f
        ;   XREF to: 005a9212 (CONDITIONAL_JUMP)  ; LAB_005a9212
    RET                                 ; 005a9211
    PUSH EAX                            ; 005a9212
        ;   Label: LAB_005a9212
    CALL core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230 ; 005a9213
        ;   XREF to: 005a9230 (UNCONDITIONAL_CALL)  ; CGhostChild * core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230(CGhostChild * this_ptr)
    ADD ESP,0x4                         ; 005a9218
    RET                                 ; 005a921b

