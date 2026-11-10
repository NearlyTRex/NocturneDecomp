; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00594750(void)
;
;
; Called Functions:
;   core_tbplayer.cpp_CBassPlayer_ctor_FUN_00594780
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1fac0                        ; 00594750
        ;   Label: core_tbplayer.cpp_factoryFuncBassPlayer_FUN_00594750
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00594755
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0059475a
    TEST EAX,EAX                        ; 0059475d
    JNZ 0x00594762                      ; 0059475f
        ;   XREF to: 00594762 (CONDITIONAL_JUMP)  ; LAB_00594762
    RET                                 ; 00594761
    PUSH EAX                            ; 00594762
        ;   Label: LAB_00594762
    CALL core_tbplayer.cpp_CBassPlayer_ctor_FUN_00594780 ; 00594763
        ;   XREF to: 00594780 (UNCONDITIONAL_CALL)  ; CBassPlayer * core_tbplayer.cpp_CBassPlayer_ctor_FUN_00594780(CBassPlayer * this_ptr)
    ADD ESP,0x4                         ; 00594768
    RET                                 ; 0059476b

