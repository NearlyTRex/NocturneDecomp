; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_rasterizePolygonCustom_FUN_00562de0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; int              Stack[0x8]:4   vertex_count
; CustomScanlineFunc * Stack[0xc]:4   scanline_renderer
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80 at 00460efb
;
; Referenced Globals:
;   void* switchdataD_00562db8 = 00562e57
;   undefined4 DAT_006b0280
;   SProjectionParams g_Projection
;   undefined4 g_Projection.neg_half_height_fixed
;   undefined4 g_Projection.center_x_fixed
;   undefined4 g_Projection.center_y_fixed
;   int g_VertexPreprocessMode
;   undefined4 DAT_01e52ef8
;   undefined4 DAT_02de497c
;   undefined4 DAT_02de4980
;   undefined4 DAT_02de49c8
;   undefined4 DAT_02de4e00
;   undefined4 DAT_02de4e04
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   engine_prim.c_normalizeTextureCoords_FUN_004f98e0
;   engine_prim.c_prepareDepthBuffer_FUN_004f9870
;   engine_prim.c_replaceWWithDepth_FUN_004f99d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562de0
        ;   Label: engine_3d.c_rasterizePolygonCustom_FUN_00562de0
    PUSH ESI                            ; 00562de1
    PUSH EDI                            ; 00562de2
    PUSH EBP                            ; 00562de3
    SUB ESP,0x10                        ; 00562de4
    MOV ESI,dword ptr [0x02de497c]      ; 00562de7 | DAT_02de497c
    MOV EDX,dword ptr [ESP + 0x28]      ; 00562ded
    MOV ECX,dword ptr [ESP + 0x24]      ; 00562df1
    XOR EDI,EDI                         ; 00562df5
    TEST EDX,EDX                        ; 00562df7
    JLE 0x00562e1f                      ; 00562df9
        ;   XREF to: 00562e1f (CONDITIONAL_JUMP)  ; LAB_00562e1f
    MOV AH,byte ptr [ECX + 0x13]        ; 00562dfb
        ;   Label: LAB_00562dfb
    MOV dword ptr [0x02de497c],ESI      ; 00562dfe | DAT_02de497c
    TEST AH,0x80                        ; 00562e04
    JNZ 0x00562fe2                      ; 00562e07
        ;   XREF to: 00562fe2 (CONDITIONAL_JUMP)  ; LAB_00562fe2
    MOV ESI,dword ptr [0x02de497c]      ; 00562e0d | DAT_02de497c
        ;   Label: LAB_00562e0d
    MOV EBX,dword ptr [ESP + 0x28]      ; 00562e13
    INC EDI                             ; 00562e17
    ADD ECX,0x30                        ; 00562e18
    CMP EDI,EBX                         ; 00562e1b
    JL 0x00562dfb                       ; 00562e1d
        ;   XREF to: 00562dfb (CONDITIONAL_JUMP)  ; LAB_00562dfb
    MOV EDI,dword ptr [0x006b0280]      ; 00562e1f | DAT_006b0280
        ;   Label: LAB_00562e1f
    MOV dword ptr [0x02de497c],ESI      ; 00562e25 | DAT_02de497c
    TEST EDI,EDI                        ; 00562e2b
    JNZ 0x0056302e                      ; 00562e2d
        ;   XREF to: 0056302e (CONDITIONAL_JUMP)  ; LAB_0056302e
    MOV EDX,dword ptr [0x01e52ef8]      ; 00562e33 | DAT_01e52ef8
        ;   Label: LAB_00562e33
    MOV ESI,dword ptr [0x02de497c]      ; 00562e39 | DAT_02de497c
    INC EDX                             ; 00562e3f
    MOV EAX,[0x01c039a4]                ; 00562e40 | g_VertexPreprocessMode
    MOV dword ptr [0x01e52ef8],EDX      ; 00562e45 | DAT_01e52ef8
    CMP EAX,0x6                         ; 00562e4b
    JA 0x00562e57                       ; 00562e4e
        ;   XREF to: 00562e57 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x562db8]  ; 00562e50 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDI,0x4b0                       ; 00562e57
        ;   Label: caseD_0
    MOV EDX,dword ptr [ESP + 0x28]      ; 00562e5c
    XOR EBP,EBP                         ; 00562e60
    XOR ESI,ESI                         ; 00562e62
    MOV dword ptr [0x02de4e04],EBP      ; 00562e64 | DAT_02de4e04
    MOV dword ptr [ESP + 0x8],EBP       ; 00562e6a
    MOV dword ptr [0x02de4e00],EDI      ; 00562e6e | DAT_02de4e00
    TEST EDX,EDX                        ; 00562e74
    JLE 0x00562ece                      ; 00562e76
        ;   XREF to: 00562ece (CONDITIONAL_JUMP)  ; LAB_00562ece
    MOV EAX,dword ptr [ESP + 0x8]       ; 00562e78
        ;   Label: LAB_00562e78
    MOV EDI,dword ptr [ESP + 0x28]      ; 00562e7c
    INC EAX                             ; 00562e80
    CMP EAX,EDI                         ; 00562e81
    JL 0x00562e87                       ; 00562e83
        ;   XREF to: 00562e87 (CONDITIONAL_JUMP)  ; LAB_00562e87
    XOR EAX,EAX                         ; 00562e85
    IMUL EAX,EAX,0x30                   ; 00562e87
        ;   Label: LAB_00562e87
    MOV EDX,dword ptr [ESP + 0x24]      ; 00562e8a
    MOV EBP,dword ptr [ESP + 0x8]       ; 00562e8e
    ADD EDX,EAX                         ; 00562e92
    IMUL EAX,EBP,0x30                   ; 00562e94
    MOV dword ptr [ESP],EDX             ; 00562e97
    MOV EDX,dword ptr [ESP + 0x24]      ; 00562e9a
    ADD EDX,EAX                         ; 00562e9e
    MOV EBP,dword ptr [ESP]             ; 00562ea0
    MOV dword ptr [ESP + 0x4],EDX       ; 00562ea3
    MOV EDI,EDX                         ; 00562ea7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00562ea9
    MOV EDX,dword ptr [EDX + 0x14]      ; 00562eac
    SAR EAX,0x10                        ; 00562eaf
    SAR EDX,0x10                        ; 00562eb2
    CMP EDX,EAX                         ; 00562eb5
    JNZ 0x005630d4                      ; 00562eb7
        ;   XREF to: 005630d4 (CONDITIONAL_JUMP)  ; LAB_005630d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 00562ebd
        ;   Label: LAB_00562ebd
    INC ECX                             ; 00562ec1
    MOV EBX,dword ptr [ESP + 0x28]      ; 00562ec2
    MOV dword ptr [ESP + 0x8],ECX       ; 00562ec6
    CMP ECX,EBX                         ; 00562eca
    JL 0x00562e78                       ; 00562ecc
        ;   XREF to: 00562e78 (CONDITIONAL_JUMP)  ; LAB_00562e78
    MOV EAX,0x2de4980                   ; 00562ece
        ;   Label: LAB_00562ece
    MOV EDI,dword ptr [0x02de4e00]      ; 00562ed3 | DAT_02de4e00
    XOR EDX,EDX                         ; 00562ed9
    TEST ESI,ESI                        ; 00562edb
    JLE 0x005631ed                      ; 00562edd
        ;   XREF to: 005631ed (CONDITIONAL_JUMP)  ; LAB_005631ed
    CMP EDI,dword ptr [EAX]             ; 00562ee3 | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_00562ee3
    JNZ 0x005631e1                      ; 00562ee5
        ;   XREF to: 005631e1 (CONDITIONAL_JUMP)  ; LAB_005631e1
    TEST EAX,EAX                        ; 00562eeb
    JZ 0x005631e1                       ; 00562eed
        ;   XREF to: 005631e1 (CONDITIONAL_JUMP)  ; LAB_005631e1
    MOV EBP,EAX                         ; 00562ef3
        ;   Label: LAB_00562ef3
    MOV dword ptr [0x02de497c],ESI      ; 00562ef5 | DAT_02de497c
    TEST EAX,EAX                        ; 00562efb
    JZ 0x00562fd4                       ; 00562efd
        ;   XREF to: 00562fd4 (CONDITIONAL_JUMP)  ; LAB_00562fd4
    MOV EBX,dword ptr [0x02de4e00]      ; 00562f03 | DAT_02de4e00
    MOV ECX,EAX                         ; 00562f09
    XOR EDX,EDX                         ; 00562f0b
    MOV EAX,0x2de4980                   ; 00562f0d
    TEST ESI,ESI                        ; 00562f12
    JLE 0x00563200                      ; 00562f14
        ;   XREF to: 00563200 (CONDITIONAL_JUMP)  ; LAB_00563200
    CMP EBX,dword ptr [EAX]             ; 00562f1a | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_00562f1a
    JNZ 0x005631f4                      ; 00562f1c
        ;   XREF to: 005631f4 (CONDITIONAL_JUMP)  ; LAB_005631f4
    CMP EAX,ECX                         ; 00562f22
    JZ 0x005631f4                       ; 00562f24
        ;   XREF to: 005631f4 (CONDITIONAL_JUMP)  ; LAB_005631f4
    MOV EDI,EAX                         ; 00562f2a
        ;   Label: LAB_00562f2a
    MOV dword ptr [0x02de497c],ESI      ; 00562f2c | DAT_02de497c
    TEST EAX,EAX                        ; 00562f32
    JZ 0x00562fd4                       ; 00562f34
        ;   XREF to: 00562fd4 (CONDITIONAL_JUMP)  ; LAB_00562fd4
    MOV EAX,[0x02de4e00]                ; 00562f3a | DAT_02de4e00
    MOV dword ptr [ESP + 0xc],EAX       ; 00562f3f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00562f43
        ;   Label: LAB_00562f43
    CMP EAX,dword ptr [EBP + 0x4]       ; 00562f47
    JL 0x00562f88                       ; 00562f4a
        ;   XREF to: 00562f88 (CONDITIONAL_JUMP)  ; LAB_00562f88
    MOV ESI,dword ptr [0x02de497c]      ; 00562f4c | DAT_02de497c
    MOV EBX,EAX                         ; 00562f52
    MOV ECX,EDI                         ; 00562f54
    MOV dword ptr [EBP],0xffffffff      ; 00562f56
    XOR EDX,EDX                         ; 00562f5d
    MOV EAX,0x2de4980                   ; 00562f5f
    TEST ESI,ESI                        ; 00562f64
    JLE 0x00563213                      ; 00562f66
        ;   XREF to: 00563213 (CONDITIONAL_JUMP)  ; LAB_00563213
    CMP EBX,dword ptr [EAX]             ; 00562f6c | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_00562f6c
    JNZ 0x00563207                      ; 00562f6e
        ;   XREF to: 00563207 (CONDITIONAL_JUMP)  ; LAB_00563207
    CMP EAX,ECX                         ; 00562f74
    JZ 0x00563207                       ; 00562f76
        ;   XREF to: 00563207 (CONDITIONAL_JUMP)  ; LAB_00563207
    MOV EBP,EAX                         ; 00562f7c
        ;   Label: LAB_00562f7c
    MOV dword ptr [0x02de497c],ESI      ; 00562f7e | DAT_02de497c
    TEST EAX,EAX                        ; 00562f84
    JZ 0x00562fd4                       ; 00562f86
        ;   XREF to: 00562fd4 (CONDITIONAL_JUMP)  ; LAB_00562fd4
    MOV EAX,dword ptr [ESP + 0xc]       ; 00562f88
        ;   Label: LAB_00562f88
    CMP EAX,dword ptr [EDI + 0x4]       ; 00562f8c
    JL 0x0056322d                       ; 00562f8f
        ;   XREF to: 0056322d (CONDITIONAL_JUMP)  ; LAB_0056322d
    MOV ESI,dword ptr [0x02de497c]      ; 00562f95 | DAT_02de497c
    MOV ECX,EAX                         ; 00562f9b
    MOV EBX,EBP                         ; 00562f9d
    MOV dword ptr [EDI],0xffffffff      ; 00562f9f
    XOR EDX,EDX                         ; 00562fa5
    MOV EAX,0x2de4980                   ; 00562fa7
    TEST ESI,ESI                        ; 00562fac
    JLE 0x00563226                      ; 00562fae
        ;   XREF to: 00563226 (CONDITIONAL_JUMP)  ; LAB_00563226
    CMP ECX,dword ptr [EAX]             ; 00562fb4 | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_00562fb4
    JNZ 0x0056321a                      ; 00562fb6
        ;   XREF to: 0056321a (CONDITIONAL_JUMP)  ; LAB_0056321a
    CMP EAX,EBX                         ; 00562fbc
    JZ 0x0056321a                       ; 00562fbe
        ;   XREF to: 0056321a (CONDITIONAL_JUMP)  ; LAB_0056321a
    MOV EDI,EAX                         ; 00562fc4
        ;   Label: LAB_00562fc4
    MOV dword ptr [0x02de497c],ESI      ; 00562fc6 | DAT_02de497c
    TEST EAX,EAX                        ; 00562fcc
    JNZ 0x0056322d                      ; 00562fce
        ;   XREF to: 0056322d (CONDITIONAL_JUMP)  ; LAB_0056322d
    MOV ESI,dword ptr [0x02de497c]      ; 00562fd4 | DAT_02de497c
        ;   Label: LAB_00562fd4
    ADD ESP,0x10                        ; 00562fda
    POP EBP                             ; 00562fdd
    POP EDI                             ; 00562fde
    POP ESI                             ; 00562fdf
    POP EBX                             ; 00562fe0
    RET                                 ; 00562fe1
    MOV EAX,0x7fffffff                  ; 00562fe2
        ;   Label: LAB_00562fe2
    MOV EDX,EAX                         ; 00562fe7
    MOV EBX,dword ptr [ECX + 0x8]       ; 00562fe9
    SAR EDX,0x1f                        ; 00562fec
    IDIV EBX                            ; 00562fef
    MOV dword ptr [ECX + 0xc],EAX       ; 00562ff1
    MOV EDX,dword ptr [0x01c00c48]      ; 00562ff4 | g_Projection
    MOV EBX,dword ptr [ECX + 0x8]       ; 00562ffa
    MOV EAX,dword ptr [ECX]             ; 00562ffd
    IMUL EDX                            ; 00562fff
    IDIV EBX                            ; 00563001
    MOV EDX,dword ptr [0x01c00c50]      ; 00563003 | g_Projection.center_x_fixed
    ADD EAX,EDX                         ; 00563009
    MOV EBX,dword ptr [ECX + 0x8]       ; 0056300b
    MOV dword ptr [ECX + 0x10],EAX      ; 0056300e
    MOV EDX,dword ptr [0x01c00c4c]      ; 00563011 | g_Projection.neg_half_height_fixed
    MOV EAX,dword ptr [ECX + 0x4]       ; 00563017
    IMUL EDX                            ; 0056301a
    IDIV EBX                            ; 0056301c
    MOV EDX,dword ptr [0x01c00c54]      ; 0056301e | g_Projection.center_y_fixed
    ADD EAX,EDX                         ; 00563024
    MOV dword ptr [ECX + 0x14],EAX      ; 00563026
    JMP 0x00562e0d                      ; 00563029
        ;   XREF to: 00562e0d (UNCONDITIONAL_JUMP)  ; LAB_00562e0d
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056302e
        ;   Label: LAB_0056302e
    ADD EAX,0x60                        ; 00563032
    PUSH EAX                            ; 00563035
    MOV EAX,dword ptr [ESP + 0x28]      ; 00563036
    ADD EAX,0x30                        ; 0056303a
    PUSH EAX                            ; 0056303d
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0056303e
    PUSH EBP                            ; 00563042
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 00563043
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00563048
    TEST EAX,EAX                        ; 0056304b
    JNZ 0x00562e33                      ; 0056304d
        ;   XREF to: 00562e33 (CONDITIONAL_JUMP)  ; LAB_00562e33
    MOV ESI,dword ptr [0x02de497c]      ; 00563053 | DAT_02de497c
    ADD ESP,0x10                        ; 00563059
    POP EBP                             ; 0056305c
    POP EDI                             ; 0056305d
    POP ESI                             ; 0056305e
    POP EBX                             ; 0056305f
    RET                                 ; 00563060
    MOV EBX,dword ptr [ESP + 0x28]      ; 00563061
        ;   Label: caseD_1
    PUSH EBX                            ; 00563065
    MOV ESI,dword ptr [ESP + 0x28]      ; 00563066
    PUSH ESI                            ; 0056306a
    CALL engine_prim.c_prepareDepthBuffer_FUN_004f9870 ; 0056306b
        ;   XREF to: 004f9870 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_004f9870(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00563070
    JMP 0x00562e57                      ; 00563073
        ;   XREF to: 00562e57 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x28]      ; 00563078
        ;   Label: caseD_2
    PUSH EDX                            ; 0056307c
    MOV ECX,dword ptr [ESP + 0x28]      ; 0056307d
    PUSH ECX                            ; 00563081
    CALL engine_prim.c_normalizeTextureCoords_FUN_004f98e0 ; 00563082
        ;   XREF to: 004f98e0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_004f98e0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00563087
    JMP 0x00562e57                      ; 0056308a
        ;   XREF to: 00562e57 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x28]      ; 0056308f
        ;   Label: caseD_3
    PUSH EBP                            ; 00563093
    MOV EAX,dword ptr [ESP + 0x28]      ; 00563094
    PUSH EAX                            ; 00563098
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960 ; 00563099
        ;   XREF to: 004f9960 (UNCONDITIONAL_CALL)  ; void engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0056309e
    JMP 0x00562e57                      ; 005630a1
        ;   XREF to: 00562e57 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x28]      ; 005630a6
        ;   Label: caseD_5
    PUSH ESI                            ; 005630aa
    MOV EDI,dword ptr [ESP + 0x28]      ; 005630ab
    PUSH EDI                            ; 005630af
    CALL engine_prim.c_normalizeTextureCoords_FUN_004f98e0 ; 005630b0
        ;   XREF to: 004f98e0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_004f98e0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005630b5
    JMP 0x00562e57                      ; 005630b8
        ;   XREF to: 00562e57 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ECX,dword ptr [ESP + 0x28]      ; 005630bd
        ;   Label: caseD_6
    PUSH ECX                            ; 005630c1
    MOV EBX,dword ptr [ESP + 0x28]      ; 005630c2
    PUSH EBX                            ; 005630c6
    CALL engine_prim.c_replaceWWithDepth_FUN_004f99d0 ; 005630c7
        ;   XREF to: 004f99d0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_004f99d0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005630cc
    JMP 0x00562e57                      ; 005630cf
        ;   XREF to: 00562e57 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ECX,EDI                         ; 005630d4
        ;   Label: LAB_005630d4
    MOV ECX,dword ptr [ECX + 0x14]      ; 005630d6
    CMP ECX,dword ptr [EBP + 0x14]      ; 005630d9
    JLE 0x005630ea                      ; 005630dc
        ;   XREF to: 005630ea (CONDITIONAL_JUMP)  ; LAB_005630ea
    MOV EDI,EBP                         ; 005630de
    MOV ECX,EDX                         ; 005630e0
    MOV EBP,dword ptr [ESP + 0x4]       ; 005630e2
    MOV EDX,EAX                         ; 005630e6
    MOV EAX,ECX                         ; 005630e8
    IMUL ECX,ESI,0x48                   ; 005630ea
        ;   Label: LAB_005630ea
    ADD ECX,0x2de4980                   ; 005630ed
    MOV dword ptr [ECX],EDX             ; 005630f3 | DAT_02de4980
    MOV EBX,dword ptr [0x02de4e00]      ; 005630f5 | DAT_02de4e00
    MOV dword ptr [ECX + 0x4],EAX       ; 005630fb
    CMP EDX,EBX                         ; 005630fe
    JGE 0x00563108                      ; 00563100
        ;   XREF to: 00563108 (CONDITIONAL_JUMP)  ; LAB_00563108
    MOV dword ptr [0x02de4e00],EDX      ; 00563102 | DAT_02de4e00
    CMP EAX,dword ptr [0x02de4e04]      ; 00563108 | DAT_02de4e04
        ;   Label: LAB_00563108
    JLE 0x00563115                      ; 0056310e
        ;   XREF to: 00563115 (CONDITIONAL_JUMP)  ; LAB_00563115
    MOV [0x02de4e04],EAX                ; 00563110 | DAT_02de4e04
    MOV EAX,dword ptr [EDI + 0x10]      ; 00563115
        ;   Label: LAB_00563115
    MOV dword ptr [ECX + 0x8],EAX       ; 00563118
    MOV EAX,dword ptr [EDI + 0x8]       ; 0056311b
    SHL EAX,0x8                         ; 0056311e
    MOV dword ptr [ECX + 0x28],EAX      ; 00563121
    MOV EAX,dword ptr [EDI + 0x20]      ; 00563124
    MOV dword ptr [ECX + 0x10],EAX      ; 00563127
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056312a
    SUB EBX,dword ptr [EDI + 0x14]      ; 0056312d
    CMP EBX,0x10000                     ; 00563130
    JNC 0x005631d1                      ; 00563136
        ;   XREF to: 005631d1 (CONDITIONAL_JUMP)  ; LAB_005631d1
    XOR EBX,EBX                         ; 0056313c
    MOV EAX,dword ptr [EBP + 0x10]      ; 0056313e
        ;   Label: LAB_0056313e
    MOV EDX,dword ptr [EDI + 0x10]      ; 00563141
    SUB EAX,EDX                         ; 00563144
    MOV EDX,EAX                         ; 00563146
    MOV EAX,EBX                         ; 00563148
    MOV dword ptr [0x02de497c],ESI      ; 0056314a | DAT_02de497c
    IMUL EDX                            ; 00563150
    SHRD EAX,EDX,0x10                   ; 00563152
    MOV dword ptr [ECX + 0xc],EAX       ; 00563156
    MOV EAX,dword ptr [EBP + 0x8]       ; 00563159
    MOV EDX,dword ptr [EDI + 0x8]       ; 0056315c
    SUB EAX,EDX                         ; 0056315f
    MOV EDX,EAX                         ; 00563161
    SHL EDX,0x8                         ; 00563163
    MOV EAX,EBX                         ; 00563166
    IMUL EDX                            ; 00563168
    SHRD EAX,EDX,0x10                   ; 0056316a
    MOV dword ptr [ECX + 0x2c],EAX      ; 0056316e
    MOV EDX,dword ptr [EBP + 0x20]      ; 00563171
    MOV EBP,dword ptr [EDI + 0x20]      ; 00563174
    MOV EAX,EBX                         ; 00563177
    SUB EDX,EBP                         ; 00563179
    IMUL EDX                            ; 0056317b
    SHRD EAX,EDX,0x10                   ; 0056317d
    MOV dword ptr [ECX + 0x14],EAX      ; 00563181
    MOV EBX,dword ptr [EDI + 0x14]      ; 00563184
    AND EBX,0xffff                      ; 00563187
    XOR BX,0xffff                       ; 0056318d
    MOV EDX,dword ptr [ECX + 0xc]       ; 00563191
    MOV EAX,EBX                         ; 00563194
    IMUL EDX                            ; 00563196
    SHRD EAX,EDX,0x10                   ; 00563198
    ADD dword ptr [ECX + 0x8],EAX       ; 0056319c
    MOV EAX,EBX                         ; 0056319f
    MOV EDX,dword ptr [ECX + 0x2c]      ; 005631a1
    IMUL EDX                            ; 005631a4
    SHRD EAX,EDX,0x10                   ; 005631a6
    MOV EDI,dword ptr [ECX + 0x28]      ; 005631aa
    MOV EDX,dword ptr [ECX + 0x14]      ; 005631ad
    ADD EDI,EAX                         ; 005631b0
    MOV EAX,EBX                         ; 005631b2
    MOV dword ptr [ECX + 0x28],EDI      ; 005631b4
    IMUL EDX                            ; 005631b7
    SHRD EAX,EDX,0x10                   ; 005631b9
    MOV EBP,dword ptr [ECX + 0x10]      ; 005631bd
    MOV ESI,dword ptr [0x02de497c]      ; 005631c0 | DAT_02de497c
    ADD EBP,EAX                         ; 005631c6
    INC ESI                             ; 005631c8
    MOV dword ptr [ECX + 0x10],EBP      ; 005631c9
    JMP 0x00562ebd                      ; 005631cc
        ;   XREF to: 00562ebd (UNCONDITIONAL_JUMP)  ; LAB_00562ebd
    MOV EAX,0xffffffff                  ; 005631d1
        ;   Label: LAB_005631d1
    XOR EDX,EDX                         ; 005631d6
    DIV EBX                             ; 005631d8
    MOV EBX,EAX                         ; 005631da
    JMP 0x0056313e                      ; 005631dc
        ;   XREF to: 0056313e (UNCONDITIONAL_JUMP)  ; LAB_0056313e
    INC EDX                             ; 005631e1
        ;   Label: LAB_005631e1
    ADD EAX,0x48                        ; 005631e2
    CMP EDX,ESI                         ; 005631e5
    JL 0x00562ee3                       ; 005631e7
        ;   XREF to: 00562ee3 (CONDITIONAL_JUMP)  ; LAB_00562ee3
    XOR EAX,EAX                         ; 005631ed
        ;   Label: LAB_005631ed
    JMP 0x00562ef3                      ; 005631ef
        ;   XREF to: 00562ef3 (UNCONDITIONAL_JUMP)  ; LAB_00562ef3
    INC EDX                             ; 005631f4
        ;   Label: LAB_005631f4
    ADD EAX,0x48                        ; 005631f5
    CMP EDX,ESI                         ; 005631f8
    JL 0x00562f1a                       ; 005631fa
        ;   XREF to: 00562f1a (CONDITIONAL_JUMP)  ; LAB_00562f1a
    XOR EAX,EAX                         ; 00563200
        ;   Label: LAB_00563200
    JMP 0x00562f2a                      ; 00563202
        ;   XREF to: 00562f2a (UNCONDITIONAL_JUMP)  ; LAB_00562f2a
    INC EDX                             ; 00563207
        ;   Label: LAB_00563207
    ADD EAX,0x48                        ; 00563208
    CMP EDX,ESI                         ; 0056320b
    JL 0x00562f6c                       ; 0056320d
        ;   XREF to: 00562f6c (CONDITIONAL_JUMP)  ; LAB_00562f6c
    XOR EAX,EAX                         ; 00563213
        ;   Label: LAB_00563213
    JMP 0x00562f7c                      ; 00563215
        ;   XREF to: 00562f7c (UNCONDITIONAL_JUMP)  ; LAB_00562f7c
    INC EDX                             ; 0056321a
        ;   Label: LAB_0056321a
    ADD EAX,0x48                        ; 0056321b | DAT_02de49c8
    CMP EDX,ESI                         ; 0056321e
    JL 0x00562fb4                       ; 00563220
        ;   XREF to: 00562fb4 (CONDITIONAL_JUMP)  ; LAB_00562fb4
    XOR EAX,EAX                         ; 00563226
        ;   Label: LAB_00563226
    JMP 0x00562fc4                      ; 00563228
        ;   XREF to: 00562fc4 (UNCONDITIONAL_JUMP)  ; LAB_00562fc4
    PUSH EDI                            ; 0056322d
        ;   Label: LAB_0056322d
    PUSH EBP                            ; 0056322e | DAT_02de4980
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056322f
    PUSH EAX                            ; 00563233
    CALL dword ptr [ESP + 0x38]         ; 00563234
    MOV EAX,dword ptr [EBP + 0xc]       ; 00563238
    ADD dword ptr [EBP + 0x8],EAX       ; 0056323b
    MOV EBX,dword ptr [EBP + 0x28]      ; 0056323e
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00563241
    MOV ECX,dword ptr [EBP + 0x10]      ; 00563244
    ADD EBX,EAX                         ; 00563247
    MOV EAX,dword ptr [EBP + 0x14]      ; 00563249
    MOV dword ptr [EBP + 0x28],EBX      ; 0056324c
    ADD ECX,EAX                         ; 0056324f
    MOV dword ptr [EBP + 0x10],ECX      ; 00563251
    ADD ESP,0xc                         ; 00563254
    MOV EAX,dword ptr [EDI + 0xc]       ; 00563257
    MOV EBX,dword ptr [EDI + 0x8]       ; 0056325a
    MOV EDX,dword ptr [EDI + 0x28]      ; 0056325d
    MOV ECX,dword ptr [EDI + 0x10]      ; 00563260
    ADD EBX,EAX                         ; 00563263
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00563265
    MOV dword ptr [EDI + 0x8],EBX       ; 00563268
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056326b
    ADD EDX,EAX                         ; 0056326f
    INC EBX                             ; 00563271
    MOV EAX,dword ptr [EDI + 0x14]      ; 00563272
    MOV dword ptr [EDI + 0x28],EDX      ; 00563275
    ADD ECX,EAX                         ; 00563278
    MOV dword ptr [ESP + 0xc],EBX       ; 0056327a
    MOV dword ptr [EDI + 0x10],ECX      ; 0056327e
    JMP 0x00562f43                      ; 00563281
        ;   XREF to: 00562f43 (UNCONDITIONAL_JUMP)  ; LAB_00562f43

