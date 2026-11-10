; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407860(SMRGLHeaderExtended *mrgl)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl
;
; Referenced Globals:
;   undefined4 DAT_005fba40
;   undefined4 DAT_007dd9f0
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_3d.c_FUN_00407720
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_processVertexLighting_FUN_004039f0
;   engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
;   engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00407100
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560
;   engine_3d.c_transformAndBufferVertices_FUN_00403840
;   engine_model.c_FUN_004f8730
;   engine_special.cpp_drawPolyList_FUN_00565c70
;   engine_texture.cpp_FUN_0056aa10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407860
        ;   Label: engine_3d.c_dispatchMRGLToRenderer_FUN_00407860
    PUSH ESI                            ; 00407861
    PUSH EDI                            ; 00407862
    PUSH EBP                            ; 00407863
    SUB ESP,0x100                       ; 00407864
    MOV EDI,dword ptr [ESP + 0x114]     ; 0040786a
    XOR EDX,EDX                         ; 00407871
    MOV AH,byte ptr [EDI]               ; 00407873
    MOV dword ptr [0x007dd9f0],EDX      ; 00407875 | DAT_007dd9f0
    TEST AH,AH                          ; 0040787b
    JZ 0x004078c0                       ; 0040787d
        ;   XREF to: 004078c0 (CONDITIONAL_JUMP)  ; LAB_004078c0
    MOV BL,byte ptr [EDI]               ; 0040787f
        ;   Label: LAB_0040787f
    CMP BL,0x14                         ; 00407881
    JNC 0x00407a14                      ; 00407884
        ;   XREF to: 00407a14 (CONDITIONAL_JUMP)  ; LAB_00407a14
    CMP BL,0x3                          ; 0040788a
    JNC 0x00407a33                      ; 0040788d
        ;   XREF to: 00407a33 (CONDITIONAL_JUMP)  ; LAB_00407a33
    CMP BL,0x2                          ; 00407893
    JNZ 0x00407a42                      ; 00407896
        ;   XREF to: 00407a42 (CONDITIONAL_JUMP)  ; LAB_00407a42
    PUSH EDI                            ; 0040789c
    CALL engine_3d.c_transformAndBufferVertices_FUN_00403840 ; 0040789d
        ;   XREF to: 00403840 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_transformAndBufferVertices_FUN_00403840()
    MOV ESI,dword ptr [0x005fba40]      ; 004078a2 | DAT_005fba40
    ADD ESP,0x4                         ; 004078a8
    TEST ESI,ESI                        ; 004078ab
    JNZ 0x0040790d                      ; 004078ad
        ;   XREF to: 0040790d (CONDITIONAL_JUMP)  ; LAB_0040790d
    PUSH EDI                            ; 004078af
        ;   Label: LAB_004078af
    CALL engine_model.c_FUN_004f8730    ; 004078b0
        ;   XREF to: 004f8730 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_004f8730(SMRGLHeaderExtended * header)
    ADD EDI,EAX                         ; 004078b5
    MOV DL,byte ptr [EDI]               ; 004078b7
    ADD ESP,0x4                         ; 004078b9
    TEST DL,DL                          ; 004078bc
    JNZ 0x0040787f                      ; 004078be
        ;   XREF to: 0040787f (CONDITIONAL_JUMP)  ; LAB_0040787f
    MOV ECX,dword ptr [0x007dd9f0]      ; 004078c0 | DAT_007dd9f0
        ;   Label: LAB_004078c0
    TEST ECX,ECX                        ; 004078c6
    JZ 0x004078f8                       ; 004078c8
        ;   XREF to: 004078f8 (CONDITIONAL_JUMP)  ; LAB_004078f8
    MOV EBX,dword ptr [0x01c6cee8]      ; 004078ca | DAT_01c6cee8
    TEST EBX,EBX                        ; 004078d0
    JZ 0x00407a7f                       ; 004078d2
        ;   XREF to: 00407a7f (CONDITIONAL_JUMP)  ; LAB_00407a7f
    PUSH 0xcd                           ; 004078d8
    PUSH ECX                            ; 004078dd
    PUSH 0x7dd9f4                       ; 004078de
    PUSH 0x60b014                       ; 004078e3
    CALL engine_special.cpp_drawPolyList_FUN_00565c70 ; 004078e8
        ;   XREF to: 00565c70 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolyList_FUN_00565c70()
    ADD ESP,0x10                        ; 004078ed
    XOR EDX,EDX                         ; 004078f0
        ;   Label: LAB_004078f0
    MOV dword ptr [0x007dd9f0],EDX      ; 004078f2 | DAT_007dd9f0
    MOV dword ptr [0x005fba40],0x1      ; 004078f8 | DAT_005fba40
        ;   Label: LAB_004078f8
    ADD ESP,0x100                       ; 00407902
    POP EBP                             ; 00407908
    POP EDI                             ; 00407909
    POP ESI                             ; 0040790a
    POP EBX                             ; 0040790b
    RET                                 ; 0040790c
    PUSH EDI                            ; 0040790d
        ;   Label: LAB_0040790d
    CALL engine_3d.c_FUN_00407720       ; 0040790e
        ;   XREF to: 00407720 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_00407720()
    ADD ESP,0x4                         ; 00407913
    ADD ESP,0x100                       ; 00407916
    POP EBP                             ; 0040791c
    POP EDI                             ; 0040791d
    POP ESI                             ; 0040791e
    POP EBX                             ; 0040791f
    RET                                 ; 00407920
    PUSH EDI                            ; 00407921
        ;   Label: LAB_00407921
    CALL engine_3d.c_processVertexLighting_FUN_004039f0 ; 00407922
        ;   XREF to: 004039f0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_processVertexLighting_FUN_004039f0()
    ADD ESP,0x4                         ; 00407927
    JMP 0x004078af                      ; 0040792a
        ;   XREF to: 004078af (UNCONDITIONAL_JUMP)  ; LAB_004078af
    MOV EBX,dword ptr [0x007dd9f0]      ; 0040792c | DAT_007dd9f0
        ;   Label: LAB_0040792c
    TEST EBX,EBX                        ; 00407932
    JZ 0x00407961                       ; 00407934
        ;   XREF to: 00407961 (CONDITIONAL_JUMP)  ; LAB_00407961
    JZ 0x00407961                       ; 00407936
        ;   XREF to: 00407961 (CONDITIONAL_JUMP)  ; LAB_00407961
    CMP dword ptr [0x01c6cee8],0x0      ; 00407938 | DAT_01c6cee8
    JZ 0x0040796f                       ; 0040793f
        ;   XREF to: 0040796f (CONDITIONAL_JUMP)  ; LAB_0040796f
    PUSH 0xcd                           ; 00407941
    PUSH EBX                            ; 00407946
    PUSH 0x7dd9f4                       ; 00407947
    PUSH 0x60b014                       ; 0040794c
    CALL engine_special.cpp_drawPolyList_FUN_00565c70 ; 00407951
        ;   XREF to: 00565c70 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolyList_FUN_00565c70()
    ADD ESP,0x10                        ; 00407956
    XOR EDX,EDX                         ; 00407959
        ;   Label: LAB_00407959
    MOV dword ptr [0x007dd9f0],EDX      ; 0040795b | DAT_007dd9f0
    PUSH EDI                            ; 00407961
        ;   Label: LAB_00407961
    CALL engine_texture.cpp_FUN_0056aa10 ; 00407962
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 00407967
    JMP 0x004078af                      ; 0040796a
        ;   XREF to: 004078af (UNCONDITIONAL_JUMP)  ; LAB_004078af
    MOV EAX,[0x007dd9f0]                ; 0040796f | DAT_007dd9f0
        ;   Label: LAB_0040796f
    XOR EBX,EBX                         ; 00407974
    TEST EAX,EAX                        ; 00407976
    JLE 0x00407959                      ; 00407978
        ;   XREF to: 00407959 (CONDITIONAL_JUMP)  ; LAB_00407959
    XOR ESI,ESI                         ; 0040797a
    MOV EBP,dword ptr [ESI + 0x7dd9f4]  ; 0040797c
        ;   Label: LAB_0040797c
    PUSH EBP                            ; 00407982
    ADD ESI,0x4                         ; 00407983
    INC EBX                             ; 00407986
    CALL engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0 ; 00407987
        ;   XREF to: 004059a0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0()
    MOV EAX,[0x007dd9f0]                ; 0040798c | DAT_007dd9f0
    ADD ESP,0x4                         ; 00407991
    CMP EBX,EAX                         ; 00407994
    JL 0x0040797c                       ; 00407996
        ;   XREF to: 0040797c (CONDITIONAL_JUMP)  ; LAB_0040797c
    JMP 0x00407959                      ; 00407998
        ;   XREF to: 00407959 (UNCONDITIONAL_JUMP)  ; LAB_00407959
    MOV EBX,EDI                         ; 0040799a
        ;   Label: LAB_0040799a
    LEA EAX,[EDI + 0x8]                 ; 0040799c
    PUSH EAX                            ; 0040799f
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004079a0
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004079a5
    TEST EAX,EAX                        ; 004079a8
    JZ 0x004078af                       ; 004079aa
        ;   XREF to: 004078af (CONDITIONAL_JUMP)  ; LAB_004078af
    CMP dword ptr [0x007dd9f0],0x7d0    ; 004079b0 | DAT_007dd9f0
    JL 0x004079de                       ; 004079ba
        ;   XREF to: 004079de (CONDITIONAL_JUMP)  ; LAB_004079de
    MOV EAX,0x5b536c                    ; 004079bc
    MOV EDX,0xccc                       ; 004079c1
    PUSH 0x5b537b                       ; 004079c6
    MOV [0x01d71de0],EAX                ; 004079cb | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004079d0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004079d6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004079db
    MOV EAX,[0x007dd9f0]                ; 004079de | DAT_007dd9f0
        ;   Label: LAB_004079de
    LEA ECX,[EAX + 0x1]                 ; 004079e3
    MOV dword ptr [EAX*0x4 + 0x7dd9f4],EBX ; 004079e6
    MOV dword ptr [0x007dd9f0],ECX      ; 004079ed | DAT_007dd9f0
    JMP 0x004078af                      ; 004079f3
        ;   XREF to: 004078af (UNCONDITIONAL_JUMP)  ; LAB_004078af
    PUSH EDI                            ; 004079f8
        ;   Label: LAB_004079f8
    CALL engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560 ; 004079f9
        ;   XREF to: 00404560 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560()
    ADD ESP,0x4                         ; 004079fe
    JMP 0x004078af                      ; 00407a01
        ;   XREF to: 004078af (UNCONDITIONAL_JUMP)  ; LAB_004078af
    PUSH EDI                            ; 00407a06
        ;   Label: LAB_00407a06
    CALL engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00407100 ; 00407a07
        ;   XREF to: 00407100 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00407100()
    ADD ESP,0x4                         ; 00407a0c
    JMP 0x004078af                      ; 00407a0f
        ;   XREF to: 004078af (UNCONDITIONAL_JUMP)  ; LAB_004078af
    JBE 0x004078af                      ; 00407a14
        ;   XREF to: 004078af (CONDITIONAL_JUMP)  ; LAB_004078af
        ;   Label: LAB_00407a14
    CMP BL,0x29                         ; 00407a1a
    JNC 0x00407a26                      ; 00407a1d
        ;   XREF to: 00407a26 (CONDITIONAL_JUMP)  ; LAB_00407a26
    CMP BL,0x18                         ; 00407a1f
    JZ 0x004079f8                       ; 00407a22
        ;   XREF to: 004079f8 (CONDITIONAL_JUMP)  ; LAB_004079f8
    JMP 0x00407a42                      ; 00407a24
        ;   XREF to: 00407a42 (UNCONDITIONAL_JUMP)  ; LAB_00407a42
    JBE 0x0040799a                      ; 00407a26
        ;   XREF to: 0040799a (CONDITIONAL_JUMP)  ; LAB_0040799a
        ;   Label: LAB_00407a26
    CMP BL,0x41                         ; 00407a2c
    JZ 0x00407a06                       ; 00407a2f
        ;   XREF to: 00407a06 (CONDITIONAL_JUMP)  ; LAB_00407a06
    JMP 0x00407a42                      ; 00407a31
        ;   XREF to: 00407a42 (UNCONDITIONAL_JUMP)  ; LAB_00407a42
    JBE 0x00407921                      ; 00407a33
        ;   XREF to: 00407921 (CONDITIONAL_JUMP)  ; LAB_00407921
        ;   Label: LAB_00407a33
    CMP BL,0xd                          ; 00407a39
    JZ 0x0040792c                       ; 00407a3c
        ;   XREF to: 0040792c (CONDITIONAL_JUMP)  ; LAB_0040792c
    XOR EAX,EAX                         ; 00407a42
        ;   Label: LAB_00407a42
    MOV AL,byte ptr [EDI]               ; 00407a44
    PUSH EAX                            ; 00407a46
    PUSH 0x5b539b                       ; 00407a47
    LEA EAX,[ESP + 0x8]                 ; 00407a4c
    PUSH EAX                            ; 00407a50
    MOV EBX,0xd16                       ; 00407a51
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00407a56
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00407a5b
    MOV EAX,ESP                         ; 00407a5e
    MOV ECX,0x5b53b2                    ; 00407a60
    PUSH EAX                            ; 00407a65
    MOV dword ptr [0x01d71de4],EBX      ; 00407a66 | DAT_01d71de4
    MOV dword ptr [0x01d71de0],ECX      ; 00407a6c | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00407a72
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00407a77
    JMP 0x004078af                      ; 00407a7a
        ;   XREF to: 004078af (UNCONDITIONAL_JUMP)  ; LAB_004078af
    XOR EDI,EDI                         ; 00407a7f
        ;   Label: LAB_00407a7f
    TEST ECX,ECX                        ; 00407a81
    JLE 0x004078f0                      ; 00407a83
        ;   XREF to: 004078f0 (CONDITIONAL_JUMP)  ; LAB_004078f0
    MOV EBP,dword ptr [EBX + 0x7dd9f4]  ; 00407a89
        ;   Label: LAB_00407a89
    PUSH EBP                            ; 00407a8f
    ADD EBX,0x4                         ; 00407a90
    INC EDI                             ; 00407a93
    CALL engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0 ; 00407a94
        ;   XREF to: 004059a0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0()
    MOV EAX,[0x007dd9f0]                ; 00407a99 | DAT_007dd9f0
    ADD ESP,0x4                         ; 00407a9e
    CMP EDI,EAX                         ; 00407aa1
    JL 0x00407a89                       ; 00407aa3
        ;   XREF to: 00407a89 (CONDITIONAL_JUMP)  ; LAB_00407a89
    JMP 0x004078f0                      ; 00407aa5
        ;   XREF to: 004078f0 (UNCONDITIONAL_JUMP)  ; LAB_004078f0

