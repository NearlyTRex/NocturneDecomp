; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tvbat_cpp_factoryFuncTVBat_FUN_00580290(void)
;
;
; Called Functions:
;   core_tvbat.cpp_CTVBat_ctor_FUN_005802f0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10d30                        ; 00580290
        ;   Label: core_tvbat.cpp_factoryFuncTVBat_FUN_00580290
    CALL crt_unknown.c_FUN_005b8be2     ; 00580295
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 0058029a
    TEST EAX,EAX                        ; 0058029d
    JNZ 0x005802a2                      ; 0058029f
        ;   XREF to: 005802a2 (CONDITIONAL_JUMP)  ; LAB_005802a2
    RET                                 ; 005802a1
    PUSH EAX                            ; 005802a2
        ;   Label: LAB_005802a2
    CALL core_tvbat.cpp_CTVBat_ctor_FUN_005802f0 ; 005802a3
        ;   XREF to: 005802f0 (UNCONDITIONAL_CALL)  ; CTVBat * core_tvbat.cpp_CTVBat_ctor_FUN_005802f0(CTVBat * this_ptr)
    ADD ESP,0x4                         ; 005802a8
    RET                                 ; 005802ab

