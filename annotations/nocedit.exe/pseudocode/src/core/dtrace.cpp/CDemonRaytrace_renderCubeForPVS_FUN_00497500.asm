; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, int render_mode)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   grid_x
; int              Stack[0xc]:4   grid_y
; int              Stack[0x10]:4   grid_z
; int              Stack[0x14]:4   render_mode
; Local Variables:
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 at 00498504
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_00622b86
;   TerminatedCString s_Too_many_drawn_cubes_Nee_00622b99
;   double DOUBLE_00622bca = -256
;   double DOUBLE_00622bd2 = 256
;   float g_RaytraceWorldToScreenScale = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[2].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[3].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[4].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[5].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[6].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[7].projected_vertex.screen_x
;   ... and 13 more
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497500
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
    PUSH ESI                            ; 00497501
    PUSH EDI                            ; 00497502
    PUSH EBP                            ; 00497503
    SUB ESP,0xc4                        ; 00497504
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0049750a
    MOV EDI,dword ptr [ESP + 0xdc]      ; 00497511
    MOV EBP,dword ptr [ESP + 0xe4]      ; 00497518
    MOV EDX,dword ptr [0x02ca0394]      ; 0049751f | g_CubesTestedCount
    INC EDX                             ; 00497525
    MOV ECX,dword ptr [ESI + 0x54]      ; 00497526
    MOV dword ptr [0x02ca0394],EDX      ; 00497529 | g_CubesTestedCount
    CMP EDI,ECX                         ; 0049752f
    JL 0x0049755a                       ; 00497531
        ;   XREF to: 0049755a (CONDITIONAL_JUMP)  ; LAB_0049755a
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00497533
    CMP EAX,dword ptr [ESI + 0x58]      ; 0049753a
    JL 0x0049755a                       ; 0049753d
        ;   XREF to: 0049755a (CONDITIONAL_JUMP)  ; LAB_0049755a
    CMP EBP,dword ptr [ESI + 0x5c]      ; 0049753f
    JL 0x0049755a                       ; 00497542
        ;   XREF to: 0049755a (CONDITIONAL_JUMP)  ; LAB_0049755a
    CMP EDI,dword ptr [ESI + 0x60]      ; 00497544
    JG 0x0049755a                       ; 00497547
        ;   XREF to: 0049755a (CONDITIONAL_JUMP)  ; LAB_0049755a
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00497549
    CMP EAX,dword ptr [ESI + 0x64]      ; 00497550
    JG 0x0049755a                       ; 00497553
        ;   XREF to: 0049755a (CONDITIONAL_JUMP)  ; LAB_0049755a
    CMP EBP,dword ptr [ESI + 0x68]      ; 00497555
    JLE 0x00497565                      ; 00497558
        ;   XREF to: 00497565 (CONDITIONAL_JUMP)  ; LAB_00497565
    ADD ESP,0xc4                        ; 0049755a
        ;   Label: LAB_0049755a
    POP EBP                             ; 00497560
    POP EDI                             ; 00497561
    POP ESI                             ; 00497562
    POP EBX                             ; 00497563
    RET                                 ; 00497564
    PUSH EBP                            ; 00497565
        ;   Label: LAB_00497565
    PUSH EAX                            ; 00497566
    PUSH EDI                            ; 00497567
    PUSH ESI                            ; 00497568
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 00497569
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0049756e
    MOV dword ptr [ESP + 0xa0],EAX      ; 00497571
    TEST EAX,EAX                        ; 00497578
    JZ 0x0049755a                       ; 0049757a
        ;   XREF to: 0049755a (CONDITIONAL_JUMP)  ; LAB_0049755a
    CMP dword ptr [EAX],0x0             ; 0049757c
    JZ 0x0049755a                       ; 0049757f
        ;   XREF to: 0049755a (CONDITIONAL_JUMP)  ; LAB_0049755a
    MOV dword ptr [ESP + 0xbc],EDI      ; 00497581
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00497588
    FILD dword ptr [ESP + 0xbc]         ; 0049758f
    FST float ptr [ESP + 0xac]          ; 00497596
    FMUL float ptr [ESI + 0x28]         ; 0049759d
    MOV dword ptr [ESP + 0xbc],EAX      ; 004975a0
    MOV dword ptr [ESP + 0xc0],EBP      ; 004975a7
    FILD dword ptr [ESP + 0xbc]         ; 004975ae
    FSTP float ptr [ESP + 0xb4]         ; 004975b5
    FADD float ptr [ESI + 0x10]         ; 004975bc
    FLD float ptr [ESP + 0xb4]          ; 004975bf
    FXCH                                ; 004975c6
    FSTP float ptr [ESP + 0x28]         ; 004975c8
    FMUL float ptr [ESI + 0x2c]         ; 004975cc
    FILD dword ptr [ESP + 0xc0]         ; 004975cf
    FSTP float ptr [ESP + 0xa4]         ; 004975d6
    FADD float ptr [ESI + 0x14]         ; 004975dd
    FLD float ptr [ESP + 0xa4]          ; 004975e0
    FXCH                                ; 004975e7
    FSTP float ptr [ESP + 0x2c]         ; 004975e9
    FMUL float ptr [ESI + 0x30]         ; 004975ed
    LEA EBX,[ESP + 0x70]                ; 004975f0
    MOV ECX,dword ptr [0x02ca0398]      ; 004975f4 | g_CubesWithVoxelsCount
    MOV EDX,dword ptr [0x006703e8]      ; 004975fa | g_CDemonRendererInstance | g_CDemonRendererPtr
    INC ECX                             ; 00497600
    LEA EAX,[ESP + 0x28]                ; 00497601
    FADD float ptr [ESI + 0x18]         ; 00497605
    MOV dword ptr [0x02ca0398],ECX      ; 00497608 | g_CubesWithVoxelsCount
    FSTP float ptr [ESP + 0x30]         ; 0049760e
    FLD float ptr [EAX]                 ; 00497612
    FMUL float ptr [0x0065d270]         ; 00497614 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 0049761a
    FLD float ptr [EAX + 0x4]           ; 0049761c
    FMUL float ptr [0x0065d270]         ; 0049761f | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 00497625
    FLD float ptr [EAX + 0x8]           ; 00497628
    FMUL float ptr [0x0065d270]         ; 0049762b | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 00497631
    LEA EAX,[ESP + 0x70]                ; 00497634
    PUSH EAX                            ; 00497638
    MOV EAX,dword ptr [EDX]             ; 00497639 | g_CDemonRendererInstance
    PUSH EAX                            ; 0049763b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0049763c
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497641
    LEA EAX,[EDI + 0x1]                 ; 00497644
    MOV dword ptr [ESP + 0xc0],EAX      ; 00497647
    FILD dword ptr [ESP + 0xc0]         ; 0049764e
    FST float ptr [ESP + 0xa8]          ; 00497655
    FMUL float ptr [ESI + 0x28]         ; 0049765c
    FADD float ptr [ESI + 0x10]         ; 0049765f
    FLD float ptr [ESP + 0xb4]          ; 00497662
    FXCH                                ; 00497669
    FSTP float ptr [ESP + 0x28]         ; 0049766b
    FMUL float ptr [ESI + 0x2c]         ; 0049766f
    FADD float ptr [ESI + 0x14]         ; 00497672
    FLD float ptr [ESP + 0xa4]          ; 00497675
    FXCH                                ; 0049767c
    FSTP float ptr [ESP + 0x2c]         ; 0049767e
    FMUL float ptr [ESI + 0x30]         ; 00497682
    LEA EBX,[ESP + 0x58]                ; 00497685
    MOV EDX,dword ptr [0x006703e8]      ; 00497689 | g_CDemonRendererInstance | g_CDemonRendererPtr
    FADD float ptr [ESI + 0x18]         ; 0049768f
    LEA EAX,[ESP + 0x28]                ; 00497692
    FSTP float ptr [ESP + 0x30]         ; 00497696
    FLD float ptr [EAX]                 ; 0049769a
    FMUL float ptr [0x0065d270]         ; 0049769c | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 004976a2
    FLD float ptr [EAX + 0x4]           ; 004976a4
    FMUL float ptr [0x0065d270]         ; 004976a7 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 004976ad
    FLD float ptr [EAX + 0x8]           ; 004976b0
    FMUL float ptr [0x0065d270]         ; 004976b3 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 004976b9
    LEA EAX,[ESP + 0x58]                ; 004976bc
    PUSH EAX                            ; 004976c0
    MOV EAX,dword ptr [EDX]             ; 004976c1 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004976c3
    PUSH EAX                            ; 004976c6
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004976c7
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004976cc
    FLD float ptr [ESP + 0xa8]          ; 004976cf
    FMUL float ptr [ESI + 0x28]         ; 004976d6
    LEA EAX,[EBP + 0x1]                 ; 004976d9
    FLD float ptr [ESP + 0xb4]          ; 004976dc
    FXCH                                ; 004976e3
    FADD float ptr [ESI + 0x10]         ; 004976e5
    MOV dword ptr [ESP + 0xc0],EAX      ; 004976e8
    FSTP float ptr [ESP + 0x28]         ; 004976ef
    FMUL float ptr [ESI + 0x2c]         ; 004976f3
    FILD dword ptr [ESP + 0xc0]         ; 004976f6
    FSTP float ptr [ESP + 0xb0]         ; 004976fd
    FADD float ptr [ESI + 0x14]         ; 00497704
    FLD float ptr [ESP + 0xb0]          ; 00497707
    FXCH                                ; 0049770e
    FSTP float ptr [ESP + 0x2c]         ; 00497710
    FMUL float ptr [ESI + 0x30]         ; 00497714
    FADD float ptr [ESI + 0x18]         ; 00497717
    FSTP float ptr [ESP + 0x30]         ; 0049771a
    LEA EBX,[ESP + 0x94]                ; 0049771e
    LEA EAX,[ESP + 0x28]                ; 00497725
    MOV EDX,dword ptr [0x006703e8]      ; 00497729 | g_CDemonRendererInstance | g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 0049772f
    FMUL float ptr [0x0065d270]         ; 00497731 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 00497737
    FLD float ptr [EAX + 0x4]           ; 00497739
    FMUL float ptr [0x0065d270]         ; 0049773c | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 00497742
    FLD float ptr [EAX + 0x8]           ; 00497745
    FMUL float ptr [0x0065d270]         ; 00497748 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 0049774e
    LEA EAX,[ESP + 0x94]                ; 00497751
    PUSH EAX                            ; 00497758
    MOV EAX,dword ptr [EDX]             ; 00497759 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 0049775b
    PUSH EAX                            ; 0049775e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0049775f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497764
    FLD float ptr [ESP + 0xac]          ; 00497767
    FMUL float ptr [ESI + 0x28]         ; 0049776e
    FADD float ptr [ESI + 0x10]         ; 00497771
    FLD float ptr [ESP + 0xb4]          ; 00497774
    FXCH                                ; 0049777b
    FSTP float ptr [ESP + 0x28]         ; 0049777d
    FMUL float ptr [ESI + 0x2c]         ; 00497781
    FADD float ptr [ESI + 0x14]         ; 00497784
    FLD float ptr [ESP + 0xb0]          ; 00497787
    FXCH                                ; 0049778e
    FSTP float ptr [ESP + 0x2c]         ; 00497790
    FMUL float ptr [ESI + 0x30]         ; 00497794
    LEA EBX,[ESP + 0x7c]                ; 00497797
    LEA EAX,[ESP + 0x28]                ; 0049779b
    FADD float ptr [ESI + 0x18]         ; 0049779f
    MOV EDX,dword ptr [0x006703e8]      ; 004977a2 | g_CDemonRendererInstance | g_CDemonRendererPtr
    FSTP float ptr [ESP + 0x30]         ; 004977a8
    FLD float ptr [EAX]                 ; 004977ac
    FMUL float ptr [0x0065d270]         ; 004977ae | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 004977b4
    FLD float ptr [EAX + 0x4]           ; 004977b6
    FMUL float ptr [0x0065d270]         ; 004977b9 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 004977bf
    FLD float ptr [EAX + 0x8]           ; 004977c2
    FMUL float ptr [0x0065d270]         ; 004977c5 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 004977cb
    LEA EAX,[ESP + 0x7c]                ; 004977ce
    PUSH EAX                            ; 004977d2
    MOV EAX,dword ptr [EDX]             ; 004977d3 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004977d5
    PUSH EAX                            ; 004977da
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004977db
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004977e0
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004977e3
    FLD float ptr [ESP + 0xac]          ; 004977ea
    INC EAX                             ; 004977f1
    FMUL float ptr [ESI + 0x28]         ; 004977f2
    MOV dword ptr [ESP + 0xc0],EAX      ; 004977f5
    FADD float ptr [ESI + 0x10]         ; 004977fc
    FILD dword ptr [ESP + 0xc0]         ; 004977ff
    FXCH                                ; 00497806
    FSTP float ptr [ESP + 0x28]         ; 00497808
    FST float ptr [ESP + 0xb8]          ; 0049780c
    FMUL float ptr [ESI + 0x2c]         ; 00497813
    FADD float ptr [ESI + 0x14]         ; 00497816
    FLD float ptr [ESP + 0xa4]          ; 00497819
    FXCH                                ; 00497820
    FSTP float ptr [ESP + 0x2c]         ; 00497822
    FMUL float ptr [ESI + 0x30]         ; 00497826
    LEA EBX,[ESP + 0x34]                ; 00497829
    MOV EDX,dword ptr [0x006703e8]      ; 0049782d | g_CDemonRendererInstance | g_CDemonRendererPtr
    FADD float ptr [ESI + 0x18]         ; 00497833
    LEA EAX,[ESP + 0x28]                ; 00497836
    FSTP float ptr [ESP + 0x30]         ; 0049783a
    FLD float ptr [EAX]                 ; 0049783e
    FMUL float ptr [0x0065d270]         ; 00497840 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 00497846
    FLD float ptr [EAX + 0x4]           ; 00497848
    FMUL float ptr [0x0065d270]         ; 0049784b | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 00497851
    FLD float ptr [EAX + 0x8]           ; 00497854
    FMUL float ptr [0x0065d270]         ; 00497857 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 0049785d
    LEA EAX,[ESP + 0x34]                ; 00497860
    PUSH EAX                            ; 00497864
    MOV EAX,dword ptr [EDX]             ; 00497865 | g_CDemonRendererInstance
    ADD EAX,0xc0                        ; 00497867
    PUSH EAX                            ; 0049786c
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0049786d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497872
    FLD float ptr [ESP + 0xa8]          ; 00497875
    FMUL float ptr [ESI + 0x28]         ; 0049787c
    FADD float ptr [ESI + 0x10]         ; 0049787f
    FLD float ptr [ESP + 0xb8]          ; 00497882
    FXCH                                ; 00497889
    FSTP float ptr [ESP + 0x28]         ; 0049788b
    FMUL float ptr [ESI + 0x2c]         ; 0049788f
    FADD float ptr [ESI + 0x14]         ; 00497892
    FLD float ptr [ESP + 0xa4]          ; 00497895
    FXCH                                ; 0049789c
    FSTP float ptr [ESP + 0x2c]         ; 0049789e
    FMUL float ptr [ESI + 0x30]         ; 004978a2
    LEA EBX,[ESP + 0x40]                ; 004978a5
    LEA EAX,[ESP + 0x28]                ; 004978a9
    FADD float ptr [ESI + 0x18]         ; 004978ad
    MOV EDX,dword ptr [0x006703e8]      ; 004978b0 | g_CDemonRendererInstance | g_CDemonRendererPtr
    FSTP float ptr [ESP + 0x30]         ; 004978b6
    FLD float ptr [EAX]                 ; 004978ba
    FMUL float ptr [0x0065d270]         ; 004978bc | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 004978c2
    FLD float ptr [EAX + 0x4]           ; 004978c4
    FMUL float ptr [0x0065d270]         ; 004978c7 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 004978cd
    FLD float ptr [EAX + 0x8]           ; 004978d0
    FMUL float ptr [0x0065d270]         ; 004978d3 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 004978d9
    LEA EAX,[ESP + 0x40]                ; 004978dc
    PUSH EAX                            ; 004978e0
    MOV EAX,dword ptr [EDX]             ; 004978e1 | g_CDemonRendererInstance
    ADD EAX,0xf0                        ; 004978e3
    PUSH EAX                            ; 004978e8
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004978e9
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004978ee
    FLD float ptr [ESP + 0xa8]          ; 004978f1
    FMUL float ptr [ESI + 0x28]         ; 004978f8
    FADD float ptr [ESI + 0x10]         ; 004978fb
    FLD float ptr [ESP + 0xb8]          ; 004978fe
    FXCH                                ; 00497905
    FSTP float ptr [ESP + 0x28]         ; 00497907
    FMUL float ptr [ESI + 0x2c]         ; 0049790b
    FADD float ptr [ESI + 0x14]         ; 0049790e
    FLD float ptr [ESP + 0xb0]          ; 00497911
    FXCH                                ; 00497918
    FSTP float ptr [ESP + 0x2c]         ; 0049791a
    FMUL float ptr [ESI + 0x30]         ; 0049791e
    LEA EBX,[ESP + 0x64]                ; 00497921
    LEA EAX,[ESP + 0x28]                ; 00497925
    FADD float ptr [ESI + 0x18]         ; 00497929
    MOV EDX,dword ptr [0x006703e8]      ; 0049792c | g_CDemonRendererInstance | g_CDemonRendererPtr
    FSTP float ptr [ESP + 0x30]         ; 00497932
    FLD float ptr [EAX]                 ; 00497936
    FMUL float ptr [0x0065d270]         ; 00497938 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 0049793e
    FLD float ptr [EAX + 0x4]           ; 00497940
    FMUL float ptr [0x0065d270]         ; 00497943 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 00497949
    FLD float ptr [EAX + 0x8]           ; 0049794c
    FMUL float ptr [0x0065d270]         ; 0049794f | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 00497955
    LEA EAX,[ESP + 0x64]                ; 00497958
    PUSH EAX                            ; 0049795c
    MOV EAX,dword ptr [EDX]             ; 0049795d | g_CDemonRendererInstance
    ADD EAX,0x120                       ; 0049795f
    PUSH EAX                            ; 00497964
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00497965
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049796a
    FLD float ptr [ESP + 0xac]          ; 0049796d
    FMUL float ptr [ESI + 0x28]         ; 00497974
    FADD float ptr [ESI + 0x10]         ; 00497977
    FLD float ptr [ESP + 0xb8]          ; 0049797a
    FXCH                                ; 00497981
    FSTP float ptr [ESP + 0x28]         ; 00497983
    FMUL float ptr [ESI + 0x2c]         ; 00497987
    FADD float ptr [ESI + 0x14]         ; 0049798a
    FLD float ptr [ESP + 0xb0]          ; 0049798d
    FXCH                                ; 00497994
    FSTP float ptr [ESP + 0x2c]         ; 00497996
    FMUL float ptr [ESI + 0x30]         ; 0049799a
    LEA EBX,[ESP + 0x4c]                ; 0049799d
    LEA EAX,[ESP + 0x28]                ; 004979a1
    FADD float ptr [ESI + 0x18]         ; 004979a5
    MOV EDX,dword ptr [0x006703e8]      ; 004979a8 | g_CDemonRendererInstance | g_CDemonRendererPtr
    FSTP float ptr [ESP + 0x30]         ; 004979ae
    FLD float ptr [EAX]                 ; 004979b2
    FMUL float ptr [0x0065d270]         ; 004979b4 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 004979ba
    FLD float ptr [EAX + 0x4]           ; 004979bc
    FMUL float ptr [0x0065d270]         ; 004979bf | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 004979c5
    FLD float ptr [EAX + 0x8]           ; 004979c8
    FMUL float ptr [0x0065d270]         ; 004979cb | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 004979d1
    LEA EAX,[ESP + 0x4c]                ; 004979d4
    PUSH EAX                            ; 004979d8
    MOV EAX,dword ptr [EDX]             ; 004979d9 | g_CDemonRendererInstance
    ADD EAX,0x150                       ; 004979db
    PUSH EAX                            ; 004979e0
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004979e1
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00688024]                ; 004979e6 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EBX,dword ptr [0x00688054]      ; 004979eb | g_RenderVertexBuffer[1].projected_vertex.screen_x
    MOV EDX,dword ptr [0x00688084]      ; 004979f1 | g_RenderVertexBuffer[2].projected_vertex.screen_x
    AND EAX,EBX                         ; 004979f7
    MOV ECX,dword ptr [0x006880b4]      ; 004979f9 | g_RenderVertexBuffer[3].projected_vertex.screen_x
    AND EAX,EDX                         ; 004979ff
    MOV EBX,dword ptr [0x006880e4]      ; 00497a01 | g_RenderVertexBuffer[4].projected_vertex.screen_x
    AND EAX,ECX                         ; 00497a07
    MOV EDX,dword ptr [0x00688114]      ; 00497a09 | g_RenderVertexBuffer[5].projected_vertex.screen_x
    AND EAX,EBX                         ; 00497a0f
    MOV ECX,dword ptr [0x00688144]      ; 00497a11 | g_RenderVertexBuffer[6].projected_vertex.screen_x
    AND EAX,EDX                         ; 00497a17
    MOV EBX,dword ptr [0x00688174]      ; 00497a19 | g_RenderVertexBuffer[7].projected_vertex.screen_x
    AND EAX,ECX                         ; 00497a1f
    AND EAX,EBX                         ; 00497a21
    ADD ESP,0x8                         ; 00497a23
    TEST EAX,0x80000000                 ; 00497a26
    JZ 0x00497a35                       ; 00497a2b
        ;   XREF to: 00497a35 (CONDITIONAL_JUMP)  ; LAB_00497a35
    TEST AL,0xff                        ; 00497a2d
    JNZ 0x0049755a                      ; 00497a2f
        ;   XREF to: 0049755a (CONDITIONAL_JUMP)  ; LAB_0049755a
    MOV EAX,[0x02ca039c]                ; 00497a35 | g_CubesVisibleCount
        ;   Label: LAB_00497a35
    INC EAX                             ; 00497a3a
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00497a3b
    MOV [0x02ca039c],EAX                ; 00497a42 | g_CubesVisibleCount
    CMP EDX,0x1                         ; 00497a47
    JG 0x00497b8a                       ; 00497a4a
        ;   XREF to: 00497b8a (CONDITIONAL_JUMP)  ; LAB_00497b8a
    MOV dword ptr [ESP + 0xc0],EDI      ; 00497a50
        ;   Label: LAB_00497a50
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00497a57
    FILD dword ptr [ESP + 0xc0]         ; 00497a5e
    FMUL float ptr [ESI + 0x28]         ; 00497a65
    MOV dword ptr [ESP + 0xc0],EAX      ; 00497a68
    FADD float ptr [ESI + 0x10]         ; 00497a6f
    FILD dword ptr [ESP + 0xc0]         ; 00497a72
    FXCH                                ; 00497a79
    FSTP float ptr [ESP + 0x88]         ; 00497a7b
    FMUL float ptr [ESI + 0x2c]         ; 00497a82
    MOV dword ptr [ESP + 0xc0],EBP      ; 00497a85
    FADD float ptr [ESI + 0x14]         ; 00497a8c
    FILD dword ptr [ESP + 0xc0]         ; 00497a8f
    FXCH                                ; 00497a96
    FSTP float ptr [ESP + 0x8c]         ; 00497a98
    FMUL float ptr [ESI + 0x30]         ; 00497a9f
    MOV EBX,dword ptr [0x02ca03a0]      ; 00497aa2 | g_CubesRenderedCount
    MOV EDI,dword ptr [0x006703ec]      ; 00497aa8 | g_CDemonRendererPtr
    INC EBX                             ; 00497aae
    LEA EAX,[ESP + 0x88]                ; 00497aaf
    MOV dword ptr [0x02ca03a0],EBX      ; 00497ab6 | g_CubesRenderedCount
    PUSH EAX                            ; 00497abc
    FADD float ptr [ESI + 0x18]         ; 00497abd
    PUSH EDI                            ; 00497ac0 | g_CDemonRendererInstance
    FSTP float ptr [ESP + 0x98]         ; 00497ac1
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00497ac8
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00497acd
    MOV EBP,dword ptr [ESI]             ; 00497ad0
    PUSH EBP                            ; 00497ad2
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00497ad3
    PUSH EAX                            ; 00497ada
    CALL core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 ; 00497adb
        ;   XREF to: 00457650 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650(CDemonCube * this_ptr, uint rendering_mode)
    ADD ESP,0x8                         ; 00497ae0
    PUSH 0x3f87558                      ; 00497ae3 | g_ZeroVector
    MOV EDX,dword ptr [0x006703ec]      ; 00497ae8 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EDX                            ; 00497aee | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00497aef
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00497af4
    MOV EAX,[0x02ca03a4]                ; 00497af7 | g_PVSDrawnCubeCount
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00497afc
    MOV EBX,EAX                         ; 00497b03
    MOV dword ptr [EAX*0x4 + 0x2ca03ac],EDX ; 00497b05 | g_PVSCubePointers
    SHL EAX,0x2                         ; 00497b0c
    SUB EAX,EBX                         ; 00497b0f
    MOV ESI,0x2cb3c2c                   ; 00497b11 | g_PVSCubePositions
    SHL EAX,0x2                         ; 00497b16
    ADD ESI,EAX                         ; 00497b19
    LEA EAX,[ESP + 0x88]                ; 00497b1b
    CMP ESI,EAX                         ; 00497b22
    JZ 0x00497b43                       ; 00497b24
        ;   XREF to: 00497b43 (CONDITIONAL_JUMP)  ; LAB_00497b43
    MOV EAX,dword ptr [ESP + 0x88]      ; 00497b26
    MOV dword ptr [ESI],EAX             ; 00497b2d | g_PVSCubePositions
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00497b2f
    MOV dword ptr [ESI + 0x4],EAX       ; 00497b36 | DAT_02cb3c30
    MOV EAX,dword ptr [ESP + 0x90]      ; 00497b39
    MOV dword ptr [ESI + 0x8],EAX       ; 00497b40 | DAT_02cb3c34
    MOV ECX,dword ptr [0x02ca03a4]      ; 00497b43 | g_PVSDrawnCubeCount
        ;   Label: LAB_00497b43
    INC ECX                             ; 00497b49
    MOV dword ptr [0x02ca03a4],ECX      ; 00497b4a | g_PVSDrawnCubeCount
    CMP ECX,0x4e20                      ; 00497b50
    JL 0x0049755a                       ; 00497b56
        ;   XREF to: 0049755a (CONDITIONAL_JUMP)  ; LAB_0049755a
    MOV ESI,0x622b86                    ; 00497b5c | = "..\\core\\dtrace.cpp"
    MOV EDI,0x792                       ; 00497b61
    PUSH 0x622b99                       ; 00497b66 | = "Too many drawn cubes.  Need to recomp..."
    MOV dword ptr [0x02f0ca48],ESI      ; 00497b6b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00497b71 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00497b77
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00497b7c
    ADD ESP,0xc4                        ; 00497b7f
    POP EBP                             ; 00497b85
    POP EDI                             ; 00497b86
    POP ESI                             ; 00497b87
    POP EBX                             ; 00497b88
    RET                                 ; 00497b89
    MOV ECX,0x4                         ; 00497b8a
        ;   Label: LAB_00497b8a
    MOV EDX,0xffffffff                  ; 00497b8f
    MOV dword ptr [ESP + 0xc0],EBP      ; 00497b94
    XOR EBX,EBX                         ; 00497b9b
    MOV dword ptr [ESP + 0x4],ECX       ; 00497b9d
    MOV dword ptr [ESP + 0x8],EBX       ; 00497ba1
    MOV dword ptr [ESP + 0xc],EBX       ; 00497ba5
    MOV dword ptr [ESP + 0x10],EDX      ; 00497ba9
    FILD dword ptr [ESP + 0xc0]         ; 00497bad
    FMUL float ptr [ESI + 0x30]         ; 00497bb4
    FADD float ptr [ESI + 0x18]         ; 00497bb7
    FMUL double ptr [0x00622bca]        ; 00497bba | DOUBLE_00622bca
    MOV EAX,0x5                         ; 00497bc0
    MOV dword ptr [ESP + 0x18],EBX      ; 00497bc5
    MOV dword ptr [ESP + 0x20],EAX      ; 00497bc9
    MOV dword ptr [ESP + 0x24],ECX      ; 00497bcd
    MOV EBX,0x1                         ; 00497bd1
    MOV EAX,ESP                         ; 00497bd6
    MOV ECX,dword ptr [0x006703e8]      ; 00497bd8 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EAX                            ; 00497bde
    CALL crt_math.c_round_FUN_005fe6b0  ; 00497bdf
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 00497be4 | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0x1c]        ; 00497be5
    MOV dword ptr [ESP + 0x24],EBX      ; 00497be9
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 ; 00497bed
        ;   XREF to: 0048ab50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00497bf2
    TEST EAX,EAX                        ; 00497bf5
    JNZ 0x00497a50                      ; 00497bf7
        ;   XREF to: 00497a50 (CONDITIONAL_JUMP)  ; LAB_00497a50
    MOV dword ptr [ESP + 0x8],EAX       ; 00497bfd
    MOV dword ptr [ESP + 0xc],EAX       ; 00497c01
    LEA EAX,[EBX + EBP*0x1]             ; 00497c05
    MOV dword ptr [ESP + 0xc0],EAX      ; 00497c08
    MOV dword ptr [ESP + 0x10],EBX      ; 00497c0f
    FILD dword ptr [ESP + 0xc0]         ; 00497c13
    FMUL float ptr [ESI + 0x30]         ; 00497c1a
    FADD float ptr [ESI + 0x18]         ; 00497c1d
    FMUL double ptr [0x00622bd2]        ; 00497c20 | DOUBLE_00622bd2
    MOV ECX,0x2                         ; 00497c26
    MOV EDX,0x6                         ; 00497c2b
    MOV EBX,0x3                         ; 00497c30
    MOV EAX,0x7                         ; 00497c35
    MOV dword ptr [ESP + 0x18],ECX      ; 00497c3a
    MOV dword ptr [ESP + 0x1c],EBX      ; 00497c3e
    MOV dword ptr [ESP + 0x20],EAX      ; 00497c42
    MOV dword ptr [ESP + 0x24],EDX      ; 00497c46
    MOV EAX,ESP                         ; 00497c4a
    MOV ECX,dword ptr [0x006703e8]      ; 00497c4c | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EAX                            ; 00497c52
    CALL crt_math.c_round_FUN_005fe6b0  ; 00497c53
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 00497c58 | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0x1c]        ; 00497c59
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 ; 00497c5d
        ;   XREF to: 0048ab50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00497c62
    TEST EAX,EAX                        ; 00497c65
    JNZ 0x00497a50                      ; 00497c67
        ;   XREF to: 00497a50 (CONDITIONAL_JUMP)  ; LAB_00497a50
    MOV EBX,0xffffffff                  ; 00497c6d
    MOV dword ptr [ESP + 0xc],EAX       ; 00497c72
    MOV dword ptr [ESP + 0x10],EAX      ; 00497c76
    MOV dword ptr [ESP + 0xc0],EDI      ; 00497c7a
    MOV dword ptr [ESP + 0x8],EBX       ; 00497c81
    FILD dword ptr [ESP + 0xc0]         ; 00497c85
    FMUL float ptr [ESI + 0x28]         ; 00497c8c
    FADD float ptr [ESI + 0x10]         ; 00497c8f
    FMUL double ptr [0x00622bca]        ; 00497c92 | DOUBLE_00622bca
    MOV EDX,0x3                         ; 00497c98
    MOV ECX,dword ptr [0x006703e8]      ; 00497c9d | g_CDemonRendererInstance | g_CDemonRendererPtr
    MOV EBX,0x4                         ; 00497ca3
    MOV dword ptr [ESP + 0x18],EAX      ; 00497ca8
    MOV EAX,0x7                         ; 00497cac
    MOV dword ptr [ESP + 0x1c],EBX      ; 00497cb1
    MOV dword ptr [ESP + 0x20],EAX      ; 00497cb5
    MOV EAX,ESP                         ; 00497cb9
    MOV dword ptr [ESP + 0x24],EDX      ; 00497cbb
    PUSH EAX                            ; 00497cbf
    CALL crt_math.c_round_FUN_005fe6b0  ; 00497cc0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 00497cc5 | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0x1c]        ; 00497cc6
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 ; 00497cca
        ;   XREF to: 0048ab50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00497ccf
    TEST EAX,EAX                        ; 00497cd2
    JNZ 0x00497a50                      ; 00497cd4
        ;   XREF to: 00497a50 (CONDITIONAL_JUMP)  ; LAB_00497a50
    MOV EBX,0x1                         ; 00497cda
    MOV dword ptr [ESP + 0xc],EAX       ; 00497cdf
    MOV dword ptr [ESP + 0x10],EAX      ; 00497ce3
    LEA EAX,[EDI + EBX*0x1]             ; 00497ce7
    MOV dword ptr [ESP + 0xc0],EAX      ; 00497cea
    MOV dword ptr [ESP + 0x8],EBX       ; 00497cf1
    FILD dword ptr [ESP + 0xc0]         ; 00497cf5
    FMUL float ptr [ESI + 0x28]         ; 00497cfc
    FADD float ptr [ESI + 0x10]         ; 00497cff
    FMUL double ptr [0x00622bd2]        ; 00497d02 | DOUBLE_00622bd2
    MOV EDX,0x5                         ; 00497d08
    MOV ECX,dword ptr [0x006703e8]      ; 00497d0d | g_CDemonRendererInstance | g_CDemonRendererPtr
    MOV EAX,0x6                         ; 00497d13
    MOV dword ptr [ESP + 0x18],EBX      ; 00497d18
    MOV dword ptr [ESP + 0x20],EAX      ; 00497d1c
    MOV dword ptr [ESP + 0x24],EDX      ; 00497d20
    MOV EAX,ESP                         ; 00497d24
    MOV EBX,0x2                         ; 00497d26
    PUSH EAX                            ; 00497d2b
    CALL crt_math.c_round_FUN_005fe6b0  ; 00497d2c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 00497d31 | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0x1c]        ; 00497d32
    MOV dword ptr [ESP + 0x24],EBX      ; 00497d36
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 ; 00497d3a
        ;   XREF to: 0048ab50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00497d3f
    TEST EAX,EAX                        ; 00497d42
    JNZ 0x00497a50                      ; 00497d44
        ;   XREF to: 00497a50 (CONDITIONAL_JUMP)  ; LAB_00497a50
    MOV dword ptr [ESP + 0x8],EAX       ; 00497d4a
    MOV dword ptr [ESP + 0xc],0x1       ; 00497d4e
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00497d56
    INC EAX                             ; 00497d5d
    XOR EDX,EDX                         ; 00497d5e
    MOV dword ptr [ESP + 0xc0],EAX      ; 00497d60
    MOV dword ptr [ESP + 0x10],EDX      ; 00497d67
    FILD dword ptr [ESP + 0xc0]         ; 00497d6b
    FMUL float ptr [ESI + 0x2c]         ; 00497d72
    FADD float ptr [ESI + 0x14]         ; 00497d75
    FMUL double ptr [0x00622bd2]        ; 00497d78 | DOUBLE_00622bd2
    MOV ECX,0x4                         ; 00497d7e
    MOV EBX,0x5                         ; 00497d83
    MOV EDX,0x7                         ; 00497d88
    MOV EAX,0x6                         ; 00497d8d
    MOV dword ptr [ESP + 0x18],ECX      ; 00497d92
    MOV dword ptr [ESP + 0x1c],EBX      ; 00497d96
    MOV dword ptr [ESP + 0x20],EAX      ; 00497d9a
    MOV dword ptr [ESP + 0x24],EDX      ; 00497d9e
    MOV EAX,ESP                         ; 00497da2
    MOV ECX,dword ptr [0x006703e8]      ; 00497da4 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EAX                            ; 00497daa
    CALL crt_math.c_round_FUN_005fe6b0  ; 00497dab
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 00497db0 | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0x1c]        ; 00497db1
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 ; 00497db5
        ;   XREF to: 0048ab50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00497dba
    TEST EAX,EAX                        ; 00497dbd
    JNZ 0x00497a50                      ; 00497dbf
        ;   XREF to: 00497a50 (CONDITIONAL_JUMP)  ; LAB_00497a50
    MOV dword ptr [ESP + 0x8],EAX       ; 00497dc5
    MOV dword ptr [ESP + 0xc],0xffffffff ; 00497dc9
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00497dd1
    XOR EDX,EDX                         ; 00497dd8
    MOV dword ptr [ESP + 0xc0],EAX      ; 00497dda
    MOV dword ptr [ESP + 0x10],EDX      ; 00497de1
    FILD dword ptr [ESP + 0xc0]         ; 00497de5
    FMUL float ptr [ESI + 0x2c]         ; 00497dec
    FADD float ptr [ESI + 0x14]         ; 00497def
    FMUL double ptr [0x00622bca]        ; 00497df2 | DOUBLE_00622bca
    MOV ECX,dword ptr [0x006703e8]      ; 00497df8 | g_CDemonRendererInstance | g_CDemonRendererPtr
    XOR EBX,EBX                         ; 00497dfe
    MOV EDX,0x3                         ; 00497e00
    MOV EAX,0x2                         ; 00497e05
    MOV dword ptr [ESP + 0x18],EBX      ; 00497e0a
    MOV dword ptr [ESP + 0x20],EAX      ; 00497e0e
    MOV dword ptr [ESP + 0x24],EDX      ; 00497e12
    MOV EAX,ESP                         ; 00497e16
    MOV EBX,0x1                         ; 00497e18
    PUSH EAX                            ; 00497e1d
    CALL crt_math.c_round_FUN_005fe6b0  ; 00497e1e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 00497e23 | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0x1c]        ; 00497e24
    MOV dword ptr [ESP + 0x24],EBX      ; 00497e28
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 ; 00497e2c
        ;   XREF to: 0048ab50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00497e31
    TEST EAX,EAX                        ; 00497e34
    JNZ 0x00497a50                      ; 00497e36
        ;   XREF to: 00497a50 (CONDITIONAL_JUMP)  ; LAB_00497a50
    ADD ESP,0xc4                        ; 00497e3c
    POP EBP                             ; 00497e42
    POP EDI                             ; 00497e43
    POP ESI                             ; 00497e44
    POP EBX                             ; 00497e45
    RET                                 ; 00497e46

