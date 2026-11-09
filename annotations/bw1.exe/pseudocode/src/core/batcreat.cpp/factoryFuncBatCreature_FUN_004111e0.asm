; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_batcreat_cpp_factoryFuncBatCreature_FUN_004111e0(void)
;
;
; Called Functions:
;   core_batcreat.cpp_CBatCreature_ctor_FUN_00411210
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc2b4                         ; 004111e0
        ;   Label: core_batcreat.cpp_factoryFuncBatCreature_FUN_004111e0
    CALL crt_unknown.c_FUN_005c0f32     ; 004111e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 004111ea
    TEST EAX,EAX                        ; 004111ed
    JNZ 0x004111f2                      ; 004111ef
        ;   XREF to: 004111f2 (CONDITIONAL_JUMP)  ; LAB_004111f2
    RET                                 ; 004111f1
    PUSH EAX                            ; 004111f2
        ;   Label: LAB_004111f2
    CALL core_batcreat.cpp_CBatCreature_ctor_FUN_00411210 ; 004111f3
        ;   XREF to: 00411210 (UNCONDITIONAL_CALL)  ; CBatCreature * core_batcreat.cpp_CBatCreature_ctor_FUN_00411210(CBatCreature * this_ptr)
    ADD ESP,0x4                         ; 004111f8
    RET                                 ; 004111fb

