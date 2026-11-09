; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crate_cpp_factoryFuncCrate_FUN_00448fe0(void)
;
;
; Called Functions:
;   core_crate.cpp_CCrate_ctor_FUN_00449010
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x2fc                          ; 00448fe0
        ;   Label: core_crate.cpp_factoryFuncCrate_FUN_00448fe0
    CALL crt_unknown.c_FUN_005c0f32     ; 00448fe5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 00448fea
    TEST EAX,EAX                        ; 00448fed
    JNZ 0x00448ff2                      ; 00448fef
        ;   XREF to: 00448ff2 (CONDITIONAL_JUMP)  ; LAB_00448ff2
    RET                                 ; 00448ff1
    PUSH EAX                            ; 00448ff2
        ;   Label: LAB_00448ff2
    CALL core_crate.cpp_CCrate_ctor_FUN_00449010 ; 00448ff3
        ;   XREF to: 00449010 (UNCONDITIONAL_CALL)  ; CCrate * core_crate.cpp_CCrate_ctor_FUN_00449010(CCrate * this_ptr)
    ADD ESP,0x4                         ; 00448ff8
    RET                                 ; 00448ffb

