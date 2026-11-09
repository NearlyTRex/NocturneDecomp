; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00571b00(void)
;
;
; Called Functions:
;   core_tbplayer.cpp_CBassPlayer_ctor_FUN_00571b30
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x24350                        ; 00571b00
        ;   Label: core_tbplayer.cpp_factoryFuncBassPlayer_FUN_00571b00
    CALL crt_unknown.c_FUN_005b8be2     ; 00571b05
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 00571b0a
    TEST EAX,EAX                        ; 00571b0d
    JNZ 0x00571b12                      ; 00571b0f
        ;   XREF to: 00571b12 (CONDITIONAL_JUMP)  ; LAB_00571b12
    RET                                 ; 00571b11
    PUSH EAX                            ; 00571b12
        ;   Label: LAB_00571b12
    CALL core_tbplayer.cpp_CBassPlayer_ctor_FUN_00571b30 ; 00571b13
        ;   XREF to: 00571b30 (UNCONDITIONAL_CALL)  ; CBassPlayer * core_tbplayer.cpp_CBassPlayer_ctor_FUN_00571b30(CBassPlayer * this_ptr)
    ADD ESP,0x4                         ; 00571b18
    RET                                 ; 00571b1b

