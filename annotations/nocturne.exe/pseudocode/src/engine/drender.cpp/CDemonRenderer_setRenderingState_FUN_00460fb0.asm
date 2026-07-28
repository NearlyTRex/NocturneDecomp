; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer *this_ptr,int state_flag)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   state_flag
;
; XREF[19]:
;   core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0 at 0041dd56
;   core_chain.cpp_FUN_0042c4c0 at 0042c55b
;   core_cloth.cpp_CCloth_render_FUN_00437db0 at 00437de5
;   core_curtain.cpp_FUN_0043f330 at 0043f440
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0 at 0044b03b
;   core_dlight.cpp_FUN_0044f0b0 at 0044f211
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00453170 at 004531aa
;   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00468d00 at 004690f1
;   core_fire.cpp_CLaserBeam_render_FUN_00485a90 at 00485cf7
;   core_ground.cpp_CGround_render_FUN_004b2110 at 004b2168
;   ... and 9 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
;   engine_prim.c_setCullingMode_FUN_004f9450
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00460fb0
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00460fb1
    TEST EDX,EDX                        ; 00460fb5
    JZ 0x00460fee                       ; 00460fb7
        ;   XREF to: 00460fee (CONDITIONAL_JUMP)  ; LAB_00460fee
    MOV EAX,dword ptr [ESP + 0x8]       ; 00460fb9
    CMP dword ptr [EAX + 0x18],0x0      ; 00460fbd
    JZ 0x00460fea                       ; 00460fc1
        ;   XREF to: 00460fea (CONDITIONAL_JUMP)  ; LAB_00460fea
    PUSH 0x2                            ; 00460fc3
    CALL engine_prim.c_setCullingMode_FUN_004f9450 ; 00460fc5
        ;   XREF to: 004f9450 (UNCONDITIONAL_CALL)  ; void engine_prim.c_setCullingMode_FUN_004f9450(int culling_mode)
        ;   Label: LAB_00460fc5
    ADD ESP,0x4                         ; 00460fca
    CMP dword ptr [ESP + 0xc],0x0       ; 00460fcd
    SETZ AL                             ; 00460fd2
    AND EAX,0xff                        ; 00460fd5
    PUSH EAX                            ; 00460fda
    MOV ESI,dword ptr [ESP + 0xc]       ; 00460fdb
    PUSH ESI                            ; 00460fdf
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 00460fe0
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00460fe5
    POP ESI                             ; 00460fe8
    RET                                 ; 00460fe9
    PUSH 0x1                            ; 00460fea
        ;   Label: LAB_00460fea
    JMP 0x00460fc5                      ; 00460fec
        ;   XREF to: 00460fc5 (UNCONDITIONAL_JUMP)  ; LAB_00460fc5
    PUSH EDX                            ; 00460fee
        ;   Label: LAB_00460fee
    JMP 0x00460fc5                      ; 00460fef
        ;   XREF to: 00460fc5 (UNCONDITIONAL_JUMP)  ; LAB_00460fc5

