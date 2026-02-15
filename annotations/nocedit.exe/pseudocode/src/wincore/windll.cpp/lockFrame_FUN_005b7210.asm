; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_lockFrame_FUN_005b7210(void)
;
;
; XREF[12]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 at 004511ce
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da42c
;   core_game.cpp_CGame_showFullscreenBitmap_FUN_004e2910 at 004e2ade
;   core_setedit.cpp_CDemonSet_FUN_0057a940 at 0057aae0
;   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 at 00464c00
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 00464f53
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f54d
;   shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410 at 0049e450
;   shape_edittool.cpp_CEditorTools_restoreScreen_FUN_0049e4d0 at 0049e510
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 at 004a0e10
;   ... and 2 more
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_UseExternalRenderer
;   APIDLL_lockFrame* g_APIDLL_lockFrame
;   int g_ExternalBitsPerPixel
;   int g_SavedBitsPerPixel
;   int g_ExternalFrameLocked
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7210 | g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_lockFrame_FUN_005b7210
    JNZ 0x005b721c                      ; 005b7217
        ;   XREF to: 005b721c (CONDITIONAL_JUMP)  ; LAB_005b721c
    XOR EAX,EAX                         ; 005b7219
        ;   Label: LAB_005b7219
    RET                                 ; 005b721b
        ;   Label: LAB_005b721b
    CALL dword ptr [0x03f6b8ac]         ; 005b721c | g_APIDLL_lockFrame
        ;   Label: LAB_005b721c
    TEST EAX,EAX                        ; 005b7222
    JZ 0x005b721b                       ; 005b7224
        ;   XREF to: 005b721b (CONDITIONAL_JUMP)  ; LAB_005b721b
    MOV EAX,[0x0067939c]                ; 005b7226 | g_BitsPerPixel
    MOV ECX,0x1                         ; 005b722b
    MOV [0x03f6b998],EAX                ; 005b7230 | g_SavedBitsPerPixel
    MOV EAX,[0x03f6b990]                ; 005b7235 | g_ExternalBitsPerPixel
    MOV dword ptr [0x03f6b99c],ECX      ; 005b723a | g_ExternalFrameLocked
    MOV [0x0067939c],EAX                ; 005b7240 | g_BitsPerPixel
    MOV EAX,ECX                         ; 005b7245
    RET                                 ; 005b7247

