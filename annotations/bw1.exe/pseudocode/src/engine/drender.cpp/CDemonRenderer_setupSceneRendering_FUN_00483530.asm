; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530(CDemonRenderer *this_ptr,CVector3f *euler_angles)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   euler_angles
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[8]:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0 at 004f9332
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0 at 004fea78
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 at 005555c8
;   core_set.cpp_FUN_00550da0 at 005510fa
;   core_setdir.cpp_FUN_00559f80 at 0055a99a
;   core_setdir.cpp_FUN_0055b330 at 0055b3ec
;   shape_spotview.cpp_FUN_005847e0 at 005848c9
;   unkafter_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_00416fa0 at 004170f1
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 00483530
        ;   Label: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
    MOV EDX,dword ptr [ESP + 0x30]      ; 00483533
    PUSH EDX                            ; 00483537
    LEA EAX,[ESP + 0x4]                 ; 00483538
    PUSH EAX                            ; 0048353c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0048353d
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00483542
    MOV EAX,ESP                         ; 00483545
    PUSH EAX                            ; 00483547
    MOV ECX,dword ptr [ESP + 0x30]      ; 00483548
    PUSH ECX                            ; 0048354c
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560 ; 0048354d
        ;   XREF to: 00483560 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 00483552
    ADD ESP,0x28                        ; 00483555
    RET                                 ; 00483558

