; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_00494670(CSpark *this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049c98a
;
; Referenced Globals:
;   double g_DOUBLE_005d53a2 = -65536
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

    PUSH EBX                            ; 00494670
        ;   Label: core_fire.cpp_CSpark_setupRenderState_FUN_00494670
    PUSH ESI                            ; 00494671
    PUSH EDI                            ; 00494672
    SUB ESP,0x5c                        ; 00494673
    MOV EDX,0x4                         ; 00494676
    MOV EAX,0x1                         ; 0049467b
    MOV EBX,0x80000                     ; 00494680
    MOV ESI,0xf80000                    ; 00494685
    MOV EDI,0x1c3deb8                   ; 0049468a
    XOR ECX,ECX                         ; 0049468f
    MOV dword ptr [0x01c3ded4],EDX      ; 00494691 | g_BillboardPrimitive.base.base.count
    MOV dword ptr [0x01c3ded8],ECX      ; 00494697 | g_BillboardPrimitive.base.surface_normal.A
    MOV dword ptr [0x01c3dedc],ECX      ; 0049469d | g_BillboardPrimitive.base.surface_normal.B
    MOV dword ptr [0x01c3dee0],ECX      ; 004946a3 | g_BillboardPrimitive.base.surface_normal.C
    MOV dword ptr [0x01c3dee4],ECX      ; 004946a9 | g_BillboardPrimitive.base.surface_normal.D
    MOV dword ptr [0x01c3dee8],ECX      ; 004946af | g_BillboardPrimitive.vertices[0]
    MOV [0x01c3deec],EAX                ; 004946b5 | g_BillboardPrimitive.vertices[1]
    MOV dword ptr [0x0062202c],EBX      ; 004946ba | g_SRenderVertex_ARRAY_00622014[0].u
    MOV dword ptr [0x00622030],ESI      ; 004946c0 | g_SRenderVertex_ARRAY_00622014[0].v
    MOV dword ptr [0x0062205c],ESI      ; 004946c6 | g_SRenderVertex_ARRAY_00622014[1].u
    MOV dword ptr [0x00622060],ESI      ; 004946cc | g_SRenderVertex_ARRAY_00622014[1].v
    MOV dword ptr [0x0062208c],ESI      ; 004946d2 | g_SRenderVertex_ARRAY_00622014[2].u
    MOV dword ptr [0x00622090],EBX      ; 004946d8 | g_SRenderVertex_ARRAY_00622014[2].v
    MOV dword ptr [0x006220bc],EBX      ; 004946de | g_SRenderVertex_ARRAY_00622014[3].u
    MOV dword ptr [0x006220c0],EBX      ; 004946e4 | g_SRenderVertex_ARRAY_00622014[3].v
    MOV EDX,0x2                         ; 004946ea
    MOV ECX,0x3                         ; 004946ef
    MOV ESI,dword ptr [0x0060b280]      ; 004946f4 | g_CDemonRenderer_PTR_0060b280
    MOV dword ptr [0x01c3def0],EDX      ; 004946fa | g_BillboardPrimitive.vertices[2]
    PUSH ESI                            ; 00494700 | g_CDemonRenderer_01ba5c50
    LEA ESI,[ESP + 0x54]                ; 00494701
    MOV dword ptr [0x01c3def4],ECX      ; 00494705 | g_BillboardPrimitive.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650 ; 0049470b
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 00494710
    ADD ESP,0x4                         ; 00494714
    MOVSD ES:EDI,ESI                    ; 00494717 | g_BillboardCameraRight
    MOVSD ES:EDI,ESI                    ; 00494718 | g_BillboardCameraRight.y
    MOVSD ES:EDI,ESI                    ; 00494719 | g_BillboardCameraRight.z
    MOV ESI,dword ptr [0x007bda74]      ; 0049471a | g_CurrentSceneCamera
    MOV ECX,0xa                         ; 00494720
    XOR EDI,EDI                         ; 00494725
    LEA ESI,[ESI + 0x10]                ; 00494727
    MOV dword ptr [0x01c3debc],EDI      ; 0049472a | g_BillboardCameraRight.y
    LEA EDI,[ESP + 0x28]                ; 00494730
    MOVSD.REP ES:EDI,ESI                ; 00494734
    MOV ECX,0xa                         ; 00494736
    MOV EDI,ESP                         ; 0049473b
    LEA ESI,[ESP + 0x28]                ; 0049473d
    MOVSD.REP ES:EDI,ESI                ; 00494741
    FLD double ptr [0x005d53a2]         ; 00494743 | g_DOUBLE_005d53a2
    FLD float ptr [ESP + 0x8]           ; 00494749
    FMUL ST1                            ; 0049474d
    FLD float ptr [ESP + 0x14]          ; 0049474f
    FMUL ST2                            ; 00494753
    FLD float ptr [ESP + 0x20]          ; 00494755
    FMULP ST3                           ; 00494759
    FXCH                                ; 0049475b
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049475d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH                                ; 00494762
    CALL crt_math.c_round_FUN_005b7ff0  ; 00494764
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH ST2                            ; 00494769
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049476b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH                                ; 00494770
    FISTP dword ptr [0x01c3dec4]        ; 00494772 | g_BillboardCameraUp
    FXCH                                ; 00494778
    FISTP dword ptr [0x01c3dec8]        ; 0049477a | g_BillboardCameraUp.y
    FISTP dword ptr [0x01c3decc]        ; 00494780 | g_BillboardCameraUp.z
    ADD ESP,0x5c                        ; 00494786
    POP EDI                             ; 00494789
    POP ESI                             ; 0049478a
    POP EBX                             ; 0049478b
    RET                                 ; 0049478c

