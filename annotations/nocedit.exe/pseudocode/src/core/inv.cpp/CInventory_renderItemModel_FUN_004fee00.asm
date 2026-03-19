; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004fee00(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,int rotation_y,int alpha)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   item
; int              Stack[0xc]:4   viewport_x
; int              Stack[0x10]:4   viewport_y
; int              Stack[0x14]:4   viewport_size
; int              Stack[0x18]:4   rotation_y
; int              Stack[0x1c]:4   alpha
; Local Variables:
; CVector3i        Stack[-0x50]:12  local_50
; CVector3i        Stack[-0x44]:12  local_44
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; CVector3i        Stack[-0x2c]:12  local_2c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370 at 005005e1
;
; Referenced Globals:
;   TerminatedCString s_CGun_0063083e
;   TerminatedCString s_CKeyActor_00630843
;   TerminatedCString s_CKeyActor_0063084d
;   TerminatedCString s_axe1_kfm_00630857
;   TerminatedCString s_ax_kfm_00630860
;   float g_InventoryHalfScale = 0.5
;   double g_InventoryDoubleScale = 2
;   float g_InventoryNegativeHalfScale = -0.5
;   float g_InventoryPiOver2 = 1.570796
;   float g_InventoryNegativePiOver2 = -1.570796
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   int g_GlobalDeltaTimeInt
;   float g_PerspectiveReciprocal
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_inv.cpp_getItemModel_FUN_004fcda0
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fee00
        ;   Label: core_inv.cpp_CInventory_renderItemModel_FUN_004fee00
    PUSH ESI                            ; 004fee01
    PUSH EDI                            ; 004fee02
    PUSH EBP                            ; 004fee03
    MOV EBP,ESP                         ; 004fee04
    SUB ESP,0x70                        ; 004fee06
    MOV EBX,dword ptr [EBP + 0x18]      ; 004fee09
    TEST EBX,EBX                        ; 004fee0c
    JNZ 0x004fee17                      ; 004fee0e
        ;   XREF to: 004fee17 (CONDITIONAL_JUMP)  ; LAB_004fee17
    MOV ESP,EBP                         ; 004fee10
    POP EBP                             ; 004fee12
    POP EDI                             ; 004fee13
    POP ESI                             ; 004fee14
    POP EBX                             ; 004fee15
    RET                                 ; 004fee16
    MOV EAX,[0x006810c8]                ; 004fee17 | g_CDemonSetPtr
        ;   Label: LAB_004fee17
    MOV dword ptr [EAX + 0x15ae70],0x1  ; 004fee1c | g_CDemonSetInstance.rendering_mode
    MOV dword ptr [EAX + 0x15ae74],0xffffb7d5 ; 004fee26 | g_CDemonSetInstance.light_direction.x
    MOV dword ptr [EAX + 0x15ae78],0xffffb7d5 ; 004fee30 | g_CDemonSetInstance.light_direction.y
    MOV dword ptr [EAX + 0x15ae7c],0x482b ; 004fee3a | g_CDemonSetInstance.light_direction.z
    MOV dword ptr [EAX + 0x15ae80],0x7d00 ; 004fee44 | g_CDemonSetInstance.ambient_base_quick
    MOV EAX,[0x02cf6a80]                ; 004fee4e | g_GlobalDeltaTimeInt
    MOV EDX,EAX                         ; 004fee53
    SAR EDX,0x1f                        ; 004fee55
    SHL EDX,0x2                         ; 004fee58
    SBB EAX,EDX                         ; 004fee5b
    SAR EAX,0x2                         ; 004fee5d
    MOV EDX,dword ptr [0x02dcd794]      ; 004fee60 | INT_02dcd794
    ADD EDX,EAX                         ; 004fee66
    PUSH EDX                            ; 004fee68
    MOV dword ptr [0x02dcd794],EDX      ; 004fee69 | INT_02dcd794
    CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0 ; 004fee6f
        ;   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
    ADD ESP,0x4                         ; 004fee74
    MOV EDI,dword ptr [0x02dcd794]      ; 004fee77 | INT_02dcd794
    PUSH EDI                            ; 004fee7d
    MOV ESI,EAX                         ; 004fee7e
    CALL engine_matrix.c_interpolatedCos_FUN_0050c600 ; 004fee80
        ;   XREF to: 0050c600 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)
    MOV EDX,0x482b                      ; 004fee85
    ADD ESP,0x4                         ; 004fee8a
    MOV ECX,EAX                         ; 004fee8d
    MOV EAX,ESI                         ; 004fee8f
    IMUL EDX                            ; 004fee91
    SHRD EAX,EDX,0x10                   ; 004fee93
    MOV EDX,dword ptr [0x006810c8]      ; 004fee97 | g_CDemonSetPtr
    MOV dword ptr [EDX + 0x15ae74],EAX  ; 004fee9d | g_CDemonSetInstance.light_direction.x
    MOV EDX,0x482b                      ; 004feea3
    MOV EAX,ECX                         ; 004feea8
    IMUL EDX                            ; 004feeaa
    SHRD EAX,EDX,0x10                   ; 004feeac
    MOV EDX,dword ptr [0x006810c8]      ; 004feeb0 | g_CDemonSetPtr
    MOV dword ptr [EDX + 0x15ae7c],EAX  ; 004feeb6 | g_CDemonSetInstance.light_direction.z
    MOV EAX,dword ptr [EBP + 0x24]      ; 004feebc
    PUSH EAX                            ; 004feebf
    PUSH EAX                            ; 004feec0
    MOV ECX,dword ptr [EBP + 0x20]      ; 004feec1
    PUSH ECX                            ; 004feec4
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004feec5
    PUSH ESI                            ; 004feec8
    MOV EDI,dword ptr [0x006703ec]      ; 004feec9 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004feecf | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 ; 004feed0
        ;   XREF to: 0048c890 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 004feed5
    PUSH EBX                            ; 004feed8
    CALL core_inv.cpp_getItemModel_FUN_004fcda0 ; 004feed9
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_inv.cpp_getItemModel_FUN_004fcda0(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004feede
    PUSH EAX                            ; 004feee1
    MOV ESI,EAX                         ; 004feee2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004feee4
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x5690]    ; 004feee9
    MOV EAX,dword ptr [EDX]             ; 004feeef
    MOV dword ptr [EBP + -0x70],EAX     ; 004feef1
    LEA EAX,[EDX + 0x4]                 ; 004feef4
    MOV EAX,dword ptr [EAX]             ; 004feef7
    MOV dword ptr [EBP + -0x6c],EAX     ; 004feef9
    LEA EAX,[EDX + 0x8]                 ; 004feefc
    MOV EAX,dword ptr [EAX]             ; 004feeff
    MOV dword ptr [EBP + -0x68],EAX     ; 004fef01
    MOV EAX,dword ptr [EDX + 0xc]       ; 004fef04
    ADD EDX,0xc                         ; 004fef07
    MOV dword ptr [EBP + -0x64],EAX     ; 004fef0a
    LEA EAX,[EDX + 0x4]                 ; 004fef0d
    MOV EAX,dword ptr [EAX]             ; 004fef10
    FLD float ptr [EBP + -0x64]         ; 004fef12
    MOV dword ptr [EBP + -0x60],EAX     ; 004fef15
    FSUB float ptr [EBP + -0x70]        ; 004fef18
    FLD float ptr [EBP + -0x60]         ; 004fef1b
    LEA EAX,[EDX + 0x8]                 ; 004fef1e
    FSUB float ptr [EBP + -0x6c]        ; 004fef21
    MOV EAX,dword ptr [EAX]             ; 004fef24
    FXCH                                ; 004fef26
    FST float ptr [EBP + -0x28]         ; 004fef28
    FLD float ptr [0x0063086a]          ; 004fef2b | g_InventoryHalfScale
    FXCH                                ; 004fef31
    FMUL ST1                            ; 004fef33
    FXCH ST2                            ; 004fef35
    FSTP float ptr [EBP + -0x24]        ; 004fef37
    MOV dword ptr [EBP + -0x5c],EAX     ; 004fef3a
    FLD float ptr [EBP + -0x24]         ; 004fef3d
    FLD float ptr [EBP + -0x5c]         ; 004fef40
    FSUB float ptr [EBP + -0x68]        ; 004fef43
    FXCH                                ; 004fef46
    FMUL ST2                            ; 004fef48
    FXCH                                ; 004fef4a
    FST float ptr [EBP + -0x20]         ; 004fef4c
    FMULP ST2                           ; 004fef4f
    ADD ESP,0x4                         ; 004fef51
    FXCH ST2                            ; 004fef54
    FSTP float ptr [EBP + -0x58]        ; 004fef56
    FXCH                                ; 004fef59
    FSTP float ptr [EBP + -0x54]        ; 004fef5b
    FLD float ptr [EBP + -0x58]         ; 004fef5e
    FXCH                                ; 004fef61
    FSTP float ptr [EBP + -0x50]        ; 004fef63
    FCOMP float ptr [EBP + -0x54]       ; 004fef66
    FNSTSW AX                           ; 004fef69
    SAHF                                ; 004fef6b
    JBE 0x004ff1ba                      ; 004fef6c
        ;   XREF to: 004ff1ba (CONDITIONAL_JUMP)  ; LAB_004ff1ba
    FLD float ptr [EBP + -0x58]         ; 004fef72
    FCOMP float ptr [EBP + -0x50]       ; 004fef75
    FNSTSW AX                           ; 004fef78
    SAHF                                ; 004fef7a
    JBE 0x004ff1ba                      ; 004fef7b
        ;   XREF to: 004ff1ba (CONDITIONAL_JUMP)  ; LAB_004ff1ba
    MOV EAX,dword ptr [EBP + -0x58]     ; 004fef81
    MOV dword ptr [EBP + -0x4],EAX      ; 004fef84
        ;   Label: LAB_004fef84
    PUSH 0x63083e                       ; 004fef87 | = "CGun"
    PUSH EBX                            ; 004fef8c
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fef8d
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fef92
    TEST EAX,EAX                        ; 004fef95
    JZ 0x004ff1d5                       ; 004fef97
        ;   XREF to: 004ff1d5 (CONDITIONAL_JUMP)  ; LAB_004ff1d5
    FLD float ptr [EBP + -0x4]          ; 004fef9d
        ;   Label: LAB_004fef9d
    FLD ST0                             ; 004fefa0
    FMUL double ptr [0x00630872]        ; 004fefa2 | g_InventoryDoubleScale
    FSTP ST1                            ; 004fefa8
    FSTP float ptr [EBP + -0x4]         ; 004fefaa
    FLD float ptr [EBP + -0x4]          ; 004fefad
        ;   Label: LAB_004fefad
    FCHS                                ; 004fefb0
    XOR EAX,EAX                         ; 004fefb2
    FMUL double ptr [0x00630872]        ; 004fefb4 | g_InventoryDoubleScale
    MOV dword ptr [EBP + -0x34],EAX     ; 004fefba
    MOV dword ptr [EBP + -0x30],EAX     ; 004fefbd
    FSTP float ptr [EBP + -0x8]         ; 004fefc0
    MOV EAX,dword ptr [EBP + -0x8]      ; 004fefc3
    MOV dword ptr [EBP + -0x2c],EAX     ; 004fefc6
    LEA EAX,[EBP + -0x34]               ; 004fefc9
    PUSH EAX                            ; 004fefcc
    MOV ECX,dword ptr [0x006703ec]      ; 004fefcd | g_CDemonRendererPtr2
    PUSH ECX                            ; 004fefd3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 004fefd4
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
    ADD ESP,0x8                         ; 004fefd9
    MOV EDI,dword ptr [0x006703ec]      ; 004fefdc | g_CDemonRendererPtr2
    PUSH 0x42100000                     ; 004fefe2
    PUSH EDI                            ; 004fefe7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 004fefe8
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 004fefed
    PUSH 0x3f87558                      ; 004feff0 | g_ZeroVector
    MOV EAX,[0x006703ec]                ; 004feff5 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004feffa | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 ; 004feffb
        ;   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004ff000
    PUSH 0x3f87558                      ; 004ff003 | g_ZeroVector
    MOV EDX,dword ptr [0x006703ec]      ; 004ff008 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004ff00e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004ff00f
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    FLD float ptr [EBP + -0x70]         ; 004ff014
    FADD float ptr [EBP + -0x64]        ; 004ff017
    FST float ptr [EBP + -0x4c]         ; 004ff01a
    FLD float ptr [0x0063087a]          ; 004ff01d | g_InventoryNegativeHalfScale
    FXCH                                ; 004ff023
    FMUL ST1                            ; 004ff025
    FLD float ptr [EBP + -0x68]         ; 004ff027
    FLD float ptr [EBP + -0x6c]         ; 004ff02a
    FADD float ptr [EBP + -0x60]        ; 004ff02d
    FXCH                                ; 004ff030
    FADD float ptr [EBP + -0x5c]        ; 004ff032
    FXCH                                ; 004ff035
    FST float ptr [EBP + -0x48]         ; 004ff037
    FMUL ST3                            ; 004ff03a
    FXCH                                ; 004ff03c
    FST float ptr [EBP + -0x44]         ; 004ff03e
    FMULP ST3                           ; 004ff041
    ADD ESP,0x8                         ; 004ff043
    MOV EAX,dword ptr [EBP + 0x28]      ; 004ff046
    XOR ECX,ECX                         ; 004ff049
    PUSH 0x63084d                       ; 004ff04b | = "CKeyActor"
    MOV dword ptr [0x02d051f4],ECX      ; 004ff050 | g_PerspectiveReciprocal
    MOV dword ptr [EBP + -0x1c],ECX     ; 004ff056
    MOV dword ptr [EBP + -0x14],ECX     ; 004ff059
    MOV dword ptr [EBP + -0x18],EAX     ; 004ff05c
    PUSH EBX                            ; 004ff05f
    FXCH                                ; 004ff060
    FSTP float ptr [EBP + -0x40]        ; 004ff062
    FSTP float ptr [EBP + -0x3c]        ; 004ff065
    FSTP float ptr [EBP + -0x38]        ; 004ff068
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004ff06b
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ff070
    TEST EAX,EAX                        ; 004ff073
    JZ 0x004ff083                       ; 004ff075
        ;   XREF to: 004ff083 (CONDITIONAL_JUMP)  ; LAB_004ff083
    FLD float ptr [EBP + -0x1c]         ; 004ff077
    FADD float ptr [0x0063087e]         ; 004ff07a | g_InventoryPiOver2
    FSTP float ptr [EBP + -0x1c]        ; 004ff080
    MOV EDX,dword ptr [0x02f0d928]      ; 004ff083 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_004ff083
    PUSH EDX                            ; 004ff089
    PUSH EBX                            ; 004ff08a
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ff08b
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ff090
    MOV EBX,EAX                         ; 004ff093
    TEST EAX,EAX                        ; 004ff095
    JZ 0x004ff0fc                       ; 004ff097
        ;   XREF to: 004ff0fc (CONDITIONAL_JUMP)  ; LAB_004ff0fc
    PUSH 0x630857                       ; 004ff099 | = "axe1.kfm"
    ADD EAX,0x1d0                       ; 004ff09e
    PUSH EAX                            ; 004ff0a3
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004ff0a4
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ff0a9
    TEST EAX,EAX                        ; 004ff0ac
    JNZ 0x004ff0ca                      ; 004ff0ae
        ;   XREF to: 004ff0ca (CONDITIONAL_JUMP)  ; LAB_004ff0ca
    FLD float ptr [EBP + -0x14]         ; 004ff0b0
    FLD float ptr [0x00630882]          ; 004ff0b3 | g_InventoryNegativePiOver2
    FLD float ptr [EBP + -0x1c]         ; 004ff0b9
    FADD ST0,ST1                        ; 004ff0bc
    FXCH ST2                            ; 004ff0be
    FADDP                               ; 004ff0c0
    FXCH                                ; 004ff0c2
    FSTP float ptr [EBP + -0x1c]        ; 004ff0c4
    FSTP float ptr [EBP + -0x14]        ; 004ff0c7
    PUSH 0x630860                       ; 004ff0ca | = "ax.kfm"
        ;   Label: LAB_004ff0ca
    LEA EAX,[EBX + 0x1d0]               ; 004ff0cf
    PUSH EAX                            ; 004ff0d5
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004ff0d6
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ff0db
    TEST EAX,EAX                        ; 004ff0de
    JNZ 0x004ff0fc                      ; 004ff0e0
        ;   XREF to: 004ff0fc (CONDITIONAL_JUMP)  ; LAB_004ff0fc
    FLD float ptr [EBP + -0x14]         ; 004ff0e2
    FLD float ptr [0x00630882]          ; 004ff0e5 | g_InventoryNegativePiOver2
    FLD float ptr [EBP + -0x1c]         ; 004ff0eb
    FADD ST0,ST1                        ; 004ff0ee
    FXCH ST2                            ; 004ff0f0
    FADDP                               ; 004ff0f2
    FXCH                                ; 004ff0f4
    FSTP float ptr [EBP + -0x1c]        ; 004ff0f6
    FSTP float ptr [EBP + -0x14]        ; 004ff0f9
    PUSH 0x0                            ; 004ff0fc
        ;   Label: LAB_004ff0fc
    LEA EAX,[EBP + -0x1c]               ; 004ff0fe
    PUSH EAX                            ; 004ff101
    MOV ECX,dword ptr [0x006703ec]      ; 004ff102 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004ff108 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004ff109
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004ff10e
    LEA EAX,[EBP + -0x40]               ; 004ff111
    PUSH EAX                            ; 004ff114
    PUSH 0x3f87558                      ; 004ff115 | g_ZeroVector
    MOV EBX,dword ptr [0x006703ec]      ; 004ff11a | g_CDemonRendererPtr2
    PUSH EBX                            ; 004ff120 | g_CDemonRendererInstance
    MOV EDI,dword ptr [EBP + 0x2c]      ; 004ff121
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004ff124
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004ff129
    CMP EDI,0xfde8                      ; 004ff12c
    JGE 0x004ff1f0                      ; 004ff132
        ;   XREF to: 004ff1f0 (CONDITIONAL_JUMP)  ; LAB_004ff1f0
    PUSH EDI                            ; 004ff138
    MOV EDX,dword ptr [0x006703ec]      ; 004ff139 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004ff13f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004ff140
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ff145
    PUSH 0x1                            ; 004ff148
    MOV ECX,dword ptr [0x006703ec]      ; 004ff14a | g_CDemonRendererPtr2
    PUSH ECX                            ; 004ff150 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0 ; 004ff151
        ;   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 004ff156
    PUSH 0x2e7                          ; 004ff159
    PUSH 0x0                            ; 004ff15e
    PUSH ESI                            ; 004ff160
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004ff161
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004ff166
    MOV EBX,dword ptr [0x006703ec]      ; 004ff169 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004ff16f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 ; 004ff170
        ;   XREF to: 0048da80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ff175
    MOV ESI,dword ptr [0x006703ec]      ; 004ff178 | g_CDemonRendererPtr2
        ;   Label: LAB_004ff178
    PUSH ESI                            ; 004ff17e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004ff17f
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    FLD float ptr [EBP + -0x54]         ; 004ff1ba
        ;   Label: LAB_004ff1ba
    FCOMP float ptr [EBP + -0x50]       ; 004ff1bd
    FNSTSW AX                           ; 004ff1c0
    SAHF                                ; 004ff1c2
    JBE 0x004ff1cd                      ; 004ff1c3
        ;   XREF to: 004ff1cd (CONDITIONAL_JUMP)  ; LAB_004ff1cd
    MOV EAX,dword ptr [EBP + -0x54]     ; 004ff1c5
    JMP 0x004fef84                      ; 004ff1c8
        ;   XREF to: 004fef84 (UNCONDITIONAL_JUMP)  ; LAB_004fef84
    MOV EAX,dword ptr [EBP + -0x50]     ; 004ff1cd
        ;   Label: LAB_004ff1cd
    JMP 0x004fef84                      ; 004ff1d0
        ;   XREF to: 004fef84 (UNCONDITIONAL_JUMP)  ; LAB_004fef84
    PUSH 0x630843                       ; 004ff1d5 | = "CKeyActor"
        ;   Label: LAB_004ff1d5
    PUSH EBX                            ; 004ff1da
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004ff1db
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ff1e0
    TEST EAX,EAX                        ; 004ff1e3
    JNZ 0x004fef9d                      ; 004ff1e5
        ;   XREF to: 004fef9d (CONDITIONAL_JUMP)  ; LAB_004fef9d
    JMP 0x004fefad                      ; 004ff1eb
        ;   XREF to: 004fefad (UNCONDITIONAL_JUMP)  ; LAB_004fefad
    PUSH -0x1                           ; 004ff1f0
        ;   Label: LAB_004ff1f0
    PUSH 0x0                            ; 004ff1f2
    PUSH ESI                            ; 004ff1f4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004ff1f5
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004ff1fa
    JMP 0x004ff178                      ; 004ff1fd
        ;   XREF to: 004ff178 (UNCONDITIONAL_JUMP)  ; LAB_004ff178

