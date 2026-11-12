; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004f90d0(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)
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
; undefined        Stack[-0x90]:1  local_90
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004faaf0 at 004fac49
;
; Referenced Globals:
;   TerminatedCString s_CGun_005e658c
;   TerminatedCString s_CKeyActor_005e6591
;   TerminatedCString s_CBoxActor_005e659b
;   TerminatedCString s_CKeyActor_005e65a5
;   TerminatedCString s_axe1_kfm_005e65af
;   TerminatedCString s_ax_kfm_005e65b8
;   undefined4 DAT_005e65c0
;   undefined4 DAT_005e65c8
;   undefined4 DAT_005e65d0
;   undefined4 DAT_005e65d4
;   undefined4 DAT_005e65d8
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   core_inv.cpp_FUN_004f60c0
;   crt_string.c__stricmp_FUN_005c04e0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
;   engine_drender.cpp_FUN_004839b0
;   engine_drender.cpp_FUN_00483c10
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f90d0
        ;   Label: core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0
    PUSH ESI                            ; 004f90d1
    PUSH EDI                            ; 004f90d2
    PUSH EBP                            ; 004f90d3
    MOV EBP,ESP                         ; 004f90d4
    SUB ESP,0xa4                        ; 004f90d6
    SUB EBP,0x66                        ; 004f90dc
    MOV EBX,dword ptr [EBP + 0x7e]      ; 004f90df
    MOV ESI,dword ptr [EBP + 0x8a]      ; 004f90e2
    TEST EBX,EBX                        ; 004f90e8
    JZ 0x004f9542                       ; 004f90ea
        ;   XREF to: 004f9542 (CONDITIONAL_JUMP)  ; LAB_004f9542
    CMP dword ptr [0x0061b498],0x280    ; 004f90f0 | DAT_0061b498
    JLE 0x004f9159                      ; 004f90fa
        ;   XREF to: 004f9159 (CONDITIONAL_JUMP)  ; LAB_004f9159
    MOV EDX,dword ptr [EBP + 0x82]      ; 004f90fc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f9102
    ADD EDX,EAX                         ; 004f9109
    SHL EDX,0x7                         ; 004f910b
    MOV ECX,dword ptr [0x0061b498]      ; 004f910e | DAT_0061b498
    MOV EAX,EDX                         ; 004f9114
    SAR EDX,0x1f                        ; 004f9116
    IDIV ECX                            ; 004f9119
    MOV dword ptr [EBP + 0x82],EAX      ; 004f911b
    MOV EAX,dword ptr [EBP + 0x86]      ; 004f9121
    SHL EAX,0x5                         ; 004f9127
    MOV EDX,EAX                         ; 004f912a
    SHL EAX,0x4                         ; 004f912c
    SUB EAX,EDX                         ; 004f912f
    MOV EDX,EAX                         ; 004f9131
    MOV EDI,dword ptr [0x0061b49c]      ; 004f9133 | DAT_0061b49c
    SAR EDX,0x1f                        ; 004f9139
    IDIV EDI                            ; 004f913c
    LEA EDX,[ESI*0x4 + 0x0]             ; 004f913e
    ADD EDX,ESI                         ; 004f9145
    SHL EDX,0x7                         ; 004f9147
    MOV dword ptr [EBP + 0x86],EAX      ; 004f914a
    MOV EAX,EDX                         ; 004f9150
    SAR EDX,0x1f                        ; 004f9152
    IDIV ECX                            ; 004f9155
    MOV ESI,EAX                         ; 004f9157
    MOV EAX,[0x00622c18]                ; 004f9159 | g_CDemonSetPtr
        ;   Label: LAB_004f9159
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004f915e | g_CDemonSetInstance.rendering_mode
    MOV dword ptr [EAX + 0x15ae88],0xffffb7d5 ; 004f9168 | g_CDemonSetInstance.light_direction.x
    MOV dword ptr [EAX + 0x15ae8c],0xffffb7d5 ; 004f9172 | g_CDemonSetInstance.light_direction.y
    MOV dword ptr [EAX + 0x15ae90],0x482b ; 004f917c | g_CDemonSetInstance.light_direction.z
    MOV dword ptr [EAX + 0x15ae94],0x7d00 ; 004f9186 | g_CDemonSetInstance.ambient_base_quick
    MOV EAX,[0x01c43530]                ; 004f9190 | DAT_01c43530
    MOV EDX,EAX                         ; 004f9195
    SAR EDX,0x1f                        ; 004f9197
    SHL EDX,0x2                         ; 004f919a
    SBB EAX,EDX                         ; 004f919d
    SAR EAX,0x2                         ; 004f919f
    MOV EDI,dword ptr [0x01d1bc60]      ; 004f91a2 | DAT_01d1bc60
    ADD EDI,EAX                         ; 004f91a8
    PUSH EDI                            ; 004f91aa
    MOV dword ptr [0x01d1bc60],EDI      ; 004f91ab | DAT_01d1bc60
    CALL engine_matrix.c_FUN_00507350   ; 004f91b1
        ;   XREF to: 00507350 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_00507350(int angle)
    ADD ESP,0x4                         ; 004f91b6
    MOV EDX,dword ptr [0x01d1bc60]      ; 004f91b9 | DAT_01d1bc60
    PUSH EDX                            ; 004f91bf
    MOV EDI,EAX                         ; 004f91c0
    CALL engine_matrix.c_FUN_00507390   ; 004f91c2
        ;   XREF to: 00507390 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00507390()
    MOV EDX,0x482b                      ; 004f91c7
    ADD ESP,0x4                         ; 004f91cc
    MOV ECX,EAX                         ; 004f91cf
    MOV EAX,EDI                         ; 004f91d1
    IMUL EDX                            ; 004f91d3
    SHRD EAX,EDX,0x10                   ; 004f91d5
    MOV EDX,dword ptr [0x00622c18]      ; 004f91d9 | g_CDemonSetPtr
    MOV dword ptr [EDX + 0x15ae88],EAX  ; 004f91df | g_CDemonSetInstance.light_direction.x
    MOV EDX,0x482b                      ; 004f91e5
    MOV EAX,ECX                         ; 004f91ea
    IMUL EDX                            ; 004f91ec
    SHRD EAX,EDX,0x10                   ; 004f91ee
    PUSH ESI                            ; 004f91f2
    PUSH ESI                            ; 004f91f3
    MOV ECX,dword ptr [EBP + 0x86]      ; 004f91f4
    PUSH ECX                            ; 004f91fa
    MOV ESI,dword ptr [EBP + 0x82]      ; 004f91fb
    PUSH ESI                            ; 004f9201
    MOV EDI,dword ptr [0x00612560]      ; 004f9202 | DAT_00612560
    MOV EDX,dword ptr [0x00622c18]      ; 004f9208 | g_CDemonSetPtr
    PUSH EDI                            ; 004f920e | DAT_01bc120c
    MOV dword ptr [EDX + 0x15ae90],EAX  ; 004f920f | g_CDemonSetInstance.light_direction.z
    CALL engine_drender.cpp_FUN_00483c10 ; 004f9215
        ;   XREF to: 00483c10 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00483c10()
    ADD ESP,0x14                        ; 004f921a
    PUSH EBX                            ; 004f921d
    CALL core_inv.cpp_FUN_004f60c0      ; 004f921e
        ;   XREF to: 004f60c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f60c0()
    ADD ESP,0x4                         ; 004f9223
    PUSH EAX                            ; 004f9226
    LEA EDI,[EBP + -0x3e]               ; 004f9227
    MOV dword ptr [EBP + 0x5e],EAX      ; 004f922a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004f922d
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004f9232
    MOV ESI,dword ptr [EAX + 0x350]     ; 004f9237
    MOVSD.REP ES:EDI,ESI                ; 004f923d
    FLD float ptr [EBP + -0x32]         ; 004f923f
    FLD float ptr [EBP + -0x2e]         ; 004f9242
    FLD float ptr [EBP + -0x2a]         ; 004f9245
    LEA EDI,[EBP + 0xa]                 ; 004f9248
    LEA ESI,[EBP + -0x26]               ; 004f924b
    FXCH ST2                            ; 004f924e
    FSUB float ptr [EBP + -0x3e]        ; 004f9250
    FXCH                                ; 004f9253
    FSUB float ptr [EBP + -0x3a]        ; 004f9255
    FXCH ST2                            ; 004f9258
    FSUB float ptr [EBP + -0x36]        ; 004f925a
    FXCH                                ; 004f925d
    FSTP float ptr [EBP + -0x26]        ; 004f925f
    FXCH                                ; 004f9262
    FSTP float ptr [EBP + -0x22]        ; 004f9264
    FSTP float ptr [EBP + -0x1e]        ; 004f9267
    MOVSD ES:EDI,ESI                    ; 004f926a
    MOVSD ES:EDI,ESI                    ; 004f926b
    MOVSD ES:EDI,ESI                    ; 004f926c
    FLD float ptr [0x005e65c0]          ; 004f926d | DAT_005e65c0
    FLD float ptr [EBP + 0xa]           ; 004f9273
    FMUL ST1                            ; 004f9276
    FLD float ptr [EBP + 0xe]           ; 004f9278
    FMUL ST2                            ; 004f927b
    FLD float ptr [EBP + 0x12]          ; 004f927d
    FMULP ST3                           ; 004f9280
    LEA EDI,[EBP + 0x16]                ; 004f9282
    LEA ESI,[EBP + 0x46]                ; 004f9285
    FXCH                                ; 004f9288
    FSTP float ptr [EBP + 0x46]         ; 004f928a
    FSTP float ptr [EBP + 0x4a]         ; 004f928d
    FSTP float ptr [EBP + 0x4e]         ; 004f9290
    MOVSD ES:EDI,ESI                    ; 004f9293
    MOVSD ES:EDI,ESI                    ; 004f9294
    MOVSD ES:EDI,ESI                    ; 004f9295
    ADD ESP,0x4                         ; 004f9296
    FLD float ptr [EBP + 0x16]          ; 004f9299
    FCOMP float ptr [EBP + 0x1a]        ; 004f929c
    FNSTSW AX                           ; 004f929f
    SAHF                                ; 004f92a1
    JBE 0x004f954a                      ; 004f92a2
        ;   XREF to: 004f954a (CONDITIONAL_JUMP)  ; LAB_004f954a
    FLD float ptr [EBP + 0x16]          ; 004f92a8
    FCOMP float ptr [EBP + 0x1e]        ; 004f92ab
    FNSTSW AX                           ; 004f92ae
    SAHF                                ; 004f92b0
    JBE 0x004f954a                      ; 004f92b1
        ;   XREF to: 004f954a (CONDITIONAL_JUMP)  ; LAB_004f954a
    MOV EAX,dword ptr [EBP + 0x16]      ; 004f92b7
    MOV dword ptr [EBP + 0x62],EAX      ; 004f92ba
        ;   Label: LAB_004f92ba
    PUSH 0x5e658c                       ; 004f92bd | = "CGun"
    PUSH EBX                            ; 004f92c2
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f92c3
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f92c8
    TEST EAX,EAX                        ; 004f92cb
    JZ 0x004f9565                       ; 004f92cd
        ;   XREF to: 004f9565 (CONDITIONAL_JUMP)  ; LAB_004f9565
    FLD float ptr [EBP + 0x62]          ; 004f92d3
        ;   Label: LAB_004f92d3
    FLD ST0                             ; 004f92d6
    FMUL double ptr [0x005e65c8]        ; 004f92d8 | DAT_005e65c8
    FSTP ST1                            ; 004f92de
    FSTP float ptr [EBP + 0x62]         ; 004f92e0
    FLD float ptr [EBP + 0x62]          ; 004f92e3
        ;   Label: LAB_004f92e3
    FCHS                                ; 004f92e6
    XOR EAX,EAX                         ; 004f92e8
    FMUL double ptr [0x005e65c8]        ; 004f92ea | DAT_005e65c8
    MOV dword ptr [EBP + -0xe],EAX      ; 004f92f0
    MOV dword ptr [EBP + -0xa],EAX      ; 004f92f3
    FSTP float ptr [EBP + 0x5a]         ; 004f92f6
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004f92f9
    MOV dword ptr [EBP + -0x6],EAX      ; 004f92fc
    LEA EAX,[EBP + -0xe]                ; 004f92ff
    PUSH EAX                            ; 004f9302
    MOV ECX,dword ptr [0x00612560]      ; 004f9303 | DAT_00612560
    PUSH ECX                            ; 004f9309 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 ; 004f930a
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004f930f
    MOV ESI,dword ptr [0x00612560]      ; 004f9312 | DAT_00612560
    PUSH 0x42100000                     ; 004f9318
    PUSH ESI                            ; 004f931d | DAT_01bc120c
    CALL engine_drender.cpp_FUN_004839b0 ; 004f931e
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_004839b0()
    ADD ESP,0x8                         ; 004f9323
    PUSH 0x2c8af28                      ; 004f9326 | DAT_02c8af28
    MOV EDI,dword ptr [0x00612560]      ; 004f932b | DAT_00612560
    PUSH EDI                            ; 004f9331 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530 ; 004f9332
        ;   XREF to: 00483530 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004f9337
    PUSH 0x2c8af28                      ; 004f933a | DAT_02c8af28
    MOV EAX,[0x00612560]                ; 004f933f | DAT_00612560
    PUSH EAX                            ; 004f9344 | DAT_01bc120c
    LEA ESI,[EBP + 0x2e]                ; 004f9345
    LEA EDI,[EBP + 0x22]                ; 004f9348
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004f934b
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    FLD float ptr [EBP + -0x3e]         ; 004f9350
    FLD float ptr [EBP + -0x3a]         ; 004f9353
    FLD float ptr [EBP + -0x36]         ; 004f9356
    FXCH ST2                            ; 004f9359
    FADD float ptr [EBP + -0x32]        ; 004f935b
    FXCH                                ; 004f935e
    FADD float ptr [EBP + -0x2e]        ; 004f9360
    FXCH ST2                            ; 004f9363
    FADD float ptr [EBP + -0x2a]        ; 004f9365
    FXCH                                ; 004f9368
    FSTP float ptr [EBP + 0x2e]         ; 004f936a
    FXCH                                ; 004f936d
    FSTP float ptr [EBP + 0x32]         ; 004f936f
    FSTP float ptr [EBP + 0x36]         ; 004f9372
    MOVSD ES:EDI,ESI                    ; 004f9375
    MOVSD ES:EDI,ESI                    ; 004f9376
    MOVSD ES:EDI,ESI                    ; 004f9377
    FLD float ptr [0x005e65d0]          ; 004f9378 | DAT_005e65d0
    FLD float ptr [EBP + 0x22]          ; 004f937e
    FMUL ST1                            ; 004f9381
    FLD float ptr [EBP + 0x26]          ; 004f9383
    FMUL ST2                            ; 004f9386
    FLD float ptr [EBP + 0x2a]          ; 004f9388
    FMULP ST3                           ; 004f938b
    ADD ESP,0x8                         ; 004f938d
    XOR EDX,EDX                         ; 004f9390
    PUSH 0x5e659b                       ; 004f9392 | = "CBoxActor"
    MOV dword ptr [0x01c51cac],EDX      ; 004f9397 | DAT_01c51cac
    PUSH EBX                            ; 004f939d
    LEA EDI,[EBP + -0x1a]               ; 004f939e
    LEA ESI,[EBP + -0x2]                ; 004f93a1
    FXCH                                ; 004f93a4
    FSTP float ptr [EBP + -0x2]         ; 004f93a6
    FSTP float ptr [EBP + 0x2]          ; 004f93a9
    FSTP float ptr [EBP + 0x6]          ; 004f93ac
    MOVSD ES:EDI,ESI                    ; 004f93af
    MOVSD ES:EDI,ESI                    ; 004f93b0
    MOVSD ES:EDI,ESI                    ; 004f93b1
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f93b2
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f93b7
    TEST EAX,EAX                        ; 004f93ba
    JZ 0x004f9580                       ; 004f93bc
        ;   XREF to: 004f9580 (CONDITIONAL_JUMP)  ; LAB_004f9580
    MOV EDI,dword ptr [0x007c5094]      ; 004f93c2 | g_CBoxActorClassInfo.name_hash
    PUSH EDI                            ; 004f93c8
    PUSH EBX                            ; 004f93c9
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f93ca
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    LEA EDX,[EAX + 0x66c]               ; 004f93cf
    LEA EAX,[EBP + 0x3a]                ; 004f93d5
    ADD ESP,0x8                         ; 004f93d8
    CMP EAX,EDX                         ; 004f93db
    JZ 0x004f93f0                       ; 004f93dd
        ;   XREF to: 004f93f0 (CONDITIONAL_JUMP)  ; LAB_004f93f0
    MOV EAX,dword ptr [EDX]             ; 004f93df
    MOV dword ptr [EBP + 0x3a],EAX      ; 004f93e1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f93e4
    MOV dword ptr [EBP + 0x3e],EAX      ; 004f93e7
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f93ea
    MOV dword ptr [EBP + 0x42],EAX      ; 004f93ed
    PUSH 0x5e65a5                       ; 004f93f0 | = "CKeyActor"
        ;   Label: LAB_004f93f0
    PUSH EBX                            ; 004f93f5
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f93f6
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f93fb
    TEST EAX,EAX                        ; 004f93fe
    JZ 0x004f940e                       ; 004f9400
        ;   XREF to: 004f940e (CONDITIONAL_JUMP)  ; LAB_004f940e
    FLD float ptr [EBP + 0x3a]          ; 004f9402
    FADD float ptr [0x005e65d4]         ; 004f9405 | DAT_005e65d4
    FSTP float ptr [EBP + 0x3a]         ; 004f940b
    MOV EAX,[0x01d1e2dc]                ; 004f940e | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_004f940e
    PUSH EAX                            ; 004f9413
    PUSH EBX                            ; 004f9414
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f9415
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f941a
    MOV EBX,EAX                         ; 004f941d
    TEST EAX,EAX                        ; 004f941f
    JZ 0x004f9486                       ; 004f9421
        ;   XREF to: 004f9486 (CONDITIONAL_JUMP)  ; LAB_004f9486
    PUSH 0x5e65af                       ; 004f9423 | = "axe1.kfm"
    ADD EAX,0x1d0                       ; 004f9428
    PUSH EAX                            ; 004f942d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004f942e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f9433
    TEST EAX,EAX                        ; 004f9436
    JNZ 0x004f9454                      ; 004f9438
        ;   XREF to: 004f9454 (CONDITIONAL_JUMP)  ; LAB_004f9454
    FLD float ptr [EBP + 0x42]          ; 004f943a
    FLD float ptr [0x005e65d8]          ; 004f943d | DAT_005e65d8
    FLD float ptr [EBP + 0x3a]          ; 004f9443
    FADD ST0,ST1                        ; 004f9446
    FXCH ST2                            ; 004f9448
    FADDP                               ; 004f944a
    FXCH                                ; 004f944c
    FSTP float ptr [EBP + 0x3a]         ; 004f944e
    FSTP float ptr [EBP + 0x42]         ; 004f9451
    PUSH 0x5e65b8                       ; 004f9454 | = "ax.kfm"
        ;   Label: LAB_004f9454
    LEA EAX,[EBX + 0x1d0]               ; 004f9459
    PUSH EAX                            ; 004f945f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004f9460
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f9465
    TEST EAX,EAX                        ; 004f9468
    JNZ 0x004f9486                      ; 004f946a
        ;   XREF to: 004f9486 (CONDITIONAL_JUMP)  ; LAB_004f9486
    FLD float ptr [EBP + 0x42]          ; 004f946c
    FLD float ptr [0x005e65d8]          ; 004f946f | DAT_005e65d8
    FLD float ptr [EBP + 0x3a]          ; 004f9475
    FADD ST0,ST1                        ; 004f9478
    FXCH ST2                            ; 004f947a
    FADDP                               ; 004f947c
    FXCH                                ; 004f947e
    FSTP float ptr [EBP + 0x3a]         ; 004f9480
    FSTP float ptr [EBP + 0x42]         ; 004f9483
    PUSH 0x0                            ; 004f9486
        ;   Label: LAB_004f9486
    LEA EAX,[EBP + 0x3a]                ; 004f9488
    PUSH EAX                            ; 004f948b
    MOV EDX,dword ptr [0x00612560]      ; 004f948c | DAT_00612560
    PUSH EDX                            ; 004f9492 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004f9493
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004f9498
    LEA EAX,[EBP + -0x1a]               ; 004f949b
    PUSH EAX                            ; 004f949e
    PUSH 0x2c8af28                      ; 004f949f | DAT_02c8af28
    MOV ECX,dword ptr [0x00612560]      ; 004f94a4 | DAT_00612560
    PUSH ECX                            ; 004f94aa | DAT_01bc120c
    MOV EBX,dword ptr [EBP + 0x92]      ; 004f94ab
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004f94b1
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004f94b6
    CMP EBX,0xfde8                      ; 004f94b9
    JGE 0x004f9594                      ; 004f94bf
        ;   XREF to: 004f9594 (CONDITIONAL_JUMP)  ; LAB_004f9594
    PUSH EBX                            ; 004f94c5
    MOV EAX,[0x00612560]                ; 004f94c6 | DAT_00612560
    PUSH EAX                            ; 004f94cb | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004f94cc
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004f94d1
    PUSH 0x1                            ; 004f94d4
    MOV EDX,dword ptr [0x00612560]      ; 004f94d6 | DAT_00612560
    PUSH EDX                            ; 004f94dc | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40 ; 004f94dd
        ;   XREF to: 00484a40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 004f94e2
    PUSH 0x2e7                          ; 004f94e5
    MOV ECX,dword ptr [EBP + 0x5e]      ; 004f94ea
    PUSH 0x0                            ; 004f94ed
    PUSH ECX                            ; 004f94ef
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004f94f0
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004f94f5
    MOV EBX,dword ptr [0x00612560]      ; 004f94f8 | DAT_00612560
    PUSH EBX                            ; 004f94fe | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00 ; 004f94ff
        ;   XREF to: 00484e00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004f9504
    MOV ESI,dword ptr [0x00612560]      ; 004f9507 | DAT_00612560
        ;   Label: LAB_004f9507
    PUSH ESI                            ; 004f950d | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004f950e
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004f9513
    MOV EDI,dword ptr [0x00612560]      ; 004f9516 | DAT_00612560
    PUSH EDI                            ; 004f951c | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004f951d
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004f9522
    MOV EAX,[0x00612560]                ; 004f9525 | DAT_00612560
    PUSH EAX                            ; 004f952a | DAT_01bc120c
    CALL engine_drender.cpp_popViewport_FUN_00483c40 ; 004f952b
        ;   XREF to: 00483c40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_popViewport_FUN_00483c40()
    MOV EAX,[0x00622c18]                ; 004f9530 | g_CDemonSetPtr | g_CDemonSetInstance
    ADD ESP,0x4                         ; 004f9535
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004f9538 | g_CDemonSetInstance.rendering_mode
    LEA ESP,[EBP + 0x66]                ; 004f9542
        ;   Label: LAB_004f9542
    POP EBP                             ; 004f9545
    POP EDI                             ; 004f9546
    POP ESI                             ; 004f9547
    POP EBX                             ; 004f9548
    RET                                 ; 004f9549
    FLD float ptr [EBP + 0x1a]          ; 004f954a
        ;   Label: LAB_004f954a
    FCOMP float ptr [EBP + 0x1e]        ; 004f954d
    FNSTSW AX                           ; 004f9550
    SAHF                                ; 004f9552
    JBE 0x004f955d                      ; 004f9553
        ;   XREF to: 004f955d (CONDITIONAL_JUMP)  ; LAB_004f955d
    MOV EAX,dword ptr [EBP + 0x1a]      ; 004f9555
    JMP 0x004f92ba                      ; 004f9558
        ;   XREF to: 004f92ba (UNCONDITIONAL_JUMP)  ; LAB_004f92ba
    MOV EAX,dword ptr [EBP + 0x1e]      ; 004f955d
        ;   Label: LAB_004f955d
    JMP 0x004f92ba                      ; 004f9560
        ;   XREF to: 004f92ba (UNCONDITIONAL_JUMP)  ; LAB_004f92ba
    PUSH 0x5e6591                       ; 004f9565 | = "CKeyActor"
        ;   Label: LAB_004f9565
    PUSH EBX                            ; 004f956a
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f956b
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f9570
    TEST EAX,EAX                        ; 004f9573
    JNZ 0x004f92d3                      ; 004f9575
        ;   XREF to: 004f92d3 (CONDITIONAL_JUMP)  ; LAB_004f92d3
    JMP 0x004f92e3                      ; 004f957b
        ;   XREF to: 004f92e3 (UNCONDITIONAL_JUMP)  ; LAB_004f92e3
    MOV dword ptr [EBP + 0x42],EAX      ; 004f9580
        ;   Label: LAB_004f9580
    MOV dword ptr [EBP + 0x3a],EAX      ; 004f9583
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004f9586
    MOV dword ptr [EBP + 0x3e],EAX      ; 004f958c
    JMP 0x004f93f0                      ; 004f958f
        ;   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)  ; LAB_004f93f0
    PUSH -0x1                           ; 004f9594
        ;   Label: LAB_004f9594
    MOV ESI,dword ptr [EBP + 0x5e]      ; 004f9596
    PUSH 0x0                            ; 004f9599
    PUSH ESI                            ; 004f959b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004f959c
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004f95a1
    JMP 0x004f9507                      ; 004f95a4
        ;   XREF to: 004f9507 (UNCONDITIONAL_JUMP)  ; LAB_004f9507

