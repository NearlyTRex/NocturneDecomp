; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_00408fc0(SMRGLHeaderPrimitive *param_1)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_0057751c
;   TerminatedCString s_renderFaceList_too_many_0057752b
;   TerminatedCString s_Unknown_primitive_d_0057754b
;   TerminatedCString s_engine_3d_c_00577562
;   undefined4 DAT_005b7644
;   undefined4 DAT_005c5014
;   undefined4 DAT_00761ec4
;   undefined4 DAT_00761ec8
;   undefined4 DAT_00761ecc
;   undefined4 DAT_01c02594
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_3d.c_FUN_00408e80
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_3d.c_processVertexLighting_FUN_00404730
;   engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120
;   engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00408880
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90
;   engine_3d.c_transformAndBufferVertices_FUN_00404530
;   engine_model.c_getMRGLSize_FUN_004dd520
;   engine_special.cpp_drawPolyList_FUN_00532680
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408fc0
        ;   Label: engine_3d.c_FUN_00408fc0
    PUSH ESI                            ; 00408fc1
    PUSH EDI                            ; 00408fc2
    PUSH EBP                            ; 00408fc3
    SUB ESP,0x100                       ; 00408fc4
    MOV EDI,dword ptr [ESP + 0x114]     ; 00408fca
    XOR EDX,EDX                         ; 00408fd1
    MOV AH,byte ptr [EDI]               ; 00408fd3
    MOV dword ptr [0x00761ec4],EDX      ; 00408fd5 | DAT_00761ec4
    TEST AH,AH                          ; 00408fdb
    JZ 0x00409020                       ; 00408fdd
        ;   XREF to: 00409020 (CONDITIONAL_JUMP)  ; LAB_00409020
    MOV BL,byte ptr [EDI]               ; 00408fdf
        ;   Label: LAB_00408fdf
    CMP BL,0x14                         ; 00408fe1
    JNC 0x00409174                      ; 00408fe4
        ;   XREF to: 00409174 (CONDITIONAL_JUMP)  ; LAB_00409174
    CMP BL,0x3                          ; 00408fea
    JNC 0x00409193                      ; 00408fed
        ;   XREF to: 00409193 (CONDITIONAL_JUMP)  ; LAB_00409193
    CMP BL,0x2                          ; 00408ff3
    JNZ 0x004091a2                      ; 00408ff6
        ;   XREF to: 004091a2 (CONDITIONAL_JUMP)  ; LAB_004091a2
    PUSH EDI                            ; 00408ffc
    CALL engine_3d.c_transformAndBufferVertices_FUN_00404530 ; 00408ffd
        ;   XREF to: 00404530 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_transformAndBufferVertices_FUN_00404530(SMRGLHeaderExtended * mrgl)
    MOV ESI,dword ptr [0x005b7644]      ; 00409002 | DAT_005b7644
    ADD ESP,0x4                         ; 00409008
    TEST ESI,ESI                        ; 0040900b
    JNZ 0x0040906d                      ; 0040900d
        ;   XREF to: 0040906d (CONDITIONAL_JUMP)  ; LAB_0040906d
    PUSH EDI                            ; 0040900f
        ;   Label: LAB_0040900f
    CALL engine_model.c_getMRGLSize_FUN_004dd520 ; 00409010
        ;   XREF to: 004dd520 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_004dd520(SMRGLHeaderExtended * header)
    ADD EDI,EAX                         ; 00409015
    MOV DL,byte ptr [EDI]               ; 00409017
    ADD ESP,0x4                         ; 00409019
    TEST DL,DL                          ; 0040901c
    JNZ 0x00408fdf                      ; 0040901e
        ;   XREF to: 00408fdf (CONDITIONAL_JUMP)  ; LAB_00408fdf
    MOV ECX,dword ptr [0x00761ec4]      ; 00409020 | DAT_00761ec4
        ;   Label: LAB_00409020
    TEST ECX,ECX                        ; 00409026
    JZ 0x00409058                       ; 00409028
        ;   XREF to: 00409058 (CONDITIONAL_JUMP)  ; LAB_00409058
    MOV EBX,dword ptr [0x01c02594]      ; 0040902a | DAT_01c02594
    TEST EBX,EBX                        ; 00409030
    JZ 0x004091df                       ; 00409032
        ;   XREF to: 004091df (CONDITIONAL_JUMP)  ; LAB_004091df
    PUSH 0xcd                           ; 00409038
    PUSH ECX                            ; 0040903d
    PUSH 0x761ec8                       ; 0040903e | DAT_00761ec8
    PUSH 0x5c5014                       ; 00409043 | DAT_005c5014
    CALL engine_special.cpp_drawPolyList_FUN_00532680 ; 00409048
        ;   XREF to: 00532680 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList_FUN_00532680(SRenderVertex * vertex_buffer, SMRGLPrimitiveTriangle * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 0040904d
    XOR EDX,EDX                         ; 00409050
        ;   Label: LAB_00409050
    MOV dword ptr [0x00761ec4],EDX      ; 00409052 | DAT_00761ec4
    MOV dword ptr [0x005b7644],0x1      ; 00409058 | DAT_005b7644
        ;   Label: LAB_00409058
    ADD ESP,0x100                       ; 00409062
    POP EBP                             ; 00409068
    POP EDI                             ; 00409069
    POP ESI                             ; 0040906a
    POP EBX                             ; 0040906b
    RET                                 ; 0040906c
    PUSH EDI                            ; 0040906d
        ;   Label: LAB_0040906d
    CALL engine_3d.c_FUN_00408e80       ; 0040906e
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_00408e80()
    ADD ESP,0x4                         ; 00409073
    ADD ESP,0x100                       ; 00409076
    POP EBP                             ; 0040907c
    POP EDI                             ; 0040907d
    POP ESI                             ; 0040907e
    POP EBX                             ; 0040907f
    RET                                 ; 00409080
    PUSH EDI                            ; 00409081
        ;   Label: LAB_00409081
    CALL engine_3d.c_processVertexLighting_FUN_00404730 ; 00409082
        ;   XREF to: 00404730 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processVertexLighting_FUN_00404730(SMRGLHeaderExtended * mrgl)
    ADD ESP,0x4                         ; 00409087
    JMP 0x0040900f                      ; 0040908a
        ;   XREF to: 0040900f (UNCONDITIONAL_JUMP)  ; LAB_0040900f
    MOV EBX,dword ptr [0x00761ec4]      ; 0040908c | DAT_00761ec4
        ;   Label: LAB_0040908c
    TEST EBX,EBX                        ; 00409092
    JZ 0x004090c1                       ; 00409094
        ;   XREF to: 004090c1 (CONDITIONAL_JUMP)  ; LAB_004090c1
    JZ 0x004090c1                       ; 00409096
        ;   XREF to: 004090c1 (CONDITIONAL_JUMP)  ; LAB_004090c1
    CMP dword ptr [0x01c02594],0x0      ; 00409098 | DAT_01c02594
    JZ 0x004090cf                       ; 0040909f
        ;   XREF to: 004090cf (CONDITIONAL_JUMP)  ; LAB_004090cf
    PUSH 0xcd                           ; 004090a1
    PUSH EBX                            ; 004090a6
    PUSH 0x761ec8                       ; 004090a7 | DAT_00761ec8
    PUSH 0x5c5014                       ; 004090ac | DAT_005c5014
    CALL engine_special.cpp_drawPolyList_FUN_00532680 ; 004090b1
        ;   XREF to: 00532680 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList_FUN_00532680(SRenderVertex * vertex_buffer, SMRGLPrimitiveTriangle * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 004090b6
    XOR EDX,EDX                         ; 004090b9
        ;   Label: LAB_004090b9
    MOV dword ptr [0x00761ec4],EDX      ; 004090bb | DAT_00761ec4
    PUSH EDI                            ; 004090c1
        ;   Label: LAB_004090c1
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 004090c2
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 004090c7
    JMP 0x0040900f                      ; 004090ca
        ;   XREF to: 0040900f (UNCONDITIONAL_JUMP)  ; LAB_0040900f
    MOV EAX,[0x00761ec4]                ; 004090cf | DAT_00761ec4
        ;   Label: LAB_004090cf
    XOR EBX,EBX                         ; 004090d4
    TEST EAX,EAX                        ; 004090d6
    JLE 0x004090b9                      ; 004090d8
        ;   XREF to: 004090b9 (CONDITIONAL_JUMP)  ; LAB_004090b9
    XOR ESI,ESI                         ; 004090da
    MOV EBP,dword ptr [ESI + 0x761ec8]  ; 004090dc | DAT_00761ec8 | DAT_00761ecc
        ;   Label: LAB_004090dc
    PUSH EBP                            ; 004090e2
    ADD ESI,0x4                         ; 004090e3
    INC EBX                             ; 004090e6
    CALL engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120 ; 004090e7
        ;   XREF to: 00407120 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120()
    MOV EAX,[0x00761ec4]                ; 004090ec | DAT_00761ec4
    ADD ESP,0x4                         ; 004090f1
    CMP EBX,EAX                         ; 004090f4
    JL 0x004090dc                       ; 004090f6
        ;   XREF to: 004090dc (CONDITIONAL_JUMP)  ; LAB_004090dc
    JMP 0x004090b9                      ; 004090f8
        ;   XREF to: 004090b9 (UNCONDITIONAL_JUMP)  ; LAB_004090b9
    MOV EBX,EDI                         ; 004090fa
        ;   Label: LAB_004090fa
    LEA EAX,[EDI + 0x8]                 ; 004090fc
    PUSH EAX                            ; 004090ff
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00409100
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00409105
    TEST EAX,EAX                        ; 00409108
    JZ 0x0040900f                       ; 0040910a
        ;   XREF to: 0040900f (CONDITIONAL_JUMP)  ; LAB_0040900f
    CMP dword ptr [0x00761ec4],0x7d0    ; 00409110 | DAT_00761ec4
    JL 0x0040913e                       ; 0040911a
        ;   XREF to: 0040913e (CONDITIONAL_JUMP)  ; LAB_0040913e
    MOV EAX,0x57751c                    ; 0040911c | = "..\\engine\\3d.c"
    MOV EDX,0xd89                       ; 00409121
    PUSH 0x57752b                       ; 00409126 | = "renderFaceList - too many faces"
    MOV [0x01cc4800],EAX                ; 0040912b | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00409130 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00409136
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0040913b
    MOV EAX,[0x00761ec4]                ; 0040913e | DAT_00761ec4
        ;   Label: LAB_0040913e
    LEA ECX,[EAX + 0x1]                 ; 00409143
    MOV dword ptr [EAX*0x4 + 0x761ec8],EBX ; 00409146 | DAT_00761ec8
    MOV dword ptr [0x00761ec4],ECX      ; 0040914d | DAT_00761ec4
    JMP 0x0040900f                      ; 00409153
        ;   XREF to: 0040900f (UNCONDITIONAL_JUMP)  ; LAB_0040900f
    PUSH EDI                            ; 00409158
        ;   Label: LAB_00409158
    CALL engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90 ; 00409159
        ;   XREF to: 00405c90 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90(SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x4                         ; 0040915e
    JMP 0x0040900f                      ; 00409161
        ;   XREF to: 0040900f (UNCONDITIONAL_JUMP)  ; LAB_0040900f
    PUSH EDI                            ; 00409166
        ;   Label: LAB_00409166
    CALL engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00408880 ; 00409167
        ;   XREF to: 00408880 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 0040916c
    JMP 0x0040900f                      ; 0040916f
        ;   XREF to: 0040900f (UNCONDITIONAL_JUMP)  ; LAB_0040900f
    JBE 0x0040900f                      ; 00409174
        ;   XREF to: 0040900f (CONDITIONAL_JUMP)  ; LAB_0040900f
        ;   Label: LAB_00409174
    CMP BL,0x29                         ; 0040917a
    JNC 0x00409186                      ; 0040917d
        ;   XREF to: 00409186 (CONDITIONAL_JUMP)  ; LAB_00409186
    CMP BL,0x18                         ; 0040917f
    JZ 0x00409158                       ; 00409182
        ;   XREF to: 00409158 (CONDITIONAL_JUMP)  ; LAB_00409158
    JMP 0x004091a2                      ; 00409184
        ;   XREF to: 004091a2 (UNCONDITIONAL_JUMP)  ; LAB_004091a2
    JBE 0x004090fa                      ; 00409186
        ;   XREF to: 004090fa (CONDITIONAL_JUMP)  ; LAB_004090fa
        ;   Label: LAB_00409186
    CMP BL,0x41                         ; 0040918c
    JZ 0x00409166                       ; 0040918f
        ;   XREF to: 00409166 (CONDITIONAL_JUMP)  ; LAB_00409166
    JMP 0x004091a2                      ; 00409191
        ;   XREF to: 004091a2 (UNCONDITIONAL_JUMP)  ; LAB_004091a2
    JBE 0x00409081                      ; 00409193
        ;   XREF to: 00409081 (CONDITIONAL_JUMP)  ; LAB_00409081
        ;   Label: LAB_00409193
    CMP BL,0xd                          ; 00409199
    JZ 0x0040908c                       ; 0040919c
        ;   XREF to: 0040908c (CONDITIONAL_JUMP)  ; LAB_0040908c
    XOR EAX,EAX                         ; 004091a2
        ;   Label: LAB_004091a2
    MOV AL,byte ptr [EDI]               ; 004091a4
    PUSH EAX                            ; 004091a6
    PUSH 0x57754b                       ; 004091a7 | = "Unknown primitive : %d"
    LEA EAX,[ESP + 0x8]                 ; 004091ac
    PUSH EAX                            ; 004091b0
    MOV EBX,0xdd3                       ; 004091b1
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004091b6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004091bb
    MOV EAX,ESP                         ; 004091be
    MOV ECX,0x577562                    ; 004091c0 | = "..\\engine\\3d.c"
    PUSH EAX                            ; 004091c5
    MOV dword ptr [0x01cc4804],EBX      ; 004091c6 | g_INT_01cc4804
    MOV dword ptr [0x01cc4800],ECX      ; 004091cc | g_CHAR_PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 004091d2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004091d7
    JMP 0x0040900f                      ; 004091da
        ;   XREF to: 0040900f (UNCONDITIONAL_JUMP)  ; LAB_0040900f
    XOR EDI,EDI                         ; 004091df
        ;   Label: LAB_004091df
    TEST ECX,ECX                        ; 004091e1
    JLE 0x00409050                      ; 004091e3
        ;   XREF to: 00409050 (CONDITIONAL_JUMP)  ; LAB_00409050
    MOV EBP,dword ptr [EBX + 0x761ec8]  ; 004091e9 | DAT_00761ec8 | DAT_00761ecc
        ;   Label: LAB_004091e9
    PUSH EBP                            ; 004091ef
    ADD EBX,0x4                         ; 004091f0
    INC EDI                             ; 004091f3
    CALL engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120 ; 004091f4
        ;   XREF to: 00407120 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120()
    MOV EAX,[0x00761ec4]                ; 004091f9 | DAT_00761ec4
    ADD ESP,0x4                         ; 004091fe
    CMP EDI,EAX                         ; 00409201
    JL 0x004091e9                       ; 00409203
        ;   XREF to: 004091e9 (CONDITIONAL_JUMP)  ; LAB_004091e9
    JMP 0x00409050                      ; 00409205
        ;   XREF to: 00409050 (UNCONDITIONAL_JUMP)  ; LAB_00409050

