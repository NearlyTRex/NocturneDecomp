; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_litecone_cpp_factoryFuncLightCone_FUN_004e4160(void)
;
;
; Called Functions:
;   core_litecone.cpp_CLightCone_ctor_FUN_004e4190
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x388                          ; 004e4160
        ;   Label: core_litecone.cpp_factoryFuncLightCone_FUN_004e4160
    CALL crt_unknown.c_FUN_005b8be2     ; 004e4165
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004e416a
    TEST EAX,EAX                        ; 004e416d
    JNZ 0x004e4172                      ; 004e416f
        ;   XREF to: 004e4172 (CONDITIONAL_JUMP)  ; LAB_004e4172
    RET                                 ; 004e4171
    PUSH EAX                            ; 004e4172
        ;   Label: LAB_004e4172
    CALL core_litecone.cpp_CLightCone_ctor_FUN_004e4190 ; 004e4173
        ;   XREF to: 004e4190 (UNCONDITIONAL_CALL)  ; CLightCone * core_litecone.cpp_CLightCone_ctor_FUN_004e4190(CLightCone * this_ptr)
    ADD ESP,0x4                         ; 004e4178
    RET                                 ; 004e417b

