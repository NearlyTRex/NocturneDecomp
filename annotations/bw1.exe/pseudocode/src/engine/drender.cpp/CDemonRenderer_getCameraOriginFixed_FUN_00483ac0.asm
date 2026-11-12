; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_00483ac0(CDemonRenderer *this_ptr,CVector3i *output)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90 at 0044dd11
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00465060 at 004650b4
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00464190 at 0046431d
;   core_dlight.cpp_FUN_00463820 at 004638b2
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0 at 0048d544
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_005545a0 at 005545cf
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00554ac0 at 00554b15
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00554d30 at 00554d7f
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_00509050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483ac0
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_00483ac0
    PUSH EDI                            ; 00483ac1
    SUB ESP,0xc                         ; 00483ac2
    MOV EBX,ESI                         ; 00483ac5
    MOV ESI,ESP                         ; 00483ac7
    MOV EDI,EBX                         ; 00483ac9
    CALL engine_matrix.c_getCameraOrigin_FUN_00509050 ; 00483acb
        ;   XREF to: 00509050 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraOrigin_FUN_00509050(CVector3i * output)
    MOV ESI,ESP                         ; 00483ad0
    MOVSD ES:EDI,ESI                    ; 00483ad2
    MOVSD ES:EDI,ESI                    ; 00483ad3
    MOVSD ES:EDI,ESI                    ; 00483ad4
    MOV EAX,EBX                         ; 00483ad5
    ADD ESP,0xc                         ; 00483ad7
    POP EDI                             ; 00483ada
    POP EBX                             ; 00483adb
    RET                                 ; 00483adc

