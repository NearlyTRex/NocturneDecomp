; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046fe60(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   FUN_004a4170 at 004a4611
;   FUN_004c8510 at 004c85bd
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a0f80
;   core_game.cpp_setupMovieRecording_FUN_0049a240 at 0049a305
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20 at 004d9d77
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 at 004e9ffc
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004eb859
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00501242
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   string s_gEdFont_must_be_set_by_the_appli_0057e510
;   string s_Message_0057e5dd
;   undefined4 DAT_005bac64
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01bcddd8
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

    PUSH EBX                            ; 0046fe60
        ;   Label: FUN_0046fe60
    PUSH ESI                            ; 0046fe61
    PUSH EDI                            ; 0046fe62
    PUSH EBP                            ; 0046fe63
    SUB ESP,0x8                         ; 0046fe64
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0046fe67
    CMP dword ptr [0x01bcd070],0x0      ; 0046fe6b | DAT_01bcd070
    JNZ 0x0046fe97                      ; 0046fe72
        ;   XREF to: 0046fe97 (CONDITIONAL_JUMP)  ; LAB_0046fe97
    MOV ECX,0x57e4fa                    ; 0046fe74 | = "..\\shape\\edittool.cpp"
    MOV EBX,0x8b                        ; 0046fe79
    PUSH 0x57e510                       ; 0046fe7e | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 0046fe83 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0046fe89 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0046fe8f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0046fe94
    MOV EAX,[0x01bcd070]                ; 0046fe97 | DAT_01bcd070
        ;   Label: LAB_0046fe97
    PUSH 0x6a                           ; 0046fe9c
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0046fe9e
    PUSH EAX                            ; 0046fea4
    MOV dword ptr [0x01bcd9b8],EDX      ; 0046fea5 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 0046feab
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 0046feb0
    MOV [0x01bcd9bc],EAX                ; 0046feb3 | DAT_01bcd9bc
    LEA EAX,[ESP + 0x24]                ; 0046feb8
    MOV dword ptr [ESP],EAX             ; 0046febc
    MOV EAX,ESP                         ; 0046febf
    PUSH EAX                            ; 0046fec1
    MOV ESI,dword ptr [ESP + 0x24]      ; 0046fec2
    PUSH ESI                            ; 0046fec6
    PUSH 0x1bca8d0                      ; 0046fec7
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0046fecc
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 0046fed1
    MOV EAX,0x57e5dd                    ; 0046fed4 | = "Message"
    PUSH EAX                            ; 0046fed9 | = "Message"
    MOV EDX,dword ptr [0x01bcd070]      ; 0046feda | DAT_01bcd070
    XOR EBP,EBP                         ; 0046fee0
    PUSH EDX                            ; 0046fee2
    MOV dword ptr [ESP + 0x8],EBP       ; 0046fee3
    MOV dword ptr [ESP + 0xc],EAX       ; 0046fee7 | = "Message"
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0046feeb
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 0046fef0
    PUSH 0x1bca8d0                      ; 0046fef3
    MOV ECX,dword ptr [0x01bcd070]      ; 0046fef8 | DAT_01bcd070
    PUSH ECX                            ; 0046fefe
    MOV EBX,EAX                         ; 0046feff
    MOV ESI,EAX                         ; 0046ff01
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0046ff03
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 0046ff08
    MOV EBP,EAX                         ; 0046ff0b
    CMP EAX,EBX                         ; 0046ff0d
    JLE 0x0046ff13                      ; 0046ff0f
        ;   XREF to: 0046ff13 (CONDITIONAL_JUMP)  ; LAB_0046ff13
    MOV ESI,EAX                         ; 0046ff11
    PUSH 0x1bca8d0                      ; 0046ff13
        ;   Label: LAB_0046ff13
    MOV EBX,dword ptr [0x01bcd070]      ; 0046ff18 | DAT_01bcd070
    PUSH EBX                            ; 0046ff1e
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60 ; 0046ff1f
        ;   XREF to: 00492e60 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60()
    ADD ESP,0x8                         ; 0046ff24
    PUSH 0x0                            ; 0046ff27
    MOV EBX,EAX                         ; 0046ff29
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046ff2b
    PUSH EAX                            ; 0046ff2f | = "Message"
    MOV EAX,[0x01bcd9bc]                ; 0046ff30 | DAT_01bcd9bc
    ADD EAX,EAX                         ; 0046ff35
    ADD EAX,EBX                         ; 0046ff37
    PUSH EAX                            ; 0046ff39
    MOV EAX,[0x01bcd9b8]                ; 0046ff3a | DAT_01bcd9b8
    SHL EAX,0x2                         ; 0046ff3f
    ADD EAX,ESI                         ; 0046ff42
    PUSH EAX                            ; 0046ff44
    PUSH EDI                            ; 0046ff45
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80 ; 0046ff46
        ;   XREF to: 00471a80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80()
    ADD ESP,0x14                        ; 0046ff4b
    PUSH EDI                            ; 0046ff4e
    CALL FUN_004722b0                   ; 0046ff4f
        ;   XREF to: 004722b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004722b0()
    ADD ESP,0x4                         ; 0046ff54
    PUSH 0xffff                         ; 0046ff57
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 0046ff5c
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 0046ff61
    PUSH -0x1                           ; 0046ff64
    MOV EDX,dword ptr [0x01bcddd8]      ; 0046ff66 | DAT_01bcddd8
    MOV ECX,dword ptr [0x01c00c64]      ; 0046ff6c | DAT_01c00c64
    PUSH EDX                            ; 0046ff72
    MOV EDX,dword ptr [0x01c00c5c]      ; 0046ff73 | DAT_01c00c5c
    ADD EDX,ECX                         ; 0046ff79
    SUB EDX,EBX                         ; 0046ff7b
    MOV EAX,EDX                         ; 0046ff7d
    SAR EDX,0x1f                        ; 0046ff7f
    SUB EAX,EDX                         ; 0046ff82
    SAR EAX,0x1                         ; 0046ff84
    MOV EBX,dword ptr [0x01c00c60]      ; 0046ff86 | DAT_01c00c60
    MOV EDX,dword ptr [0x01c00c58]      ; 0046ff8c | DAT_01c00c58
    ADD EDX,EBX                         ; 0046ff92
    SUB EDX,EBP                         ; 0046ff94
    PUSH EAX                            ; 0046ff96
    MOV EAX,EDX                         ; 0046ff97
    SAR EDX,0x1f                        ; 0046ff99
    SUB EAX,EDX                         ; 0046ff9c
    SAR EAX,0x1                         ; 0046ff9e
    PUSH EAX                            ; 0046ffa0
    PUSH 0x1bca8d0                      ; 0046ffa1
    MOV ESI,dword ptr [0x01bcd070]      ; 0046ffa6 | DAT_01bcd070
    PUSH ESI                            ; 0046ffac
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0046ffad
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 0046ffb2
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0046ffb5
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0046ffba
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV EBP,dword ptr [0x005bac64]      ; 0046ffbf | DAT_005bac64
    PUSH EBP                            ; 0046ffc5 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0 ; 0046ffc6
        ;   XREF to: 004c41c0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0()
    ADD ESP,0x4                         ; 0046ffcb
    PUSH EDI                            ; 0046ffce
    CALL FUN_004720c0                   ; 0046ffcf
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004720c0()
    ADD ESP,0x4                         ; 0046ffd4
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0046ffd7
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0046ffdc
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    ADD ESP,0x8                         ; 0046ffe1
    POP EBP                             ; 0046ffe4
    POP EDI                             ; 0046ffe5
    POP ESI                             ; 0046ffe6
    POP EBX                             ; 0046ffe7
    RET                                 ; 0046ffe8

