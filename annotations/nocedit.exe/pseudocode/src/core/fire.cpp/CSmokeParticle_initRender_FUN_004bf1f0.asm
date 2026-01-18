; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_fire.cpp_CSmokeParticle_initRender_FUN_004bf1f0(CSmokeParticle * this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c72a7
;
; Referenced Globals:
;   double DOUBLE_00629c03 = -65536
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRendererInstance
;   CVector3i g_BillboardCameraRight
;   undefined4 g_BillboardCameraRight.y
;   undefined4 DAT_02d12dbc
;   CVector3i g_BillboardCameraUp
;   undefined4 g_BillboardCameraUp.y
;   undefined4 g_BillboardCameraUp.z
;   undefined4 g_BillboardPrimitive.base.base.count
;   undefined4 g_BillboardPrimitive.base.surface_normal.A
;   undefined4 g_BillboardPrimitive.base.surface_normal.B
;   undefined4 g_BillboardPrimitive.base.surface_normal.C
;   undefined4 g_BillboardPrimitive.base.surface_normal.D
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bf1f0
        ;   Label: core_fire.cpp_CSmokeParticle_initRender_FUN_004bf1f0
    PUSH ESI                            ; 004bf1f1
    PUSH EDI                            ; 004bf1f2
    SUB ESP,0x5c                        ; 004bf1f3
    MOV EDX,0x4                         ; 004bf1f6
    MOV EAX,0x1                         ; 004bf1fb
    LEA ESI,[ESP + 0x50]                ; 004bf200
    MOV EBX,dword ptr [0x006703ec]      ; 004bf204 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDI,0x2d12db4                   ; 004bf20a | g_BillboardCameraRight
    XOR ECX,ECX                         ; 004bf20f
    MOV dword ptr [0x02d12dd0],EDX      ; 004bf211 | g_BillboardPrimitive.base.base.count
    MOV dword ptr [0x02d12dd4],ECX      ; 004bf217 | g_BillboardPrimitive.base.surface_normal.A
    MOV dword ptr [0x02d12dd8],ECX      ; 004bf21d | g_BillboardPrimitive.base.surface_normal.B
    MOV dword ptr [0x02d12ddc],ECX      ; 004bf223 | g_BillboardPrimitive.base.surface_normal.C
    MOV dword ptr [0x02d12de0],ECX      ; 004bf229 | g_BillboardPrimitive.base.surface_normal.D
    MOV dword ptr [0x02d12de4],ECX      ; 004bf22f | g_BillboardPrimitive.vertices[0]
    MOV [0x02d12de8],EAX                ; 004bf235 | g_BillboardPrimitive.vertices[1]
    PUSH EBX                            ; 004bf23a | g_CDemonRendererInstance
    MOV EDX,0x2                         ; 004bf23b
    MOV ECX,0x3                         ; 004bf240
    MOV dword ptr [0x02d12dec],EDX      ; 004bf245 | g_BillboardPrimitive.vertices[2]
    MOV dword ptr [0x02d12df0],ECX      ; 004bf24b | g_BillboardPrimitive.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 ; 004bf251
        ;   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004bf256
    ADD ESP,0x4                         ; 004bf25a
    MOVSD ES:EDI,ESI                    ; 004bf25d | g_BillboardCameraRight
    MOVSD ES:EDI,ESI                    ; 004bf25e | g_BillboardCameraRight.y
    MOVSD ES:EDI,ESI                    ; 004bf25f | DAT_02d12dbc
    XOR ESI,ESI                         ; 004bf260
    MOV dword ptr [0x02d12db8],ESI      ; 004bf262 | g_BillboardCameraRight.y
    MOV ESI,dword ptr [0x00823a74]      ; 004bf268 | g_CurrentSceneCamera
    MOV ECX,0xa                         ; 004bf26e
    LEA EDI,[ESP + 0x28]                ; 004bf273
    LEA ESI,[ESI + 0x10]                ; 004bf277
    MOVSD.REP ES:EDI,ESI                ; 004bf27a
    MOV ECX,0xa                         ; 004bf27c
    MOV EDI,ESP                         ; 004bf281
    LEA ESI,[ESP + 0x28]                ; 004bf283
    MOVSD.REP ES:EDI,ESI                ; 004bf287
    FLD double ptr [0x00629c03]         ; 004bf289 | DOUBLE_00629c03
    FLD float ptr [ESP + 0x8]           ; 004bf28f
    FMUL ST1                            ; 004bf293
    FLD float ptr [ESP + 0x14]          ; 004bf295
    FMUL ST2                            ; 004bf299
    FLD float ptr [ESP + 0x20]          ; 004bf29b
    FMULP ST3                           ; 004bf29f
    FXCH                                ; 004bf2a1
    CALL crt_math.c_round_FUN_005fe6b0  ; 004bf2a3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004bf2a8
    CALL crt_math.c_round_FUN_005fe6b0  ; 004bf2aa
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 004bf2af
    CALL crt_math.c_round_FUN_005fe6b0  ; 004bf2b1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004bf2b6
    FISTP dword ptr [0x02d12dc0]        ; 004bf2b8 | g_BillboardCameraUp
    FXCH                                ; 004bf2be
    FISTP dword ptr [0x02d12dc4]        ; 004bf2c0 | g_BillboardCameraUp.y
    FISTP dword ptr [0x02d12dc8]        ; 004bf2c6 | g_BillboardCameraUp.z
    ADD ESP,0x5c                        ; 004bf2cc
    POP EDI                             ; 004bf2cf
    POP ESI                             ; 004bf2d0
    POP EBX                             ; 004bf2d1
    RET                                 ; 004bf2d2

