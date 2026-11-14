; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
;
; Parameters:
; int              Stack[0x4]:4   alpha_color_value
;
; XREF[26]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00410670 at 00410705
;   core_game.cpp_CGame_finishAct_FUN_004bdfb0 at 004be364
;   core_game.cpp_CGame_renderOverlay_FUN_004b32c0 at 004b3395
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be592
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004b3c50 at 004b3c6c
;   core_game.cpp_FUN_004bdc20 at 004bdef0
;   core_inv.cpp_FUN_004dd9b0 at 004de2ee
;   core_menu.cpp_FUN_004eb0e0 at 004eb17c
;   core_script.cpp_CScript_renderSubtitles_FUN_005218a0 at 00521a49
;   engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_004062b0 at 00406310
;   ... and 16 more
;
; Referenced Globals:
;   undefined4 DAT_006093c0
;   undefined4 DAT_006141d8
;   undefined4 DAT_0070ca80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00406da0
        ;   Label: engine_3d.c_setRenderAlpha_FUN_00406da0
    SAR EDX,0x8                         ; 00406da4
    TEST EDX,EDX                        ; 00406da7
    JL 0x00406de1                       ; 00406da9
        ;   XREF to: 00406de1 (CONDITIONAL_JUMP)  ; LAB_00406de1
    CMP EDX,0xff                        ; 00406dab
    JLE 0x00406db8                      ; 00406db1
        ;   XREF to: 00406db8 (CONDITIONAL_JUMP)  ; LAB_00406db8
    MOV EDX,0xff                        ; 00406db3
    MOV EAX,EDX                         ; 00406db8
        ;   Label: LAB_00406db8
    MOV ECX,EDX                         ; 00406dba
    SHL EAX,0x8                         ; 00406dbc
    OR ECX,EAX                          ; 00406dbf
    MOV EAX,EDX                         ; 00406dc1
    SHL EAX,0x10                        ; 00406dc3
    OR ECX,EAX                          ; 00406dc6
    MOV EAX,ECX                         ; 00406dc8
    XOR EAX,0xffffff                    ; 00406dca
    MOV dword ptr [0x006093c0],ECX      ; 00406dcf | DAT_006093c0
    MOV [0x0070ca80],EAX                ; 00406dd5 | DAT_0070ca80
    MOV dword ptr [0x006141d8],EDX      ; 00406dda | DAT_006141d8
    RET                                 ; 00406de0
    XOR EDX,EDX                         ; 00406de1
        ;   Label: LAB_00406de1
    JMP 0x00406db8                      ; 00406de3
        ;   XREF to: 00406db8 (UNCONDITIONAL_JUMP)  ; LAB_00406db8

