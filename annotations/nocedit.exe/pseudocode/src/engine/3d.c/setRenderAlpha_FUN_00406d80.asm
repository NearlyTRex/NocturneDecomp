; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
;
; Parameters:
; int              Stack[0x4]:4   alpha_color_value
;
; XREF[26]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413b75
;   core_game.cpp_CGame_displayActStats_FUN_004e3800 at 004e3ad0
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3f47
;   core_game.cpp_CGame_renderOverlay_FUN_004d8040 at 004d8431
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e4163
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 at 004d89ec
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 00500ee0
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00510000 at 00510206
;   core_script.cpp_CScript_renderSubtitles_FUN_00559b20 at 00559cc1
;   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0 at 004060e7
;   ... and 16 more
;
; Referenced Globals:
;   int g_CurrentRenderColor = 0xffffff
;   int g_CurrentAlphaValue = 0xff
;   int g_CurrentInvertedColor
;   undefined4 g_LightBufferPool[13][93687]
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00406d80
        ;   Label: engine_3d.c_setRenderAlpha_FUN_00406d80
    SAR EDX,0x8                         ; 00406d84
    TEST EDX,EDX                        ; 00406d87
    JL 0x00406dc1                       ; 00406d89
        ;   XREF to: 00406dc1 (CONDITIONAL_JUMP)  ; LAB_00406dc1
    CMP EDX,0xff                        ; 00406d8b
    JLE 0x00406d98                      ; 00406d91
        ;   XREF to: 00406d98 (CONDITIONAL_JUMP)  ; LAB_00406d98
    MOV EDX,0xff                        ; 00406d93
    MOV EAX,EDX                         ; 00406d98
        ;   Label: LAB_00406d98
    MOV ECX,EDX                         ; 00406d9a
    SHL EAX,0x8                         ; 00406d9c
    OR ECX,EAX                          ; 00406d9f
    MOV EAX,EDX                         ; 00406da1
    SHL EAX,0x10                        ; 00406da3
    OR ECX,EAX                          ; 00406da6
    MOV EAX,ECX                         ; 00406da8
    XOR EAX,0xffffff                    ; 00406daa | g_LightBufferPool[13][93687]
    MOV dword ptr [0x0066df84],ECX      ; 00406daf | g_CurrentRenderColor
    MOV [0x00772a80],EAX                ; 00406db5 | g_CurrentInvertedColor
    MOV dword ptr [0x006793b4],EDX      ; 00406dba | g_CurrentAlphaValue
    RET                                 ; 00406dc0
    XOR EDX,EDX                         ; 00406dc1
        ;   Label: LAB_00406dc1
    JMP 0x00406d98                      ; 00406dc3
        ;   XREF to: 00406d98 (UNCONDITIONAL_JUMP)  ; LAB_00406d98

