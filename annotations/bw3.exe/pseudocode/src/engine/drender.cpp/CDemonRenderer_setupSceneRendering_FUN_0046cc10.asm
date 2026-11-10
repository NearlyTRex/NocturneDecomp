; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(CDemonRenderer *this_ptr,CVector3f *euler_angles)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   euler_angles
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[7]:
;   core_inv.cpp_FUN_004dbe70 at 004dc102
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20 at 0053af58
;   core_set.cpp_FUN_005365c0 at 0053691a
;   core_setdir.cpp_FUN_0053f940 at 0054035a
;   core_setdir.cpp_FUN_00540cf0 at 00540dac
;   shape_spotview.cpp_FUN_005680b0 at 00568199
;   unkafter_bmppuzzl.cpp_FUN_00412c50 at 00412da1
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 0046cc10
        ;   Label: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
    MOV EDX,dword ptr [ESP + 0x30]      ; 0046cc13
    PUSH EDX                            ; 0046cc17
    LEA EAX,[ESP + 0x4]                 ; 0046cc18
    PUSH EAX                            ; 0046cc1c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 0046cc1d
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0046cc22
    MOV EAX,ESP                         ; 0046cc25
    PUSH EAX                            ; 0046cc27
    MOV ECX,dword ptr [ESP + 0x30]      ; 0046cc28
    PUSH ECX                            ; 0046cc2c
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40 ; 0046cc2d
        ;   XREF to: 0046cc40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 0046cc32
    ADD ESP,0x28                        ; 0046cc35
    RET                                 ; 0046cc38

