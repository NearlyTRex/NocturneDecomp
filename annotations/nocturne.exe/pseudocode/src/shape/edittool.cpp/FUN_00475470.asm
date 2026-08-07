; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00475470(CStrList *param_1,char *param_2,uint param_3)
;
; Local Variables:
; undefined1       Stack[-0x144]:1  local_144
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_initializeDialog_FUN_00474e70 at 00474e80
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057ee2a
;   TerminatedCString s_Too_many_picklist_column_0057ee40
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01bcde20
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   shape_edittool.cpp_calculateGridHeight_FUN_00476e10
;   shape_edittool.cpp_calculateGridWidth_FUN_00476df0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
;   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004764d0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475470
        ;   Label: shape_edittool.cpp_FUN_00475470
    PUSH ESI                            ; 00475471
    PUSH EDI                            ; 00475472
    PUSH EBP                            ; 00475473
    SUB ESP,0x134                       ; 00475474
    PUSH 0x28                           ; 0047547a
    MOV EAX,[0x01bcd9bc]                ; 0047547c | DAT_01bcd9bc
    MOV EDX,dword ptr [ESP + 0x14c]     ; 00475481
    INC EAX                             ; 00475488
    PUSH 0x0                            ; 00475489
    MOV dword ptr [EDX + 0x110],EAX     ; 0047548b
    LEA EAX,[EDX + 0x7c]                ; 00475491
    MOV dword ptr [EDX + 0x114],0x8     ; 00475494
    PUSH EAX                            ; 0047549e
    MOV dword ptr [EDX + 0xa4],0x1      ; 0047549f
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004754a9
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004754ae
    MOV EAX,dword ptr [ESP + 0x148]     ; 004754b1
    XOR EDX,EDX                         ; 004754b8
    MOV ECX,dword ptr [EAX]             ; 004754ba
    MOV dword ptr [ESP + 0x130],EDX     ; 004754bc
    TEST ECX,ECX                        ; 004754c3
    JLE 0x004755a4                      ; 004754c5
        ;   XREF to: 004755a4 (CONDITIONAL_JUMP)  ; LAB_004755a4
    MOV EDI,dword ptr [ESP + 0x130]     ; 004754cb
        ;   Label: LAB_004754cb
    PUSH EDI                            ; 004754d2
    MOV EBP,dword ptr [ESP + 0x14c]     ; 004754d3
    PUSH EBP                            ; 004754da
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 004754db
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00474080(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004754e0
    MOV ESI,EAX                         ; 004754e3
    XOR EBP,EBP                         ; 004754e5
    MOV EDI,dword ptr [ESP + 0x148]     ; 004754e7
    XOR BL,BL                           ; 004754ee
    MOV EDX,ESP                         ; 004754f0
        ;   Label: LAB_004754f0
    MOV BH,byte ptr [ESI]               ; 004754f2
    MOV EAX,ESI                         ; 004754f4
    CMP BL,BH                           ; 004754f6
    JZ 0x0047550a                       ; 004754f8
        ;   XREF to: 0047550a (CONDITIONAL_JUMP)  ; LAB_0047550a
    MOV BH,byte ptr [EAX]               ; 004754fa
        ;   Label: LAB_004754fa
    LEA ECX,[EAX + 0x1]                 ; 004754fc
    CMP BH,0x9                          ; 004754ff
    JNZ 0x00475560                      ; 00475502
        ;   XREF to: 00475560 (CONDITIONAL_JUMP)  ; LAB_00475560
    MOV EAX,ECX                         ; 00475508
    MOV byte ptr [EDX],BL               ; 0047550a
        ;   Label: LAB_0047550a
    MOV ESI,EAX                         ; 0047550c
    MOV EAX,ESP                         ; 0047550e
    PUSH EAX                            ; 00475510
    MOV EAX,[0x01bcd070]                ; 00475511 | DAT_01bcd070
    PUSH EAX                            ; 00475516
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 00475517
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    MOV EDX,dword ptr [EDI + 0x7c]      ; 0047551c
    ADD ESP,0x8                         ; 0047551f
    CMP EAX,EDX                         ; 00475522
    JLE 0x00475529                      ; 00475524
        ;   XREF to: 00475529 (CONDITIONAL_JUMP)  ; LAB_00475529
    MOV dword ptr [EDI + 0x7c],EAX      ; 00475526
    INC EBP                             ; 00475529
        ;   Label: LAB_00475529
    MOV CL,byte ptr [ESI]               ; 0047552a
    ADD EDI,0x4                         ; 0047552c
    CMP BL,CL                           ; 0047552f
    JZ 0x0047556f                       ; 00475531
        ;   XREF to: 0047556f (CONDITIONAL_JUMP)  ; LAB_0047556f
    CMP EBP,0xa                         ; 00475537
    JL 0x004754f0                       ; 0047553a
        ;   XREF to: 004754f0 (CONDITIONAL_JUMP)  ; LAB_004754f0
    MOV EAX,0x57ee2a                    ; 0047553c | = "..\\shape\\edittool.cpp"
    MOV EDX,0xd01                       ; 00475541
    PUSH 0x57ee40                       ; 00475546 | = "Too many picklist columns!"
    MOV [0x01cc4800],EAX                ; 0047554b | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00475550 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00475556
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0047555b
    JMP 0x004754f0                      ; 0047555e
        ;   XREF to: 004754f0 (UNCONDITIONAL_JUMP)  ; LAB_004754f0
    MOV AL,byte ptr [EAX]               ; 00475560
        ;   Label: LAB_00475560
    MOV byte ptr [EDX],AL               ; 00475562
    INC EDX                             ; 00475564
    MOV BH,byte ptr [ECX]               ; 00475565
    MOV EAX,ECX                         ; 00475567
    CMP BL,BH                           ; 00475569
    JNZ 0x004754fa                      ; 0047556b
        ;   XREF to: 004754fa (CONDITIONAL_JUMP)  ; LAB_004754fa
    JMP 0x0047550a                      ; 0047556d
        ;   XREF to: 0047550a (UNCONDITIONAL_JUMP)  ; LAB_0047550a
    MOV EAX,dword ptr [ESP + 0x148]     ; 0047556f
        ;   Label: LAB_0047556f
    CMP EBP,dword ptr [EAX + 0xa4]      ; 00475576
    JLE 0x00475584                      ; 0047557c
        ;   XREF to: 00475584 (CONDITIONAL_JUMP)  ; LAB_00475584
    MOV dword ptr [EAX + 0xa4],EBP      ; 0047557e
    MOV EBX,dword ptr [ESP + 0x130]     ; 00475584
        ;   Label: LAB_00475584
    MOV EDX,dword ptr [ESP + 0x148]     ; 0047558b
    INC EBX                             ; 00475592
    MOV ESI,dword ptr [EDX]             ; 00475593
    MOV dword ptr [ESP + 0x130],EBX     ; 00475595
    CMP EBX,ESI                         ; 0047559c
    JL 0x004754cb                       ; 0047559e
        ;   XREF to: 004754cb (CONDITIONAL_JUMP)  ; LAB_004754cb
    MOV ESI,dword ptr [ESP + 0x148]     ; 004755a4
        ;   Label: LAB_004755a4
    MOV ECX,0x28                        ; 004755ab
    XOR EDI,EDI                         ; 004755b0
    MOV EAX,dword ptr [ESP + 0x148]     ; 004755b2
        ;   Label: LAB_004755b2
    MOV EAX,dword ptr [EAX + 0xa4]      ; 004755b9
    DEC EAX                             ; 004755bf
    CMP EDI,EAX                         ; 004755c0
    JGE 0x004755de                      ; 004755c2
        ;   XREF to: 004755de (CONDITIONAL_JUMP)  ; LAB_004755de
    MOV EAX,[0x005b761c]                ; 004755c4 | g_WindowWidth
    MOV EDX,EAX                         ; 004755c9
    SAR EDX,0x1f                        ; 004755cb
    IDIV ECX                            ; 004755ce
    MOV EBX,dword ptr [ESI + 0x7c]      ; 004755d0
    ADD ESI,0x4                         ; 004755d3
    ADD EBX,EAX                         ; 004755d6
    INC EDI                             ; 004755d8
    MOV dword ptr [ESI + 0x78],EBX      ; 004755d9
    JMP 0x004755b2                      ; 004755dc
        ;   XREF to: 004755b2 (UNCONDITIONAL_JUMP)  ; LAB_004755b2
    MOV EAX,dword ptr [ESP + 0x148]     ; 004755de
        ;   Label: LAB_004755de
    XOR EDX,EDX                         ; 004755e5
    MOV ECX,dword ptr [EAX + 0xa4]      ; 004755e7
    MOV dword ptr [EAX + 0x128],0x0     ; 004755ed
    TEST ECX,ECX                        ; 004755f7
    JLE 0x00475630                      ; 004755f9
        ;   XREF to: 00475630 (CONDITIONAL_JUMP)  ; LAB_00475630
    MOV EBX,dword ptr [ESP + 0x148]     ; 004755fb
    MOV ECX,dword ptr [EAX + 0x7c]      ; 00475602
        ;   Label: LAB_00475602
    ADD EAX,0x4                         ; 00475605
    MOV ESI,dword ptr [EBX + 0x128]     ; 00475608
    INC EDX                             ; 0047560e
    ADD ESI,ECX                         ; 0047560f
    MOV EDI,dword ptr [EBX + 0xa4]      ; 00475611
    MOV dword ptr [EBX + 0x128],ESI     ; 00475617
    CMP EDX,EDI                         ; 0047561d
    JL 0x00475602                       ; 0047561f
        ;   XREF to: 00475602 (CONDITIONAL_JUMP)  ; LAB_00475602
    LEA EAX,[EAX]                       ; 00475621
    LEA EDX,[EDX]                       ; 00475627
    LEA EAX,[EAX]                       ; 0047562d
    MOV EAX,dword ptr [ESP + 0x148]     ; 00475630
        ;   Label: LAB_00475630
    MOV EDX,dword ptr [ESP + 0x148]     ; 00475637
    MOV EAX,dword ptr [EAX + 0x114]     ; 0047563e
    MOV EBP,dword ptr [EDX + 0x128]     ; 00475644
    ADD EAX,EAX                         ; 0047564a
    ADD EBP,EAX                         ; 0047564c
    MOV dword ptr [EDX + 0x128],EBP     ; 0047564e
    MOV EDX,dword ptr [0x01bcd9bc]      ; 00475654 | DAT_01bcd9bc
    MOV EAX,[0x005b7620]                ; 0047565a | g_WindowHeight
    SHL EDX,0x2                         ; 0047565f
    SUB EAX,EDX                         ; 00475662
    MOV ECX,dword ptr [ESP + 0x148]     ; 00475664
    MOV EDX,EAX                         ; 0047566b
    MOV ECX,dword ptr [ECX + 0x110]     ; 0047566d
    SAR EDX,0x1f                        ; 00475673
    IDIV ECX                            ; 00475676
    MOV EDX,dword ptr [ESP + 0x148]     ; 00475678
    MOV dword ptr [EDX + 0x124],EAX     ; 0047567f
    CMP EAX,0x1                         ; 00475685
    JGE 0x00475694                      ; 00475688
        ;   XREF to: 00475694 (CONDITIONAL_JUMP)  ; LAB_00475694
    MOV dword ptr [EDX + 0x124],0x1     ; 0047568a
    MOV EDX,dword ptr [ESP + 0x148]     ; 00475694
        ;   Label: LAB_00475694
    MOV EAX,dword ptr [ESP + 0x148]     ; 0047569b
    MOV ECX,dword ptr [EDX]             ; 004756a2
    CMP ECX,dword ptr [EAX + 0x124]     ; 004756a4
    JGE 0x004756b2                      ; 004756aa
        ;   XREF to: 004756b2 (CONDITIONAL_JUMP)  ; LAB_004756b2
    MOV dword ptr [EDX + 0x124],ECX     ; 004756ac
    MOV EDX,dword ptr [0x005b761c]      ; 004756b2 | g_WindowWidth
        ;   Label: LAB_004756b2
    LEA EAX,[EDX*0x8 + 0x0]             ; 004756b8
    SUB EAX,EDX                         ; 004756bf
    MOV EDX,EAX                         ; 004756c1
    SAR EDX,0x1f                        ; 004756c3
    SHL EDX,0x3                         ; 004756c6
    SBB EAX,EDX                         ; 004756c9
    SAR EAX,0x3                         ; 004756cb
    MOV ECX,dword ptr [ESP + 0x148]     ; 004756ce
    MOV EDX,EAX                         ; 004756d5
    MOV ECX,dword ptr [ECX + 0x128]     ; 004756d7
    SAR EDX,0x1f                        ; 004756dd
    IDIV ECX                            ; 004756e0
    MOV EDX,dword ptr [ESP + 0x148]     ; 004756e2
    MOV dword ptr [EDX + 0x12c],EAX     ; 004756e9
    CMP EAX,0x1                         ; 004756ef
    JGE 0x004756fe                      ; 004756f2
        ;   XREF to: 004756fe (CONDITIONAL_JUMP)  ; LAB_004756fe
    MOV dword ptr [EDX + 0x12c],0x1     ; 004756f4
    MOV EDX,dword ptr [ESP + 0x148]     ; 004756fe
        ;   Label: LAB_004756fe
    MOV EAX,dword ptr [ESP + 0x148]     ; 00475705
    MOV ESI,dword ptr [EDX + 0x124]     ; 0047570c
    MOV EAX,dword ptr [EAX]             ; 00475712
    ADD EAX,ESI                         ; 00475714
    MOV ECX,dword ptr [ESP + 0x148]     ; 00475716
    LEA EDX,[EAX + -0x1]                ; 0047571d
    MOV EDI,dword ptr [ECX + 0x124]     ; 00475720
    MOV EAX,EDX                         ; 00475726
    SAR EDX,0x1f                        ; 00475728
    IDIV EDI                            ; 0047572b
    CMP EAX,dword ptr [ECX + 0x12c]     ; 0047572d
    JGE 0x0047573b                      ; 00475733
        ;   XREF to: 0047573b (CONDITIONAL_JUMP)  ; LAB_0047573b
    MOV dword ptr [ECX + 0x12c],EAX     ; 00475735
    MOV EAX,dword ptr [ESP + 0x148]     ; 0047573b
        ;   Label: LAB_0047573b
    CMP dword ptr [EAX + 0x10],0x0      ; 00475742
    JZ 0x00475752                       ; 00475746
        ;   XREF to: 00475752 (CONDITIONAL_JUMP)  ; LAB_00475752
    MOV dword ptr [EAX + 0x12c],0x1     ; 00475748
    MOV EAX,dword ptr [ESP + 0x148]     ; 00475752
        ;   Label: LAB_00475752
    MOV dword ptr [EAX + 0x16c],0x0     ; 00475759
    MOV EDX,dword ptr [ESP + 0x148]     ; 00475763
    MOV EAX,dword ptr [EAX + 0x124]     ; 0047576a
    MOV ECX,dword ptr [EDX + 0x12c]     ; 00475770
    IMUL EAX,ECX                        ; 00475776
    CMP EAX,dword ptr [EDX]             ; 00475779
    JGE 0x00475790                      ; 0047577b
        ;   XREF to: 00475790 (CONDITIONAL_JUMP)  ; LAB_00475790
    CMP ECX,0x1                         ; 0047577d
    JLE 0x0047597d                      ; 00475780
        ;   XREF to: 0047597d (CONDITIONAL_JUMP)  ; LAB_0047597d
    MOV dword ptr [EDX + 0x16c],0x2     ; 00475786
    MOV EAX,dword ptr [ESP + 0x148]     ; 00475790
        ;   Label: LAB_00475790
    MOV EDX,dword ptr [ESP + 0x148]     ; 00475797
    MOV EAX,dword ptr [EAX + 0x128]     ; 0047579e
    IMUL EAX,dword ptr [EDX + 0x12c]    ; 004757a4
    LEA EBP,[EAX + 0x8]                 ; 004757ab
    MOV ECX,dword ptr [EDX + 0x110]     ; 004757ae
    MOV EAX,dword ptr [EDX + 0x124]     ; 004757b4
    IMUL EAX,ECX                        ; 004757ba
    LEA ESI,[EAX + 0x6]                 ; 004757bd
    CALL shape_edittool.cpp_calculateGridWidth_FUN_00476df0 ; 004757c0
        ;   XREF to: 00476df0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridWidth_FUN_00476df0()
    MOV EDI,EAX                         ; 004757c5
    MOV dword ptr [ESP + 0x12c],EAX     ; 004757c7
    CALL shape_edittool.cpp_calculateGridHeight_FUN_00476e10 ; 004757ce
        ;   XREF to: 00476e10 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridHeight_FUN_00476e10()
    MOV EDX,dword ptr [ESP + 0x148]     ; 004757d3
    MOV ECX,dword ptr [EDX + 0x16c]     ; 004757da
    MOV EBX,EAX                         ; 004757e0
    CMP ECX,0x1                         ; 004757e2
    JNZ 0x0047598c                      ; 004757e5
        ;   XREF to: 0047598c (CONDITIONAL_JUMP)  ; LAB_0047598c
    ADD EBP,EDI                         ; 004757eb
    MOV EAX,dword ptr [ESP + 0x150]     ; 004757ed
        ;   Label: LAB_004757ed
    PUSH EAX                            ; 004757f4
    MOV EDX,dword ptr [ESP + 0x150]     ; 004757f5
    PUSH EDX                            ; 004757fc
    PUSH ESI                            ; 004757fd
    PUSH EBP                            ; 004757fe
    MOV ECX,dword ptr [0x005b6d50]      ; 004757ff | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 00475805
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80 ; 00475806
        ;   XREF to: 00471a80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    MOV EAX,[0x01c00c60]                ; 0047580b | g_ClipRight
    SUB EAX,dword ptr [0x01c00c58]      ; 00475810 | g_ClipLeft
    LEA EBP,[EAX + 0x1]                 ; 00475816
    MOV EDI,dword ptr [0x01c00c5c]      ; 00475819 | g_ClipTop
    MOV EAX,[0x01c00c64]                ; 0047581f | g_ClipBottom
    SUB EAX,EDI                         ; 00475824
    ADD ESP,0x14                        ; 00475826
    LEA ESI,[EAX + 0x1]                 ; 00475829
    MOV EDX,dword ptr [ESP + 0x148]     ; 0047582c
    MOV EAX,dword ptr [ESP + 0x148]     ; 00475833
    MOV ECX,dword ptr [EDX + 0x16c]     ; 0047583a
    ADD EAX,0x138                       ; 00475840
    CMP ECX,0x1                         ; 00475845
    JNZ 0x0047599c                      ; 00475848
        ;   XREF to: 0047599c (CONDITIONAL_JUMP)  ; LAB_0047599c
    MOV EDX,dword ptr [0x01c00c64]      ; 0047584e | g_ClipBottom
    PUSH EDX                            ; 00475854
    MOV ECX,dword ptr [0x01c00c60]      ; 00475855 | g_ClipRight
    MOV EDI,dword ptr [ESP + 0x130]     ; 0047585b
    PUSH ECX                            ; 00475862
    MOV EDX,ECX                         ; 00475863
    MOV EBX,dword ptr [0x01c00c5c]      ; 00475865 | g_ClipTop
    SUB EDX,EDI                         ; 0047586b
    PUSH EBX                            ; 0047586d
    INC EDX                             ; 0047586e
    PUSH EDX                            ; 0047586f
    PUSH EAX                            ; 00475870
    SUB EBP,EDI                         ; 00475871
    CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004764d0 ; 00475873
        ;   XREF to: 004764d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004764d0(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, ...)
        ;   Label: LAB_00475873
    ADD ESP,0x14                        ; 00475878
    MOV ECX,dword ptr [ESP + 0x148]     ; 0047587b
        ;   Label: LAB_0047587b
    MOV EDX,ESI                         ; 00475882
    MOV EAX,ESI                         ; 00475884
    SAR EDX,0x1f                        ; 00475886
    MOV ECX,dword ptr [ECX + 0x110]     ; 00475889
    IDIV ECX                            ; 0047588f
    MOV EDX,dword ptr [ESP + 0x148]     ; 00475891
    MOV ECX,dword ptr [EDX + 0x128]     ; 00475898
    MOV dword ptr [EDX + 0x124],EAX     ; 0047589e
    MOV EDX,EBP                         ; 004758a4
    MOV EAX,EBP                         ; 004758a6
    SAR EDX,0x1f                        ; 004758a8
    IDIV ECX                            ; 004758ab
    MOV EDX,dword ptr [ESP + 0x148]     ; 004758ad
    MOV dword ptr [EDX + 0x12c],EAX     ; 004758b4
    MOV ECX,dword ptr [EDX + 0x124]     ; 004758ba
    MOV EAX,dword ptr [EDX]             ; 004758c0
    ADD EAX,ECX                         ; 004758c2
    LEA EDX,[EAX + -0x1]                ; 004758c4
    MOV ECX,dword ptr [ESP + 0x148]     ; 004758c7
    MOV EAX,EDX                         ; 004758ce
    MOV EBX,dword ptr [ECX + 0x124]     ; 004758d0
    SAR EDX,0x1f                        ; 004758d6
    IDIV EBX                            ; 004758d9
    CMP EAX,dword ptr [ECX + 0x12c]     ; 004758db
    JGE 0x004758e9                      ; 004758e1
        ;   XREF to: 004758e9 (CONDITIONAL_JUMP)  ; LAB_004758e9
    MOV dword ptr [ECX + 0x12c],EAX     ; 004758e3
    MOV EAX,dword ptr [ESP + 0x148]     ; 004758e9
        ;   Label: LAB_004758e9
    CMP dword ptr [EAX + 0x12c],0x1     ; 004758f0
    JGE 0x00475903                      ; 004758f7
        ;   XREF to: 00475903 (CONDITIONAL_JUMP)  ; LAB_00475903
    MOV dword ptr [EAX + 0x12c],0x1     ; 004758f9
    MOV EAX,dword ptr [ESP + 0x148]     ; 00475903
        ;   Label: LAB_00475903
    MOV EDX,dword ptr [ESP + 0x148]     ; 0047590a
    MOV EAX,dword ptr [EAX + 0x124]     ; 00475911
    IMUL EAX,dword ptr [EDX + 0x12c]    ; 00475917
    MOV ECX,dword ptr [EDX + 0x12c]     ; 0047591e
    MOV dword ptr [EDX + 0x120],EAX     ; 00475924
    MOV EDX,EBP                         ; 0047592a
    MOV EAX,EBP                         ; 0047592c
    SAR EDX,0x1f                        ; 0047592e
    IDIV ECX                            ; 00475931
    MOV EDX,dword ptr [ESP + 0x148]     ; 00475933
    MOV dword ptr [EDX + 0x11c],0x0     ; 0047593a
    MOV dword ptr [EDX + 0x128],EAX     ; 00475944
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0047594a
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV EAX,dword ptr [ESP + 0x148]     ; 0047594f
    MOV EBX,0xffffffff                  ; 00475956
    MOV byte ptr [EAX + 0xa8],0x0       ; 0047595b
    MOV dword ptr [0x01bcde20],EBX      ; 00475962 | DAT_01bcde20
    MOV dword ptr [EAX + 0x10c],0x0     ; 00475968
    ADD ESP,0x134                       ; 00475972
    POP EBP                             ; 00475978
    POP EDI                             ; 00475979
    POP ESI                             ; 0047597a
    POP EBX                             ; 0047597b
    RET                                 ; 0047597c
    MOV dword ptr [EDX + 0x16c],0x1     ; 0047597d
        ;   Label: LAB_0047597d
    JMP 0x00475790                      ; 00475987
        ;   XREF to: 00475790 (UNCONDITIONAL_JUMP)  ; LAB_00475790
    CMP ECX,0x2                         ; 0047598c
        ;   Label: LAB_0047598c
    JNZ 0x004757ed                      ; 0047598f
        ;   XREF to: 004757ed (CONDITIONAL_JUMP)  ; LAB_004757ed
    ADD ESI,EAX                         ; 00475995
    JMP 0x004757ed                      ; 00475997
        ;   XREF to: 004757ed (UNCONDITIONAL_JUMP)  ; LAB_004757ed
    CMP ECX,0x2                         ; 0047599c
        ;   Label: LAB_0047599c
    JNZ 0x0047587b                      ; 0047599f
        ;   XREF to: 0047587b (CONDITIONAL_JUMP)  ; LAB_0047587b
    MOV EDX,dword ptr [0x01c00c64]      ; 004759a5 | g_ClipBottom
    PUSH EDX                            ; 004759ab
    MOV ECX,dword ptr [0x01c00c60]      ; 004759ac | g_ClipRight
    SUB EDX,EBX                         ; 004759b2
    PUSH ECX                            ; 004759b4
    INC EDX                             ; 004759b5
    PUSH EDX                            ; 004759b6
    SUB ESI,EBX                         ; 004759b7
    MOV EBX,dword ptr [0x01c00c58]      ; 004759b9 | g_ClipLeft
    PUSH EBX                            ; 004759bf
    PUSH EAX                            ; 004759c0
    JMP 0x00475873                      ; 004759c1
        ;   XREF to: 00475873 (UNCONDITIONAL_JUMP)  ; LAB_00475873

