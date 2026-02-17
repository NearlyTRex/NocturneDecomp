; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004eb9d0(CBloodParticle *this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_renderParticles_FUN_004ed7b0 at 004ed7fa
;
; Referenced Globals:
;   double DOUBLE_0062e2e2 = -65536
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 g_GoreQuadPrimitive.base.base.count
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.A
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.B
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.C
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.D
;   undefined4 g_GoreQuadPrimitive.vertices[0]
;   undefined4 g_GoreQuadPrimitive.vertices[1]
;   undefined4 g_GoreQuadPrimitive.vertices[2]
;   undefined4 g_GoreQuadPrimitive.vertices[3]
;   int g_ParticleCameraRotation
;   int INT_02d83394
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb9d0
        ;   Label: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004eb9d0
    PUSH ESI                            ; 004eb9d1
    PUSH EDI                            ; 004eb9d2
    SUB ESP,0x5c                        ; 004eb9d3
    MOV EDX,0x4                         ; 004eb9d6
    MOV EAX,0x1                         ; 004eb9db
    LEA ESI,[ESP + 0x50]                ; 004eb9e0
    MOV EBX,dword ptr [0x006703ec]      ; 004eb9e4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDI,0x2d83390                   ; 004eb9ea | g_ParticleCameraRotation
    XOR ECX,ECX                         ; 004eb9ef
    MOV dword ptr [0x02d8336c],EDX      ; 004eb9f1 | g_GoreQuadPrimitive.base.base.count
    MOV dword ptr [0x02d83370],ECX      ; 004eb9f7 | g_GoreQuadPrimitive.base.surface_normal.A
    MOV dword ptr [0x02d83374],ECX      ; 004eb9fd | g_GoreQuadPrimitive.base.surface_normal.B
    MOV dword ptr [0x02d83378],ECX      ; 004eba03 | g_GoreQuadPrimitive.base.surface_normal.C
    MOV dword ptr [0x02d8337c],ECX      ; 004eba09 | g_GoreQuadPrimitive.base.surface_normal.D
    MOV dword ptr [0x02d83380],ECX      ; 004eba0f | g_GoreQuadPrimitive.vertices[0]
    MOV [0x02d83384],EAX                ; 004eba15 | g_GoreQuadPrimitive.vertices[1]
    PUSH EBX                            ; 004eba1a | g_CDemonRendererInstance
    MOV EDX,0x2                         ; 004eba1b
    MOV ECX,0x3                         ; 004eba20
    MOV dword ptr [0x02d83388],EDX      ; 004eba25 | g_GoreQuadPrimitive.vertices[2]
    MOV dword ptr [0x02d8338c],ECX      ; 004eba2b | g_GoreQuadPrimitive.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 ; 004eba31
        ;   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004eba36
    ADD ESP,0x4                         ; 004eba3a
    MOVSD ES:EDI,ESI                    ; 004eba3d | g_ParticleCameraRotation
    MOVSD ES:EDI,ESI                    ; 004eba3e | INT_02d83394
    MOVSD ES:EDI,ESI                    ; 004eba3f | INT_02d83398
    XOR ESI,ESI                         ; 004eba40
    MOV dword ptr [0x02d83394],ESI      ; 004eba42 | INT_02d83394
    MOV ESI,dword ptr [0x00823a74]      ; 004eba48 | g_CurrentSceneCamera
    MOV ECX,0xa                         ; 004eba4e
    LEA EDI,[ESP + 0x28]                ; 004eba53
    LEA ESI,[ESI + 0x10]                ; 004eba57
    MOVSD.REP ES:EDI,ESI                ; 004eba5a
    MOV ECX,0xa                         ; 004eba5c
    MOV EDI,ESP                         ; 004eba61
    LEA ESI,[ESP + 0x28]                ; 004eba63
    MOVSD.REP ES:EDI,ESI                ; 004eba67
    FLD double ptr [0x0062e2e2]         ; 004eba69 | DOUBLE_0062e2e2
    FLD float ptr [ESP + 0x8]           ; 004eba6f
    FMUL ST1                            ; 004eba73
    FLD float ptr [ESP + 0x14]          ; 004eba75
    FMUL ST2                            ; 004eba79
    FLD float ptr [ESP + 0x20]          ; 004eba7b
    FMULP ST3                           ; 004eba7f
    FXCH                                ; 004eba81
    CALL crt_math.c_round_FUN_005fe6b0  ; 004eba83
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004eba88
    CALL crt_math.c_round_FUN_005fe6b0  ; 004eba8a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 004eba8f
    CALL crt_math.c_round_FUN_005fe6b0  ; 004eba91
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004eba96
    FISTP dword ptr [0x02d8339c]        ; 004eba98 | INT_02d8339c
    FXCH                                ; 004eba9e
    FISTP dword ptr [0x02d833a0]        ; 004ebaa0 | INT_02d833a0
    FISTP dword ptr [0x02d833a4]        ; 004ebaa6 | INT_02d833a4
    ADD ESP,0x5c                        ; 004ebaac
    POP EDI                             ; 004ebaaf
    POP ESI                             ; 004ebab0
    POP EBX                             ; 004ebab1
    RET                                 ; 004ebab2

