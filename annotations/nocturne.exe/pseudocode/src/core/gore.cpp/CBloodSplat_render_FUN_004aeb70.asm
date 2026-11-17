; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004aeb70(CBloodSplat *this_ptr,int expire_flag)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   expire_flag
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004afe80 at 004afecc
;
; Referenced Globals:
;   double DOUBLE_005850a8 = 8
;   double DOUBLE_005850b0 = 4
;   float FLOAT_0059e4d4 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   SMRGLTextureBasic[4] g_BloodSplatTextures
;   SMRGLTextureBasic[64] g_BloodSplatAnimTextures
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].r
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].g
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].b
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].r
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].g
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].b
;   undefined4 g_SRenderVertex_ARRAY_005c5014[2].r
;   undefined4 g_SRenderVertex_ARRAY_005c5014[2].g
;   undefined4 g_SRenderVertex_ARRAY_005c5014[2].b
;   ... and 8 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aeb70
        ;   Label: core_gore.cpp_CBloodSplat_render_FUN_004aeb70
    PUSH ESI                            ; 004aeb71
    PUSH EDI                            ; 004aeb72
    PUSH EBP                            ; 004aeb73
    SUB ESP,0x7c                        ; 004aeb74
    MOV ESI,dword ptr [ESP + 0x90]      ; 004aeb77
    FLD float ptr [ESI + 0x24]          ; 004aeb7e
    FMUL double ptr [0x005850a8]        ; 004aeb81 | DOUBLE_005850a8
    FADD double ptr [0x005850b0]        ; 004aeb87 | DOUBLE_005850b0
    CALL crt_math.c_round_FUN_00563a30  ; 004aeb8d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x78]        ; 004aeb92
    MOV EDX,dword ptr [ESP + 0x78]      ; 004aeb96
    TEST EDX,EDX                        ; 004aeb9a
    JL 0x004aee6f                       ; 004aeb9c
        ;   XREF to: 004aee6f (CONDITIONAL_JUMP)  ; LAB_004aee6f
    CMP EDX,0xf                         ; 004aeba2
    JLE 0x004aebb6                      ; 004aeba5
        ;   XREF to: 004aebb6 (CONDITIONAL_JUMP)  ; LAB_004aebb6
    MOV EBX,0xf                         ; 004aeba7
    MOV dword ptr [ESI],0x1             ; 004aebac
    MOV dword ptr [ESP + 0x78],EBX      ; 004aebb2
    LEA EAX,[ESI + 0x4]                 ; 004aebb6
        ;   Label: LAB_004aebb6
    PUSH EAX                            ; 004aebb9
    MOV EBP,dword ptr [0x005ae704]      ; 004aebba | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 004aebc0 | g_CDemonRenderer_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004aebc1
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,dword ptr [ESI + 0x10]      ; 004aebc6
    ADD ESP,0x8                         ; 004aebc9
    CMP EAX,0x1                         ; 004aebcc
    JNZ 0x004aee7a                      ; 004aebcf
        ;   XREF to: 004aee7a (CONDITIONAL_JUMP)  ; LAB_004aee7a
    XOR EAX,EAX                         ; 004aebd5
    MOV EDX,dword ptr [ESI + 0x28]      ; 004aebd7
    MOV [0x01c78c88],EAX                ; 004aebda | g_GoreQuadPrimitive.base.surface_normal.A
    MOV [0x01c78c8c],EAX                ; 004aebdf | g_GoreQuadPrimitive.base.surface_normal.B
    MOV [0x01c78c94],EAX                ; 004aebe4 | g_GoreQuadPrimitive.base.surface_normal.D
    LEA EAX,[EDX*0x4 + 0x0]             ; 004aebe9
    SUB EAX,EDX                         ; 004aebf0
    MOV EBX,0x5b974c                    ; 004aebf2 | g_BloodSplatAnimTextures
    SHL EAX,0x7                         ; 004aebf7
    MOV EDX,dword ptr [ESP + 0x78]      ; 004aebfa
    ADD EBX,EAX                         ; 004aebfe
    LEA EAX,[EDX*0x4 + 0x0]             ; 004aec00
    SUB EAX,EDX                         ; 004aec07
    SHL EAX,0x3                         ; 004aec09
    ADD EAX,EBX                         ; 004aec0c
    PUSH EAX                            ; 004aec0e
    MOV EDI,dword ptr [0x005ae704]      ; 004aec0f | g_CDemonRenderer_PTR_005ae704
    MOV ECX,0xffff                      ; 004aec15
    PUSH EDI                            ; 004aec1a | g_CDemonRenderer_01b4d738
    MOV dword ptr [0x01c78c90],ECX      ; 004aec1b | g_GoreQuadPrimitive.base.surface_normal.C
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004aec21
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004aec26
    PUSH 0x0                            ; 004aec29
    LEA EAX,[ESI + 0x18]                ; 004aec2b
    PUSH EAX                            ; 004aec2e
    MOV EBP,dword ptr [0x005ae704]      ; 004aec2f | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 004aec35 | g_CDemonRenderer_01b4d738
    LEA EBX,[ESP + 0x24]                ; 004aec36
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004aec3a
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    MOV EAX,0xbf000000                  ; 004aec3f
    MOV EDX,dword ptr [0x005ae704]      ; 004aec44 | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0xc                         ; 004aec4a
    XOR ECX,ECX                         ; 004aec4d
    MOV dword ptr [ESP + 0x48],EAX      ; 004aec4f
    MOV dword ptr [ESP + 0x4c],EAX      ; 004aec53
    LEA EAX,[ESP + 0x48]                ; 004aec57
    MOV dword ptr [ESP + 0x50],ECX      ; 004aec5b
    FLD float ptr [EAX]                 ; 004aec5f
    FMUL float ptr [0x0059e4d4]         ; 004aec61 | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004aec67
    FLD float ptr [EAX + 0x4]           ; 004aec69
    FMUL float ptr [0x0059e4d4]         ; 004aec6c | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004aec72
    FLD float ptr [EAX + 0x8]           ; 004aec75
    FMUL float ptr [0x0059e4d4]         ; 004aec78 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004aec7e
    LEA EAX,[ESP + 0x18]                ; 004aec81
    PUSH EAX                            ; 004aec85
    MOV EAX,dword ptr [EDX]             ; 004aec86 | g_CDemonRenderer_01b4d738
    PUSH EAX                            ; 004aec88
    MOV EDI,0xbf000000                  ; 004aec89
    XOR EBP,EBP                         ; 004aec8e
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004aec90
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3f000000                  ; 004aec95
    LEA EAX,[ESP + 0x50]                ; 004aec9a
    ADD ESP,0x8                         ; 004aec9e
    MOV EDX,dword ptr [0x005ae704]      ; 004aeca1 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x48],EBX      ; 004aeca7
    MOV dword ptr [ESP + 0x4c],EDI      ; 004aecab
    LEA EBX,[ESP + 0x3c]                ; 004aecaf
    MOV dword ptr [ESP + 0x50],EBP      ; 004aecb3
    FLD float ptr [EAX]                 ; 004aecb7
    FMUL float ptr [0x0059e4d4]         ; 004aecb9 | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004aecbf
    FLD float ptr [EAX + 0x4]           ; 004aecc1
    FMUL float ptr [0x0059e4d4]         ; 004aecc4 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004aecca
    FLD float ptr [EAX + 0x8]           ; 004aeccd
    FMUL float ptr [0x0059e4d4]         ; 004aecd0 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004aecd6
    LEA EAX,[ESP + 0x3c]                ; 004aecd9
    PUSH EAX                            ; 004aecdd
    MOV EAX,dword ptr [EDX]             ; 004aecde | g_CDemonRenderer_01b4d738
    ADD EAX,0x30                        ; 004aece0
    PUSH EAX                            ; 004aece3
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004aece4
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3f000000                  ; 004aece9
    LEA EBX,[ESP + 0x74]                ; 004aecee
    ADD ESP,0x8                         ; 004aecf2
    MOV EDX,dword ptr [0x005ae704]      ; 004aecf5 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x48],EAX      ; 004aecfb
    MOV dword ptr [ESP + 0x4c],EAX      ; 004aecff
    LEA EAX,[ESP + 0x48]                ; 004aed03
    MOV dword ptr [ESP + 0x50],EBP      ; 004aed07
    FLD float ptr [EAX]                 ; 004aed0b
    FMUL float ptr [0x0059e4d4]         ; 004aed0d | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004aed13
    FLD float ptr [EAX + 0x4]           ; 004aed15
    FMUL float ptr [0x0059e4d4]         ; 004aed18 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004aed1e
    FLD float ptr [EAX + 0x8]           ; 004aed21
    FMUL float ptr [0x0059e4d4]         ; 004aed24 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004aed2a
    LEA EAX,[ESP + 0x6c]                ; 004aed2d
    PUSH EAX                            ; 004aed31
    MOV EAX,dword ptr [EDX]             ; 004aed32 | g_CDemonRenderer_01b4d738
    ADD EAX,0x60                        ; 004aed34
    PUSH EAX                            ; 004aed37
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004aed38
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x8]                 ; 004aed3d
    LEA EAX,[ESP + 0x50]                ; 004aed41
    ADD ESP,0x8                         ; 004aed45
    MOV EDX,dword ptr [0x005ae704]      ; 004aed48 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x48],EDI      ; 004aed4e
    MOV EDI,0x3f000000                  ; 004aed52
    MOV dword ptr [ESP + 0x50],EBP      ; 004aed57
    MOV dword ptr [ESP + 0x4c],EDI      ; 004aed5b
    FLD float ptr [EAX]                 ; 004aed5f
    FMUL float ptr [0x0059e4d4]         ; 004aed61 | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004aed67
    FLD float ptr [EAX + 0x4]           ; 004aed69
    FMUL float ptr [0x0059e4d4]         ; 004aed6c | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004aed72
    FLD float ptr [EAX + 0x8]           ; 004aed75
    FMUL float ptr [0x0059e4d4]         ; 004aed78 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004aed7e
    MOV EAX,ESP                         ; 004aed81
    PUSH EAX                            ; 004aed83
        ;   Label: LAB_004aed83
    MOV EAX,dword ptr [EDX]             ; 004aed84 | g_CDemonRenderer_01b4d738
    ADD EAX,0x90                        ; 004aed86
    PUSH EAX                            ; 004aed8b
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004aed8c
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004aed91
    MOV ECX,0x5c5034                    ; 004aed94 | g_SRenderVertex_ARRAY_005c5014[0].r
    MOV EBX,0x5c5038                    ; 004aed99 | g_SRenderVertex_ARRAY_005c5014[0].g
    MOV EAX,dword ptr [ESI + 0x14]      ; 004aed9e
    MOV EDX,0x5c503c                    ; 004aeda1 | g_SRenderVertex_ARRAY_005c5014[0].b
    CMP EAX,0x1                         ; 004aeda6
    JNC 0x004af045                      ; 004aeda9
        ;   XREF to: 004af045 (CONDITIONAL_JUMP)  ; LAB_004af045
    MOV dword ptr [ECX],0x2000          ; 004aedaf | g_SRenderVertex_ARRAY_005c5014[0].r
        ;   Label: LAB_004aedaf
    MOV dword ptr [EBX],0x0             ; 004aedb5 | g_SRenderVertex_ARRAY_005c5014[0].g
    MOV dword ptr [EDX],0x0             ; 004aedbb | g_SRenderVertex_ARRAY_005c5014[0].b
    MOV EBX,0x5c5064                    ; 004aedc1 | g_SRenderVertex_ARRAY_005c5014[1].r
        ;   Label: LAB_004aedc1
    MOV EDX,0x5c5068                    ; 004aedc6 | g_SRenderVertex_ARRAY_005c5014[1].g
    MOV EAX,dword ptr [ESI + 0x14]      ; 004aedcb
    MOV ECX,0x5c506c                    ; 004aedce | g_SRenderVertex_ARRAY_005c5014[1].b
    CMP EAX,0x1                         ; 004aedd3
    JNC 0x004af085                      ; 004aedd6
        ;   XREF to: 004af085 (CONDITIONAL_JUMP)  ; LAB_004af085
    MOV dword ptr [EBX],0x2000          ; 004aeddc | g_SRenderVertex_ARRAY_005c5014[1].r
        ;   Label: LAB_004aeddc
    MOV dword ptr [EDX],0x0             ; 004aede2 | g_SRenderVertex_ARRAY_005c5014[1].g
    MOV dword ptr [ECX],0x0             ; 004aede8 | g_SRenderVertex_ARRAY_005c5014[1].b
    MOV EDX,0x5c5094                    ; 004aedee | g_SRenderVertex_ARRAY_005c5014[2].r
        ;   Label: LAB_004aedee
    MOV ECX,0x5c5098                    ; 004aedf3 | g_SRenderVertex_ARRAY_005c5014[2].g
    MOV EAX,dword ptr [ESI + 0x14]      ; 004aedf8
    MOV EBX,0x5c509c                    ; 004aedfb | g_SRenderVertex_ARRAY_005c5014[2].b
    CMP EAX,0x1                         ; 004aee00
    JNC 0x004af0c5                      ; 004aee03
        ;   XREF to: 004af0c5 (CONDITIONAL_JUMP)  ; LAB_004af0c5
    MOV dword ptr [EDX],0x2000          ; 004aee09 | g_SRenderVertex_ARRAY_005c5014[2].r
        ;   Label: LAB_004aee09
    MOV dword ptr [ECX],0x0             ; 004aee0f | g_SRenderVertex_ARRAY_005c5014[2].g
    MOV dword ptr [EBX],0x0             ; 004aee15 | g_SRenderVertex_ARRAY_005c5014[2].b
    MOV EBX,0x5c50c4                    ; 004aee1b | g_SRenderVertex_ARRAY_005c5014[3].r
        ;   Label: LAB_004aee1b
    MOV EDX,0x5c50c8                    ; 004aee20 | g_SRenderVertex_ARRAY_005c5014[3].g
    MOV EAX,dword ptr [ESI + 0x14]      ; 004aee25
    MOV ECX,0x5c50cc                    ; 004aee28 | g_SRenderVertex_ARRAY_005c5014[3].b
    CMP EAX,0x1                         ; 004aee2d
    JNC 0x004af105                      ; 004aee30
        ;   XREF to: 004af105 (CONDITIONAL_JUMP)  ; LAB_004af105
    MOV dword ptr [EBX],0x2000          ; 004aee36 | g_SRenderVertex_ARRAY_005c5014[3].r
        ;   Label: LAB_004aee36
    MOV dword ptr [EDX],0x0             ; 004aee3c | g_SRenderVertex_ARRAY_005c5014[3].g
    MOV dword ptr [ECX],0x0             ; 004aee42 | g_SRenderVertex_ARRAY_005c5014[3].b
    PUSH 0x1c78c80                      ; 004aee48
        ;   Label: LAB_004aee48
    MOV EAX,[0x005ae704]                ; 004aee4d | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 004aee52 | g_CDemonRenderer_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 004aee53
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDX,dword ptr [ESI + 0x10]      ; 004aee58
    ADD ESP,0x8                         ; 004aee5b
    CMP EDX,0x1                         ; 004aee5e
    JZ 0x004af111                       ; 004aee61
        ;   XREF to: 004af111 (CONDITIONAL_JUMP)  ; LAB_004af111
    ADD ESP,0x7c                        ; 004aee67
    POP EBP                             ; 004aee6a
    POP EDI                             ; 004aee6b
    POP ESI                             ; 004aee6c
    POP EBX                             ; 004aee6d
    RET                                 ; 004aee6e
    XOR EDI,EDI                         ; 004aee6f
        ;   Label: LAB_004aee6f
    MOV dword ptr [ESP + 0x78],EDI      ; 004aee71
    JMP 0x004aebb6                      ; 004aee75
        ;   XREF to: 004aebb6 (UNCONDITIONAL_JUMP)  ; LAB_004aebb6
    MOV dword ptr [ESI],0x1             ; 004aee7a
        ;   Label: LAB_004aee7a
    XOR EDX,EDX                         ; 004aee80
    MOV dword ptr [0x01c78c88],EDX      ; 004aee82 | g_GoreQuadPrimitive.base.surface_normal.A
    MOV dword ptr [0x01c78c90],EDX      ; 004aee88 | g_GoreQuadPrimitive.base.surface_normal.C
    MOV dword ptr [0x01c78c94],EDX      ; 004aee8e | g_GoreQuadPrimitive.base.surface_normal.D
    MOV EDX,dword ptr [ESI + 0x28]      ; 004aee94
    LEA EAX,[EDX*0x4 + 0x0]             ; 004aee97
    SUB EAX,EDX                         ; 004aee9e
    SHL EAX,0x3                         ; 004aeea0
    ADD EAX,0x5b96ec                    ; 004aeea3 | g_BloodSplatTextures
    PUSH EAX                            ; 004aeea8
    MOV EBP,dword ptr [0x005ae704]      ; 004aeea9 | g_CDemonRenderer_PTR_005ae704
    MOV ECX,0xffff                      ; 004aeeaf
    PUSH EBP                            ; 004aeeb4 | g_CDemonRenderer_01b4d738
    MOV dword ptr [0x01c78c8c],ECX      ; 004aeeb5 | g_GoreQuadPrimitive.base.surface_normal.B
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004aeebb
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,0xbf000000                  ; 004aeec0
    ADD ESP,0x8                         ; 004aeec5
    XOR EBX,EBX                         ; 004aeec8
    MOV dword ptr [ESP + 0x24],EAX      ; 004aeeca
    MOV dword ptr [ESP + 0x28],EBX      ; 004aeece
    MOV dword ptr [ESP + 0x2c],EAX      ; 004aeed2
    LEA EBX,[ESP + 0x30]                ; 004aeed6
    LEA EAX,[ESP + 0x24]                ; 004aeeda
    MOV EDX,dword ptr [0x005ae704]      ; 004aeede | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 004aeee4
    FMUL float ptr [0x0059e4d4]         ; 004aeee6 | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004aeeec
    FLD float ptr [EAX + 0x4]           ; 004aeeee
    FMUL float ptr [0x0059e4d4]         ; 004aeef1 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004aeef7
    FLD float ptr [EAX + 0x8]           ; 004aeefa
    FMUL float ptr [0x0059e4d4]         ; 004aeefd | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004aef03
    LEA EAX,[ESP + 0x30]                ; 004aef06
    PUSH EAX                            ; 004aef0a
    MOV EAX,dword ptr [EDX]             ; 004aef0b | g_CDemonRenderer_01b4d738
    PUSH EAX                            ; 004aef0d
    XOR EDI,EDI                         ; 004aef0e
    MOV EBP,0xbf000000                  ; 004aef10
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004aef15
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3f000000                  ; 004aef1a
    LEA EAX,[ESP + 0x2c]                ; 004aef1f
    ADD ESP,0x8                         ; 004aef23
    MOV EDX,dword ptr [0x005ae704]      ; 004aef26 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x24],EBX      ; 004aef2c
    MOV dword ptr [ESP + 0x28],EDI      ; 004aef30
    LEA EBX,[ESP + 0x54]                ; 004aef34
    MOV dword ptr [ESP + 0x2c],EBP      ; 004aef38
    FLD float ptr [EAX]                 ; 004aef3c
    FMUL float ptr [0x0059e4d4]         ; 004aef3e | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004aef44
    FLD float ptr [EAX + 0x4]           ; 004aef46
    FMUL float ptr [0x0059e4d4]         ; 004aef49 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004aef4f
    FLD float ptr [EAX + 0x8]           ; 004aef52
    FMUL float ptr [0x0059e4d4]         ; 004aef55 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004aef5b
    LEA EAX,[ESP + 0x54]                ; 004aef5e
    PUSH EAX                            ; 004aef62
    MOV EAX,dword ptr [EDX]             ; 004aef63 | g_CDemonRenderer_01b4d738
    ADD EAX,0x30                        ; 004aef65
    PUSH EAX                            ; 004aef68
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004aef69
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3f000000                  ; 004aef6e
    LEA EBX,[ESP + 0x68]                ; 004aef73
    ADD ESP,0x8                         ; 004aef77
    XOR EDX,EDX                         ; 004aef7a
    MOV dword ptr [ESP + 0x24],EAX      ; 004aef7c
    MOV dword ptr [ESP + 0x28],EDX      ; 004aef80
    MOV dword ptr [ESP + 0x2c],EAX      ; 004aef84
    LEA EAX,[ESP + 0x24]                ; 004aef88
    MOV EDX,dword ptr [0x005ae704]      ; 004aef8c | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 004aef92
    FMUL float ptr [0x0059e4d4]         ; 004aef94 | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004aef9a
    FLD float ptr [EAX + 0x4]           ; 004aef9c
    FMUL float ptr [0x0059e4d4]         ; 004aef9f | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004aefa5
    FLD float ptr [EAX + 0x8]           ; 004aefa8
    FMUL float ptr [0x0059e4d4]         ; 004aefab | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004aefb1
    LEA EAX,[ESP + 0x60]                ; 004aefb4
    PUSH EAX                            ; 004aefb8
    MOV EAX,dword ptr [EDX]             ; 004aefb9 | g_CDemonRenderer_01b4d738
    ADD EAX,0x60                        ; 004aefbb
    PUSH EAX                            ; 004aefbe
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004aefbf
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x14]                ; 004aefc4
    LEA EAX,[ESP + 0x2c]                ; 004aefc8
    ADD ESP,0x8                         ; 004aefcc
    MOV EDX,dword ptr [0x005ae704]      ; 004aefcf | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x24],EBP      ; 004aefd5
    MOV EBP,0x3f000000                  ; 004aefd9
    MOV dword ptr [ESP + 0x28],EDI      ; 004aefde
    MOV dword ptr [ESP + 0x2c],EBP      ; 004aefe2
    FLD float ptr [EAX]                 ; 004aefe6
    FMUL float ptr [0x0059e4d4]         ; 004aefe8 | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004aefee
    FLD float ptr [EAX + 0x4]           ; 004aeff0
    FMUL float ptr [0x0059e4d4]         ; 004aeff3 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004aeff9
    FLD float ptr [EAX + 0x8]           ; 004aeffc
    FMUL float ptr [0x0059e4d4]         ; 004aefff | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004af005
    LEA EAX,[ESP + 0xc]                 ; 004af008
    JMP 0x004aed83                      ; 004af00c
        ;   XREF to: 004aed83 (UNCONDITIONAL_JUMP)  ; LAB_004aed83
    MOV EDI,0x7f80                      ; 004af011
        ;   Label: LAB_004af011
    XOR EBX,EBX                         ; 004af016
    MOV dword ptr [0x005c5038],EDI      ; 004af018 | g_SRenderVertex_ARRAY_005c5014[0].g
    MOV dword ptr [0x005c503c],EBX      ; 004af01e | g_SRenderVertex_ARRAY_005c5014[0].b
    MOV dword ptr [0x005c5034],EBX      ; 004af024 | g_SRenderVertex_ARRAY_005c5014[0].r
    JMP 0x004aedc1                      ; 004af02a
        ;   XREF to: 004aedc1 (UNCONDITIONAL_JUMP)  ; LAB_004aedc1
    XOR EAX,EAX                         ; 004af02f
        ;   Label: LAB_004af02f
    MOV [0x005c5038],EAX                ; 004af031 | g_SRenderVertex_ARRAY_005c5014[0].g
    MOV [0x005c503c],EAX                ; 004af036 | g_SRenderVertex_ARRAY_005c5014[0].b
    MOV [0x005c5034],EAX                ; 004af03b | g_SRenderVertex_ARRAY_005c5014[0].r
    JMP 0x004aedc1                      ; 004af040
        ;   XREF to: 004aedc1 (UNCONDITIONAL_JUMP)  ; LAB_004aedc1
    JBE 0x004af011                      ; 004af045
        ;   XREF to: 004af011 (CONDITIONAL_JUMP)  ; LAB_004af011
        ;   Label: LAB_004af045
    CMP EAX,0x2                         ; 004af047
    JZ 0x004af02f                       ; 004af04a
        ;   XREF to: 004af02f (CONDITIONAL_JUMP)  ; LAB_004af02f
    JMP 0x004aedaf                      ; 004af04c
        ;   XREF to: 004aedaf (UNCONDITIONAL_JUMP)  ; LAB_004aedaf
    MOV EDI,0x7f80                      ; 004af051
        ;   Label: LAB_004af051
    XOR EBX,EBX                         ; 004af056
    MOV dword ptr [0x005c5068],EDI      ; 004af058 | g_SRenderVertex_ARRAY_005c5014[1].g
    MOV dword ptr [0x005c506c],EBX      ; 004af05e | g_SRenderVertex_ARRAY_005c5014[1].b
    MOV dword ptr [0x005c5064],EBX      ; 004af064 | g_SRenderVertex_ARRAY_005c5014[1].r
    JMP 0x004aedee                      ; 004af06a
        ;   XREF to: 004aedee (UNCONDITIONAL_JUMP)  ; LAB_004aedee
    XOR EAX,EAX                         ; 004af06f
        ;   Label: LAB_004af06f
    MOV [0x005c5068],EAX                ; 004af071 | g_SRenderVertex_ARRAY_005c5014[1].g
    MOV [0x005c506c],EAX                ; 004af076 | g_SRenderVertex_ARRAY_005c5014[1].b
    MOV [0x005c5064],EAX                ; 004af07b | g_SRenderVertex_ARRAY_005c5014[1].r
    JMP 0x004aedee                      ; 004af080
        ;   XREF to: 004aedee (UNCONDITIONAL_JUMP)  ; LAB_004aedee
    JBE 0x004af051                      ; 004af085
        ;   XREF to: 004af051 (CONDITIONAL_JUMP)  ; LAB_004af051
        ;   Label: LAB_004af085
    CMP EAX,0x2                         ; 004af087
    JZ 0x004af06f                       ; 004af08a
        ;   XREF to: 004af06f (CONDITIONAL_JUMP)  ; LAB_004af06f
    JMP 0x004aeddc                      ; 004af08c
        ;   XREF to: 004aeddc (UNCONDITIONAL_JUMP)  ; LAB_004aeddc
    MOV EDI,0x7f80                      ; 004af091
        ;   Label: LAB_004af091
    XOR EBX,EBX                         ; 004af096
    MOV dword ptr [0x005c5098],EDI      ; 004af098 | g_SRenderVertex_ARRAY_005c5014[2].g
    MOV dword ptr [0x005c509c],EBX      ; 004af09e | g_SRenderVertex_ARRAY_005c5014[2].b
    MOV dword ptr [0x005c5094],EBX      ; 004af0a4 | g_SRenderVertex_ARRAY_005c5014[2].r
    JMP 0x004aee1b                      ; 004af0aa
        ;   XREF to: 004aee1b (UNCONDITIONAL_JUMP)  ; LAB_004aee1b
    XOR EAX,EAX                         ; 004af0af
        ;   Label: LAB_004af0af
    MOV [0x005c5098],EAX                ; 004af0b1 | g_SRenderVertex_ARRAY_005c5014[2].g
    MOV [0x005c509c],EAX                ; 004af0b6 | g_SRenderVertex_ARRAY_005c5014[2].b
    MOV [0x005c5094],EAX                ; 004af0bb | g_SRenderVertex_ARRAY_005c5014[2].r
    JMP 0x004aee1b                      ; 004af0c0
        ;   XREF to: 004aee1b (UNCONDITIONAL_JUMP)  ; LAB_004aee1b
    JBE 0x004af091                      ; 004af0c5
        ;   XREF to: 004af091 (CONDITIONAL_JUMP)  ; LAB_004af091
        ;   Label: LAB_004af0c5
    CMP EAX,0x2                         ; 004af0c7
    JZ 0x004af0af                       ; 004af0ca
        ;   XREF to: 004af0af (CONDITIONAL_JUMP)  ; LAB_004af0af
    JMP 0x004aee09                      ; 004af0cc
        ;   XREF to: 004aee09 (UNCONDITIONAL_JUMP)  ; LAB_004aee09
    MOV EDI,0x7f80                      ; 004af0d1
        ;   Label: LAB_004af0d1
    XOR EBX,EBX                         ; 004af0d6
    MOV dword ptr [0x005c50c8],EDI      ; 004af0d8 | g_SRenderVertex_ARRAY_005c5014[3].g
    MOV dword ptr [0x005c50cc],EBX      ; 004af0de | g_SRenderVertex_ARRAY_005c5014[3].b
    MOV dword ptr [0x005c50c4],EBX      ; 004af0e4 | g_SRenderVertex_ARRAY_005c5014[3].r
    JMP 0x004aee48                      ; 004af0ea
        ;   XREF to: 004aee48 (UNCONDITIONAL_JUMP)  ; LAB_004aee48
    XOR EAX,EAX                         ; 004af0ef
        ;   Label: LAB_004af0ef
    MOV [0x005c50c8],EAX                ; 004af0f1 | g_SRenderVertex_ARRAY_005c5014[3].g
    MOV [0x005c50cc],EAX                ; 004af0f6 | g_SRenderVertex_ARRAY_005c5014[3].b
    MOV [0x005c50c4],EAX                ; 004af0fb | g_SRenderVertex_ARRAY_005c5014[3].r
    JMP 0x004aee48                      ; 004af100
        ;   XREF to: 004aee48 (UNCONDITIONAL_JUMP)  ; LAB_004aee48
    JBE 0x004af0d1                      ; 004af105
        ;   XREF to: 004af0d1 (CONDITIONAL_JUMP)  ; LAB_004af0d1
        ;   Label: LAB_004af105
    CMP EAX,0x2                         ; 004af107
    JZ 0x004af0ef                       ; 004af10a
        ;   XREF to: 004af0ef (CONDITIONAL_JUMP)  ; LAB_004af0ef
    JMP 0x004aee36                      ; 004af10c
        ;   XREF to: 004aee36 (UNCONDITIONAL_JUMP)  ; LAB_004aee36
    MOV ECX,dword ptr [0x005ae704]      ; 004af111 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_004af111
    PUSH ECX                            ; 004af117 | g_CDemonRenderer_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004af118
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004af11d
    ADD ESP,0x7c                        ; 004af120
    POP EBP                             ; 004af123
    POP EDI                             ; 004af124
    POP ESI                             ; 004af125
    POP EBX                             ; 004af126
    RET                                 ; 004af127

