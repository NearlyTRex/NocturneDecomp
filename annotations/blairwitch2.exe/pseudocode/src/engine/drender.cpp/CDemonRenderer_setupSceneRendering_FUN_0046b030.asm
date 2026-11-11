; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030(CDemonRenderer *this_ptr,CVector3f *euler_angles)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   euler_angles
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[7]:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80 at 004dbfe1
;   core_level.cpp_CLevelLoader_update_FUN_004e1600 at 004e1710
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 at 00534318
;   core_set.cpp_FUN_0052fad0 at 0052fe2a
;   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0 at 00538a23
;   shape_spotview.cpp_FUN_00561d90 at 00561e79
;   unkaddr_0059aa80.cpp_CAudioRecPuzzle_renderReel_FUN_0059bb60 at 0059bcb1
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 0046b030
        ;   Label: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
    MOV EDX,dword ptr [ESP + 0x30]      ; 0046b033
    PUSH EDX                            ; 0046b037
    LEA EAX,[ESP + 0x4]                 ; 0046b038
    PUSH EAX                            ; 0046b03c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 0046b03d
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0046b042
    MOV EAX,ESP                         ; 0046b045
    PUSH EAX                            ; 0046b047
    MOV ECX,dword ptr [ESP + 0x30]      ; 0046b048
    PUSH ECX                            ; 0046b04c
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060 ; 0046b04d
        ;   XREF to: 0046b060 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 0046b052
    ADD ESP,0x28                        ; 0046b055
    RET                                 ; 0046b058

