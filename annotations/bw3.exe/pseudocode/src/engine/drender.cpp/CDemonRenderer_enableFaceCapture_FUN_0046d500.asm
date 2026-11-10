; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[19]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60 at 00414b2e
;   core_box.cpp_FUN_0041dcd0 at 0041dd98
;   core_cloth.cpp_CCloth_render_FUN_0043f460 at 0043f67c
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_004540c0 at 004540f7
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00461050 at 0046114a
;   core_dpart.cpp_FUN_0046682e at 004668e6
;   core_morph.cpp_CMorphModel_renderFaces_FUN_004fa6d0 at 004fa7d1
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_004fa490 at 004fa6b3
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_005346b0 at 005347c0
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00535a80 at 00535c3e
;   ... and 9 more
;
; Referenced Globals:
;   undefined4 DAT_005fba40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d500
        ;   Label: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046d504
    MOV [0x005fba40],EAX                ; 0046d508 | DAT_005fba40
    MOV dword ptr [EDX + 0x10],EAX      ; 0046d50d
    RET                                 ; 0046d510

