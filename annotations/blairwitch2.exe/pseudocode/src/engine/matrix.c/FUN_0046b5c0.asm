; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_0046b5c0(void)
;
;
; XREF[8]:
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0 at 0043c651
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0044c830 at 0044c884
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960 at 0044baed
;   core_dlight.cpp_FUN_0044b020 at 0044b0b8
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000 at 00475054
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0 at 0053331f
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00533810 at 00533865
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80 at 00533acf
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_004ea3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b5c0
        ;   Label: engine_matrix.c_FUN_0046b5c0
    PUSH EDI                            ; 0046b5c1
    SUB ESP,0xc                         ; 0046b5c2
    MOV EBX,ESI                         ; 0046b5c5
    MOV ESI,ESP                         ; 0046b5c7
    MOV EDI,EBX                         ; 0046b5c9
    CALL engine_matrix.c_getCameraOrigin_FUN_004ea3b0 ; 0046b5cb
        ;   XREF to: 004ea3b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_getCameraOrigin_FUN_004ea3b0()
    MOV ESI,ESP                         ; 0046b5d0
    MOVSD ES:EDI,ESI                    ; 0046b5d2
    MOVSD ES:EDI,ESI                    ; 0046b5d3
    MOVSD ES:EDI,ESI                    ; 0046b5d4
    MOV EAX,EBX                         ; 0046b5d5
    ADD ESP,0xc                         ; 0046b5d7
    POP EDI                             ; 0046b5da
    POP EBX                             ; 0046b5db
    RET                                 ; 0046b5dc

