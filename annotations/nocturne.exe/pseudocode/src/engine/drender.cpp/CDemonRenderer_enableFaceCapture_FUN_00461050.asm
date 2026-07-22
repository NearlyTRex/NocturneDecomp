; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(int param_1,undefined4 param_2)
;
;
; XREF[16]:
;   FUN_0041d050 at 0041d0ee
;   FUN_005125a0 at 005131d5
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030 at 004160fe
;   core_cloth.cpp_CCloth_render_FUN_00437db0 at 00437fcc
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0 at 0044b027
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00453170 at 00453260
;   core_morph.cpp_CMorphModel_renderFaces_FUN_004dfea0 at 004dffa1
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_004dfcb0 at 004dfe84
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750 at 00508848
;   core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640 at 0050a75a
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_005b7644
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00461050
        ;   Label: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
    MOV EDX,dword ptr [ESP + 0x4]       ; 00461054
    MOV [0x005b7644],EAX                ; 00461058 | DAT_005b7644
    MOV dword ptr [EDX + 0x10],EAX      ; 0046105d
    RET                                 ; 00461060

