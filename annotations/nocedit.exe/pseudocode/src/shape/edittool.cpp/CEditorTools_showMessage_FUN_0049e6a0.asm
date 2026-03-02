; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools *this_ptr,char *format,...)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; va_list_t        Stack[-0x8]:4  local_8
;
; XREF[35]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1be2
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004de3fb
;   core_game.cpp_setupMovieRecording_FUN_004d7730 at 004d77f5
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005079b8
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_00524c20 at 00524d83
;   core_msnedit.cpp_CDemonMission_deleteMultipleActorsMenu_FUN_0053df90 at 0053e166
;   core_msnedit.cpp_CDemonMission_editActorAtIndex_FUN_0053b030 at 0053b4fe
;   core_msnedit.cpp_CDemonMission_editActorDetailed_FUN_0053b510 at 0053b9de
;   core_msnedit.cpp_CDemonMission_enemyRandomizer_FUN_005379e0 at 00537c5d
;   core_msnedit.cpp_CDemonMission_hideActorsMenu_FUN_0053dcf0 at 0053deaa
;   ... and 25 more
;
; Referenced Globals:
;   TerminatedCString s_Message_00623008
;   char[512] g_MessageFormatBuffer
;   int g_WindowFontColor
;
; Called Functions:
;   crt_stdio.c__vsprintf_FUN_005fdba8
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e6a0
        ;   Label: shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
    SUB ESP,0x4                         ; 0049e6a1
    LEA EAX,[ESP + 0x14]                ; 0049e6a4
    MOV dword ptr [ESP],EAX             ; 0049e6a8
    MOV EAX,ESP                         ; 0049e6ab
    PUSH EAX                            ; 0049e6ad
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049e6ae
    PUSH EDX                            ; 0049e6b2
    PUSH 0x2ceed30                      ; 0049e6b3 | g_MessageFormatBuffer
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 0049e6b8
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0049e6bd
    MOV EBX,dword ptr [0x02cf2a8c]      ; 0049e6c0 | g_WindowFontColor
    PUSH EBX                            ; 0049e6c6
    PUSH 0x2ceed30                      ; 0049e6c7 | g_MessageFormatBuffer
    XOR ECX,ECX                         ; 0049e6cc
    PUSH 0x623008                       ; 0049e6ce | = "Message"
    MOV dword ptr [ESP + 0xc],ECX       ; 0049e6d3
    CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 ; 0049e6d7
        ;   XREF to: 0049e130 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130(char * title, char * message, int color)
    ADD ESP,0xc                         ; 0049e6dc
    ADD ESP,0x4                         ; 0049e6df
    POP EBX                             ; 0049e6e2
    RET                                 ; 0049e6e3

