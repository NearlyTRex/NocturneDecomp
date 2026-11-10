; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[70]:
;   core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ef70 at 0040eff0
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413970 at 004139b5
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00414e00 at 00414eda
;   core_bird.cpp_CBird_renderOpaque_FUN_00415690 at 004156dd
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419130 at 00419268
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50 at 00418ebe
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00418fc0 at 00419113
;   core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_0041cfd0 at 0041cfd7
;   core_box.cpp_FUN_004207b0 at 004207e7
;   core_box.cpp_FUN_00421670 at 0042178f
;   ... and 60 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00483e60
        ;   Label: engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
    MOV EAX,dword ptr [EAX + 0x4]       ; 00483e64
    RET                                 ; 00483e67

