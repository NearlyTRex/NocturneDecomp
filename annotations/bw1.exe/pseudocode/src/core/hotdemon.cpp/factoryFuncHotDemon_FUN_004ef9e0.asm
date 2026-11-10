; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_factoryFuncHotDemon_FUN_004ef9e0(void)
;
;
; Called Functions:
;   core_hotdemon.cpp_CHotDemon_ctor_FUN_004efa10
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc29c                         ; 004ef9e0
        ;   Label: core_hotdemon.cpp_factoryFuncHotDemon_FUN_004ef9e0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004ef9e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004ef9ea
    TEST EAX,EAX                        ; 004ef9ed
    JNZ 0x004ef9f2                      ; 004ef9ef
        ;   XREF to: 004ef9f2 (CONDITIONAL_JUMP)  ; LAB_004ef9f2
    RET                                 ; 004ef9f1
    PUSH EAX                            ; 004ef9f2
        ;   Label: LAB_004ef9f2
    CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004efa10 ; 004ef9f3
        ;   XREF to: 004efa10 (UNCONDITIONAL_CALL)  ; CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004efa10(CHotDemon * this_ptr)
    ADD ESP,0x4                         ; 004ef9f8
    RET                                 ; 004ef9fb

