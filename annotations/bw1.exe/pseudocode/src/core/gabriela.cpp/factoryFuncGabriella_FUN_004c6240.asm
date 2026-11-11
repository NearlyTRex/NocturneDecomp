; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_factoryFuncGabriella_FUN_004c6240(void)
;
;
; Called Functions:
;   core_gabriela.cpp_CGabriella_ctor_FUN_004c6270
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x5ab20                        ; 004c6240
        ;   Label: core_gabriela.cpp_factoryFuncGabriella_FUN_004c6240
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004c6245
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004c624a
    TEST EAX,EAX                        ; 004c624d
    JNZ 0x004c6252                      ; 004c624f
        ;   XREF to: 004c6252 (CONDITIONAL_JUMP)  ; LAB_004c6252
    RET                                 ; 004c6251
    PUSH EAX                            ; 004c6252
        ;   Label: LAB_004c6252
    CALL core_gabriela.cpp_CGabriella_ctor_FUN_004c6270 ; 004c6253
        ;   XREF to: 004c6270 (UNCONDITIONAL_CALL)  ; CGabriella * core_gabriela.cpp_CGabriella_ctor_FUN_004c6270(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004c6258
    RET                                 ; 004c625b

