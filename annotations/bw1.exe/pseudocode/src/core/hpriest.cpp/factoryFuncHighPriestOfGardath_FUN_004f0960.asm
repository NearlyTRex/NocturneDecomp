; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004f0960(void)
;
;
; Called Functions:
;   core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004f0990
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1fb1c                        ; 004f0960
        ;   Label: core_hpriest.cpp_factoryFuncHighPriestOfGardath_FUN_004f0960
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004f0965
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004f096a
    TEST EAX,EAX                        ; 004f096d
    JNZ 0x004f0972                      ; 004f096f
        ;   XREF to: 004f0972 (CONDITIONAL_JUMP)  ; LAB_004f0972
    RET                                 ; 004f0971
    PUSH EAX                            ; 004f0972
        ;   Label: LAB_004f0972
    CALL core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004f0990 ; 004f0973
        ;   XREF to: 004f0990 (UNCONDITIONAL_CALL)  ; CHighPriestOfGardath * core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004f0990(CHighPriestOfGardath * this_ptr)
    ADD ESP,0x4                         ; 004f0978
    RET                                 ; 004f097b

