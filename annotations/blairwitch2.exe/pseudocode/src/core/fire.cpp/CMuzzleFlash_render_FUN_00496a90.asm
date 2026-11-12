; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_00496a90(CMuzzleFlash *this_ptr)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
; Local Variables:
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
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049c932
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 g_CDemonSetInstance.lighting_quality_mode
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   crt_stdlib.c_rand_FUN_005b849c
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496a90
        ;   Label: core_fire.cpp_CMuzzleFlash_render_FUN_00496a90
    PUSH EBP                            ; 00496a91
    SUB ESP,0x2c                        ; 00496a92
    MOV EBX,dword ptr [ESP + 0x38]      ; 00496a95
    CMP dword ptr [EBX],0x2             ; 00496a99
    JZ 0x00496aa4                       ; 00496a9c
        ;   XREF to: 00496aa4 (CONDITIONAL_JUMP)  ; LAB_00496aa4
    ADD ESP,0x2c                        ; 00496a9e
    POP EBP                             ; 00496aa1
    POP EBX                             ; 00496aa2
    RET                                 ; 00496aa3
    PUSH EDI                            ; 00496aa4
        ;   Label: LAB_00496aa4
    PUSH ESI                            ; 00496aa5
    LEA EAX,[EBX + 0x4]                 ; 00496aa6
    PUSH EAX                            ; 00496aa9
    MOV ECX,dword ptr [0x0060b280]      ; 00496aaa | DAT_0060b280
    PUSH ECX                            ; 00496ab0 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00496ab1
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00496ab6
    PUSH 0x0                            ; 00496ab9
    LEA EAX,[EBX + 0x10]                ; 00496abb
    PUSH EAX                            ; 00496abe
    MOV EBX,dword ptr [0x0060b280]      ; 00496abf | DAT_0060b280
    PUSH EBX                            ; 00496ac5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00496ac6
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00496acb
    PUSH 0x40c90fdb                     ; 00496ace
    PUSH 0x0                            ; 00496ad3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00496ad5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 00496ada
    FLD float ptr [ESP + 0x38]          ; 00496ade
    ADD ESP,0x8                         ; 00496ae2
    XOR ESI,ESI                         ; 00496ae5
    FSTP float ptr [ESP + 0x2c]         ; 00496ae7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00496aeb
    PUSH ESI                            ; 00496aef
    MOV dword ptr [ESP + 0x20],EAX      ; 00496af0
    LEA EAX,[ESP + 0x18]                ; 00496af4
    PUSH EAX                            ; 00496af8
    MOV EBP,dword ptr [0x0060b280]      ; 00496af9 | DAT_0060b280
    PUSH EBP                            ; 00496aff | DAT_01ba5c50
    MOV dword ptr [ESP + 0x20],ESI      ; 00496b00
    MOV dword ptr [ESP + 0x24],ESI      ; 00496b04
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00496b08
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00496b0d
    MOV EAX,[0x0061b5a8]                ; 00496b10 | g_CDemonSetPtr
    PUSH 0x1                            ; 00496b15
    MOV dword ptr [EAX + 0x15ac90],0x1  ; 00496b17 | g_CDemonSetInstance.lighting_quality_mode
    MOV EAX,[0x0060b280]                ; 00496b21 | DAT_0060b280
    PUSH EAX                            ; 00496b26 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00496b27
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00496b2c
    CALL crt_stdlib.c_rand_FUN_005b849c ; 00496b2f
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    AND EAX,0x3fff                      ; 00496b34
    ADD EAX,0x1800                      ; 00496b39
    PUSH EAX                            ; 00496b3e
    MOV EDX,dword ptr [0x0060b280]      ; 00496b3f | DAT_0060b280
    PUSH EDX                            ; 00496b45 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00496b46
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00496b4b
    PUSH 0x63                           ; 00496b4e
    PUSH 0x0                            ; 00496b50
    PUSH 0x1c3ead8                      ; 00496b52
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00496b57
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00496b5c
    MOV dword ptr [ESP + 0x20],ESI      ; 00496b5f
    MOV dword ptr [ESP + 0x24],ESI      ; 00496b63
    MOV dword ptr [ESP + 0x28],0x3fc90fdb ; 00496b67
    PUSH 0x0                            ; 00496b6f
    LEA EAX,[ESP + 0x24]                ; 00496b71
    PUSH EAX                            ; 00496b75
    MOV EDI,dword ptr [0x0060b280]      ; 00496b76 | DAT_0060b280
    PUSH EDI                            ; 00496b7c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00496b7d
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00496b82
    PUSH 0x63                           ; 00496b85
    PUSH 0x0                            ; 00496b87
    PUSH 0x1c3ead8                      ; 00496b89
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00496b8e
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00496b93
    MOV EBP,dword ptr [0x0060b280]      ; 00496b96 | DAT_0060b280
    PUSH EBP                            ; 00496b9c | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 00496b9d
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00496ba2
    XOR EAX,EAX                         ; 00496ba5
    MOV dword ptr [ESP + 0x8],EAX       ; 00496ba7
    PUSH EAX                            ; 00496bab
    MOV dword ptr [ESP + 0x10],EAX      ; 00496bac
    LEA EAX,[ESP + 0xc]                 ; 00496bb0
    PUSH EAX                            ; 00496bb4
    MOV EBX,dword ptr [0x0060b280]      ; 00496bb5 | DAT_0060b280
    MOV ECX,0x3f490fdb                  ; 00496bbb
    PUSH EBX                            ; 00496bc0 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x1c],ECX      ; 00496bc1
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00496bc5
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00496bca
    PUSH 0x63                           ; 00496bcd
    PUSH 0x0                            ; 00496bcf
    PUSH 0x1c3ead8                      ; 00496bd1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00496bd6
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00496bdb
    MOV ESI,dword ptr [0x0060b280]      ; 00496bde | DAT_0060b280
    PUSH ESI                            ; 00496be4 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 00496be5
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00496bea
    MOV EDI,dword ptr [0x0060b280]      ; 00496bed | DAT_0060b280
    MOV EAX,[0x0061b5a8]                ; 00496bf3 | g_CDemonSetPtr
    PUSH EDI                            ; 00496bf8 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 00496bf9 | g_CDemonSetInstance.lighting_quality_mode
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 00496c03
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00496c08
    MOV EBP,dword ptr [0x0060b280]      ; 00496c0b | DAT_0060b280
    PUSH EBP                            ; 00496c11 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 00496c12
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00496c17
    PUSH 0x0                            ; 00496c1a
    MOV EAX,[0x0060b280]                ; 00496c1c | DAT_0060b280
    PUSH EAX                            ; 00496c21 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00496c22
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00496c27
    POP ESI                             ; 00496c2a
    POP EDI                             ; 00496c2b
    ADD ESP,0x2c                        ; 00496c2c
    POP EBP                             ; 00496c2f
    POP EBX                             ; 00496c30
    RET                                 ; 00496c31

