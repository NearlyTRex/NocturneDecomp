; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_004abdb0(CSmokeParticle *this_ptr)
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
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b5277
;
; Referenced Globals:
;   double g_DOUBLE_005df17c = -65536
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRenderer_01bc120c
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
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004abdb0
        ;   Label: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_004abdb0
    PUSH ESI                            ; 004abdb1
    PUSH EDI                            ; 004abdb2
    SUB ESP,0x5c                        ; 004abdb3
    MOV EDX,0x4                         ; 004abdb6
    MOV EAX,0x1                         ; 004abdbb
    LEA ESI,[ESP + 0x50]                ; 004abdc0
    MOV EBX,dword ptr [0x00612560]      ; 004abdc4 | g_CDemonRenderer_PTR_00612560
    MOV EDI,0x1c57078                   ; 004abdca
    XOR ECX,ECX                         ; 004abdcf
    MOV dword ptr [0x01c57094],EDX      ; 004abdd1 | g_BillboardPrimitive.base.base.count
    MOV dword ptr [0x01c57098],ECX      ; 004abdd7 | g_BillboardPrimitive.base.surface_normal.A
    MOV dword ptr [0x01c5709c],ECX      ; 004abddd | g_BillboardPrimitive.base.surface_normal.B
    MOV dword ptr [0x01c570a0],ECX      ; 004abde3 | g_BillboardPrimitive.base.surface_normal.C
    MOV dword ptr [0x01c570a4],ECX      ; 004abde9 | g_BillboardPrimitive.base.surface_normal.D
    MOV dword ptr [0x01c570a8],ECX      ; 004abdef | g_BillboardPrimitive.vertices[0]
    MOV [0x01c570ac],EAX                ; 004abdf5 | g_BillboardPrimitive.vertices[1]
    PUSH EBX                            ; 004abdfa | g_CDemonRenderer_01bc120c
    MOV EDX,0x2                         ; 004abdfb
    MOV ECX,0x3                         ; 004abe00
    MOV dword ptr [0x01c570b0],EDX      ; 004abe05 | g_BillboardPrimitive.vertices[2]
    MOV dword ptr [0x01c570b4],ECX      ; 004abe0b | g_BillboardPrimitive.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50 ; 004abe11
        ;   XREF to: 00483b50 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004abe16
    ADD ESP,0x4                         ; 004abe1a
    MOVSD ES:EDI,ESI                    ; 004abe1d | g_BillboardCameraRight
    MOVSD ES:EDI,ESI                    ; 004abe1e | g_BillboardCameraRight.y
    MOVSD ES:EDI,ESI                    ; 004abe1f | g_BillboardCameraRight.z
    XOR ESI,ESI                         ; 004abe20
    MOV dword ptr [0x01c5707c],ESI      ; 004abe22 | g_BillboardCameraRight.y
    MOV ESI,dword ptr [0x007c6120]      ; 004abe28 | g_CurrentSceneCamera
    MOV ECX,0xa                         ; 004abe2e
    LEA EDI,[ESP + 0x28]                ; 004abe33
    LEA ESI,[ESI + 0x10]                ; 004abe37
    MOVSD.REP ES:EDI,ESI                ; 004abe3a
    MOV ECX,0xa                         ; 004abe3c
    MOV EDI,ESP                         ; 004abe41
    LEA ESI,[ESP + 0x28]                ; 004abe43
    MOVSD.REP ES:EDI,ESI                ; 004abe47
    FLD double ptr [0x005df17c]         ; 004abe49 | g_DOUBLE_005df17c
    FLD float ptr [ESP + 0x8]           ; 004abe4f
    FMUL ST1                            ; 004abe53
    FLD float ptr [ESP + 0x14]          ; 004abe55
    FMUL ST2                            ; 004abe59
    FLD float ptr [ESP + 0x20]          ; 004abe5b
    FMULP ST3                           ; 004abe5f
    FXCH                                ; 004abe61
    CALL crt_math.c_round_FUN_005c03a0  ; 004abe63
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH                                ; 004abe68
    CALL crt_math.c_round_FUN_005c03a0  ; 004abe6a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH ST2                            ; 004abe6f
    CALL crt_math.c_round_FUN_005c03a0  ; 004abe71
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH                                ; 004abe76
    FISTP dword ptr [0x01c57084]        ; 004abe78 | g_BillboardCameraUp
    FXCH                                ; 004abe7e
    FISTP dword ptr [0x01c57088]        ; 004abe80 | g_BillboardCameraUp.y
    FISTP dword ptr [0x01c5708c]        ; 004abe86 | g_BillboardCameraUp.z
    ADD ESP,0x5c                        ; 004abe8c
    POP EDI                             ; 004abe8f
    POP ESI                             ; 004abe90
    POP EBX                             ; 004abe91
    RET                                 ; 004abe92

