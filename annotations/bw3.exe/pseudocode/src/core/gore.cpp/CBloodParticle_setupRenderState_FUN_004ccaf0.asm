; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004ccaf0(CBloodParticle *this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_renderParticles_FUN_004ce5b0 at 004ce5fa
;
; Referenced Globals:
;   double g_DOUBLE_005c4629 = -65536
;   CDemonRenderer* g_CDemonRenderer_PTR_005f2afc = 01bdd7e4
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRenderer_01bdd7e4
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.base.base.count
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.A
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.B
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.C
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.D
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[0]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[1]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[2]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[3]
;   CVector3i g_ParticleCameraRotation
;   undefined4 g_ParticleCameraRotation.y
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccaf0
        ;   Label: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ccaf0
    PUSH ESI                            ; 004ccaf1
    PUSH EDI                            ; 004ccaf2
    SUB ESP,0x5c                        ; 004ccaf3
    MOV EDX,0x4                         ; 004ccaf6
    MOV EAX,0x1                         ; 004ccafb
    LEA ESI,[ESP + 0x50]                ; 004ccb00
    MOV EBX,dword ptr [0x005f2afc]      ; 004ccb04 | g_CDemonRenderer_PTR_005f2afc
    MOV EDI,0x1d22e70                   ; 004ccb0a
    XOR ECX,ECX                         ; 004ccb0f
    MOV dword ptr [0x01d22e4c],EDX      ; 004ccb11 | g_SMRGLPrimitiveQuadIndex_01d22e48.base.base.count
    MOV dword ptr [0x01d22e50],ECX      ; 004ccb17 | g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.A
    MOV dword ptr [0x01d22e54],ECX      ; 004ccb1d | g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.B
    MOV dword ptr [0x01d22e58],ECX      ; 004ccb23 | g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.C
    MOV dword ptr [0x01d22e5c],ECX      ; 004ccb29 | g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.D
    MOV dword ptr [0x01d22e60],ECX      ; 004ccb2f | g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[0]
    MOV [0x01d22e64],EAX                ; 004ccb35 | g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[1]
    PUSH EBX                            ; 004ccb3a | g_CDemonRenderer_01bdd7e4
    MOV EDX,0x2                         ; 004ccb3b
    MOV ECX,0x3                         ; 004ccb40
    MOV dword ptr [0x01d22e68],EDX      ; 004ccb45 | g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[2]
    MOV dword ptr [0x01d22e6c],ECX      ; 004ccb4b | g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230 ; 004ccb51
        ;   XREF to: 0046d230 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004ccb56
    ADD ESP,0x4                         ; 004ccb5a
    MOVSD ES:EDI,ESI                    ; 004ccb5d | g_ParticleCameraRotation
    MOVSD ES:EDI,ESI                    ; 004ccb5e | g_ParticleCameraRotation.y
    MOVSD ES:EDI,ESI                    ; 004ccb5f | g_ParticleCameraRotation.z
    XOR ESI,ESI                         ; 004ccb60
    MOV dword ptr [0x01d22e74],ESI      ; 004ccb62 | g_ParticleCameraRotation.y
    MOV ESI,dword ptr [0x007e2a54]      ; 004ccb68 | g_CurrentSceneCamera
    MOV ECX,0xa                         ; 004ccb6e
    LEA EDI,[ESP + 0x28]                ; 004ccb73
    LEA ESI,[ESI + 0x10]                ; 004ccb77
    MOVSD.REP ES:EDI,ESI                ; 004ccb7a
    MOV ECX,0xa                         ; 004ccb7c
    MOV EDI,ESP                         ; 004ccb81
    LEA ESI,[ESP + 0x28]                ; 004ccb83
    MOVSD.REP ES:EDI,ESI                ; 004ccb87
    FLD double ptr [0x005c4629]         ; 004ccb89 | g_DOUBLE_005c4629
    FLD float ptr [ESP + 0x8]           ; 004ccb8f
    FMUL ST1                            ; 004ccb93
    FLD float ptr [ESP + 0x14]          ; 004ccb95
    FMUL ST2                            ; 004ccb99
    FLD float ptr [ESP + 0x20]          ; 004ccb9b
    FMULP ST3                           ; 004ccb9f
    FXCH                                ; 004ccba1
    CALL crt_math.c_round_FUN_005a3120  ; 004ccba3
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH                                ; 004ccba8
    CALL crt_math.c_round_FUN_005a3120  ; 004ccbaa
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH ST2                            ; 004ccbaf
    CALL crt_math.c_round_FUN_005a3120  ; 004ccbb1
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH                                ; 004ccbb6
    FISTP dword ptr [0x01d22e7c]        ; 004ccbb8 | g_BloodParticleViewDirection
    FXCH                                ; 004ccbbe
    FISTP dword ptr [0x01d22e80]        ; 004ccbc0 | g_BloodParticleViewDirection.y
    FISTP dword ptr [0x01d22e84]        ; 004ccbc6 | g_BloodParticleViewDirection.z
    ADD ESP,0x5c                        ; 004ccbcc
    POP EDI                             ; 004ccbcf
    POP ESI                             ; 004ccbd0
    POP EBX                             ; 004ccbd1
    RET                                 ; 004ccbd2

