; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_render_FUN_00482f50(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
; Local Variables:
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
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970 at 0048a9ac
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a757
;
; Referenced Globals:
;   float FLOAT_0059d1f8 = 256
;   float FLOAT_0059d1fc = 65536
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5044
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   undefined4 DAT_005c5074
;   undefined4 DAT_005c508c
;   undefined4 DAT_005c5090
;   undefined4 DAT_005c50a4
;   undefined4 DAT_005c50bc
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760
;   core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482f50
        ;   Label: core_fire.cpp_CBulletHole_render_FUN_00482f50
    PUSH ESI                            ; 00482f51
    PUSH EDI                            ; 00482f52
    PUSH EBP                            ; 00482f53
    SUB ESP,0x60                        ; 00482f54
    MOV ESI,dword ptr [ESP + 0x74]      ; 00482f57
    MOV EDX,dword ptr [ESI + 0x10]      ; 00482f5b
    LEA EBX,[ESI + 0x14]                ; 00482f5e
    TEST EDX,EDX                        ; 00482f61
    JZ 0x004831c5                       ; 00482f63
        ;   XREF to: 004831c5 (CONDITIONAL_JUMP)  ; LAB_004831c5
    PUSH EDX                            ; 00482f69
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00482f6a
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 00482f6f
    LEA EAX,[ESI + 0x24]                ; 00482f72
    PUSH EAX                            ; 00482f75
    PUSH EBX                            ; 00482f76
    MOV EBX,dword ptr [0x005ae704]      ; 00482f77 | DAT_005ae704
    PUSH EBX                            ; 00482f7d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00482f7e
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
        ;   Label: LAB_00482f7e
    ADD ESP,0xc                         ; 00482f83
    MOV EAX,dword ptr [ESI + 0x20]      ; 00482f86
    MOV EBX,dword ptr [ESI + 0x20]      ; 00482f89
    XOR ECX,ECX                         ; 00482f8c
    AND EAX,0x1                         ; 00482f8e
    AND EBX,0x2                         ; 00482f91
    SHL EAX,0x17                        ; 00482f94
    MOV dword ptr [ESP + 0x20],ECX      ; 00482f97
    LEA EDX,[EAX + 0x80000]             ; 00482f9b
    SHL EBX,0x16                        ; 00482fa1
    MOV dword ptr [0x005c502c],EDX      ; 00482fa4 | DAT_005c502c
    ADD EAX,0x780000                    ; 00482faa | DAT_00780000
    LEA EDX,[EBX + 0x780000]            ; 00482faf | DAT_00780000
    MOV [0x005c505c],EAX                ; 00482fb5 | DAT_005c505c
    MOV [0x005c508c],EAX                ; 00482fba | DAT_005c508c
    MOV EAX,[0x005c502c]                ; 00482fbf | DAT_005c502c
    MOV dword ptr [0x005c5030],EDX      ; 00482fc4 | DAT_005c5030
    ADD EBX,0x80000                     ; 00482fca
    MOV dword ptr [0x005c5060],EDX      ; 00482fd0 | DAT_005c5060
    MOV dword ptr [0x005c5090],EBX      ; 00482fd6 | DAT_005c5090
    MOV [0x005c50bc],EAX                ; 00482fdc | DAT_005c50bc
    MOV dword ptr [0x005c50c0],EBX      ; 00482fe1 | DAT_005c50c0
    MOV EAX,0xbe2e147b                  ; 00482fe7
    LEA EBX,[ESP + 0x30]                ; 00482fec
    MOV dword ptr [ESP + 0x18],EAX      ; 00482ff0
    MOV dword ptr [ESP + 0x1c],EAX      ; 00482ff4
    LEA EAX,[ESP + 0x18]                ; 00482ff8
    MOV EDX,dword ptr [0x005ae704]      ; 00482ffc | DAT_005ae704
    FLD float ptr [EAX]                 ; 00483002
    FMUL float ptr [0x0059d1f8]         ; 00483004 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048300a
    FLD float ptr [EAX + 0x4]           ; 0048300c
    FMUL float ptr [0x0059d1f8]         ; 0048300f | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00483015
    FLD float ptr [EAX + 0x8]           ; 00483018
    FMUL float ptr [0x0059d1f8]         ; 0048301b | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00483021
    LEA EAX,[ESP + 0x30]                ; 00483024
    PUSH EAX                            ; 00483028
    MOV EAX,dword ptr [EDX]             ; 00483029 | DAT_01b4d738
    PUSH EAX                            ; 0048302b
    MOV EDI,0xbe2e147b                  ; 0048302c
    XOR EBP,EBP                         ; 00483031
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00483033
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3e2e147b                  ; 00483038
    LEA EAX,[ESP + 0x20]                ; 0048303d
    ADD ESP,0x8                         ; 00483041
    MOV EDX,dword ptr [0x005ae704]      ; 00483044 | DAT_005ae704
    MOV dword ptr [ESP + 0x18],EBX      ; 0048304a
    MOV dword ptr [ESP + 0x1c],EDI      ; 0048304e
    MOV EBX,ESP                         ; 00483052
    MOV dword ptr [ESP + 0x20],EBP      ; 00483054
    FLD float ptr [EAX]                 ; 00483058
    FMUL float ptr [0x0059d1f8]         ; 0048305a | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00483060
    FLD float ptr [EAX + 0x4]           ; 00483062
    FMUL float ptr [0x0059d1f8]         ; 00483065 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048306b
    FLD float ptr [EAX + 0x8]           ; 0048306e
    FMUL float ptr [0x0059d1f8]         ; 00483071 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00483077
    MOV EAX,ESP                         ; 0048307a
    PUSH EAX                            ; 0048307c
    MOV EAX,dword ptr [EDX]             ; 0048307d | DAT_01b4d738
    ADD EAX,0x30                        ; 0048307f
    PUSH EAX                            ; 00483082
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00483083
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3e2e147b                  ; 00483088
    LEA EBX,[ESP + 0x5c]                ; 0048308d
    ADD ESP,0x8                         ; 00483091
    MOV EDX,dword ptr [0x005ae704]      ; 00483094 | DAT_005ae704
    MOV dword ptr [ESP + 0x18],EAX      ; 0048309a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048309e
    LEA EAX,[ESP + 0x18]                ; 004830a2
    MOV dword ptr [ESP + 0x20],EBP      ; 004830a6
    FLD float ptr [EAX]                 ; 004830aa
    FMUL float ptr [0x0059d1f8]         ; 004830ac | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004830b2
    FLD float ptr [EAX + 0x4]           ; 004830b4
    FMUL float ptr [0x0059d1f8]         ; 004830b7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 004830bd
    FLD float ptr [EAX + 0x8]           ; 004830c0
    FMUL float ptr [0x0059d1f8]         ; 004830c3 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004830c9
    LEA EAX,[ESP + 0x54]                ; 004830cc
    PUSH EAX                            ; 004830d0
    MOV EAX,dword ptr [EDX]             ; 004830d1 | DAT_01b4d738
    ADD EAX,0x60                        ; 004830d3
    PUSH EAX                            ; 004830d6
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004830d7
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x50]                ; 004830dc
    LEA EAX,[ESP + 0x20]                ; 004830e0
    ADD ESP,0x8                         ; 004830e4
    MOV EDX,dword ptr [0x005ae704]      ; 004830e7 | DAT_005ae704
    MOV dword ptr [ESP + 0x18],EDI      ; 004830ed
    MOV EDI,0x3e2e147b                  ; 004830f1
    MOV dword ptr [ESP + 0x20],EBP      ; 004830f6
    MOV dword ptr [ESP + 0x1c],EDI      ; 004830fa
    FLD float ptr [EAX]                 ; 004830fe
    FMUL float ptr [0x0059d1f8]         ; 00483100 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00483106
    FLD float ptr [EAX + 0x4]           ; 00483108
    FMUL float ptr [0x0059d1f8]         ; 0048310b | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00483111
    FLD float ptr [EAX + 0x8]           ; 00483114
    FMUL float ptr [0x0059d1f8]         ; 00483117 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048311d
    LEA EAX,[ESP + 0x48]                ; 00483120
    PUSH EAX                            ; 00483124
    MOV EAX,dword ptr [EDX]             ; 00483125 | DAT_01b4d738
    ADD EAX,0x90                        ; 00483127
    PUSH EAX                            ; 0048312c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048312d
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [ESI + 0x10]      ; 00483132
    ADD ESP,0x8                         ; 00483135
    TEST EAX,EAX                        ; 00483138
    JNZ 0x004831e4                      ; 0048313a
        ;   XREF to: 004831e4 (CONDITIONAL_JUMP)  ; LAB_004831e4
    PUSH 0x5c5014                       ; 00483140 | DAT_005c5014
    MOV EBX,dword ptr [0x007f7370]      ; 00483145 | DAT_007f7370
    PUSH EBX                            ; 0048314b
    CALL core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760 ; 0048314c
        ;   XREF to: 00447760 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760(CDemonCamera * this_ptr, SRenderVertex * vertex)
    ADD ESP,0x8                         ; 00483151
    PUSH 0x5c5044                       ; 00483154 | DAT_005c5044
    MOV EDI,dword ptr [0x007f7370]      ; 00483159 | DAT_007f7370
    PUSH EDI                            ; 0048315f
    CALL core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760 ; 00483160
        ;   XREF to: 00447760 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760(CDemonCamera * this_ptr, SRenderVertex * vertex)
    ADD ESP,0x8                         ; 00483165
    PUSH 0x5c5074                       ; 00483168 | DAT_005c5074
    MOV EBP,dword ptr [0x007f7370]      ; 0048316d | DAT_007f7370
    PUSH EBP                            ; 00483173
    CALL core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760 ; 00483174
        ;   XREF to: 00447760 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760(CDemonCamera * this_ptr, SRenderVertex * vertex)
    ADD ESP,0x8                         ; 00483179
    PUSH 0x5c50a4                       ; 0048317c | DAT_005c50a4
    MOV EAX,[0x007f7370]                ; 00483181 | DAT_007f7370
    PUSH EAX                            ; 00483186
    CALL core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760 ; 00483187
        ;   XREF to: 00447760 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760(CDemonCamera * this_ptr, SRenderVertex * vertex)
    ADD ESP,0x8                         ; 0048318c
    PUSH 0x1c08d20                      ; 0048318f
        ;   Label: LAB_0048318f
    MOV EDX,dword ptr [0x005ae704]      ; 00483194 | DAT_005ae704
    PUSH EDX                            ; 0048319a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 0048319b
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV ECX,dword ptr [ESI + 0x10]      ; 004831a0
    ADD ESP,0x8                         ; 004831a3
    TEST ECX,ECX                        ; 004831a6
    JNZ 0x0048326c                      ; 004831a8
        ;   XREF to: 0048326c (CONDITIONAL_JUMP)  ; LAB_0048326c
    MOV EDI,dword ptr [0x005ae704]      ; 004831ae | DAT_005ae704
    PUSH EDI                            ; 004831b4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004831b5
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 004831ba
    ADD ESP,0x60                        ; 004831bd
    POP EBP                             ; 004831c0
    POP EDI                             ; 004831c1
    POP ESI                             ; 004831c2
    POP EBX                             ; 004831c3
    RET                                 ; 004831c4
    PUSH ESI                            ; 004831c5
        ;   Label: LAB_004831c5
    MOV EDI,dword ptr [0x005ae704]      ; 004831c6 | DAT_005ae704
    PUSH EDI                            ; 004831cc | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004831cd
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004831d2
    PUSH 0x0                            ; 004831d5
    PUSH EBX                            ; 004831d7
    MOV EBP,dword ptr [0x005ae704]      ; 004831d8 | DAT_005ae704
    PUSH EBP                            ; 004831de | DAT_01b4d738
    JMP 0x00482f7e                      ; 004831df
        ;   XREF to: 00482f7e (UNCONDITIONAL_JUMP)  ; LAB_00482f7e
    LEA EAX,[ESI + 0x30]                ; 004831e4
        ;   Label: LAB_004831e4
    PUSH EAX                            ; 004831e7
    LEA EAX,[ESP + 0x40]                ; 004831e8
    PUSH EAX                            ; 004831ec
    MOV EDX,dword ptr [ESI + 0x10]      ; 004831ed
    PUSH EDX                            ; 004831f0
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004831f1
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    ADD ESP,0xc                         ; 004831f6
    LEA EBX,[ESP + 0xc]                 ; 004831f9
    MOV EAX,ESI                         ; 004831fd
    FLD float ptr [EAX]                 ; 004831ff
    FMUL float ptr [0x0059d1f8]         ; 00483201 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00483207
    FLD float ptr [EAX + 0x4]           ; 00483209
    FMUL float ptr [0x0059d1f8]         ; 0048320c | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00483212
    FLD float ptr [EAX + 0x8]           ; 00483215
    FMUL float ptr [0x0059d1f8]         ; 00483218 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048321e
    LEA EBX,[ESP + 0x24]                ; 00483221
    LEA EAX,[ESP + 0x3c]                ; 00483225
    FLD float ptr [EAX]                 ; 00483229
    FMUL float ptr [0x0059d1fc]         ; 0048322b | FLOAT_0059d1fc
    FISTP dword ptr [EBX]               ; 00483231
    FLD float ptr [EAX + 0x4]           ; 00483233
    FMUL float ptr [0x0059d1fc]         ; 00483236 | FLOAT_0059d1fc
    FISTP dword ptr [EBX + 0x4]         ; 0048323c
    FLD float ptr [EAX + 0x8]           ; 0048323f
    FMUL float ptr [0x0059d1fc]         ; 00483242 | FLOAT_0059d1fc
    FISTP dword ptr [EBX + 0x8]         ; 00483248
    PUSH 0x4                            ; 0048324b
    PUSH EBP                            ; 0048324d
    LEA EAX,[ESP + 0x2c]                ; 0048324e
    PUSH EAX                            ; 00483252
    LEA EAX,[ESP + 0x18]                ; 00483253
    PUSH EAX                            ; 00483257
    MOV ECX,dword ptr [0x005be368]      ; 00483258 | DAT_005be368
    PUSH ECX                            ; 0048325e | DAT_01e57284
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50 ; 0048325f
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00483264
    JMP 0x0048318f                      ; 00483267
        ;   XREF to: 0048318f (UNCONDITIONAL_JUMP)  ; LAB_0048318f
    PUSH ECX                            ; 0048326c
        ;   Label: LAB_0048326c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0048326d
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00483272
    MOV ESI,dword ptr [0x005ae704]      ; 00483275 | DAT_005ae704
    PUSH ESI                            ; 0048327b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0048327c
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00483281
    ADD ESP,0x60                        ; 00483284
    POP EBP                             ; 00483287
    POP EDI                             ; 00483288
    POP ESI                             ; 00483289
    POP EBX                             ; 0048328a
    RET                                 ; 0048328b

