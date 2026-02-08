; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_trap_cpp_CTrap_renderOpaque_FUN_005de920(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005de920
        ;   Label: core_trap.cpp_CTrap_renderOpaque_FUN_005de920
    PUSH ESI                            ; 005de921
    PUSH EDI                            ; 005de922
    PUSH EBP                            ; 005de923
    SUB ESP,0x18                        ; 005de924
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005de927
    LEA EAX,[EBX + 0x20]                ; 005de92b
    PUSH EAX                            ; 005de92e
    MOV EDX,dword ptr [0x006703ec]      ; 005de92f | g_CDemonRendererPtr2
    PUSH EDX                            ; 005de935 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 005de936
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005de93b
    PUSH 0x0                            ; 005de93e
    LEA EAX,[EBX + 0x30]                ; 005de940
    PUSH EAX                            ; 005de943
    MOV ECX,dword ptr [0x006703ec]      ; 005de944 | g_CDemonRendererPtr2
    PUSH ECX                            ; 005de94a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005de94b
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 005de950
    MOV EAX,ESP                         ; 005de953
    PUSH EAX                            ; 005de955
    MOV ESI,dword ptr [EBX + 0x154]     ; 005de956
    PUSH EBX                            ; 005de95c
    CALL dword ptr [ESI + 0x14]         ; 005de95d
    ADD ESP,0x8                         ; 005de960
    PUSH EAX                            ; 005de963
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005de964
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005de969
    MOV ESI,EAX                         ; 005de96c
    TEST EAX,EAX                        ; 005de96e
    JZ 0x005de992                       ; 005de970
        ;   XREF to: 005de992 (CONDITIONAL_JUMP)  ; LAB_005de992
    MOV EDI,dword ptr [EBX + 0x2d8]     ; 005de972
    LEA EAX,[EBX + 0x158]               ; 005de978
    TEST EDI,EDI                        ; 005de97e
    JZ 0x005de9ab                       ; 005de980
        ;   XREF to: 005de9ab (CONDITIONAL_JUMP)  ; LAB_005de9ab
    PUSH -0x1                           ; 005de982
    PUSH 0x40400000                     ; 005de984
    PUSH EAX                            ; 005de989
        ;   Label: LAB_005de989
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005de98a
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005de98f
    MOV EBP,dword ptr [0x006703ec]      ; 005de992 | g_CDemonRendererPtr2
        ;   Label: LAB_005de992
    PUSH EBP                            ; 005de998 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 005de999
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH -0x1                           ; 005de9ab
        ;   Label: LAB_005de9ab
    PUSH 0x0                            ; 005de9ad
    JMP 0x005de989                      ; 005de9af
        ;   XREF to: 005de989 (UNCONDITIONAL_JUMP)  ; LAB_005de989

