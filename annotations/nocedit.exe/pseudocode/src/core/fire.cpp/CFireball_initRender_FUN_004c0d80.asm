; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_fire_cpp_CFireball_initRender_FUN_004c0d80(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c71e7
;
; Referenced Globals:
;   double DOUBLE_00629ca3 = -65536
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

    PUSH EBX                            ; 004c0d80
        ;   Label: core_fire.cpp_CFireball_initRender_FUN_004c0d80
    PUSH ESI                            ; 004c0d81
    PUSH EDI                            ; 004c0d82
    SUB ESP,0x5c                        ; 004c0d83
    MOV EDX,0x4                         ; 004c0d86
    MOV EAX,0x1                         ; 004c0d8b
    LEA ESI,[ESP + 0x50]                ; 004c0d90
    MOV EBX,dword ptr [0x006703ec]      ; 004c0d94 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDI,0x2d12db4                   ; 004c0d9a | g_BillboardCameraRight
    XOR ECX,ECX                         ; 004c0d9f
    MOV dword ptr [0x02d12dd0],EDX      ; 004c0da1 | g_BillboardPrimitive.base.base.count
    MOV dword ptr [0x02d12dd4],ECX      ; 004c0da7 | g_BillboardPrimitive.base.surface_normal.A
    MOV dword ptr [0x02d12dd8],ECX      ; 004c0dad | g_BillboardPrimitive.base.surface_normal.B
    MOV dword ptr [0x02d12ddc],ECX      ; 004c0db3 | g_BillboardPrimitive.base.surface_normal.C
    MOV dword ptr [0x02d12de0],ECX      ; 004c0db9 | g_BillboardPrimitive.base.surface_normal.D
    MOV dword ptr [0x02d12de4],ECX      ; 004c0dbf | g_BillboardPrimitive.vertices[0]
    MOV [0x02d12de8],EAX                ; 004c0dc5 | g_BillboardPrimitive.vertices[1]
    PUSH EBX                            ; 004c0dca | g_CDemonRendererInstance
    MOV EDX,0x2                         ; 004c0dcb
    MOV ECX,0x3                         ; 004c0dd0
    MOV dword ptr [0x02d12dec],EDX      ; 004c0dd5 | g_BillboardPrimitive.vertices[2]
    MOV dword ptr [0x02d12df0],ECX      ; 004c0ddb | g_BillboardPrimitive.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 ; 004c0de1
        ;   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004c0de6
    ADD ESP,0x4                         ; 004c0dea
    MOVSD ES:EDI,ESI                    ; 004c0ded | g_BillboardCameraRight
    MOVSD ES:EDI,ESI                    ; 004c0dee | g_BillboardCameraRight.y
    MOVSD ES:EDI,ESI                    ; 004c0def | DAT_02d12dbc
    XOR ESI,ESI                         ; 004c0df0
    MOV dword ptr [0x02d12db8],ESI      ; 004c0df2 | g_BillboardCameraRight.y
    MOV ESI,dword ptr [0x00823a74]      ; 004c0df8 | g_CurrentSceneCamera
    MOV ECX,0xa                         ; 004c0dfe
    LEA EDI,[ESP + 0x28]                ; 004c0e03
    LEA ESI,[ESI + 0x10]                ; 004c0e07
    MOVSD.REP ES:EDI,ESI                ; 004c0e0a
    MOV ECX,0xa                         ; 004c0e0c
    MOV EDI,ESP                         ; 004c0e11
    LEA ESI,[ESP + 0x28]                ; 004c0e13
    MOVSD.REP ES:EDI,ESI                ; 004c0e17
    FLD double ptr [0x00629ca3]         ; 004c0e19 | DOUBLE_00629ca3
    FLD float ptr [ESP + 0x8]           ; 004c0e1f
    FMUL ST1                            ; 004c0e23
    FLD float ptr [ESP + 0x14]          ; 004c0e25
    FMUL ST2                            ; 004c0e29
    FLD float ptr [ESP + 0x20]          ; 004c0e2b
    FMULP ST3                           ; 004c0e2f
    FXCH                                ; 004c0e31
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c0e33
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004c0e38
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c0e3a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 004c0e3f
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c0e41
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004c0e46
    FISTP dword ptr [0x02d12dc0]        ; 004c0e48 | g_BillboardCameraUp
    FXCH                                ; 004c0e4e
    FISTP dword ptr [0x02d12dc4]        ; 004c0e50 | g_BillboardCameraUp.y
    FISTP dword ptr [0x02d12dc8]        ; 004c0e56 | g_BillboardCameraUp.z
    ADD ESP,0x5c                        ; 004c0e5c
    POP EDI                             ; 004c0e5f
    POP ESI                             ; 004c0e60
    POP EBX                             ; 004c0e61
    RET                                 ; 004c0e62

