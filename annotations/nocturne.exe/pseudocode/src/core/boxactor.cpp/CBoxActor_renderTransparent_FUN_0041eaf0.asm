; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_renderTransparent_FUN_0041eaf0(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   void* PTR_DAT_005ae700 = 01b4d738
;   undefined4 DAT_005ae704
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   undefined4 g_CDemonSet_01e57284.disable_directional_lighting
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041eaf0
        ;   Label: core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041eaf0
    PUSH EBP                            ; 0041eaf1
    SUB ESP,0x18                        ; 0041eaf2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0041eaf5
    LEA EAX,[EBX + 0x150]               ; 0041eaf9
    PUSH EAX                            ; 0041eaff
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0041eb00
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 0041eb05
    ADD ESP,0x4                         ; 0041eb0b
    CMP EDX,0x1                         ; 0041eb0e
    JGE 0x0041eb1b                      ; 0041eb11
        ;   XREF to: 0041eb1b (CONDITIONAL_JUMP)  ; LAB_0041eb1b
    XOR EAX,EAX                         ; 0041eb13
    ADD ESP,0x18                        ; 0041eb15
    POP EBP                             ; 0041eb18
    POP EBX                             ; 0041eb19
    RET                                 ; 0041eb1a
    PUSH EDI                            ; 0041eb1b
        ;   Label: LAB_0041eb1b
    PUSH ESI                            ; 0041eb1c
    LEA EAX,[EBX + 0x20]                ; 0041eb1d
    PUSH EAX                            ; 0041eb20
    MOV ECX,dword ptr [0x005ae700]      ; 0041eb21 | PTR_DAT_005ae700
    PUSH ECX                            ; 0041eb27 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0041eb28
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0041eb2d
    PUSH 0x0                            ; 0041eb30
    LEA EAX,[EBX + 0x30]                ; 0041eb32
    PUSH EAX                            ; 0041eb35
    MOV ESI,dword ptr [0x005ae700]      ; 0041eb36 | PTR_DAT_005ae700
    PUSH ESI                            ; 0041eb3c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0041eb3d
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0041eb42
    PUSH 0x0                            ; 0041eb45
    LEA EAX,[ESP + 0xc]                 ; 0041eb47
    PUSH EAX                            ; 0041eb4b
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0041eb4c
    PUSH EBX                            ; 0041eb52
    CALL dword ptr [ESI + 0x14]         ; 0041eb53
    ADD ESP,0x8                         ; 0041eb56
    PUSH EAX                            ; 0041eb59
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0041eb5a
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0041eb5f
    PUSH 0xffff                         ; 0041eb62
    MOV EDI,dword ptr [0x005ae704]      ; 0041eb67 | DAT_005ae704
    PUSH EDI                            ; 0041eb6d | DAT_01b4d738
    MOV ESI,EAX                         ; 0041eb6e
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 0041eb70
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    MOV EBP,dword ptr [EBX + 0x5f4]     ; 0041eb75
    ADD ESP,0x8                         ; 0041eb7b
    TEST EBP,EBP                        ; 0041eb7e
    JZ 0x0041eb91                       ; 0041eb80
        ;   XREF to: 0041eb91 (CONDITIONAL_JUMP)  ; LAB_0041eb91
    MOV EAX,[0x005be368]                ; 0041eb82 | g_CDemonSet_PTR_005be368
    MOV dword ptr [EAX + 0x15a8a0],0x1  ; 0041eb87 | g_CDemonSet_01e57284.disable_directional_lighting
    TEST ESI,ESI                        ; 0041eb91
        ;   Label: LAB_0041eb91
    JZ 0x0041ebac                       ; 0041eb93
        ;   XREF to: 0041ebac (CONDITIONAL_JUMP)  ; LAB_0041ebac
    PUSH -0x1                           ; 0041eb95
    LEA EAX,[EBX + 0x150]               ; 0041eb97
    PUSH dword ptr [EBX + 0x308]        ; 0041eb9d
    PUSH EAX                            ; 0041eba3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0041eba4
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0041eba9
    CMP dword ptr [EBX + 0x5f4],0x0     ; 0041ebac
        ;   Label: LAB_0041ebac
    JZ 0x0041ebc4                       ; 0041ebb3
        ;   XREF to: 0041ebc4 (CONDITIONAL_JUMP)  ; LAB_0041ebc4
    MOV EAX,[0x005be368]                ; 0041ebb5 | g_CDemonSet_PTR_005be368
    MOV dword ptr [EAX + 0x15a8a0],0x0  ; 0041ebba | g_CDemonSet_01e57284.disable_directional_lighting
    MOV EDX,dword ptr [0x005ae700]      ; 0041ebc4 | PTR_DAT_005ae700
        ;   Label: LAB_0041ebc4
    PUSH EDX                            ; 0041ebca | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0041ebcb
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0041ebd0
    MOV EAX,ESI                         ; 0041ebd3
    POP ESI                             ; 0041ebd5
    POP EDI                             ; 0041ebd6
    ADD ESP,0x18                        ; 0041ebd7
    POP EBP                             ; 0041ebda
    POP EBX                             ; 0041ebdb
    RET                                 ; 0041ebdc

