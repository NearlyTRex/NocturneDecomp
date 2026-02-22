; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x28]:1  local_28
;
; XREF[11]:
;   core_course.cpp_CCourse_preview_FUN_00443bc0 at 00443cdf
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047cd6b
;   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 at 004feffb
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 0050420d
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0 at 0052a30a
;   core_moon.cpp_CMoon_render_FUN_00529ed0 at 00529f1f
;   core_set.cpp_CDemonSet_renderFlashlightShadow_FUN_0056c990 at 0056ccd4
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0 at 00570b28
;   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70 at 00574ee3
;   core_setedit.cpp_CDemonSet_FUN_00580310 at 0058041b
;   ... and 1 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 0048c1d0
        ;   Label: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
    MOV EDX,dword ptr [ESP + 0x30]      ; 0048c1d3
    PUSH EDX                            ; 0048c1d7
    LEA EAX,[ESP + 0x4]                 ; 0048c1d8
    PUSH EAX                            ; 0048c1dc
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0048c1dd
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0048c1e2
    MOV EAX,ESP                         ; 0048c1e5
    PUSH EAX                            ; 0048c1e7
    MOV ECX,dword ptr [ESP + 0x30]      ; 0048c1e8
    PUSH ECX                            ; 0048c1ec
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200 ; 0048c1ed
        ;   XREF to: 0048c200 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 0048c1f2
    ADD ESP,0x28                        ; 0048c1f5
    RET                                 ; 0048c1f8

