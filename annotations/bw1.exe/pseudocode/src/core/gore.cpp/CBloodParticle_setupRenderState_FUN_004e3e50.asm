; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004e3e50(CBloodParticle *this_ptr)
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
;   core_gore.cpp_CGore_renderParticles_FUN_004e5c50 at 004e5c9a
;
; Referenced Globals:
;   double g_DOUBLE_005e4015 = -65536
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;   CDemonCamera* g_CDemonCamera_PTR_007c6120
;   CDemonRenderer g_CDemonRenderer_01bc120c
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cd0e40.base.base.count
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.A
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.B
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.C
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.D
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[0]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[1]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[2]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[3]
;   CVector3i g_CVector3i_01cd0e68
;   undefined4 g_CVector3i_01cd0e68.y
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3e50
        ;   Label: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004e3e50
    PUSH ESI                            ; 004e3e51
    PUSH EDI                            ; 004e3e52
    SUB ESP,0x5c                        ; 004e3e53
    MOV EDX,0x4                         ; 004e3e56
    MOV EAX,0x1                         ; 004e3e5b
    LEA ESI,[ESP + 0x50]                ; 004e3e60
    MOV EBX,dword ptr [0x00612560]      ; 004e3e64 | g_CDemonRenderer_PTR_00612560
    MOV EDI,0x1cd0e68                   ; 004e3e6a
    XOR ECX,ECX                         ; 004e3e6f
    MOV dword ptr [0x01cd0e44],EDX      ; 004e3e71 | g_SMRGLPrimitiveQuadIndex_01cd0e40.base.base.count
    MOV dword ptr [0x01cd0e48],ECX      ; 004e3e77 | g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.A
    MOV dword ptr [0x01cd0e4c],ECX      ; 004e3e7d | g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.B
    MOV dword ptr [0x01cd0e50],ECX      ; 004e3e83 | g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.C
    MOV dword ptr [0x01cd0e54],ECX      ; 004e3e89 | g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.D
    MOV dword ptr [0x01cd0e58],ECX      ; 004e3e8f | g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[0]
    MOV [0x01cd0e5c],EAX                ; 004e3e95 | g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[1]
    PUSH EBX                            ; 004e3e9a | g_CDemonRenderer_01bc120c
    MOV EDX,0x2                         ; 004e3e9b
    MOV ECX,0x3                         ; 004e3ea0
    MOV dword ptr [0x01cd0e60],EDX      ; 004e3ea5 | g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[2]
    MOV dword ptr [0x01cd0e64],ECX      ; 004e3eab | g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50 ; 004e3eb1
        ;   XREF to: 00483b50 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004e3eb6
    ADD ESP,0x4                         ; 004e3eba
    MOVSD ES:EDI,ESI                    ; 004e3ebd | g_CVector3i_01cd0e68
    MOVSD ES:EDI,ESI                    ; 004e3ebe | g_CVector3i_01cd0e68.y
    MOVSD ES:EDI,ESI                    ; 004e3ebf | g_CVector3i_01cd0e68.z
    XOR ESI,ESI                         ; 004e3ec0
    MOV dword ptr [0x01cd0e6c],ESI      ; 004e3ec2 | g_CVector3i_01cd0e68.y
    MOV ESI,dword ptr [0x007c6120]      ; 004e3ec8 | g_CDemonCamera_PTR_007c6120
    MOV ECX,0xa                         ; 004e3ece
    LEA EDI,[ESP + 0x28]                ; 004e3ed3
    LEA ESI,[ESI + 0x10]                ; 004e3ed7
    MOVSD.REP ES:EDI,ESI                ; 004e3eda
    MOV ECX,0xa                         ; 004e3edc
    MOV EDI,ESP                         ; 004e3ee1
    LEA ESI,[ESP + 0x28]                ; 004e3ee3
    MOVSD.REP ES:EDI,ESI                ; 004e3ee7
    FLD double ptr [0x005e4015]         ; 004e3ee9 | g_DOUBLE_005e4015
    FLD float ptr [ESP + 0x8]           ; 004e3eef
    FMUL ST1                            ; 004e3ef3
    FLD float ptr [ESP + 0x14]          ; 004e3ef5
    FMUL ST2                            ; 004e3ef9
    FLD float ptr [ESP + 0x20]          ; 004e3efb
    FMULP ST3                           ; 004e3eff
    FXCH                                ; 004e3f01
    CALL crt_math.c_round_FUN_005c03a0  ; 004e3f03
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH                                ; 004e3f08
    CALL crt_math.c_round_FUN_005c03a0  ; 004e3f0a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH ST2                            ; 004e3f0f
    CALL crt_math.c_round_FUN_005c03a0  ; 004e3f11
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH                                ; 004e3f16
    FISTP dword ptr [0x01cd0e74]        ; 004e3f18 | g_CVector3i_01cd0e74
    FXCH                                ; 004e3f1e
    FISTP dword ptr [0x01cd0e78]        ; 004e3f20 | g_CVector3i_01cd0e74.y
    FISTP dword ptr [0x01cd0e7c]        ; 004e3f26 | g_CVector3i_01cd0e74.z
    ADD ESP,0x5c                        ; 004e3f2c
    POP EDI                             ; 004e3f2f
    POP ESI                             ; 004e3f30
    POP EBX                             ; 004e3f31
    RET                                 ; 004e3f32

