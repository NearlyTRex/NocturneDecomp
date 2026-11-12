; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSentinel * __cdecl core_sentinel_cpp_factoryFuncSentinel_FUN_0054b9e0(void)
;
;
; Called Functions:
;   core_sentinel.cpp_CSentinel_ctor_FUN_0054ba10
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc270                         ; 0054b9e0
        ;   Label: core_sentinel.cpp_factoryFuncSentinel_FUN_0054b9e0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0054b9e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0054b9ea
    TEST EAX,EAX                        ; 0054b9ed
    JNZ 0x0054b9f2                      ; 0054b9ef
        ;   XREF to: 0054b9f2 (CONDITIONAL_JUMP)  ; LAB_0054b9f2
    RET                                 ; 0054b9f1
    PUSH EAX                            ; 0054b9f2
        ;   Label: LAB_0054b9f2
    CALL core_sentinel.cpp_CSentinel_ctor_FUN_0054ba10 ; 0054b9f3
        ;   XREF to: 0054ba10 (UNCONDITIONAL_CALL)  ; CSentinel * core_sentinel.cpp_CSentinel_ctor_FUN_0054ba10(CSentinel * this_ptr)
    ADD ESP,0x4                         ; 0054b9f8
    RET                                 ; 0054b9fb

