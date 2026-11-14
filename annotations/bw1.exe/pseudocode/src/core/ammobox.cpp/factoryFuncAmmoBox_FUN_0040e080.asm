; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmoBox * __cdecl core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e080(void)
;
;
; Called Functions:
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e0b0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x34c                          ; 0040e080
        ;   Label: core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e080
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0040e085
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0040e08a
    TEST EAX,EAX                        ; 0040e08d
    JNZ 0x0040e092                      ; 0040e08f
        ;   XREF to: 0040e092 (CONDITIONAL_JUMP)  ; LAB_0040e092
    RET                                 ; 0040e091
    PUSH EAX                            ; 0040e092
        ;   Label: LAB_0040e092
    CALL core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e0b0 ; 0040e093
        ;   XREF to: 0040e0b0 (UNCONDITIONAL_CALL)  ; CAmmoBox * core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e0b0(CAmmoBox * this_ptr)
    ADD ESP,0x4                         ; 0040e098
    RET                                 ; 0040e09b

