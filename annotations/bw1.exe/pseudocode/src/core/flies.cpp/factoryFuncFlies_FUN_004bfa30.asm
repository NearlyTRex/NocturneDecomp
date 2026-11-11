; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flies_cpp_factoryFuncFlies_FUN_004bfa30(void)
;
;
; Called Functions:
;   core_flies.cpp_CFlies_ctor_FUN_004bfa60
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x2a20                         ; 004bfa30
        ;   Label: core_flies.cpp_factoryFuncFlies_FUN_004bfa30
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004bfa35
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004bfa3a
    TEST EAX,EAX                        ; 004bfa3d
    JNZ 0x004bfa42                      ; 004bfa3f
        ;   XREF to: 004bfa42 (CONDITIONAL_JUMP)  ; LAB_004bfa42
    RET                                 ; 004bfa41
    PUSH EAX                            ; 004bfa42
        ;   Label: LAB_004bfa42
    CALL core_flies.cpp_CFlies_ctor_FUN_004bfa60 ; 004bfa43
        ;   XREF to: 004bfa60 (UNCONDITIONAL_CALL)  ; CFlies * core_flies.cpp_CFlies_ctor_FUN_004bfa60(CFlies * this_ptr)
    ADD ESP,0x4                         ; 004bfa48
    RET                                 ; 004bfa4b

