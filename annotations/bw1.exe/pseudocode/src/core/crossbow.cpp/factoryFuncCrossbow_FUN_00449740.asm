; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crossbow_cpp_factoryFuncCrossbow_FUN_00449740(void)
;
;
; Called Functions:
;   core_crossbow.cpp_CCrossbow_ctor_FUN_00449770
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x820                          ; 00449740
        ;   Label: core_crossbow.cpp_factoryFuncCrossbow_FUN_00449740
    CALL crt_unknown.c_FUN_005c0f32     ; 00449745
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 0044974a
    TEST EAX,EAX                        ; 0044974d
    JNZ 0x00449752                      ; 0044974f
        ;   XREF to: 00449752 (CONDITIONAL_JUMP)  ; LAB_00449752
    RET                                 ; 00449751
    PUSH EAX                            ; 00449752
        ;   Label: LAB_00449752
    CALL core_crossbow.cpp_CCrossbow_ctor_FUN_00449770 ; 00449753
        ;   XREF to: 00449770 (UNCONDITIONAL_CALL)  ; CCrossbow * core_crossbow.cpp_CCrossbow_ctor_FUN_00449770(CCrossbow * this_ptr)
    ADD ESP,0x4                         ; 00449758
    RET                                 ; 0044975b

