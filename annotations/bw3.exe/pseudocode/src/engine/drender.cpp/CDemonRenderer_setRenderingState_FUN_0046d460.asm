; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer *this_ptr,int state_flag)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   state_flag
;
; XREF[21]:
;   core_box.cpp_CBoundingBox3D_render_FUN_0041e9b0 at 0041ea65
;   core_chain.cpp_CChain_renderTransparent_FUN_0042a280 at 0042a32e
;   core_cloth.cpp_CCloth_render_FUN_0043f460 at 0043f495
;   core_curtain.cpp_CCurtain_renderMesh_FUN_00448060 at 00448180
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_004512f0 at 0045136c
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_004540c0 at 0045410b
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170 at 0045d2da
;   core_dlight.cpp_CDemonLight_testVisibility_FUN_00460270 at 004602a2
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00461050 at 0046108f
;   core_dpart.cpp_FUN_0046682e at 00466844
;   ... and 11 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450
;   engine_prim.c_FUN_00515500
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046d460
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046d461
    TEST EDX,EDX                        ; 0046d465
    JZ 0x0046d49e                       ; 0046d467
        ;   XREF to: 0046d49e (CONDITIONAL_JUMP)  ; LAB_0046d49e
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d469
    CMP dword ptr [EAX + 0x18],0x0      ; 0046d46d
    JZ 0x0046d49a                       ; 0046d471
        ;   XREF to: 0046d49a (CONDITIONAL_JUMP)  ; LAB_0046d49a
    PUSH 0x2                            ; 0046d473
    CALL engine_prim.c_FUN_00515500     ; 0046d475
        ;   XREF to: 00515500 (UNCONDITIONAL_CALL)  ; void engine_prim.c_FUN_00515500(int culling_mode)
        ;   Label: LAB_0046d475
    ADD ESP,0x4                         ; 0046d47a
    CMP dword ptr [ESP + 0xc],0x0       ; 0046d47d
    SETZ AL                             ; 0046d482
    AND EAX,0xff                        ; 0046d485
    PUSH EAX                            ; 0046d48a
    MOV ESI,dword ptr [ESP + 0xc]       ; 0046d48b
    PUSH ESI                            ; 0046d48f
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450 ; 0046d490
        ;   XREF to: 0046d450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0046d495
    POP ESI                             ; 0046d498
    RET                                 ; 0046d499
    PUSH 0x1                            ; 0046d49a
        ;   Label: LAB_0046d49a
    JMP 0x0046d475                      ; 0046d49c
        ;   XREF to: 0046d475 (UNCONDITIONAL_JUMP)  ; LAB_0046d475
    PUSH EDX                            ; 0046d49e
        ;   Label: LAB_0046d49e
    JMP 0x0046d475                      ; 0046d49f
        ;   XREF to: 0046d475 (UNCONDITIONAL_JUMP)  ; LAB_0046d475

