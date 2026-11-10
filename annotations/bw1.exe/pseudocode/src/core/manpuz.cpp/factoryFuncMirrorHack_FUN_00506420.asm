; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_factoryFuncMirrorHack_FUN_00506420(void)
;
;
; Called Functions:
;   core_manpuz.cpp_CMirrorHack_ctor_FUN_00506450
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x2d8                          ; 00506420
        ;   Label: core_manpuz.cpp_factoryFuncMirrorHack_FUN_00506420
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00506425
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0050642a
    TEST EAX,EAX                        ; 0050642d
    JNZ 0x00506432                      ; 0050642f
        ;   XREF to: 00506432 (CONDITIONAL_JUMP)  ; LAB_00506432
    RET                                 ; 00506431
    PUSH EAX                            ; 00506432
        ;   Label: LAB_00506432
    CALL core_manpuz.cpp_CMirrorHack_ctor_FUN_00506450 ; 00506433
        ;   XREF to: 00506450 (UNCONDITIONAL_CALL)  ; CMirrorHack * core_manpuz.cpp_CMirrorHack_ctor_FUN_00506450(CMirrorHack * this_ptr)
    ADD ESP,0x4                         ; 00506438
    RET                                 ; 0050643b

