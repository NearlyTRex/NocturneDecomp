; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireball_setupRenderState_FUN_004842a0(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a6b7
;
; Referenced Globals:
;   double DOUBLE_0058110c = -65536
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRenderer_01b4d738
;   CVector3i g_BillboardCameraRight
;   undefined4 g_BillboardCameraRight.y
;   undefined4 g_BillboardCameraRight.z
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
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00460d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004842a0
        ;   Label: core_fire.cpp_CFireball_setupRenderState_FUN_004842a0
    PUSH ESI                            ; 004842a1
    PUSH EDI                            ; 004842a2
    SUB ESP,0x5c                        ; 004842a3
    MOV EDX,0x4                         ; 004842a6
    MOV EAX,0x1                         ; 004842ab
    LEA ESI,[ESP + 0x50]                ; 004842b0
    MOV EBX,dword ptr [0x005ae704]      ; 004842b4 | g_CDemonRenderer_PTR_005ae704
    MOV EDI,0x1c08d08                   ; 004842ba
    XOR ECX,ECX                         ; 004842bf
    MOV dword ptr [0x01c08d24],EDX      ; 004842c1 | g_BillboardPrimitive.base.base.count
    MOV dword ptr [0x01c08d28],ECX      ; 004842c7 | g_BillboardPrimitive.base.surface_normal.A
    MOV dword ptr [0x01c08d2c],ECX      ; 004842cd | g_BillboardPrimitive.base.surface_normal.B
    MOV dword ptr [0x01c08d30],ECX      ; 004842d3 | g_BillboardPrimitive.base.surface_normal.C
    MOV dword ptr [0x01c08d34],ECX      ; 004842d9 | g_BillboardPrimitive.base.surface_normal.D
    MOV dword ptr [0x01c08d38],ECX      ; 004842df | g_BillboardPrimitive.vertices[0]
    MOV [0x01c08d3c],EAX                ; 004842e5 | g_BillboardPrimitive.vertices[1]
    PUSH EBX                            ; 004842ea | g_CDemonRenderer_01b4d738
    MOV EDX,0x2                         ; 004842eb
    MOV ECX,0x3                         ; 004842f0
    MOV dword ptr [0x01c08d40],EDX      ; 004842f5 | g_BillboardPrimitive.vertices[2]
    MOV dword ptr [0x01c08d44],ECX      ; 004842fb | g_BillboardPrimitive.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00460d90 ; 00484301
        ;   XREF to: 00460d90 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00460d90(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 00484306
    ADD ESP,0x4                         ; 0048430a
    MOVSD ES:EDI,ESI                    ; 0048430d | g_BillboardCameraRight
    MOVSD ES:EDI,ESI                    ; 0048430e | g_BillboardCameraRight.y
    MOVSD ES:EDI,ESI                    ; 0048430f | g_BillboardCameraRight.z
    XOR ESI,ESI                         ; 00484310
    MOV dword ptr [0x01c08d0c],ESI      ; 00484312 | g_BillboardCameraRight.y
    MOV ESI,dword ptr [0x007f7370]      ; 00484318 | g_CurrentSceneCamera
    MOV ECX,0xa                         ; 0048431e
    LEA EDI,[ESP + 0x28]                ; 00484323
    LEA ESI,[ESI + 0x110]               ; 00484327
    MOVSD.REP ES:EDI,ESI                ; 0048432d
    MOV ECX,0xa                         ; 0048432f
    MOV EDI,ESP                         ; 00484334
    LEA ESI,[ESP + 0x28]                ; 00484336
    MOVSD.REP ES:EDI,ESI                ; 0048433a
    FLD double ptr [0x0058110c]         ; 0048433c | DOUBLE_0058110c
    FLD float ptr [ESP + 0x8]           ; 00484342
    FMUL ST1                            ; 00484346
    FLD float ptr [ESP + 0x14]          ; 00484348
    FMUL ST2                            ; 0048434c
    FLD float ptr [ESP + 0x20]          ; 0048434e
    FMULP ST3                           ; 00484352
    FXCH                                ; 00484354
    CALL crt_math.c_round_FUN_00563a30  ; 00484356
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 0048435b
    CALL crt_math.c_round_FUN_00563a30  ; 0048435d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 00484362
    CALL crt_math.c_round_FUN_00563a30  ; 00484364
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 00484369
    FISTP dword ptr [0x01c08d14]        ; 0048436b | g_BillboardCameraUp
    FXCH                                ; 00484371
    FISTP dword ptr [0x01c08d18]        ; 00484373 | g_BillboardCameraUp.y
    FISTP dword ptr [0x01c08d1c]        ; 00484379 | g_BillboardCameraUp.z
    ADD ESP,0x5c                        ; 0048437f
    POP EDI                             ; 00484382
    POP ESI                             ; 00484383
    POP EBX                             ; 00484384
    RET                                 ; 00484385

