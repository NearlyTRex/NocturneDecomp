; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CFireball_setupRenderState_FUN_004c0d80(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; Local Variables:
; float[997]       Stack[-0x1000]:3988  afStackY_1000
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x48]:4  local_48
; undefined1       Stack[-0x40]:1  local_40
; CVector3i        Stack[-0x18]:12  local_18
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
;   CVector3i g_BillboardCameraUp
;   undefined4 g_BillboardCameraUp.y
;   undefined4 g_BillboardCameraUp.z
;   undefined4 g_BillboardPrimitive.base.base.count
;   undefined4 g_BillboardPrimitive.base.surface_normal.A
;   undefined4 g_BillboardPrimitive.base.surface_normal.B
;   undefined4 g_BillboardPrimitive.base.surface_normal.C
;   undefined4 g_BillboardPrimitive.base.surface_normal.D
;   undefined4 g_BillboardPrimitive.vertices[0]
;   ... and 3 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0d80
        ;   Label: core_fire.cpp_CFireball_setupRenderState_FUN_004c0d80
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
    JMP 0x0060c91f                      ; 004c0ded
        ;   XREF to: 0060c91f (UNCONDITIONAL_JUMP)  ; LAB_0060c91f
    MOV dword ptr [0x02d12db8],ESI      ; 004c0df2 | g_BillboardCameraRight.y
        ;   Label: LAB_004c0df2
    MOV ESI,dword ptr [0x00823a74]      ; 004c0df8 | g_CurrentSceneCamera
    JMP 0x03fc5642                      ; 004c0dfe
        ;   XREF to: 03fc5642 (UNCONDITIONAL_JUMP)  ; LAB_03fc5642
    JMP 0x03fc5695                      ; 004c0e0c
        ;   XREF to: 03fc5695 (UNCONDITIONAL_JUMP)  ; LAB_03fc5695
        ;   Label: LAB_004c0e0c
    FLD double ptr [0x00629ca3]         ; 004c0e19 | DOUBLE_00629ca3
        ;   Label: LAB_004c0e19
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
    MOV ECX,dword ptr [ESI]             ; 0060c91f
        ;   Label: LAB_0060c91f
    MOV dword ptr [EDI],ECX             ; 0060c921
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c923
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c926
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c929
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c92c
    ADD ESI,0xc                         ; 0060c92f
    ADD EDI,0xc                         ; 0060c932
    XOR ESI,ESI                         ; 0060c935
    JMP 0x004c0df2                      ; 0060c937
        ;   XREF to: 004c0df2 (UNCONDITIONAL_JUMP)  ; LAB_004c0df2
    MOV ECX,0xa                         ; 03fc5642
        ;   Label: LAB_03fc5642
    LEA EDI,[ESP + 0x28]                ; 03fc5647
    LEA ESI,[ESI + 0x10]                ; 03fc564b
    MOV ECX,dword ptr [ESI]             ; 03fc564e
    MOV dword ptr [EDI],ECX             ; 03fc5650
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc5652
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc5655
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc5658
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc565b
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc565e
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc5661
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc5664
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc5667
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc566a
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc566d
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc5670
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc5673
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc5676
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc5679
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc567c
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc567f
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc5682
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc5685
    ADD ESI,0x28                        ; 03fc5688
    ADD EDI,0x28                        ; 03fc568b
    XOR ECX,ECX                         ; 03fc568e
    JMP 0x004c0e0c                      ; 03fc5690
        ;   XREF to: 004c0e0c (UNCONDITIONAL_JUMP)  ; LAB_004c0e0c
    MOV ECX,0xa                         ; 03fc5695
        ;   Label: LAB_03fc5695
    MOV EDI,ESP                         ; 03fc569a
    LEA ESI,[ESP + 0x28]                ; 03fc569c
    MOV ECX,dword ptr [ESI]             ; 03fc56a0
    MOV dword ptr [EDI],ECX             ; 03fc56a2
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc56a4
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc56a7
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc56aa
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc56ad
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc56b0
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc56b3
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc56b6
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc56b9
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc56bc
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc56bf
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc56c2
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc56c5
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc56c8
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc56cb
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc56ce
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc56d1
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc56d4
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc56d7
    ADD ESI,0x28                        ; 03fc56da
    ADD EDI,0x28                        ; 03fc56dd
    XOR ECX,ECX                         ; 03fc56e0
    JMP 0x004c0e19                      ; 03fc56e2
        ;   XREF to: 004c0e19 (UNCONDITIONAL_JUMP)  ; LAB_004c0e19

