; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_CLevelLoader_update_FUN_004fe9c0(CLevelLoader *this_ptr,char *text,int clear_screen)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   clear_screen
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[5]:
;   core_mission.cpp_CDemonMission_load_FUN_0051a3f0 at 0051a427
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_0051b2b0 at 0051b2ce
;   core_mission.cpp_FUN_0051bdc0 at 0051be81
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054ec82
;   core_set.cpp_FUN_0054d3c0 at 0054d3e9
;
; Referenced Globals:
;   undefined4 DAT_00602eac
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061f2e4
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_0152d244
;   undefined4 DAT_01bc120c
;   undefined4 g_CDemonSetInstance.rendering_mode
;   undefined4 g_CDemonSetInstance.light_direction.x
;   undefined4 g_CDemonSetInstance.light_direction.y
;   undefined4 g_CDemonSetInstance.light_direction.z
;   undefined4 g_CDemonSetInstance.ambient_base_quick
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270
;   core_set.cpp_CDemonSet_setFlatColor_FUN_00555770
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;   engine_font.cpp_FUN_004c1dd0
;   engine_matrix.c_FUN_004839b0
;   engine_matrix.c_FUN_00483c10
;   engine_matrix.c_FUN_00507350
;   engine_matrix.c_FUN_00507390
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004fe9c0
        ;   Label: core_level.cpp_CLevelLoader_update_FUN_004fe9c0
    PUSH EBP                            ; 004fe9c1
    SUB ESP,0x7c                        ; 004fe9c2
    MOV ESI,dword ptr [ESP + 0x88]      ; 004fe9c5
    CMP dword ptr [ESI + 0xc],0x0       ; 004fe9cc
    JZ 0x004fef64                       ; 004fe9d0
        ;   XREF to: 004fef64 (CONDITIONAL_JUMP)  ; LAB_004fef64
    CMP dword ptr [ESP + 0x90],0x0      ; 004fe9d6
    JNZ 0x004fef6a                      ; 004fe9de
        ;   XREF to: 004fef6a (CONDITIONAL_JUMP)  ; LAB_004fef6a
    CMP dword ptr [0x0061b49c],0x1e0    ; 004fe9e4 | DAT_0061b49c
        ;   Label: LAB_004fe9e4
    JNZ 0x004fef64                      ; 004fe9ee
        ;   XREF to: 004fef64 (CONDITIONAL_JUMP)  ; LAB_004fef64
    PUSH EDI                            ; 004fe9f4
    PUSH EBX                            ; 004fe9f5
    CMP dword ptr [ESI + 0x110],0x0     ; 004fe9f6
    JZ 0x004fea2a                       ; 004fe9fd
        ;   XREF to: 004fea2a (CONDITIONAL_JUMP)  ; LAB_004fea2a
    MOV EBP,dword ptr [ESI + 0x120]     ; 004fe9ff
    PUSH EBP                            ; 004fea05
    MOV EAX,dword ptr [ESI + 0x11c]     ; 004fea06
    PUSH EAX                            ; 004fea0c
    MOV EDX,dword ptr [ESI + 0x118]     ; 004fea0d
    PUSH EDX                            ; 004fea13
    MOV ECX,dword ptr [ESI + 0x114]     ; 004fea14
    PUSH ECX                            ; 004fea1a
    MOV EBX,dword ptr [0x00612560]      ; 004fea1b | DAT_00612560
    PUSH EBX                            ; 004fea21 | DAT_01bc120c
    CALL engine_matrix.c_FUN_00483c10   ; 004fea22
        ;   XREF to: 00483c10 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483c10()
    ADD ESP,0x14                        ; 004fea27
    PUSH 0x2c8af28                      ; 004fea2a | DAT_02c8af28
        ;   Label: LAB_004fea2a
    MOV EDI,dword ptr [0x00612560]      ; 004fea2f | DAT_00612560
    PUSH EDI                            ; 004fea35 | DAT_01bc120c
    MOV EBP,0x42600000                  ; 004fea36
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 ; 004fea3b
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004fea40
    MOV EAX,dword ptr [ESI + 0x110]     ; 004fea43
    MOV dword ptr [ESP + 0x78],EBP      ; 004fea49
    TEST EAX,EAX                        ; 004fea4d
    JZ 0x004fea59                       ; 004fea4f
        ;   XREF to: 004fea59 (CONDITIONAL_JUMP)  ; LAB_004fea59
    MOV dword ptr [ESP + 0x78],0x42a80000 ; 004fea51
    MOV ECX,dword ptr [0x00612560]      ; 004fea59 | DAT_00612560
        ;   Label: LAB_004fea59
    PUSH dword ptr [ESP + 0x78]         ; 004fea5f
    PUSH ECX                            ; 004fea63 | DAT_01bc120c
    CALL engine_matrix.c_FUN_004839b0   ; 004fea64
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004839b0()
    ADD ESP,0x8                         ; 004fea69
    PUSH 0x2c8af28                      ; 004fea6c | DAT_02c8af28
    MOV EBX,dword ptr [0x00612560]      ; 004fea71 | DAT_00612560
    PUSH EBX                            ; 004fea77 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530 ; 004fea78
        ;   XREF to: 00483530 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    MOV EAX,0x42100000                  ; 004fea7d
    ADD ESP,0x8                         ; 004fea82
    MOV dword ptr [ESP + 0x74],EAX      ; 004fea85
    LEA EAX,[ESP + 0x6c]                ; 004fea89
    PUSH EAX                            ; 004fea8d
    MOV EDX,dword ptr [0x00612560]      ; 004fea8e | DAT_00612560
    XOR EDI,EDI                         ; 004fea94
    PUSH EDX                            ; 004fea96 | DAT_01bc120c
    MOV dword ptr [ESP + 0x74],EDI      ; 004fea97
    MOV dword ptr [ESP + 0x78],EDI      ; 004fea9b
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004fea9f
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,[0x00622c18]                ; 004feaa4 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004feaa9 | g_CDemonSetInstance.rendering_mode
    MOV EDX,dword ptr [ESI]             ; 004feab3
    SHL EDX,0xf                         ; 004feab5
    MOV ECX,dword ptr [ESI + 0x4]       ; 004feab8
    MOV EAX,EDX                         ; 004feabb
    SAR EDX,0x1f                        ; 004feabd
    IDIV ECX                            ; 004feac0
    MOV EBX,0x8000                      ; 004feac2
    ADD ESP,0x8                         ; 004feac7
    SUB EBX,EAX                         ; 004feaca
    PUSH EBX                            ; 004feacc
    CALL engine_matrix.c_FUN_00507350   ; 004feacd
        ;   XREF to: 00507350 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_00507350(int angle)
    ADD ESP,0x4                         ; 004fead2
    MOV EDX,EAX                         ; 004fead5
    MOV EAX,0x9088                      ; 004fead7
    IMUL EDX                            ; 004feadc
    SHRD EAX,EDX,0x10                   ; 004feade
    MOV EDX,EAX                         ; 004feae2
    MOV EAX,[0x00622c18]                ; 004feae4 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae8c],0xffff6f78 ; 004feae9 | g_CDemonSetInstance.light_direction.y
    PUSH EBX                            ; 004feaf3
    MOV dword ptr [EAX + 0x15ae88],EDX  ; 004feaf4 | g_CDemonSetInstance.light_direction.x
    CALL engine_matrix.c_FUN_00507390   ; 004feafa
        ;   XREF to: 00507390 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00507390()
    ADD ESP,0x4                         ; 004feaff
    MOV EDX,EAX                         ; 004feb02
    MOV EAX,0x9088                      ; 004feb04
    IMUL EDX                            ; 004feb09
    SHRD EAX,EDX,0x10                   ; 004feb0b
    MOV EDX,EAX                         ; 004feb0f
    MOV EAX,[0x00622c18]                ; 004feb11 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae94],0x280 ; 004feb16 | g_CDemonSetInstance.ambient_base_quick
    MOV dword ptr [EAX + 0x15ae90],EDX  ; 004feb20 | g_CDemonSetInstance.light_direction.z
    MOV EDX,dword ptr [ESI + 0x12c]     ; 004feb26
    SHL EDX,0x8                         ; 004feb2c
    PUSH EDX                            ; 004feb2f
    MOV EDX,dword ptr [ESI + 0x128]     ; 004feb30
    SHL EDX,0x8                         ; 004feb36
    PUSH EDX                            ; 004feb39
    MOV EDX,dword ptr [ESI + 0x124]     ; 004feb3a
    SHL EDX,0x8                         ; 004feb40
    PUSH EDX                            ; 004feb43
    PUSH EAX                            ; 004feb44
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_00555770 ; 004feb45
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_00555770(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004feb4a
    MOV EBX,0x40e80000                  ; 004feb4d
    LEA EAX,[ESP + 0x60]                ; 004feb52
    MOV EDX,dword ptr [0x00612560]      ; 004feb56 | DAT_00612560
    MOV dword ptr [ESP + 0x60],EBX      ; 004feb5c
    MOV dword ptr [ESP + 0x64],EBX      ; 004feb60
    LEA EBX,[ESP + 0x30]                ; 004feb64
    MOV dword ptr [ESP + 0x68],EDI      ; 004feb68
    FLD float ptr [EAX]                 ; 004feb6c
    FMUL float ptr [0x00602eac]         ; 004feb6e | DAT_00602eac
    FISTP dword ptr [EBX]               ; 004feb74
    FLD float ptr [EAX + 0x4]           ; 004feb76
    FMUL float ptr [0x00602eac]         ; 004feb79 | DAT_00602eac
    FISTP dword ptr [EBX + 0x4]         ; 004feb7f
    FLD float ptr [EAX + 0x8]           ; 004feb82
    FMUL float ptr [0x00602eac]         ; 004feb85 | DAT_00602eac
    FISTP dword ptr [EBX + 0x8]         ; 004feb8b
    LEA EAX,[ESP + 0x30]                ; 004feb8e
    PUSH EAX                            ; 004feb92
    MOV EAX,dword ptr [EDX]             ; 004feb93 | DAT_01bc120c
    PUSH EAX                            ; 004feb95
    CALL engine_special.cpp_FUN_00580173 ; 004feb96
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004feb9b
    MOV AH,byte ptr [ESP + 0x63]        ; 004feb9e
    XOR AH,0x80                         ; 004feba2
    LEA EBX,[ESP + 0x3c]                ; 004feba5
    MOV byte ptr [ESP + 0x63],AH        ; 004feba9
    LEA EAX,[ESP + 0x60]                ; 004febad
    MOV EDX,dword ptr [0x00612560]      ; 004febb1 | DAT_00612560
    FLD float ptr [EAX]                 ; 004febb7
    FMUL float ptr [0x00602eac]         ; 004febb9 | DAT_00602eac
    FISTP dword ptr [EBX]               ; 004febbf
    FLD float ptr [EAX + 0x4]           ; 004febc1
    FMUL float ptr [0x00602eac]         ; 004febc4 | DAT_00602eac
    FISTP dword ptr [EBX + 0x4]         ; 004febca
    FLD float ptr [EAX + 0x8]           ; 004febcd
    FMUL float ptr [0x00602eac]         ; 004febd0 | DAT_00602eac
    FISTP dword ptr [EBX + 0x8]         ; 004febd6
    LEA EAX,[ESP + 0x3c]                ; 004febd9
    PUSH EAX                            ; 004febdd
    MOV EAX,dword ptr [EDX]             ; 004febde | DAT_01bc120c
    ADD EAX,0x30                        ; 004febe0
    PUSH EAX                            ; 004febe3
    CALL engine_special.cpp_FUN_00580173 ; 004febe4
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004febe9
    MOV DL,byte ptr [ESP + 0x67]        ; 004febec
    LEA EBX,[ESP + 0x54]                ; 004febf0
    XOR DL,0x80                         ; 004febf4
    LEA EAX,[ESP + 0x60]                ; 004febf7
    MOV byte ptr [ESP + 0x67],DL        ; 004febfb
    MOV EDX,dword ptr [0x00612560]      ; 004febff | DAT_00612560
    FLD float ptr [EAX]                 ; 004fec05
    FMUL float ptr [0x00602eac]         ; 004fec07 | DAT_00602eac
    FISTP dword ptr [EBX]               ; 004fec0d
    FLD float ptr [EAX + 0x4]           ; 004fec0f
    FMUL float ptr [0x00602eac]         ; 004fec12 | DAT_00602eac
    FISTP dword ptr [EBX + 0x4]         ; 004fec18
    FLD float ptr [EAX + 0x8]           ; 004fec1b
    FMUL float ptr [0x00602eac]         ; 004fec1e | DAT_00602eac
    FISTP dword ptr [EBX + 0x8]         ; 004fec24
    LEA EAX,[ESP + 0x54]                ; 004fec27
    PUSH EAX                            ; 004fec2b
    MOV EAX,dword ptr [EDX]             ; 004fec2c | DAT_01bc120c
    ADD EAX,0x60                        ; 004fec2e
    PUSH EAX                            ; 004fec31
    CALL engine_special.cpp_FUN_00580173 ; 004fec32
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004fec37
    MOV DH,byte ptr [ESP + 0x63]        ; 004fec3a
    LEA EBX,[ESP + 0x48]                ; 004fec3e
    XOR DH,0x80                         ; 004fec42
    LEA EAX,[ESP + 0x60]                ; 004fec45
    MOV byte ptr [ESP + 0x63],DH        ; 004fec49
    MOV EDX,dword ptr [0x00612560]      ; 004fec4d | DAT_00612560
    FLD float ptr [EAX]                 ; 004fec53
    FMUL float ptr [0x00602eac]         ; 004fec55 | DAT_00602eac
    FISTP dword ptr [EBX]               ; 004fec5b
    FLD float ptr [EAX + 0x4]           ; 004fec5d
    FMUL float ptr [0x00602eac]         ; 004fec60 | DAT_00602eac
    FISTP dword ptr [EBX + 0x4]         ; 004fec66
    FLD float ptr [EAX + 0x8]           ; 004fec69
    FMUL float ptr [0x00602eac]         ; 004fec6c | DAT_00602eac
    FISTP dword ptr [EBX + 0x8]         ; 004fec72
    LEA EAX,[ESP + 0x48]                ; 004fec75
    PUSH EAX                            ; 004fec79
    MOV EAX,dword ptr [EDX]             ; 004fec7a | DAT_01bc120c
    ADD EAX,0x90                        ; 004fec7c
    PUSH EAX                            ; 004fec81
    CALL engine_special.cpp_FUN_00580173 ; 004fec82
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004fec87 | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 004fec8c | DAT_01bc120c
    MOV dword ptr [EDX + 0x18],0x1000000 ; 004fec8e
    MOV EDX,dword ptr [EAX]             ; 004fec95 | DAT_01bc120c
    MOV dword ptr [EDX + 0x1c],EDI      ; 004fec97
    MOV EDX,dword ptr [EAX]             ; 004fec9a | DAT_01bc120c
    MOV dword ptr [EDX + 0x48],EDI      ; 004fec9c
    MOV EDX,dword ptr [EAX]             ; 004fec9f | DAT_01bc120c
    MOV dword ptr [EDX + 0x4c],EDI      ; 004feca1
    MOV EDX,dword ptr [EAX]             ; 004feca4 | DAT_01bc120c
    MOV dword ptr [EDX + 0x78],EDI      ; 004feca6
    MOV EDX,dword ptr [EAX]             ; 004feca9 | DAT_01bc120c
    MOV dword ptr [EDX + 0x7c],0x1000000 ; 004fecab
    MOV EDX,dword ptr [EAX]             ; 004fecb2 | DAT_01bc120c
    MOV dword ptr [EDX + 0xa8],0x1000000 ; 004fecb4
    MOV EAX,dword ptr [EAX]             ; 004fecbe | DAT_01bc120c
    MOV dword ptr [EAX + 0xac],0x1000000 ; 004fecc0
    MOV EDX,dword ptr [ESI]             ; 004fecca
    MOV EAX,EDX                         ; 004feccc
    SHL EAX,0x8                         ; 004fecce
    ADD EAX,EDX                         ; 004fecd1
    MOV EDX,EAX                         ; 004fecd3
    SHL EAX,0x8                         ; 004fecd5
    SUB EAX,EDX                         ; 004fecd8
    MOV EDX,EAX                         ; 004fecda
    MOV ECX,dword ptr [ESI + 0x4]       ; 004fecdc
    SAR EDX,0x1f                        ; 004fecdf
    IDIV ECX                            ; 004fece2
    ADD ESP,0x8                         ; 004fece4
    MOV EDX,EAX                         ; 004fece7
    CMP EAX,0xffff                      ; 004fece9
    JG 0x004fef8b                       ; 004fecee
        ;   XREF to: 004fef8b (CONDITIONAL_JUMP)  ; LAB_004fef8b
    MOV EAX,[0x00612560]                ; 004fecf4 | DAT_00612560
        ;   Label: LAB_004fecf4
    MOV ECX,dword ptr [EAX]             ; 004fecf9 | DAT_01bc120c
    MOV dword ptr [ECX + 0x2c],0x0      ; 004fecfb
    MOV ECX,dword ptr [EAX]             ; 004fed02 | DAT_01bc120c
    MOV dword ptr [ECX + 0x5c],EDX      ; 004fed04
    MOV EDX,dword ptr [EAX]             ; 004fed07 | DAT_01bc120c
    MOV dword ptr [EDX + 0x8c],0x0      ; 004fed09
    MOV EAX,dword ptr [EAX]             ; 004fed13 | DAT_01bc120c
    MOV dword ptr [EAX + 0xbc],0x0      ; 004fed15
    XOR EAX,EAX                         ; 004fed1f
    MOV EDX,dword ptr [0x00612560]      ; 004fed21 | DAT_00612560
        ;   Label: LAB_004fed21
    MOV EBX,dword ptr [ESI + 0x124]     ; 004fed27
    MOV ECX,dword ptr [EDX]             ; 004fed2d | DAT_01bc120c
    SHL EBX,0x8                         ; 004fed2f
    MOV dword ptr [ECX + EAX*0x1 + 0x20],EBX ; 004fed32
    MOV ECX,dword ptr [ESI + 0x128]     ; 004fed36
    MOV EBX,dword ptr [EDX]             ; 004fed3c | DAT_01bc120c
    SHL ECX,0x8                         ; 004fed3e
    MOV dword ptr [EBX + EAX*0x1 + 0x24],ECX ; 004fed41
    ADD EAX,0x30                        ; 004fed45
    MOV EBX,dword ptr [ESI + 0x12c]     ; 004fed48
    MOV ECX,dword ptr [EDX]             ; 004fed4e | DAT_01bc120c
    SHL EBX,0x8                         ; 004fed50
    MOV dword ptr [ECX + EAX*0x1 + -0x8],EBX ; 004fed53
    CMP EAX,0xc0                        ; 004fed57
    JNZ 0x004fed21                      ; 004fed5c
        ;   XREF to: 004fed21 (CONDITIONAL_JUMP)  ; LAB_004fed21
    MOV EBX,0x4                         ; 004fed5e
    XOR EDI,EDI                         ; 004fed63
    MOV EBP,0x2                         ; 004fed65
    MOV dword ptr [ESP + 0x1c],EDI      ; 004fed6a
    MOV dword ptr [ESP + 0x18],EDI      ; 004fed6e
    MOV dword ptr [ESP + 0x14],EDI      ; 004fed72
    MOV dword ptr [ESP + 0x10],EDI      ; 004fed76
    MOV dword ptr [ESP + 0x20],EDI      ; 004fed7a
    MOV EDI,0x1                         ; 004fed7e
    MOV EAX,0x3                         ; 004fed83
    PUSH EDI                            ; 004fed88
    MOV dword ptr [ESP + 0x10],EBX      ; 004fed89
    MOV dword ptr [ESP + 0x2c],EBP      ; 004fed8d
    PUSH EDX                            ; 004fed91 | DAT_01bc120c
    MOV dword ptr [ESP + 0x34],EAX      ; 004fed92
    MOV dword ptr [ESP + 0x2c],EDI      ; 004fed96
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004fed9a
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004fed9f
    PUSH 0x61f2e4                       ; 004feda2 | DAT_0061f2e4
    MOV EDX,dword ptr [0x00612560]      ; 004feda7 | DAT_00612560
    PUSH EDX                            ; 004fedad | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004fedae
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004fedb3
    PUSH 0x327                          ; 004fedb6
    LEA EAX,[ESP + 0xc]                 ; 004fedbb
    PUSH EAX                            ; 004fedbf
    MOV ECX,dword ptr [0x00612560]      ; 004fedc0 | DAT_00612560
    PUSH ECX                            ; 004fedc6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170 ; 004fedc7
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004fedcc
    XOR EBX,EBX                         ; 004fedcf
    PUSH EBX                            ; 004fedd1
    MOV EBX,dword ptr [0x00612560]      ; 004fedd2 | DAT_00612560
    PUSH EBX                            ; 004fedd8 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004fedd9
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004fedde
    PUSH 0x205                          ; 004fede1
    PUSH 0x0                            ; 004fede6
    PUSH 0x0                            ; 004fede8
    PUSH 0x1d1be4c                      ; 004fedea
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270 ; 004fedef
        ;   XREF to: 00467270 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    MOV EDI,dword ptr [ESI + 0x110]     ; 004fedf4
    ADD ESP,0x10                        ; 004fedfa
    TEST EDI,EDI                        ; 004fedfd
    JZ 0x004fee10                       ; 004fedff
        ;   XREF to: 004fee10 (CONDITIONAL_JUMP)  ; LAB_004fee10
    MOV EBP,dword ptr [0x00612560]      ; 004fee01 | DAT_00612560
    PUSH EBP                            ; 004fee07 | DAT_01bc120c
    CALL engine_matrix.c_popViewport_FUN_00483c40 ; 004fee08
        ;   XREF to: 00483c40 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_00483c40()
    ADD ESP,0x4                         ; 004fee0d
    MOV EAX,[0x00622c18]                ; 004fee10 | g_CDemonSetPtr
        ;   Label: LAB_004fee10
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004fee15 | g_CDemonSetInstance.rendering_mode
    MOV EAX,[0x0152d244]                ; 004fee1f | DAT_0152d244
    MOV EDX,dword ptr [0x0061b498]      ; 004fee24 | DAT_0061b498
    MOV dword ptr [ESP + 0x80],EAX      ; 004fee2a
    LEA EAX,[EDX*0x8 + 0x0]             ; 004fee31
    ADD EDX,EAX                         ; 004fee38
    SHL EDX,0x6                         ; 004fee3a
    MOV ECX,0x280                       ; 004fee3d
    MOV EAX,EDX                         ; 004fee42
    SAR EDX,0x1f                        ; 004fee44
    IDIV ECX                            ; 004fee47
    MOV EDX,dword ptr [0x0061b49c]      ; 004fee49 | DAT_0061b49c
    MOV EDI,EAX                         ; 004fee4f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fee51
    SUB EAX,EDX                         ; 004fee58
    LEA EDX,[EAX*0x8 + 0x0]             ; 004fee5a
    MOV ECX,0x1e0                       ; 004fee61
    MOV EAX,EDX                         ; 004fee66
    SAR EDX,0x1f                        ; 004fee68
    IDIV ECX                            ; 004fee6b
    MOV EDX,dword ptr [0x0061b498]      ; 004fee6d | DAT_0061b498
    MOV ECX,0x280                       ; 004fee73
    SHL EDX,0x5                         ; 004fee78
    MOV EBX,EAX                         ; 004fee7b
    MOV EAX,EDX                         ; 004fee7d
    SAR EDX,0x1f                        ; 004fee7f
    IDIV ECX                            ; 004fee82
    MOV EBP,EAX                         ; 004fee84
    MOV EAX,[0x0061b49c]                ; 004fee86 | DAT_0061b49c
    SHL EAX,0x6                         ; 004fee8b
    MOV EDX,EAX                         ; 004fee8e
    SHL EAX,0x3                         ; 004fee90
    SUB EAX,EDX                         ; 004fee93
    MOV EDX,EAX                         ; 004fee95
    MOV ECX,0x1e0                       ; 004fee97
    SAR EDX,0x1f                        ; 004fee9c
    IDIV ECX                            ; 004fee9f
    MOV dword ptr [ESP + 0x7c],EAX      ; 004feea1
    MOV EAX,dword ptr [ESI]             ; 004feea5
    INC EAX                             ; 004feea7
    MOV EDX,dword ptr [ESI + 0x4]       ; 004feea8
    MOV dword ptr [ESI],EAX             ; 004feeab
    CMP EAX,EDX                         ; 004feead
    JLE 0x004feeb3                      ; 004feeaf
        ;   XREF to: 004feeb3 (CONDITIONAL_JUMP)  ; LAB_004feeb3
    MOV dword ptr [ESI],EDX             ; 004feeb1
    MOV ECX,dword ptr [ESI + 0x110]     ; 004feeb3
        ;   Label: LAB_004feeb3
    TEST ECX,ECX                        ; 004feeb9
    JNZ 0x004fef5d                      ; 004feebb
        ;   XREF to: 004fef5d (CONDITIONAL_JUMP)  ; LAB_004fef5d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004feec1
    ADD EAX,EBX                         ; 004feec5
    PUSH ECX                            ; 004feec7
    INC EAX                             ; 004feec8
    PUSH EAX                            ; 004feec9
    LEA EAX,[EDI + EBP*0x1 + 0x1]       ; 004feeca
    PUSH EAX                            ; 004feece
    MOV EAX,dword ptr [ESP + 0x88]      ; 004feecf
    DEC EAX                             ; 004feed6
    PUSH EAX                            ; 004feed7
    LEA EAX,[EBP + -0x1]                ; 004feed8
    PUSH EAX                            ; 004feedb
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004feedc
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004feee1
    MOV ESI,dword ptr [ESP + 0x94]      ; 004feee4
    TEST ESI,ESI                        ; 004feeeb
    JZ 0x004fef5d                       ; 004feeed
        ;   XREF to: 004fef5d (CONDITIONAL_JUMP)  ; LAB_004fef5d
    MOV EDX,EDI                         ; 004feeef
    MOV EAX,EDI                         ; 004feef1
    SAR EDX,0x1f                        ; 004feef3
    SUB EAX,EDX                         ; 004feef6
    SAR EAX,0x1                         ; 004feef8
    PUSH ESI                            ; 004feefa
    ADD EBP,EAX                         ; 004feefb
    MOV EAX,dword ptr [ESP + 0x84]      ; 004feefd
    PUSH EAX                            ; 004fef04
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004fef05
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004fef0a
    SAR EDX,0x1f                        ; 004fef0c
    SUB EAX,EDX                         ; 004fef0f
    SAR EAX,0x1                         ; 004fef11
    MOV ECX,EBP                         ; 004fef13
    MOV EDX,EBX                         ; 004fef15
    SUB ECX,EAX                         ; 004fef17
    MOV EAX,EBX                         ; 004fef19
    SAR EDX,0x1f                        ; 004fef1b
    SUB EAX,EDX                         ; 004fef1e
    SAR EAX,0x1                         ; 004fef20
    ADD ESP,0x8                         ; 004fef22
    MOV EDX,dword ptr [ESP + 0x80]      ; 004fef25
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004fef2c
    MOV EDX,dword ptr [EDX + 0x41ec]    ; 004fef30
    ADD EBX,EAX                         ; 004fef36
    MOV EAX,EDX                         ; 004fef38
    SAR EDX,0x1f                        ; 004fef3a
    SUB EAX,EDX                         ; 004fef3d
    SAR EAX,0x1                         ; 004fef3f
    PUSH -0x1                           ; 004fef41
    PUSH 0xf8                           ; 004fef43
    SUB EBX,EAX                         ; 004fef48
    PUSH EBX                            ; 004fef4a
    PUSH ECX                            ; 004fef4b
    PUSH ESI                            ; 004fef4c
    MOV ECX,dword ptr [ESP + 0x94]      ; 004fef4d
    PUSH ECX                            ; 004fef54
    CALL engine_font.cpp_FUN_004c1dd0   ; 004fef55
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004fef5a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 004fef5d
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
        ;   Label: LAB_004fef5d
    POP EBX                             ; 004fef62
    POP EDI                             ; 004fef63
    ADD ESP,0x7c                        ; 004fef64
        ;   Label: LAB_004fef64
    POP EBP                             ; 004fef67
    POP ESI                             ; 004fef68
    RET                                 ; 004fef69
    MOV EAX,[0x0061b49c]                ; 004fef6a | DAT_0061b49c
        ;   Label: LAB_004fef6a
    PUSH 0x0                            ; 004fef6f
    DEC EAX                             ; 004fef71
    PUSH EAX                            ; 004fef72
    MOV EAX,[0x0061b498]                ; 004fef73 | DAT_0061b498
    DEC EAX                             ; 004fef78
    PUSH EAX                            ; 004fef79
    PUSH 0x0                            ; 004fef7a
    PUSH 0x0                            ; 004fef7c
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004fef7e
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004fef83
    JMP 0x004fe9e4                      ; 004fef86
        ;   XREF to: 004fe9e4 (UNCONDITIONAL_JUMP)  ; LAB_004fe9e4
    MOV EDX,0xffff                      ; 004fef8b
        ;   Label: LAB_004fef8b
    JMP 0x004fecf4                      ; 004fef90
        ;   XREF to: 004fecf4 (UNCONDITIONAL_JUMP)  ; LAB_004fecf4

