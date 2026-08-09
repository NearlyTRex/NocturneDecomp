; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMansionPuzzleCircle * __cdecl core_manpuz_cpp_factoryFuncMansionPuzzleCircle_FUN_004c9400(void)
;
;
; Called Functions:
;   core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004c9430
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x150c                         ; 004c9400
        ;   Label: core_manpuz.cpp_factoryFuncMansionPuzzleCircle_FUN_004c9400
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004c9405
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004c940a
    TEST EAX,EAX                        ; 004c940d
    JNZ 0x004c9412                      ; 004c940f
        ;   XREF to: 004c9412 (CONDITIONAL_JUMP)  ; LAB_004c9412
    RET                                 ; 004c9411
    PUSH EAX                            ; 004c9412
        ;   Label: LAB_004c9412
    CALL core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004c9430 ; 004c9413
        ;   XREF to: 004c9430 (UNCONDITIONAL_CALL)  ; CMansionPuzzleCircle * core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004c9430(CMansionPuzzleCircle * this_ptr)
    ADD ESP,0x4                         ; 004c9418
    RET                                 ; 004c941b

