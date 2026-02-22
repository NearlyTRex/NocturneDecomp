; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer *this_ptr,CVector3i *output)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0 at 0044d241
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 at 00475924
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 at 00473a93
;   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 at 00474102
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 at 00474c37
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 at 00497ea4
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_0056fbd0 at 0056fbfc
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00570040 at 00570095
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0 at 005702ff
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_0050e2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c760
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
    PUSH EDI                            ; 0048c761
    SUB ESP,0xc                         ; 0048c762
    MOV EBX,ESI                         ; 0048c765
    MOV ESI,ESP                         ; 0048c767
    MOV EDI,EBX                         ; 0048c769
    CALL engine_matrix.c_getCameraOrigin_FUN_0050e2c0 ; 0048c76b
        ;   XREF to: 0050e2c0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraOrigin_FUN_0050e2c0(CVector3i * output)
    MOV ESI,ESP                         ; 0048c770
    MOVSD ES:EDI,ESI                    ; 0048c772
    MOVSD ES:EDI,ESI                    ; 0048c773
    MOVSD ES:EDI,ESI                    ; 0048c774
    MOV EAX,EBX                         ; 0048c775
    ADD ESP,0xc                         ; 0048c777
    POP EDI                             ; 0048c77a
    POP EBX                             ; 0048c77b
    RET                                 ; 0048c77c

