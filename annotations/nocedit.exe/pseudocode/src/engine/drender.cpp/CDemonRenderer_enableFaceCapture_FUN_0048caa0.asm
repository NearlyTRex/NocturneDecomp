; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[19]:
;   core_bodypart.cpp_CBodyPart_FUN_00419340 at 0041940e
;   core_cloth.cpp_CCloth_render_FUN_0043bae0 at 0043bcfc
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 at 00457687
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 at 00477a70
;   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 at 00482966
;   core_morph.cpp_CMorphModel_FUN_0052b160 at 0052b261
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70 at 0052b144
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053a395
;   core_set.cpp_CDemonSet_FUN_0056aca0 at 0056ad98
;   core_set.cpp_CDemonSet_FUN_0056be80 at 0056c0f3
;   ... and 9 more
;
; Referenced Globals:
;   uint g_VertexProcessingEnabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0048caa0
        ;   Label: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
    MOV EDX,dword ptr [ESP + 0x4]       ; 0048caa4
    MOV [0x006793bc],EAX                ; 0048caa8 | g_VertexProcessingEnabled
    MOV dword ptr [EDX + 0x10],EAX      ; 0048caad
    RET                                 ; 0048cab0

