; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer *this_ptr,int render_alpha)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_alpha
;
; XREF[42]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413c21
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419740 at 0041979b
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_0041d1b0 at 0041d222
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_00421ef0 at 00421f6e
;   core_bugs.cpp_CBugs_renderOpaque_FUN_004251b0 at 004252c3
;   core_chain.cpp_CChain_renderTransparent_FUN_004308f0 at 004309d7
;   core_charactr.cpp_CCharacter_renderCollision_FUN_00429b40 at 0042a285
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_0042af60 at 0042af8d
;   core_cloth.cpp_CCloth_render_FUN_0043bae0 at 0043bb28
;   core_curtain.cpp_CCurtain_FUN_0044b060 at 0044b0da
;   ... and 32 more
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0048ca60
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
    PUSH EDX                            ; 0048ca64
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 0048ca65
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 0048ca6a
    RET                                 ; 0048ca6d

