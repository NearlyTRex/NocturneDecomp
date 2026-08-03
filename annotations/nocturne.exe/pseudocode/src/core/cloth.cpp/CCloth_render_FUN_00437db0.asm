; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_render_FUN_00437db0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CDeformableModelInstance * Stack[0x8]:4   deformable_model
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_cloth.cpp_CClothList_render_FUN_004385a0 at 004385f6
;   core_gabriela.cpp_CGabriella_renderOpaque_FUN_00498cc0 at 00498d05
;   core_mimic.cpp_CMimic_renderBackground_FUN_004d5b20 at 004d5b8c
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860 at 004d597a
;   core_svetlana.cpp_CSvetlana_renderOpaque_FUN_00542d20 at 00542e59
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_0054dac0 at 0054db41
;
; Referenced Globals:
;   double DOUBLE_0057aedd = 65535
;   undefined4 DAT_005ae704
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_0076934c
;   undefined4 DAT_00769350
;   undefined4 DAT_00769364
;   undefined4 DAT_00769368
;   undefined4 DAT_0076936c
;   undefined4 DAT_00769370
;   undefined4 DAT_00769374
;   undefined4 DAT_00769378
;   undefined4 DAT_00769394
;   undefined4 DAT_00769398
;   undefined4 DAT_007693dc
;   undefined4 DAT_01b4d738
;   ... and 1 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
;   core_set.cpp_FUN_0050ddd0
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437db0
        ;   Label: core_cloth.cpp_CCloth_render_FUN_00437db0
    PUSH ESI                            ; 00437db1
    PUSH EDI                            ; 00437db2
    PUSH EBP                            ; 00437db3
    SUB ESP,0x14                        ; 00437db4
    MOV EBP,dword ptr [ESP + 0x28]      ; 00437db7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00437dbb
    MOV EDX,dword ptr [EBP + 0x10c]     ; 00437dbf
    PUSH EDX                            ; 00437dc5
    MOV ECX,dword ptr [EBP + 0x104]     ; 00437dc6
    PUSH ECX                            ; 00437dcc
    MOV ESI,dword ptr [0x005be368]      ; 00437dcd | g_CDemonSet_PTR_005be368
    PUSH ESI                            ; 00437dd3 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 ; 00437dd4
        ;   XREF to: 0050c200 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 00437dd9
    PUSH 0x1                            ; 00437ddc
    MOV EDI,dword ptr [0x005ae704]      ; 00437dde | DAT_005ae704
    PUSH EDI                            ; 00437de4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 00437de5
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00437dea
    PUSH 0xffff                         ; 00437ded
    MOV EAX,[0x005ae704]                ; 00437df2 | DAT_005ae704
    PUSH EAX                            ; 00437df7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00437df8
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00437dfd
    MOV EDX,dword ptr [0x005ae704]      ; 00437e00 | DAT_005ae704
    PUSH EDX                            ; 00437e06 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00437e07
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    FLD float ptr [EBP + 0x37b48]       ; 00437e0c
    FMUL double ptr [0x0057aedd]        ; 00437e12 | DOUBLE_0057aedd
    ADD ESP,0x4                         ; 00437e18
    CALL crt_math.c_round_FUN_00563a30  ; 00437e1b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x4]         ; 00437e20
    MOV ECX,dword ptr [ESP + 0x4]       ; 00437e24
    CMP ECX,0x3e8                       ; 00437e28
    JL 0x00437fd4                       ; 00437e2e
        ;   XREF to: 00437fd4 (CONDITIONAL_JUMP)  ; LAB_00437fd4
    CMP ECX,0xf618                      ; 00437e34
    JL 0x00437fdc                       ; 00437e3a
        ;   XREF to: 00437fdc (CONDITIONAL_JUMP)  ; LAB_00437fdc
    LEA EAX,[EBP + 0x124]               ; 00437e40
        ;   Label: LAB_00437e40
    PUSH EAX                            ; 00437e46
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 00437e47
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic * texture)
    MOV EDX,dword ptr [EBP + 0x37b44]   ; 00437e4c
    ADD ESP,0x4                         ; 00437e52
    TEST EDX,EDX                        ; 00437e55
    JNZ 0x00438046                      ; 00437e57
        ;   XREF to: 00438046 (CONDITIONAL_JUMP)  ; LAB_00438046
    MOV EAX,dword ptr [EBP + 0x110]     ; 00437e5d
    PUSH EDX                            ; 00437e63
    MOV EDX,EAX                         ; 00437e64
    SAR EDX,0x1f                        ; 00437e66
    SUB EAX,EDX                         ; 00437e69
    SAR EAX,0x1                         ; 00437e6b
    PUSH 0x4                            ; 00437e6d
    MOV ESI,dword ptr [EBP + 0x10c]     ; 00437e6f
    PUSH ESI                            ; 00437e75
    MOV EDI,dword ptr [EBP + 0x114]     ; 00437e76
    PUSH EDI                            ; 00437e7c
    PUSH EAX                            ; 00437e7d
    MOV EAX,dword ptr [EBP + 0x104]     ; 00437e7e
    PUSH EAX                            ; 00437e84
    MOV EDX,dword ptr [0x005be368]      ; 00437e85 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 00437e8b | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 00437e8c
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 00437e91
    TEST EBX,EBX                        ; 00437e94
    JZ 0x00437ef0                       ; 00437e96
        ;   XREF to: 00437ef0 (CONDITIONAL_JUMP)  ; LAB_00437ef0
    MOV ECX,dword ptr [EBP + 0x39ce8]   ; 00437e98
    XOR EBX,EBX                         ; 00437e9e
    TEST ECX,ECX                        ; 00437ea0
    JLE 0x00437ef0                      ; 00437ea2
        ;   XREF to: 00437ef0 (CONDITIONAL_JUMP)  ; LAB_00437ef0
    MOV EAX,EBP                         ; 00437ea4
    MOV EDX,dword ptr [EAX + 0x39cec]   ; 00437ea6
        ;   Label: LAB_00437ea6
    IMUL EDX,EDX,0x30                   ; 00437eac
    MOV ECX,dword ptr [0x005ae704]      ; 00437eaf | DAT_005ae704
    MOV ESI,dword ptr [ECX]             ; 00437eb5 | DAT_01b4d738
    ADD ESI,EDX                         ; 00437eb7
    MOV dword ptr [ESP],ESI             ; 00437eb9
    MOV EDI,dword ptr [ESP]             ; 00437ebc
    MOV ESI,dword ptr [EAX + 0x3a64c]   ; 00437ebf
    MOV dword ptr [EDI + 0x20],ESI      ; 00437ec5
    MOV ESI,dword ptr [ECX]             ; 00437ec8 | DAT_01b4d738
    MOV EDI,dword ptr [EAX + 0x3a7dc]   ; 00437eca
    MOV dword ptr [EDX + ESI*0x1 + 0x24],EDI ; 00437ed0
    MOV ECX,dword ptr [ECX]             ; 00437ed4 | DAT_01b4d738
    ADD EDX,ECX                         ; 00437ed6
    MOV ECX,dword ptr [EAX + 0x3a96c]   ; 00437ed8
    MOV dword ptr [EDX + 0x28],ECX      ; 00437ede
    INC EBX                             ; 00437ee1
    MOV ESI,dword ptr [EBP + 0x39ce8]   ; 00437ee2
    ADD EAX,0x4                         ; 00437ee8
    CMP EBX,ESI                         ; 00437eeb
    JL 0x00437ea6                       ; 00437eed
        ;   XREF to: 00437ea6 (CONDITIONAL_JUMP)  ; LAB_00437ea6
    NOP                                 ; 00437eef
    CMP dword ptr [ESP + 0x4],0xf618    ; 00437ef0
        ;   Label: LAB_00437ef0
    JGE 0x00437ff0                      ; 00437ef8
        ;   XREF to: 00437ff0 (CONDITIONAL_JUMP)  ; LAB_00437ff0
    MOV EAX,dword ptr [EBP + 0x110]     ; 00437efe
    MOV EDX,EAX                         ; 00437f04
    SAR EDX,0x1f                        ; 00437f06
    SUB EAX,EDX                         ; 00437f09
    SAR EAX,0x1                         ; 00437f0b
    PUSH 0x267                          ; 00437f0d
    PUSH EAX                            ; 00437f12
    MOV ECX,dword ptr [EBP + 0x114]     ; 00437f13
    PUSH ECX                            ; 00437f19
    MOV EBX,dword ptr [0x005be368]      ; 00437f1a | g_CDemonSet_PTR_005be368
    PUSH EBX                            ; 00437f20 | g_CDemonSet_01e57284
    CALL core_set.cpp_FUN_0050ddd0      ; 00437f21
        ;   XREF to: 0050ddd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0050ddd0(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
        ;   Label: LAB_00437f21
    ADD ESP,0x10                        ; 00437f26
    MOV EAX,dword ptr [EBP + 0x110]     ; 00437f29
    MOV EDX,EAX                         ; 00437f2f
    SAR EDX,0x1f                        ; 00437f31
    SUB EAX,EDX                         ; 00437f34
    SAR EAX,0x1                         ; 00437f36
    PUSH 0x0                            ; 00437f38
    MOV EDX,EAX                         ; 00437f3a
    SHL EAX,0x3                         ; 00437f3c
    MOV ESI,dword ptr [EBP + 0x10c]     ; 00437f3f
    LEA ECX,[EDX + EAX*0x1]             ; 00437f45
    PUSH 0x4                            ; 00437f48
    SHL ECX,0x3                         ; 00437f4a
    MOV EAX,dword ptr [EBP + 0x114]     ; 00437f4d
    PUSH ESI                            ; 00437f53
    ADD EAX,ECX                         ; 00437f54
    PUSH EAX                            ; 00437f56
    PUSH EDX                            ; 00437f57
    MOV EDI,dword ptr [EBP + 0x104]     ; 00437f58
    PUSH EDI                            ; 00437f5e
    MOV EAX,[0x005be368]                ; 00437f5f | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 00437f64 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 00437f65
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 00437f6a
    CMP dword ptr [ESP + 0x4],0xf618    ; 00437f6d
    JGE 0x00438015                      ; 00437f75
        ;   XREF to: 00438015 (CONDITIONAL_JUMP)  ; LAB_00438015
    MOV EAX,dword ptr [EBP + 0x110]     ; 00437f7b
    MOV EDX,EAX                         ; 00437f81
    SAR EDX,0x1f                        ; 00437f83
    SUB EAX,EDX                         ; 00437f86
    SAR EAX,0x1                         ; 00437f88
    PUSH 0x267                          ; 00437f8a
    PUSH EAX                            ; 00437f8f
    MOV EDX,EAX                         ; 00437f90
    SHL EAX,0x3                         ; 00437f92
    ADD EDX,EAX                         ; 00437f95
    SHL EDX,0x3                         ; 00437f97
    MOV EAX,dword ptr [EBP + 0x114]     ; 00437f9a
    ADD EAX,EDX                         ; 00437fa0
    PUSH EAX                            ; 00437fa2
    MOV EBX,dword ptr [0x005be368]      ; 00437fa3 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_00437fa3
    PUSH EBX                            ; 00437fa9 | g_CDemonSet_01e57284
    CALL core_set.cpp_FUN_0050ddd0      ; 00437faa
        ;   XREF to: 0050ddd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0050ddd0(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
        ;   Label: LAB_00437faa
    ADD ESP,0x10                        ; 00437faf
    PUSH 0x0                            ; 00437fb2
    MOV ESI,dword ptr [0x005ae704]      ; 00437fb4 | DAT_005ae704
    PUSH ESI                            ; 00437fba | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 00437fbb
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00437fc0
    PUSH 0x1                            ; 00437fc3
    MOV EDI,dword ptr [0x005ae704]      ; 00437fc5 | DAT_005ae704
    PUSH EDI                            ; 00437fcb | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 00437fcc
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00437fd1
    ADD ESP,0x14                        ; 00437fd4
        ;   Label: LAB_00437fd4
    POP EBP                             ; 00437fd7
    POP EDI                             ; 00437fd8
    POP ESI                             ; 00437fd9
    POP EBX                             ; 00437fda
    RET                                 ; 00437fdb
    PUSH ECX                            ; 00437fdc
        ;   Label: LAB_00437fdc
    MOV EAX,[0x005ae704]                ; 00437fdd | DAT_005ae704
    PUSH EAX                            ; 00437fe2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00437fe3
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00437fe8
    JMP 0x00437e40                      ; 00437feb
        ;   XREF to: 00437e40 (UNCONDITIONAL_JUMP)  ; LAB_00437e40
    MOV EAX,dword ptr [EBP + 0x110]     ; 00437ff0
        ;   Label: LAB_00437ff0
    MOV EDX,EAX                         ; 00437ff6
    SAR EDX,0x1f                        ; 00437ff8
    SUB EAX,EDX                         ; 00437ffb
    SAR EAX,0x1                         ; 00437ffd
    PUSH -0x1                           ; 00437fff
    PUSH EAX                            ; 00438001
    MOV EAX,dword ptr [EBP + 0x114]     ; 00438002
    PUSH EAX                            ; 00438008
    MOV EDX,dword ptr [0x005be368]      ; 00438009 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 0043800f | g_CDemonSet_01e57284
    JMP 0x00437f21                      ; 00438010
        ;   XREF to: 00437f21 (UNCONDITIONAL_JUMP)  ; LAB_00437f21
    MOV EAX,dword ptr [EBP + 0x110]     ; 00438015
        ;   Label: LAB_00438015
    MOV EDX,EAX                         ; 0043801b
    SAR EDX,0x1f                        ; 0043801d
    SUB EAX,EDX                         ; 00438020
    SAR EAX,0x1                         ; 00438022
    PUSH -0x1                           ; 00438024
    PUSH EAX                            ; 00438026
    MOV EDX,EAX                         ; 00438027
    SHL EAX,0x3                         ; 00438029
    ADD EAX,EDX                         ; 0043802c
    SHL EAX,0x3                         ; 0043802e
    MOV EDX,dword ptr [EBP + 0x114]     ; 00438031
    ADD EAX,EDX                         ; 00438037
    PUSH EAX                            ; 00438039
    MOV ECX,dword ptr [0x005be368]      ; 0043803a | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 00438040 | g_CDemonSet_01e57284
    JMP 0x00437faa                      ; 00438041
        ;   XREF to: 00437faa (UNCONDITIONAL_JUMP)  ; LAB_00437faa
    PUSH 0x0                            ; 00438046
        ;   Label: LAB_00438046
    PUSH 0x4                            ; 00438048
    MOV ECX,dword ptr [EBP + 0x10c]     ; 0043804a
    PUSH ECX                            ; 00438050
    MOV ESI,dword ptr [EBP + 0x114]     ; 00438051
    PUSH ESI                            ; 00438057
    MOV EDI,dword ptr [EBP + 0x110]     ; 00438058
    PUSH EDI                            ; 0043805e
    MOV EAX,dword ptr [EBP + 0x104]     ; 0043805f
    PUSH EAX                            ; 00438065
    MOV EDX,dword ptr [0x005be368]      ; 00438066 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 0043806c | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 0043806d
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 00438072
    TEST EBX,EBX                        ; 00438075
    JZ 0x004380d0                       ; 00438077
        ;   XREF to: 004380d0 (CONDITIONAL_JUMP)  ; LAB_004380d0
    MOV ECX,dword ptr [EBP + 0x39ce8]   ; 00438079
    XOR EBX,EBX                         ; 0043807f
    TEST ECX,ECX                        ; 00438081
    JLE 0x004380d0                      ; 00438083
        ;   XREF to: 004380d0 (CONDITIONAL_JUMP)  ; LAB_004380d0
    MOV EAX,EBP                         ; 00438085
    MOV ECX,dword ptr [EAX + 0x39cec]   ; 00438087
        ;   Label: LAB_00438087
    IMUL ECX,ECX,0x30                   ; 0043808d
    MOV EDX,dword ptr [0x005ae704]      ; 00438090 | DAT_005ae704
    MOV EDI,dword ptr [EDX]             ; 00438096 | DAT_01b4d738
    MOV ESI,dword ptr [EAX + 0x3a64c]   ; 00438098
    MOV dword ptr [ECX + EDI*0x1 + 0x20],ESI ; 0043809e
    MOV ESI,dword ptr [EDX]             ; 004380a2 | DAT_01b4d738
    ADD ESI,ECX                         ; 004380a4
    MOV dword ptr [ESP],ESI             ; 004380a6
    MOV EDI,dword ptr [ESP]             ; 004380a9
    MOV ESI,dword ptr [EAX + 0x3a7dc]   ; 004380ac
    MOV dword ptr [EDI + 0x24],ESI      ; 004380b2
    MOV EDX,dword ptr [EDX]             ; 004380b5 | DAT_01b4d738
    ADD ECX,EDX                         ; 004380b7
    MOV EDX,dword ptr [EAX + 0x3a96c]   ; 004380b9
    MOV dword ptr [ECX + 0x28],EDX      ; 004380bf
    INC EBX                             ; 004380c2
    MOV ESI,dword ptr [EBP + 0x39ce8]   ; 004380c3
    ADD EAX,0x4                         ; 004380c9
    CMP EBX,ESI                         ; 004380cc
    JL 0x00438087                       ; 004380ce
        ;   XREF to: 00438087 (CONDITIONAL_JUMP)  ; LAB_00438087
    CMP dword ptr [ESP + 0x4],0xf618    ; 004380d0
        ;   Label: LAB_004380d0
    JGE 0x004381d4                      ; 004380d8
        ;   XREF to: 004381d4 (CONDITIONAL_JUMP)  ; LAB_004381d4
    PUSH 0x267                          ; 004380de
    MOV EBX,dword ptr [EBP + 0x110]     ; 004380e3
    PUSH EBX                            ; 004380e9
    MOV ESI,dword ptr [EBP + 0x114]     ; 004380ea
    PUSH ESI                            ; 004380f0
    MOV EDI,dword ptr [0x005be368]      ; 004380f1 | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 004380f7 | g_CDemonSet_01e57284
    CALL core_set.cpp_FUN_0050ddd0      ; 004380f8
        ;   XREF to: 0050ddd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0050ddd0(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
        ;   Label: LAB_004380f8
    ADD ESP,0x10                        ; 004380fd
    MOV EAX,dword ptr [EBP + 0x110]     ; 00438100
    MOV dword ptr [ESP + 0x8],EAX       ; 00438106
    CMP EAX,0x3e8                       ; 0043810a
    JLE 0x00438119                      ; 0043810f
        ;   XREF to: 00438119 (CONDITIONAL_JUMP)  ; LAB_00438119
    MOV dword ptr [ESP + 0x8],0x3e8     ; 00438111
    XOR ECX,ECX                         ; 00438119
        ;   Label: LAB_00438119
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043811b
    MOV dword ptr [ESP + 0xc],ECX       ; 0043811f
    TEST EBX,EBX                        ; 00438123
    JLE 0x0043818f                      ; 00438125
        ;   XREF to: 0043818f (CONDITIONAL_JUMP)  ; LAB_0043818f
    MOV dword ptr [ESP + 0x10],0x76934c ; 00438127 | DAT_0076934c
    IMUL EAX,dword ptr [ESP + 0xc],0x48 ; 0043812f
        ;   Label: LAB_0043812f
    MOV EDX,dword ptr [EBP + 0x114]     ; 00438134
    ADD EDX,EAX                         ; 0043813a
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043813c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00438140
    MOV dword ptr [ECX + 0x4],EAX       ; 00438143 | DAT_00769350 | DAT_00769398
    MOV ECX,dword ptr [EDX + 0x4]       ; 00438146
    XOR EAX,EAX                         ; 00438149
    TEST ECX,ECX                        ; 0043814b
    JLE 0x00438173                      ; 0043814d
        ;   XREF to: 00438173 (CONDITIONAL_JUMP)  ; LAB_00438173
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043814f
    MOV EBX,dword ptr [EDX + 0x4]       ; 00438153
        ;   Label: LAB_00438153
    SUB EBX,EAX                         ; 00438156
    DEC EBX                             ; 00438158
    IMUL EBX,EBX,0xc                    ; 00438159
    LEA ESI,[EDX + EBX*0x1]             ; 0043815c
    LEA EDI,[ECX + 0x18]                ; 0043815f | DAT_00769364
    LEA ESI,[ESI + 0x18]                ; 00438162
    MOVSD ES:EDI,ESI                    ; 00438165 | DAT_00769364 | DAT_00769370
    MOVSD ES:EDI,ESI                    ; 00438166 | DAT_00769368 | DAT_00769374
    MOVSD ES:EDI,ESI                    ; 00438167 | DAT_0076936c | DAT_00769378
    INC EAX                             ; 00438168
    MOV EBX,dword ptr [EDX + 0x4]       ; 00438169
    ADD ECX,0xc                         ; 0043816c
    CMP EAX,EBX                         ; 0043816f
    JL 0x00438153                       ; 00438171
        ;   XREF to: 00438153 (CONDITIONAL_JUMP)  ; LAB_00438153
    MOV ESI,dword ptr [ESP + 0x10]      ; 00438173
        ;   Label: LAB_00438173
    MOV EDI,dword ptr [ESP + 0xc]       ; 00438177
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043817b
    ADD ESI,0x48                        ; 0043817f
    INC EDI                             ; 00438182
    MOV dword ptr [ESP + 0x10],ESI      ; 00438183 | DAT_00769394 | DAT_007693dc
    MOV dword ptr [ESP + 0xc],EDI       ; 00438187
    CMP EDI,EDX                         ; 0043818b
    JL 0x0043812f                       ; 0043818d
        ;   XREF to: 0043812f (CONDITIONAL_JUMP)  ; LAB_0043812f
    PUSH 0x0                            ; 0043818f
        ;   Label: LAB_0043818f
    PUSH 0x4                            ; 00438191
    MOV ECX,dword ptr [EBP + 0x10c]     ; 00438193
    PUSH ECX                            ; 00438199
    PUSH 0x76934c                       ; 0043819a | DAT_0076934c
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043819f
    PUSH EBX                            ; 004381a3
    MOV ESI,dword ptr [EBP + 0x104]     ; 004381a4
    PUSH ESI                            ; 004381aa
    MOV EDI,dword ptr [0x005be368]      ; 004381ab | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 004381b1 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 004381b2
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 004381b7
    CMP dword ptr [ESP + 0x4],0xf618    ; 004381ba
    JGE 0x004381f0                      ; 004381c2
        ;   XREF to: 004381f0 (CONDITIONAL_JUMP)  ; LAB_004381f0
    PUSH 0x267                          ; 004381c4
    PUSH EBX                            ; 004381c9
    PUSH 0x76934c                       ; 004381ca | DAT_0076934c
    JMP 0x00437fa3                      ; 004381cf
        ;   XREF to: 00437fa3 (UNCONDITIONAL_JUMP)  ; LAB_00437fa3
    PUSH -0x1                           ; 004381d4
        ;   Label: LAB_004381d4
    MOV EAX,dword ptr [EBP + 0x110]     ; 004381d6
    PUSH EAX                            ; 004381dc
    MOV EDX,dword ptr [EBP + 0x114]     ; 004381dd
    PUSH EDX                            ; 004381e3
    MOV ECX,dword ptr [0x005be368]      ; 004381e4 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 004381ea | g_CDemonSet_01e57284
    JMP 0x004380f8                      ; 004381eb
        ;   XREF to: 004380f8 (UNCONDITIONAL_JUMP)  ; LAB_004380f8
    PUSH -0x1                           ; 004381f0
        ;   Label: LAB_004381f0
    PUSH EBX                            ; 004381f2
    PUSH 0x76934c                       ; 004381f3 | DAT_0076934c
    MOV EDX,dword ptr [0x005be368]      ; 004381f8 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 004381fe | g_CDemonSet_01e57284
    JMP 0x00437faa                      ; 004381ff
        ;   XREF to: 00437faa (UNCONDITIONAL_JUMP)  ; LAB_00437faa

