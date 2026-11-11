; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_marquee_cpp_factoryFuncMarquee_FUN_005068f0(void)
;
;
; Called Functions:
;   core_marquee.cpp_CMarquee_ctor_FUN_00506920
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1bc                          ; 005068f0
        ;   Label: core_marquee.cpp_factoryFuncMarquee_FUN_005068f0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 005068f5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 005068fa
    TEST EAX,EAX                        ; 005068fd
    JNZ 0x00506902                      ; 005068ff
        ;   XREF to: 00506902 (CONDITIONAL_JUMP)  ; LAB_00506902
    RET                                 ; 00506901
    PUSH EAX                            ; 00506902
        ;   Label: LAB_00506902
    CALL core_marquee.cpp_CMarquee_ctor_FUN_00506920 ; 00506903
        ;   XREF to: 00506920 (UNCONDITIONAL_CALL)  ; CMarquee * core_marquee.cpp_CMarquee_ctor_FUN_00506920(CMarquee * this_ptr)
    ADD ESP,0x4                         ; 00506908
    RET                                 ; 0050690b

