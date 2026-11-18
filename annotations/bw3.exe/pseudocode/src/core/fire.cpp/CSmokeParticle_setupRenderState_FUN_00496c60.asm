; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00496c60(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0 at 004a1c47
;
; Referenced Globals:
;   double g_DOUBLE_005c04b8 = -65536
;   CDemonRenderer* g_CDemonRenderer_PTR_005f2afc = 01bdd7e4
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRenderer_01bdd7e4
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
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496c60
        ;   Label: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00496c60
    PUSH ESI                            ; 00496c61
    PUSH EDI                            ; 00496c62
    SUB ESP,0x5c                        ; 00496c63
    MOV EDX,0x4                         ; 00496c66
    MOV EAX,0x1                         ; 00496c6b
    LEA ESI,[ESP + 0x50]                ; 00496c70
    MOV EBX,dword ptr [0x005f2afc]      ; 00496c74 | g_CDemonRenderer_PTR_005f2afc
    MOV EDI,0x1c73658                   ; 00496c7a
    XOR ECX,ECX                         ; 00496c7f
    MOV dword ptr [0x01c73674],EDX      ; 00496c81 | g_BillboardPrimitive.base.base.count
    MOV dword ptr [0x01c73678],ECX      ; 00496c87 | g_BillboardPrimitive.base.surface_normal.A
    MOV dword ptr [0x01c7367c],ECX      ; 00496c8d | g_BillboardPrimitive.base.surface_normal.B
    MOV dword ptr [0x01c73680],ECX      ; 00496c93 | g_BillboardPrimitive.base.surface_normal.C
    MOV dword ptr [0x01c73684],ECX      ; 00496c99 | g_BillboardPrimitive.base.surface_normal.D
    MOV dword ptr [0x01c73688],ECX      ; 00496c9f | g_BillboardPrimitive.vertices[0]
    MOV [0x01c7368c],EAX                ; 00496ca5 | g_BillboardPrimitive.vertices[1]
    PUSH EBX                            ; 00496caa | g_CDemonRenderer_01bdd7e4
    MOV EDX,0x2                         ; 00496cab
    MOV ECX,0x3                         ; 00496cb0
    MOV dword ptr [0x01c73690],EDX      ; 00496cb5 | g_BillboardPrimitive.vertices[2]
    MOV dword ptr [0x01c73694],ECX      ; 00496cbb | g_BillboardPrimitive.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230 ; 00496cc1
        ;   XREF to: 0046d230 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 00496cc6
    ADD ESP,0x4                         ; 00496cca
    MOVSD ES:EDI,ESI                    ; 00496ccd | g_BillboardCameraRight
    MOVSD ES:EDI,ESI                    ; 00496cce | g_BillboardCameraRight.y
    MOVSD ES:EDI,ESI                    ; 00496ccf | g_BillboardCameraRight.z
    XOR ESI,ESI                         ; 00496cd0
    MOV dword ptr [0x01c7365c],ESI      ; 00496cd2 | g_BillboardCameraRight.y
    MOV ESI,dword ptr [0x007e2a54]      ; 00496cd8 | g_CurrentSceneCamera
    MOV ECX,0xa                         ; 00496cde
    LEA EDI,[ESP + 0x28]                ; 00496ce3
    LEA ESI,[ESI + 0x10]                ; 00496ce7
    MOVSD.REP ES:EDI,ESI                ; 00496cea
    MOV ECX,0xa                         ; 00496cec
    MOV EDI,ESP                         ; 00496cf1
    LEA ESI,[ESP + 0x28]                ; 00496cf3
    MOVSD.REP ES:EDI,ESI                ; 00496cf7
    FLD double ptr [0x005c04b8]         ; 00496cf9 | g_DOUBLE_005c04b8
    FLD float ptr [ESP + 0x8]           ; 00496cff
    FMUL ST1                            ; 00496d03
    FLD float ptr [ESP + 0x14]          ; 00496d05
    FMUL ST2                            ; 00496d09
    FLD float ptr [ESP + 0x20]          ; 00496d0b
    FMULP ST3                           ; 00496d0f
    FXCH                                ; 00496d11
    CALL crt_math.c_round_FUN_005a3120  ; 00496d13
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH                                ; 00496d18
    CALL crt_math.c_round_FUN_005a3120  ; 00496d1a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH ST2                            ; 00496d1f
    CALL crt_math.c_round_FUN_005a3120  ; 00496d21
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH                                ; 00496d26
    FISTP dword ptr [0x01c73664]        ; 00496d28 | g_BillboardCameraUp
    FXCH                                ; 00496d2e
    FISTP dword ptr [0x01c73668]        ; 00496d30 | g_BillboardCameraUp.y
    FISTP dword ptr [0x01c7366c]        ; 00496d36 | g_BillboardCameraUp.z
    ADD ESP,0x5c                        ; 00496d3c
    POP EDI                             ; 00496d3f
    POP ESI                             ; 00496d40
    POP EBX                             ; 00496d41
    RET                                 ; 00496d42

