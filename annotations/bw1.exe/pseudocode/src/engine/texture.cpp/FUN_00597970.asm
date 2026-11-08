; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00597970(void)
;
;
; XREF[1]:
;   thunk_FUN_00597970 at 00403790
;
; Referenced Globals:
;   TerminatedCString s_engine_texture_cpp_005f7c55
;   TerminatedCString s_initTexture_out_of_memor_005f7c6b
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c8a680
;
; Called Functions:
;   FUN_005030e0
;   FUN_00596560
;   FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1800c                        ; 00597970
        ;   Label: FUN_00597970
    CALL FUN_005c0f32                   ; 00597975
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f32()
    ADD ESP,0x4                         ; 0059797a
    TEST EAX,EAX                        ; 0059797d
    JNZ 0x0059798b                      ; 0059797f
        ;   XREF to: 0059798b (CONDITIONAL_JUMP)  ; LAB_0059798b
    MOV [0x02c8a680],EAX                ; 00597981 | DAT_02c8a680
    TEST EAX,EAX                        ; 00597986
    JZ 0x0059799e                       ; 00597988
        ;   XREF to: 0059799e (CONDITIONAL_JUMP)  ; LAB_0059799e
    RET                                 ; 0059798a
    PUSH EAX                            ; 0059798b
        ;   Label: LAB_0059798b
    CALL FUN_00596560                   ; 0059798c
        ;   XREF to: 00596560 (UNCONDITIONAL_CALL)  ; undefined FUN_00596560()
    ADD ESP,0x4                         ; 00597991
    MOV [0x02c8a680],EAX                ; 00597994 | DAT_02c8a680
    TEST EAX,EAX                        ; 00597999
    JZ 0x0059799e                       ; 0059799b
        ;   XREF to: 0059799e (CONDITIONAL_JUMP)  ; LAB_0059799e
    RET                                 ; 0059799d
    MOV EDX,0x5f7c55                    ; 0059799e | = "..\\engine\\texture.cpp"
        ;   Label: LAB_0059799e
    MOV ECX,0x3c2                       ; 005979a3
    PUSH 0x5f7c6b                       ; 005979a8 | = "initTexture - out of memory!"
    MOV dword ptr [0x01d1d400],EDX      ; 005979ad | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005979b3 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005979b9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005979be
    RET                                 ; 005979c1

