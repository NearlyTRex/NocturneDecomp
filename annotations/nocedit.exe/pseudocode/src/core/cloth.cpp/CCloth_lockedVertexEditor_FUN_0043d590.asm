; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_lockedVertexEditor_FUN_0043d590(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined1       Stack[-0x6c]:1  local_6c
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
;   core_cloth.cpp_CCloth_showMenu_FUN_0043ddf0 at 0043df5f
;
; Referenced Globals:
;   TerminatedCString s_d_006188be
;   TerminatedCString s_Can_t_lock_this_many_ver_006188c1
;   TerminatedCString s_core_cloth_cpp_006188e0
;   TerminatedCString s_Bug_006188f2
;   TerminatedCString s_Use_mouse_to_lock_vertic_006188f7
;   TerminatedCString s_Use_mouse_to_unlock_vert_00618913
;   TerminatedCString s_L_Toggle_locking_unlocki_00618931
;   TerminatedCString s_N_Toggle_vertex_numbers_00618956
;   float FLOAT_00618972 = 0.5
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   ... and 16 more
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_cloth.cpp_CCloth_setup_FUN_00439710
;   core_cloth.cpp_drawVertexMarker_FUN_0043c6e0
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawLine_FUN_004011b0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_drawTextXY_FUN_00402130
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d590
        ;   Label: core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590
    PUSH ESI                            ; 0043d591
    PUSH EDI                            ; 0043d592
    PUSH EBP                            ; 0043d593
    SUB ESP,0x74                        ; 0043d594
    MOV EBP,dword ptr [ESP + 0x88]      ; 0043d597
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0043d59e
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EDX,0xffffffff                  ; 0043d5a3
    MOV EBX,0x1                         ; 0043d5a8
    PUSH 0x1f                           ; 0043d5ad
    MOV EDI,dword ptr [0x0068416c]      ; 0043d5af | g_CSpotViewPtr
    XOR ESI,ESI                         ; 0043d5b5
    MOV dword ptr [ESP + 0x54],EDX      ; 0043d5b7
    MOV dword ptr [ESP + 0x50],EDX      ; 0043d5bb
    PUSH EDI                            ; 0043d5bf | g_CSpotViewInstance
    MOV dword ptr [ESP + 0x5c],EBX      ; 0043d5c0
    MOV dword ptr [ESP + 0x50],ESI      ; 0043d5c4
    CALL shape_spotview.cpp_CSpotView_FUN_005b9620 ; 0043d5c8
        ;   XREF to: 005b9620 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_FUN_005b9620(CSpotView * this_ptr)
    ADD ESP,0x8                         ; 0043d5cd
    MOV EAX,[0x0067b654]                ; 0043d5d0 | g_CGameInstance | g_CGamePtr
    PUSH EAX                            ; 0043d5d5 | g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0043d5d6
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 0043d5db
    PUSH ESI                            ; 0043d5de
    PUSH 0x3f87558                      ; 0043d5df | g_ZeroVector
    PUSH 0x3f87558                      ; 0043d5e4 | g_ZeroVector
    PUSH EBP                            ; 0043d5e9
    CALL core_cloth.cpp_CCloth_setup_FUN_00439710 ; 0043d5ea
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_setup_FUN_00439710(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    LEA EAX,[ESP + 0x10]                ; 0043d5ef
    LEA EDX,[EBP + 0x56d8]              ; 0043d5f3
    ADD ESP,0x10                        ; 0043d5f9
    MOV EBX,EDX                         ; 0043d5fc
    CMP EAX,EDX                         ; 0043d5fe
    JNZ 0x0043dada                      ; 0043d600
        ;   XREF to: 0043dada (CONDITIONAL_JUMP)  ; LAB_0043dada
    LEA EAX,[ESP + 0xc]                 ; 0043d606
        ;   Label: LAB_0043d606
    CMP EAX,EBX                         ; 0043d60a
    JZ 0x0043d622                       ; 0043d60c
        ;   XREF to: 0043d622 (CONDITIONAL_JUMP)  ; LAB_0043d622
    MOV EAX,dword ptr [EBX]             ; 0043d60e
    MOV dword ptr [ESP + 0xc],EAX       ; 0043d610
    MOV EAX,dword ptr [EBX + 0x4]       ; 0043d614
    MOV dword ptr [ESP + 0x10],EAX      ; 0043d617
    MOV EAX,dword ptr [EBX + 0x8]       ; 0043d61b
    MOV dword ptr [ESP + 0x14],EAX      ; 0043d61e
    MOV EBX,0x1                         ; 0043d622
        ;   Label: LAB_0043d622
    CMP EBX,dword ptr [EBP + 0x104]     ; 0043d627
    JGE 0x0043d660                      ; 0043d62d
        ;   XREF to: 0043d660 (CONDITIONAL_JUMP)  ; LAB_0043d660
    LEA ESI,[EBP + 0x57f4]              ; 0043d62f
    PUSH ESI                            ; 0043d635
        ;   Label: LAB_0043d635
    LEA EAX,[ESP + 0x4]                 ; 0043d636
    PUSH EAX                            ; 0043d63a
    INC EBX                             ; 0043d63b
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 0043d63c
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESI,0x11c                       ; 0043d641
    MOV ECX,dword ptr [EBP + 0x104]     ; 0043d647
    ADD ESP,0x8                         ; 0043d64d
    CMP EBX,ECX                         ; 0043d650
    JL 0x0043d635                       ; 0043d652
        ;   XREF to: 0043d635 (CONDITIONAL_JUMP)  ; LAB_0043d635
    LEA EAX,[EAX]                       ; 0043d654
    LEA EDX,[EDX]                       ; 0043d65a
    FLD float ptr [ESP]                 ; 0043d660
        ;   Label: LAB_0043d660
    FADD float ptr [ESP + 0xc]          ; 0043d663
    FST float ptr [ESP + 0x38]          ; 0043d667
    FLD float ptr [0x00618972]          ; 0043d66b | FLOAT_00618972
    FXCH                                ; 0043d671
    FMUL ST1                            ; 0043d673
    FLD float ptr [ESP + 0x8]           ; 0043d675
    FLD float ptr [ESP + 0x4]           ; 0043d679
    FADD float ptr [ESP + 0x10]         ; 0043d67d
    FXCH                                ; 0043d681
    FADD float ptr [ESP + 0x14]         ; 0043d683
    FXCH                                ; 0043d687
    FST float ptr [ESP + 0x3c]          ; 0043d689
    FMUL ST3                            ; 0043d68d
    FXCH                                ; 0043d68f
    FST float ptr [ESP + 0x40]          ; 0043d691
    FMULP ST3                           ; 0043d695
    MOV EDX,dword ptr [0x0068416c]      ; 0043d697 | g_CSpotViewPtr
    LEA EAX,[ESP + 0x2c]                ; 0043d69d
    ADD EDX,0x18                        ; 0043d6a1 | DAT_03f6b9f8
    FXCH                                ; 0043d6a4
    FSTP float ptr [ESP + 0x2c]         ; 0043d6a6
    FSTP float ptr [ESP + 0x30]         ; 0043d6aa
    FSTP float ptr [ESP + 0x34]         ; 0043d6ae
    CMP EDX,EAX                         ; 0043d6b2
    JNZ 0x0043daf2                      ; 0043d6b4
        ;   XREF to: 0043daf2 (CONDITIONAL_JUMP)  ; LAB_0043daf2
    MOV EAX,[0x00679398]                ; 0043d6ba | g_WindowHeight
        ;   Label: LAB_0043d6ba
    PUSH 0xf8                           ; 0043d6bf
    DEC EAX                             ; 0043d6c4
    PUSH EAX                            ; 0043d6c5
    MOV EAX,[0x00679394]                ; 0043d6c6 | g_WindowWidth
    DEC EAX                             ; 0043d6cb
    PUSH EAX                            ; 0043d6cc
    PUSH 0x0                            ; 0043d6cd
    PUSH 0x0                            ; 0043d6cf
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0043d6d1
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0043d6d6
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4 ; 0043d6d9
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4()
    PUSH 0x1f                           ; 0043d6de
    MOV EBX,dword ptr [0x0068416c]      ; 0043d6e0 | g_CSpotViewInstance | g_CSpotViewPtr
    PUSH EBX                            ; 0043d6e6 | g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_FUN_005b9670 ; 0043d6e7
        ;   XREF to: 005b9670 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_FUN_005b9670(CSpotView * this_ptr)
    ADD ESP,0x8                         ; 0043d6ec
    MOV ESI,dword ptr [0x0068416c]      ; 0043d6ef | g_CSpotViewPtr
    PUSH ESI                            ; 0043d6f5 | g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_FUN_005b9a20 ; 0043d6f6
        ;   XREF to: 005b9a20 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_FUN_005b9a20(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 0043d6fb
    PUSH 0x3f87558                      ; 0043d6fe | g_ZeroVector
    MOV EDI,dword ptr [0x006703ec]      ; 0043d703 | g_CDemonRendererPtr2
    PUSH EDI                            ; 0043d709 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0043d70a
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0043d70f
    XOR EAX,EAX                         ; 0043d712
    MOV EDX,dword ptr [EBP + 0x104]     ; 0043d714
    MOV dword ptr [ESP + 0x6c],EAX      ; 0043d71a
    TEST EDX,EDX                        ; 0043d71e
    JLE 0x0043d75b                      ; 0043d720
        ;   XREF to: 0043d75b (CONDITIONAL_JUMP)  ; LAB_0043d75b
    XOR ESI,ESI                         ; 0043d722
    XOR EDI,EDI                         ; 0043d724
    MOV EAX,dword ptr [EBP + 0x10c]     ; 0043d726
        ;   Label: LAB_0043d726
    ADD EAX,ESI                         ; 0043d72c
    MOV EDX,dword ptr [0x006703ec]      ; 0043d72e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0043d734
    MOV EAX,dword ptr [EDX]             ; 0043d735 | g_CDemonRendererInstance
    ADD EAX,EDI                         ; 0043d737
    PUSH EAX                            ; 0043d739
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0043d73a
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0043d73f
    ADD ESI,0xc                         ; 0043d742
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0043d745
    ADD EDI,0x30                        ; 0043d749
    INC ECX                             ; 0043d74c
    MOV EBX,dword ptr [EBP + 0x104]     ; 0043d74d
    MOV dword ptr [ESP + 0x6c],ECX      ; 0043d753
    CMP ECX,EBX                         ; 0043d757
    JL 0x0043d726                       ; 0043d759
        ;   XREF to: 0043d726 (CONDITIONAL_JUMP)  ; LAB_0043d726
    PUSH 0xff                           ; 0043d75b
        ;   Label: LAB_0043d75b
    MOV ESI,dword ptr [0x006703ec]      ; 0043d760 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0043d766 | g_CDemonRendererInstance
    XOR EDI,EDI                         ; 0043d767
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 0043d769
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0043d76e
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043d771
    MOV dword ptr [ESP + 0x70],EDI      ; 0043d777
    TEST EAX,EAX                        ; 0043d77b
    JLE 0x0043d7ee                      ; 0043d77d
        ;   XREF to: 0043d7ee (CONDITIONAL_JUMP)  ; LAB_0043d7ee
    MOV dword ptr [ESP + 0x68],EDI      ; 0043d77f
    MOV EDX,dword ptr [ESP + 0x68]      ; 0043d783
        ;   Label: LAB_0043d783
    MOV ESI,dword ptr [EBP + 0x114]     ; 0043d787
    ADD ESI,EDX                         ; 0043d78d
    MOV ECX,dword ptr [ESI + 0x4]       ; 0043d78f
    XOR EAX,EAX                         ; 0043d792
    TEST ECX,ECX                        ; 0043d794
    JLE 0x0043d7d0                      ; 0043d796
        ;   XREF to: 0043d7d0 (CONDITIONAL_JUMP)  ; LAB_0043d7d0
    MOV EDI,ESI                         ; 0043d798
    LEA EBX,[EAX + 0x1]                 ; 0043d79a
        ;   Label: LAB_0043d79a
    MOV ECX,dword ptr [ESI + 0x4]       ; 0043d79d
    MOV EDX,EBX                         ; 0043d7a0
    MOV EAX,EBX                         ; 0043d7a2
    SAR EDX,0x1f                        ; 0043d7a4
    IDIV ECX                            ; 0043d7a7
    IMUL EDX,EDX,0xc                    ; 0043d7a9
    MOV EAX,dword ptr [EDX + ESI*0x1 + 0x18] ; 0043d7ac
    PUSH EAX                            ; 0043d7b0
    MOV EDX,dword ptr [EDI + 0x18]      ; 0043d7b1
    PUSH EDX                            ; 0043d7b4
    MOV ECX,dword ptr [0x006703ec]      ; 0043d7b5 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0043d7bb | g_CDemonRendererInstance
    ADD EDI,0xc                         ; 0043d7bc
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 0043d7bf
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 0043d7c4
    MOV EDX,dword ptr [ESI + 0x4]       ; 0043d7c7
    MOV EAX,EBX                         ; 0043d7ca
    CMP EBX,EDX                         ; 0043d7cc
    JL 0x0043d79a                       ; 0043d7ce
        ;   XREF to: 0043d79a (CONDITIONAL_JUMP)  ; LAB_0043d79a
    MOV EDX,dword ptr [ESP + 0x68]      ; 0043d7d0
        ;   Label: LAB_0043d7d0
    MOV ECX,dword ptr [ESP + 0x70]      ; 0043d7d4
    MOV EBX,dword ptr [EBP + 0x110]     ; 0043d7d8
    ADD EDX,0x48                        ; 0043d7de
    INC ECX                             ; 0043d7e1
    MOV dword ptr [ESP + 0x68],EDX      ; 0043d7e2
    MOV dword ptr [ESP + 0x70],ECX      ; 0043d7e6
    CMP ECX,EBX                         ; 0043d7ea
    JL 0x0043d783                       ; 0043d7ec
        ;   XREF to: 0043d783 (CONDITIONAL_JUMP)  ; LAB_0043d783
    MOV ESI,dword ptr [ESP + 0x50]      ; 0043d7ee
        ;   Label: LAB_0043d7ee
    TEST ESI,ESI                        ; 0043d7f2
    JL 0x0043db0b                       ; 0043d7f4
        ;   XREF to: 0043db0b (CONDITIONAL_JUMP)  ; LAB_0043db0b
    MOV EAX,[0x02cf6a8c]                ; 0043d7fa | g_MouseX
    MOV dword ptr [ESP + 0x60],ESI      ; 0043d7ff
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043d803
    CMP ESI,EAX                         ; 0043d807
    JLE 0x0043d813                      ; 0043d809
        ;   XREF to: 0043d813 (CONDITIONAL_JUMP)  ; LAB_0043d813
    MOV dword ptr [ESP + 0x5c],ESI      ; 0043d80b
    MOV dword ptr [ESP + 0x60],EAX      ; 0043d80f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0043d813
        ;   Label: LAB_0043d813
    MOV dword ptr [ESP + 0x58],EAX      ; 0043d817
    MOV EAX,[0x02cf6a90]                ; 0043d81b | g_MouseY
    MOV dword ptr [ESP + 0x64],EAX      ; 0043d820
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0043d824
    MOV ESI,dword ptr [ESP + 0x64]      ; 0043d828
    CMP EAX,ESI                         ; 0043d82c
    JLE 0x0043d838                      ; 0043d82e
        ;   XREF to: 0043d838 (CONDITIONAL_JUMP)  ; LAB_0043d838
    MOV dword ptr [ESP + 0x64],EAX      ; 0043d830
    MOV dword ptr [ESP + 0x58],ESI      ; 0043d834
    MOV EDI,dword ptr [EBP + 0x104]     ; 0043d838
        ;   Label: LAB_0043d838
    XOR ESI,ESI                         ; 0043d83e
    TEST EDI,EDI                        ; 0043d840
    JLE 0x0043d88f                      ; 0043d842
        ;   XREF to: 0043d88f (CONDITIONAL_JUMP)  ; LAB_0043d88f
    MOV EBX,EBP                         ; 0043d844
    XOR EDI,EDI                         ; 0043d846
    CMP dword ptr [EBX + 0x574c],0x0    ; 0043d848
        ;   Label: LAB_0043d848
    JZ 0x0043db25                       ; 0043d84f
        ;   XREF to: 0043db25 (CONDITIONAL_JUMP)  ; LAB_0043db25
    MOV dword ptr [0x02d02570],0x1      ; 0043d855 | g_ActiveRenderColor
    MOV EAX,[0x006703ec]                ; 0043d85f | g_CDemonRendererPtr2
        ;   Label: LAB_0043d85f
    MOV EAX,dword ptr [EAX]             ; 0043d864 | g_CDemonRendererInstance
    ADD EAX,EDI                         ; 0043d866
    TEST byte ptr [EAX + 0x13],0x80     ; 0043d868
    JZ 0x0043db34                       ; 0043d86c
        ;   XREF to: 0043db34 (CONDITIONAL_JUMP)  ; LAB_0043db34
    PUSH ESI                            ; 0043d872
        ;   Label: LAB_0043d872
    CALL core_cloth.cpp_drawVertexMarker_FUN_0043c6e0 ; 0043d873
        ;   XREF to: 0043c6e0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_drawVertexMarker_FUN_0043c6e0(int vert_index)
    ADD EDI,0x30                        ; 0043d878
    ADD EBX,0x11c                       ; 0043d87b
    INC ESI                             ; 0043d881
    MOV EAX,dword ptr [EBP + 0x104]     ; 0043d882
    ADD ESP,0x4                         ; 0043d888
    CMP ESI,EAX                         ; 0043d88b
    JL 0x0043d848                       ; 0043d88d
        ;   XREF to: 0043d848 (CONDITIONAL_JUMP)  ; LAB_0043d848
    CMP dword ptr [ESP + 0x48],0x0      ; 0043d88f
        ;   Label: LAB_0043d88f
    JZ 0x0043d8d1                       ; 0043d894
        ;   XREF to: 0043d8d1 (CONDITIONAL_JUMP)  ; LAB_0043d8d1
    MOV ECX,dword ptr [EBP + 0x104]     ; 0043d896
    XOR EBX,EBX                         ; 0043d89c
    TEST ECX,ECX                        ; 0043d89e
    JLE 0x0043d8d1                      ; 0043d8a0
        ;   XREF to: 0043d8d1 (CONDITIONAL_JUMP)  ; LAB_0043d8d1
    XOR ESI,ESI                         ; 0043d8a2
    MOV EAX,dword ptr [EBP + 0x3fe3c]   ; 0043d8a4
        ;   Label: LAB_0043d8a4
    MOV EAX,dword ptr [ESI + EAX*0x1]   ; 0043d8aa
    IMUL EDX,EAX,0x30                   ; 0043d8ad
    MOV EAX,[0x006703ec]                ; 0043d8b0 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 0043d8b5 | g_CDemonRendererInstance
    ADD EAX,EDX                         ; 0043d8b7
    TEST byte ptr [EAX + 0x13],0x80     ; 0043d8b9
    JZ 0x0043dba4                       ; 0043d8bd
        ;   XREF to: 0043dba4 (CONDITIONAL_JUMP)  ; LAB_0043dba4
    INC EBX                             ; 0043d8c3
        ;   Label: LAB_0043d8c3
    MOV EDX,dword ptr [EBP + 0x104]     ; 0043d8c4
    ADD ESI,0x4                         ; 0043d8ca
    CMP EBX,EDX                         ; 0043d8cd
    JL 0x0043d8a4                       ; 0043d8cf
        ;   XREF to: 0043d8a4 (CONDITIONAL_JUMP)  ; LAB_0043d8a4
    MOV EBX,dword ptr [0x02cf6a94]      ; 0043d8d1 | g_MouseButtonFlags
        ;   Label: LAB_0043d8d1
    TEST EBX,EBX                        ; 0043d8d7
    JNZ 0x0043d997                      ; 0043d8d9
        ;   XREF to: 0043d997 (CONDITIONAL_JUMP)  ; LAB_0043d997
    CMP dword ptr [ESP + 0x60],0x0      ; 0043d8df
    JL 0x0043d997                       ; 0043d8e4
        ;   XREF to: 0043d997 (CONDITIONAL_JUMP)  ; LAB_0043d997
    MOV EDI,dword ptr [EBP + 0x104]     ; 0043d8ea
    XOR EAX,EAX                         ; 0043d8f0
    TEST EDI,EDI                        ; 0043d8f2
    JLE 0x0043d913                      ; 0043d8f4
        ;   XREF to: 0043d913 (CONDITIONAL_JUMP)  ; LAB_0043d913
    MOV EDX,EBP                         ; 0043d8f6
    CMP dword ptr [EDX + 0x574c],0x0    ; 0043d8f8
        ;   Label: LAB_0043d8f8
    JZ 0x0043d902                       ; 0043d8ff
        ;   XREF to: 0043d902 (CONDITIONAL_JUMP)  ; LAB_0043d902
    INC EBX                             ; 0043d901
    INC EAX                             ; 0043d902
        ;   Label: LAB_0043d902
    MOV ECX,dword ptr [EBP + 0x104]     ; 0043d903
    ADD EDX,0x11c                       ; 0043d909
    CMP EAX,ECX                         ; 0043d90f
    JL 0x0043d8f8                       ; 0043d911
        ;   XREF to: 0043d8f8 (CONDITIONAL_JUMP)  ; LAB_0043d8f8
    CMP EBX,0x64                        ; 0043d913
        ;   Label: LAB_0043d913
    JLE 0x0043dbdf                      ; 0043d916
        ;   XREF to: 0043dbdf (CONDITIONAL_JUMP)  ; LAB_0043dbdf
    PUSH 0x6188c1                       ; 0043d91c | = "Can't lock this many vertices!"
    MOV EDI,dword ptr [0x00678a60]      ; 0043d921 | g_CEditorToolsPtr
    PUSH EDI                            ; 0043d927 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0043d928
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0043d92d
    MOV EDX,dword ptr [EBP + 0x104]     ; 0043d930
    XOR EAX,EAX                         ; 0043d936
    TEST EDX,EDX                        ; 0043d938
    JLE 0x0043d959                      ; 0043d93a
        ;   XREF to: 0043d959 (CONDITIONAL_JUMP)  ; LAB_0043d959
    MOV EDX,EBP                         ; 0043d93c
    MOV dword ptr [EDX + 0x574c],0x0    ; 0043d93e
        ;   Label: LAB_0043d93e
    INC EAX                             ; 0043d948
    MOV EDI,dword ptr [EBP + 0x104]     ; 0043d949
    ADD EDX,0x11c                       ; 0043d94f
    CMP EAX,EDI                         ; 0043d955
    JL 0x0043d93e                       ; 0043d957
        ;   XREF to: 0043d93e (CONDITIONAL_JUMP)  ; LAB_0043d93e
    MOV EDX,dword ptr [EBP + 0x3f028]   ; 0043d959
        ;   Label: LAB_0043d959
    XOR EAX,EAX                         ; 0043d95f
    TEST EDX,EDX                        ; 0043d961
    JLE 0x0043d98a                      ; 0043d963
        ;   XREF to: 0043d98a (CONDITIONAL_JUMP)  ; LAB_0043d98a
    MOV EDX,EBP                         ; 0043d965
    IMUL EBX,dword ptr [EDX + 0x3f02c],0x11c ; 0043d967
        ;   Label: LAB_0043d967
    MOV dword ptr [EBX + EBP*0x1 + 0x574c],0x1 ; 0043d971
    INC EAX                             ; 0043d97c
    MOV EBX,dword ptr [EBP + 0x3f028]   ; 0043d97d
    ADD EDX,0x4                         ; 0043d983
    CMP EAX,EBX                         ; 0043d986
    JL 0x0043d967                       ; 0043d988
        ;   XREF to: 0043d967 (CONDITIONAL_JUMP)  ; LAB_0043d967
    MOV ESI,0xffffffff                  ; 0043d98a
        ;   Label: LAB_0043d98a
    MOV dword ptr [ESP + 0x50],ESI      ; 0043d98f
    MOV dword ptr [ESP + 0x4c],ESI      ; 0043d993
    MOV EAX,dword ptr [ESP + 0x54]      ; 0043d997
        ;   Label: LAB_0043d997
    TEST EAX,EAX                        ; 0043d99b
    JZ 0x0043dc57                       ; 0043d99d
        ;   XREF to: 0043dc57 (CONDITIONAL_JUMP)  ; LAB_0043dc57
    PUSH 0x6188f7                       ; 0043d9a3 | = "Use mouse to lock vertices."
    PUSH 0x0                            ; 0043d9a8
    PUSH 0x0                            ; 0043d9aa
    CALL engine_2d.c_drawTextXY_FUN_00402130 ; 0043d9ac
        ;   XREF to: 00402130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextXY_FUN_00402130(int x, int y, char * text)
        ;   Label: LAB_0043d9ac
    ADD ESP,0xc                         ; 0043d9b1
    PUSH 0x618931                       ; 0043d9b4 | = "L Toggle locking/unlocking vertices."
    PUSH 0xb                            ; 0043d9b9
    PUSH 0x0                            ; 0043d9bb
    CALL engine_2d.c_drawTextXY_FUN_00402130 ; 0043d9bd
        ;   XREF to: 00402130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextXY_FUN_00402130(int x, int y, char * text)
    ADD ESP,0xc                         ; 0043d9c2
    PUSH 0x618956                       ; 0043d9c5 | = "N Toggle vertex numbers."
    PUSH 0x16                           ; 0043d9ca
    PUSH 0x0                            ; 0043d9cc
    CALL engine_2d.c_drawTextXY_FUN_00402130 ; 0043d9ce
        ;   XREF to: 00402130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextXY_FUN_00402130(int x, int y, char * text)
    ADD ESP,0xc                         ; 0043d9d3
    PUSH 0x0                            ; 0043d9d6
    MOV EDX,dword ptr [0x00678a60]      ; 0043d9d8 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0043d9de | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 0043d9df
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 0043d9e4
    CMP dword ptr [ESP + 0x60],0x0      ; 0043d9e7
    JL 0x0043da50                       ; 0043d9ec
        ;   XREF to: 0043da50 (CONDITIONAL_JUMP)  ; LAB_0043da50
    MOV EBX,dword ptr [0x00678a60]      ; 0043d9ee | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0043d9f4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 0043d9f5
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0043d9fa
    MOV ESI,dword ptr [ESP + 0x64]      ; 0043d9fd
    PUSH ESI                            ; 0043da01
    MOV EDI,dword ptr [ESP + 0x64]      ; 0043da02
    PUSH EDI                            ; 0043da06
    MOV [0x02d02570],EAX                ; 0043da07 | g_ActiveRenderColor
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043da0c
    PUSH EAX                            ; 0043da10
    PUSH EDI                            ; 0043da11
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0043da12
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0043da17
    PUSH ESI                            ; 0043da1a
    MOV EBX,dword ptr [ESP + 0x60]      ; 0043da1b
    PUSH EBX                            ; 0043da1f
    MOV ESI,dword ptr [ESP + 0x60]      ; 0043da20
    PUSH ESI                            ; 0043da24
    PUSH EBX                            ; 0043da25
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0043da26
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0043da2b
    PUSH ESI                            ; 0043da2e
    PUSH EBX                            ; 0043da2f
    PUSH ESI                            ; 0043da30
    MOV EDI,EBX                         ; 0043da31
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0043da33
    PUSH EBX                            ; 0043da37
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0043da38
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0043da3d
    MOV ESI,dword ptr [ESP + 0x64]      ; 0043da40
    PUSH ESI                            ; 0043da44
    PUSH EDI                            ; 0043da45
    PUSH ESI                            ; 0043da46
    PUSH EBX                            ; 0043da47
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0043da48
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0043da4d
    CMP dword ptr [ESP + 0x50],0x0      ; 0043da50
        ;   Label: LAB_0043da50
    JL 0x0043dc63                       ; 0043da55
        ;   XREF to: 0043dc63 (CONDITIONAL_JUMP)  ; LAB_0043dc63
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0043da5b
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_0043da5b
    MOV ESI,dword ptr [0x0067b654]      ; 0043da60 | g_CGamePtr
    PUSH ESI                            ; 0043da66 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 0043da67
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0043da6c
    MOV EAX,[0x0067cf44]                ; 0043da6f | g_CKeysPtr
    PUSH 0x26                           ; 0043da74
    MOV EDX,dword ptr [EAX]             ; 0043da76 | g_CKeysInstance
    PUSH EAX                            ; 0043da78 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043da79
    ADD ESP,0x8                         ; 0043da7c
    TEST EAX,EAX                        ; 0043da7f
    JZ 0x0043da94                       ; 0043da81
        ;   XREF to: 0043da94 (CONDITIONAL_JUMP)  ; LAB_0043da94
    CMP dword ptr [ESP + 0x54],0x0      ; 0043da83
    SETZ AL                             ; 0043da88
    AND EAX,0xff                        ; 0043da8b
    MOV dword ptr [ESP + 0x54],EAX      ; 0043da90
    PUSH 0x1                            ; 0043da94
        ;   Label: LAB_0043da94
    MOV EAX,[0x0067cf44]                ; 0043da96 | g_CKeysPtr
    PUSH EAX                            ; 0043da9b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043da9c | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043da9e
    ADD ESP,0x8                         ; 0043daa1
    TEST EAX,EAX                        ; 0043daa4
    JNZ 0x0043dc87                      ; 0043daa6
        ;   XREF to: 0043dc87 (CONDITIONAL_JUMP)  ; LAB_0043dc87
    PUSH 0x31                           ; 0043daac
    MOV EAX,[0x0067cf44]                ; 0043daae | g_CKeysPtr
    PUSH EAX                            ; 0043dab3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043dab4 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043dab6
    ADD ESP,0x8                         ; 0043dab9
    TEST EAX,EAX                        ; 0043dabc
    JZ 0x0043d6ba                       ; 0043dabe
        ;   XREF to: 0043d6ba (CONDITIONAL_JUMP)  ; LAB_0043d6ba
    CMP dword ptr [ESP + 0x48],0x0      ; 0043dac4
    SETZ AL                             ; 0043dac9
    AND EAX,0xff                        ; 0043dacc
    MOV dword ptr [ESP + 0x48],EAX      ; 0043dad1
    JMP 0x0043d6ba                      ; 0043dad5
        ;   XREF to: 0043d6ba (UNCONDITIONAL_JUMP)  ; LAB_0043d6ba
    MOV EAX,dword ptr [EDX]             ; 0043dada
        ;   Label: LAB_0043dada
    MOV dword ptr [ESP],EAX             ; 0043dadc
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043dadf
    MOV dword ptr [ESP + 0x4],EAX       ; 0043dae2
    MOV EAX,dword ptr [EDX + 0x8]       ; 0043dae6
    MOV dword ptr [ESP + 0x8],EAX       ; 0043dae9
    JMP 0x0043d606                      ; 0043daed
        ;   XREF to: 0043d606 (UNCONDITIONAL_JUMP)  ; LAB_0043d606
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043daf2
        ;   Label: LAB_0043daf2
    MOV dword ptr [EDX],EAX             ; 0043daf6 | DAT_03f6b9f8
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043daf8
    MOV dword ptr [EDX + 0x4],EAX       ; 0043dafc | DAT_03f6b9fc
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043daff
    MOV dword ptr [EDX + 0x8],EAX       ; 0043db03 | DAT_03f6ba00
    JMP 0x0043d6ba                      ; 0043db06
        ;   XREF to: 0043d6ba (UNCONDITIONAL_JUMP)  ; LAB_0043d6ba
    MOV EDI,0xfffffc19                  ; 0043db0b
        ;   Label: LAB_0043db0b
    MOV dword ptr [ESP + 0x5c],EDI      ; 0043db10
    MOV dword ptr [ESP + 0x58],EDI      ; 0043db14
    MOV dword ptr [ESP + 0x60],EDI      ; 0043db18
    MOV dword ptr [ESP + 0x64],EDI      ; 0043db1c
    JMP 0x0043d838                      ; 0043db20
        ;   XREF to: 0043d838 (UNCONDITIONAL_JUMP)  ; LAB_0043d838
    MOV dword ptr [0x02d02570],0x4      ; 0043db25 | g_ActiveRenderColor
        ;   Label: LAB_0043db25
    JMP 0x0043d85f                      ; 0043db2f
        ;   XREF to: 0043d85f (UNCONDITIONAL_JUMP)  ; LAB_0043d85f
    MOV ECX,dword ptr [ESP + 0x60]      ; 0043db34
        ;   Label: LAB_0043db34
    MOV EDX,dword ptr [EAX + 0x10]      ; 0043db38
    MOV EAX,dword ptr [EAX + 0x14]      ; 0043db3b
    SAR EDX,0x10                        ; 0043db3e
    SAR EAX,0x10                        ; 0043db41
    CMP EDX,ECX                         ; 0043db44
    JL 0x0043d872                       ; 0043db46
        ;   XREF to: 0043d872 (CONDITIONAL_JUMP)  ; LAB_0043d872
    CMP EDX,dword ptr [ESP + 0x5c]      ; 0043db4c
    JG 0x0043d872                       ; 0043db50
        ;   XREF to: 0043d872 (CONDITIONAL_JUMP)  ; LAB_0043d872
    CMP EAX,dword ptr [ESP + 0x58]      ; 0043db56
    JL 0x0043d872                       ; 0043db5a
        ;   XREF to: 0043d872 (CONDITIONAL_JUMP)  ; LAB_0043d872
    CMP EAX,dword ptr [ESP + 0x64]      ; 0043db60
    JG 0x0043d872                       ; 0043db64
        ;   XREF to: 0043d872 (CONDITIONAL_JUMP)  ; LAB_0043d872
    CMP dword ptr [0x02cf6a94],0x0      ; 0043db6a | g_MouseButtonFlags
    JNZ 0x0043db7d                      ; 0043db71
        ;   XREF to: 0043db7d (CONDITIONAL_JUMP)  ; LAB_0043db7d
    MOV EAX,dword ptr [ESP + 0x54]      ; 0043db73
    MOV dword ptr [EBX + 0x574c],EAX    ; 0043db77
    CMP dword ptr [EBX + 0x574c],0x0    ; 0043db7d
        ;   Label: LAB_0043db7d
    JZ 0x0043db95                       ; 0043db84
        ;   XREF to: 0043db95 (CONDITIONAL_JUMP)  ; LAB_0043db95
    MOV dword ptr [0x02d02570],0xf9     ; 0043db86 | g_ActiveRenderColor
    JMP 0x0043d872                      ; 0043db90
        ;   XREF to: 0043d872 (UNCONDITIONAL_JUMP)  ; LAB_0043d872
    MOV dword ptr [0x02d02570],0xfc     ; 0043db95 | g_ActiveRenderColor
        ;   Label: LAB_0043db95
    JMP 0x0043d872                      ; 0043db9f
        ;   XREF to: 0043d872 (UNCONDITIONAL_JUMP)  ; LAB_0043d872
    MOV EDI,dword ptr [EAX + 0x10]      ; 0043dba4
        ;   Label: LAB_0043dba4
    MOV EAX,dword ptr [EAX + 0x14]      ; 0043dba7
    PUSH EBX                            ; 0043dbaa
    SAR EAX,0x10                        ; 0043dbab
    PUSH 0x6188be                       ; 0043dbae | = "%d"
    MOV dword ptr [ESP + 0x4c],EAX      ; 0043dbb3
    LEA EAX,[ESP + 0x20]                ; 0043dbb7
    PUSH EAX                            ; 0043dbbb
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0043dbbc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0043dbc1
    MOV ECX,dword ptr [ESP + 0x44]      ; 0043dbc4
    PUSH ECX                            ; 0043dbc8
    SAR EDI,0x10                        ; 0043dbc9
    PUSH EDI                            ; 0043dbcc
    LEA EAX,[ESP + 0x20]                ; 0043dbcd
    PUSH EAX                            ; 0043dbd1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043dbd2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043dbd7
    JMP 0x0043d8c3                      ; 0043dbda
        ;   XREF to: 0043d8c3 (UNCONDITIONAL_JUMP)  ; LAB_0043d8c3
    MOV ESI,dword ptr [EBP + 0x104]     ; 0043dbdf
        ;   Label: LAB_0043dbdf
    MOV dword ptr [EBP + 0x3f028],0x0   ; 0043dbe5
    XOR EAX,EAX                         ; 0043dbef
    TEST ESI,ESI                        ; 0043dbf1
    JLE 0x0043dc24                      ; 0043dbf3
        ;   XREF to: 0043dc24 (CONDITIONAL_JUMP)  ; LAB_0043dc24
    MOV EDX,EBP                         ; 0043dbf5
    CMP dword ptr [EDX + 0x574c],0x0    ; 0043dbf7
        ;   Label: LAB_0043dbf7
    JZ 0x0043dc13                       ; 0043dbfe
        ;   XREF to: 0043dc13 (CONDITIONAL_JUMP)  ; LAB_0043dc13
    MOV ESI,dword ptr [EBP + 0x3f028]   ; 0043dc00
    MOV dword ptr [EBP + ESI*0x4 + 0x3f02c],EAX ; 0043dc06
    INC dword ptr [EBP + 0x3f028]       ; 0043dc0d
    INC EAX                             ; 0043dc13
        ;   Label: LAB_0043dc13
    MOV ESI,dword ptr [EBP + 0x104]     ; 0043dc14
    ADD EDX,0x11c                       ; 0043dc1a
    CMP EAX,ESI                         ; 0043dc20
    JL 0x0043dbf7                       ; 0043dc22
        ;   XREF to: 0043dbf7 (CONDITIONAL_JUMP)  ; LAB_0043dbf7
    CMP EBX,dword ptr [EBP + 0x3f028]   ; 0043dc24
        ;   Label: LAB_0043dc24
    JZ 0x0043d98a                       ; 0043dc2a
        ;   XREF to: 0043d98a (CONDITIONAL_JUMP)  ; LAB_0043d98a
    MOV EAX,0x6188e0                    ; 0043dc30 | = "..\\core\\cloth.cpp"
    MOV EDX,0x8ec                       ; 0043dc35
    PUSH 0x6188f2                       ; 0043dc3a | = "Bug!"
    MOV [0x02f0ca48],EAX                ; 0043dc3f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0043dc44 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043dc4a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043dc4f
    JMP 0x0043d98a                      ; 0043dc52
        ;   XREF to: 0043d98a (UNCONDITIONAL_JUMP)  ; LAB_0043d98a
    PUSH 0x618913                       ; 0043dc57 | = "Use mouse to unlock vertices."
        ;   Label: LAB_0043dc57
    PUSH EAX                            ; 0043dc5c
    PUSH EAX                            ; 0043dc5d
    JMP 0x0043d9ac                      ; 0043dc5e
        ;   XREF to: 0043d9ac (UNCONDITIONAL_JUMP)  ; LAB_0043d9ac
    CMP dword ptr [0x02cf6a94],0x0      ; 0043dc63 | g_MouseButtonFlags
        ;   Label: LAB_0043dc63
    JZ 0x0043da5b                       ; 0043dc6a
        ;   XREF to: 0043da5b (CONDITIONAL_JUMP)  ; LAB_0043da5b
    MOV EAX,[0x02cf6a8c]                ; 0043dc70 | g_MouseX
    MOV dword ptr [ESP + 0x50],EAX      ; 0043dc75
    MOV EAX,[0x02cf6a90]                ; 0043dc79 | g_MouseY
    MOV dword ptr [ESP + 0x4c],EAX      ; 0043dc7e
    JMP 0x0043da5b                      ; 0043dc82
        ;   XREF to: 0043da5b (UNCONDITIONAL_JUMP)  ; LAB_0043da5b
    PUSH 0x1f                           ; 0043dc87
        ;   Label: LAB_0043dc87
    MOV ECX,dword ptr [0x0068416c]      ; 0043dc89 | g_CSpotViewInstance | g_CSpotViewPtr
    PUSH ECX                            ; 0043dc8f | g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_FUN_005b9620 ; 0043dc90
        ;   XREF to: 005b9620 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_FUN_005b9620(CSpotView * this_ptr)
    MOV EAX,[0x0068416c]                ; 0043dc95 | g_CSpotViewPtr
    MOV dword ptr [EAX + 0x20],0x0      ; 0043dc9a | DAT_03f6ba00
    ADD ESP,0x8                         ; 0043dca1
    MOV EDX,dword ptr [EAX + 0x20]      ; 0043dca4 | DAT_03f6ba00
    MOV dword ptr [EAX + 0x1c],EDX      ; 0043dca7 | DAT_03f6b9fc
    MOV EDX,dword ptr [EAX + 0x1c]      ; 0043dcaa | DAT_03f6b9fc
    MOV dword ptr [EAX + 0x18],EDX      ; 0043dcad | DAT_03f6b9f8
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0043dcb0
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    ADD ESP,0x74                        ; 0043dcb5
    POP EBP                             ; 0043dcb8
    POP EDI                             ; 0043dcb9
    POP ESI                             ; 0043dcba
    POP EBX                             ; 0043dcbb
    RET                                 ; 0043dcbc

