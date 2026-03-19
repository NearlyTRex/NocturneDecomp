; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools *this_ptr,float current_progress,float total_progress)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   current_progress
; float            Stack[0xc]:4   total_progress
; Local Variables:
; float            Stack[-0x34]:4  local_34
;
; XREF[25]:
;   core_course.cpp_CCourse_importMatrices_FUN_00442ea0 at 00442ee4
;   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 at 0047b5cb
;   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 at 0047b081
;   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450 at 004945c8
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 at 0049575a
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494d50
;   core_msnedit.cpp_CDemonMission_playSound_FUN_0053eb40 at 0053ec01
;   core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00 at 005400e0
;   core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0 at 00576f45
;   core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0 at 0057f55f
;   ... and 15 more
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_006232ee
;   TerminatedCString s_CEditorTools_updatePerce_00623304
;   TerminatedCString s_d_complete_0062333b
;   TerminatedCString s_d_02d_elapsed_approximat_00623349
;   double g_PercentageMultiplier = 100
;   double g_RoundingOffset_00623386 = 0.5
;   double g_TimeScalingFactor = 8.47710503472222E-7
;   double g_TimeDisplayThreshold = 5
;   CBitFont* g_EditorFont
;   int g_WindowStackCount
;   undefined4 g_WindowStack[0].progress_start_time
;   undefined4 g_WindowStack[0].progress_percentage
;   undefined4 g_WindowStack[0].progress_timestamp
;   int g_FontCharacterWidth
;   int g_WindowStatusTextColor
;   ... and 11 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   engine_2d.c_drawHLine_FUN_00402ee0
;   engine_2d.c_drawVLine_FUN_00402ff0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_2d.c_fillRectWithBorder_FUN_00403200
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0530
        ;   Label: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
    PUSH ESI                            ; 004a0531
    PUSH EDI                            ; 004a0532
    PUSH EBP                            ; 004a0533
    MOV EBP,ESP                         ; 004a0534
    SUB ESP,0x30                        ; 004a0536
    AND ESP,0xfffffff8                  ; 004a0539
    CMP dword ptr [0x02cf1cdc],0x1      ; 004a053c | g_WindowStackCount
    JL 0x004a0865                       ; 004a0543
        ;   XREF to: 004a0865 (CONDITIONAL_JUMP)  ; LAB_004a0865
    FLD float ptr [EBP + 0x1c]          ; 004a0549
        ;   Label: LAB_004a0549
    XOR ESI,ESI                         ; 004a054c
    FLDZ                                ; 004a054e
    MOV dword ptr [ESP + 0xc],ESI       ; 004a0550
    FCOMPP                              ; 004a0554
    FNSTSW AX                           ; 004a0556
    SAHF                                ; 004a0558
    JNC 0x004a0585                      ; 004a0559
        ;   XREF to: 004a0585 (CONDITIONAL_JUMP)  ; LAB_004a0585
    FLD float ptr [EBP + 0x18]          ; 004a055b
    FLDZ                                ; 004a055e
    FCOMPP                              ; 004a0560
    FNSTSW AX                           ; 004a0562
    SAHF                                ; 004a0564
    JBE 0x004a056a                      ; 004a0565
        ;   XREF to: 004a056a (CONDITIONAL_JUMP)  ; LAB_004a056a
    MOV dword ptr [EBP + 0x18],ESI      ; 004a0567
    FLD float ptr [EBP + 0x18]          ; 004a056a
        ;   Label: LAB_004a056a
    FCOMP float ptr [EBP + 0x1c]        ; 004a056d
    FNSTSW AX                           ; 004a0570
    SAHF                                ; 004a0572
    JBE 0x004a057b                      ; 004a0573
        ;   XREF to: 004a057b (CONDITIONAL_JUMP)  ; LAB_004a057b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004a0575
    MOV dword ptr [EBP + 0x18],EAX      ; 004a0578
    FLD float ptr [EBP + 0x18]          ; 004a057b
        ;   Label: LAB_004a057b
    FDIV float ptr [EBP + 0x1c]         ; 004a057e
    FSTP float ptr [ESP + 0xc]          ; 004a0581
    FLD float ptr [ESP + 0xc]           ; 004a0585
        ;   Label: LAB_004a0585
    FMUL double ptr [0x0062337e]        ; 004a0589 | g_PercentageMultiplier
    FADD double ptr [0x00623386]        ; 004a058f | g_RoundingOffset_00623386
    CALL crt_math.c_round_FUN_005fe6b0  ; 004a0595
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x24]        ; 004a059a
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004a059e
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ESI,dword ptr [0x02cf1cdc]      ; 004a05a3 | g_WindowStackCount
    MOV EBX,EAX                         ; 004a05a9
    DEC ESI                             ; 004a05ab
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a05ac
    MOV EAX,ESI                         ; 004a05b0
    SHL EAX,0x4                         ; 004a05b2
    SUB EAX,ESI                         ; 004a05b5
    SHL EAX,0x2                         ; 004a05b7
    ADD ESI,EAX                         ; 004a05ba
    SHL ESI,0x3                         ; 004a05bc
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a05bf
    CMP EAX,dword ptr [ESI + 0x2cf1ec0] ; 004a05c3 | g_WindowStack[0].progress_percentage
    JNZ 0x004a05dd                      ; 004a05c9
        ;   XREF to: 004a05dd (CONDITIONAL_JUMP)  ; LAB_004a05dd
    SUB EBX,dword ptr [ESI + 0x2cf1ec4] ; 004a05cb | g_WindowStack[0].progress_timestamp
    CMP EBX,0x480000                    ; 004a05d1 | LAB_0047fffc+4
    JL 0x004a085e                       ; 004a05d7
        ;   XREF to: 004a085e (CONDITIONAL_JUMP)  ; LAB_004a085e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a05dd
        ;   Label: LAB_004a05dd
    PUSH EBX                            ; 004a05e0
    CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 ; 004a05e1
        ;   XREF to: 004a0f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004a05e6
    PUSH 0xffff                         ; 004a05e9
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004a05ee
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 004a05f3
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a05f6
    PUSH ESI                            ; 004a05fa
    PUSH 0x62333b                       ; 004a05fb | = "%d%% complete"
    PUSH -0x1                           ; 004a0600
    MOV EDI,dword ptr [0x02cf2aa8]      ; 004a0602 | g_WindowStatusTextColor
    PUSH EDI                            ; 004a0608
    MOV EAX,[0x02d0255c]                ; 004a0609 | g_ClipTop
    PUSH EAX                            ; 004a060e
    MOV EDX,dword ptr [0x02d02560]      ; 004a060f | g_ClipRight
    PUSH EDX                            ; 004a0615
    MOV ECX,dword ptr [0x02d02558]      ; 004a0616 | g_ClipLeft
    PUSH ECX                            ; 004a061c
    MOV EBX,dword ptr [0x02cf1cd0]      ; 004a061d | g_EditorFont
    PUSH EBX                            ; 004a0623
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30 ; 004a0624
        ;   XREF to: 004cdf30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    MOV EAX,[0x02cf266c]                ; 004a0629 | g_FontCharacterWidth
    MOV EDI,dword ptr [0x02d0255c]      ; 004a062e | g_ClipTop
    ADD EAX,EAX                         ; 004a0634
    ADD EAX,EDI                         ; 004a0636
    LEA EDI,[EAX + 0x1]                 ; 004a0638
    MOV EAX,[0x02cf266c]                ; 004a063b | g_FontCharacterWidth
    MOV EDX,dword ptr [0x02d0255c]      ; 004a0640 | g_ClipTop
    SHL EAX,0x2                         ; 004a0646
    ADD ESP,0x20                        ; 004a0649
    ADD EAX,EDX                         ; 004a064c
    MOV ECX,dword ptr [0x02cf2abc]      ; 004a064e | g_ProgressBarBorderColor
    DEC EAX                             ; 004a0654
    PUSH ECX                            ; 004a0655
    MOV dword ptr [ESP + 0x24],EAX      ; 004a0656
    MOV EAX,[0x02cf2ab4]                ; 004a065a | g_ProgressBarBackgroundColor
    PUSH EAX                            ; 004a065f
    MOV EDX,dword ptr [ESP + 0x28]      ; 004a0660
    MOV ESI,dword ptr [0x02d02560]      ; 004a0664 | g_ClipRight
    PUSH EDX                            ; 004a066a
    DEC ESI                             ; 004a066b
    PUSH ESI                            ; 004a066c
    MOV EBX,dword ptr [0x02d02558]      ; 004a066d | g_ClipLeft
    PUSH EDI                            ; 004a0673
    INC EBX                             ; 004a0674
    PUSH EBX                            ; 004a0675
    CALL engine_2d.c_fillRectWithBorder_FUN_00403200 ; 004a0676
        ;   XREF to: 00403200 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403200(int x1, int y1, int x2, int y2, ...)
    MOV EAX,[0x02d02570]                ; 004a067b | g_ActiveRenderColor
    ADD ESP,0x18                        ; 004a0680
    MOV dword ptr [ESP + 0x14],EAX      ; 004a0683
    MOV EAX,[0x02cf2ac0]                ; 004a0687 | g_ProgressBarTextColor
    PUSH ESI                            ; 004a068c
    MOV [0x02d02570],EAX                ; 004a068d | g_ActiveRenderColor
    LEA EAX,[EDI + -0x1]                ; 004a0692
    PUSH EAX                            ; 004a0695
    MOV dword ptr [ESP + 0x34],EAX      ; 004a0696
    LEA EAX,[EBX + -0x1]                ; 004a069a
    PUSH EAX                            ; 004a069d
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a069e
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004a06a2
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 004a06a7
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a06aa
    PUSH EDX                            ; 004a06ae
    MOV ECX,dword ptr [ESP + 0x30]      ; 004a06af
    PUSH ECX                            ; 004a06b3
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a06b4
    PUSH EAX                            ; 004a06b8
    CALL engine_2d.c_drawVLine_FUN_00402ff0 ; 004a06b9
        ;   XREF to: 00402ff0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004a06be
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a06c1
    MOV [0x02d02570],EAX                ; 004a06c5 | g_ActiveRenderColor
    MOV EAX,ESI                         ; 004a06ca
    SUB EAX,EBX                         ; 004a06cc
    INC EAX                             ; 004a06ce
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a06cf
    FILD dword ptr [ESP + 0x2c]         ; 004a06d3
    FMUL float ptr [ESP + 0xc]          ; 004a06d7
    FADD double ptr [0x00623386]        ; 004a06db | g_RoundingOffset_00623386
    CALL crt_math.c_round_FUN_005fe6b0  ; 004a06e1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x2c]        ; 004a06e6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004a06ea
    ADD EAX,EBX                         ; 004a06ee
    CMP EAX,EBX                         ; 004a06f0
    JLE 0x004a0712                      ; 004a06f2
        ;   XREF to: 004a0712 (CONDITIONAL_JUMP)  ; LAB_004a0712
    CMP EAX,ESI                         ; 004a06f4
    JL 0x004a06fb                       ; 004a06f6
        ;   XREF to: 004a06fb (CONDITIONAL_JUMP)  ; LAB_004a06fb
    LEA EAX,[ESI + -0x1]                ; 004a06f8
    MOV EDX,dword ptr [0x02cf2ab8]      ; 004a06fb | g_ProgressBarFillColor
        ;   Label: LAB_004a06fb
    PUSH EDX                            ; 004a0701
    MOV ECX,dword ptr [ESP + 0x24]      ; 004a0702
    PUSH ECX                            ; 004a0706
    PUSH EAX                            ; 004a0707
    PUSH EDI                            ; 004a0708
    PUSH EBX                            ; 004a0709
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004a070a
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004a070f
    CMP dword ptr [ESP + 0x24],0x0      ; 004a0712
        ;   Label: LAB_004a0712
    JLE 0x004a082e                      ; 004a0717
        ;   XREF to: 004a082e (CONDITIONAL_JUMP)  ; LAB_004a082e
    MOV EAX,[0x02cf1cdc]                ; 004a071d | g_WindowStackCount
    LEA EBX,[EAX + -0x1]                ; 004a0722
    MOV EAX,EBX                         ; 004a0725
    SHL EAX,0x4                         ; 004a0727
    SUB EAX,EBX                         ; 004a072a
    SHL EAX,0x2                         ; 004a072c
    ADD EAX,EBX                         ; 004a072f
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a0731
    MOV ESI,dword ptr [EAX*0x8 + 0x2cf1ebc] ; 004a0735 | g_WindowStack[0].progress_start_time
    MOV EAX,EBX                         ; 004a073c
    SUB EAX,ESI                         ; 004a073e
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a0740
    FILD dword ptr [ESP + 0x2c]         ; 004a0744
    FMUL double ptr [0x0062338e]        ; 004a0748 | g_TimeScalingFactor
    FST float ptr [ESP + 0x8]           ; 004a074e
    FST double ptr [ESP]                ; 004a0752
    FCOMP double ptr [0x00623396]       ; 004a0755 | g_TimeDisplayThreshold
    FNSTSW AX                           ; 004a075b
    SAHF                                ; 004a075d
    JBE 0x004a082e                      ; 004a075e
        ;   XREF to: 004a082e (CONDITIONAL_JUMP)  ; LAB_004a082e
    FLD float ptr [EBP + 0x18]          ; 004a0764
    FLD float ptr [EBP + 0x1c]          ; 004a0767
    FSUB ST0,ST1                        ; 004a076a
    FMUL float ptr [ESP + 0x8]          ; 004a076c
    FDIVRP                              ; 004a0770
    FADD double ptr [0x00623386]        ; 004a0772 | g_RoundingOffset_00623386
    CALL crt_math.c_round_FUN_005fe6b0  ; 004a0778
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x28]        ; 004a077d
    MOV EDI,dword ptr [ESP + 0x28]      ; 004a0781
    TEST EDI,EDI                        ; 004a0785
    JLE 0x004a082e                      ; 004a0787
        ;   XREF to: 004a082e (CONDITIONAL_JUMP)  ; LAB_004a082e
    MOV EBX,0x3c                        ; 004a078d
    MOV EDX,EDI                         ; 004a0792
    MOV EAX,EDI                         ; 004a0794
    SAR EDX,0x1f                        ; 004a0796
    IDIV EBX                            ; 004a0799
    MOV ESI,EAX                         ; 004a079b
    MOV EDX,EDI                         ; 004a079d
    MOV EAX,EDI                         ; 004a079f
    SAR EDX,0x1f                        ; 004a07a1
    IDIV EBX                            ; 004a07a4
    FLD double ptr [ESP]                ; 004a07a6
    FADD double ptr [0x00623386]        ; 004a07a9 | g_RoundingOffset_00623386
    CALL crt_math.c_round_FUN_005fe6b0  ; 004a07af
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x18]        ; 004a07b4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a07b8
    MOV dword ptr [ESP + 0x28],EDX      ; 004a07bc
    MOV EDX,EAX                         ; 004a07c0
    SAR EDX,0x1f                        ; 004a07c2
    IDIV EBX                            ; 004a07c5
    MOV EBX,EAX                         ; 004a07c7
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a07c9
    MOV EDX,EAX                         ; 004a07cd
    MOV EDI,0x3c                        ; 004a07cf
    SAR EDX,0x1f                        ; 004a07d4
    IDIV EDI                            ; 004a07d7
    PUSH 0xffff                         ; 004a07d9
    MOV dword ptr [ESP + 0x1c],EDX      ; 004a07de
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004a07e2
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 004a07e7
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a07ea
    PUSH EAX                            ; 004a07ee
    PUSH ESI                            ; 004a07ef
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a07f0
    PUSH EDX                            ; 004a07f4
    PUSH EBX                            ; 004a07f5
    PUSH 0x623349                       ; 004a07f6 | = "%d:%02d elapsed, approximately %d:%02..."
    MOV ECX,dword ptr [0x02cf2aa8]      ; 004a07fb | g_WindowStatusTextColor
    PUSH -0x1                           ; 004a0801
    MOV EAX,[0x02d02564]                ; 004a0803 | g_ClipBottom
    MOV EBX,dword ptr [0x02cf266c]      ; 004a0808 | g_FontCharacterWidth
    PUSH ECX                            ; 004a080e
    SUB EAX,EBX                         ; 004a080f
    PUSH EAX                            ; 004a0811
    MOV ESI,dword ptr [0x02d02560]      ; 004a0812 | g_ClipRight
    PUSH ESI                            ; 004a0818
    MOV EDI,dword ptr [0x02d02558]      ; 004a0819 | g_ClipLeft
    PUSH EDI                            ; 004a081f
    MOV EAX,[0x02cf1cd0]                ; 004a0820 | g_EditorFont
    PUSH EAX                            ; 004a0825
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30 ; 004a0826
        ;   XREF to: 004cdf30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x2c                        ; 004a082b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004a082e
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_004a082e
    MOV EAX,[0x02cf1cdc]                ; 004a0833 | g_WindowStackCount
    LEA EBX,[EAX + -0x1]                ; 004a0838
    MOV EAX,EBX                         ; 004a083b
    SHL EAX,0x4                         ; 004a083d
    SUB EAX,EBX                         ; 004a0840
    SHL EAX,0x2                         ; 004a0842
    ADD EBX,EAX                         ; 004a0845
    SHL EBX,0x3                         ; 004a0847
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a084a
    MOV dword ptr [EBX + 0x2cf1ec0],EAX ; 004a084e | g_WindowStack[0].progress_percentage
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a0854
    MOV dword ptr [EBX + 0x2cf1ec4],EAX ; 004a0858 | g_WindowStack[0].progress_timestamp
    MOV ESP,EBP                         ; 004a085e
        ;   Label: LAB_004a085e
    POP EBP                             ; 004a0860
    POP EDI                             ; 004a0861
    POP ESI                             ; 004a0862
    POP EBX                             ; 004a0863
    RET                                 ; 004a0864
    MOV ECX,0x6232ee                    ; 004a0865 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a0865
    MOV EBX,0x742                       ; 004a086a
    PUSH 0x623304                       ; 004a086f | = "CEditorTools::updatePercentageWindow ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a0874 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004a087a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a0880
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a0885
    JMP 0x004a0549                      ; 004a0888
        ;   XREF to: 004a0549 (UNCONDITIONAL_JUMP)  ; LAB_004a0549

