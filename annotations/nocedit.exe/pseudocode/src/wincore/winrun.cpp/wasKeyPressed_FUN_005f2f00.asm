; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(void)
;
;
; XREF[16]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d63a
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004ddb9f
;   core_game.cpp_CGame_showFullscreenBitmap_FUN_004e2910 at 004e2d01
;   core_script.cpp_CScript_processEditorInput_FUN_00565130 at 00565771
;   core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 at 0057e21f
;   core_setedit.cpp_CDemonSet_rebuildAllFogAndPVS_FUN_005805a0 at 005806bc
;   core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0 at 0057ea56
;   core_setedit.cpp_CDemonSet_showFogEditor_FUN_00580730 at 00580ae5
;   core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0 at 0057c99c
;   shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160 at 00447434
;   ... and 6 more
;
; Referenced Globals:
;   int g_InputReadIndex
;   int g_InputWriteIndex
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x03f96c1c]      ; 005f2f00 | g_InputWriteIndex
        ;   Label: wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
    MOV EAX,[0x03f96c18]                ; 005f2f06 | g_InputReadIndex
    CMP EAX,EDX                         ; 005f2f0b
    SETNZ AL                            ; 005f2f0d
    AND EAX,0xff                        ; 005f2f10
    RET                                 ; 005f2f15

