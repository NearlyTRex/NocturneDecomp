; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x1a4]:8  local_1a4
; undefined8       Stack[-0x19c]:8  local_19c
; undefined8       Stack[-0x194]:8  local_194
; undefined8       Stack[-0x18c]:8  local_18c
; undefined8       Stack[-0x184]:8  local_184
; undefined8       Stack[-0x17c]:8  local_17c
; undefined1       Stack[-0x174]:1  local_174
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
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
; XREF[6]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538762
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 005793f0
;   core_setedit.cpp_FUN_0057b410 at 0057b4c8
;   core_setedit.cpp_FUN_0057b500 at 0057b5dd
;   core_setedit.cpp_FUN_0057b600 at 0057b8e8
;   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 at 0057cb12
;
; Referenced Globals:
;   TerminatedCString s_Camera_box_7_2f_7_2f_7_2_00645ac5
;   TerminatedCString s_core_set_cpp_00645afe
;   TerminatedCString s_CDemonSet_precomuputeLig_00645b0e
;   TerminatedCString s_Light_d_Box_d_d_d_d_00645b5a
;   TerminatedCString s_Precomputing_lights_from_00645b76
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonCamera g_CDemonCameraInstance
;   int g_MasterLightCount
;   CDemonLight*[96] g_MasterLightList
;   undefined4 DAT_03276db4
;   int g_ActiveLightCount
;   int g_DynamicLightCount
;   CDemonRaytrace g_CDemonRaytraceInstance
;   undefined4 DAT_03277d80
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
;   core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
;   core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
;   core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
;   core_setutil.cpp_C3DSCamera_apply_FUN_00585870
;   core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c_strcmp_FUN_005fef20
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a470
        ;   Label: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
    PUSH ESI                            ; 0056a471
    PUSH EDI                            ; 0056a472
    PUSH EBP                            ; 0056a473
    SUB ESP,0x164                       ; 0056a474
    XOR EDX,EDX                         ; 0056a47a
    MOV ECX,dword ptr [0x03276dac]      ; 0056a47c | g_MasterLightCount
    MOV dword ptr [ESP + 0x128],EDX     ; 0056a482
    TEST ECX,ECX                        ; 0056a489
    JZ 0x0056a72f                       ; 0056a48b
        ;   XREF to: 0056a72f (CONDITIONAL_JUMP)  ; LAB_0056a72f
    XOR EDI,EDI                         ; 0056a491
        ;   Label: LAB_0056a491
    MOV EAX,dword ptr [ESP + 0x178]     ; 0056a493
    MOV dword ptr [0x032776b4],EDI      ; 0056a49a | g_DynamicLightCount
    MOV dword ptr [0x03277d80],EDI      ; 0056a4a0 | DAT_03277d80
    MOV dword ptr [ESP + 0x154],EDI     ; 0056a4a6
    MOV ECX,dword ptr [EAX]             ; 0056a4ad
    MOV dword ptr [0x03276f30],EDI      ; 0056a4af | g_ActiveLightCount
    TEST ECX,ECX                        ; 0056a4b5
    JLE 0x0056a70e                      ; 0056a4b7
        ;   XREF to: 0056a70e (CONDITIONAL_JUMP)  ; LAB_0056a70e
    ADD EAX,0x19a30                     ; 0056a4bd
    MOV dword ptr [ESP + 0x140],EAX     ; 0056a4c2
    MOV dword ptr [ESP + 0x13c],EAX     ; 0056a4c9
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0056a4d0
    INC EAX                             ; 0056a4d7
    MOV dword ptr [ESP + 0x12c],EAX     ; 0056a4d8
    MOV EAX,dword ptr [ESP + 0x178]     ; 0056a4df
    ADD EAX,0x4                         ; 0056a4e6
    MOV dword ptr [ESP + 0x130],EAX     ; 0056a4e9
    MOV EAX,dword ptr [ESP + 0x178]     ; 0056a4f0
    MOV dword ptr [ESP + 0x134],EDI     ; 0056a4f7
    MOV dword ptr [ESP + 0x138],EAX     ; 0056a4fe
    IMUL EBX,dword ptr [ESP + 0x154],0x1a4 ; 0056a505
        ;   Label: LAB_0056a505
    MOV EAX,dword ptr [ESP + 0x138]     ; 0056a510
    MOV EBP,dword ptr [EAX + 0x144]     ; 0056a517
    TEST EBP,EBP                        ; 0056a51d
    JZ 0x0056a750                       ; 0056a51f
        ;   XREF to: 0056a750 (CONDITIONAL_JUMP)  ; LAB_0056a750
    MOV dword ptr [ESP + 0x158],0x21    ; 0056a525
        ;   Label: LAB_0056a525
    MOV EBX,dword ptr [ESP + 0x178]     ; 0056a530
    MOV ESI,dword ptr [ESP + 0x17c]     ; 0056a537
    MOV EBX,dword ptr [EBX + 0x19a2c]   ; 0056a53e
    XOR EAX,EAX                         ; 0056a544
    MOV dword ptr [ESP + 0x150],EBX     ; 0056a546
    CMP ESI,-0x1                        ; 0056a54d
    JZ 0x0056a562                       ; 0056a550
        ;   XREF to: 0056a562 (CONDITIONAL_JUMP)  ; LAB_0056a562
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0056a552
    MOV EAX,ESI                         ; 0056a559
    MOV dword ptr [ESP + 0x150],EBX     ; 0056a55b
    MOV EDI,dword ptr [ESP + 0x150]     ; 0056a562
        ;   Label: LAB_0056a562
    MOV dword ptr [ESP + 0x160],EAX     ; 0056a569
    CMP EAX,EDI                         ; 0056a570
    JGE 0x0056a69e                      ; 0056a572
        ;   XREF to: 0056a69e (CONDITIONAL_JUMP)  ; LAB_0056a69e
    IMUL EAX,EAX,0x1898                 ; 0056a578
    MOV EBX,dword ptr [ESP + 0x138]     ; 0056a57e
    MOV dword ptr [ESP + 0x14c],EBX     ; 0056a585
    MOV EBX,dword ptr [ESP + 0x134]     ; 0056a58c
    MOV EBP,dword ptr [ESP + 0x134]     ; 0056a593
    MOV dword ptr [ESP + 0x148],EBX     ; 0056a59a
    MOV EBX,dword ptr [ESP + 0x138]     ; 0056a5a1
    MOV ESI,dword ptr [ESP + 0x154]     ; 0056a5a8
    MOV dword ptr [ESP + 0x144],EBX     ; 0056a5af
    ADD EBP,EAX                         ; 0056a5b6
    MOV EBX,dword ptr [ESP + 0x178]     ; 0056a5b8
    ADD EAX,ESI                         ; 0056a5bf
    ADD EAX,EBX                         ; 0056a5c1
    ADD EBP,EBX                         ; 0056a5c3
    MOV dword ptr [ESP + 0x15c],EAX     ; 0056a5c5
    IMUL ESI,dword ptr [ESP + 0x160],0x1898 ; 0056a5cc
        ;   Label: LAB_0056a5cc
    MOV EBX,dword ptr [ESP + 0x178]     ; 0056a5d7
    ADD EBX,ESI                         ; 0056a5de
    CMP dword ptr [EBX + 0x19a30],0x0   ; 0056a5e0
    JNZ 0x0056a94c                      ; 0056a5e7
        ;   XREF to: 0056a94c (CONDITIONAL_JUMP)  ; LAB_0056a94c
    MOV EDX,dword ptr [0x03276dac]      ; 0056a5ed | g_MasterLightCount
    XOR EBX,EBX                         ; 0056a5f3
    TEST EDX,EDX                        ; 0056a5f5
    JLE 0x0056a620                      ; 0056a5f7
        ;   XREF to: 0056a620 (CONDITIONAL_JUMP)  ; LAB_0056a620
    ADD ESI,dword ptr [ESP + 0x140]     ; 0056a5f9
    LEA EDI,[ESI + 0x4]                 ; 0056a600
    XOR ESI,ESI                         ; 0056a603
    MOV EAX,dword ptr [ESI + 0x3276db0] ; 0056a605 | g_MasterLightList | DAT_03276db4
        ;   Label: LAB_0056a605
    PUSH EDI                            ; 0056a60b
    ADD EAX,0x40                        ; 0056a60c
    PUSH EAX                            ; 0056a60f
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0056a610
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056a615
    TEST EAX,EAX                        ; 0056a618
    JNZ 0x0056a875                      ; 0056a61a
        ;   XREF to: 0056a875 (CONDITIONAL_JUMP)  ; LAB_0056a875
    CMP EBX,dword ptr [0x03276dac]      ; 0056a620 | g_MasterLightCount
        ;   Label: LAB_0056a620
    JNZ 0x0056a64b                      ; 0056a626
        ;   XREF to: 0056a64b (CONDITIONAL_JUMP)  ; LAB_0056a64b
    MOV EDX,0x645afe                    ; 0056a628 | = "..\\core\\set.cpp"
    MOV ECX,0x2fc                       ; 0056a62d
    PUSH 0x645b0e                       ; 0056a632 | = "CDemonSet::precomuputeLightVisibility..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0056a637 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0056a63d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056a643
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0056a648
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0056a64b
        ;   Label: LAB_0056a64b
    MOV ESI,dword ptr [EAX + 0x144]     ; 0056a652
    MOV EBX,dword ptr [EBX*0x4 + 0x3276db0] ; 0056a658 | g_MasterLightList
    TEST ESI,ESI                        ; 0056a65f
    JZ 0x0056a88c                       ; 0056a661
        ;   XREF to: 0056a88c (CONDITIONAL_JUMP)  ; LAB_0056a88c
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0056a667
        ;   Label: LAB_0056a667
    MOV EDX,dword ptr [ESP + 0x160]     ; 0056a66e
    MOV ECX,dword ptr [ESP + 0x150]     ; 0056a675
    ADD EBP,0x1898                      ; 0056a67c
    ADD EAX,0x1898                      ; 0056a682
    INC EDX                             ; 0056a687
    MOV dword ptr [ESP + 0x15c],EAX     ; 0056a688
    MOV dword ptr [ESP + 0x160],EDX     ; 0056a68f
    CMP EDX,ECX                         ; 0056a696
    JL 0x0056a5cc                       ; 0056a698
        ;   XREF to: 0056a5cc (CONDITIONAL_JUMP)  ; LAB_0056a5cc
    MOV EBX,dword ptr [ESP + 0x154]     ; 0056a69e
        ;   Label: LAB_0056a69e
    PUSH EBX                            ; 0056a6a5
    PUSH 0x645b76                       ; 0056a6a6 | = "Precomputing lights from camera : %d"
    LEA EAX,[ESP + 0x8]                 ; 0056a6ab
    PUSH EAX                            ; 0056a6af
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0056a6b0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056a6b5
    PUSH 0x0                            ; 0056a6b8
    PUSH 0x0                            ; 0056a6ba
    LEA EAX,[ESP + 0x8]                 ; 0056a6bc
    PUSH EAX                            ; 0056a6c0
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0056a6c1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0056a6c6
    LEA EBP,[EBX + 0x1]                 ; 0056a6c9
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0056a6cc
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV ESI,dword ptr [ESP + 0x138]     ; 0056a6d1
    MOV EDI,dword ptr [ESP + 0x134]     ; 0056a6d8
    MOV EBX,dword ptr [ESP + 0x178]     ; 0056a6df
    MOV dword ptr [ESP + 0x154],EBP     ; 0056a6e6
    ADD ESI,0x1a4                       ; 0056a6ed
    ADD EDI,0x10                        ; 0056a6f3
    MOV EDX,dword ptr [EBX]             ; 0056a6f6
    MOV dword ptr [ESP + 0x138],ESI     ; 0056a6f8
    MOV dword ptr [ESP + 0x134],EDI     ; 0056a6ff
    CMP EBP,EDX                         ; 0056a706
    JL 0x0056a505                       ; 0056a708
        ;   XREF to: 0056a505 (CONDITIONAL_JUMP)  ; LAB_0056a505
    CMP dword ptr [ESP + 0x128],0x0     ; 0056a70e
        ;   Label: LAB_0056a70e
    JNZ 0x0056a9de                      ; 0056a716
        ;   XREF to: 0056a9de (CONDITIONAL_JUMP)  ; LAB_0056a9de
    XOR EBP,EBP                         ; 0056a71c
    MOV dword ptr [0x03277d14],EBP      ; 0056a71e | g_CDemonRaytraceInstance
    ADD ESP,0x164                       ; 0056a724
    POP EBP                             ; 0056a72a
    POP EDI                             ; 0056a72b
    POP ESI                             ; 0056a72c
    POP EBX                             ; 0056a72d
    RET                                 ; 0056a72e
    MOV EBX,dword ptr [ESP + 0x178]     ; 0056a72f
        ;   Label: LAB_0056a72f
    PUSH EBX                            ; 0056a736
    MOV ESI,0x1                         ; 0056a737
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0056a73c
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056a741
    MOV dword ptr [ESP + 0x128],ESI     ; 0056a744
    JMP 0x0056a491                      ; 0056a74b
        ;   XREF to: 0056a491 (UNCONDITIONAL_JUMP)  ; LAB_0056a491
    MOV EAX,dword ptr [ESP + 0x130]     ; 0056a750
        ;   Label: LAB_0056a750
    PUSH 0x32758e4                      ; 0056a757 | g_CDemonCameraInstance
    ADD EBX,EAX                         ; 0056a75c
    PUSH EBX                            ; 0056a75e
    CALL core_setutil.cpp_C3DSCamera_apply_FUN_00585870 ; 0056a75f
        ;   XREF to: 00585870 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_apply_FUN_00585870(C3DSCamera * this_ptr, CDemonCamera * camera)
    ADD ESP,0x8                         ; 0056a764
    PUSH EBP                            ; 0056a767
    PUSH 0x32758e4                      ; 0056a768 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0056a76d
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0056a772
    PUSH EBP                            ; 0056a775
    MOV ECX,dword ptr [ESP + 0x17c]     ; 0056a776
    PUSH 0x461c3f9a                     ; 0056a77d
    MOV EDX,0x1                         ; 0056a782
    PUSH ECX                            ; 0056a787
    MOV dword ptr [0x03277d14],EDX      ; 0056a788 | g_CDemonRaytraceInstance
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 0056a78e
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0056a793
    PUSH EBP                            ; 0056a796
    PUSH 0x32758e4                      ; 0056a797 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 0056a79c
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0056a7a1
    PUSH 0x32758e4                      ; 0056a7a4 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360 ; 0056a7a9
        ;   XREF to: 0044e360 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0056a7ae
    LEA EAX,[ESP + 0x100]               ; 0056a7b1
    PUSH EAX                            ; 0056a7b8
    ADD EBX,0x17c                       ; 0056a7b9
    PUSH 0x32758e4                      ; 0056a7bf | g_CDemonCameraInstance
    MOV EDI,EBX                         ; 0056a7c4
    CALL core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060 ; 0056a7c6
        ;   XREF to: 00454060 (UNCONDITIONAL_CALL)  ; CVector3f * core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060(CDemonCamera * this_ptr, CVector3f * output_vectors, CBoundingBox3D * bounding_box)
    ADD ESP,0x8                         ; 0056a7cb
    MOV ESI,EAX                         ; 0056a7ce
    CMP EBX,EAX                         ; 0056a7d0
    JZ 0x0056a7e4                       ; 0056a7d2
        ;   XREF to: 0056a7e4 (CONDITIONAL_JUMP)  ; LAB_0056a7e4
    MOV EDX,dword ptr [EAX]             ; 0056a7d4
    MOV dword ptr [EBX],EDX             ; 0056a7d6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056a7d8
    MOV dword ptr [EBX + 0x4],EDX       ; 0056a7db
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056a7de
    MOV dword ptr [EBX + 0x8],EDX       ; 0056a7e1
    LEA EAX,[ESI + 0xc]                 ; 0056a7e4
        ;   Label: LAB_0056a7e4
    LEA EBX,[EDI + 0xc]                 ; 0056a7e7
    CMP EBX,EAX                         ; 0056a7ea
    JZ 0x0056a7fe                       ; 0056a7ec
        ;   XREF to: 0056a7fe (CONDITIONAL_JUMP)  ; LAB_0056a7fe
    MOV EDX,dword ptr [EAX]             ; 0056a7ee
    MOV dword ptr [EBX],EDX             ; 0056a7f0
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056a7f2
    MOV dword ptr [EBX + 0x4],EDX       ; 0056a7f5
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056a7f8
    MOV dword ptr [EBX + 0x8],EDX       ; 0056a7fb
    MOV EAX,dword ptr [ESP + 0x138]     ; 0056a7fe
        ;   Label: LAB_0056a7fe
    SUB ESP,0x8                         ; 0056a805
    FLD float ptr [EAX + 0x194]         ; 0056a808
    FSTP double ptr [ESP]               ; 0056a80e
    SUB ESP,0x8                         ; 0056a811
    FLD float ptr [EAX + 0x190]         ; 0056a814
    FSTP double ptr [ESP]               ; 0056a81a
    SUB ESP,0x8                         ; 0056a81d
    FLD float ptr [EAX + 0x18c]         ; 0056a820
    FSTP double ptr [ESP]               ; 0056a826
    SUB ESP,0x8                         ; 0056a829
    FLD float ptr [EAX + 0x188]         ; 0056a82c
    FSTP double ptr [ESP]               ; 0056a832
    SUB ESP,0x8                         ; 0056a835
    FLD float ptr [EAX + 0x184]         ; 0056a838
    FSTP double ptr [ESP]               ; 0056a83e
    SUB ESP,0x8                         ; 0056a841
    FLD float ptr [EAX + 0x180]         ; 0056a844
    FSTP double ptr [ESP]               ; 0056a84a
    PUSH 0x645ac5                       ; 0056a84d | = "Camera box (%7.2f, %7.2f, %7.2f) - (%..."
    LEA EAX,[ESP + 0x34]                ; 0056a852
    PUSH EAX                            ; 0056a856
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0056a857
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x38                        ; 0056a85c
    PUSH 0x16                           ; 0056a85f
    PUSH 0x0                            ; 0056a861
    LEA EAX,[ESP + 0x8]                 ; 0056a863
    PUSH EAX                            ; 0056a867
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0056a868
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0056a86d
    JMP 0x0056a525                      ; 0056a870
        ;   XREF to: 0056a525 (UNCONDITIONAL_JUMP)  ; LAB_0056a525
    MOV ECX,dword ptr [0x03276dac]      ; 0056a875 | g_MasterLightCount
        ;   Label: LAB_0056a875
    INC EBX                             ; 0056a87b
    ADD ESI,0x4                         ; 0056a87c
    CMP EBX,ECX                         ; 0056a87f
    JL 0x0056a605                       ; 0056a881
        ;   XREF to: 0056a605 (CONDITIONAL_JUMP)  ; LAB_0056a605
    JMP 0x0056a620                      ; 0056a887
        ;   XREF to: 0056a620 (UNCONDITIONAL_JUMP)  ; LAB_0056a620
    PUSH ESI                            ; 0056a88c
        ;   Label: LAB_0056a88c
    PUSH EBX                            ; 0056a88d
    PUSH 0x32758e4                      ; 0056a88e | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10 ; 0056a893
        ;   XREF to: 0044de10 (UNCONDITIONAL_CALL)  ; void * core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect)
    ADD ESP,0xc                         ; 0056a898
    PUSH EBX                            ; 0056a89b
    PUSH 0x32758e4                      ; 0056a89c | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0 ; 0056a8a1
        ;   XREF to: 00450fc0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0(CDemonCamera * this_ptr, CDemonLight * light_source)
    ADD ESP,0x8                         ; 0056a8a6
    PUSH EBX                            ; 0056a8a9
    MOV ESI,dword ptr [ESP + 0x160]     ; 0056a8aa
    PUSH 0x32758e4                      ; 0056a8b1 | g_CDemonCameraInstance
    MOV byte ptr [ESI + 0x19b58],AL     ; 0056a8b6
    LEA ESI,[ESP + 0x120]               ; 0056a8bc
    CALL core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090 ; 0056a8c3
        ;   XREF to: 00451090 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090(CDemonCamera * this_ptr, CDemonLight * light, CRect * out_bounds)
    LEA ESI,[ESP + 0x120]               ; 0056a8c8
    ADD ESP,0x8                         ; 0056a8cf
    LEA EDI,[EBP + 0x19c54]             ; 0056a8d2
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0056a8d8
    MOVSD ES:EDI,ESI                    ; 0056a8df
    MOVSD ES:EDI,ESI                    ; 0056a8e0
    MOVSD ES:EDI,ESI                    ; 0056a8e1
    MOVSD ES:EDI,ESI                    ; 0056a8e2
    CMP byte ptr [EAX + 0x19b58],0x0    ; 0056a8e3
    JZ 0x0056a667                       ; 0056a8ea
        ;   XREF to: 0056a667 (CONDITIONAL_JUMP)  ; LAB_0056a667
    MOV EDI,dword ptr [EBP + 0x19c60]   ; 0056a8f0
    PUSH EDI                            ; 0056a8f6
    MOV EAX,dword ptr [EBP + 0x19c5c]   ; 0056a8f7
    PUSH EAX                            ; 0056a8fd
    MOV EDX,dword ptr [EBP + 0x19c58]   ; 0056a8fe
    PUSH EDX                            ; 0056a904
    MOV ECX,dword ptr [EBP + 0x19c54]   ; 0056a905
    PUSH ECX                            ; 0056a90b
    MOV EBX,dword ptr [ESP + 0x170]     ; 0056a90c
    PUSH EBX                            ; 0056a913
    PUSH 0x645b5a                       ; 0056a914 | = "Light %d, Box : %d,%d,%d,%d"
    LEA EAX,[ESP + 0x18]                ; 0056a919
    PUSH EAX                            ; 0056a91d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0056a91e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x1c                        ; 0056a923
    MOV ESI,dword ptr [ESP + 0x158]     ; 0056a926
    PUSH ESI                            ; 0056a92d
    PUSH 0x0                            ; 0056a92e
    LEA EAX,[ESP + 0x8]                 ; 0056a930
    PUSH EAX                            ; 0056a934
    LEA EDI,[ESI + 0xb]                 ; 0056a935
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0056a938
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0056a93d
    MOV dword ptr [ESP + 0x158],EDI     ; 0056a940
    JMP 0x0056a667                      ; 0056a947
        ;   XREF to: 0056a667 (UNCONDITIONAL_JUMP)  ; LAB_0056a667
    MOV EAX,dword ptr [ESP + 0x144]     ; 0056a94c
        ;   Label: LAB_0056a94c
    MOV EDI,dword ptr [ESP + 0x154]     ; 0056a953
    MOV ECX,dword ptr [EAX + 0x144]     ; 0056a95a
    ADD EDI,EBX                         ; 0056a960
    TEST ECX,ECX                        ; 0056a962
    JZ 0x0056a972                       ; 0056a964
        ;   XREF to: 0056a972 (CONDITIONAL_JUMP)  ; LAB_0056a972
    MOV byte ptr [EDI + 0x19b58],0x0    ; 0056a966
    JMP 0x0056a667                      ; 0056a96d
        ;   XREF to: 0056a667 (UNCONDITIONAL_JUMP)  ; LAB_0056a667
    PUSH 0x1                            ; 0056a972
        ;   Label: LAB_0056a972
    PUSH 0x32758e4                      ; 0056a974 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0056a979
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0056a97e
    ADD ESI,dword ptr [ESP + 0x13c]     ; 0056a981
    PUSH ESI                            ; 0056a988
    CALL core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0 ; 0056a989
        ;   XREF to: 00587df0 (UNCONDITIONAL_CALL)  ; int core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 0056a98e
    PUSH 0x0                            ; 0056a991
    PUSH 0x32758e4                      ; 0056a993 | g_CDemonCameraInstance
    MOV byte ptr [EDI + 0x19b58],AL     ; 0056a998
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 0056a99e
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0056a9a3
    MOV EAX,dword ptr [ESP + 0x148]     ; 0056a9a6
    MOV dword ptr [EBX + EAX*0x1 + 0x19c54],0x0 ; 0056a9ad
    MOV dword ptr [EBX + EAX*0x1 + 0x19c58],0x0 ; 0056a9b8
    MOV dword ptr [EBX + EAX*0x1 + 0x19c5c],0x0 ; 0056a9c3
    MOV dword ptr [EBX + EAX*0x1 + 0x19c60],0x0 ; 0056a9ce
    JMP 0x0056a667                      ; 0056a9d9
        ;   XREF to: 0056a667 (UNCONDITIONAL_JUMP)  ; LAB_0056a667
    MOV EBX,dword ptr [ESP + 0x178]     ; 0056a9de
        ;   Label: LAB_0056a9de
    PUSH EBX                            ; 0056a9e5
    CALL core_set.cpp_CDemonSet_FUN_0056d2d0 ; 0056a9e6
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056a9eb
    XOR EBP,EBP                         ; 0056a9ee
    MOV dword ptr [0x03277d14],EBP      ; 0056a9f0 | g_CDemonRaytraceInstance
    ADD ESP,0x164                       ; 0056a9f6
    POP EBP                             ; 0056a9fc
    POP EDI                             ; 0056a9fd
    POP ESI                             ; 0056a9fe
    POP EBX                             ; 0056a9ff
    RET                                 ; 0056aa00

