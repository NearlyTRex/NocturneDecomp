; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crossbow_cpp_factoryFuncCrate_FUN_00439d30(void)
;
;
; Called Functions:
;   core_crate.cpp_CCrate_ctor_FUN_00439d60
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x458                          ; 00439d30
        ;   Label: core_crossbow.cpp_factoryFuncCrate_FUN_00439d30
    CALL crt_unknown.c_FUN_005b8be2     ; 00439d35
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 00439d3a
    TEST EAX,EAX                        ; 00439d3d
    JNZ 0x00439d42                      ; 00439d3f
        ;   XREF to: 00439d42 (CONDITIONAL_JUMP)  ; LAB_00439d42
    RET                                 ; 00439d41
    PUSH EAX                            ; 00439d42
        ;   Label: LAB_00439d42
    CALL core_crate.cpp_CCrate_ctor_FUN_00439d60 ; 00439d43
        ;   XREF to: 00439d60 (UNCONDITIONAL_CALL)  ; CCrate * core_crate.cpp_CCrate_ctor_FUN_00439d60(CCrate * this_ptr)
    ADD ESP,0x4                         ; 00439d48
    RET                                 ; 00439d4b

