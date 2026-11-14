; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004dbd80(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   item
; int              Stack[0xc]:4   viewport_x
; int              Stack[0x10]:4   viewport_y
; int              Stack[0x14]:4   viewport_size
; float            Stack[0x18]:4   rotation_y
; int              Stack[0x1c]:4   alpha
; Local Variables:
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
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
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd670 at 004dd7d6
;
; Referenced Globals:
;   undefined4 DAT_005db750
;   TerminatedCString s_CKeyActor_005db755
;   TerminatedCString s_CBoxActor_005db75f
;   TerminatedCString s_CKeyActor_005db769
;   TerminatedCString s_axe1_kfm_005db773
;   TerminatedCString s_ax2_kfm_005db77c
;   TerminatedCString s_melee_kfm_005db784
;   TerminatedCString s_cross1_kfm_005db78e
;   undefined4 DAT_005db79a
;   undefined4 DAT_005db7a2
;   undefined4 DAT_005db7aa
;   undefined4 DAT_005db7ae
;   undefined4 DAT_005db7b2
;   undefined4 DAT_005db7b6
;   undefined4 DAT_005db7ba
;   ... and 16 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   core_inv.cpp_getItemModel_FUN_004d9db0
;   crt_string.c__stricmp_FUN_005b8130
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046b710
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dbd80
        ;   Label: core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80
    PUSH ESI                            ; 004dbd81
    PUSH EDI                            ; 004dbd82
    PUSH EBP                            ; 004dbd83
    MOV EBP,ESP                         ; 004dbd84
    SUB ESP,0xa4                        ; 004dbd86
    SUB EBP,0x66                        ; 004dbd8c
    MOV EBX,dword ptr [EBP + 0x7e]      ; 004dbd8f
    MOV EDI,dword ptr [EBP + 0x8a]      ; 004dbd92
    TEST EBX,EBX                        ; 004dbd98
    JZ 0x004dc24d                       ; 004dbd9a
        ;   XREF to: 004dc24d (CONDITIONAL_JUMP)  ; LAB_004dc24d
    CMP dword ptr [0x006141b8],0x280    ; 004dbda0 | DAT_006141b8
    JLE 0x004dbe09                      ; 004dbdaa
        ;   XREF to: 004dbe09 (CONDITIONAL_JUMP)  ; LAB_004dbe09
    MOV EDX,dword ptr [EBP + 0x82]      ; 004dbdac
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dbdb2
    ADD EDX,EAX                         ; 004dbdb9
    SHL EDX,0x7                         ; 004dbdbb
    MOV ECX,dword ptr [0x006141b8]      ; 004dbdbe | DAT_006141b8
    MOV EAX,EDX                         ; 004dbdc4
    SAR EDX,0x1f                        ; 004dbdc6
    IDIV ECX                            ; 004dbdc9
    MOV dword ptr [EBP + 0x82],EAX      ; 004dbdcb
    MOV EAX,dword ptr [EBP + 0x86]      ; 004dbdd1
    SHL EAX,0x5                         ; 004dbdd7
    MOV EDX,EAX                         ; 004dbdda
    SHL EAX,0x4                         ; 004dbddc
    SUB EAX,EDX                         ; 004dbddf
    MOV EDX,EAX                         ; 004dbde1
    MOV ESI,dword ptr [0x006141bc]      ; 004dbde3 | DAT_006141bc
    SAR EDX,0x1f                        ; 004dbde9
    IDIV ESI                            ; 004dbdec
    LEA EDX,[EDI*0x4 + 0x0]             ; 004dbdee
    ADD EDX,EDI                         ; 004dbdf5
    SHL EDX,0x7                         ; 004dbdf7
    MOV dword ptr [EBP + 0x86],EAX      ; 004dbdfa
    MOV EAX,EDX                         ; 004dbe00
    SAR EDX,0x1f                        ; 004dbe02
    IDIV ECX                            ; 004dbe05
    MOV EDI,EAX                         ; 004dbe07
    MOV EAX,[0x0061b5a8]                ; 004dbe09 | g_CDemonSetPtr
        ;   Label: LAB_004dbe09
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004dbe0e | g_CDemonSetInstance.rendering_mode
    MOV dword ptr [EAX + 0x15ae88],0xffffb7d5 ; 004dbe18 | g_CDemonSetInstance.light_direction.x
    MOV dword ptr [EAX + 0x15ae8c],0xffffb7d5 ; 004dbe22 | g_CDemonSetInstance.light_direction.y
    MOV dword ptr [EAX + 0x15ae90],0x482b ; 004dbe2c | g_CDemonSetInstance.light_direction.z
    MOV dword ptr [EAX + 0x15ae94],0x7d00 ; 004dbe36 | g_CDemonSetInstance.ambient_base_quick
    MOV EAX,[0x01c2a370]                ; 004dbe40 | DAT_01c2a370
    MOV EDX,EAX                         ; 004dbe45
    SAR EDX,0x1f                        ; 004dbe47
    SHL EDX,0x2                         ; 004dbe4a
    SBB EAX,EDX                         ; 004dbe4d
    SAR EAX,0x2                         ; 004dbe4f
    MOV EDX,dword ptr [0x01d02f44]      ; 004dbe52 | DAT_01d02f44
    ADD EDX,EAX                         ; 004dbe58
    PUSH EDX                            ; 004dbe5a
    MOV dword ptr [0x01d02f44],EDX      ; 004dbe5b | DAT_01d02f44
    CALL engine_matrix.c_FUN_004e86b0   ; 004dbe61
        ;   XREF to: 004e86b0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_004e86b0(int angle)
    ADD ESP,0x4                         ; 004dbe66
    MOV ESI,EAX                         ; 004dbe69
    MOV EAX,[0x01d02f44]                ; 004dbe6b | DAT_01d02f44
    PUSH EAX                            ; 004dbe70
    CALL engine_matrix.c_FUN_004e86f0   ; 004dbe71
        ;   XREF to: 004e86f0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_004e86f0(int angle)
    MOV EDX,0x482b                      ; 004dbe76
    ADD ESP,0x4                         ; 004dbe7b
    MOV ECX,EAX                         ; 004dbe7e
    MOV EAX,ESI                         ; 004dbe80
    IMUL EDX                            ; 004dbe82
    SHRD EAX,EDX,0x10                   ; 004dbe84
    MOV EDX,dword ptr [0x0061b5a8]      ; 004dbe88 | g_CDemonSetPtr
    MOV dword ptr [EDX + 0x15ae88],EAX  ; 004dbe8e | g_CDemonSetInstance.light_direction.x
    MOV EDX,0x482b                      ; 004dbe94
    MOV EAX,ECX                         ; 004dbe99
    IMUL EDX                            ; 004dbe9b
    SHRD EAX,EDX,0x10                   ; 004dbe9d
    PUSH EDI                            ; 004dbea1
    MOV EDX,dword ptr [0x0061b5a8]      ; 004dbea2 | g_CDemonSetPtr
    PUSH EDI                            ; 004dbea8
    MOV dword ptr [EDX + 0x15ae90],EAX  ; 004dbea9 | g_CDemonSetInstance.light_direction.z
    MOV EDX,dword ptr [EBP + 0x86]      ; 004dbeaf
    PUSH EDX                            ; 004dbeb5
    MOV ECX,dword ptr [EBP + 0x82]      ; 004dbeb6
    PUSH ECX                            ; 004dbebc
    MOV ESI,dword ptr [0x0060b280]      ; 004dbebd | DAT_0060b280
    PUSH ESI                            ; 004dbec3 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046b710 ; 004dbec4
        ;   XREF to: 0046b710 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046b710(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 004dbec9
    PUSH EBX                            ; 004dbecc
    CALL core_inv.cpp_getItemModel_FUN_004d9db0 ; 004dbecd
        ;   XREF to: 004d9db0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_inv.cpp_getItemModel_FUN_004d9db0(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004dbed2
    PUSH EAX                            ; 004dbed5
    LEA EDI,[EBP + -0x3e]               ; 004dbed6
    MOV dword ptr [EBP + 0x5a],EAX      ; 004dbed9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004dbedc
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004dbee1
    MOV ESI,dword ptr [EAX + 0x350]     ; 004dbee6
    MOVSD.REP ES:EDI,ESI                ; 004dbeec
    FLD float ptr [EBP + -0x32]         ; 004dbeee
    FLD float ptr [EBP + -0x2e]         ; 004dbef1
    FLD float ptr [EBP + -0x2a]         ; 004dbef4
    LEA EDI,[EBP + 0xa]                 ; 004dbef7
    LEA ESI,[EBP + -0x26]               ; 004dbefa
    FXCH ST2                            ; 004dbefd
    FSUB float ptr [EBP + -0x3e]        ; 004dbeff
    FXCH                                ; 004dbf02
    FSUB float ptr [EBP + -0x3a]        ; 004dbf04
    FXCH ST2                            ; 004dbf07
    FSUB float ptr [EBP + -0x36]        ; 004dbf09
    FXCH                                ; 004dbf0c
    FSTP float ptr [EBP + -0x26]        ; 004dbf0e
    FXCH                                ; 004dbf11
    FSTP float ptr [EBP + -0x22]        ; 004dbf13
    FSTP float ptr [EBP + -0x1e]        ; 004dbf16
    MOVSD ES:EDI,ESI                    ; 004dbf19
    MOVSD ES:EDI,ESI                    ; 004dbf1a
    MOVSD ES:EDI,ESI                    ; 004dbf1b
    FLD float ptr [0x005db79a]          ; 004dbf1c | DAT_005db79a
    FLD float ptr [EBP + 0xa]           ; 004dbf22
    FMUL ST1                            ; 004dbf25
    FLD float ptr [EBP + 0xe]           ; 004dbf27
    FMUL ST2                            ; 004dbf2a
    FLD float ptr [EBP + 0x12]          ; 004dbf2c
    FMULP ST3                           ; 004dbf2f
    LEA EDI,[EBP + -0xe]                ; 004dbf31
    LEA ESI,[EBP + -0x2]                ; 004dbf34
    FXCH                                ; 004dbf37
    FSTP float ptr [EBP + -0x2]         ; 004dbf39
    FSTP float ptr [EBP + 0x2]          ; 004dbf3c
    FSTP float ptr [EBP + 0x6]          ; 004dbf3f
    MOVSD ES:EDI,ESI                    ; 004dbf42
    MOVSD ES:EDI,ESI                    ; 004dbf43
    MOVSD ES:EDI,ESI                    ; 004dbf44
    ADD ESP,0x4                         ; 004dbf45
    FLD float ptr [EBP + -0xe]          ; 004dbf48
    FCOMP float ptr [EBP + -0xa]        ; 004dbf4b
    FNSTSW AX                           ; 004dbf4e
    SAHF                                ; 004dbf50
    JBE 0x004dc255                      ; 004dbf51
        ;   XREF to: 004dc255 (CONDITIONAL_JUMP)  ; LAB_004dc255
    FLD float ptr [EBP + -0xe]          ; 004dbf57
    FCOMP float ptr [EBP + -0x6]        ; 004dbf5a
    FNSTSW AX                           ; 004dbf5d
    SAHF                                ; 004dbf5f
    JBE 0x004dc255                      ; 004dbf60
        ;   XREF to: 004dc255 (CONDITIONAL_JUMP)  ; LAB_004dc255
    MOV EAX,dword ptr [EBP + -0xe]      ; 004dbf66
    MOV dword ptr [EBP + 0x62],EAX      ; 004dbf69
        ;   Label: LAB_004dbf69
    PUSH 0x5db750                       ; 004dbf6c | DAT_005db750
    PUSH EBX                            ; 004dbf71
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dbf72
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dbf77
    TEST EAX,EAX                        ; 004dbf7a
    JZ 0x004dc270                       ; 004dbf7c
        ;   XREF to: 004dc270 (CONDITIONAL_JUMP)  ; LAB_004dc270
    FLD float ptr [EBP + 0x62]          ; 004dbf82
        ;   Label: LAB_004dbf82
    FLD ST0                             ; 004dbf85
    FMUL double ptr [0x005db7a2]        ; 004dbf87 | DAT_005db7a2
    FSTP ST1                            ; 004dbf8d
    FSTP float ptr [EBP + 0x62]         ; 004dbf8f
    FLD float ptr [EBP + 0x62]          ; 004dbf92
        ;   Label: LAB_004dbf92
    FCHS                                ; 004dbf95
    FMUL double ptr [0x005db7a2]        ; 004dbf97 | DAT_005db7a2
    FSTP float ptr [EBP + 0x5e]         ; 004dbf9d
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004dbfa0
    MOV dword ptr [EBP + 0x2a],EAX      ; 004dbfa3
    LEA EAX,[EBP + 0x22]                ; 004dbfa6
    PUSH EAX                            ; 004dbfa9
    MOV EDX,dword ptr [0x0060b280]      ; 004dbfaa | DAT_0060b280
    XOR EDI,EDI                         ; 004dbfb0
    PUSH EDX                            ; 004dbfb2 | DAT_01ba5c50
    MOV dword ptr [EBP + 0x22],EDI      ; 004dbfb3
    MOV dword ptr [EBP + 0x26],EDI      ; 004dbfb6
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0 ; 004dbfb9
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004dbfbe
    MOV ECX,dword ptr [0x0060b280]      ; 004dbfc1 | DAT_0060b280
    PUSH 0x42100000                     ; 004dbfc7
    PUSH ECX                            ; 004dbfcc | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0 ; 004dbfcd
        ;   XREF to: 0046b4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 004dbfd2
    PUSH 0x265370c                      ; 004dbfd5 | DAT_0265370c
    MOV ESI,dword ptr [0x0060b280]      ; 004dbfda | DAT_0060b280
    PUSH ESI                            ; 004dbfe0 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030 ; 004dbfe1
        ;   XREF to: 0046b030 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004dbfe6
    PUSH 0x265370c                      ; 004dbfe9 | DAT_0265370c
    MOV EDI,dword ptr [0x0060b280]      ; 004dbfee | DAT_0060b280
    PUSH EDI                            ; 004dbff4 | DAT_01ba5c50
    LEA ESI,[EBP + 0x16]                ; 004dbff5
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004dbff8
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    FLD float ptr [EBP + -0x3e]         ; 004dbffd
    FLD float ptr [EBP + -0x3a]         ; 004dc000
    FLD float ptr [EBP + -0x36]         ; 004dc003
    LEA EDI,[EBP + -0x1a]               ; 004dc006
    FXCH ST2                            ; 004dc009
    FADD float ptr [EBP + -0x32]        ; 004dc00b
    FXCH                                ; 004dc00e
    FADD float ptr [EBP + -0x2e]        ; 004dc010
    FXCH ST2                            ; 004dc013
    FADD float ptr [EBP + -0x2a]        ; 004dc015
    FXCH                                ; 004dc018
    FSTP float ptr [EBP + 0x16]         ; 004dc01a
    FXCH                                ; 004dc01d
    FSTP float ptr [EBP + 0x1a]         ; 004dc01f
    FSTP float ptr [EBP + 0x1e]         ; 004dc022
    MOVSD ES:EDI,ESI                    ; 004dc025
    MOVSD ES:EDI,ESI                    ; 004dc026
    MOVSD ES:EDI,ESI                    ; 004dc027
    FLD float ptr [0x005db7aa]          ; 004dc028 | DAT_005db7aa
    FLD float ptr [EBP + -0x1a]         ; 004dc02e
    FMUL ST1                            ; 004dc031
    FLD float ptr [EBP + -0x16]         ; 004dc033
    FMUL ST2                            ; 004dc036
    FLD float ptr [EBP + -0x12]         ; 004dc038
    FMULP ST3                           ; 004dc03b
    ADD ESP,0x8                         ; 004dc03d
    XOR EAX,EAX                         ; 004dc040
    PUSH 0x5db75f                       ; 004dc042 | = "CBoxActor"
    MOV [0x01c38aec],EAX                ; 004dc047 | DAT_01c38aec
    PUSH EBX                            ; 004dc04c
    LEA EDI,[EBP + 0x3a]                ; 004dc04d
    LEA ESI,[EBP + 0x46]                ; 004dc050
    FXCH                                ; 004dc053
    FSTP float ptr [EBP + 0x46]         ; 004dc055
    FSTP float ptr [EBP + 0x4a]         ; 004dc058
    FSTP float ptr [EBP + 0x4e]         ; 004dc05b
    MOVSD ES:EDI,ESI                    ; 004dc05e
    MOVSD ES:EDI,ESI                    ; 004dc05f
    MOVSD ES:EDI,ESI                    ; 004dc060
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dc061
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc066
    TEST EAX,EAX                        ; 004dc069
    JZ 0x004dc28b                       ; 004dc06b
        ;   XREF to: 004dc28b (CONDITIONAL_JUMP)  ; LAB_004dc28b
    MOV ESI,dword ptr [0x007bc9e8]      ; 004dc071 | g_CBoxActorClassInfo.name_hash
    PUSH ESI                            ; 004dc077
    PUSH EBX                            ; 004dc078
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dc079
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    LEA EDX,[EAX + 0x7c8]               ; 004dc07e
    LEA EAX,[EBP + 0x2e]                ; 004dc084
    ADD ESP,0x8                         ; 004dc087
    CMP EAX,EDX                         ; 004dc08a
    JZ 0x004dc09f                       ; 004dc08c
        ;   XREF to: 004dc09f (CONDITIONAL_JUMP)  ; LAB_004dc09f
    MOV EAX,dword ptr [EDX]             ; 004dc08e
    MOV dword ptr [EBP + 0x2e],EAX      ; 004dc090
    MOV EAX,dword ptr [EDX + 0x4]       ; 004dc093
    MOV dword ptr [EBP + 0x32],EAX      ; 004dc096
    MOV EAX,dword ptr [EDX + 0x8]       ; 004dc099
    MOV dword ptr [EBP + 0x36],EAX      ; 004dc09c
    PUSH 0x5db769                       ; 004dc09f | = "CKeyActor"
        ;   Label: LAB_004dc09f
    PUSH EBX                            ; 004dc0a4
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dc0a5
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc0aa
    TEST EAX,EAX                        ; 004dc0ad
    JZ 0x004dc0bd                       ; 004dc0af
        ;   XREF to: 004dc0bd (CONDITIONAL_JUMP)  ; LAB_004dc0bd
    FLD float ptr [EBP + 0x2e]          ; 004dc0b1
    FADD float ptr [0x005db7ae]         ; 004dc0b4 | DAT_005db7ae
    FSTP float ptr [EBP + 0x2e]         ; 004dc0ba
    MOV EDI,dword ptr [0x01d0557c]      ; 004dc0bd | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_004dc0bd
    PUSH EDI                            ; 004dc0c3
    PUSH EBX                            ; 004dc0c4
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dc0c5
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dc0ca
    MOV EBX,EAX                         ; 004dc0cd
    TEST EAX,EAX                        ; 004dc0cf
    JZ 0x004dc191                       ; 004dc0d1
        ;   XREF to: 004dc191 (CONDITIONAL_JUMP)  ; LAB_004dc191
    PUSH 0x5db773                       ; 004dc0d7 | = "axe1.kfm"
    ADD EAX,0x32c                       ; 004dc0dc
    PUSH EAX                            ; 004dc0e1
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004dc0e2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004dc0e7
    TEST EAX,EAX                        ; 004dc0ea
    JNZ 0x004dc10a                      ; 004dc0ec
        ;   XREF to: 004dc10a (CONDITIONAL_JUMP)  ; LAB_004dc10a
    FLD float ptr [EBP + 0x36]          ; 004dc0ee
    FLD float ptr [EBP + 0x2e]          ; 004dc0f1
    FADD float ptr [0x005db7b6]         ; 004dc0f4 | DAT_005db7b6
    FXCH                                ; 004dc0fa
    FADD float ptr [0x005db7b2]         ; 004dc0fc | DAT_005db7b2
    FXCH                                ; 004dc102
    FSTP float ptr [EBP + 0x2e]         ; 004dc104
    FSTP float ptr [EBP + 0x36]         ; 004dc107
    PUSH 0x5db77c                       ; 004dc10a | = "ax2.kfm"
        ;   Label: LAB_004dc10a
    LEA EAX,[EBX + 0x32c]               ; 004dc10f
    PUSH EAX                            ; 004dc115
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004dc116
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004dc11b
    TEST EAX,EAX                        ; 004dc11e
    JNZ 0x004dc13e                      ; 004dc120
        ;   XREF to: 004dc13e (CONDITIONAL_JUMP)  ; LAB_004dc13e
    FLD float ptr [EBP + 0x36]          ; 004dc122
    FLD float ptr [EBP + 0x2e]          ; 004dc125
    FADD float ptr [0x005db7ba]         ; 004dc128 | DAT_005db7ba
    FXCH                                ; 004dc12e
    FADD float ptr [0x005db7b6]         ; 004dc130 | DAT_005db7b6
    FXCH                                ; 004dc136
    FSTP float ptr [EBP + 0x2e]         ; 004dc138
    FSTP float ptr [EBP + 0x36]         ; 004dc13b
    PUSH 0x5db784                       ; 004dc13e | = "melee.kfm"
        ;   Label: LAB_004dc13e
    LEA EAX,[EBX + 0x32c]               ; 004dc143
    PUSH EAX                            ; 004dc149
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004dc14a
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004dc14f
    TEST EAX,EAX                        ; 004dc152
    JNZ 0x004dc172                      ; 004dc154
        ;   XREF to: 004dc172 (CONDITIONAL_JUMP)  ; LAB_004dc172
    FLD float ptr [EBP + 0x36]          ; 004dc156
    FLD float ptr [EBP + 0x2e]          ; 004dc159
    FADD float ptr [0x005db7ba]         ; 004dc15c | DAT_005db7ba
    FXCH                                ; 004dc162
    FADD float ptr [0x005db7b2]         ; 004dc164 | DAT_005db7b2
    FXCH                                ; 004dc16a
    FSTP float ptr [EBP + 0x2e]         ; 004dc16c
    FSTP float ptr [EBP + 0x36]         ; 004dc16f
    PUSH 0x5db78e                       ; 004dc172 | = "cross1.kfm"
        ;   Label: LAB_004dc172
    ADD EBX,0x32c                       ; 004dc177
    PUSH EBX                            ; 004dc17d
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004dc17e
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004dc183
    TEST EAX,EAX                        ; 004dc186
    JNZ 0x004dc191                      ; 004dc188
        ;   XREF to: 004dc191 (CONDITIONAL_JUMP)  ; LAB_004dc191
    MOV dword ptr [EBP + 0x32],0x40490fdb ; 004dc18a
    PUSH 0x0                            ; 004dc191
        ;   Label: LAB_004dc191
    LEA EAX,[EBP + 0x2e]                ; 004dc193
    PUSH EAX                            ; 004dc196
    MOV EDX,dword ptr [0x0060b280]      ; 004dc197 | DAT_0060b280
    PUSH EDX                            ; 004dc19d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 004dc19e
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004dc1a3
    LEA EAX,[EBP + 0x3a]                ; 004dc1a6
    PUSH EAX                            ; 004dc1a9
    PUSH 0x265370c                      ; 004dc1aa | DAT_0265370c
    MOV ECX,dword ptr [0x0060b280]      ; 004dc1af | DAT_0060b280
    PUSH ECX                            ; 004dc1b5 | DAT_01ba5c50
    MOV EBX,dword ptr [EBP + 0x92]      ; 004dc1b6
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 004dc1bc
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004dc1c1
    CMP EBX,0xfde8                      ; 004dc1c4
    JGE 0x004dc29f                      ; 004dc1ca
        ;   XREF to: 004dc29f (CONDITIONAL_JUMP)  ; LAB_004dc29f
    PUSH EBX                            ; 004dc1d0
    MOV EAX,[0x0060b280]                ; 004dc1d1 | DAT_0060b280
    PUSH EAX                            ; 004dc1d6 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004dc1d7
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004dc1dc
    PUSH 0x1                            ; 004dc1df
    MOV EDX,dword ptr [0x0060b280]      ; 004dc1e1 | DAT_0060b280
    PUSH EDX                            ; 004dc1e7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540 ; 004dc1e8
        ;   XREF to: 0046c540 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 004dc1ed
    PUSH 0x2e7                          ; 004dc1f0
    MOV ECX,dword ptr [EBP + 0x5a]      ; 004dc1f5
    PUSH 0x0                            ; 004dc1f8
    PUSH ECX                            ; 004dc1fa
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004dc1fb
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004dc200
    MOV EBX,dword ptr [0x0060b280]      ; 004dc203 | DAT_0060b280
    PUSH EBX                            ; 004dc209 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900 ; 004dc20a
        ;   XREF to: 0046c900 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004dc20f
    MOV ESI,dword ptr [0x0060b280]      ; 004dc212 | DAT_0060b280
        ;   Label: LAB_004dc212
    PUSH ESI                            ; 004dc218 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 004dc219
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004dc21e
    MOV EDI,dword ptr [0x0060b280]      ; 004dc221 | DAT_0060b280
    PUSH EDI                            ; 004dc227 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 004dc228
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004dc22d
    MOV EAX,[0x0060b280]                ; 004dc230 | DAT_0060b280
    PUSH EAX                            ; 004dc235 | DAT_01ba5c50
    CALL engine_drender.cpp_popViewport_FUN_0046b740 ; 004dc236
        ;   XREF to: 0046b740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_popViewport_FUN_0046b740()
    MOV EAX,[0x0061b5a8]                ; 004dc23b | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004dc240
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004dc243 | g_CDemonSetInstance.rendering_mode
    LEA ESP,[EBP + 0x66]                ; 004dc24d
        ;   Label: LAB_004dc24d
    POP EBP                             ; 004dc250
    POP EDI                             ; 004dc251
    POP ESI                             ; 004dc252
    POP EBX                             ; 004dc253
    RET                                 ; 004dc254
    FLD float ptr [EBP + -0xa]          ; 004dc255
        ;   Label: LAB_004dc255
    FCOMP float ptr [EBP + -0x6]        ; 004dc258
    FNSTSW AX                           ; 004dc25b
    SAHF                                ; 004dc25d
    JBE 0x004dc268                      ; 004dc25e
        ;   XREF to: 004dc268 (CONDITIONAL_JUMP)  ; LAB_004dc268
    MOV EAX,dword ptr [EBP + -0xa]      ; 004dc260
    JMP 0x004dbf69                      ; 004dc263
        ;   XREF to: 004dbf69 (UNCONDITIONAL_JUMP)  ; LAB_004dbf69
    MOV EAX,dword ptr [EBP + -0x6]      ; 004dc268
        ;   Label: LAB_004dc268
    JMP 0x004dbf69                      ; 004dc26b
        ;   XREF to: 004dbf69 (UNCONDITIONAL_JUMP)  ; LAB_004dbf69
    PUSH 0x5db755                       ; 004dc270 | = "CKeyActor"
        ;   Label: LAB_004dc270
    PUSH EBX                            ; 004dc275
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dc276
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc27b
    TEST EAX,EAX                        ; 004dc27e
    JNZ 0x004dbf82                      ; 004dc280
        ;   XREF to: 004dbf82 (CONDITIONAL_JUMP)  ; LAB_004dbf82
    JMP 0x004dbf92                      ; 004dc286
        ;   XREF to: 004dbf92 (UNCONDITIONAL_JUMP)  ; LAB_004dbf92
    MOV dword ptr [EBP + 0x36],EAX      ; 004dc28b
        ;   Label: LAB_004dc28b
    MOV dword ptr [EBP + 0x2e],EAX      ; 004dc28e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004dc291
    MOV dword ptr [EBP + 0x32],EAX      ; 004dc297
    JMP 0x004dc09f                      ; 004dc29a
        ;   XREF to: 004dc09f (UNCONDITIONAL_JUMP)  ; LAB_004dc09f
    PUSH -0x1                           ; 004dc29f
        ;   Label: LAB_004dc29f
    MOV ESI,dword ptr [EBP + 0x5a]      ; 004dc2a1
    PUSH 0x0                            ; 004dc2a4
    PUSH ESI                            ; 004dc2a6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004dc2a7
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004dc2ac
    JMP 0x004dc212                      ; 004dc2af
        ;   XREF to: 004dc212 (UNCONDITIONAL_JUMP)  ; LAB_004dc212

