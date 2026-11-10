; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[71]:
;   core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040f3f0 at 0040f470
;   core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20 at 0059fa44
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413c70 at 00413cb5
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00415120 at 004151fa
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00415cd0 at 00415dfc
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_004159e0 at 00415a4e
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00415b60 at 00415cb3
;   core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00419b50 at 00419b57
;   core_box.cpp_CBoundingBox3D_render_FUN_0041b700 at 0041b81f
;   core_box.cpp_FUN_0041a840 at 0041a877
;   ... and 61 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046b960
        ;   Label: engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
    MOV EAX,dword ptr [EAX + 0x4]       ; 0046b964
    RET                                 ; 0046b967

