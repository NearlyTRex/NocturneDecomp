; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFirefly_setupRenderState_FUN_004ad9c0(CFirefly *this_ptr)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b532f
;
; Referenced Globals:
;   double g_DOUBLE_005df204 = -65536
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;   undefined4 g_SRenderVertex_ARRAY_00629014[0].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[0].v
;   undefined4 g_SRenderVertex_ARRAY_00629014[1].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[1].v
;   undefined4 g_SRenderVertex_ARRAY_00629014[2].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[2].v
;   undefined4 g_SRenderVertex_ARRAY_00629014[3].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[3].v
;   CDemonCamera* g_CDemonCamera_PTR_007c6120
;   CDemonRenderer g_CDemonRenderer_01bc120c
;   CVector3i g_CVector3i_01c57078
;   undefined4 g_CVector3i_01c57078.y
;   undefined4 g_CVector3i_01c57078.z
;   ... and 12 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad9c0
        ;   Label: core_fire.cpp_CFirefly_setupRenderState_FUN_004ad9c0
    PUSH ESI                            ; 004ad9c1
    PUSH EDI                            ; 004ad9c2
    SUB ESP,0x5c                        ; 004ad9c3
    MOV EDX,0x4                         ; 004ad9c6
    MOV EAX,0x1                         ; 004ad9cb
    MOV EBX,0x80000                     ; 004ad9d0
    MOV ESI,0xf80000                    ; 004ad9d5
    MOV EDI,0x1c57078                   ; 004ad9da
    XOR ECX,ECX                         ; 004ad9df
    MOV dword ptr [0x01c57094],EDX      ; 004ad9e1 | g_SMRGLPrimitiveQuadIndex_01c57090.base.base.count
    MOV dword ptr [0x01c57098],ECX      ; 004ad9e7 | g_SMRGLPrimitiveQuadIndex_01c57090.base.surface_normal.A
    MOV dword ptr [0x01c5709c],ECX      ; 004ad9ed | g_SMRGLPrimitiveQuadIndex_01c57090.base.surface_normal.B
    MOV dword ptr [0x01c570a0],ECX      ; 004ad9f3 | g_SMRGLPrimitiveQuadIndex_01c57090.base.surface_normal.C
    MOV dword ptr [0x01c570a4],ECX      ; 004ad9f9 | g_SMRGLPrimitiveQuadIndex_01c57090.base.surface_normal.D
    MOV dword ptr [0x01c570a8],ECX      ; 004ad9ff | g_SMRGLPrimitiveQuadIndex_01c57090.vertices[0]
    MOV [0x01c570ac],EAX                ; 004ada05 | g_SMRGLPrimitiveQuadIndex_01c57090.vertices[1]
    MOV dword ptr [0x0062902c],EBX      ; 004ada0a | g_SRenderVertex_ARRAY_00629014[0].u
    MOV dword ptr [0x00629030],ESI      ; 004ada10 | g_SRenderVertex_ARRAY_00629014[0].v
    MOV dword ptr [0x0062905c],ESI      ; 004ada16 | g_SRenderVertex_ARRAY_00629014[1].u
    MOV dword ptr [0x00629060],ESI      ; 004ada1c | g_SRenderVertex_ARRAY_00629014[1].v
    MOV dword ptr [0x0062908c],ESI      ; 004ada22 | g_SRenderVertex_ARRAY_00629014[2].u
    MOV dword ptr [0x00629090],EBX      ; 004ada28 | g_SRenderVertex_ARRAY_00629014[2].v
    MOV dword ptr [0x006290bc],EBX      ; 004ada2e | g_SRenderVertex_ARRAY_00629014[3].u
    MOV dword ptr [0x006290c0],EBX      ; 004ada34 | g_SRenderVertex_ARRAY_00629014[3].v
    MOV EDX,0x2                         ; 004ada3a
    MOV ECX,0x3                         ; 004ada3f
    MOV ESI,dword ptr [0x00612560]      ; 004ada44 | g_CDemonRenderer_PTR_00612560
    MOV dword ptr [0x01c570b0],EDX      ; 004ada4a | g_SMRGLPrimitiveQuadIndex_01c57090.vertices[2]
    PUSH ESI                            ; 004ada50 | g_CDemonRenderer_01bc120c
    LEA ESI,[ESP + 0x54]                ; 004ada51
    MOV dword ptr [0x01c570b4],ECX      ; 004ada55 | g_SMRGLPrimitiveQuadIndex_01c57090.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50 ; 004ada5b
        ;   XREF to: 00483b50 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004ada60
    ADD ESP,0x4                         ; 004ada64
    MOVSD ES:EDI,ESI                    ; 004ada67 | g_CVector3i_01c57078
    MOVSD ES:EDI,ESI                    ; 004ada68 | g_CVector3i_01c57078.y
    MOVSD ES:EDI,ESI                    ; 004ada69 | g_CVector3i_01c57078.z
    MOV ESI,dword ptr [0x007c6120]      ; 004ada6a | g_CDemonCamera_PTR_007c6120
    MOV ECX,0xa                         ; 004ada70
    XOR EDI,EDI                         ; 004ada75
    LEA ESI,[ESI + 0x10]                ; 004ada77
    MOV dword ptr [0x01c5707c],EDI      ; 004ada7a | g_CVector3i_01c57078.y
    LEA EDI,[ESP + 0x28]                ; 004ada80
    MOVSD.REP ES:EDI,ESI                ; 004ada84
    MOV ECX,0xa                         ; 004ada86
    MOV EDI,ESP                         ; 004ada8b
    LEA ESI,[ESP + 0x28]                ; 004ada8d
    MOVSD.REP ES:EDI,ESI                ; 004ada91
    FLD double ptr [0x005df204]         ; 004ada93 | g_DOUBLE_005df204
    FLD float ptr [ESP + 0x8]           ; 004ada99
    FMUL ST1                            ; 004ada9d
    FLD float ptr [ESP + 0x14]          ; 004ada9f
    FMUL ST2                            ; 004adaa3
    FLD float ptr [ESP + 0x20]          ; 004adaa5
    FMULP ST3                           ; 004adaa9
    FXCH                                ; 004adaab
    CALL crt_math.c_round_FUN_005c03a0  ; 004adaad
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH                                ; 004adab2
    CALL crt_math.c_round_FUN_005c03a0  ; 004adab4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH ST2                            ; 004adab9
    CALL crt_math.c_round_FUN_005c03a0  ; 004adabb
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH                                ; 004adac0
    FISTP dword ptr [0x01c57084]        ; 004adac2 | g_CVector3i_01c57084
    FXCH                                ; 004adac8
    FISTP dword ptr [0x01c57088]        ; 004adaca | g_CVector3i_01c57084.y
    FISTP dword ptr [0x01c5708c]        ; 004adad0 | g_CVector3i_01c57084.z
    ADD ESP,0x5c                        ; 004adad6
    POP EDI                             ; 004adad9
    POP ESI                             ; 004adada
    POP EBX                             ; 004adadb
    RET                                 ; 004adadc

