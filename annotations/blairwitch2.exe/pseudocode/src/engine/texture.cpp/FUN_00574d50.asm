; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00574d50(void)
;
;
; XREF[1]:
;   engine_3d.c_initTextureCache_FUN_004037e0 at 004037e0
;
; Referenced Globals:
;   TerminatedCString s_engine_texture_cpp_005ec9e1
;   TerminatedCString s_initTexture_out_of_memor_005ec9f7
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02652eb0
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_operator_new_FUN_005b8be2
;   unkafter_texlist.cpp_FUN_00573940
;
; *****************************************************************************

section .text

    PUSH 0x1800c                        ; 00574d50
        ;   Label: engine_texture.cpp_FUN_00574d50
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00574d55
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 00574d5a
    TEST EAX,EAX                        ; 00574d5d
    JNZ 0x00574d6b                      ; 00574d5f
        ;   XREF to: 00574d6b (CONDITIONAL_JUMP)  ; LAB_00574d6b
    MOV [0x02652eb0],EAX                ; 00574d61 | DAT_02652eb0
    TEST EAX,EAX                        ; 00574d66
    JZ 0x00574d7e                       ; 00574d68
        ;   XREF to: 00574d7e (CONDITIONAL_JUMP)  ; LAB_00574d7e
    RET                                 ; 00574d6a
    PUSH EAX                            ; 00574d6b
        ;   Label: LAB_00574d6b
    CALL unkafter_texlist.cpp_FUN_00573940 ; 00574d6c
        ;   XREF to: 00573940 (UNCONDITIONAL_CALL)  ; undefined unkafter_texlist.cpp_FUN_00573940()
    ADD ESP,0x4                         ; 00574d71
    MOV [0x02652eb0],EAX                ; 00574d74 | DAT_02652eb0
    TEST EAX,EAX                        ; 00574d79
    JZ 0x00574d7e                       ; 00574d7b
        ;   XREF to: 00574d7e (CONDITIONAL_JUMP)  ; LAB_00574d7e
    RET                                 ; 00574d7d
    MOV EDX,0x5ec9e1                    ; 00574d7e | = "..\\engine\\texture.cpp"
        ;   Label: LAB_00574d7e
    MOV ECX,0x3c2                       ; 00574d83
    PUSH 0x5ec9f7                       ; 00574d88 | = "initTexture - out of memory!"
    MOV dword ptr [0x01d046a0],EDX      ; 00574d8d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00574d93 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00574d99
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00574d9e
    RET                                 ; 00574da1

