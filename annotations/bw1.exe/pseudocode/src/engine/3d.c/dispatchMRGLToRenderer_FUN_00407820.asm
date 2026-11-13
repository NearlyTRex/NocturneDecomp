; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407820(SMRGLHeaderExtended *mrgl)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl
;
; Referenced Globals:
;   undefined4 DAT_0061b4c0
;   undefined4 DAT_007c1070
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_3d.c_FUN_004076e0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_processVertexLighting_FUN_004039f0
;   engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
;   engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560
;   engine_3d.c_transformAndBufferVertices_FUN_00403840
;   engine_model.c_FUN_0051fee0
;   engine_special.cpp_drawPolyList_FUN_005823a0
;   engine_texture.cpp_FUN_00597a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407820
        ;   Label: engine_3d.c_dispatchMRGLToRenderer_FUN_00407820
    PUSH ESI                            ; 00407821
    PUSH EDI                            ; 00407822
    PUSH EBP                            ; 00407823
    SUB ESP,0x100                       ; 00407824
    MOV EDI,dword ptr [ESP + 0x114]     ; 0040782a
    XOR EDX,EDX                         ; 00407831
    MOV AH,byte ptr [EDI]               ; 00407833
    MOV dword ptr [0x007c1070],EDX      ; 00407835 | DAT_007c1070
    TEST AH,AH                          ; 0040783b
    JZ 0x00407880                       ; 0040783d
        ;   XREF to: 00407880 (CONDITIONAL_JUMP)  ; LAB_00407880
    MOV BL,byte ptr [EDI]               ; 0040783f
        ;   Label: LAB_0040783f
    CMP BL,0x14                         ; 00407841
    JNC 0x004079d4                      ; 00407844
        ;   XREF to: 004079d4 (CONDITIONAL_JUMP)  ; LAB_004079d4
    CMP BL,0x3                          ; 0040784a
    JNC 0x004079f3                      ; 0040784d
        ;   XREF to: 004079f3 (CONDITIONAL_JUMP)  ; LAB_004079f3
    CMP BL,0x2                          ; 00407853
    JNZ 0x00407a02                      ; 00407856
        ;   XREF to: 00407a02 (CONDITIONAL_JUMP)  ; LAB_00407a02
    PUSH EDI                            ; 0040785c
    CALL engine_3d.c_transformAndBufferVertices_FUN_00403840 ; 0040785d
        ;   XREF to: 00403840 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_transformAndBufferVertices_FUN_00403840(SMRGLHeaderExtended * mrgl)
    MOV ESI,dword ptr [0x0061b4c0]      ; 00407862 | DAT_0061b4c0
    ADD ESP,0x4                         ; 00407868
    TEST ESI,ESI                        ; 0040786b
    JNZ 0x004078cd                      ; 0040786d
        ;   XREF to: 004078cd (CONDITIONAL_JUMP)  ; LAB_004078cd
    PUSH EDI                            ; 0040786f
        ;   Label: LAB_0040786f
    CALL engine_model.c_FUN_0051fee0    ; 00407870
        ;   XREF to: 0051fee0 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_0051fee0(SMRGLHeaderExtended * header)
    ADD EDI,EAX                         ; 00407875
    MOV DL,byte ptr [EDI]               ; 00407877
    ADD ESP,0x4                         ; 00407879
    TEST DL,DL                          ; 0040787c
    JNZ 0x0040783f                      ; 0040787e
        ;   XREF to: 0040783f (CONDITIONAL_JUMP)  ; LAB_0040783f
    MOV ECX,dword ptr [0x007c1070]      ; 00407880 | DAT_007c1070
        ;   Label: LAB_00407880
    TEST ECX,ECX                        ; 00407886
    JZ 0x004078b8                       ; 00407888
        ;   XREF to: 004078b8 (CONDITIONAL_JUMP)  ; LAB_004078b8
    MOV EBX,dword ptr [0x01c50948]      ; 0040788a | DAT_01c50948
    TEST EBX,EBX                        ; 00407890
    JZ 0x00407a3f                       ; 00407892
        ;   XREF to: 00407a3f (CONDITIONAL_JUMP)  ; LAB_00407a3f
    PUSH 0xcd                           ; 00407898
    PUSH ECX                            ; 0040789d
    PUSH 0x7c1074                       ; 0040789e
    PUSH 0x629014                       ; 004078a3
    CALL engine_special.cpp_drawPolyList_FUN_005823a0 ; 004078a8
        ;   XREF to: 005823a0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList_FUN_005823a0(SRenderVertex * vertex_buffer, SMRGLPrimitiveQuad * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 004078ad
    XOR EDX,EDX                         ; 004078b0
        ;   Label: LAB_004078b0
    MOV dword ptr [0x007c1070],EDX      ; 004078b2 | DAT_007c1070
    MOV dword ptr [0x0061b4c0],0x1      ; 004078b8 | DAT_0061b4c0
        ;   Label: LAB_004078b8
    ADD ESP,0x100                       ; 004078c2
    POP EBP                             ; 004078c8
    POP EDI                             ; 004078c9
    POP ESI                             ; 004078ca
    POP EBX                             ; 004078cb
    RET                                 ; 004078cc
    PUSH EDI                            ; 004078cd
        ;   Label: LAB_004078cd
    CALL engine_3d.c_FUN_004076e0       ; 004078ce
        ;   XREF to: 004076e0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_004076e0()
    ADD ESP,0x4                         ; 004078d3
    ADD ESP,0x100                       ; 004078d6
    POP EBP                             ; 004078dc
    POP EDI                             ; 004078dd
    POP ESI                             ; 004078de
    POP EBX                             ; 004078df
    RET                                 ; 004078e0
    PUSH EDI                            ; 004078e1
        ;   Label: LAB_004078e1
    CALL engine_3d.c_processVertexLighting_FUN_004039f0 ; 004078e2
        ;   XREF to: 004039f0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processVertexLighting_FUN_004039f0(SMRGLHeaderExtended * mrgl)
    ADD ESP,0x4                         ; 004078e7
    JMP 0x0040786f                      ; 004078ea
        ;   XREF to: 0040786f (UNCONDITIONAL_JUMP)  ; LAB_0040786f
    MOV EBX,dword ptr [0x007c1070]      ; 004078ec | DAT_007c1070
        ;   Label: LAB_004078ec
    TEST EBX,EBX                        ; 004078f2
    JZ 0x00407921                       ; 004078f4
        ;   XREF to: 00407921 (CONDITIONAL_JUMP)  ; LAB_00407921
    JZ 0x00407921                       ; 004078f6
        ;   XREF to: 00407921 (CONDITIONAL_JUMP)  ; LAB_00407921
    CMP dword ptr [0x01c50948],0x0      ; 004078f8 | DAT_01c50948
    JZ 0x0040792f                       ; 004078ff
        ;   XREF to: 0040792f (CONDITIONAL_JUMP)  ; LAB_0040792f
    PUSH 0xcd                           ; 00407901
    PUSH EBX                            ; 00407906
    PUSH 0x7c1074                       ; 00407907
    PUSH 0x629014                       ; 0040790c
    CALL engine_special.cpp_drawPolyList_FUN_005823a0 ; 00407911
        ;   XREF to: 005823a0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList_FUN_005823a0(SRenderVertex * vertex_buffer, SMRGLPrimitiveQuad * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 00407916
    XOR EDX,EDX                         ; 00407919
        ;   Label: LAB_00407919
    MOV dword ptr [0x007c1070],EDX      ; 0040791b | DAT_007c1070
    PUSH EDI                            ; 00407921
        ;   Label: LAB_00407921
    CALL engine_texture.cpp_FUN_00597a20 ; 00407922
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    ADD ESP,0x4                         ; 00407927
    JMP 0x0040786f                      ; 0040792a
        ;   XREF to: 0040786f (UNCONDITIONAL_JUMP)  ; LAB_0040786f
    MOV EAX,[0x007c1070]                ; 0040792f | DAT_007c1070
        ;   Label: LAB_0040792f
    XOR EBX,EBX                         ; 00407934
    TEST EAX,EAX                        ; 00407936
    JLE 0x00407919                      ; 00407938
        ;   XREF to: 00407919 (CONDITIONAL_JUMP)  ; LAB_00407919
    XOR ESI,ESI                         ; 0040793a
    MOV EBP,dword ptr [ESI + 0x7c1074]  ; 0040793c
        ;   Label: LAB_0040793c
    PUSH EBP                            ; 00407942
    ADD ESI,0x4                         ; 00407943
    INC EBX                             ; 00407946
    CALL engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0 ; 00407947
        ;   XREF to: 004059a0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(SMRGLHeaderPrimitive * prim)
    MOV EAX,[0x007c1070]                ; 0040794c | DAT_007c1070
    ADD ESP,0x4                         ; 00407951
    CMP EBX,EAX                         ; 00407954
    JL 0x0040793c                       ; 00407956
        ;   XREF to: 0040793c (CONDITIONAL_JUMP)  ; LAB_0040793c
    JMP 0x00407919                      ; 00407958
        ;   XREF to: 00407919 (UNCONDITIONAL_JUMP)  ; LAB_00407919
    MOV EBX,EDI                         ; 0040795a
        ;   Label: LAB_0040795a
    LEA EAX,[EDI + 0x8]                 ; 0040795c
    PUSH EAX                            ; 0040795f
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00407960
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407965
    TEST EAX,EAX                        ; 00407968
    JZ 0x0040786f                       ; 0040796a
        ;   XREF to: 0040786f (CONDITIONAL_JUMP)  ; LAB_0040786f
    CMP dword ptr [0x007c1070],0x7d0    ; 00407970 | DAT_007c1070
    JL 0x0040799e                       ; 0040797a
        ;   XREF to: 0040799e (CONDITIONAL_JUMP)  ; LAB_0040799e
    MOV EAX,0x5d2334                    ; 0040797c
    MOV EDX,0xccc                       ; 00407981
    PUSH 0x5d2343                       ; 00407986
    MOV [0x01d1d400],EAX                ; 0040798b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00407990 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00407996
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0040799b
    MOV EAX,[0x007c1070]                ; 0040799e | DAT_007c1070
        ;   Label: LAB_0040799e
    LEA ECX,[EAX + 0x1]                 ; 004079a3
    MOV dword ptr [EAX*0x4 + 0x7c1074],EBX ; 004079a6
    MOV dword ptr [0x007c1070],ECX      ; 004079ad | DAT_007c1070
    JMP 0x0040786f                      ; 004079b3
        ;   XREF to: 0040786f (UNCONDITIONAL_JUMP)  ; LAB_0040786f
    PUSH EDI                            ; 004079b8
        ;   Label: LAB_004079b8
    CALL engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560 ; 004079b9
        ;   XREF to: 00404560 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560(SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x4                         ; 004079be
    JMP 0x0040786f                      ; 004079c1
        ;   XREF to: 0040786f (UNCONDITIONAL_JUMP)  ; LAB_0040786f
    PUSH EDI                            ; 004079c6
        ;   Label: LAB_004079c6
    CALL engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0 ; 004079c7
        ;   XREF to: 004070e0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 004079cc
    JMP 0x0040786f                      ; 004079cf
        ;   XREF to: 0040786f (UNCONDITIONAL_JUMP)  ; LAB_0040786f
    JBE 0x0040786f                      ; 004079d4
        ;   XREF to: 0040786f (CONDITIONAL_JUMP)  ; LAB_0040786f
        ;   Label: LAB_004079d4
    CMP BL,0x29                         ; 004079da
    JNC 0x004079e6                      ; 004079dd
        ;   XREF to: 004079e6 (CONDITIONAL_JUMP)  ; LAB_004079e6
    CMP BL,0x18                         ; 004079df
    JZ 0x004079b8                       ; 004079e2
        ;   XREF to: 004079b8 (CONDITIONAL_JUMP)  ; LAB_004079b8
    JMP 0x00407a02                      ; 004079e4
        ;   XREF to: 00407a02 (UNCONDITIONAL_JUMP)  ; LAB_00407a02
    JBE 0x0040795a                      ; 004079e6
        ;   XREF to: 0040795a (CONDITIONAL_JUMP)  ; LAB_0040795a
        ;   Label: LAB_004079e6
    CMP BL,0x41                         ; 004079ec
    JZ 0x004079c6                       ; 004079ef
        ;   XREF to: 004079c6 (CONDITIONAL_JUMP)  ; LAB_004079c6
    JMP 0x00407a02                      ; 004079f1
        ;   XREF to: 00407a02 (UNCONDITIONAL_JUMP)  ; LAB_00407a02
    JBE 0x004078e1                      ; 004079f3
        ;   XREF to: 004078e1 (CONDITIONAL_JUMP)  ; LAB_004078e1
        ;   Label: LAB_004079f3
    CMP BL,0xd                          ; 004079f9
    JZ 0x004078ec                       ; 004079fc
        ;   XREF to: 004078ec (CONDITIONAL_JUMP)  ; LAB_004078ec
    XOR EAX,EAX                         ; 00407a02
        ;   Label: LAB_00407a02
    MOV AL,byte ptr [EDI]               ; 00407a04
    PUSH EAX                            ; 00407a06
    PUSH 0x5d2363                       ; 00407a07
    LEA EAX,[ESP + 0x8]                 ; 00407a0c
    PUSH EAX                            ; 00407a10
    MOV EBX,0xd16                       ; 00407a11
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00407a16
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00407a1b
    MOV EAX,ESP                         ; 00407a1e
    MOV ECX,0x5d237a                    ; 00407a20
    PUSH EAX                            ; 00407a25
    MOV dword ptr [0x01d1d404],EBX      ; 00407a26 | DAT_01d1d404
    MOV dword ptr [0x01d1d400],ECX      ; 00407a2c | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 00407a32
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00407a37
    JMP 0x0040786f                      ; 00407a3a
        ;   XREF to: 0040786f (UNCONDITIONAL_JUMP)  ; LAB_0040786f
    XOR EDI,EDI                         ; 00407a3f
        ;   Label: LAB_00407a3f
    TEST ECX,ECX                        ; 00407a41
    JLE 0x004078b0                      ; 00407a43
        ;   XREF to: 004078b0 (CONDITIONAL_JUMP)  ; LAB_004078b0
    MOV EBP,dword ptr [EBX + 0x7c1074]  ; 00407a49
        ;   Label: LAB_00407a49
    PUSH EBP                            ; 00407a4f
    ADD EBX,0x4                         ; 00407a50
    INC EDI                             ; 00407a53
    CALL engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0 ; 00407a54
        ;   XREF to: 004059a0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(SMRGLHeaderPrimitive * prim)
    MOV EAX,[0x007c1070]                ; 00407a59 | DAT_007c1070
    ADD ESP,0x4                         ; 00407a5e
    CMP EDI,EAX                         ; 00407a61
    JL 0x00407a49                       ; 00407a63
        ;   XREF to: 00407a49 (CONDITIONAL_JUMP)  ; LAB_00407a49
    JMP 0x004078b0                      ; 00407a65
        ;   XREF to: 004078b0 (UNCONDITIONAL_JUMP)  ; LAB_004078b0

