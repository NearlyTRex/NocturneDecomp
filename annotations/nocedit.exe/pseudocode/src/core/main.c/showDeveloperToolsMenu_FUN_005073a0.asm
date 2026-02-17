; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_showDeveloperToolsMenu_FUN_005073a0(void)
;
; Local Variables:
; undefined1       Stack[-0x528]:1  local_528
; undefined1       Stack[-0x328]:1  local_328
; undefined1       Stack[-0x228]:1  local_228
; undefined1       Stack[-0x144]:1  local_144
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined1       Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 005132c8
;
; Referenced Globals:
;   TerminatedCString s_Editor_0063169a
;   TerminatedCString s_system_nocturne_ini_006316a1
;   TerminatedCString s_AcceptedLicenseAgreement_006316b7
;   char[14616] g_LicenseAgreement
;   TerminatedCString s_I_accept_the_terms_of_th_00634fe8
;   TerminatedCString s_I_DO_NOT_accept_the_term_00635014
;   TerminatedCString s_AcceptedLicenseAgreement_00635047
;   TerminatedCString s_Nocturne_R_Debug_editor__00635060
;   TerminatedCString s_s_1_Play_a_mission_0063507e
;   TerminatedCString s_s_2_Enter_the_Demented_R_00635090
;   TerminatedCString s_s_4_Enter_the_Demon_Set__006350ba
;   TerminatedCString s_s_5_Enter_the_Demon_Keyf_006350d8
;   TerminatedCString s_s_6_Procedural_texture_s_00635102
;   TerminatedCString s_s_7_Enter_the_Demon_cour_0063511f
;   TerminatedCString s_A_File_Manager_00635140
;   ... and 43 more
;
; Called Functions:
;   core_course.cpp_CCourse_ctor_FUN_004424c0
;   core_course.cpp_CCourse_dtor_FUN_004424e0
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_morph.cpp_CMorph_ctor_FUN_0052b310
;   core_morph.cpp_CMorph_dtor_FUN_0052b330
;   core_morph.cpp_CMorph_editMorph_FUN_0052bcb0
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0
;   core_procedur.cpp_CProceduralTexture_showMenu_FUN_00554880
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940
;   ... and 34 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005073a0
        ;   Label: core_main.c_showDeveloperToolsMenu_FUN_005073a0
    PUSH ESI                            ; 005073a1
    PUSH EDI                            ; 005073a2
    PUSH EBP                            ; 005073a3
    SUB ESP,0x518                       ; 005073a4
    PUSH 0x2dd4130                      ; 005073aa | g_CDemonFileManagerInstance
    CALL engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 ; 005073af
        ;   XREF to: 004bccf0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 005073b4
    TEST EAX,EAX                        ; 005073b7
    JNZ 0x005073c6                      ; 005073b9
        ;   XREF to: 005073c6 (CONDITIONAL_JUMP)  ; LAB_005073c6
    ADD ESP,0x518                       ; 005073bb
    POP EBP                             ; 005073c1
    POP EDI                             ; 005073c2
    POP ESI                             ; 005073c3
    POP EBX                             ; 005073c4
    RET                                 ; 005073c5
    PUSH 0x63169a                       ; 005073c6 | = "Editor"
        ;   Label: LAB_005073c6
    PUSH 0x6316a1                       ; 005073cb | = ".\\system\\nocturne.ini"
    LEA EAX,[ESP + 0x8]                 ; 005073d0
    PUSH EAX                            ; 005073d4
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70 ; 005073d5
        ;   XREF to: 004fba70 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this_ptr, char * filename, int read_mode)
    ADD ESP,0xc                         ; 005073da
    LEA EAX,[ESP + 0x514]               ; 005073dd
    PUSH EAX                            ; 005073e4
    PUSH 0x6316b7                       ; 005073e5 | = "AcceptedLicenseAgreement"
    LEA EAX,[ESP + 0x8]                 ; 005073ea
    XOR EDX,EDX                         ; 005073ee
    PUSH EAX                            ; 005073f0
    MOV dword ptr [ESP + 0x520],EDX     ; 005073f1
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 005073f8
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 005073fd
    CMP dword ptr [ESP + 0x514],0x0     ; 00507400
    JZ 0x0050753b                       ; 00507408
        ;   XREF to: 0050753b (CONDITIONAL_JUMP)  ; LAB_0050753b
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0050740e
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0050740e
    PUSH 0x0                            ; 00507413
    PUSH 0x0                            ; 00507415
    PUSH 0x635060                       ; 00507417 | = "Nocturne(R) Debug/editor Menu"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0050741c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00507421
    PUSH 0x16                           ; 00507424
    PUSH 0x0                            ; 00507426
    PUSH 0x63507e                       ; 00507428 | = "1. Play a mission"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0050742d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00507432
    PUSH 0x21                           ; 00507435
    PUSH 0x0                            ; 00507437
    PUSH 0x635090                       ; 00507439 | = "2. Enter the Demented(R) Shape Editor..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0050743e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00507443
    PUSH 0x37                           ; 00507446
    PUSH 0x0                            ; 00507448
    PUSH 0x6350ba                       ; 0050744a | = "4. Enter the Demon Set System"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0050744f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00507454
    PUSH 0x42                           ; 00507457
    PUSH 0x0                            ; 00507459
    PUSH 0x6350d8                       ; 0050745b | = "5. Enter the Demon Keyframed Model Sy..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00507460
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00507465
    PUSH 0x4d                           ; 00507468
    PUSH 0x0                            ; 0050746a
    PUSH 0x635102                       ; 0050746c | = "6. Procedural texture system"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00507471
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00507476
    PUSH 0x58                           ; 00507479
    PUSH 0x0                            ; 0050747b
    PUSH 0x63511f                       ; 0050747d | = "7. Enter the Demon course system"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00507482
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00507487
    PUSH 0x6e                           ; 0050748a
    PUSH 0x0                            ; 0050748c
    PUSH 0x635140                       ; 0050748e | = "A. File Manager"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00507493
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00507498
    PUSH 0x79                           ; 0050749b
    PUSH 0x0                            ; 0050749d
    PUSH 0x635150                       ; 0050749f | = "B. Enter the Demon Morph System"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005074a4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005074a9
    PUSH 0x84                           ; 005074ac
    PUSH 0x0                            ; 005074b1
    PUSH 0x635170                       ; 005074b3 | = "M. Enter the Demon Mission System"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005074b8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005074bd
    PUSH 0x8f                           ; 005074c0
    PUSH 0x0                            ; 005074c5
    PUSH 0x635192                       ; 005074c7 | = "S. Enter the Demon Skeletal System"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005074cc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005074d1
    PUSH 0xbb                           ; 005074d4
    PUSH 0x0                            ; 005074d9
    PUSH 0x6351b5                       ; 005074db | = "Z. Display memory usage info"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005074e0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005074e5
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005074e8
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005074ed
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 005074f2
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 005074f7
    PUSH EAX                            ; 005074fc
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 005074fd
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 00507502
    MOV EBP,EAX                         ; 00507505
    CMP EAX,0x37                        ; 00507507
    JNC 0x005079c5                      ; 0050750a
        ;   XREF to: 005079c5 (CONDITIONAL_JUMP)  ; LAB_005079c5
    CMP EAX,0x34                        ; 00507510
    JNC 0x00507a10                      ; 00507513
        ;   XREF to: 00507a10 (CONDITIONAL_JUMP)  ; LAB_00507a10
    CMP EAX,0x31                        ; 00507519
    JNC 0x00507a33                      ; 0050751c
        ;   XREF to: 00507a33 (CONDITIONAL_JUMP)  ; LAB_00507a33
    CMP EBP,0x1b                        ; 00507522
        ;   Label: LAB_00507522
    JNZ 0x0050740e                      ; 00507525
        ;   XREF to: 0050740e (CONDITIONAL_JUMP)  ; LAB_0050740e
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0050752b
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    ADD ESP,0x518                       ; 00507530
    POP EBP                             ; 00507536
    POP EDI                             ; 00507537
    POP ESI                             ; 00507538
    POP EBX                             ; 00507539
    RET                                 ; 0050753a
    PUSH 0x6316d0                       ; 0050753b | g_LicenseAgreement
        ;   Label: LAB_0050753b
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 00507540
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    ADD ESP,0x4                         ; 00507545
    PUSH EAX                            ; 00507548
    MOV EBX,dword ptr [0x02cf1cd0]      ; 00507549 | g_EditorFont
    PUSH EBX                            ; 0050754f
    MOV EBP,EAX                         ; 00507550
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40 ; 00507552
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    MOV EBX,EAX                         ; 00507557
    ADD ESP,0x8                         ; 00507559
    MOV ESI,EAX                         ; 0050755c
    LEA EAX,[ESP + 0x4c8]               ; 0050755e
    PUSH EAX                            ; 00507565
    CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0 ; 00507566
        ;   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0050756b
    MOV EDI,dword ptr [0x02d02564]      ; 0050756e | g_ClipBottom
    PUSH EDI                            ; 00507574
    MOV EAX,[0x02d02560]                ; 00507575 | g_ClipRight
    PUSH EAX                            ; 0050757a
    MOV EDX,dword ptr [0x02d0255c]      ; 0050757b | g_ClipTop
    PUSH EDX                            ; 00507581
    CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490 ; 00507582
        ;   XREF to: 004a6490 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridWidth_FUN_004a6490()
    MOV EDI,dword ptr [0x00679394]      ; 00507587 | g_WindowWidth
    SUB EDI,EAX                         ; 0050758d
    PUSH EDI                            ; 0050758f
    LEA EAX,[ESP + 0x4d8]               ; 00507590
    PUSH EAX                            ; 00507597
    CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60 ; 00507598
        ;   XREF to: 004a5b60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, ...)
    MOV EAX,[0x00679398]                ; 0050759d | g_WindowHeight
    ADD ESP,0x14                        ; 005075a2
    MOV dword ptr [ESP + 0x4d0],EAX     ; 005075a5
    LEA EAX,[ESP + 0x300]               ; 005075ac
    ADD EBX,0x64                        ; 005075b3
    PUSH EAX                            ; 005075b6
    MOV dword ptr [ESP + 0x4d0],EBX     ; 005075b7
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0 ; 005075be
        ;   XREF to: 004a64e0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 005075c3
    LEA EAX,[ESP + 0x3e4]               ; 005075c6
    PUSH EAX                            ; 005075cd
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0 ; 005075ce
        ;   XREF to: 004a64e0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 005075d3
    XOR EDI,EDI                         ; 005075d6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005075d8
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_005075d8
    LEA EAX,[ESP + 0x4c8]               ; 005075dd
    PUSH EAX                            ; 005075e4
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 005075e5
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 005075ea
    LEA EAX,[ESP + 0x4c8]               ; 005075ed
    PUSH EAX                            ; 005075f4
    CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 ; 005075f5
        ;   XREF to: 004a5c10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 005075fa
    MOV EAX,ESI                         ; 005075fd
    SUB EAX,dword ptr [ESP + 0x4c8]     ; 005075ff
    PUSH 0x634fe8                       ; 00507606 | = "I accept the terms of the license agr..."
    ADD EAX,0xa                         ; 0050760b
    PUSH EAX                            ; 0050760e
    PUSH 0x1e                           ; 0050760f
    LEA EAX,[ESP + 0x30c]               ; 00507611
    PUSH EAX                            ; 00507618
    CALL shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550 ; 00507619
        ;   XREF to: 004a6550 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550(CEdButton * this_ptr, int x_pos, int y_pos, char * button_text)
    ADD ESP,0x10                        ; 0050761e
    MOV EAX,ESI                         ; 00507621
    SUB EAX,dword ptr [ESP + 0x4c8]     ; 00507623
    PUSH 0x635014                       ; 0050762a | = "I DO NOT accept the terms of the lice..."
    ADD EAX,0x28                        ; 0050762f
    PUSH EAX                            ; 00507632
    PUSH 0x1e                           ; 00507633
    LEA EAX,[ESP + 0x3f0]               ; 00507635
    PUSH EAX                            ; 0050763c
    CALL shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550 ; 0050763d
        ;   XREF to: 004a6550 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550(CEdButton * this_ptr, int x_pos, int y_pos, char * button_text)
    ADD ESP,0x10                        ; 00507642
    LEA EAX,[ESP + 0x300]               ; 00507645
    PUSH EAX                            ; 0050764c
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830 ; 0050764d
        ;   XREF to: 004a6830 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00507652
    TEST EAX,EAX                        ; 00507655
    JZ 0x005076ad                       ; 00507657
        ;   XREF to: 005076ad (CONDITIONAL_JUMP)  ; LAB_005076ad
    PUSH 0x1                            ; 00507659
    PUSH 0x635047                       ; 0050765b | = "AcceptedLicenseAgreement"
    LEA EAX,[ESP + 0x8]                 ; 00507660
    PUSH EAX                            ; 00507664
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 00507665
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 0050766a
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0050766d
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x0                            ; 00507672
    LEA EAX,[ESP + 0x3e8]               ; 00507674
    PUSH EAX                            ; 0050767b
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 0050767c
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507681
    PUSH 0x0                            ; 00507684
    LEA EAX,[ESP + 0x304]               ; 00507686
    PUSH EAX                            ; 0050768d
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 0050768e
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507693
    PUSH 0x0                            ; 00507696
    LEA EAX,[ESP + 0x4cc]               ; 00507698
    PUSH EAX                            ; 0050769f
    CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20 ; 005076a0
        ;   XREF to: 004a5b20 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20(CEdScrollBar * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005076a5
    JMP 0x0050740e                      ; 005076a8
        ;   XREF to: 0050740e (UNCONDITIONAL_JUMP)  ; LAB_0050740e
    LEA EAX,[ESP + 0x3e4]               ; 005076ad
        ;   Label: LAB_005076ad
    PUSH EAX                            ; 005076b4
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830 ; 005076b5
        ;   XREF to: 004a6830 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 005076ba
    TEST EAX,EAX                        ; 005076bd
    JNZ 0x00507732                      ; 005076bf
        ;   XREF to: 00507732 (CONDITIONAL_JUMP)  ; LAB_00507732
    PUSH -0x1                           ; 005076c1
    MOV EAX,dword ptr [ESP + 0x4cc]     ; 005076c3
    PUSH 0xff                           ; 005076ca
    NEG EAX                             ; 005076cf
    PUSH EAX                            ; 005076d1
    PUSH 0x1e                           ; 005076d2
    PUSH EBP                            ; 005076d4
    MOV EAX,[0x02cf1cd0]                ; 005076d5 | g_EditorFont
    PUSH EAX                            ; 005076da
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 005076db
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 005076e0
    PUSH EDI                            ; 005076e3
    LEA EAX,[ESP + 0x304]               ; 005076e4
    PUSH EAX                            ; 005076eb
    CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 ; 005076ec
        ;   XREF to: 004a65e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_paint_FUN_004a65e0(CEdButton * this_ptr, int draw_border_flag)
    ADD ESP,0x8                         ; 005076f1
    PUSH EDI                            ; 005076f4
    LEA EAX,[ESP + 0x3e8]               ; 005076f5
    PUSH EAX                            ; 005076fc
    CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 ; 005076fd
        ;   XREF to: 004a65e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_paint_FUN_004a65e0(CEdButton * this_ptr, int draw_border_flag)
    ADD ESP,0x8                         ; 00507702
    PUSH EDI                            ; 00507705
    MOV EDX,dword ptr [0x00678a60]      ; 00507706 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0050770c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 0050770d
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 00507712
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00507715
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH 0x1                            ; 0050771a
    MOV EAX,[0x0067cf44]                ; 0050771c | g_CKeysPtr
    PUSH EAX                            ; 00507721 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00507722 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00507724
    ADD ESP,0x8                         ; 00507727
    TEST EAX,EAX                        ; 0050772a
    JZ 0x005075d8                       ; 0050772c
        ;   XREF to: 005075d8 (CONDITIONAL_JUMP)  ; LAB_005075d8
    PUSH 0x0                            ; 00507732
        ;   Label: LAB_00507732
    LEA EAX,[ESP + 0x3e8]               ; 00507734
    PUSH EAX                            ; 0050773b
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 0050773c
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507741
    PUSH 0x0                            ; 00507744
    LEA EAX,[ESP + 0x304]               ; 00507746
    PUSH EAX                            ; 0050774d
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 0050774e
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507753
    PUSH 0x0                            ; 00507756
    LEA EAX,[ESP + 0x4cc]               ; 00507758
    PUSH EAX                            ; 0050775f
    CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20 ; 00507760
        ;   XREF to: 004a5b20 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20(CEdScrollBar * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507765
    ADD ESP,0x518                       ; 00507768
    POP EBP                             ; 0050776e
    POP EDI                             ; 0050776f
    POP ESI                             ; 00507770
    POP EBX                             ; 00507771
    RET                                 ; 00507772
    PUSH 0x0                            ; 00507773
        ;   Label: LAB_00507773
    MOV EAX,[0x0067b654]                ; 00507775 | g_CGameInstance | g_CGamePtr
    PUSH EAX                            ; 0050777a | g_CGameInstance
    CALL core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 ; 0050777b
        ;   XREF to: 004e1cb0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame * this_ptr, int unknown)
    ADD ESP,0x8                         ; 00507780
    JMP 0x00507522                      ; 00507783
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    CALL shape_design.c_showShapeEditorMenu_FUN_0046f290 ; 00507788
        ;   XREF to: 0046f290 (UNCONDITIONAL_CALL)  ; void shape_design.c_showShapeEditorMenu_FUN_0046f290()
        ;   Label: LAB_00507788
    JMP 0x00507522                      ; 0050778d
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    MOV EDI,dword ptr [0x006810c8]      ; 00507792 | g_CDemonSetPtr
        ;   Label: LAB_00507792
    PUSH EDI                            ; 00507798 | g_CDemonSetInstance
    CALL core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 ; 00507799
        ;   XREF to: 00584940 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0050779e
    JMP 0x00507522                      ; 005077a1
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    PUSH 0x274                          ; 005077a6
        ;   Label: LAB_005077a6
    PUSH 0x6351d2                       ; 005077ab | = "..\\core\\main.c"
    PUSH 0x56d8                         ; 005077b0
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005077b5
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005077ba
    TEST EAX,EAX                        ; 005077bd
    JZ 0x005077ca                       ; 005077bf
        ;   XREF to: 005077ca (CONDITIONAL_JUMP)  ; LAB_005077ca
    PUSH EAX                            ; 005077c1
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0 ; 005077c2
        ;   XREF to: 00476cf0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 005077c7
    MOV EBX,EAX                         ; 005077ca
        ;   Label: LAB_005077ca
    TEST EAX,EAX                        ; 005077cc
    JNZ 0x005077f2                      ; 005077ce
        ;   XREF to: 005077f2 (CONDITIONAL_JUMP)  ; LAB_005077f2
    MOV EAX,0x6351e1                    ; 005077d0 | = "..\\core\\main.c"
    MOV EDX,0x275                       ; 005077d5
    PUSH 0x6351f0                       ; 005077da | = "Out of memory"
    MOV [0x02f0ca48],EAX                ; 005077df | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005077e4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005077ea
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005077ef
    PUSH EBX                            ; 005077f2
        ;   Label: LAB_005077f2
    MOV ESI,0x277                       ; 005077f3
    CALL core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 ; 005077f8
        ;   XREF to: 0047cbc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(CKeyFramedModel * this_ptr)
    MOV ECX,0x6351fe                    ; 005077fd | = "..\\core\\main.c"
    ADD ESP,0x4                         ; 00507802
    MOV dword ptr [0x02f0d944],ESI      ; 00507805 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 0050780b | g_CurrentDebugFilename
    TEST EBX,EBX                        ; 00507811
    JZ 0x00507522                       ; 00507813
        ;   XREF to: 00507522 (CONDITIONAL_JUMP)  ; LAB_00507522
    PUSH 0x0                            ; 00507819
    PUSH EBX                            ; 0050781b
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90 ; 0050781c
        ;   XREF to: 00476d90 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507821
    PUSH EAX                            ; 00507824
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00507825
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0050782a
    JMP 0x00507522                      ; 0050782d
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    LEA EAX,[ESP + 0x4fc]               ; 00507832
        ;   Label: LAB_00507832
    PUSH EAX                            ; 00507839
    CALL core_course.cpp_CCourse_ctor_FUN_004424c0 ; 0050783a
        ;   XREF to: 004424c0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_004424c0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 0050783f
    LEA EAX,[ESP + 0x4fc]               ; 00507842
    PUSH EAX                            ; 00507849
    CALL core_course.cpp_CCourse_showEditorMenu_FUN_00443040 ; 0050784a
        ;   XREF to: 00443040 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_showEditorMenu_FUN_00443040(CCourse * this_ptr)
    ADD ESP,0x4                         ; 0050784f
    PUSH 0x0                            ; 00507852
    LEA EAX,[ESP + 0x500]               ; 00507854
    PUSH EAX                            ; 0050785b
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 0050785c
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507861
    JMP 0x00507522                      ; 00507864
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    PUSH 0x2dd4130                      ; 00507869 | g_CDemonFileManagerInstance
        ;   Label: LAB_00507869
    CALL core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 ; 0050786e
        ;   XREF to: 004be270 (UNCONDITIONAL_CALL)  ; void core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270(CDemonFileManager * this_ptr)
    ADD ESP,0x4                         ; 00507873
    JMP 0x00507522                      ; 00507876
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    PUSH 0x292                          ; 0050787b
        ;   Label: LAB_0050787b
    PUSH 0x63520d                       ; 00507880 | = "..\\core\\main.c"
    PUSH 0xc2c                          ; 00507885
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0050788a
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0050788f
    TEST EAX,EAX                        ; 00507892
    JNZ 0x005078e0                      ; 00507894
        ;   XREF to: 005078e0 (CONDITIONAL_JUMP)  ; LAB_005078e0
    MOV EBX,EAX                         ; 00507896
        ;   Label: LAB_00507896
    TEST EBX,EBX                        ; 00507898
    JZ 0x00507522                       ; 0050789a
        ;   XREF to: 00507522 (CONDITIONAL_JUMP)  ; LAB_00507522
    PUSH EBX                            ; 005078a0
    MOV ESI,0x295                       ; 005078a1
    CALL core_morph.cpp_CMorph_editMorph_FUN_0052bcb0 ; 005078a6
        ;   XREF to: 0052bcb0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_editMorph_FUN_0052bcb0(CMorph * morph)
    MOV ECX,0x63521c                    ; 005078ab | = "..\\core\\main.c"
    ADD ESP,0x4                         ; 005078b0
    MOV dword ptr [0x02f0d944],ESI      ; 005078b3 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 005078b9 | g_CurrentDebugFilename
    TEST EBX,EBX                        ; 005078bf
    JZ 0x00507522                       ; 005078c1
        ;   XREF to: 00507522 (CONDITIONAL_JUMP)  ; LAB_00507522
    PUSH 0x0                            ; 005078c7
    PUSH EBX                            ; 005078c9
    CALL core_morph.cpp_CMorph_dtor_FUN_0052b330 ; 005078ca
        ;   XREF to: 0052b330 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_0052b330(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005078cf
    PUSH EAX                            ; 005078d2
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005078d3
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005078d8
    JMP 0x00507522                      ; 005078db
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    PUSH EAX                            ; 005078e0
        ;   Label: LAB_005078e0
    CALL core_morph.cpp_CMorph_ctor_FUN_0052b310 ; 005078e1
        ;   XREF to: 0052b310 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_0052b310(CMorph * this_ptr)
    ADD ESP,0x4                         ; 005078e6
    JMP 0x00507896                      ; 005078e9
        ;   XREF to: 00507896 (UNCONDITIONAL_JUMP)  ; LAB_00507896
    MOV EDX,dword ptr [0x0067d550]      ; 005078eb | g_CDemonMissionInstance | g_CDemonMissionPtr
        ;   Label: LAB_005078eb
    PUSH EDX                            ; 005078f1 | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 ; 005078f2
        ;   XREF to: 005381e0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 005078f7
    JMP 0x00507522                      ; 005078fa
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    CALL core_skeledit.cpp_viewModel_FUN_00598fc0 ; 005078ff
        ;   XREF to: 00598fc0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_viewModel_FUN_00598fc0()
        ;   Label: LAB_005078ff
    JMP 0x00507522                      ; 00507904
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    LEA EAX,[ESP + 0x200]               ; 00507909
        ;   Label: LAB_00507909
    PUSH EAX                            ; 00507910
    MOV ECX,dword ptr [0x00678a60]      ; 00507911 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00507917 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590 ; 00507918
        ;   XREF to: 004a2590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(CEditorTools * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 0050791d
    PUSH 0x2c0                          ; 00507920
    PUSH 0x63522b                       ; 00507925 | = "..\\core\\main.c"
    PUSH 0x63523a                       ; 0050792a | = "wt"
    LEA EDI,[ESP + 0x514]               ; 0050792f
    PUSH 0x0                            ; 00507936
    LEA EAX,[ESP + 0x518]               ; 00507938
    MOV ESI,0x67d060                    ; 0050793f | = "memdump.txt"
    PUSH EAX                            ; 00507944
    MOVSD ES:EDI,ESI                    ; 00507945 | = "memdump.txt"
    MOVSD ES:EDI,ESI                    ; 00507946 | s_ump.txt_0067d064
    MOVSD ES:EDI,ESI                    ; 00507947 | s_txt_0067d068 | DAT_00747874
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00507948
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0050794d
    MOV EBX,EAX                         ; 00507950
    TEST EAX,EAX                        ; 00507952
    JNZ 0x00507981                      ; 00507954
        ;   XREF to: 00507981 (CONDITIONAL_JUMP)  ; LAB_00507981
    LEA EAX,[ESP + 0x508]               ; 00507956
    PUSH EAX                            ; 0050795d
    MOV ESI,0x63523d                    ; 0050795e | = "..\\core\\main.c"
    MOV EDI,0x2c1                       ; 00507963
    PUSH 0x63524c                       ; 00507968 | = "Can't createpen %s"
    MOV dword ptr [0x02f0ca48],ESI      ; 0050796d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00507973 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00507979
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0050797e
    PUSH EBX                            ; 00507981
        ;   Label: LAB_00507981
    CALL shape_memdbg.cpp_debugMemdump_FUN_0050f6c0 ; 00507982
        ;   XREF to: 0050f6c0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugMemdump_FUN_0050f6c0(_FILE * output_file)
    ADD ESP,0x4                         ; 00507987
    PUSH 0x2c3                          ; 0050798a
    PUSH 0x63525f                       ; 0050798f | = "..\\core\\main.c"
    PUSH EBX                            ; 00507994
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00507995
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0050799a
    LEA EAX,[ESP + 0x508]               ; 0050799d
    PUSH EAX                            ; 005079a4
    LEA EAX,[ESP + 0x204]               ; 005079a5
    PUSH EAX                            ; 005079ac
    PUSH 0x63526e                       ; 005079ad | = "%s\nAlso dumped memory usage to %s"
    MOV EAX,[0x00678a60]                ; 005079b2 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 005079b7 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 005079b8
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005079bd
    JMP 0x00507522                      ; 005079c0
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    JBE 0x00507832                      ; 005079c5
        ;   XREF to: 00507832 (CONDITIONAL_JUMP)  ; LAB_00507832
        ;   Label: LAB_005079c5
    CMP EAX,0x4d                        ; 005079cb
    JNC 0x005079ed                      ; 005079ce
        ;   XREF to: 005079ed (CONDITIONAL_JUMP)  ; LAB_005079ed
    CMP EAX,0x41                        ; 005079d0
    JC 0x00507522                       ; 005079d3
        ;   XREF to: 00507522 (CONDITIONAL_JUMP)  ; LAB_00507522
    JBE 0x00507869                      ; 005079d9
        ;   XREF to: 00507869 (CONDITIONAL_JUMP)  ; LAB_00507869
    CMP EAX,0x42                        ; 005079df
    JZ 0x0050787b                       ; 005079e2
        ;   XREF to: 0050787b (CONDITIONAL_JUMP)  ; LAB_0050787b
    JMP 0x00507522                      ; 005079e8
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    JBE 0x005078eb                      ; 005079ed
        ;   XREF to: 005078eb (CONDITIONAL_JUMP)  ; LAB_005078eb
        ;   Label: LAB_005079ed
    CMP EAX,0x53                        ; 005079f3
    JC 0x00507522                       ; 005079f6
        ;   XREF to: 00507522 (CONDITIONAL_JUMP)  ; LAB_00507522
    JBE 0x005078ff                      ; 005079fc
        ;   XREF to: 005078ff (CONDITIONAL_JUMP)  ; LAB_005078ff
    CMP EAX,0x5a                        ; 00507a02
    JZ 0x00507909                       ; 00507a05
        ;   XREF to: 00507909 (CONDITIONAL_JUMP)  ; LAB_00507909
    JMP 0x00507522                      ; 00507a0b
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    JBE 0x00507792                      ; 00507a10
        ;   XREF to: 00507792 (CONDITIONAL_JUMP)  ; LAB_00507792
        ;   Label: LAB_00507a10
    CMP EAX,0x35                        ; 00507a16
    JBE 0x005077a6                      ; 00507a19
        ;   XREF to: 005077a6 (CONDITIONAL_JUMP)  ; LAB_005077a6
    MOV EDI,dword ptr [0x00680cf8]      ; 00507a1f | g_CProceduralTexturePtr
    PUSH EDI                            ; 00507a25 | g_CProceduralTextureInstance
    CALL core_procedur.cpp_CProceduralTexture_showMenu_FUN_00554880 ; 00507a26
        ;   XREF to: 00554880 (UNCONDITIONAL_CALL)  ; void core_procedur.cpp_CProceduralTexture_showMenu_FUN_00554880(CProceduralTexture * this_ptr)
    ADD ESP,0x4                         ; 00507a2b
    JMP 0x00507522                      ; 00507a2e
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522
    JBE 0x00507773                      ; 00507a33
        ;   XREF to: 00507773 (CONDITIONAL_JUMP)  ; LAB_00507773
        ;   Label: LAB_00507a33
    CMP EAX,0x32                        ; 00507a39
    JZ 0x00507788                       ; 00507a3c
        ;   XREF to: 00507788 (CONDITIONAL_JUMP)  ; LAB_00507788
    JMP 0x00507522                      ; 00507a42
        ;   XREF to: 00507522 (UNCONDITIONAL_JUMP)  ; LAB_00507522

