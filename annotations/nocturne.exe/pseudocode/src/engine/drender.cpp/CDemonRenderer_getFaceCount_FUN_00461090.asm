; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[62]:
;   core_batman.cpp_FUN_00414340 at 00414385
;   core_biggs.cpp_FUN_00415760 at 00415828
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030 at 0041609e
;   core_bodypart.cpp_FUN_004161a0 at 004162e3
;   core_bodypart.cpp_FUN_00416300 at 00416418
;   core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00419bf0 at 00419bf7
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 at 0041cedc
;   core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0 at 0041ddbc
;   core_boxactor.cpp_FUN_0041ea00 at 0041ea32
;   core_bugs.cpp_FUN_00421540 at 0042155f
;   ... and 52 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00461090
        ;   Label: engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
    MOV EAX,dword ptr [EAX + 0x4]       ; 00461094
    RET                                 ; 00461097

