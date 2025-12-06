; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_renderSinglePolygon_FUN_0045ce20(int polygon_index)
;
; Parameters:
; int              Stack[0x4]:4   polygon_index
; Local Variables:
; undefined4       Stack[-0xc8]:4  local_c8
; undefined1       Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined1       Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined1       Stack[-0x64]:1  local_64
; undefined1       Stack[-0x63]:1  local_63
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0 at 0045d908
;   shape_design.c_renderPolygonsByPart_FUN_004616a0 at 004616dc
;
; Referenced Globals:
;   float g_NormalScaleFactor = 65535
;   float g_PolygonPlaneDistanceScale = 256
;   double g_UVCoordinateFixedMultiplier = 65536
;   int g_EditorColorMode = 0x5
;   int g_ZBufferEnabled = 0x1
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e9915
;   undefined4 DAT_016e9916
;   undefined4 DAT_016e9917
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99b8
;   undefined4 DAT_016e99bc
;   ... and 14 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_3d.c_processPolygonColor_FUN_00403e30
;   engine_3d.c_renderPolygon_FUN_00403ba0
;   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0
;   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0
;   engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60
;   engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40
;   engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0
;   engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;   shape_design.c_calculatePolygonNormal_FUN_0045caa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ce20
        ;   Label: shape_design.c_renderSinglePolygon_FUN_0045ce20
    PUSH ESI                            ; 0045ce21
    PUSH EDI                            ; 0045ce22
    PUSH EBP                            ; 0045ce23
    MOV EBP,ESP                         ; 0045ce24
    SUB ESP,0xb8                        ; 0045ce26
    CMP dword ptr [0x01e528ac],0x0      ; 0045ce2c | int g_SelectionBlinkTimer
    JZ 0x0045ce4d                       ; 0045ce33 | LAB_0045ce4d
        ;   XREF to: 0045ce4d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045ce35
    CMP EAX,dword ptr [0x01e528b8]      ; 0045ce38 | int g_SelectedPolygonIndex
    JZ 0x0045ce4b                       ; 0045ce3e | LAB_0045ce4b
        ;   XREF to: 0045ce4b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045ce40
    CMP EAX,dword ptr [0x01e528bc]      ; 0045ce43 | int g_SecondaryPolygonIndex
    JNZ 0x0045ce4d                      ; 0045ce49 | LAB_0045ce4d
        ;   XREF to: 0045ce4d (CONDITIONAL_JUMP)
    JMP 0x0045ce4f                      ; 0045ce4b | LAB_0045ce4f
        ;   Label: LAB_0045ce4b
        ;   XREF to: 0045ce4f (UNCONDITIONAL_JUMP)
    JMP 0x0045ce54                      ; 0045ce4d | LAB_0045ce54
        ;   Label: LAB_0045ce4d
        ;   XREF to: 0045ce54 (UNCONDITIONAL_JUMP)
    JMP 0x0045d1c8                      ; 0045ce4f | LAB_0045d1c8
        ;   Label: LAB_0045ce4f
        ;   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x01e66158],0x0      ; 0045ce54 | int g_WireframeMode
        ;   Label: LAB_0045ce54
    JZ 0x0045ce66                       ; 0045ce5b | LAB_0045ce66
        ;   XREF to: 0045ce66 (CONDITIONAL_JUMP)
    CMP dword ptr [0x01e6614c],-0x1     ; 0045ce5d | int g_CurrentPartIndex
    JNZ 0x0045ce68                      ; 0045ce64 | LAB_0045ce68
        ;   XREF to: 0045ce68 (CONDITIONAL_JUMP)
    JMP 0x0045ce82                      ; 0045ce66 | LAB_0045ce82
        ;   Label: LAB_0045ce66
        ;   XREF to: 0045ce82 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045ce68
        ;   Label: LAB_0045ce68
    MOV EAX,dword ptr [EAX + 0x16e9a88] ; 0045ce6f | DAT_016e9a88
    CMP EAX,dword ptr [0x01e6614c]      ; 0045ce75 | int g_CurrentPartIndex
    JZ 0x0045ce82                       ; 0045ce7b | LAB_0045ce82
        ;   XREF to: 0045ce82 (CONDITIONAL_JUMP)
    JMP 0x0045d1c8                      ; 0045ce7d | LAB_0045d1c8
        ;   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045ce82
        ;   Label: LAB_0045ce82
    MOV EDX,0x16e9910                   ; 0045ce89 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0045ce8e
    PUSH EAX                            ; 0045ce90
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 0045ce91 | void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045ce96
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045ce99
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 0045cea0 | DAT_016e99b4
    MOV dword ptr [EBP + 0xffffff50],EAX ; 0045cea6
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045ceac
    FLD float ptr [EAX + 0x16e99b8]     ; 0045ceb3 | DAT_016e99b8
    FMUL float ptr [0x0061b3ea]         ; 0045ceb9 | float g_NormalScaleFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045cebf | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xffffff54]  ; 0045cec4
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045ceca
    FLD float ptr [EAX + 0x16e99bc]     ; 0045ced1 | DAT_016e99bc
    FMUL float ptr [0x0061b3ea]         ; 0045ced7 | float g_NormalScaleFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045cedd | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xffffff58]  ; 0045cee2
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045cee8
    FLD float ptr [EAX + 0x16e99c0]     ; 0045ceef | DAT_016e99c0
    FMUL float ptr [0x0061b3ea]         ; 0045cef5 | float g_NormalScaleFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045cefb | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xffffff5c]  ; 0045cf00
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045cf06
    FLD float ptr [EAX + 0x16e99c4]     ; 0045cf0d | DAT_016e99c4
    FMUL float ptr [0x0061b3ea]         ; 0045cf13 | float g_NormalScaleFactor
    FMUL float ptr [0x0061b3ee]         ; 0045cf19 | float g_PolygonPlaneDistanceScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045cf1f | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xffffff60]  ; 0045cf24
    MOV dword ptr [EBP + -0x8],0x0      ; 0045cf2a
    JMP 0x0045cf39                      ; 0045cf31 | LAB_0045cf39
        ;   XREF to: 0045cf39 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045cf33
        ;   Label: LAB_0045cf33
    INC dword ptr [EBP + -0x8]          ; 0045cf36
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045cf39
        ;   Label: LAB_0045cf39
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045cf40
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045cf43 | DAT_016e99b4
    JGE 0x0045cf6f                      ; 0045cf49 | LAB_0045cf6f
        ;   XREF to: 0045cf6f (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045cf4b
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045cf52
    SHL EAX,0x2                         ; 0045cf55
    ADD EAX,EDX                         ; 0045cf58
    MOV EDX,dword ptr [EBP + -0x8]      ; 0045cf5a
    SHL EDX,0x2                         ; 0045cf5d
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 0045cf60 | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + 0xffffff64],EAX ; 0045cf66
    JMP 0x0045cf33                      ; 0045cf6d | LAB_0045cf33
        ;   XREF to: 0045cf33 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045cf6f
        ;   Label: LAB_0045cf6f
    CMP byte ptr [EAX + 0x16e9914],0x0  ; 0045cf76 | DAT_016e9914
    JNZ 0x0045cf88                      ; 0045cf7d | LAB_0045cf88
        ;   XREF to: 0045cf88 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x1      ; 0045cf7f
    JMP 0x0045cf8f                      ; 0045cf86 | LAB_0045cf8f
        ;   XREF to: 0045cf8f (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x0      ; 0045cf88
        ;   Label: LAB_0045cf88
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045cf8f
        ;   Label: LAB_0045cf8f
    CMP dword ptr [EAX + 0x16e9910],0x2 ; 0045cf96 | SShapeEditorPolygon[20000] g_ModelPolygonData
    JNZ 0x0045cfb3                      ; 0045cf9d | LAB_0045cfb3
        ;   XREF to: 0045cfb3 (CONDITIONAL_JUMP)
    CMP dword ptr [0x01e528c8],0x0      ; 0045cf9f | int g_EditorTextureMode
    JZ 0x0045cfb1                       ; 0045cfa6 | LAB_0045cfb1
        ;   XREF to: 0045cfb1 (CONDITIONAL_JUMP)
    CMP dword ptr [0x01e528c8],0x1      ; 0045cfa8 | int g_EditorTextureMode
    JNZ 0x0045cfb3                      ; 0045cfaf | LAB_0045cfb3
        ;   XREF to: 0045cfb3 (CONDITIONAL_JUMP)
    JMP 0x0045cfb5                      ; 0045cfb1 | LAB_0045cfb5
        ;   Label: LAB_0045cfb1
        ;   XREF to: 0045cfb5 (UNCONDITIONAL_JUMP)
    JMP 0x0045cfbb                      ; 0045cfb3 | LAB_0045cfbb
        ;   Label: LAB_0045cfb3
        ;   XREF to: 0045cfbb (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0xc],0x0      ; 0045cfb5
        ;   Label: LAB_0045cfb5
    JZ 0x0045cfc0                       ; 0045cfb9 | LAB_0045cfc0
        ;   XREF to: 0045cfc0 (CONDITIONAL_JUMP)
    JMP 0x0045d0f7                      ; 0045cfbb | LAB_0045d0f7
        ;   Label: LAB_0045cfbb
        ;   XREF to: 0045d0f7 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x58],0x0     ; 0045cfc0
        ;   Label: LAB_0045cfc0
    IMUL ESI,dword ptr [EBP + 0x14],0x184 ; 0045cfc7
    MOV EDI,0x16e9910                   ; 0045cfce | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD ESI,EDI                         ; 0045cfd3
    ADD ESI,0x4                         ; 0045cfd5
    LEA EDI,[EBP + -0x54]               ; 0045cfd8
    PUSH EDI                            ; 0045cfdb
    MOV AL,byte ptr [ESI]               ; 0045cfdc | DAT_016e9914
        ;   Label: LAB_0045cfdc
    MOV byte ptr [EDI],AL               ; 0045cfde
    CMP AL,0x0                          ; 0045cfe0
    JZ 0x0045cff4                       ; 0045cfe2 | LAB_0045cff4
        ;   XREF to: 0045cff4 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0045cfe4 | DAT_016e9915
    ADD ESI,0x2                         ; 0045cfe7
    MOV byte ptr [EDI + 0x1],AL         ; 0045cfea
    ADD EDI,0x2                         ; 0045cfed
    CMP AL,0x0                          ; 0045cff0
    JNZ 0x0045cfdc                      ; 0045cff2 | LAB_0045cfdc
        ;   XREF to: 0045cfdc (CONDITIONAL_JUMP)
    POP EDI                             ; 0045cff4
        ;   Label: LAB_0045cff4
    LEA ESI,[EBP + -0x5c]               ; 0045cff5
    PUSH ESI                            ; 0045cff8
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 0045cff9 | SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045cffe
    MOV dword ptr [EBP + -0x8],0x0      ; 0045d001
    JMP 0x0045d010                      ; 0045d008 | LAB_0045d010
        ;   XREF to: 0045d010 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d00a
        ;   Label: LAB_0045d00a
    INC dword ptr [EBP + -0x8]          ; 0045d00d
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045d010
        ;   Label: LAB_0045d010
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d017
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045d01a | DAT_016e99b4
    JGE 0x0045d0af                      ; 0045d020 | LAB_0045d0af
        ;   XREF to: 0045d0af (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045d026
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d02d
    SHL EAX,0x2                         ; 0045d030
    ADD EAX,EDX                         ; 0045d033
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 0045d035 | DAT_016e99c8
    MOV dword ptr [EBP + -0x4],EAX      ; 0045d03b
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045d03e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d045
    SHL EAX,0x2                         ; 0045d048
    ADD EAX,EDX                         ; 0045d04b
    FLD float ptr [EAX + 0x16e9a08]     ; 0045d04d | DAT_016e9a08
    FMUL double ptr [0x0061b3f6]        ; 0045d053 | double g_UVCoordinateFixedMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d059 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xffffff48]  ; 0045d05e
    IMUL EDX,dword ptr [EBP + -0x4],0x30 ; 0045d064
    MOV EAX,dword ptr [EBP + 0xffffff48] ; 0045d068
    MOV dword ptr [EDX + 0x68802c],EAX  ; 0045d06e | g_RenderVertexBuffer[0].u
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045d074
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d07b
    SHL EAX,0x2                         ; 0045d07e
    ADD EAX,EDX                         ; 0045d081
    FLD float ptr [EAX + 0x16e9a48]     ; 0045d083 | DAT_016e9a48
    FMUL double ptr [0x0061b3f6]        ; 0045d089 | double g_UVCoordinateFixedMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d08f | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xffffff48]  ; 0045d094
    IMUL EDX,dword ptr [EBP + -0x4],0x30 ; 0045d09a
    MOV EAX,dword ptr [EBP + 0xffffff48] ; 0045d09e
    MOV dword ptr [EDX + 0x688030],EAX  ; 0045d0a4 | g_RenderVertexBuffer[0].v
    JMP 0x0045d00a                      ; 0045d0aa | LAB_0045d00a
        ;   XREF to: 0045d00a (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0066ee00],0x0      ; 0045d0af | int g_ZBufferEnabled
        ;   Label: LAB_0045d0af
    JZ 0x0045d0e3                       ; 0045d0b6 | LAB_0045d0e3
        ;   XREF to: 0045d0e3 (CONDITIONAL_JUMP)
    CMP dword ptr [0x01e528c0],0x0      ; 0045d0b8 | int g_GouraudShadingEnabled
    JZ 0x0045d0d2                       ; 0045d0bf | LAB_0045d0d2
        ;   XREF to: 0045d0d2 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff4c]          ; 0045d0c1
    PUSH EAX                            ; 0045d0c7
    CALL engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0 ; 0045d0c8 | SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00405ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d0cd
    JMP 0x0045d0e1                      ; 0045d0d0 | LAB_0045d0e1
        ;   XREF to: 0045d0e1 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff4c]          ; 0045d0d2
        ;   Label: LAB_0045d0d2
    PUSH EAX                            ; 0045d0d8
    CALL engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60 ; 0045d0d9 | SMRGLHeaderExtended * engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00404c60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d0de
    JMP 0x0045d0f2                      ; 0045d0e1 | LAB_0045d0f2
        ;   Label: LAB_0045d0e1
        ;   XREF to: 0045d0f2 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff4c]          ; 0045d0e3
        ;   Label: LAB_0045d0e3
    PUSH EAX                            ; 0045d0e9
    CALL engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40 ; 0045d0ea | SMRGLHeaderExtended * engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00404a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d0ef
    JMP 0x0045d1c8                      ; 0045d0f2 | LAB_0045d1c8
        ;   Label: LAB_0045d0f2
        ;   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0xc],0x0      ; 0045d0f7
        ;   Label: LAB_0045d0f7
    JZ 0x0045d142                       ; 0045d0fb | LAB_0045d142
        ;   XREF to: 0045d142 (CONDITIONAL_JUMP)
    MOV EAX,[0x0066edf8]                ; 0045d0fd | int g_EditorColorMode
    MOV dword ptr [EBP + -0x10],EAX     ; 0045d102
    NEG dword ptr [EBP + -0x10]         ; 0045d105
    LEA EAX,[EBP + -0x14]               ; 0045d108
    PUSH EAX                            ; 0045d10b
    CALL engine_3d.c_processPolygonColor_FUN_00403e30 ; 0045d10c | SMRGLHeaderExtended * engine_3d.c_processPolygonColor_FUN_00403e30(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00403e30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d111
    CMP dword ptr [0x0066ee00],0x0      ; 0045d114 | int g_ZBufferEnabled
    JZ 0x0045d12e                       ; 0045d11b | LAB_0045d12e
        ;   XREF to: 0045d12e (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff4c]          ; 0045d11d
    PUSH EAX                            ; 0045d123
    CALL engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 ; 0045d124 | SMRGLHeaderExtended * engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00404ae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d129
    JMP 0x0045d13d                      ; 0045d12c | LAB_0045d13d
        ;   XREF to: 0045d13d (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff4c]          ; 0045d12e
        ;   Label: LAB_0045d12e
    PUSH EAX                            ; 0045d134
    CALL engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 ; 0045d135 | SMRGLHeaderExtended * engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0(SMRGLHeaderPrimitive * primitive)
        ;   XREF to: 00403ad0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d13a
    JMP 0x0045d1c8                      ; 0045d13d | LAB_0045d1c8
        ;   Label: LAB_0045d13d
        ;   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x01e528c8],0x4      ; 0045d142 | int g_EditorTextureMode
        ;   Label: LAB_0045d142
    JZ 0x0045d1c8                       ; 0045d149 | LAB_0045d1c8
        ;   XREF to: 0045d1c8 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045d14f
    MOV EAX,dword ptr [EAX + 0x16e9a8c] ; 0045d156 | DAT_016e9a8c
    MOV dword ptr [EBP + -0x10],EAX     ; 0045d15c
    LEA EAX,[EBP + -0x14]               ; 0045d15f
    PUSH EAX                            ; 0045d162
    CALL engine_3d.c_processPolygonColor_FUN_00403e30 ; 0045d163 | SMRGLHeaderExtended * engine_3d.c_processPolygonColor_FUN_00403e30(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00403e30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d168
    CMP dword ptr [0x01e528c0],0x0      ; 0045d16b | int g_GouraudShadingEnabled
    JZ 0x0045d19f                       ; 0045d172 | LAB_0045d19f
        ;   XREF to: 0045d19f (CONDITIONAL_JUMP)
    CMP dword ptr [0x0066ee00],0x0      ; 0045d174 | int g_ZBufferEnabled
    JZ 0x0045d18e                       ; 0045d17b | LAB_0045d18e
        ;   XREF to: 0045d18e (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff4c]          ; 0045d17d
    PUSH EAX                            ; 0045d183
    CALL engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50 ; 0045d184 | SMRGLHeaderExtended * engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00404d50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d189
    JMP 0x0045d19d                      ; 0045d18c | LAB_0045d19d
        ;   XREF to: 0045d19d (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff4c]          ; 0045d18e
        ;   Label: LAB_0045d18e
    PUSH EAX                            ; 0045d194
    CALL engine_3d.c_renderPolygon_FUN_00403ba0 ; 0045d195 | SMRGLHeaderExtended * engine_3d.c_renderPolygon_FUN_00403ba0(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00403ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d19a
    JMP 0x0045d1c8                      ; 0045d19d | LAB_0045d1c8
        ;   Label: LAB_0045d19d
        ;   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0066ee00],0x0      ; 0045d19f | int g_ZBufferEnabled
        ;   Label: LAB_0045d19f
    JZ 0x0045d1b9                       ; 0045d1a6 | LAB_0045d1b9
        ;   XREF to: 0045d1b9 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff4c]          ; 0045d1a8
    PUSH EAX                            ; 0045d1ae
    CALL engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 ; 0045d1af | SMRGLHeaderExtended * engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00404ae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d1b4
    JMP 0x0045d1c8                      ; 0045d1b7 | LAB_0045d1c8
        ;   XREF to: 0045d1c8 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff4c]          ; 0045d1b9
        ;   Label: LAB_0045d1b9
    PUSH EAX                            ; 0045d1bf
    CALL engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 ; 0045d1c0 | SMRGLHeaderExtended * engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0(SMRGLHeaderPrimitive * primitive)
        ;   XREF to: 00403ad0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d1c5
    MOV ESP,EBP                         ; 0045d1c8
        ;   Label: LAB_0045d1c8
    POP EBP                             ; 0045d1ca
    POP EDI                             ; 0045d1cb
    POP ESI                             ; 0045d1cc
    POP EBX                             ; 0045d1cd
    RET                                 ; 0045d1ce

