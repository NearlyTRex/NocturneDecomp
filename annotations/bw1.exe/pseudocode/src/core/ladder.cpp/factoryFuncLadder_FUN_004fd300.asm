; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ladder_cpp_factoryFuncLadder_FUN_004fd300(void)
;
;
; Called Functions:
;   core_ladder.cpp_CLadder_ctor_FUN_004fd330
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x300                          ; 004fd300
        ;   Label: core_ladder.cpp_factoryFuncLadder_FUN_004fd300
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004fd305
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004fd30a
    TEST EAX,EAX                        ; 004fd30d
    JNZ 0x004fd312                      ; 004fd30f
        ;   XREF to: 004fd312 (CONDITIONAL_JUMP)  ; LAB_004fd312
    RET                                 ; 004fd311
    PUSH EAX                            ; 004fd312
        ;   Label: LAB_004fd312
    CALL core_ladder.cpp_CLadder_ctor_FUN_004fd330 ; 004fd313
        ;   XREF to: 004fd330 (UNCONDITIONAL_CALL)  ; CLadder * core_ladder.cpp_CLadder_ctor_FUN_004fd330(CLadder * this_ptr)
    ADD ESP,0x4                         ; 004fd318
    RET                                 ; 004fd31b

