; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_0050cee0(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)
;
; Parameters:
; int              Stack[0x4]:4   rot_x
; int              Stack[0x8]:4   rot_y
; int              Stack[0xc]:4   rot_z
; int              Stack[0x10]:4   translate_x
; int              Stack[0x14]:4   translate_y
; int              Stack[0x18]:4   translate_z
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 at 0048c4e0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 at 0048c612
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f488
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90 at 004a1f0a
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00635a4d
;   TerminatedCString s_Matrix_unbalance_00635a60
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   int g_LightDirectionX
;   int g_LightDirectionY
;   int g_LightDirectionZ
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   undefined4 g_TransformMatrix[1][2]
;   undefined4 g_TransformMatrix[2][0]
;   ... and 23 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_matrix.c_interpolatedCos_FUN_0050c600
;   engine_matrix.c_interpolatedSin_FUN_0050c5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050cee0
        ;   Label: engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
    PUSH ESI                            ; 0050cee1
    PUSH EDI                            ; 0050cee2
    PUSH EBP                            ; 0050cee3
    SUB ESP,0x30                        ; 0050cee4
    MOV EDI,dword ptr [ESP + 0x44]      ; 0050cee7
    MOV EBX,dword ptr [ESP + 0x48]      ; 0050ceeb
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0050ceef
    MOV EAX,[0x02f0d3c0]                ; 0050cef3 | g_MatrixStackIndex
    MOV EDX,dword ptr [0x02d052b8]      ; 0050cef8 | g_RelativeX
    MOV dword ptr [EAX*0x4 + 0x2f0d52c],EDX ; 0050cefe | g_MatrixStack_RelX
    MOV EDX,dword ptr [0x02d052bc]      ; 0050cf05 | g_RelativeY
    MOV dword ptr [EAX*0x4 + 0x2f0d554],EDX ; 0050cf0b | g_MatrixStack_RelY
    MOV EDX,dword ptr [0x02d052c0]      ; 0050cf12 | g_RelativeZ
    MOV dword ptr [EAX*0x4 + 0x2f0d57c],EDX ; 0050cf18 | g_MatrixStack_RelZ
    MOV EDX,dword ptr [0x02d052dc]      ; 0050cf1f | g_LightDirectionX
    MOV dword ptr [EAX*0x4 + 0x2f0d5a4],EDX ; 0050cf25 | g_MatrixStack_Unk1
    MOV EDX,dword ptr [0x02d052e0]      ; 0050cf2c | g_LightDirectionY
    MOV dword ptr [EAX*0x4 + 0x2f0d5cc],EDX ; 0050cf32 | g_MatrixStack_Unk2
    MOV EDX,dword ptr [0x02d052e4]      ; 0050cf39 | g_LightDirectionZ
    MOV dword ptr [EAX*0x4 + 0x2f0d5f4],EDX ; 0050cf3f | g_MatrixStack_Unk3
    MOV EDX,dword ptr [0x02d052e8]      ; 0050cf46 | g_TransformMatrix
    MOV dword ptr [EAX*0x4 + 0x2f0d3c4],EDX ; 0050cf4c | g_MatrixStack_M00
    MOV EDX,dword ptr [0x02d052ec]      ; 0050cf53 | g_TransformMatrix[0][1]
    MOV dword ptr [EAX*0x4 + 0x2f0d3ec],EDX ; 0050cf59 | g_MatrixStack_M01
    MOV EDX,dword ptr [0x02d052f0]      ; 0050cf60 | g_TransformMatrix[0][2]
    MOV dword ptr [EAX*0x4 + 0x2f0d414],EDX ; 0050cf66 | g_MatrixStack_M02
    MOV EDX,dword ptr [0x02d052f4]      ; 0050cf6d | g_TransformMatrix[1][0]
    MOV dword ptr [EAX*0x4 + 0x2f0d43c],EDX ; 0050cf73 | g_MatrixStack_M10
    MOV EDX,dword ptr [0x02d052f8]      ; 0050cf7a | g_TransformMatrix[1][1]
    MOV dword ptr [EAX*0x4 + 0x2f0d464],EDX ; 0050cf80 | g_MatrixStack_M11
    MOV EDX,dword ptr [0x02d052fc]      ; 0050cf87 | g_TransformMatrix[1][2]
    MOV dword ptr [EAX*0x4 + 0x2f0d48c],EDX ; 0050cf8d | g_MatrixStack_M12
    MOV EDX,dword ptr [0x02d05300]      ; 0050cf94 | g_TransformMatrix[2][0]
    MOV dword ptr [EAX*0x4 + 0x2f0d4b4],EDX ; 0050cf9a | g_MatrixStack_M20
    MOV EDX,dword ptr [0x02d05304]      ; 0050cfa1 | g_TransformMatrix[2][1]
    MOV dword ptr [EAX*0x4 + 0x2f0d4dc],EDX ; 0050cfa7 | g_MatrixStack_M21
    MOV EDX,dword ptr [0x02d05308]      ; 0050cfae | g_TransformMatrix[2][2]
    MOV dword ptr [EAX*0x4 + 0x2f0d504],EDX ; 0050cfb4 | g_MatrixStack_M22
    MOV EDX,dword ptr [ESP + 0x50]      ; 0050cfbb
    MOV EAX,[0x02d052b8]                ; 0050cfbf | g_RelativeX
    SUB EAX,EDX                         ; 0050cfc4
    MOV ECX,dword ptr [ESP + 0x54]      ; 0050cfc6
    MOV dword ptr [ESP + 0x8],EAX       ; 0050cfca
    MOV EAX,[0x02d052bc]                ; 0050cfce | g_RelativeY
    SUB EAX,ECX                         ; 0050cfd3
    MOV EBP,dword ptr [ESP + 0x58]      ; 0050cfd5
    MOV dword ptr [ESP + 0x4],EAX       ; 0050cfd9
    MOV EAX,[0x02d052c0]                ; 0050cfdd | g_RelativeZ
    SUB EAX,EBP                         ; 0050cfe2
    MOV dword ptr [0x02f0d3b4],EBX      ; 0050cfe4 | g_SavedRotationY
    MOV dword ptr [ESP + 0x10],EAX      ; 0050cfea
    MOV EAX,EDI                         ; 0050cfee
    MOV dword ptr [0x02f0d3b8],ESI      ; 0050cff0 | g_SavedRotationZ
    OR EAX,EBX                          ; 0050cff6
    MOV dword ptr [0x02f0d3b0],EDI      ; 0050cff8 | g_SavedRotationX
    OR EAX,ESI                          ; 0050cffe
    JNZ 0x0050d03b                      ; 0050d000
        ;   XREF to: 0050d03b (CONDITIONAL_JUMP)  ; LAB_0050d03b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050d002
    MOV [0x02d052b8],EAX                ; 0050d006 | g_RelativeX
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050d00b
    MOV [0x02d052bc],EAX                ; 0050d00f | g_RelativeY
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050d014
    MOV [0x02d052c0],EAX                ; 0050d018 | g_RelativeZ
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050d01d | g_MatrixStackIndex
        ;   Label: LAB_0050d01d
    INC EDX                             ; 0050d023
    MOV dword ptr [0x02f0d3c0],EDX      ; 0050d024 | g_MatrixStackIndex
    CMP EDX,0x9                         ; 0050d02a
    JG 0x0050d5f5                       ; 0050d02d
        ;   XREF to: 0050d5f5 (CONDITIONAL_JUMP)  ; LAB_0050d5f5
    ADD ESP,0x30                        ; 0050d033
    POP EBP                             ; 0050d036
    POP EDI                             ; 0050d037
    POP ESI                             ; 0050d038
    POP EBX                             ; 0050d039
    RET                                 ; 0050d03a
    PUSH EDI                            ; 0050d03b
        ;   Label: LAB_0050d03b
    CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0 ; 0050d03c
        ;   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
    MOV dword ptr [ESP + 0x20],EAX      ; 0050d041
    ADD ESP,0x4                         ; 0050d045
    PUSH EDI                            ; 0050d048
    CALL engine_matrix.c_interpolatedCos_FUN_0050c600 ; 0050d049
        ;   XREF to: 0050c600 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)
    MOV dword ptr [ESP + 0x10],EAX      ; 0050d04e
    ADD ESP,0x4                         ; 0050d052
    PUSH EBX                            ; 0050d055
    CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0 ; 0050d056
        ;   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
    ADD ESP,0x4                         ; 0050d05b
    PUSH EBX                            ; 0050d05e
    MOV EBP,EAX                         ; 0050d05f
    CALL engine_matrix.c_interpolatedCos_FUN_0050c600 ; 0050d061
        ;   XREF to: 0050c600 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)
    ADD ESP,0x4                         ; 0050d066
    PUSH ESI                            ; 0050d069
    MOV EBX,EAX                         ; 0050d06a
    CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0 ; 0050d06c
        ;   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
    MOV dword ptr [ESP + 0x28],EAX      ; 0050d071
    ADD ESP,0x4                         ; 0050d075
    PUSH ESI                            ; 0050d078
    CALL engine_matrix.c_interpolatedCos_FUN_0050c600 ; 0050d079
        ;   XREF to: 0050c600 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)
    MOV dword ptr [ESP + 0x2c],EAX      ; 0050d07e
    ADD ESP,0x4                         ; 0050d082
    MOV EAX,EBX                         ; 0050d085
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050d087
    IMUL EDX                            ; 0050d08b
    SHRD EAX,EDX,0x10                   ; 0050d08d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050d091
    MOV ECX,EAX                         ; 0050d095
    MOV EAX,EBP                         ; 0050d097
    IMUL EDX                            ; 0050d099
    SHRD EAX,EDX,0x10                   ; 0050d09b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050d09f
    IMUL EDX                            ; 0050d0a3
    SHRD EAX,EDX,0x10                   ; 0050d0a5
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050d0a9
    ADD ECX,EAX                         ; 0050d0ad
    NEG EDX                             ; 0050d0af
    MOV EAX,EBP                         ; 0050d0b1
    MOV dword ptr [ESP + 0x18],ECX      ; 0050d0b3
    IMUL EDX                            ; 0050d0b7
    SHRD EAX,EDX,0x10                   ; 0050d0b9
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050d0bd
    MOV ECX,EAX                         ; 0050d0c1
    MOV EAX,EBX                         ; 0050d0c3
    IMUL EDX                            ; 0050d0c5
    SHRD EAX,EDX,0x10                   ; 0050d0c7
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050d0cb
    IMUL EDX                            ; 0050d0cf
    SHRD EAX,EDX,0x10                   ; 0050d0d1
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050d0d5
    ADD ECX,EAX                         ; 0050d0d9
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d0db
    MOV dword ptr [ESP + 0x20],ECX      ; 0050d0df
    IMUL EDX                            ; 0050d0e3
    SHRD EAX,EDX,0x10                   ; 0050d0e5
    MOV ECX,EAX                         ; 0050d0e9
    MOV EDX,EBP                         ; 0050d0eb
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d0ed
    IMUL EDX                            ; 0050d0f1
    SHRD EAX,EDX,0x10                   ; 0050d0f3
    MOV ESI,EAX                         ; 0050d0f7
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d0f9
    MOV EDX,EBX                         ; 0050d0fd
    IMUL EDX                            ; 0050d0ff
    SHRD EAX,EDX,0x10                   ; 0050d101
    MOV EDI,EAX                         ; 0050d105
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050d107
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050d10b
    MOV dword ptr [ESP + 0x14],EAX      ; 0050d10f
    NEG EAX                             ; 0050d113
    NEG EDX                             ; 0050d115
    MOV dword ptr [ESP + 0x14],EAX      ; 0050d117
    MOV EAX,EBX                         ; 0050d11b
    IMUL EDX                            ; 0050d11d
    SHRD EAX,EDX,0x10                   ; 0050d11f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050d123
    MOV dword ptr [ESP],EAX             ; 0050d127
    MOV EAX,EBP                         ; 0050d12a
    IMUL EDX                            ; 0050d12c
    SHRD EAX,EDX,0x10                   ; 0050d12e
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050d132
    IMUL EDX                            ; 0050d136
    SHRD EAX,EDX,0x10                   ; 0050d138
    MOV EDX,dword ptr [ESP]             ; 0050d13c
    ADD EDX,EAX                         ; 0050d13f
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050d141
    MOV dword ptr [ESP + 0x2c],EDX      ; 0050d145
    MOV EDX,EBP                         ; 0050d149
    IMUL EDX                            ; 0050d14b
    SHRD EAX,EDX,0x10                   ; 0050d14d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050d151
    MOV EBP,EAX                         ; 0050d155
    MOV EAX,EBX                         ; 0050d157
    IMUL EDX                            ; 0050d159
    SHRD EAX,EDX,0x10                   ; 0050d15b
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050d15f
    IMUL EDX                            ; 0050d163
    SHRD EAX,EDX,0x10                   ; 0050d165
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050d169
    ADD EBP,EAX                         ; 0050d16d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050d16f
    IMUL EDX                            ; 0050d173
    SHRD EAX,EDX,0x10                   ; 0050d175
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050d179
    MOV EBX,EAX                         ; 0050d17d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050d17f
    IMUL EDX                            ; 0050d183
    SHRD EAX,EDX,0x10                   ; 0050d185
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050d189
    MOV dword ptr [ESP],EAX             ; 0050d18d
    MOV EAX,ESI                         ; 0050d190
    IMUL EDX                            ; 0050d192
    SHRD EAX,EDX,0x10                   ; 0050d194
    MOV EDX,dword ptr [ESP]             ; 0050d198
    ADD EDX,EAX                         ; 0050d19b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0050d19d
    MOV dword ptr [ESP],EDX             ; 0050d1a1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050d1a4
    IMUL EDX                            ; 0050d1a8
    SHRD EAX,EDX,0x10                   ; 0050d1aa
    MOV EDX,dword ptr [ESP]             ; 0050d1ae
    ADD EDX,EAX                         ; 0050d1b1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050d1b3
    MOV dword ptr [0x02d052b8],EDX      ; 0050d1b7 | g_RelativeX
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050d1bd
    IMUL EDX                            ; 0050d1c1
    SHRD EAX,EDX,0x10                   ; 0050d1c3
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050d1c7
    MOV dword ptr [ESP],EAX             ; 0050d1cb
    MOV EAX,EDI                         ; 0050d1ce
    IMUL EDX                            ; 0050d1d0
    SHRD EAX,EDX,0x10                   ; 0050d1d2
    MOV EDX,dword ptr [ESP]             ; 0050d1d6
    ADD EDX,EAX                         ; 0050d1d9
    MOV dword ptr [ESP],EDX             ; 0050d1db
    MOV EAX,EBP                         ; 0050d1de
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050d1e0
    IMUL EDX                            ; 0050d1e4
    SHRD EAX,EDX,0x10                   ; 0050d1e6
    MOV EDX,dword ptr [ESP]             ; 0050d1ea
    ADD EDX,EAX                         ; 0050d1ed
    MOV dword ptr [0x02d052bc],EDX      ; 0050d1ef | g_RelativeY
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050d1f5
    MOV EAX,ECX                         ; 0050d1f9
    IMUL EDX                            ; 0050d1fb
    SHRD EAX,EDX,0x10                   ; 0050d1fd
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050d201
    MOV dword ptr [ESP],EAX             ; 0050d205
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050d208
    IMUL EDX                            ; 0050d20c
    SHRD EAX,EDX,0x10                   ; 0050d20e
    MOV EDX,dword ptr [ESP]             ; 0050d212
    ADD EDX,EAX                         ; 0050d215
    MOV dword ptr [ESP],EDX             ; 0050d217
    MOV EAX,EBX                         ; 0050d21a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050d21c
    IMUL EDX                            ; 0050d220
    SHRD EAX,EDX,0x10                   ; 0050d222
    MOV EDX,dword ptr [ESP]             ; 0050d226
    ADD EDX,EAX                         ; 0050d229
    MOV dword ptr [0x02d052c0],EDX      ; 0050d22b | g_RelativeZ
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050d231 | g_MatrixStackIndex
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050d237
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4] ; 0050d23b | g_MatrixStack_Unk1
    IMUL EDX                            ; 0050d242
    SHRD EAX,EDX,0x10                   ; 0050d244
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050d248 | g_MatrixStackIndex
    MOV dword ptr [ESP],EAX             ; 0050d24e
    MOV EAX,ESI                         ; 0050d251
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc] ; 0050d253 | g_MatrixStack_Unk2
    IMUL EDX                            ; 0050d25a
    SHRD EAX,EDX,0x10                   ; 0050d25c
    MOV EDX,dword ptr [ESP]             ; 0050d260
    ADD EDX,EAX                         ; 0050d263
    MOV dword ptr [ESP],EDX             ; 0050d265
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050d268 | g_MatrixStackIndex
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0050d26e
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4] ; 0050d272 | g_MatrixStack_Unk3
    IMUL EDX                            ; 0050d279
    SHRD EAX,EDX,0x10                   ; 0050d27b
    MOV EDX,dword ptr [ESP]             ; 0050d27f
    ADD EDX,EAX                         ; 0050d282
    MOV dword ptr [0x02d052dc],EDX      ; 0050d284 | g_LightDirectionX
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050d28a | g_MatrixStackIndex
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050d290
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4] ; 0050d294 | g_MatrixStack_Unk1
    IMUL EDX                            ; 0050d29b
    SHRD EAX,EDX,0x10                   ; 0050d29d
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050d2a1 | g_MatrixStackIndex
    MOV dword ptr [ESP],EAX             ; 0050d2a7
    MOV EAX,EDI                         ; 0050d2aa
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc] ; 0050d2ac | g_MatrixStack_Unk2
    IMUL EDX                            ; 0050d2b3
    SHRD EAX,EDX,0x10                   ; 0050d2b5
    MOV EDX,dword ptr [ESP]             ; 0050d2b9
    ADD EDX,EAX                         ; 0050d2bc
    MOV dword ptr [ESP],EDX             ; 0050d2be
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050d2c1 | g_MatrixStackIndex
    MOV EAX,EBP                         ; 0050d2c7
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4] ; 0050d2c9 | g_MatrixStack_Unk3
    IMUL EDX                            ; 0050d2d0
    SHRD EAX,EDX,0x10                   ; 0050d2d2
    MOV EDX,dword ptr [ESP]             ; 0050d2d6
    ADD EDX,EAX                         ; 0050d2d9
    MOV dword ptr [0x02d052e0],EDX      ; 0050d2db | g_LightDirectionY
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050d2e1 | g_MatrixStackIndex
    MOV EAX,ECX                         ; 0050d2e7
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4] ; 0050d2e9 | g_MatrixStack_Unk1
    IMUL EDX                            ; 0050d2f0
    SHRD EAX,EDX,0x10                   ; 0050d2f2
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050d2f6 | g_MatrixStackIndex
    MOV dword ptr [ESP],EAX             ; 0050d2fc
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050d2ff
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc] ; 0050d303 | g_MatrixStack_Unk2
    IMUL EDX                            ; 0050d30a
    SHRD EAX,EDX,0x10                   ; 0050d30c
    MOV EDX,dword ptr [ESP]             ; 0050d310
    ADD EDX,EAX                         ; 0050d313
    MOV dword ptr [ESP],EDX             ; 0050d315
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050d318 | g_MatrixStackIndex
    MOV EAX,EBX                         ; 0050d31e
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4] ; 0050d320 | g_MatrixStack_Unk3
    IMUL EDX                            ; 0050d327
    SHRD EAX,EDX,0x10                   ; 0050d329
    MOV EDX,dword ptr [ESP]             ; 0050d32d
    ADD EDX,EAX                         ; 0050d330
    MOV dword ptr [0x02d052e4],EDX      ; 0050d332 | g_LightDirectionZ
    MOV EAX,[0x02f0d3c0]                ; 0050d338 | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050d33d
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4] ; 0050d341 | g_MatrixStack_M00
    IMUL EDX                            ; 0050d348
    SHRD EAX,EDX,0x10                   ; 0050d34a
    MOV dword ptr [ESP],EAX             ; 0050d34e
    MOV EAX,[0x02f0d3c0]                ; 0050d351 | g_MatrixStackIndex
    MOV EDX,ESI                         ; 0050d356
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c] ; 0050d358 | g_MatrixStack_M10
    IMUL EDX                            ; 0050d35f
    SHRD EAX,EDX,0x10                   ; 0050d361
    MOV EDX,dword ptr [ESP]             ; 0050d365
    ADD EDX,EAX                         ; 0050d368
    MOV EAX,[0x02f0d3c0]                ; 0050d36a | g_MatrixStackIndex
    MOV dword ptr [ESP],EDX             ; 0050d36f
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050d372
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4] ; 0050d376 | g_MatrixStack_M20
    IMUL EDX                            ; 0050d37d
    SHRD EAX,EDX,0x10                   ; 0050d37f
    MOV EDX,dword ptr [ESP]             ; 0050d383
    ADD EDX,EAX                         ; 0050d386
    MOV EAX,[0x02f0d3c0]                ; 0050d388 | g_MatrixStackIndex
    MOV dword ptr [0x02d052e8],EDX      ; 0050d38d | g_TransformMatrix
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050d393
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec] ; 0050d397 | g_MatrixStack_M01
    IMUL EDX                            ; 0050d39e
    SHRD EAX,EDX,0x10                   ; 0050d3a0
    MOV dword ptr [ESP],EAX             ; 0050d3a4
    MOV EAX,[0x02f0d3c0]                ; 0050d3a7 | g_MatrixStackIndex
    MOV EDX,ESI                         ; 0050d3ac
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464] ; 0050d3ae | g_MatrixStack_M11
    IMUL EDX                            ; 0050d3b5
    SHRD EAX,EDX,0x10                   ; 0050d3b7
    MOV EDX,dword ptr [ESP]             ; 0050d3bb
    ADD EDX,EAX                         ; 0050d3be
    MOV EAX,[0x02f0d3c0]                ; 0050d3c0 | g_MatrixStackIndex
    MOV dword ptr [ESP],EDX             ; 0050d3c5
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050d3c8
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc] ; 0050d3cc | g_MatrixStack_M21
    IMUL EDX                            ; 0050d3d3
    SHRD EAX,EDX,0x10                   ; 0050d3d5
    MOV EDX,dword ptr [ESP]             ; 0050d3d9
    ADD EDX,EAX                         ; 0050d3dc
    MOV EAX,[0x02f0d3c0]                ; 0050d3de | g_MatrixStackIndex
    MOV dword ptr [0x02d052ec],EDX      ; 0050d3e3 | g_TransformMatrix[0][1]
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050d3e9
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414] ; 0050d3ed | g_MatrixStack_M02
    IMUL EDX                            ; 0050d3f4
    SHRD EAX,EDX,0x10                   ; 0050d3f6
    MOV dword ptr [ESP],EAX             ; 0050d3fa
    MOV EAX,[0x02f0d3c0]                ; 0050d3fd | g_MatrixStackIndex
    MOV EDX,ESI                         ; 0050d402
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c] ; 0050d404 | g_MatrixStack_M12
    MOV ESI,dword ptr [ESP]             ; 0050d40b
    IMUL EDX                            ; 0050d40e
    SHRD EAX,EDX,0x10                   ; 0050d410
    ADD ESI,EAX                         ; 0050d414
    MOV EAX,[0x02f0d3c0]                ; 0050d416 | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050d41b
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504] ; 0050d41f | g_MatrixStack_M22
    IMUL EDX                            ; 0050d426
    SHRD EAX,EDX,0x10                   ; 0050d428
    ADD ESI,EAX                         ; 0050d42c
    MOV EAX,[0x02f0d3c0]                ; 0050d42e | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050d433
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4] ; 0050d437 | g_MatrixStack_M00
    MOV dword ptr [0x02d052f0],ESI      ; 0050d43e | g_TransformMatrix[0][2]
    IMUL EDX                            ; 0050d444
    SHRD EAX,EDX,0x10                   ; 0050d446
    MOV ESI,EAX                         ; 0050d44a
    MOV EAX,[0x02f0d3c0]                ; 0050d44c | g_MatrixStackIndex
    MOV EDX,EDI                         ; 0050d451
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c] ; 0050d453 | g_MatrixStack_M10
    IMUL EDX                            ; 0050d45a
    SHRD EAX,EDX,0x10                   ; 0050d45c
    ADD ESI,EAX                         ; 0050d460
    MOV EAX,[0x02f0d3c0]                ; 0050d462 | g_MatrixStackIndex
    MOV EDX,EBP                         ; 0050d467
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4] ; 0050d469 | g_MatrixStack_M20
    IMUL EDX                            ; 0050d470
    SHRD EAX,EDX,0x10                   ; 0050d472
    ADD ESI,EAX                         ; 0050d476
    MOV dword ptr [0x02d052f4],ESI      ; 0050d478 | g_TransformMatrix[1][0]
    MOV EAX,[0x02f0d3c0]                ; 0050d47e | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050d483
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec] ; 0050d487 | g_MatrixStack_M01
    IMUL EDX                            ; 0050d48e
    SHRD EAX,EDX,0x10                   ; 0050d490
    MOV ESI,EAX                         ; 0050d494
    MOV EAX,[0x02f0d3c0]                ; 0050d496 | g_MatrixStackIndex
    MOV EDX,EDI                         ; 0050d49b
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464] ; 0050d49d | g_MatrixStack_M11
    IMUL EDX                            ; 0050d4a4
    SHRD EAX,EDX,0x10                   ; 0050d4a6
    ADD ESI,EAX                         ; 0050d4aa
    MOV EAX,[0x02f0d3c0]                ; 0050d4ac | g_MatrixStackIndex
    MOV EDX,EBP                         ; 0050d4b1
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc] ; 0050d4b3 | g_MatrixStack_M21
    IMUL EDX                            ; 0050d4ba
    SHRD EAX,EDX,0x10                   ; 0050d4bc
    ADD ESI,EAX                         ; 0050d4c0
    MOV EAX,[0x02f0d3c0]                ; 0050d4c2 | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050d4c7
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414] ; 0050d4cb | g_MatrixStack_M02
    MOV dword ptr [0x02d052f8],ESI      ; 0050d4d2 | g_TransformMatrix[1][1]
    IMUL EDX                            ; 0050d4d8
    SHRD EAX,EDX,0x10                   ; 0050d4da
    MOV ESI,EAX                         ; 0050d4de
    MOV EAX,[0x02f0d3c0]                ; 0050d4e0 | g_MatrixStackIndex
    MOV EDX,EDI                         ; 0050d4e5
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c] ; 0050d4e7 | g_MatrixStack_M12
    IMUL EDX                            ; 0050d4ee
    SHRD EAX,EDX,0x10                   ; 0050d4f0
    ADD ESI,EAX                         ; 0050d4f4
    MOV EAX,[0x02f0d3c0]                ; 0050d4f6 | g_MatrixStackIndex
    MOV EDX,EBP                         ; 0050d4fb
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504] ; 0050d4fd | g_MatrixStack_M22
    IMUL EDX                            ; 0050d504
    SHRD EAX,EDX,0x10                   ; 0050d506
    ADD ESI,EAX                         ; 0050d50a
    MOV EAX,[0x02f0d3c0]                ; 0050d50c | g_MatrixStackIndex
    MOV EDX,ECX                         ; 0050d511
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4] ; 0050d513 | g_MatrixStack_M00
    MOV dword ptr [0x02d052fc],ESI      ; 0050d51a | g_TransformMatrix[1][2]
    IMUL EDX                            ; 0050d520
    SHRD EAX,EDX,0x10                   ; 0050d522
    MOV ESI,EAX                         ; 0050d526
    MOV EAX,[0x02f0d3c0]                ; 0050d528 | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050d52d
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c] ; 0050d531 | g_MatrixStack_M10
    IMUL EDX                            ; 0050d538
    SHRD EAX,EDX,0x10                   ; 0050d53a
    ADD ESI,EAX                         ; 0050d53e
    MOV EAX,[0x02f0d3c0]                ; 0050d540 | g_MatrixStackIndex
    MOV EDX,EBX                         ; 0050d545
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4] ; 0050d547 | g_MatrixStack_M20
    IMUL EDX                            ; 0050d54e
    SHRD EAX,EDX,0x10                   ; 0050d550
    ADD ESI,EAX                         ; 0050d554
    MOV EAX,[0x02f0d3c0]                ; 0050d556 | g_MatrixStackIndex
    MOV EDX,ECX                         ; 0050d55b
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec] ; 0050d55d | g_MatrixStack_M01
    MOV dword ptr [0x02d05300],ESI      ; 0050d564 | g_TransformMatrix[2][0]
    IMUL EDX                            ; 0050d56a
    SHRD EAX,EDX,0x10                   ; 0050d56c
    MOV ESI,EAX                         ; 0050d570
    MOV EAX,[0x02f0d3c0]                ; 0050d572 | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050d577
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464] ; 0050d57b | g_MatrixStack_M11
    IMUL EDX                            ; 0050d582
    SHRD EAX,EDX,0x10                   ; 0050d584
    ADD ESI,EAX                         ; 0050d588
    MOV EAX,[0x02f0d3c0]                ; 0050d58a | g_MatrixStackIndex
    MOV EDX,EBX                         ; 0050d58f
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc] ; 0050d591 | g_MatrixStack_M21
    IMUL EDX                            ; 0050d598
    SHRD EAX,EDX,0x10                   ; 0050d59a
    ADD ESI,EAX                         ; 0050d59e
    MOV dword ptr [0x02d05304],ESI      ; 0050d5a0 | g_TransformMatrix[2][1]
    MOV EAX,[0x02f0d3c0]                ; 0050d5a6 | g_MatrixStackIndex
    MOV EDX,ECX                         ; 0050d5ab
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414] ; 0050d5ad | g_MatrixStack_M02
    IMUL EDX                            ; 0050d5b4
    SHRD EAX,EDX,0x10                   ; 0050d5b6
    MOV ECX,EAX                         ; 0050d5ba
    MOV EAX,[0x02f0d3c0]                ; 0050d5bc | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050d5c1
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c] ; 0050d5c5 | g_MatrixStack_M12
    IMUL EDX                            ; 0050d5cc
    SHRD EAX,EDX,0x10                   ; 0050d5ce
    ADD ECX,EAX                         ; 0050d5d2
    MOV EAX,[0x02f0d3c0]                ; 0050d5d4 | g_MatrixStackIndex
    MOV EDX,EBX                         ; 0050d5d9
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504] ; 0050d5db | g_MatrixStack_M22
    IMUL EDX                            ; 0050d5e2
    SHRD EAX,EDX,0x10                   ; 0050d5e4
    ADD ECX,EAX                         ; 0050d5e8
    MOV dword ptr [0x02d05308],ECX      ; 0050d5ea | g_TransformMatrix[2][2]
    JMP 0x0050d01d                      ; 0050d5f0
        ;   XREF to: 0050d01d (UNCONDITIONAL_JUMP)  ; LAB_0050d01d
    MOV EBX,0x635a4d                    ; 0050d5f5 | = "..\\engine\\matrix.c"
        ;   Label: LAB_0050d5f5
    MOV ESI,0x31f                       ; 0050d5fa
    PUSH 0x635a60                       ; 0050d5ff | = "Matrix unbalance"
    MOV dword ptr [0x02f0ca48],EBX      ; 0050d604 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0050d60a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050d610
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050d615
    ADD ESP,0x30                        ; 0050d618
    POP EBP                             ; 0050d61b
    POP EDI                             ; 0050d61c
    POP ESI                             ; 0050d61d
    POP EBX                             ; 0050d61e
    RET                                 ; 0050d61f

