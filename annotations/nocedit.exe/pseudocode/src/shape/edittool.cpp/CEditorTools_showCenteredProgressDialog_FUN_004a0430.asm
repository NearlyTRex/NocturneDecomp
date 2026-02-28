; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools *this_ptr,char *message_text)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message_text
;
; XREF[25]:
;   core_course.cpp_CCourse_importBON_FUN_00442bc0 at 00442cba
;   core_course.cpp_CCourse_importCRS_FUN_00442d70 at 00442e2c
;   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 at 0047b261
;   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 at 0047ae80
;   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450 at 00494467
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 at 004955c5
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494ae7
;   core_msnedit.cpp_CDemonMission_playSound_FUN_0053eb40 at 0053ebbe
;   core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00 at 0053ffa0
;   core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0 at 00576e9b
;   ... and 15 more
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   int g_WindowWidth = 0x140
;   CBitFont* g_EditorFont
;   int g_WindowStackCount
;   undefined4 DAT_02cf1ebc
;   undefined4 DAT_02cf1ec0
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0430
        ;   Label: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
    PUSH ESI                            ; 004a0431
    PUSH EDI                            ; 004a0432
    PUSH EBP                            ; 004a0433
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a0434
    CMP dword ptr [0x02cf1cd0],0x0      ; 004a0438 | g_EditorFont
    JNZ 0x004a0464                      ; 004a043f
        ;   XREF to: 004a0464 (CONDITIONAL_JUMP)  ; LAB_004a0464
    MOV ECX,0x622eae                    ; 004a0441 | = "..\\shape\\edittool.cpp"
    MOV EBX,0x8d                        ; 004a0446
    PUSH 0x622ec4                       ; 004a044b | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a0450 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004a0456 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a045c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a0461
    MOV EAX,[0x02cf1cd0]                ; 004a0464 | g_EditorFont
        ;   Label: LAB_004a0464
    PUSH 0x6a                           ; 004a0469
    MOV EBX,dword ptr [EAX + 0x3168]    ; 004a046b
    PUSH EAX                            ; 004a0471
    MOV dword ptr [0x02cf2668],EBX      ; 004a0472 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004a0478
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    MOV [0x02cf266c],EAX                ; 004a047d | g_FontCharacterWidth
    MOV EAX,[0x00679394]                ; 004a0482 | g_WindowWidth
    MOV EDX,EAX                         ; 004a0487
    SAR EDX,0x1f                        ; 004a0489
    SUB EAX,EDX                         ; 004a048c
    SAR EAX,0x1                         ; 004a048e
    ADD ESP,0x8                         ; 004a0490
    MOV EBX,EAX                         ; 004a0493
    TEST ESI,ESI                        ; 004a0495
    JNZ 0x004a0502                      ; 004a0497
        ;   XREF to: 004a0502 (CONDITIONAL_JUMP)  ; LAB_004a0502
    PUSH 0x0                            ; 004a0499
        ;   Label: LAB_004a0499
    PUSH ESI                            ; 004a049b
    MOV ESI,dword ptr [0x02cf266c]      ; 004a049c | g_FontCharacterWidth
    LEA EAX,[ESI*0x4 + 0x0]             ; 004a04a2
    SUB EAX,ESI                         ; 004a04a9
    ADD EAX,EAX                         ; 004a04ab
    PUSH EAX                            ; 004a04ad
    PUSH EBX                            ; 004a04ae
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a04af
    PUSH EAX                            ; 004a04b3
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 ; 004a04b4
        ;   XREF to: 004a0890 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 004a04b9
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004a04bc
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EBX,dword ptr [0x02cf1cdc]      ; 004a04c1 | g_WindowStackCount
    DEC EBX                             ; 004a04c7
    MOV ESI,EAX                         ; 004a04c8
    MOV EAX,EBX                         ; 004a04ca
    SHL EAX,0x4                         ; 004a04cc
    SUB EAX,EBX                         ; 004a04cf
    PUSH 0x3f800000                     ; 004a04d1
    SHL EAX,0x2                         ; 004a04d6
    MOV EDX,0xffffffff                  ; 004a04d9
    ADD EAX,EBX                         ; 004a04de
    PUSH 0x0                            ; 004a04e0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a04e2
    MOV dword ptr [EAX*0x8 + 0x2cf1ebc],ESI ; 004a04e6 | DAT_02cf1ebc
    PUSH ECX                            ; 004a04ed
    MOV dword ptr [EAX*0x8 + 0x2cf1ec0],EDX ; 004a04ee | DAT_02cf1ec0
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 004a04f5
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 004a04fa
    POP EBP                             ; 004a04fd
    POP EDI                             ; 004a04fe
    POP ESI                             ; 004a04ff
    POP EBX                             ; 004a0500
    RET                                 ; 004a0501
    PUSH ESI                            ; 004a0502
        ;   Label: LAB_004a0502
    MOV EDI,dword ptr [0x02cf1cd0]      ; 004a0503 | g_EditorFont
    PUSH EDI                            ; 004a0509
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004a050a
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004a050f
    CMP EBX,EAX                         ; 004a0512
    JGE 0x004a0499                      ; 004a0514
        ;   XREF to: 004a0499 (CONDITIONAL_JUMP)  ; LAB_004a0499
    PUSH ESI                            ; 004a0516
    MOV EBP,dword ptr [0x02cf1cd0]      ; 004a0517 | g_EditorFont
    PUSH EBP                            ; 004a051d
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004a051e
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004a0523
    MOV EBX,EAX                         ; 004a0526
    JMP 0x004a0499                      ; 004a0528
        ;   XREF to: 004a0499 (UNCONDITIONAL_JUMP)  ; LAB_004a0499

