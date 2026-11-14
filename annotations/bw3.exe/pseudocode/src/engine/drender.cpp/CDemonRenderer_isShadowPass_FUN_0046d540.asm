; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[53]:
;   core_bird.cpp_CBird_renderOpaque_FUN_0040fe90 at 0040fedd
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00414d40 at 00414e78
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60 at 00414ace
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00414bd0 at 00414d23
;   core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00418f60 at 00418f67
;   core_box.cpp_CBoundingBox3D_render_FUN_0041e9b0 at 0041eacf
;   core_box.cpp_FUN_0041daf0 at 0041db27
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041f8e0 at 0041f912
;   core_bugs.cpp_CBugs_renderOpaque_FUN_004215f0 at 0042160f
;   core_chain.cpp_CChain_renderTransparent_FUN_0042a280 at 0042a291
;   ... and 43 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046d540
        ;   Label: engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
    MOV EAX,dword ptr [EAX + 0x4]       ; 0046d544
    RET                                 ; 0046d547

