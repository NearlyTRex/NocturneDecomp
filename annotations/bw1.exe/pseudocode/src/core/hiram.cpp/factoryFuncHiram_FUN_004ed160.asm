; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hiram_cpp_factoryFuncHiram_FUN_004ed160(void)
;
;
; Called Functions:
;   core_hiram.cpp_CHiram_ctor_FUN_004ed190
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1fb1c                        ; 004ed160
        ;   Label: core_hiram.cpp_factoryFuncHiram_FUN_004ed160
    CALL crt_unknown.c_FUN_005c0f32     ; 004ed165
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 004ed16a
    TEST EAX,EAX                        ; 004ed16d
    JNZ 0x004ed172                      ; 004ed16f
        ;   XREF to: 004ed172 (CONDITIONAL_JUMP)  ; LAB_004ed172
    RET                                 ; 004ed171
    PUSH EAX                            ; 004ed172
        ;   Label: LAB_004ed172
    CALL core_hiram.cpp_CHiram_ctor_FUN_004ed190 ; 004ed173
        ;   XREF to: 004ed190 (UNCONDITIONAL_CALL)  ; CHiram * core_hiram.cpp_CHiram_ctor_FUN_004ed190(CHiram * this_ptr)
    ADD ESP,0x4                         ; 004ed178
    RET                                 ; 004ed17b

