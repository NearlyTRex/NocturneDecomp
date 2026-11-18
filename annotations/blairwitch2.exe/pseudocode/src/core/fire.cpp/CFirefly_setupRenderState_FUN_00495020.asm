; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFirefly_setupRenderState_FUN_00495020(CFirefly *this_ptr)
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
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049c9bf
;
; Referenced Globals:
;   double g_DOUBLE_005d53c2 = -65536
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].u
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].v
;   undefined4 g_SRenderVertex_ARRAY_00622014[1].u
;   undefined4 g_SRenderVertex_ARRAY_00622014[1].v
;   undefined4 g_SRenderVertex_ARRAY_00622014[2].u
;   undefined4 g_SRenderVertex_ARRAY_00622014[2].v
;   undefined4 g_SRenderVertex_ARRAY_00622014[3].u
;   undefined4 g_SRenderVertex_ARRAY_00622014[3].v
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRenderer_01ba5c50
;   CVector3i g_BillboardCameraRight
;   undefined4 g_BillboardCameraRight.y
;   undefined4 g_BillboardCameraRight.z
;   ... and 12 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495020
        ;   Label: core_fire.cpp_CFirefly_setupRenderState_FUN_00495020
    PUSH ESI                            ; 00495021
    PUSH EDI                            ; 00495022
    SUB ESP,0x5c                        ; 00495023
    MOV EDX,0x4                         ; 00495026
    MOV EAX,0x1                         ; 0049502b
    MOV EBX,0x80000                     ; 00495030
    MOV ESI,0xf80000                    ; 00495035
    MOV EDI,0x1c3deb8                   ; 0049503a
    XOR ECX,ECX                         ; 0049503f
    MOV dword ptr [0x01c3ded4],EDX      ; 00495041 | g_BillboardPrimitive.base.base.count
    MOV dword ptr [0x01c3ded8],ECX      ; 00495047 | g_BillboardPrimitive.base.surface_normal.A
    MOV dword ptr [0x01c3dedc],ECX      ; 0049504d | g_BillboardPrimitive.base.surface_normal.B
    MOV dword ptr [0x01c3dee0],ECX      ; 00495053 | g_BillboardPrimitive.base.surface_normal.C
    MOV dword ptr [0x01c3dee4],ECX      ; 00495059 | g_BillboardPrimitive.base.surface_normal.D
    MOV dword ptr [0x01c3dee8],ECX      ; 0049505f | g_BillboardPrimitive.vertices[0]
    MOV [0x01c3deec],EAX                ; 00495065 | g_BillboardPrimitive.vertices[1]
    MOV dword ptr [0x0062202c],EBX      ; 0049506a | g_SRenderVertex_ARRAY_00622014[0].u
    MOV dword ptr [0x00622030],ESI      ; 00495070 | g_SRenderVertex_ARRAY_00622014[0].v
    MOV dword ptr [0x0062205c],ESI      ; 00495076 | g_SRenderVertex_ARRAY_00622014[1].u
    MOV dword ptr [0x00622060],ESI      ; 0049507c | g_SRenderVertex_ARRAY_00622014[1].v
    MOV dword ptr [0x0062208c],ESI      ; 00495082 | g_SRenderVertex_ARRAY_00622014[2].u
    MOV dword ptr [0x00622090],EBX      ; 00495088 | g_SRenderVertex_ARRAY_00622014[2].v
    MOV dword ptr [0x006220bc],EBX      ; 0049508e | g_SRenderVertex_ARRAY_00622014[3].u
    MOV dword ptr [0x006220c0],EBX      ; 00495094 | g_SRenderVertex_ARRAY_00622014[3].v
    MOV EDX,0x2                         ; 0049509a
    MOV ECX,0x3                         ; 0049509f
    MOV ESI,dword ptr [0x0060b280]      ; 004950a4 | g_CDemonRenderer_PTR_0060b280
    MOV dword ptr [0x01c3def0],EDX      ; 004950aa | g_BillboardPrimitive.vertices[2]
    PUSH ESI                            ; 004950b0 | g_CDemonRenderer_01ba5c50
    LEA ESI,[ESP + 0x54]                ; 004950b1
    MOV dword ptr [0x01c3def4],ECX      ; 004950b5 | g_BillboardPrimitive.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650 ; 004950bb
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004950c0
    ADD ESP,0x4                         ; 004950c4
    MOVSD ES:EDI,ESI                    ; 004950c7 | g_BillboardCameraRight
    MOVSD ES:EDI,ESI                    ; 004950c8 | g_BillboardCameraRight.y
    MOVSD ES:EDI,ESI                    ; 004950c9 | g_BillboardCameraRight.z
    MOV ESI,dword ptr [0x007bda74]      ; 004950ca | g_CurrentSceneCamera
    MOV ECX,0xa                         ; 004950d0
    XOR EDI,EDI                         ; 004950d5
    LEA ESI,[ESI + 0x10]                ; 004950d7
    MOV dword ptr [0x01c3debc],EDI      ; 004950da | g_BillboardCameraRight.y
    LEA EDI,[ESP + 0x28]                ; 004950e0
    MOVSD.REP ES:EDI,ESI                ; 004950e4
    MOV ECX,0xa                         ; 004950e6
    MOV EDI,ESP                         ; 004950eb
    LEA ESI,[ESP + 0x28]                ; 004950ed
    MOVSD.REP ES:EDI,ESI                ; 004950f1
    FLD double ptr [0x005d53c2]         ; 004950f3 | g_DOUBLE_005d53c2
    FLD float ptr [ESP + 0x8]           ; 004950f9
    FMUL ST1                            ; 004950fd
    FLD float ptr [ESP + 0x14]          ; 004950ff
    FMUL ST2                            ; 00495103
    FLD float ptr [ESP + 0x20]          ; 00495105
    FMULP ST3                           ; 00495109
    FXCH                                ; 0049510b
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049510d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH                                ; 00495112
    CALL crt_math.c_round_FUN_005b7ff0  ; 00495114
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH ST2                            ; 00495119
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049511b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH                                ; 00495120
    FISTP dword ptr [0x01c3dec4]        ; 00495122 | g_BillboardCameraUp
    FXCH                                ; 00495128
    FISTP dword ptr [0x01c3dec8]        ; 0049512a | g_BillboardCameraUp.y
    FISTP dword ptr [0x01c3decc]        ; 00495130 | g_BillboardCameraUp.z
    ADD ESP,0x5c                        ; 00495136
    POP EDI                             ; 00495139
    POP ESI                             ; 0049513a
    POP EBX                             ; 0049513b
    RET                                 ; 0049513c

