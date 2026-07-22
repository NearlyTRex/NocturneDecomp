; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046fcd0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[20]:
;   FUN_004a3b90 at 004a4015
;   FUN_004a4170 at 004a46be
;   FUN_004a57c0 at 004a5bd1
;   FUN_004febd0 at 004fedde
;   FUN_00504d90 at 00504e4d
;   FUN_0053fc60 at 0053fcfe
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a1e34
;   core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00 at 004d434b
;   core_mission.cpp_CDemonMission_createOneHero_FUN_004d9920 at 004d9a6d
;   core_mission.cpp_CDemonMission_loadActor_FUN_004d8aa0 at 004d8bc0
;   ... and 10 more
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   string s_gEdFont_must_be_set_by_the_appli_0057e510
;   string s_Error_0057e5d7
;   undefined4 DAT_005bac64
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01bcddd4
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01cc30e4
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0
;   FUN_004720c0
;   FUN_004722b0
;   FUN_004c8440
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046fcd0
        ;   Label: FUN_0046fcd0
    PUSH ESI                            ; 0046fcd1
    PUSH EDI                            ; 0046fcd2
    PUSH EBP                            ; 0046fcd3
    SUB ESP,0x8                         ; 0046fcd4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0046fcd7
    CMP dword ptr [0x01bcd070],0x0      ; 0046fcdb | DAT_01bcd070
    JNZ 0x0046fd07                      ; 0046fce2
        ;   XREF to: 0046fd07 (CONDITIONAL_JUMP)  ; LAB_0046fd07
    MOV ECX,0x57e4fa                    ; 0046fce4 | = "..\\shape\\edittool.cpp"
    MOV EBX,0x8b                        ; 0046fce9
    PUSH 0x57e510                       ; 0046fcee | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 0046fcf3 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0046fcf9 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0046fcff
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0046fd04
    MOV EAX,[0x01bcd070]                ; 0046fd07 | DAT_01bcd070
        ;   Label: LAB_0046fd07
    PUSH 0x6a                           ; 0046fd0c
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0046fd0e
    PUSH EAX                            ; 0046fd14
    MOV dword ptr [0x01bcd9b8],EDX      ; 0046fd15 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 0046fd1b
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 0046fd20
    MOV [0x01bcd9bc],EAX                ; 0046fd23 | DAT_01bcd9bc
    LEA EAX,[ESP + 0x24]                ; 0046fd28
    MOV dword ptr [ESP],EAX             ; 0046fd2c
    MOV EAX,ESP                         ; 0046fd2f
    PUSH EAX                            ; 0046fd31
    MOV ESI,dword ptr [ESP + 0x24]      ; 0046fd32
    PUSH ESI                            ; 0046fd36
    PUSH 0x1bca4d0                      ; 0046fd37
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0046fd3c
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 0046fd41
    MOV EAX,0x57e5d7                    ; 0046fd44 | = "Error"
    PUSH EAX                            ; 0046fd49 | = "Error"
    MOV EDX,dword ptr [0x01bcd070]      ; 0046fd4a | DAT_01bcd070
    XOR EBP,EBP                         ; 0046fd50
    PUSH EDX                            ; 0046fd52
    MOV dword ptr [ESP + 0x8],EBP       ; 0046fd53
    MOV dword ptr [ESP + 0xc],EAX       ; 0046fd57 | = "Error"
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0046fd5b
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 0046fd60
    PUSH 0x1bca4d0                      ; 0046fd63
    MOV ECX,dword ptr [0x01bcd070]      ; 0046fd68 | DAT_01bcd070
    PUSH ECX                            ; 0046fd6e
    MOV EBX,EAX                         ; 0046fd6f
    MOV ESI,EAX                         ; 0046fd71
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0046fd73
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 0046fd78
    MOV EBP,EAX                         ; 0046fd7b
    CMP EAX,EBX                         ; 0046fd7d
    JLE 0x0046fd83                      ; 0046fd7f
        ;   XREF to: 0046fd83 (CONDITIONAL_JUMP)  ; LAB_0046fd83
    MOV ESI,EAX                         ; 0046fd81
    PUSH 0x1bca4d0                      ; 0046fd83
        ;   Label: LAB_0046fd83
    MOV EBX,dword ptr [0x01bcd070]      ; 0046fd88 | DAT_01bcd070
    PUSH EBX                            ; 0046fd8e
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60 ; 0046fd8f
        ;   XREF to: 00492e60 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60()
    ADD ESP,0x8                         ; 0046fd94
    PUSH 0x0                            ; 0046fd97
    MOV EBX,EAX                         ; 0046fd99
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046fd9b
    PUSH EAX                            ; 0046fd9f | = "Error"
    MOV EAX,[0x01bcd9bc]                ; 0046fda0 | DAT_01bcd9bc
    ADD EAX,EAX                         ; 0046fda5
    ADD EAX,EBX                         ; 0046fda7
    PUSH EAX                            ; 0046fda9
    MOV EAX,[0x01bcd9b8]                ; 0046fdaa | DAT_01bcd9b8
    SHL EAX,0x2                         ; 0046fdaf
    ADD EAX,ESI                         ; 0046fdb2
    PUSH EAX                            ; 0046fdb4
    PUSH EDI                            ; 0046fdb5
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80 ; 0046fdb6
        ;   XREF to: 00471a80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80()
    ADD ESP,0x14                        ; 0046fdbb
    PUSH EDI                            ; 0046fdbe
    CALL FUN_004722b0                   ; 0046fdbf
        ;   XREF to: 004722b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004722b0()
    ADD ESP,0x4                         ; 0046fdc4
    PUSH 0xffff                         ; 0046fdc7
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 0046fdcc
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 0046fdd1
    PUSH -0x1                           ; 0046fdd4
    MOV EDX,dword ptr [0x01bcddd4]      ; 0046fdd6 | DAT_01bcddd4
    MOV ECX,dword ptr [0x01c00c64]      ; 0046fddc | DAT_01c00c64
    PUSH EDX                            ; 0046fde2
    MOV EDX,dword ptr [0x01c00c5c]      ; 0046fde3 | DAT_01c00c5c
    ADD EDX,ECX                         ; 0046fde9
    SUB EDX,EBX                         ; 0046fdeb
    MOV EAX,EDX                         ; 0046fded
    SAR EDX,0x1f                        ; 0046fdef
    SUB EAX,EDX                         ; 0046fdf2
    SAR EAX,0x1                         ; 0046fdf4
    MOV EBX,dword ptr [0x01c00c60]      ; 0046fdf6 | DAT_01c00c60
    MOV EDX,dword ptr [0x01c00c58]      ; 0046fdfc | DAT_01c00c58
    ADD EDX,EBX                         ; 0046fe02
    SUB EDX,EBP                         ; 0046fe04
    PUSH EAX                            ; 0046fe06
    MOV EAX,EDX                         ; 0046fe07
    SAR EDX,0x1f                        ; 0046fe09
    SUB EAX,EDX                         ; 0046fe0c
    SAR EAX,0x1                         ; 0046fe0e
    PUSH EAX                            ; 0046fe10
    PUSH 0x1bca4d0                      ; 0046fe11
    MOV ESI,dword ptr [0x01bcd070]      ; 0046fe16 | DAT_01bcd070
    PUSH ESI                            ; 0046fe1c
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0046fe1d
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 0046fe22
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0046fe25
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0046fe2a
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV EBP,dword ptr [0x005bac64]      ; 0046fe2f | DAT_005bac64
    PUSH EBP                            ; 0046fe35 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0 ; 0046fe36
        ;   XREF to: 004c41c0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0()
    ADD ESP,0x4                         ; 0046fe3b
    PUSH EDI                            ; 0046fe3e
    CALL FUN_004720c0                   ; 0046fe3f
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004720c0()
    ADD ESP,0x4                         ; 0046fe44
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0046fe47
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0046fe4c
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    ADD ESP,0x8                         ; 0046fe51
    POP EBP                             ; 0046fe54
    POP EDI                             ; 0046fe55
    POP ESI                             ; 0046fe56
    POP EBX                             ; 0046fe57
    RET                                 ; 0046fe58

