; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer *this_ptr,int render_alpha)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_alpha
;
; XREF[42]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_004110f0 at 00411233
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00416430 at 0041648b
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00419c20 at 00419c94
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041eaf0 at 0041eb70
;   core_bugs.cpp_CBugs_renderOpaque_FUN_00421540 at 00421655
;   core_chain.cpp_CChain_renderTransparent_FUN_0042c4c0 at 0042c5a9
;   core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0 at 00425dc6
;   core_charactr.cpp_FUN_004270e0 at 0042710d
;   core_cloth.cpp_CCloth_render_FUN_00437db0 at 00437df8
;   core_curtain.cpp_FUN_0043f330 at 0043f3ae
;   ... and 32 more
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00408370
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00461010
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
    PUSH EDX                            ; 00461014
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00461015
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 0046101a
    RET                                 ; 0046101d

