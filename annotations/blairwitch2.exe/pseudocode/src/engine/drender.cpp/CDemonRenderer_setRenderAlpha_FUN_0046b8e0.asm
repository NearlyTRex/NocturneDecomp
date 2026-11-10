; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer *this_ptr,int render_alpha)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_alpha
;
; XREF[47]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00410670 at 004107c5
;   core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980 at 0059f9be
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00415e10 at 00415e6b
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00419b80 at 00419c06
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041c690 at 0041c722
;   core_bugs.cpp_CBugs_renderOpaque_FUN_0041f450 at 0041f59c
;   core_chain.cpp_FUN_005b56c0 at 005b57bc
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00426730 at 0042675d
;   core_charactr.cpp_FUN_00424c80 at 00424d86
;   core_cloth.cpp_CCloth_render_FUN_005b0fe0 at 005b1028
;   ... and 37 more
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0046b8e0
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
    PUSH EDX                            ; 0046b8e4
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0046b8e5
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0046b8ea
    RET                                 ; 0046b8ed

