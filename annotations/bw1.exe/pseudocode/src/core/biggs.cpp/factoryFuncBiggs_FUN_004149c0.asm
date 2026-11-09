; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_biggs_cpp_factoryFuncBiggs_FUN_004149c0(void)
;
;
; Called Functions:
;   core_biggs.cpp_CBiggs_ctor_FUN_004149f0
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xd07c                         ; 004149c0
        ;   Label: core_biggs.cpp_factoryFuncBiggs_FUN_004149c0
    CALL crt_unknown.c_FUN_005c0f32     ; 004149c5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 004149ca
    TEST EAX,EAX                        ; 004149cd
    JNZ 0x004149d2                      ; 004149cf
        ;   XREF to: 004149d2 (CONDITIONAL_JUMP)  ; LAB_004149d2
    RET                                 ; 004149d1
    PUSH EAX                            ; 004149d2
        ;   Label: LAB_004149d2
    CALL core_biggs.cpp_CBiggs_ctor_FUN_004149f0 ; 004149d3
        ;   XREF to: 004149f0 (UNCONDITIONAL_CALL)  ; CBiggs * core_biggs.cpp_CBiggs_ctor_FUN_004149f0(CBiggs * this_ptr)
    ADD ESP,0x4                         ; 004149d8
    RET                                 ; 004149db

