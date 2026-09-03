; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_setRenderAlpha_FUN_00408370(int alpha_color_value)
;
; Parameters:
; int              Stack[0x4]:4   alpha_color_value
;
; XREF[28]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_004110f0 at 00411185
;   core_game.cpp_CGame_displayActStats_FUN_004a6680 at 004a6950
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6dc7
;   core_game.cpp_CGame_renderOverlay_FUN_0049ab50 at 0049ac25
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a6fd4
;   core_game.cpp_CGame_showCustomizableKeys_FUN_0049b4e0 at 0049b4fc
;   core_inv.cpp_CInventory_renderAllItems_FUN_004c2470 at 004c2cc0
;   core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440 at 004cf50d
;   core_script.cpp_CScript_renderSubtitles_FUN_004fe770 at 004fe911
;   engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_00407880 at 004078e0
;   ... and 18 more
;
; Referenced Globals:
;   int INT_005acab4 = 0xffffff
;   int g_CurrentAlphaValue = 0xff
;   undefined4 DAT_006b0284
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00408370
        ;   Label: engine_3d.c_setRenderAlpha_FUN_00408370
    SAR EDX,0x8                         ; 00408374
    TEST EDX,EDX                        ; 00408377
    JL 0x004083b1                       ; 00408379
        ;   XREF to: 004083b1 (CONDITIONAL_JUMP)  ; LAB_004083b1
    CMP EDX,0xff                        ; 0040837b
    JLE 0x00408388                      ; 00408381
        ;   XREF to: 00408388 (CONDITIONAL_JUMP)  ; LAB_00408388
    MOV EDX,0xff                        ; 00408383
    MOV EAX,EDX                         ; 00408388
        ;   Label: LAB_00408388
    MOV ECX,EDX                         ; 0040838a
    SHL EAX,0x8                         ; 0040838c
    OR ECX,EAX                          ; 0040838f
    MOV EAX,EDX                         ; 00408391
    SHL EAX,0x10                        ; 00408393
    OR ECX,EAX                          ; 00408396
    MOV EAX,ECX                         ; 00408398
    XOR EAX,0xffffff                    ; 0040839a
    MOV dword ptr [0x005acab4],ECX      ; 0040839f | INT_005acab4
    MOV [0x006b0284],EAX                ; 004083a5 | DAT_006b0284
    MOV dword ptr [0x005b763c],EDX      ; 004083aa | g_CurrentAlphaValue
    RET                                 ; 004083b0
    XOR EDX,EDX                         ; 004083b1
        ;   Label: LAB_004083b1
    JMP 0x00408388                      ; 004083b3
        ;   XREF to: 00408388 (UNCONDITIONAL_JUMP)  ; LAB_00408388

