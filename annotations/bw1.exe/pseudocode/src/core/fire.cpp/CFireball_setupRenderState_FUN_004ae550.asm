; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireball_setupRenderState_FUN_004ae550(CFireball *this_ptr)
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
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b51b7
;
; Referenced Globals:
;   double g_DOUBLE_005df23c = -65536
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

    PUSH EBX                            ; 004ae550
        ;   Label: core_fire.cpp_CFireball_setupRenderState_FUN_004ae550
    PUSH ESI                            ; 004ae551
    PUSH EDI                            ; 004ae552
    SUB ESP,0x5c                        ; 004ae553
    MOV EDX,0x4                         ; 004ae556
    MOV EAX,0x1                         ; 004ae55b
    LEA ESI,[ESP + 0x50]                ; 004ae560
    MOV EBX,dword ptr [0x00612560]      ; 004ae564 | g_CDemonRenderer_PTR_00612560
    MOV EDI,0x1c57078                   ; 004ae56a
    XOR ECX,ECX                         ; 004ae56f
    MOV dword ptr [0x01c57094],EDX      ; 004ae571 | g_BillboardPrimitive.base.base.count
    MOV dword ptr [0x01c57098],ECX      ; 004ae577 | g_BillboardPrimitive.base.surface_normal.A
    MOV dword ptr [0x01c5709c],ECX      ; 004ae57d | g_BillboardPrimitive.base.surface_normal.B
    MOV dword ptr [0x01c570a0],ECX      ; 004ae583 | g_BillboardPrimitive.base.surface_normal.C
    MOV dword ptr [0x01c570a4],ECX      ; 004ae589 | g_BillboardPrimitive.base.surface_normal.D
    MOV dword ptr [0x01c570a8],ECX      ; 004ae58f | g_BillboardPrimitive.vertices[0]
    MOV [0x01c570ac],EAX                ; 004ae595 | g_BillboardPrimitive.vertices[1]
    PUSH EBX                            ; 004ae59a | g_CDemonRenderer_01bc120c
    MOV EDX,0x2                         ; 004ae59b
    MOV ECX,0x3                         ; 004ae5a0
    MOV dword ptr [0x01c570b0],EDX      ; 004ae5a5 | g_BillboardPrimitive.vertices[2]
    MOV dword ptr [0x01c570b4],ECX      ; 004ae5ab | g_BillboardPrimitive.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50 ; 004ae5b1
        ;   XREF to: 00483b50 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004ae5b6
    ADD ESP,0x4                         ; 004ae5ba
    MOVSD ES:EDI,ESI                    ; 004ae5bd | g_BillboardCameraRight
    MOVSD ES:EDI,ESI                    ; 004ae5be | g_BillboardCameraRight.y
    MOVSD ES:EDI,ESI                    ; 004ae5bf | g_BillboardCameraRight.z
    XOR ESI,ESI                         ; 004ae5c0
    MOV dword ptr [0x01c5707c],ESI      ; 004ae5c2 | g_BillboardCameraRight.y
    MOV ESI,dword ptr [0x007c6120]      ; 004ae5c8 | g_CurrentSceneCamera
    MOV ECX,0xa                         ; 004ae5ce
    LEA EDI,[ESP + 0x28]                ; 004ae5d3
    LEA ESI,[ESI + 0x10]                ; 004ae5d7
    MOVSD.REP ES:EDI,ESI                ; 004ae5da
    MOV ECX,0xa                         ; 004ae5dc
    MOV EDI,ESP                         ; 004ae5e1
    LEA ESI,[ESP + 0x28]                ; 004ae5e3
    MOVSD.REP ES:EDI,ESI                ; 004ae5e7
    FLD double ptr [0x005df23c]         ; 004ae5e9 | g_DOUBLE_005df23c
    FLD float ptr [ESP + 0x8]           ; 004ae5ef
    FMUL ST1                            ; 004ae5f3
    FLD float ptr [ESP + 0x14]          ; 004ae5f5
    FMUL ST2                            ; 004ae5f9
    FLD float ptr [ESP + 0x20]          ; 004ae5fb
    FMULP ST3                           ; 004ae5ff
    FXCH                                ; 004ae601
    CALL crt_math.c_round_FUN_005c03a0  ; 004ae603
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH                                ; 004ae608
    CALL crt_math.c_round_FUN_005c03a0  ; 004ae60a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH ST2                            ; 004ae60f
    CALL crt_math.c_round_FUN_005c03a0  ; 004ae611
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH                                ; 004ae616
    FISTP dword ptr [0x01c57084]        ; 004ae618 | g_BillboardCameraUp
    FXCH                                ; 004ae61e
    FISTP dword ptr [0x01c57088]        ; 004ae620 | g_BillboardCameraUp.y
    FISTP dword ptr [0x01c5708c]        ; 004ae626 | g_BillboardCameraUp.z
    ADD ESP,0x5c                        ; 004ae62c
    POP EDI                             ; 004ae62f
    POP ESI                             ; 004ae630
    POP EBX                             ; 004ae631
    RET                                 ; 004ae632

