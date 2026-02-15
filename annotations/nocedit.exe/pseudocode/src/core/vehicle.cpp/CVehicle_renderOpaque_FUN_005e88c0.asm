; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_005e88c0(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 g_CGameInstance.block_auto_save
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_box.cpp_CBoundingBox3D_render_FUN_004210b0
;   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e88c0
        ;   Label: core_vehicle.cpp_CVehicle_renderOpaque_FUN_005e88c0
    PUSH ESI                            ; 005e88c1
    PUSH EDI                            ; 005e88c2
    PUSH EBP                            ; 005e88c3
    SUB ESP,0x68                        ; 005e88c4
    MOV EDX,dword ptr [ESP + 0x7c]      ; 005e88c7
    PUSH EDX                            ; 005e88cb
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005e88cc
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005e88d1
    LEA EAX,[ESP + 0x18]                ; 005e88d4
    PUSH EAX                            ; 005e88d8
    MOV ECX,dword ptr [ESP + 0x80]      ; 005e88d9
    MOV EBX,dword ptr [ESP + 0x80]      ; 005e88e0
    PUSH ECX                            ; 005e88e7
    MOV EBX,dword ptr [EBX + 0x154]     ; 005e88e8
    CALL dword ptr [EBX + 0x14]         ; 005e88ee
    ADD ESP,0x8                         ; 005e88f1
    PUSH EAX                            ; 005e88f4
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005e88f5
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005e88fa
    MOV EBX,dword ptr [ESP + 0x7c]      ; 005e88fd
    MOV dword ptr [ESP + 0x60],EAX      ; 005e8901
    MOV dword ptr [EBX + 0x106c],EAX    ; 005e8905
    TEST EAX,EAX                        ; 005e890b
    JZ 0x005e8960                       ; 005e890d
        ;   XREF to: 005e8960 (CONDITIONAL_JUMP)  ; LAB_005e8960
    MOV EBX,dword ptr [0x006703ec]      ; 005e890f | g_CDemonRendererPtr2
    PUSH EBX                            ; 005e8915 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005e8916
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005e891b
    TEST EAX,EAX                        ; 005e891e
    JZ 0x005e898a                       ; 005e8920
        ;   XREF to: 005e898a (CONDITIONAL_JUMP)  ; LAB_005e898a
    MOV EAX,[0x0067b654]                ; 005e8922 | g_CGamePtr
    CMP dword ptr [EAX + 0x240],0x0     ; 005e8927 | g_CGameInstance.block_auto_save
    JNZ 0x005e898a                      ; 005e892e
        ;   XREF to: 005e898a (CONDITIONAL_JUMP)  ; LAB_005e898a
    MOV EAX,ESP                         ; 005e8930
    MOV EBX,dword ptr [ESP + 0x7c]      ; 005e8932
    PUSH EAX                            ; 005e8936
    MOV EAX,dword ptr [ESP + 0x80]      ; 005e8937
    MOV EBX,dword ptr [EBX + 0x154]     ; 005e893e
    PUSH EAX                            ; 005e8944
    CALL dword ptr [EBX + 0x14]         ; 005e8945
    ADD ESP,0x8                         ; 005e8948
    PUSH EAX                            ; 005e894b
    CALL core_box.cpp_CBoundingBox3D_render_FUN_004210b0 ; 005e894c
        ;   XREF to: 004210b0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_render_FUN_004210b0(CBoundingBox3D * this_ptr, int param1, int param2, int param3)
    ADD ESP,0x4                         ; 005e8951
    LEA EAX,[EAX]                       ; 005e8954
    LEA EDX,[EDX]                       ; 005e895a
    MOV ECX,dword ptr [ESP + 0x7c]      ; 005e8960
        ;   Label: LAB_005e8960
    PUSH ECX                            ; 005e8964
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005e8965
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e896a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005e896d
    CMP dword ptr [EAX + 0x106c],0x0    ; 005e8971
    JNZ 0x005e8a57                      ; 005e8978
        ;   XREF to: 005e8a57 (CONDITIONAL_JUMP)  ; LAB_005e8a57
    MOV EAX,dword ptr [ESP + 0x60]      ; 005e897e
        ;   Label: LAB_005e897e
    ADD ESP,0x68                        ; 005e8982
    POP EBP                             ; 005e8985
    POP EDI                             ; 005e8986
    POP ESI                             ; 005e8987
    POP EBX                             ; 005e8988
    RET                                 ; 005e8989
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005e898a
        ;   Label: LAB_005e898a
    PUSH -0x1                           ; 005e898e
    ADD EAX,0x158                       ; 005e8990
    PUSH 0x0                            ; 005e8995
    PUSH EAX                            ; 005e8997
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005e8998
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005e899d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005e89a0
    MOV EBP,dword ptr [EAX + 0x938]     ; 005e89a4
    XOR EDI,EDI                         ; 005e89aa
    TEST EBP,EBP                        ; 005e89ac
    JLE 0x005e8960                      ; 005e89ae
        ;   XREF to: 005e8960 (CONDITIONAL_JUMP)  ; LAB_005e8960
    MOV ESI,dword ptr [ESP + 0x7c]      ; 005e89b0
    LEA EBP,[EAX + 0x950]               ; 005e89b4
    MOV EBX,dword ptr [ESP + 0x7c]      ; 005e89ba
    ADD EAX,0xacc                       ; 005e89be
    ADD ESI,0xae4                       ; 005e89c3
    ADD EBX,0xad8                       ; 005e89c9
    MOV dword ptr [ESP + 0x64],EAX      ; 005e89cf
    PUSH EBX                            ; 005e89d3
        ;   Label: LAB_005e89d3
    PUSH ESI                            ; 005e89d4
    MOV EDX,dword ptr [0x006703ec]      ; 005e89d5 | g_CDemonRendererPtr2
    PUSH EDX                            ; 005e89db | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005e89dc
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 005e89e1
    PUSH 0x0                            ; 005e89e4
    MOV ECX,dword ptr [ESP + 0x68]      ; 005e89e6
    PUSH ECX                            ; 005e89ea
    MOV EAX,[0x006703ec]                ; 005e89eb | g_CDemonRendererPtr2
    PUSH EAX                            ; 005e89f0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005e89f1
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 005e89f6
    PUSH -0x1                           ; 005e89f9
    PUSH 0x0                            ; 005e89fb
    PUSH EBP                            ; 005e89fd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005e89fe
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005e8a03
    MOV EDX,dword ptr [0x006703ec]      ; 005e8a06 | g_CDemonRendererPtr2
    PUSH EDX                            ; 005e8a0c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 005e8a0d
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    MOV ESI,dword ptr [0x006703ec]      ; 005e8a57 | g_CDemonRendererPtr2
        ;   Label: LAB_005e8a57
    PUSH ESI                            ; 005e8a5d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005e8a5e
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005e8a63
    TEST EAX,EAX                        ; 005e8a66
    JNZ 0x005e897e                      ; 005e8a68
        ;   XREF to: 005e897e (CONDITIONAL_JUMP)  ; LAB_005e897e
    MOV EDI,0x3f91eb85                  ; 005e8a6e
    MOV EAX,0x40c00000                  ; 005e8a73
    MOV EBP,0xbe27ef9e                  ; 005e8a78
    MOV dword ptr [ESP + 0x50],EAX      ; 005e8a7d
    MOV dword ptr [ESP + 0x5c],EAX      ; 005e8a81
    LEA EAX,[ESP + 0x48]                ; 005e8a85
    MOV EDX,0xbf91eb85                  ; 005e8a89
    PUSH EAX                            ; 005e8a8e
    LEA EAX,[ESP + 0x34]                ; 005e8a8f
    MOV ESI,dword ptr [ESP + 0x80]      ; 005e8a93
    PUSH EAX                            ; 005e8a9a
    MOV dword ptr [ESP + 0x50],EDI      ; 005e8a9b
    MOV dword ptr [ESP + 0x54],EBP      ; 005e8a9f
    PUSH ESI                            ; 005e8aa3
    MOV dword ptr [ESP + 0x60],EDX      ; 005e8aa4
    MOV dword ptr [ESP + 0x64],EBP      ; 005e8aa8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005e8aac
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005e8ab1
    PUSH 0x41200000                     ; 005e8ab4
    LEA EAX,[ESI + 0x30]                ; 005e8ab9
    PUSH 0x42600000                     ; 005e8abc
    PUSH EAX                            ; 005e8ac1
    LEA EAX,[ESP + 0x3c]                ; 005e8ac2
    PUSH EAX                            ; 005e8ac6
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 ; 005e8ac7
        ;   XREF to: 004760d0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_004760d0(CVector3f * position, CVector3i * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 005e8acc
    LEA EAX,[ESP + 0x54]                ; 005e8acf
    PUSH EAX                            ; 005e8ad3
    LEA EAX,[ESP + 0x40]                ; 005e8ad4
    PUSH EAX                            ; 005e8ad8
    PUSH ESI                            ; 005e8ad9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005e8ada
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EBX,EAX                         ; 005e8adf
    LEA EAX,[ESP + 0x3c]                ; 005e8ae1
    ADD ESP,0xc                         ; 005e8ae5
    CMP EAX,EBX                         ; 005e8ae8
    JZ 0x005e8b00                       ; 005e8aea
        ;   XREF to: 005e8b00 (CONDITIONAL_JUMP)  ; LAB_005e8b00
    MOV EAX,dword ptr [EBX]             ; 005e8aec
    MOV dword ptr [ESP + 0x30],EAX      ; 005e8aee
    MOV EAX,dword ptr [EBX + 0x4]       ; 005e8af2
    MOV dword ptr [ESP + 0x34],EAX      ; 005e8af5
    MOV EAX,dword ptr [EBX + 0x8]       ; 005e8af9
    MOV dword ptr [ESP + 0x38],EAX      ; 005e8afc
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005e8b00
        ;   Label: LAB_005e8b00
    PUSH 0x41200000                     ; 005e8b04
    ADD EAX,0x30                        ; 005e8b09
    PUSH 0x42600000                     ; 005e8b0c
    PUSH EAX                            ; 005e8b11
    LEA EAX,[ESP + 0x3c]                ; 005e8b12
    PUSH EAX                            ; 005e8b16
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 ; 005e8b17
        ;   XREF to: 004760d0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_004760d0(CVector3f * position, CVector3i * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 005e8b1c
    MOV EAX,dword ptr [ESP + 0x60]      ; 005e8b1f
    ADD ESP,0x68                        ; 005e8b23
    POP EBP                             ; 005e8b26
    POP EDI                             ; 005e8b27
    POP ESI                             ; 005e8b28
    POP EBX                             ; 005e8b29
    RET                                 ; 005e8b2a

