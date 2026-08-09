; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStranger * __cdecl core_stranger_cpp_factoryFuncStranger_FUN_00535090(void)
;
;
; Called Functions:
;   core_stranger.cpp_CStranger_ctor_FUN_005350c0
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1fcd8                        ; 00535090
        ;   Label: core_stranger.cpp_factoryFuncStranger_FUN_00535090
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00535095
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 0053509a
    TEST EAX,EAX                        ; 0053509d
    JNZ 0x005350a2                      ; 0053509f
        ;   XREF to: 005350a2 (CONDITIONAL_JUMP)  ; LAB_005350a2
    RET                                 ; 005350a1
    PUSH EAX                            ; 005350a2
        ;   Label: LAB_005350a2
    CALL core_stranger.cpp_CStranger_ctor_FUN_005350c0 ; 005350a3
        ;   XREF to: 005350c0 (UNCONDITIONAL_CALL)  ; CStranger * core_stranger.cpp_CStranger_ctor_FUN_005350c0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005350a8
    RET                                 ; 005350ab

