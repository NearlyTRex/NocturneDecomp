; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_render_FUN_00521e40(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_menu.cpp_FUN_0050b470 at 0050b4f7
;   core_menu.cpp_FUN_0050ba70 at 0050bafc
;   core_menu.cpp_FUN_0050c990 at 0050ca1f
;   core_menu.cpp_calibrateGamepad_FUN_0050a2b0 at 0050a2cf
;   core_menu.cpp_configureGraphicsOptions_FUN_0050aa90 at 0050ab8b
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90 at 0050cdca
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061f8ac
;   undefined4 DAT_0061f8b0
;   undefined4 DAT_0061f8b4
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d33f6c
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.rendering_mode
;   undefined4 g_CDemonSetInstance.light_direction.x
;   undefined4 g_CDemonSetInstance.light_direction.y
;   undefined4 g_CDemonSetInstance.light_direction.z
;   undefined4 g_CDemonSetInstance.ambient_base_quick
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270
;   core_set.cpp_CDemonSet_setFlatColor_FUN_00555770
;   crt_math.c_round_FUN_005c03a0
;   engine_3d.c_setBlendMode_FUN_00406c20
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
;   engine_drender.cpp_FUN_004839b0
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   sound_sndmain.cpp_processAudio_FUN_00575fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521e40
        ;   Label: core_moon.cpp_CMoon_render_FUN_00521e40
    PUSH ESI                            ; 00521e41
    PUSH EDI                            ; 00521e42
    PUSH EBP                            ; 00521e43
    SUB ESP,0x44                        ; 00521e44
    MOV ESI,dword ptr [ESP + 0x58]      ; 00521e47
    CALL sound_sndmain.cpp_processAudio_FUN_00575fb0 ; 00521e4b
        ;   XREF to: 00575fb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_processAudio_FUN_00575fb0()
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 00521e50
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    PUSH 0xffff                         ; 00521e55
    PUSH 0x0                            ; 00521e5a
    PUSH 0x0                            ; 00521e5c
    MOV EBX,0xbf1b8a5d                  ; 00521e5e
    PUSH 0x1d33f50                      ; 00521e63
    MOV EDI,0xbe8f4c90                  ; 00521e68
    MOV EBP,0x3f3e9ec3                  ; 00521e6d
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 00521e72
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EDX,0x3ee1f6a9                  ; 00521e77
    MOV ECX,0x3f290d17                  ; 00521e7c
    ADD ESP,0x10                        ; 00521e81
    MOV EAX,0x3f1b2218                  ; 00521e84
    MOV dword ptr [ESP],EDX             ; 00521e89
    MOV dword ptr [ESP + 0x4],ECX       ; 00521e8c
    MOV dword ptr [ESP + 0x8],EBX       ; 00521e90
    MOV dword ptr [ESP + 0xc],EDI       ; 00521e94
    MOV dword ptr [ESP + 0x10],EBP      ; 00521e98
    MOV dword ptr [ESP + 0x14],EAX      ; 00521e9c
    MOV EDX,0x3f5a429e                  ; 00521ea0
    MOV ECX,0xbdc77681                  ; 00521ea5
    MOV EBX,0x3f037100                  ; 00521eaa
    MOV EDI,0x404a54de                  ; 00521eaf
    MOV EBP,0x40f41b09                  ; 00521eb4
    MOV EAX,0xc0e128b7                  ; 00521eb9
    MOV dword ptr [ESP + 0x18],EDX      ; 00521ebe
    MOV dword ptr [ESP + 0x30],EAX      ; 00521ec2
    LEA EAX,[ESP + 0x28]                ; 00521ec6
    MOV dword ptr [ESP + 0x1c],ECX      ; 00521eca
    PUSH EAX                            ; 00521ece
    MOV EDX,dword ptr [0x00612560]      ; 00521ecf | DAT_00612560
    MOV dword ptr [ESP + 0x24],EBX      ; 00521ed5
    PUSH EDX                            ; 00521ed9 | DAT_01bc120c
    MOV dword ptr [ESP + 0x30],EDI      ; 00521eda
    MOV dword ptr [ESP + 0x34],EBP      ; 00521ede
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 ; 00521ee2
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 00521ee7
    MOV ECX,dword ptr [0x00612560]      ; 00521eea | DAT_00612560
    PUSH 0x422c9ce4                     ; 00521ef0
    PUSH ECX                            ; 00521ef5 | DAT_01bc120c
    CALL engine_drender.cpp_FUN_004839b0 ; 00521ef6
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_004839b0()
    ADD ESP,0x8                         ; 00521efb
    MOV EAX,ESP                         ; 00521efe
    PUSH EAX                            ; 00521f00
    MOV EBX,dword ptr [0x00612560]      ; 00521f01 | DAT_00612560
    PUSH EBX                            ; 00521f07 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560 ; 00521f08
        ;   XREF to: 00483560 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 00521f0d
    LEA EAX,[ESP + 0x34]                ; 00521f10
    XOR EDI,EDI                         ; 00521f14
    PUSH EAX                            ; 00521f16
    MOV EDX,dword ptr [0x00612560]      ; 00521f17 | DAT_00612560
    MOV dword ptr [ESP + 0x38],EDI      ; 00521f1d
    PUSH EDX                            ; 00521f21 | DAT_01bc120c
    MOV dword ptr [ESP + 0x40],EDI      ; 00521f22
    MOV dword ptr [ESP + 0x44],EDI      ; 00521f26
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 00521f2a
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00521f2f
    MOV EAX,[0x00622c18]                ; 00521f32 | g_CDemonSetPtr
    PUSH 0x10000                        ; 00521f37
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 00521f3c | g_CDemonSetInstance.rendering_mode
    PUSH 0xc350                         ; 00521f46
    MOV dword ptr [EAX + 0x15ae88],0xffff6f78 ; 00521f4b | g_CDemonSetInstance.light_direction.x
    PUSH 0xc350                         ; 00521f55
    MOV dword ptr [EAX + 0x15ae8c],0xffff6f78 ; 00521f5a | g_CDemonSetInstance.light_direction.y
    PUSH EAX                            ; 00521f64 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ae90],0x9088 ; 00521f65 | g_CDemonSetInstance.light_direction.z
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_00555770 ; 00521f6f
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_00555770(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 00521f74
    PUSH 0x205                          ; 00521f77
    PUSH EDI                            ; 00521f7c
    MOV ECX,dword ptr [0x0061f8ac]      ; 00521f7d | DAT_0061f8ac
    MOV EAX,[0x00622c18]                ; 00521f83 | g_CDemonSetPtr
    PUSH ECX                            ; 00521f88
    MOV dword ptr [EAX + 0x15ae94],0x1964 ; 00521f89 | g_CDemonSetInstance.ambient_base_quick
    LEA EAX,[ESI + 0x8]                 ; 00521f93
    PUSH EAX                            ; 00521f96
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270 ; 00521f97
        ;   XREF to: 00467270 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 00521f9c
    PUSH 0x205                          ; 00521f9f
    PUSH EDI                            ; 00521fa4
    MOV EBX,dword ptr [0x0061f8b0]      ; 00521fa5 | DAT_0061f8b0
    PUSH EBX                            ; 00521fab
    LEA EAX,[ESI + 0x3a0]               ; 00521fac
    PUSH EAX                            ; 00521fb2
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270 ; 00521fb3
        ;   XREF to: 00467270 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 00521fb8
    PUSH 0x205                          ; 00521fbb
    PUSH EDI                            ; 00521fc0
    MOV EDI,dword ptr [0x0061f8b4]      ; 00521fc1 | DAT_0061f8b4
    PUSH EDI                            ; 00521fc7
    LEA EAX,[ESI + 0x738]               ; 00521fc8
    PUSH EAX                            ; 00521fce
    XOR EBP,EBP                         ; 00521fcf
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270 ; 00521fd1
        ;   XREF to: 00467270 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    MOV EAX,[0x00622c18]                ; 00521fd6 | g_CDemonSetPtr
    MOV EDX,dword ptr [0x0061f8b4]      ; 00521fdb | DAT_0061f8b4
    ADD ESP,0x10                        ; 00521fe1
    INC EDX                             ; 00521fe4
    MOV dword ptr [EAX + 0x15ae84],EBP  ; 00521fe5 | g_CDemonSetInstance.rendering_mode
    MOV EBP,dword ptr [0x0061f8ac]      ; 00521feb | DAT_0061f8ac
    MOV EAX,[0x0061f8b0]                ; 00521ff1 | DAT_0061f8b0
    MOV dword ptr [0x0061f8b4],EDX      ; 00521ff6 | DAT_0061f8b4
    INC EBP                             ; 00521ffc
    INC EAX                             ; 00521ffd
    MOV dword ptr [0x0061f8ac],EBP      ; 00521ffe | DAT_0061f8ac
    MOV [0x0061f8b0],EAX                ; 00522004 | DAT_0061f8b0
    CMP EBP,0x3c                        ; 00522009
    JG 0x00522095                       ; 0052200c
        ;   XREF to: 00522095 (CONDITIONAL_JUMP)  ; LAB_00522095
    CMP dword ptr [0x0061f8b0],0x2d     ; 00522012 | DAT_0061f8b0
        ;   Label: LAB_00522012
    JLE 0x00522023                      ; 00522019
        ;   XREF to: 00522023 (CONDITIONAL_JUMP)  ; LAB_00522023
    XOR EDI,EDI                         ; 0052201b
    MOV dword ptr [0x0061f8b0],EDI      ; 0052201d | DAT_0061f8b0
    CMP dword ptr [0x0061f8b4],0x4b     ; 00522023 | DAT_0061f8b4
        ;   Label: LAB_00522023
    JLE 0x00522033                      ; 0052202a
        ;   XREF to: 00522033 (CONDITIONAL_JUMP)  ; LAB_00522033
    XOR EAX,EAX                         ; 0052202c
    MOV [0x0061f8b4],EAX                ; 0052202e | DAT_0061f8b4
    PUSH 0x1                            ; 00522033
        ;   Label: LAB_00522033
    CALL engine_3d.c_setBlendMode_FUN_00406c20 ; 00522035
        ;   XREF to: 00406c20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406c20(int blend_mode)
    FLD float ptr [0x01d33f6c]          ; 0052203a | DAT_01d33f6c
    ADD ESP,0x4                         ; 00522040
    CALL crt_math.c_round_FUN_005c03a0  ; 00522043
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x40]        ; 00522048
    CMP dword ptr [ESP + 0x40],0x1d     ; 0052204c
    JLE 0x00522059                      ; 00522051
        ;   XREF to: 00522059 (CONDITIONAL_JUMP)  ; LAB_00522059
    XOR ECX,ECX                         ; 00522053
    MOV dword ptr [ESP + 0x40],ECX      ; 00522055
    MOV EDX,dword ptr [ESP + 0x40]      ; 00522059
        ;   Label: LAB_00522059
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052205d
    PUSH 0xffff                         ; 00522064
    ADD EAX,EDX                         ; 00522069
    PUSH 0x13b                          ; 0052206b
    SHL EAX,0x2                         ; 00522070
    PUSH 0x0                            ; 00522073
    ADD EAX,0x1d33cf8                   ; 00522075
    PUSH EAX                            ; 0052207a
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 0052207b
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 00522080
    PUSH 0x0                            ; 00522083
    CALL engine_3d.c_setBlendMode_FUN_00406c20 ; 00522085
        ;   XREF to: 00406c20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406c20(int blend_mode)
    ADD ESP,0x4                         ; 0052208a
    ADD ESP,0x44                        ; 0052208d
    POP EBP                             ; 00522090
    POP EDI                             ; 00522091
    POP ESI                             ; 00522092
    POP EBX                             ; 00522093
    RET                                 ; 00522094
    XOR EBX,EBX                         ; 00522095
        ;   Label: LAB_00522095
    MOV dword ptr [0x0061f8ac],EBX      ; 00522097 | DAT_0061f8ac
    JMP 0x00522012                      ; 0052209d
        ;   XREF to: 00522012 (UNCONDITIONAL_JUMP)  ; LAB_00522012

