; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004c0300(CSpark *this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; Local Variables:
; float[997]       Stack[-0x1000]:3988  afStackY_1000
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x48]:4  local_48
; undefined1       Stack[-0x40]:1  local_40
; CVector3i        Stack[-0x18]:12  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c732a
;
; Referenced Globals:
;   double DOUBLE_00629c6b = -65536
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[2].u
;   undefined4 g_RenderVertexBuffer[2].v
;   undefined4 g_RenderVertexBuffer[3].u
;   undefined4 g_RenderVertexBuffer[3].v
;   CDemonCamera* g_CurrentSceneCamera
;   undefined4 g_LightBufferPool[11][183800]
;   CDemonRenderer g_CDemonRendererInstance
;   CVector3i g_BillboardCameraRight
;   undefined4 g_BillboardCameraRight.y
;   ... and 12 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0300
        ;   Label: core_fire.cpp_CSpark_setupRenderState_FUN_004c0300
    PUSH ESI                            ; 004c0301
    PUSH EDI                            ; 004c0302
    SUB ESP,0x5c                        ; 004c0303
    MOV EDX,0x4                         ; 004c0306
    MOV EAX,0x1                         ; 004c030b
    MOV EBX,0x80000                     ; 004c0310
    MOV ESI,0xf80000                    ; 004c0315 | g_LightBufferPool[11][183800]
    MOV EDI,0x2d12db4                   ; 004c031a | g_BillboardCameraRight
    XOR ECX,ECX                         ; 004c031f
    MOV dword ptr [0x02d12dd0],EDX      ; 004c0321 | g_BillboardPrimitive.base.base.count
    MOV dword ptr [0x02d12dd4],ECX      ; 004c0327 | g_BillboardPrimitive.base.surface_normal.A
    MOV dword ptr [0x02d12dd8],ECX      ; 004c032d | g_BillboardPrimitive.base.surface_normal.B
    MOV dword ptr [0x02d12ddc],ECX      ; 004c0333 | g_BillboardPrimitive.base.surface_normal.C
    MOV dword ptr [0x02d12de0],ECX      ; 004c0339 | g_BillboardPrimitive.base.surface_normal.D
    MOV dword ptr [0x02d12de4],ECX      ; 004c033f | g_BillboardPrimitive.vertices[0]
    MOV [0x02d12de8],EAX                ; 004c0345 | g_BillboardPrimitive.vertices[1]
    MOV dword ptr [0x0068802c],EBX      ; 004c034a | g_RenderVertexBuffer[0].u
    MOV dword ptr [0x00688030],ESI      ; 004c0350 | g_RenderVertexBuffer[0].v
    MOV dword ptr [0x0068805c],ESI      ; 004c0356 | g_RenderVertexBuffer[1].u
    MOV dword ptr [0x00688060],ESI      ; 004c035c | g_RenderVertexBuffer[1].v
    MOV dword ptr [0x0068808c],ESI      ; 004c0362 | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x00688090],EBX      ; 004c0368 | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x006880bc],EBX      ; 004c036e | g_RenderVertexBuffer[3].u
    MOV dword ptr [0x006880c0],EBX      ; 004c0374 | g_RenderVertexBuffer[3].v
    MOV EDX,0x2                         ; 004c037a
    MOV ECX,0x3                         ; 004c037f
    MOV ESI,dword ptr [0x006703ec]      ; 004c0384 | g_CDemonRendererPtr2
    MOV dword ptr [0x02d12dec],EDX      ; 004c038a | g_BillboardPrimitive.vertices[2]
    PUSH ESI                            ; 004c0390 | g_CDemonRendererInstance
    LEA ESI,[ESP + 0x54]                ; 004c0391
    MOV dword ptr [0x02d12df0],ECX      ; 004c0395 | g_BillboardPrimitive.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 ; 004c039b
        ;   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004c03a0
    ADD ESP,0x4                         ; 004c03a4
    JMP 0x006108e2                      ; 004c03a7
        ;   XREF to: 006108e2 (UNCONDITIONAL_JUMP)  ; LAB_006108e2
    MOV ECX,0xa                         ; 004c03b0
        ;   Label: LAB_004c03b0
    XOR EDI,EDI                         ; 004c03b5
    LEA ESI,[ESI + 0x10]                ; 004c03b7
    MOV dword ptr [0x02d12db8],EDI      ; 004c03ba | g_BillboardCameraRight.y
    LEA EDI,[ESP + 0x28]                ; 004c03c0
    MOVSD.REP ES:EDI,ESI                ; 004c03c4
    MOV ECX,0xa                         ; 004c03c6
    MOV EDI,ESP                         ; 004c03cb
    LEA ESI,[ESP + 0x28]                ; 004c03cd
    MOVSD.REP ES:EDI,ESI                ; 004c03d1
    FLD double ptr [0x00629c6b]         ; 004c03d3 | DOUBLE_00629c6b
    FLD float ptr [ESP + 0x8]           ; 004c03d9
    FMUL ST1                            ; 004c03dd
    FLD float ptr [ESP + 0x14]          ; 004c03df
    FMUL ST2                            ; 004c03e3
    FLD float ptr [ESP + 0x20]          ; 004c03e5
    FMULP ST3                           ; 004c03e9
    FXCH                                ; 004c03eb
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c03ed
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004c03f2
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c03f4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 004c03f9
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c03fb
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004c0400
    FISTP dword ptr [0x02d12dc0]        ; 004c0402 | g_BillboardCameraUp
    FXCH                                ; 004c0408
    FISTP dword ptr [0x02d12dc4]        ; 004c040a | g_BillboardCameraUp.y
    FISTP dword ptr [0x02d12dc8]        ; 004c0410 | g_BillboardCameraUp.z
    ADD ESP,0x5c                        ; 004c0416
    POP EDI                             ; 004c0419
    POP ESI                             ; 004c041a
    POP EBX                             ; 004c041b
    RET                                 ; 004c041c
    MOV ECX,dword ptr [ESI]             ; 006108e2
        ;   Label: LAB_006108e2
    MOV dword ptr [EDI],ECX             ; 006108e4
    MOV ECX,dword ptr [ESI + 0x4]       ; 006108e6
    MOV dword ptr [EDI + 0x4],ECX       ; 006108e9
    MOV ECX,dword ptr [ESI + 0x8]       ; 006108ec
    MOV dword ptr [EDI + 0x8],ECX       ; 006108ef
    ADD ESI,0xc                         ; 006108f2
    ADD EDI,0xc                         ; 006108f5
    MOV ESI,dword ptr [0x00823a74]      ; 006108f8 | g_CurrentSceneCamera
    JMP 0x004c03b0                      ; 006108fe
        ;   XREF to: 004c03b0 (UNCONDITIONAL_JUMP)  ; LAB_004c03b0

