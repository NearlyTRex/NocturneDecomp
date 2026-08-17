; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_00460d10(CDemonRenderer *this_ptr,CVector3i *output)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0 at 00441061
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350 at 004513a4
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430 at 0044f4a6
;   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_0044f9b0 at 0044fb30
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520 at 00450695
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0 at 00469d34
;   core_set.cpp_CDemonSet_FUN_0050d910 at 0050d95f
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0 at 0050d303
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0 at 0050d6f5
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_004ce760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460d10
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_00460d10
    PUSH EDI                            ; 00460d11
    SUB ESP,0xc                         ; 00460d12
    MOV EBX,ESI                         ; 00460d15
    MOV ESI,ESP                         ; 00460d17
    MOV EDI,EBX                         ; 00460d19
    CALL engine_matrix.c_getCameraOrigin_FUN_004ce760 ; 00460d1b
        ;   XREF to: 004ce760 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraOrigin_FUN_004ce760(CVector3i * output)
    MOV ESI,ESP                         ; 00460d20
    MOVSD ES:EDI,ESI                    ; 00460d22
    MOVSD ES:EDI,ESI                    ; 00460d23
    MOVSD ES:EDI,ESI                    ; 00460d24
    MOV EAX,EBX                         ; 00460d25
    ADD ESP,0xc                         ; 00460d27
    POP EDI                             ; 00460d2a
    POP EBX                             ; 00460d2b
    RET                                 ; 00460d2c

