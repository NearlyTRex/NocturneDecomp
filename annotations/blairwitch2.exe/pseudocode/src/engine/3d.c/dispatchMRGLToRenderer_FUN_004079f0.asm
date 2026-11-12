; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_004079f0(SMRGLHeaderExtended *mrgl)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl
;
; Referenced Globals:
;   undefined4 DAT_006141e0
;   undefined4 DAT_007ba070
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_3d.c_dispatchMRGLBlockChain_FUN_004078b0
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_3d.c_processVertexLighting_FUN_00403a40
;   engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70
;   engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0
;   engine_3d.c_transformAndBufferVertices_FUN_00403890
;   engine_model.c_FUN_00500f30
;   engine_special.cpp_drawPolyList_FUN_0055f950
;   engine_texture.cpp_FUN_00574e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004079f0
        ;   Label: engine_3d.c_dispatchMRGLToRenderer_FUN_004079f0
    PUSH ESI                            ; 004079f1
    PUSH EDI                            ; 004079f2
    PUSH EBP                            ; 004079f3
    SUB ESP,0x100                       ; 004079f4
    MOV EDI,dword ptr [ESP + 0x114]     ; 004079fa
    XOR EDX,EDX                         ; 00407a01
    MOV AH,byte ptr [EDI]               ; 00407a03
    MOV dword ptr [0x007ba070],EDX      ; 00407a05 | DAT_007ba070
    TEST AH,AH                          ; 00407a0b
    JZ 0x00407a50                       ; 00407a0d
        ;   XREF to: 00407a50 (CONDITIONAL_JUMP)  ; LAB_00407a50
    MOV BL,byte ptr [EDI]               ; 00407a0f
        ;   Label: LAB_00407a0f
    CMP BL,0x14                         ; 00407a11
    JNC 0x00407ba4                      ; 00407a14
        ;   XREF to: 00407ba4 (CONDITIONAL_JUMP)  ; LAB_00407ba4
    CMP BL,0x3                          ; 00407a1a
    JNC 0x00407bc3                      ; 00407a1d
        ;   XREF to: 00407bc3 (CONDITIONAL_JUMP)  ; LAB_00407bc3
    CMP BL,0x2                          ; 00407a23
    JNZ 0x00407bd2                      ; 00407a26
        ;   XREF to: 00407bd2 (CONDITIONAL_JUMP)  ; LAB_00407bd2
    PUSH EDI                            ; 00407a2c
    CALL engine_3d.c_transformAndBufferVertices_FUN_00403890 ; 00407a2d
        ;   XREF to: 00403890 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_transformAndBufferVertices_FUN_00403890()
    MOV ESI,dword ptr [0x006141e0]      ; 00407a32 | DAT_006141e0
    ADD ESP,0x4                         ; 00407a38
    TEST ESI,ESI                        ; 00407a3b
    JNZ 0x00407a9d                      ; 00407a3d
        ;   XREF to: 00407a9d (CONDITIONAL_JUMP)  ; LAB_00407a9d
    PUSH EDI                            ; 00407a3f
        ;   Label: LAB_00407a3f
    CALL engine_model.c_FUN_00500f30    ; 00407a40
        ;   XREF to: 00500f30 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_00500f30(SMRGLHeaderExtended * header)
    ADD EDI,EAX                         ; 00407a45
    MOV DL,byte ptr [EDI]               ; 00407a47
    ADD ESP,0x4                         ; 00407a49
    TEST DL,DL                          ; 00407a4c
    JNZ 0x00407a0f                      ; 00407a4e
        ;   XREF to: 00407a0f (CONDITIONAL_JUMP)  ; LAB_00407a0f
    MOV ECX,dword ptr [0x007ba070]      ; 00407a50 | DAT_007ba070
        ;   Label: LAB_00407a50
    TEST ECX,ECX                        ; 00407a56
    JZ 0x00407a88                       ; 00407a58
        ;   XREF to: 00407a88 (CONDITIONAL_JUMP)  ; LAB_00407a88
    MOV EBX,dword ptr [0x01c37788]      ; 00407a5a | DAT_01c37788
    TEST EBX,EBX                        ; 00407a60
    JZ 0x00407c0f                       ; 00407a62
        ;   XREF to: 00407c0f (CONDITIONAL_JUMP)  ; LAB_00407c0f
    PUSH 0xcd                           ; 00407a68
    PUSH ECX                            ; 00407a6d
    PUSH 0x7ba074                       ; 00407a6e
    PUSH 0x622014                       ; 00407a73
    CALL engine_special.cpp_drawPolyList_FUN_0055f950 ; 00407a78
        ;   XREF to: 0055f950 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList_FUN_0055f950(SRenderVertex * vertex_buffer, SMRGLPrimitiveQuad * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 00407a7d
    XOR EDX,EDX                         ; 00407a80
        ;   Label: LAB_00407a80
    MOV dword ptr [0x007ba070],EDX      ; 00407a82 | DAT_007ba070
    MOV dword ptr [0x006141e0],0x1      ; 00407a88 | DAT_006141e0
        ;   Label: LAB_00407a88
    ADD ESP,0x100                       ; 00407a92
    POP EBP                             ; 00407a98
    POP EDI                             ; 00407a99
    POP ESI                             ; 00407a9a
    POP EBX                             ; 00407a9b
    RET                                 ; 00407a9c
    PUSH EDI                            ; 00407a9d
        ;   Label: LAB_00407a9d
    CALL engine_3d.c_dispatchMRGLBlockChain_FUN_004078b0 ; 00407a9e
        ;   XREF to: 004078b0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_dispatchMRGLBlockChain_FUN_004078b0()
    ADD ESP,0x4                         ; 00407aa3
    ADD ESP,0x100                       ; 00407aa6
    POP EBP                             ; 00407aac
    POP EDI                             ; 00407aad
    POP ESI                             ; 00407aae
    POP EBX                             ; 00407aaf
    RET                                 ; 00407ab0
    PUSH EDI                            ; 00407ab1
        ;   Label: LAB_00407ab1
    CALL engine_3d.c_processVertexLighting_FUN_00403a40 ; 00407ab2
        ;   XREF to: 00403a40 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processVertexLighting_FUN_00403a40(SMRGLHeaderExtended * mrgl)
    ADD ESP,0x4                         ; 00407ab7
    JMP 0x00407a3f                      ; 00407aba
        ;   XREF to: 00407a3f (UNCONDITIONAL_JUMP)  ; LAB_00407a3f
    MOV EBX,dword ptr [0x007ba070]      ; 00407abc | DAT_007ba070
        ;   Label: LAB_00407abc
    TEST EBX,EBX                        ; 00407ac2
    JZ 0x00407af1                       ; 00407ac4
        ;   XREF to: 00407af1 (CONDITIONAL_JUMP)  ; LAB_00407af1
    JZ 0x00407af1                       ; 00407ac6
        ;   XREF to: 00407af1 (CONDITIONAL_JUMP)  ; LAB_00407af1
    CMP dword ptr [0x01c37788],0x0      ; 00407ac8 | DAT_01c37788
    JZ 0x00407aff                       ; 00407acf
        ;   XREF to: 00407aff (CONDITIONAL_JUMP)  ; LAB_00407aff
    PUSH 0xcd                           ; 00407ad1
    PUSH EBX                            ; 00407ad6
    PUSH 0x7ba074                       ; 00407ad7
    PUSH 0x622014                       ; 00407adc
    CALL engine_special.cpp_drawPolyList_FUN_0055f950 ; 00407ae1
        ;   XREF to: 0055f950 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList_FUN_0055f950(SRenderVertex * vertex_buffer, SMRGLPrimitiveQuad * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 00407ae6
    XOR EDX,EDX                         ; 00407ae9
        ;   Label: LAB_00407ae9
    MOV dword ptr [0x007ba070],EDX      ; 00407aeb | DAT_007ba070
    PUSH EDI                            ; 00407af1
        ;   Label: LAB_00407af1
    CALL engine_texture.cpp_FUN_00574e00 ; 00407af2
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574e00()
    ADD ESP,0x4                         ; 00407af7
    JMP 0x00407a3f                      ; 00407afa
        ;   XREF to: 00407a3f (UNCONDITIONAL_JUMP)  ; LAB_00407a3f
    MOV EAX,[0x007ba070]                ; 00407aff | DAT_007ba070
        ;   Label: LAB_00407aff
    XOR EBX,EBX                         ; 00407b04
    TEST EAX,EAX                        ; 00407b06
    JLE 0x00407ae9                      ; 00407b08
        ;   XREF to: 00407ae9 (CONDITIONAL_JUMP)  ; LAB_00407ae9
    XOR ESI,ESI                         ; 00407b0a
    MOV EBP,dword ptr [ESI + 0x7ba074]  ; 00407b0c
        ;   Label: LAB_00407b0c
    PUSH EBP                            ; 00407b12
    ADD ESI,0x4                         ; 00407b13
    INC EBX                             ; 00407b16
    CALL engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70 ; 00407b17
        ;   XREF to: 00405b70 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70(SMRGLHeaderPrimitive * prim)
    MOV EAX,[0x007ba070]                ; 00407b1c | DAT_007ba070
    ADD ESP,0x4                         ; 00407b21
    CMP EBX,EAX                         ; 00407b24
    JL 0x00407b0c                       ; 00407b26
        ;   XREF to: 00407b0c (CONDITIONAL_JUMP)  ; LAB_00407b0c
    JMP 0x00407ae9                      ; 00407b28
        ;   XREF to: 00407ae9 (UNCONDITIONAL_JUMP)  ; LAB_00407ae9
    MOV EBX,EDI                         ; 00407b2a
        ;   Label: LAB_00407b2a
    LEA EAX,[EDI + 0x8]                 ; 00407b2c
    PUSH EAX                            ; 00407b2f
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00407b30
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407b35
    TEST EAX,EAX                        ; 00407b38
    JZ 0x00407a3f                       ; 00407b3a
        ;   XREF to: 00407a3f (CONDITIONAL_JUMP)  ; LAB_00407a3f
    CMP dword ptr [0x007ba070],0x7d0    ; 00407b40 | DAT_007ba070
    JL 0x00407b6e                       ; 00407b4a
        ;   XREF to: 00407b6e (CONDITIONAL_JUMP)  ; LAB_00407b6e
    MOV EAX,0x5ca3c9                    ; 00407b4c
    MOV EDX,0xcb5                       ; 00407b51
    PUSH 0x5ca3d8                       ; 00407b56
    MOV [0x01d046a0],EAX                ; 00407b5b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00407b60 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00407b66
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00407b6b
    MOV EAX,[0x007ba070]                ; 00407b6e | DAT_007ba070
        ;   Label: LAB_00407b6e
    LEA ECX,[EAX + 0x1]                 ; 00407b73
    MOV dword ptr [EAX*0x4 + 0x7ba074],EBX ; 00407b76
    MOV dword ptr [0x007ba070],ECX      ; 00407b7d | DAT_007ba070
    JMP 0x00407a3f                      ; 00407b83
        ;   XREF to: 00407a3f (UNCONDITIONAL_JUMP)  ; LAB_00407a3f
    PUSH EDI                            ; 00407b88
        ;   Label: LAB_00407b88
    CALL engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0 ; 00407b89
        ;   XREF to: 004046e0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0(SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x4                         ; 00407b8e
    JMP 0x00407a3f                      ; 00407b91
        ;   XREF to: 00407a3f (UNCONDITIONAL_JUMP)  ; LAB_00407a3f
    PUSH EDI                            ; 00407b96
        ;   Label: LAB_00407b96
    CALL engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0 ; 00407b97
        ;   XREF to: 004072b0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00407b9c
    JMP 0x00407a3f                      ; 00407b9f
        ;   XREF to: 00407a3f (UNCONDITIONAL_JUMP)  ; LAB_00407a3f
    JBE 0x00407a3f                      ; 00407ba4
        ;   XREF to: 00407a3f (CONDITIONAL_JUMP)  ; LAB_00407a3f
        ;   Label: LAB_00407ba4
    CMP BL,0x29                         ; 00407baa
    JNC 0x00407bb6                      ; 00407bad
        ;   XREF to: 00407bb6 (CONDITIONAL_JUMP)  ; LAB_00407bb6
    CMP BL,0x18                         ; 00407baf
    JZ 0x00407b88                       ; 00407bb2
        ;   XREF to: 00407b88 (CONDITIONAL_JUMP)  ; LAB_00407b88
    JMP 0x00407bd2                      ; 00407bb4
        ;   XREF to: 00407bd2 (UNCONDITIONAL_JUMP)  ; LAB_00407bd2
    JBE 0x00407b2a                      ; 00407bb6
        ;   XREF to: 00407b2a (CONDITIONAL_JUMP)  ; LAB_00407b2a
        ;   Label: LAB_00407bb6
    CMP BL,0x41                         ; 00407bbc
    JZ 0x00407b96                       ; 00407bbf
        ;   XREF to: 00407b96 (CONDITIONAL_JUMP)  ; LAB_00407b96
    JMP 0x00407bd2                      ; 00407bc1
        ;   XREF to: 00407bd2 (UNCONDITIONAL_JUMP)  ; LAB_00407bd2
    JBE 0x00407ab1                      ; 00407bc3
        ;   XREF to: 00407ab1 (CONDITIONAL_JUMP)  ; LAB_00407ab1
        ;   Label: LAB_00407bc3
    CMP BL,0xd                          ; 00407bc9
    JZ 0x00407abc                       ; 00407bcc
        ;   XREF to: 00407abc (CONDITIONAL_JUMP)  ; LAB_00407abc
    XOR EAX,EAX                         ; 00407bd2
        ;   Label: LAB_00407bd2
    MOV AL,byte ptr [EDI]               ; 00407bd4
    PUSH EAX                            ; 00407bd6
    PUSH 0x5ca3f8                       ; 00407bd7
    LEA EAX,[ESP + 0x8]                 ; 00407bdc
    PUSH EAX                            ; 00407be0
    MOV EBX,0xcff                       ; 00407be1
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00407be6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00407beb
    MOV EAX,ESP                         ; 00407bee
    MOV ECX,0x5ca40f                    ; 00407bf0
    PUSH EAX                            ; 00407bf5
    MOV dword ptr [0x01d046a4],EBX      ; 00407bf6 | DAT_01d046a4
    MOV dword ptr [0x01d046a0],ECX      ; 00407bfc | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 00407c02
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00407c07
    JMP 0x00407a3f                      ; 00407c0a
        ;   XREF to: 00407a3f (UNCONDITIONAL_JUMP)  ; LAB_00407a3f
    XOR EDI,EDI                         ; 00407c0f
        ;   Label: LAB_00407c0f
    TEST ECX,ECX                        ; 00407c11
    JLE 0x00407a80                      ; 00407c13
        ;   XREF to: 00407a80 (CONDITIONAL_JUMP)  ; LAB_00407a80
    MOV EBP,dword ptr [EBX + 0x7ba074]  ; 00407c19
        ;   Label: LAB_00407c19
    PUSH EBP                            ; 00407c1f
    ADD EBX,0x4                         ; 00407c20
    INC EDI                             ; 00407c23
    CALL engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70 ; 00407c24
        ;   XREF to: 00405b70 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70(SMRGLHeaderPrimitive * prim)
    MOV EAX,[0x007ba070]                ; 00407c29 | DAT_007ba070
    ADD ESP,0x4                         ; 00407c2e
    CMP EDI,EAX                         ; 00407c31
    JL 0x00407c19                       ; 00407c33
        ;   XREF to: 00407c19 (CONDITIONAL_JUMP)  ; LAB_00407c19
    JMP 0x00407a80                      ; 00407c35
        ;   XREF to: 00407a80 (UNCONDITIONAL_JUMP)  ; LAB_00407a80

