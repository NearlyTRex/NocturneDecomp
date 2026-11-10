; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer *this_ptr,int blend_mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blend_mode
;
; XREF[40]:
;   core_asgaya.cpp_CAsgaya_renderTransparent_FUN_005a17e0 at 005a18e4
;   core_baal.cpp_CBaal_renderTransparent_FUN_00597970 at 00597a88
;   core_chain.cpp_CChain_renderTransparent_FUN_0042a280 at 0042a38e
;   core_charactr.cpp_FUN_0042d8e0 at 0042d917
;   core_charactr.cpp_FUN_0042f310 at 0042f32a
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0045dea0 at 0045e1e8
;   core_dlight.cpp_FUN_0045d530 at 0045da56
;   core_dlight.cpp_FUN_0045e69e at 0045e726
;   core_dlight.cpp_renderConeLightGeometry_FUN_0045f5a0 at 0045f614
;   core_fire.cpp_CGlassParticle_render_FUN_0049a9f0 at 0049abd3
;   ... and 30 more
;
; Called Functions:
;   engine_3d.c_setBlendMode_FUN_00406c40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0046d4b0
        ;   Label: engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
    PUSH EDX                            ; 0046d4b4
    CALL engine_3d.c_setBlendMode_FUN_00406c40 ; 0046d4b5
        ;   XREF to: 00406c40 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406c40(int blend_mode)
    ADD ESP,0x4                         ; 0046d4ba
    RET                                 ; 0046d4bd

