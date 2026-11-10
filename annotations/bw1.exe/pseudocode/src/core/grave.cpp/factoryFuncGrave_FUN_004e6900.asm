; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_grave_cpp_factoryFuncGrave_FUN_004e6900(void)
;
;
; Called Functions:
;   core_grave.cpp_CGrave_ctor_FUN_004e6930
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x3b0                          ; 004e6900
        ;   Label: core_grave.cpp_factoryFuncGrave_FUN_004e6900
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004e6905
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004e690a
    TEST EAX,EAX                        ; 004e690d
    JNZ 0x004e6912                      ; 004e690f
        ;   XREF to: 004e6912 (CONDITIONAL_JUMP)  ; LAB_004e6912
    RET                                 ; 004e6911
    PUSH EAX                            ; 004e6912
        ;   Label: LAB_004e6912
    CALL core_grave.cpp_CGrave_ctor_FUN_004e6930 ; 004e6913
        ;   XREF to: 004e6930 (UNCONDITIONAL_CALL)  ; CGrave * core_grave.cpp_CGrave_ctor_FUN_004e6930(CGrave * this_ptr)
    ADD ESP,0x4                         ; 004e6918
    RET                                 ; 004e691b

