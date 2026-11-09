; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_succubus_cpp_factoryFuncSuccubus_FUN_00591ee0(void)
;
;
; Called Functions:
;   core_succubus.cpp_CSuccubus_ctor_FUN_00591f10
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xf404                         ; 00591ee0
        ;   Label: core_succubus.cpp_factoryFuncSuccubus_FUN_00591ee0
    CALL crt_unknown.c_FUN_005c0f32     ; 00591ee5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 00591eea
    TEST EAX,EAX                        ; 00591eed
    JNZ 0x00591ef2                      ; 00591eef
        ;   XREF to: 00591ef2 (CONDITIONAL_JUMP)  ; LAB_00591ef2
    RET                                 ; 00591ef1
    PUSH EAX                            ; 00591ef2
        ;   Label: LAB_00591ef2
    CALL core_succubus.cpp_CSuccubus_ctor_FUN_00591f10 ; 00591ef3
        ;   XREF to: 00591f10 (UNCONDITIONAL_CALL)  ; CSuccubus * core_succubus.cpp_CSuccubus_ctor_FUN_00591f10(CSuccubus * this_ptr)
    ADD ESP,0x4                         ; 00591ef8
    RET                                 ; 00591efb

