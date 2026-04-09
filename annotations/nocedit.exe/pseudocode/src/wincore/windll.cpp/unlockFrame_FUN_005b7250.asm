; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
;
; Parameters:
; int              Stack[0x4]:4   clear_lock_flag
;
; XREF[12]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 at 00451233
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004dab10
;   core_game.cpp_CGame_showFullscreenBitmap_FUN_004e2910 at 004e2aea
;   core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940 at 0057ac97
;   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 at 00464bdf
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 00464e7e
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 00460731
;   shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410 at 0049e4af
;   shape_edittool.cpp_CEditorTools_restoreScreen_FUN_0049e4d0 at 0049e56f
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 at 004a0e6f
;   ... and 2 more
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_UseExternalRenderer
;   APIDLL_unlockFrame* g_APIDLL_unlockFrame
;   int g_SavedBitsPerPixel
;   int g_ExternalFrameLocked
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7250 | g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_unlockFrame_FUN_005b7250
    JZ 0x005b7219                       ; 005b7257
        ;   XREF to: 005b7219 (CONDITIONAL_JUMP)  ; LAB_005b7219
    MOV EAX,[0x03f6b998]                ; 005b7259 | g_SavedBitsPerPixel
    MOV ECX,dword ptr [ESP + 0x4]       ; 005b725e
    MOV [0x0067939c],EAX                ; 005b7262 | g_BitsPerPixel
    TEST ECX,ECX                        ; 005b7267
    JZ 0x005b7275                       ; 005b7269
        ;   XREF to: 005b7275 (CONDITIONAL_JUMP)  ; LAB_005b7275
    PUSH EBX                            ; 005b726b
    XOR EBX,EBX                         ; 005b726c
    MOV dword ptr [0x03f6b99c],EBX      ; 005b726e | g_ExternalFrameLocked
    POP EBX                             ; 005b7274
    CALL dword ptr [0x03f6b8b0]         ; 005b7275 | g_APIDLL_unlockFrame
        ;   Label: LAB_005b7275
    RET                                 ; 005b727b

