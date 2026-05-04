; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_anvil_cpp_CAnvil_renderOpaque_FUN_00411ec0(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0x1c]:24  local_1c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411ec0
        ;   Label: core_anvil.cpp_CAnvil_renderOpaque_FUN_00411ec0
    SUB ESP,0x18                        ; 00411ec1
    MOV EBX,dword ptr [ESP + 0x20]      ; 00411ec4
    CMP dword ptr [EBX + 0x33c],0x0     ; 00411ec8
    JNZ 0x00411ed8                      ; 00411ecf
        ;   XREF to: 00411ed8 (CONDITIONAL_JUMP)  ; LAB_00411ed8
    XOR EAX,EAX                         ; 00411ed1
    ADD ESP,0x18                        ; 00411ed3
    POP EBX                             ; 00411ed6
    RET                                 ; 00411ed7
    PUSH EDI                            ; 00411ed8
        ;   Label: LAB_00411ed8
    PUSH ESI                            ; 00411ed9
    LEA EAX,[EBX + 0x20]                ; 00411eda
    PUSH EAX                            ; 00411edd
    MOV ECX,dword ptr [0x006703ec]      ; 00411ede | g_CDemonRendererPtr2
    PUSH ECX                            ; 00411ee4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00411ee5
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00411eea
    PUSH 0x0                            ; 00411eed
    LEA EAX,[EBX + 0x30]                ; 00411eef
    PUSH EAX                            ; 00411ef2
    MOV ESI,dword ptr [0x006703ec]      ; 00411ef3 | g_CDemonRendererPtr2
    PUSH ESI                            ; 00411ef9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00411efa
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00411eff
    LEA EAX,[ESP + 0x8]                 ; 00411f02
    PUSH EAX                            ; 00411f06
    MOV ESI,dword ptr [EBX + 0x154]     ; 00411f07
    PUSH EBX                            ; 00411f0d
    CALL dword ptr [ESI + 0x14]         ; 00411f0e
    ADD ESP,0x8                         ; 00411f11
    PUSH EAX                            ; 00411f14
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00411f15
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00411f1a
    MOV ESI,EAX                         ; 00411f1d
    TEST EAX,EAX                        ; 00411f1f
    JZ 0x00411f36                       ; 00411f21
        ;   XREF to: 00411f36 (CONDITIONAL_JUMP)  ; LAB_00411f36
    PUSH -0x1                           ; 00411f23
    ADD EBX,0x158                       ; 00411f25
    PUSH 0x0                            ; 00411f2b
    PUSH EBX                            ; 00411f2d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00411f2e
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00411f33
    MOV EDI,dword ptr [0x006703ec]      ; 00411f36 | g_CDemonRendererPtr2
        ;   Label: LAB_00411f36
    PUSH EDI                            ; 00411f3c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 00411f3d
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00411f42
    MOV EAX,ESI                         ; 00411f45
    POP ESI                             ; 00411f47
    POP EDI                             ; 00411f48
    ADD ESP,0x18                        ; 00411f49
    POP EBX                             ; 00411f4c
    RET                                 ; 00411f4d

