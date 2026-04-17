; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools *this_ptr,float scale_factor,int text_color)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale_factor
; int              Stack[0xc]:4   text_color
; Local Variables:
; char[20]         Stack[-0x34]:20  local_34
; CVector3i        Stack[-0x20]:12  local_20
; int              Stack[-0x14]:4  local_14
;
; XREF[9]:
;   core_cloth.cpp_CCloth_renderBone_FUN_0043b7e0 at 0043b9e0
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047ce48
;   core_manpuz.cpp_CMansionPuzzleCircle_renderEmitter_FUN_00509c60 at 00509cff
;   core_manpuz.cpp_CMansionPuzzleCircle_renderGem_FUN_00509d50 at 00509de2
;   core_setedit.cpp_CDemonSet_showRoomEditor_FUN_00581aa0 at 00581d79
;   core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170 at 00583539
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005975b4
;   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640 at 0059b7c1
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90 at 004a1f20
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   TerminatedCString g_AxisLabelChars
;   undefined4 g_AxisLabelChars+1
;   TerminatedCString s_c_006235af
;   double g_AxisScaleMultiplier = 256
;   SRenderVertex[20000] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.transformed_x
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.screen_x+3
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.screen_y
;   undefined4 g_RenderVertexBuffer[2].projected_vertex.transformed_x
;   undefined4 g_RenderVertexBuffer[2].projected_vertex.transformed_y
;   ... and 12 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0
;   engine_matrix.c_transformToCache_FUN_0050cd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1ca0
        ;   Label: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
    PUSH ESI                            ; 004a1ca1
    PUSH EDI                            ; 004a1ca2
    PUSH EBP                            ; 004a1ca3
    SUB ESP,0x24                        ; 004a1ca4
    CMP dword ptr [0x02cf1cd0],0x0      ; 004a1ca7 | g_EditorFont
    JZ 0x004a1e0f                       ; 004a1cae
        ;   XREF to: 004a1e0f (CONDITIONAL_JUMP)  ; LAB_004a1e0f
    MOV EAX,[0x02cf1cd0]                ; 004a1cb4 | g_EditorFont
        ;   Label: LAB_004a1cb4
    PUSH 0x6a                           ; 004a1cb9
    MOV EBX,dword ptr [EAX + 0x3168]    ; 004a1cbb
    PUSH EAX                            ; 004a1cc1
    MOV dword ptr [0x02cf2668],EBX      ; 004a1cc2 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0 ; 004a1cc8
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004a1ccd
    FLD float ptr [ESP + 0x3c]          ; 004a1cd0
    FMUL double ptr [0x006235b6]        ; 004a1cd4 | g_AxisScaleMultiplier
    XOR ESI,ESI                         ; 004a1cda
    MOV [0x02cf266c],EAX                ; 004a1cdc | g_FontCharacterWidth
    MOV EAX,dword ptr [ESP + 0x40]      ; 004a1ce1
    MOV dword ptr [ESP + 0x14],ESI      ; 004a1ce5
    MOV dword ptr [ESP + 0x18],ESI      ; 004a1ce9
    MOV [0x02d02570],EAX                ; 004a1ced | g_ActiveRenderColor
    LEA EAX,[ESP + 0x14]                ; 004a1cf2
    MOV dword ptr [ESP + 0x1c],ESI      ; 004a1cf6
    PUSH EAX                            ; 004a1cfa
    CALL crt_math.c_round_FUN_005fe6b0  ; 004a1cfb
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ESI                            ; 004a1d00
    FISTP dword ptr [ESP + 0x28]        ; 004a1d01
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a1d05
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004a1d0a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a1d0d
    MOV dword ptr [ESP + 0x14],EAX      ; 004a1d11
    LEA EAX,[ESP + 0x14]                ; 004a1d15
    PUSH EAX                            ; 004a1d19
    PUSH 0x1                            ; 004a1d1a
    MOV dword ptr [ESP + 0x20],ESI      ; 004a1d1c
    MOV dword ptr [ESP + 0x24],ESI      ; 004a1d20
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a1d24
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004a1d29
    JMP 0x006029f4                      ; 004a1d2c
        ;   XREF to: 006029f4 (UNCONDITIONAL_JUMP)  ; LAB_006029f4
    MOVSD.REP ES:EDI,ESI                ; 004a1d3b | g_RenderVertexBuffer[1].projected_vertex.transformed_x | g_RenderVertexBuffer[1].projected_vertex.transformed_y
        ;   Label: LAB_004a1d3b
    JMP 0x00602a4e                      ; 004a1d3d
        ;   XREF to: 00602a4e (UNCONDITIONAL_JUMP)  ; LAB_00602a4e
    MOVSD.REP ES:EDI,ESI                ; 004a1d4c | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
        ;   Label: LAB_004a1d4c
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004a1d4e
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004a1d53
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a1d56
    MOV dword ptr [ESP + 0x18],EAX      ; 004a1d5a
    LEA EAX,[ESP + 0x14]                ; 004a1d5e
    PUSH EAX                            ; 004a1d62
    XOR ECX,ECX                         ; 004a1d63
    PUSH 0x2                            ; 004a1d65
    MOV dword ptr [ESP + 0x1c],ECX      ; 004a1d67
    MOV dword ptr [ESP + 0x24],ECX      ; 004a1d6b
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a1d6f
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004a1d74
    JMP 0x00602aa8                      ; 004a1d77
        ;   XREF to: 00602aa8 (UNCONDITIONAL_JUMP)  ; LAB_00602aa8
    MOVSD.REP ES:EDI,ESI                ; 004a1d86 | g_RenderVertexBuffer[2].projected_vertex.transformed_x | g_RenderVertexBuffer[2].projected_vertex.transformed_y
        ;   Label: LAB_004a1d86
    JMP 0x00602b02                      ; 004a1d88
        ;   XREF to: 00602b02 (UNCONDITIONAL_JUMP)  ; LAB_00602b02
    MOVSD.REP ES:EDI,ESI                ; 004a1d97 | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
        ;   Label: LAB_004a1d97
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004a1d99
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004a1d9e
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a1da1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a1da5
    LEA EAX,[ESP + 0x14]                ; 004a1da9
    PUSH EAX                            ; 004a1dad
    XOR EBX,EBX                         ; 004a1dae
    XOR ESI,ESI                         ; 004a1db0
    PUSH 0x3                            ; 004a1db2
    MOV dword ptr [ESP + 0x1c],ESI      ; 004a1db4
    MOV dword ptr [ESP + 0x20],EBX      ; 004a1db8
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a1dbc
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004a1dc1
    JMP 0x00602b5c                      ; 004a1dc4
        ;   XREF to: 00602b5c (UNCONDITIONAL_JUMP)  ; LAB_00602b5c
    MOVSD.REP ES:EDI,ESI                ; 004a1dd8 | g_RenderVertexBuffer[3].projected_vertex.transformed_x | g_RenderVertexBuffer[3].projected_vertex.transformed_y
        ;   Label: LAB_004a1dd8
    JMP 0x00602bbb                      ; 004a1dda
        ;   XREF to: 00602bbb (UNCONDITIONAL_JUMP)  ; LAB_00602bbb
    MOVSD.REP ES:EDI,ESI                ; 004a1dec | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
        ;   Label: LAB_004a1dec
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004a1dee
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004a1df3
    XOR ESI,ESI                         ; 004a1df6
    TEST byte ptr [EBX + 0x13],0x80     ; 004a1df8 | g_RenderVertexBuffer[1].projected_vertex.screen_x+3 | g_RenderVertexBuffer[2].projected_vertex.screen_x+3
        ;   Label: LAB_004a1df8
    JZ 0x004a1e37                       ; 004a1dfc
        ;   XREF to: 004a1e37 (CONDITIONAL_JUMP)  ; LAB_004a1e37
    INC ESI                             ; 004a1dfe
        ;   Label: LAB_004a1dfe
    ADD EBX,0x30                        ; 004a1dff | g_RenderVertexBuffer[2].projected_vertex.transformed_x
    CMP ESI,0x3                         ; 004a1e02
    JL 0x004a1df8                       ; 004a1e05
        ;   XREF to: 004a1df8 (CONDITIONAL_JUMP)  ; LAB_004a1df8
    ADD ESP,0x24                        ; 004a1e07
    POP EBP                             ; 004a1e0a
    POP EDI                             ; 004a1e0b
    POP ESI                             ; 004a1e0c
    POP EBX                             ; 004a1e0d
    RET                                 ; 004a1e0e
    MOV ECX,0x622eae                    ; 004a1e0f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a1e0f
    MOV EBX,0x8d                        ; 004a1e14
    PUSH 0x622ec4                       ; 004a1e19 | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a1e1e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004a1e24 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a1e2a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a1e2f
    JMP 0x004a1cb4                      ; 004a1e32
        ;   XREF to: 004a1cb4 (UNCONDITIONAL_JUMP)  ; LAB_004a1cb4
    XOR EAX,EAX                         ; 004a1e37
        ;   Label: LAB_004a1e37
    MOV AL,byte ptr [ESI + 0x6235ab]    ; 004a1e39 | = "XYZ" | g_AxisLabelChars+1
    PUSH EAX                            ; 004a1e3f
    PUSH 0x6235af                       ; 004a1e40 | = "%c"
    LEA EAX,[ESP + 0x8]                 ; 004a1e45
    PUSH EAX                            ; 004a1e49
    MOV EBP,dword ptr [EBX + 0x10]      ; 004a1e4a | g_RenderVertexBuffer[1].projected_vertex.screen_x | g_RenderVertexBuffer[2].projected_vertex.screen_x
    MOV EDI,dword ptr [EBX + 0x14]      ; 004a1e4d | g_RenderVertexBuffer[1].projected_vertex.screen_y | g_RenderVertexBuffer[2].projected_vertex.screen_y
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004a1e50
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a1e55
    PUSH 0xffff                         ; 004a1e58
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004a1e5d
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 004a1e62
    PUSH -0x1                           ; 004a1e65
    MOV EAX,[0x02cf2ac4]                ; 004a1e67 | g_AxisLabelTextColor
    PUSH EAX                            ; 004a1e6c
    SAR EDI,0x10                        ; 004a1e6d
    PUSH EDI                            ; 004a1e70
    SAR EBP,0x10                        ; 004a1e71
    PUSH EBP                            ; 004a1e74
    LEA EAX,[ESP + 0x10]                ; 004a1e75
    PUSH EAX                            ; 004a1e79
    MOV EDX,dword ptr [0x02cf1cd0]      ; 004a1e7a | g_EditorFont
    PUSH EDX                            ; 004a1e80
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004a1e81
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004a1e86
    JMP 0x004a1dfe                      ; 004a1e89
        ;   XREF to: 004a1dfe (UNCONDITIONAL_JUMP)  ; LAB_004a1dfe
    MOV ESI,0x688044                    ; 006029f4
        ;   Label: LAB_006029f4
    SUB ESP,0x30                        ; 006029f9
    MOV ECX,0xc                         ; 006029fc
    MOV EDI,ESP                         ; 00602a01
    MOV ECX,dword ptr [ESI]             ; 00602a03
    MOV dword ptr [EDI],ECX             ; 00602a05
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602a07
    MOV dword ptr [EDI + 0x4],ECX       ; 00602a0a
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602a0d
    MOV dword ptr [EDI + 0x8],ECX       ; 00602a10
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602a13
    MOV dword ptr [EDI + 0xc],ECX       ; 00602a16
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602a19
    MOV dword ptr [EDI + 0x10],ECX      ; 00602a1c
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602a1f
    MOV dword ptr [EDI + 0x14],ECX      ; 00602a22
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602a25
    MOV dword ptr [EDI + 0x18],ECX      ; 00602a28
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602a2b
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602a2e
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602a31
    MOV dword ptr [EDI + 0x20],ECX      ; 00602a34
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602a37
    MOV dword ptr [EDI + 0x24],ECX      ; 00602a3a
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602a3d
    MOV dword ptr [EDI + 0x28],ECX      ; 00602a40
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602a43
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602a46
    JMP 0x004a1d3b                      ; 00602a49
        ;   XREF to: 004a1d3b (UNCONDITIONAL_JUMP)  ; LAB_004a1d3b
    SUB ESP,0x30                        ; 00602a4e
        ;   Label: LAB_00602a4e
    MOV ECX,0xc                         ; 00602a51
    MOV ESI,0x688014                    ; 00602a56
    MOV EDI,ESP                         ; 00602a5b
    MOV ECX,dword ptr [ESI]             ; 00602a5d
    MOV dword ptr [EDI],ECX             ; 00602a5f
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602a61
    MOV dword ptr [EDI + 0x4],ECX       ; 00602a64
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602a67
    MOV dword ptr [EDI + 0x8],ECX       ; 00602a6a
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602a6d
    MOV dword ptr [EDI + 0xc],ECX       ; 00602a70
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602a73
    MOV dword ptr [EDI + 0x10],ECX      ; 00602a76
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602a79
    MOV dword ptr [EDI + 0x14],ECX      ; 00602a7c
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602a7f
    MOV dword ptr [EDI + 0x18],ECX      ; 00602a82
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602a85
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602a88
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602a8b
    MOV dword ptr [EDI + 0x20],ECX      ; 00602a8e
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602a91
    MOV dword ptr [EDI + 0x24],ECX      ; 00602a94
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602a97
    MOV dword ptr [EDI + 0x28],ECX      ; 00602a9a
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602a9d
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602aa0
    JMP 0x004a1d4c                      ; 00602aa3
        ;   XREF to: 004a1d4c (UNCONDITIONAL_JUMP)  ; LAB_004a1d4c
    MOV ESI,0x688074                    ; 00602aa8
        ;   Label: LAB_00602aa8
    SUB ESP,0x30                        ; 00602aad
    MOV ECX,0xc                         ; 00602ab0
    MOV EDI,ESP                         ; 00602ab5
    MOV ECX,dword ptr [ESI]             ; 00602ab7
    MOV dword ptr [EDI],ECX             ; 00602ab9
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602abb
    MOV dword ptr [EDI + 0x4],ECX       ; 00602abe
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602ac1
    MOV dword ptr [EDI + 0x8],ECX       ; 00602ac4
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602ac7
    MOV dword ptr [EDI + 0xc],ECX       ; 00602aca
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602acd
    MOV dword ptr [EDI + 0x10],ECX      ; 00602ad0
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602ad3
    MOV dword ptr [EDI + 0x14],ECX      ; 00602ad6
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602ad9
    MOV dword ptr [EDI + 0x18],ECX      ; 00602adc
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602adf
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602ae2
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602ae5
    MOV dword ptr [EDI + 0x20],ECX      ; 00602ae8
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602aeb
    MOV dword ptr [EDI + 0x24],ECX      ; 00602aee
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602af1
    MOV dword ptr [EDI + 0x28],ECX      ; 00602af4
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602af7
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602afa
    JMP 0x004a1d86                      ; 00602afd
        ;   XREF to: 004a1d86 (UNCONDITIONAL_JUMP)  ; LAB_004a1d86
    SUB ESP,0x30                        ; 00602b02
        ;   Label: LAB_00602b02
    MOV ECX,0xc                         ; 00602b05
    MOV ESI,0x688014                    ; 00602b0a
    MOV EDI,ESP                         ; 00602b0f
    MOV ECX,dword ptr [ESI]             ; 00602b11
    MOV dword ptr [EDI],ECX             ; 00602b13
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602b15
    MOV dword ptr [EDI + 0x4],ECX       ; 00602b18
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602b1b
    MOV dword ptr [EDI + 0x8],ECX       ; 00602b1e
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602b21
    MOV dword ptr [EDI + 0xc],ECX       ; 00602b24
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602b27
    MOV dword ptr [EDI + 0x10],ECX      ; 00602b2a
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602b2d
    MOV dword ptr [EDI + 0x14],ECX      ; 00602b30
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602b33
    MOV dword ptr [EDI + 0x18],ECX      ; 00602b36
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602b39
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602b3c
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602b3f
    MOV dword ptr [EDI + 0x20],ECX      ; 00602b42
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602b45
    MOV dword ptr [EDI + 0x24],ECX      ; 00602b48
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602b4b
    MOV dword ptr [EDI + 0x28],ECX      ; 00602b4e
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602b51
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602b54
    JMP 0x004a1d97                      ; 00602b57
        ;   XREF to: 004a1d97 (UNCONDITIONAL_JUMP)  ; LAB_004a1d97
    MOV ESI,0x6880a4                    ; 00602b5c
        ;   Label: LAB_00602b5c
    SUB ESP,0x30                        ; 00602b61
    MOV ECX,0xc                         ; 00602b64
    MOV EDI,ESP                         ; 00602b69
    MOV EBX,0x688014                    ; 00602b6b
    MOV ECX,dword ptr [ESI]             ; 00602b70
    MOV dword ptr [EDI],ECX             ; 00602b72
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602b74
    MOV dword ptr [EDI + 0x4],ECX       ; 00602b77
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602b7a
    MOV dword ptr [EDI + 0x8],ECX       ; 00602b7d
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602b80
    MOV dword ptr [EDI + 0xc],ECX       ; 00602b83
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602b86
    MOV dword ptr [EDI + 0x10],ECX      ; 00602b89
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602b8c
    MOV dword ptr [EDI + 0x14],ECX      ; 00602b8f
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602b92
    MOV dword ptr [EDI + 0x18],ECX      ; 00602b95
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602b98
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602b9b
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602b9e
    MOV dword ptr [EDI + 0x20],ECX      ; 00602ba1
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602ba4
    MOV dword ptr [EDI + 0x24],ECX      ; 00602ba7
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602baa
    MOV dword ptr [EDI + 0x28],ECX      ; 00602bad
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602bb0
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602bb3
    JMP 0x004a1dd8                      ; 00602bb6
        ;   XREF to: 004a1dd8 (UNCONDITIONAL_JUMP)  ; LAB_004a1dd8
    SUB ESP,0x30                        ; 00602bbb
        ;   Label: LAB_00602bbb
    MOV ECX,0xc                         ; 00602bbe
    MOV ESI,0x688014                    ; 00602bc3
    MOV EDI,ESP                         ; 00602bc8
    ADD EBX,0x30                        ; 00602bca
    MOV ECX,dword ptr [ESI]             ; 00602bcd
    MOV dword ptr [EDI],ECX             ; 00602bcf
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602bd1
    MOV dword ptr [EDI + 0x4],ECX       ; 00602bd4
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602bd7
    MOV dword ptr [EDI + 0x8],ECX       ; 00602bda
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602bdd
    MOV dword ptr [EDI + 0xc],ECX       ; 00602be0
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602be3
    MOV dword ptr [EDI + 0x10],ECX      ; 00602be6
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602be9
    MOV dword ptr [EDI + 0x14],ECX      ; 00602bec
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602bef
    MOV dword ptr [EDI + 0x18],ECX      ; 00602bf2
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602bf5
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602bf8
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602bfb
    MOV dword ptr [EDI + 0x20],ECX      ; 00602bfe
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602c01
    MOV dword ptr [EDI + 0x24],ECX      ; 00602c04
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602c07
    MOV dword ptr [EDI + 0x28],ECX      ; 00602c0a
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602c0d
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602c10
    JMP 0x004a1dec                      ; 00602c13
        ;   XREF to: 004a1dec (UNCONDITIONAL_JUMP)  ; LAB_004a1dec

