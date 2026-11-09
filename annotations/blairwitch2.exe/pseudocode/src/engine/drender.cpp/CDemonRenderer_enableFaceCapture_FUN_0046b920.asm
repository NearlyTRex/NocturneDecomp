; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[18]:
;   core_bodypart.cpp_FUN_004159e0 at 00415aae
;   core_box.cpp_FUN_0041aa20 at 0041aae8
;   core_cloth.cpp_CCloth_render_FUN_005b0fe0 at 005b11fc
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_004468c0 at 004468f7
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_0044e7d0 at 0044e8ca
;   core_dpart.cpp_FUN_00461a4e at 00461b06
;   core_morph.cpp_CMorphModel_renderFaces_FUN_005b6c90 at 005b6d91
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_005b6a50 at 005b6c73
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90 at 00531eb4
;   core_set.cpp_FUN_0052dc10 at 0052dd20
;   ... and 8 more
;
; Referenced Globals:
;   undefined4 DAT_006141e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b920
        ;   Label: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046b924
    MOV [0x006141e0],EAX                ; 0046b928 | DAT_006141e0
    MOV dword ptr [EDX + 0x10],EAX      ; 0046b92d
    RET                                 ; 0046b930

