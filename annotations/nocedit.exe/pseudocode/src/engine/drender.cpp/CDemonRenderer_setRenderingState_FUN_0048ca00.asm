; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   state_flag
;
; XREF[21]:
;   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 at 00421146
;   core_chain.cpp_FUN_004308f0 at 00430989
;   core_cloth.cpp_FUN_0043bae0 at 0043bceb
;   core_curtain.cpp_FUN_0044b060 at 0044b170
;   core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0 at 0045456c
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 at 0045769b
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 at 0047381a
;   core_dlight.cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60 at 00476a92
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 at 00477a89
;   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 at 004828c4
;   ... and 11 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
;   engine_prim.c_setCullingMode_FUN_00551b90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048ca00
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ca01
    TEST EDX,EDX                        ; 0048ca05
    JZ 0x0048ca3e                       ; 0048ca07 | LAB_0048ca3e
        ;   XREF to: 0048ca3e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048ca09
    CMP dword ptr [EAX + 0x18],0x0      ; 0048ca0d
    JZ 0x0048ca3a                       ; 0048ca11 | LAB_0048ca3a
        ;   XREF to: 0048ca3a (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 0048ca13
    CALL engine_prim.c_setCullingMode_FUN_00551b90 ; 0048ca15 | void engine_prim.c_setCullingMode_FUN_00551b90(int culling_mode)
        ;   Label: LAB_0048ca15
        ;   XREF to: 00551b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048ca1a
    CMP dword ptr [ESP + 0xc],0x0       ; 0048ca1d
    SETZ AL                             ; 0048ca22
    AND EAX,0xff                        ; 0048ca25
    PUSH EAX                            ; 0048ca2a
    MOV ESI,dword ptr [ESP + 0xc]       ; 0048ca2b
    PUSH ESI                            ; 0048ca2f
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 ; 0048ca30 | void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
        ;   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0048ca35
    POP ESI                             ; 0048ca38
    RET                                 ; 0048ca39
    PUSH 0x1                            ; 0048ca3a
        ;   Label: LAB_0048ca3a
    JMP 0x0048ca15                      ; 0048ca3c | LAB_0048ca15
        ;   XREF to: 0048ca15 (UNCONDITIONAL_JUMP)
    PUSH EDX                            ; 0048ca3e
        ;   Label: LAB_0048ca3e
    JMP 0x0048ca15                      ; 0048ca3f | LAB_0048ca15
        ;   XREF to: 0048ca15 (UNCONDITIONAL_JUMP)

