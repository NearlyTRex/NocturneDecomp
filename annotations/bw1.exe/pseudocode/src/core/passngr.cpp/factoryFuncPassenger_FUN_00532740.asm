; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_passngr_cpp_factoryFuncPassenger_FUN_00532740(void)
;
;
; Called Functions:
;   core_passngr.cpp_CPassenger_ctor_FUN_00532770
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x207f8                        ; 00532740
        ;   Label: core_passngr.cpp_factoryFuncPassenger_FUN_00532740
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00532745
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0053274a
    TEST EAX,EAX                        ; 0053274d
    JNZ 0x00532752                      ; 0053274f
        ;   XREF to: 00532752 (CONDITIONAL_JUMP)  ; LAB_00532752
    RET                                 ; 00532751
    PUSH EAX                            ; 00532752
        ;   Label: LAB_00532752
    CALL core_passngr.cpp_CPassenger_ctor_FUN_00532770 ; 00532753
        ;   XREF to: 00532770 (UNCONDITIONAL_CALL)  ; CPassenger * core_passngr.cpp_CPassenger_ctor_FUN_00532770(CPassenger * this_ptr)
    ADD ESP,0x4                         ; 00532758
    RET                                 ; 0053275b

