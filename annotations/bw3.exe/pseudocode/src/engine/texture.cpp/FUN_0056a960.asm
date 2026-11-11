; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0056a960(void)
;
;
; XREF[1]:
;   engine_3d.c_initTextureCache_FUN_00403790 at 00403790
;
; Referenced Globals:
;   TerminatedCString s_engine_texture_cpp_005d61c4
;   TerminatedCString s_initTexture_out_of_memor_005d61da
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_FUN_005a3cb2
;   unkafter_texlist.cpp_FUN_00569550
;
; *****************************************************************************

section .text

    PUSH 0x1800c                        ; 0056a960
        ;   Label: engine_texture.cpp_FUN_0056a960
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0056a965
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0056a96a
    TEST EAX,EAX                        ; 0056a96d
    JNZ 0x0056a97b                      ; 0056a96f
        ;   XREF to: 0056a97b (CONDITIONAL_JUMP)  ; LAB_0056a97b
    MOV [0x02cfd0d0],EAX                ; 0056a971 | DAT_02cfd0d0
    TEST EAX,EAX                        ; 0056a976
    JZ 0x0056a98e                       ; 0056a978
        ;   XREF to: 0056a98e (CONDITIONAL_JUMP)  ; LAB_0056a98e
    RET                                 ; 0056a97a
    PUSH EAX                            ; 0056a97b
        ;   Label: LAB_0056a97b
    CALL unkafter_texlist.cpp_FUN_00569550 ; 0056a97c
        ;   XREF to: 00569550 (UNCONDITIONAL_CALL)  ; undefined unkafter_texlist.cpp_FUN_00569550()
    ADD ESP,0x4                         ; 0056a981
    MOV [0x02cfd0d0],EAX                ; 0056a984 | DAT_02cfd0d0
    TEST EAX,EAX                        ; 0056a989
    JZ 0x0056a98e                       ; 0056a98b
        ;   XREF to: 0056a98e (CONDITIONAL_JUMP)  ; LAB_0056a98e
    RET                                 ; 0056a98d
    MOV EDX,0x5d61c4                    ; 0056a98e | = "..\\engine\\texture.cpp"
        ;   Label: LAB_0056a98e
    MOV ECX,0x3c2                       ; 0056a993
    PUSH 0x5d61da                       ; 0056a998 | = "initTexture - out of memory!"
    MOV dword ptr [0x01d71de0],EDX      ; 0056a99d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0056a9a3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056a9a9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0056a9ae
    RET                                 ; 0056a9b1

