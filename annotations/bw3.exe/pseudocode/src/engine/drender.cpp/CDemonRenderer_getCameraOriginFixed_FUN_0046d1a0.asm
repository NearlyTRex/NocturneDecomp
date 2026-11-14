; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0(CDemonRenderer *this_ptr,CVector3i *output)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0 at 00449e51
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70 at 0045edc4
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0045dea0 at 0045e02d
;   core_dlight.cpp_FUN_0045d530 at 0045d5c2
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00476070 at 004760c4
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30 at 00539f5f
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450 at 0053a4a5
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_0053a6c0 at 0053a70f
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_004e6a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d1a0
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0
    PUSH EDI                            ; 0046d1a1
    SUB ESP,0xc                         ; 0046d1a2
    MOV EBX,ESI                         ; 0046d1a5
    MOV ESI,ESP                         ; 0046d1a7
    MOV EDI,EBX                         ; 0046d1a9
    CALL engine_matrix.c_getCameraOrigin_FUN_004e6a90 ; 0046d1ab
        ;   XREF to: 004e6a90 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraOrigin_FUN_004e6a90(CVector3i * output)
    MOV ESI,ESP                         ; 0046d1b0
    MOVSD ES:EDI,ESI                    ; 0046d1b2
    MOVSD ES:EDI,ESI                    ; 0046d1b3
    MOVSD ES:EDI,ESI                    ; 0046d1b4
    MOV EAX,EBX                         ; 0046d1b5
    ADD ESP,0xc                         ; 0046d1b7
    POP EDI                             ; 0046d1ba
    POP EBX                             ; 0046d1bb
    RET                                 ; 0046d1bc

