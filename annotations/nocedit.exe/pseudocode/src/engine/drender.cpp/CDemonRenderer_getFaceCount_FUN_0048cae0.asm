; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[72]:
;   core_barrier.cpp_CBarrier_renderTransparent_FUN_00414240 at 00414263
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 0041746e
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_004189b0 at 00418a76
;   core_bodypart.cpp_CBodyPart_FUN_00419340 at 004193c1
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610 at 00419726
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0 at 004195f3
;   core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_0041d180 at 0041d187
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 at 00420513
;   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 at 004211ac
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_00421e00 at 00421e32
;   ... and 62 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048cae0
        ;   Label: engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
    MOV EAX,dword ptr [EAX + 0x4]       ; 0048cae4
    RET                                 ; 0048cae7

