; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004eb9d0(CBloodParticle *this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; int[997]         Stack[-0x1000]:3988  aiStackY_1000
; float[2]         Stack[-0x68]:8  afStack_68
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x48]:4  local_48
; float[10]        Stack[-0x40]:40  local_40
; CVector3i        Stack[-0x18]:12  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_renderParticles_FUN_004ed7b0 at 004ed7fa
;
; Referenced Globals:
;   double DOUBLE_0062e2e2 = -65536
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 g_GoreQuadPrimitive.base.base.count
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.A
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.B
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.C
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.D
;   undefined4 g_GoreQuadPrimitive.vertices[0]
;   undefined4 g_GoreQuadPrimitive.vertices[1]
;   undefined4 g_GoreQuadPrimitive.vertices[2]
;   undefined4 g_GoreQuadPrimitive.vertices[3]
;   int g_ParticleCameraRotation
;   int INT_02d83394
;   ... and 3 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb9d0
        ;   Label: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004eb9d0
    PUSH ESI                            ; 004eb9d1
    PUSH EDI                            ; 004eb9d2
    SUB ESP,0x5c                        ; 004eb9d3
    MOV EDX,0x4                         ; 004eb9d6
    MOV EAX,0x1                         ; 004eb9db
    LEA ESI,[ESP + 0x50]                ; 004eb9e0
    MOV EBX,dword ptr [0x006703ec]      ; 004eb9e4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDI,0x2d83390                   ; 004eb9ea | g_ParticleCameraRotation
    XOR ECX,ECX                         ; 004eb9ef
    MOV dword ptr [0x02d8336c],EDX      ; 004eb9f1 | g_GoreQuadPrimitive.base.base.count
    MOV dword ptr [0x02d83370],ECX      ; 004eb9f7 | g_GoreQuadPrimitive.base.surface_normal.A
    MOV dword ptr [0x02d83374],ECX      ; 004eb9fd | g_GoreQuadPrimitive.base.surface_normal.B
    MOV dword ptr [0x02d83378],ECX      ; 004eba03 | g_GoreQuadPrimitive.base.surface_normal.C
    MOV dword ptr [0x02d8337c],ECX      ; 004eba09 | g_GoreQuadPrimitive.base.surface_normal.D
    MOV dword ptr [0x02d83380],ECX      ; 004eba0f | g_GoreQuadPrimitive.vertices[0]
    MOV [0x02d83384],EAX                ; 004eba15 | g_GoreQuadPrimitive.vertices[1]
    PUSH EBX                            ; 004eba1a | g_CDemonRendererInstance
    MOV EDX,0x2                         ; 004eba1b
    MOV ECX,0x3                         ; 004eba20
    MOV dword ptr [0x02d83388],EDX      ; 004eba25 | g_GoreQuadPrimitive.vertices[2]
    MOV dword ptr [0x02d8338c],ECX      ; 004eba2b | g_GoreQuadPrimitive.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 ; 004eba31
        ;   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004eba36
    ADD ESP,0x4                         ; 004eba3a
    JMP 0x006108a8                      ; 004eba3d
        ;   XREF to: 006108a8 (UNCONDITIONAL_JUMP)  ; LAB_006108a8
    MOV dword ptr [0x02d83394],ESI      ; 004eba42 | INT_02d83394
        ;   Label: LAB_004eba42
    MOV ESI,dword ptr [0x00823a74]      ; 004eba48 | g_CurrentSceneCamera
    JMP 0x03fc5333                      ; 004eba4e
        ;   XREF to: 03fc5333 (UNCONDITIONAL_JUMP)  ; LAB_03fc5333
    JMP 0x03fc5386                      ; 004eba5c
        ;   XREF to: 03fc5386 (UNCONDITIONAL_JUMP)  ; LAB_03fc5386
        ;   Label: LAB_004eba5c
    FLD double ptr [0x0062e2e2]         ; 004eba69 | DOUBLE_0062e2e2
        ;   Label: LAB_004eba69
    FLD float ptr [ESP + 0x8]           ; 004eba6f
    FMUL ST1                            ; 004eba73
    FLD float ptr [ESP + 0x14]          ; 004eba75
    FMUL ST2                            ; 004eba79
    FLD float ptr [ESP + 0x20]          ; 004eba7b
    FMULP ST3                           ; 004eba7f
    FXCH                                ; 004eba81
    CALL crt_math.c_round_FUN_005fe6b0  ; 004eba83
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004eba88
    CALL crt_math.c_round_FUN_005fe6b0  ; 004eba8a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 004eba8f
    CALL crt_math.c_round_FUN_005fe6b0  ; 004eba91
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004eba96
    FISTP dword ptr [0x02d8339c]        ; 004eba98 | INT_02d8339c
    FXCH                                ; 004eba9e
    FISTP dword ptr [0x02d833a0]        ; 004ebaa0 | INT_02d833a0
    FISTP dword ptr [0x02d833a4]        ; 004ebaa6 | INT_02d833a4
    ADD ESP,0x5c                        ; 004ebaac
    POP EDI                             ; 004ebaaf
    POP ESI                             ; 004ebab0
    POP EBX                             ; 004ebab1
    RET                                 ; 004ebab2
    MOV ECX,dword ptr [ESI]             ; 006108a8
        ;   Label: LAB_006108a8
    MOV dword ptr [EDI],ECX             ; 006108aa
    MOV ECX,dword ptr [ESI + 0x4]       ; 006108ac
    MOV dword ptr [EDI + 0x4],ECX       ; 006108af
    MOV ECX,dword ptr [ESI + 0x8]       ; 006108b2
    MOV dword ptr [EDI + 0x8],ECX       ; 006108b5
    ADD ESI,0xc                         ; 006108b8
    ADD EDI,0xc                         ; 006108bb
    XOR ESI,ESI                         ; 006108be
    JMP 0x004eba42                      ; 006108c0
        ;   XREF to: 004eba42 (UNCONDITIONAL_JUMP)  ; LAB_004eba42
    MOV ECX,0xa                         ; 03fc5333
        ;   Label: LAB_03fc5333
    LEA EDI,[ESP + 0x28]                ; 03fc5338
    LEA ESI,[ESI + 0x10]                ; 03fc533c
    MOV ECX,dword ptr [ESI]             ; 03fc533f
    MOV dword ptr [EDI],ECX             ; 03fc5341
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc5343
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc5346
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc5349
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc534c
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc534f
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc5352
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc5355
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc5358
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc535b
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc535e
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc5361
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc5364
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc5367
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc536a
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc536d
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc5370
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc5373
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc5376
    ADD ESI,0x28                        ; 03fc5379
    ADD EDI,0x28                        ; 03fc537c
    XOR ECX,ECX                         ; 03fc537f
    JMP 0x004eba5c                      ; 03fc5381
        ;   XREF to: 004eba5c (UNCONDITIONAL_JUMP)  ; LAB_004eba5c
    MOV ECX,0xa                         ; 03fc5386
        ;   Label: LAB_03fc5386
    MOV EDI,ESP                         ; 03fc538b
    LEA ESI,[ESP + 0x28]                ; 03fc538d
    MOV ECX,dword ptr [ESI]             ; 03fc5391
    MOV dword ptr [EDI],ECX             ; 03fc5393
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc5395
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc5398
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc539b
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc539e
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc53a1
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc53a4
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc53a7
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc53aa
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc53ad
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc53b0
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc53b3
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc53b6
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc53b9
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc53bc
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc53bf
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc53c2
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc53c5
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc53c8
    ADD ESI,0x28                        ; 03fc53cb
    ADD EDI,0x28                        ; 03fc53ce
    XOR ECX,ECX                         ; 03fc53d1
    JMP 0x004eba69                      ; 03fc53d3
        ;   XREF to: 004eba69 (UNCONDITIONAL_JUMP)  ; LAB_004eba69

