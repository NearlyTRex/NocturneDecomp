; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[19]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50 at 00418f1e
;   core_box.cpp_FUN_00420990 at 00420a58
;   core_cloth.cpp_CCloth_render_FUN_00441800 at 00441a1c
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70 at 00457fa7
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_004673a0 at 0046749a
;   core_dpart.cpp_FUN_00479f5e at 0047a016
;   core_morph.cpp_CMorphModel_renderFaces_FUN_00522dd0 at 00522ed1
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_00522b90 at 00522db3
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0 at 0054f000
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260 at 0055041e
;   ... and 9 more
;
; Referenced Globals:
;   undefined4 DAT_0061b4c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00483e20
        ;   Label: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
    MOV EDX,dword ptr [ESP + 0x4]       ; 00483e24
    MOV [0x0061b4c0],EAX                ; 00483e28 | DAT_0061b4c0
    MOV dword ptr [EDX + 0x10],EAX      ; 00483e2d
    RET                                 ; 00483e30

