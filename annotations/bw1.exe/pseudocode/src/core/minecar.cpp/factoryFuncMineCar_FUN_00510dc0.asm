; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMineCar * __cdecl core_minecar_cpp_factoryFuncMineCar_FUN_00510dc0(void)
;
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_ctor_FUN_00539400
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x72c                          ; 00510dc0
        ;   Label: core_minecar.cpp_factoryFuncMineCar_FUN_00510dc0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00510dc5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00510dca
    TEST EAX,EAX                        ; 00510dcd
    JNZ 0x00510dd2                      ; 00510dcf
        ;   XREF to: 00510dd2 (CONDITIONAL_JUMP)  ; LAB_00510dd2
    RET                                 ; 00510dd1
    PUSH EAX                            ; 00510dd2
        ;   Label: LAB_00510dd2
    CALL core_platfrm.cpp_CPlatform_ctor_FUN_00539400 ; 00510dd3
        ;   XREF to: 00539400 (UNCONDITIONAL_CALL)  ; CPlatform * core_platfrm.cpp_CPlatform_ctor_FUN_00539400(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 00510dd8
    MOV dword ptr [EAX + 0x154],0x603b74 ; 00510ddb
    RET                                 ; 00510de5

