; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_0050aa90(void)
;
; Local Variables:
; undefined        Stack[-0x140]:1  local_140
; undefined1       Stack[-0x13f]:1  local_13f
; undefined        Stack[-0x40]:1  local_40
; undefined1       Stack[-0x3f]:1  local_3f
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_menu.cpp_FUN_0050c990 at 0050cb3e
;
; Referenced Globals:
;   void* switchdataD_0050aa70 = 0050aeb5
;   TerminatedCString s_tridx7_dll_005e7c5a
;   undefined4 s_tridx7_dll_005e7c5a+1
;   undefined4 s_tridx7_dll_005e7c5a+2
;   undefined4 s_tridx7_dll_005e7c5a+3
;   TerminatedCString s_Resolution_320x240_005e7c65
;   TerminatedCString s_Resolution_400x300_005e7c7a
;   TerminatedCString s_Resolution_512x384_005e7c8f
;   TerminatedCString s_Resolution_640x480_005e7ca4
;   TerminatedCString s_Resolution_800x600_005e7cb9
;   TerminatedCString s_Resolution_1024x768_005e7cce
;   TerminatedCString s_Resolution_1280x960_005e7ce4
;   TerminatedCString s_Resolution_320x240_005e7cfa
;   TerminatedCString s_No_3D_Hardware_005e7d0f
;   TerminatedCString s_Not_enough_video_memory_005e7d1e
;   ... and 55 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004cbf10
;   core_game.cpp_FUN_004cbf20
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00509e20
;   core_menu.cpp_showCalibrationTest_FUN_0050a9c0
;   core_moon.cpp_CMoon_render_FUN_00521e40
;   core_set.cpp_CDemonSet_setFlatColor_FUN_00555770
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_special.cpp_buildCardList_FUN_00582b30
;   engine_special.cpp_getVideoMemory_FUN_00582ae0
;   engine_special.cpp_kill_FUN_00581f20
;   engine_special.cpp_loadExternalRenderer_FUN_00581310
;   engine_special.cpp_selectCard_FUN_00582b10
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;   wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050aa90
        ;   Label: core_menu.cpp_configureGraphicsOptions_FUN_0050aa90
    PUSH ESI                            ; 0050aa91
    PUSH EDI                            ; 0050aa92
    PUSH EBP                            ; 0050aa93
    SUB ESP,0x130                       ; 0050aa94
    MOV ECX,dword ptr [0x0061d95c]      ; 0050aa9a | g_CGamePtr
    XOR EDX,EDX                         ; 0050aaa0
    PUSH ECX                            ; 0050aaa2
    MOV dword ptr [ESP + 0x124],EDX     ; 0050aaa3
    CALL core_game.cpp_CGame_saveClockTime_FUN_004cbf10 ; 0050aaaa
        ;   XREF to: 004cbf10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004cbf10(CGame * this_ptr)
    MOV EDX,0x1d1eeb8                   ; 0050aaaf
    ADD ESP,0x4                         ; 0050aab4
    XOR EAX,EAX                         ; 0050aab7
    MOV dword ptr [EAX + 0x1d1f5b8],EDX ; 0050aab9
        ;   Label: LAB_0050aab9
    ADD EAX,0x4                         ; 0050aabf
    ADD EDX,0x100                       ; 0050aac2
    CMP EAX,0x1c                        ; 0050aac8
    JNZ 0x0050aab9                      ; 0050aacb
        ;   XREF to: 0050aab9 (CONDITIONAL_JUMP)  ; LAB_0050aab9
    PUSH 0x1d1f69c                      ; 0050aacd
    PUSH 0x1d1f65c                      ; 0050aad2
    PUSH 0x1d1f61c                      ; 0050aad7
    PUSH 0x1d1f5dc                      ; 0050aadc
    PUSH 0x1d1f5d8                      ; 0050aae1 | DAT_01d1f5d8
    XOR EBP,EBP                         ; 0050aae6
    CALL engine_special.cpp_buildCardList_FUN_00582b30 ; 0050aae8
        ;   XREF to: 00582b30 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_buildCardList_FUN_00582b30(int * out_card_count, char * * out_driver_names, char * * out_card_names, int * out_vendor_ids, ...)
    MOV EAX,[0x01d1f5d4]                ; 0050aaed | DAT_01d1f5d4
    MOV EBX,dword ptr [0x01d1f5d8]      ; 0050aaf2 | DAT_01d1f5d8
    ADD ESP,0x14                        ; 0050aaf8
    CMP EAX,EBX                         ; 0050aafb
    JL 0x0050ab05                       ; 0050aafd
        ;   XREF to: 0050ab05 (CONDITIONAL_JUMP)  ; LAB_0050ab05
    MOV dword ptr [0x01d1f5d4],EBP      ; 0050aaff | DAT_01d1f5d4
    LEA EAX,[ESP + 0x12c]               ; 0050ab05
        ;   Label: LAB_0050ab05
    PUSH EAX                            ; 0050ab0c
    LEA EAX,[ESP + 0x12c]               ; 0050ab0d
    XOR EDI,EDI                         ; 0050ab14
    PUSH EAX                            ; 0050ab16
    LEA EAX,[ESP + 0x12c]               ; 0050ab17
    MOV dword ptr [ESP + 0x12c],EDI     ; 0050ab1e
    PUSH EAX                            ; 0050ab25
    MOV dword ptr [ESP + 0x134],EDI     ; 0050ab26
    MOV dword ptr [ESP + 0x138],EDI     ; 0050ab2d
    CALL engine_special.cpp_getVideoMemory_FUN_00582ae0 ; 0050ab34
        ;   XREF to: 00582ae0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_getVideoMemory_FUN_00582ae0(int * total_memory, int * available_memory, int * memory_type)
    ADD ESP,0xc                         ; 0050ab39
    MOV ECX,dword ptr [0x0061d95c]      ; 0050ab3c | g_CGamePtr
        ;   Label: LAB_0050ab3c
    PUSH ECX                            ; 0050ab42 | g_CGameInstance
    CALL core_game.cpp_FUN_004cbf20     ; 0050ab43
        ;   XREF to: 004cbf20 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004cbf20()
    ADD ESP,0x4                         ; 0050ab48
    PUSH 0x10000                        ; 0050ab4b
    PUSH 0xc350                         ; 0050ab50
    PUSH 0xc350                         ; 0050ab55
    MOV EAX,[0x00622c18]                ; 0050ab5a | g_CDemonSetPtr
    PUSH EAX                            ; 0050ab5f
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 0050ab60 | g_CDemonSetInstance.rendering_mode
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_00555770 ; 0050ab6a
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_00555770(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 0050ab6f
    MOV EAX,[0x00622c18]                ; 0050ab72 | g_CDemonSetPtr
    PUSH 0x1d1e380                      ; 0050ab77
    MOV ESI,0x5e7c5a                    ; 0050ab7c | = "tridx7.dll"
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 0050ab81 | g_CDemonSetInstance.ambient_base_quick
    CALL core_moon.cpp_CMoon_render_FUN_00521e40 ; 0050ab8b
        ;   XREF to: 00521e40 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_render_FUN_00521e40(CMoon * this_ptr)
    MOV EAX,[0x00622c18]                ; 0050ab90 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 0050ab95
    MOV EDI,0x6257d0                    ; 0050ab98 | DAT_006257d0
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 0050ab9d | g_CDemonSetInstance.rendering_mode
    PUSH EDI                            ; 0050aba7 | DAT_006257d0
    MOV AL,byte ptr [ESI]               ; 0050aba8 | = "tridx7.dll" | s_tridx7_dll_005e7c5a+2
        ;   Label: LAB_0050aba8
    MOV byte ptr [EDI],AL               ; 0050abaa | DAT_006257d0 | DAT_006257d2
    CMP AL,0x0                          ; 0050abac
    JZ 0x0050abc0                       ; 0050abae
        ;   XREF to: 0050abc0 (CONDITIONAL_JUMP)  ; LAB_0050abc0
    MOV AL,byte ptr [ESI + 0x1]         ; 0050abb0 | s_tridx7_dll_005e7c5a+1 | s_tridx7_dll_005e7c5a+3
    ADD ESI,0x2                         ; 0050abb3
    MOV byte ptr [EDI + 0x1],AL         ; 0050abb6 | DAT_006257d1 | = "d3d.dll"
    ADD EDI,0x2                         ; 0050abb9
    CMP AL,0x0                          ; 0050abbc
    JNZ 0x0050aba8                      ; 0050abbe
        ;   XREF to: 0050aba8 (CONDITIONAL_JUMP)  ; LAB_0050aba8
    POP EDI                             ; 0050abc0
        ;   Label: LAB_0050abc0
    CMP dword ptr [0x01d1f5d8],0x0      ; 0050abc1 | DAT_01d1f5d8
    JLE 0x0050acb6                      ; 0050abc8
        ;   XREF to: 0050acb6 (CONDITIONAL_JUMP)  ; LAB_0050acb6
    CMP dword ptr [0x02c83370],0x0      ; 0050abce | DAT_02c83370
    JZ 0x0050acb6                       ; 0050abd5
        ;   XREF to: 0050acb6 (CONDITIONAL_JUMP)  ; LAB_0050acb6
    MOV EAX,[0x01d1f5d4]                ; 0050abdb | DAT_01d1f5d4
    SHL EAX,0x2                         ; 0050abe0
    CMP dword ptr [EAX + 0x1d1f65c],0x121a ; 0050abe3 | DAT_01d1f65c
    JNZ 0x0050ac11                      ; 0050abed
        ;   XREF to: 0050ac11 (CONDITIONAL_JUMP)  ; LAB_0050ac11
    CMP dword ptr [EAX + 0x1d1f69c],0x5 ; 0050abef
    JG 0x0050ac11                       ; 0050abf6
        ;   XREF to: 0050ac11 (CONDITIONAL_JUMP)  ; LAB_0050ac11
    MOV EAX,[0x0061d95c]                ; 0050abf8 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 0050abfd | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 0050ac04 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 0050ac0a | g_CGameInstance.game_pixy
    MOV EAX,[0x01d1f5d4]                ; 0050ac11 | DAT_01d1f5d4
        ;   Label: LAB_0050ac11
    SHL EAX,0x2                         ; 0050ac16
    CMP dword ptr [EAX + 0x1d1f65c],0x8086 ; 0050ac19 | DAT_01d1f65c
    JNZ 0x0050ac4a                      ; 0050ac23
        ;   XREF to: 0050ac4a (CONDITIONAL_JUMP)  ; LAB_0050ac4a
    CMP dword ptr [EAX + 0x1d1f69c],0x7800 ; 0050ac25
    JNZ 0x0050ac4a                      ; 0050ac2f
        ;   XREF to: 0050ac4a (CONDITIONAL_JUMP)  ; LAB_0050ac4a
    MOV EAX,[0x0061d95c]                ; 0050ac31 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 0050ac36 | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 0050ac3d | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 0050ac43 | g_CGameInstance.game_pixy
    MOV EAX,[0x01d1f5d4]                ; 0050ac4a | DAT_01d1f5d4
        ;   Label: LAB_0050ac4a
    SHL EAX,0x2                         ; 0050ac4f
    CMP dword ptr [EAX + 0x1d1f65c],0x12d2 ; 0050ac52 | DAT_01d1f65c
    JNZ 0x0050ac80                      ; 0050ac5c
        ;   XREF to: 0050ac80 (CONDITIONAL_JUMP)  ; LAB_0050ac80
    CMP dword ptr [EAX + 0x1d1f69c],0x18 ; 0050ac5e
    JNZ 0x0050ac80                      ; 0050ac65
        ;   XREF to: 0050ac80 (CONDITIONAL_JUMP)  ; LAB_0050ac80
    MOV EAX,[0x0061d95c]                ; 0050ac67 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 0050ac6c | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 0050ac73 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 0050ac79 | g_CGameInstance.game_pixy
    MOV EAX,[0x01d1f5d4]                ; 0050ac80 | DAT_01d1f5d4
        ;   Label: LAB_0050ac80
    SHL EAX,0x2                         ; 0050ac85
    CMP dword ptr [EAX + 0x1d1f65c],0x12d2 ; 0050ac88 | DAT_01d1f65c
    JNZ 0x0050acb6                      ; 0050ac92
        ;   XREF to: 0050acb6 (CONDITIONAL_JUMP)  ; LAB_0050acb6
    CMP dword ptr [EAX + 0x1d1f69c],0x19 ; 0050ac94
    JNZ 0x0050acb6                      ; 0050ac9b
        ;   XREF to: 0050acb6 (CONDITIONAL_JUMP)  ; LAB_0050acb6
    MOV EAX,[0x0061d95c]                ; 0050ac9d | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 0050aca2 | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 0050aca9 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 0050acaf | g_CGameInstance.game_pixy
    CMP dword ptr [0x02c83370],0x0      ; 0050acb6 | DAT_02c83370
        ;   Label: LAB_0050acb6
    JNZ 0x0050acda                      ; 0050acbd
        ;   XREF to: 0050acda (CONDITIONAL_JUMP)  ; LAB_0050acda
    MOV EAX,[0x0061d95c]                ; 0050acbf | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0x1e0     ; 0050acc4 | g_CGameInstance.game_pixy
    JLE 0x0050acda                      ; 0050accb
        ;   XREF to: 0050acda (CONDITIONAL_JUMP)  ; LAB_0050acda
    MOV dword ptr [EAX + 0x4],0x1e0     ; 0050accd | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x280           ; 0050acd4 | g_CGameInstance
    MOV EAX,[0x0061d95c]                ; 0050acda | g_CGamePtr
        ;   Label: LAB_0050acda
    MOV EDI,dword ptr [EAX + 0x4]       ; 0050acdf | g_CGameInstance.game_pixy
    CMP EDI,0xf0                        ; 0050ace2
    JNZ 0x0050af15                      ; 0050ace8
        ;   XREF to: 0050af15 (CONDITIONAL_JUMP)  ; LAB_0050af15
    PUSH 0x5e7c65                       ; 0050acee | = "Resolution : 320x240"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050acf3
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
        ;   Label: LAB_0050acf3
    ADD ESP,0x4                         ; 0050acf8
    PUSH EAX                            ; 0050acfb
    PUSH 0x1d1eeb8                      ; 0050acfc
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0050ad01
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0050ad06
    MOV EAX,[0x0061d95c]                ; 0050ad09 | g_CGamePtr
    MOV dword ptr [EAX + 0xc],0x0       ; 0050ad0e | g_CGameInstance.halo_mode
    TEST EBP,EBP                        ; 0050ad15
    JZ 0x0050af95                       ; 0050ad17
        ;   XREF to: 0050af95 (CONDITIONAL_JUMP)  ; LAB_0050af95
    XOR EBX,EBX                         ; 0050ad1d
    MOV ESI,dword ptr [0x01d1f5d8]      ; 0050ad1f | DAT_01d1f5d8
    MOV dword ptr [0x02c83370],EBX      ; 0050ad25 | DAT_02c83370
    TEST ESI,ESI                        ; 0050ad2b
    JNZ 0x0050af8b                      ; 0050ad2d
        ;   XREF to: 0050af8b (CONDITIONAL_JUMP)  ; LAB_0050af8b
    PUSH 0x5e7d0f                       ; 0050ad33 | = "No 3D Hardware"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ad38
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
        ;   Label: LAB_0050ad38
    ADD ESP,0x4                         ; 0050ad3d
    PUSH EAX                            ; 0050ad40
    PUSH 0x1d1efb8                      ; 0050ad41
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0050ad46
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0050ad4b
    CMP byte ptr [0x006257d0],0x0       ; 0050ad4e | DAT_006257d0
    JNZ 0x0050afb2                      ; 0050ad55
        ;   XREF to: 0050afb2 (CONDITIONAL_JUMP)  ; LAB_0050afb2
    PUSH 0x5e7d65                       ; 0050ad5b | = "3D API : None"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ad60
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
        ;   Label: LAB_0050ad60
    ADD ESP,0x4                         ; 0050ad65
    PUSH EAX                            ; 0050ad68
    PUSH 0x1d1f0b8                      ; 0050ad69
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0050ad6e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0050ad73
    CMP dword ptr [0x01d1f5d8],0x0      ; 0050ad76 | DAT_01d1f5d8
    JNZ 0x0050b03c                      ; 0050ad7d
        ;   XREF to: 0050b03c (CONDITIONAL_JUMP)  ; LAB_0050b03c
    PUSH 0x5e7e08                       ; 0050ad83 | = "No 3D Hardware detected"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ad88
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ad8d
    PUSH EAX                            ; 0050ad90
    PUSH 0x1d1f1b8                      ; 0050ad91
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0050ad96
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0050ad9b
    PUSH 0x5e7e31                       ; 0050ad9e | = "Bits per pixel : "
        ;   Label: LAB_0050ad9e
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ada3
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ada8
    MOV EDI,0x1d1f2b8                   ; 0050adab
    MOV ESI,EAX                         ; 0050adb0
    PUSH EDI                            ; 0050adb2
    MOV AL,byte ptr [ESI]               ; 0050adb3
        ;   Label: LAB_0050adb3
    MOV byte ptr [EDI],AL               ; 0050adb5 | DAT_01d1f2b8 | DAT_01d1f2ba
    CMP AL,0x0                          ; 0050adb7
    JZ 0x0050adcb                       ; 0050adb9
        ;   XREF to: 0050adcb (CONDITIONAL_JUMP)  ; LAB_0050adcb
    MOV AL,byte ptr [ESI + 0x1]         ; 0050adbb
    ADD ESI,0x2                         ; 0050adbe
    MOV byte ptr [EDI + 0x1],AL         ; 0050adc1 | DAT_01d1f2b9 | DAT_01d1f2bb
    ADD EDI,0x2                         ; 0050adc4
    CMP AL,0x0                          ; 0050adc7
    JNZ 0x0050adb3                      ; 0050adc9
        ;   XREF to: 0050adb3 (CONDITIONAL_JUMP)  ; LAB_0050adb3
    POP EDI                             ; 0050adcb
        ;   Label: LAB_0050adcb
    MOV EAX,[0x0061d95c]                ; 0050adcc | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050add1 | g_CGameInstance.game_bpp
    PUSH EDX                            ; 0050add4
    PUSH 0x5e7e43                       ; 0050add5 | DAT_005e7e43
    LEA EAX,[ESP + 0x8]                 ; 0050adda
    PUSH EAX                            ; 0050adde
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0050addf
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050ade4
    MOV ESI,ESP                         ; 0050ade7
    PUSH EDI                            ; 0050ade9 | DAT_01d1f2b8
    SUB ECX,ECX                         ; 0050adea
    DEC ECX                             ; 0050adec
    MOV AL,0x0                          ; 0050aded
    SCASB.REPNE ES:EDI                  ; 0050adef | DAT_01d1f2b8 | DAT_01d1f2b9
    DEC EDI                             ; 0050adf1
    MOV AL,byte ptr [ESI]               ; 0050adf2
        ;   Label: LAB_0050adf2
    MOV byte ptr [EDI],AL               ; 0050adf4 | DAT_01d1f2b8 | DAT_01d1f2ba | DAT_01d1f2b9
    CMP AL,0x0                          ; 0050adf6
    JZ 0x0050ae0a                       ; 0050adf8
        ;   XREF to: 0050ae0a (CONDITIONAL_JUMP)  ; LAB_0050ae0a
    MOV AL,byte ptr [ESI + 0x1]         ; 0050adfa
    ADD ESI,0x2                         ; 0050adfd
    MOV byte ptr [EDI + 0x1],AL         ; 0050ae00 | DAT_01d1f2b9 | DAT_01d1f2bb | DAT_01d1f2ba
    ADD EDI,0x2                         ; 0050ae03
    CMP AL,0x0                          ; 0050ae06
    JNZ 0x0050adf2                      ; 0050ae08
        ;   XREF to: 0050adf2 (CONDITIONAL_JUMP)  ; LAB_0050adf2
    POP EDI                             ; 0050ae0a
        ;   Label: LAB_0050ae0a
    PUSH 0x5e7e46                       ; 0050ae0b | = "Monitor calibration"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ae10
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ae15
    PUSH EAX                            ; 0050ae18
    PUSH 0x1d1f3b8                      ; 0050ae19
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0050ae1e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,[0x0061d95c]                ; 0050ae23 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x10]      ; 0050ae28 | g_CGameInstance.subtitle_mode
    ADD ESP,0x8                         ; 0050ae2b
    TEST ECX,ECX                        ; 0050ae2e
    JZ 0x0050b0e2                       ; 0050ae30
        ;   XREF to: 0050b0e2 (CONDITIONAL_JUMP)  ; LAB_0050b0e2
    PUSH 0x5e7e5a                       ; 0050ae36 | = "Subtitles : On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ae3b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
        ;   Label: LAB_0050ae3b
    ADD ESP,0x4                         ; 0050ae40
    MOV EDI,0x1d1f4b8                   ; 0050ae43
    MOV ESI,EAX                         ; 0050ae48
    PUSH EDI                            ; 0050ae4a | DAT_01d1f4b8
    MOV AL,byte ptr [ESI]               ; 0050ae4b
        ;   Label: LAB_0050ae4b
    MOV byte ptr [EDI],AL               ; 0050ae4d | DAT_01d1f4b8 | DAT_01d1f4ba
    CMP AL,0x0                          ; 0050ae4f
    JZ 0x0050ae63                       ; 0050ae51
        ;   XREF to: 0050ae63 (CONDITIONAL_JUMP)  ; LAB_0050ae63
    MOV AL,byte ptr [ESI + 0x1]         ; 0050ae53
    ADD ESI,0x2                         ; 0050ae56
    MOV byte ptr [EDI + 0x1],AL         ; 0050ae59 | DAT_01d1f4b9 | DAT_01d1f4bb
    ADD EDI,0x2                         ; 0050ae5c
    CMP AL,0x0                          ; 0050ae5f
    JNZ 0x0050ae4b                      ; 0050ae61
        ;   XREF to: 0050ae4b (CONDITIONAL_JUMP)  ; LAB_0050ae4b
    POP EDI                             ; 0050ae63
        ;   Label: LAB_0050ae63
    MOV EAX,[0x0061d95c]                ; 0050ae64 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x20]      ; 0050ae69 | g_CGameInstance.quimby_flag
    MOV EBX,0x7                         ; 0050ae6c
    TEST ESI,ESI                        ; 0050ae71
    JZ 0x0050ae7a                       ; 0050ae73
        ;   XREF to: 0050ae7a (CONDITIONAL_JUMP)  ; LAB_0050ae7a
    MOV EBX,0x6                         ; 0050ae75
    PUSH 0x5e7e79                       ; 0050ae7a | = "Graphic Options"
        ;   Label: LAB_0050ae7a
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ae7f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ae84
    PUSH EAX                            ; 0050ae87
    PUSH 0x32                           ; 0050ae88
    LEA EAX,[ESP + 0x128]               ; 0050ae8a
    PUSH EAX                            ; 0050ae91
    PUSH EBX                            ; 0050ae92
    PUSH 0x1d1f5b8                      ; 0050ae93
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_00509e20 ; 0050ae98
        ;   XREF to: 00509e20 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_renderMenuAndGetChoice_FUN_00509e20(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
    ADD ESP,0x14                        ; 0050ae9d
    MOV EBX,EAX                         ; 0050aea0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0050aea2
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    XOR EDX,EDX                         ; 0050aea7
    CMP EBX,0x7                         ; 0050aea9
    JA 0x0050aef2                       ; 0050aeac
        ;   XREF to: 0050aef2 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EBX*0x4 + 0x50aa70]  ; 0050aeae | caseD_0 | caseD_1 | caseD_7
        ;   Label: switchD
    CMP dword ptr [0x01d1ee8c],0x1      ; 0050aeb5 | DAT_01d1ee8c
        ;   Label: caseD_0
    JNZ 0x0050b1c1                      ; 0050aebc
        ;   XREF to: 0050b1c1 (CONDITIONAL_JUMP)  ; LAB_0050b1c1
    MOV EAX,[0x0061d95c]                ; 0050aec2 | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0xf0      ; 0050aec7 | g_CGameInstance.game_pixy
    JNZ 0x0050b0ec                      ; 0050aece
        ;   XREF to: 0050b0ec (CONDITIONAL_JUMP)  ; LAB_0050b0ec
    CMP dword ptr [ESP + 0x124],0x16e3600 ; 0050aed4
    JLE 0x0050b0ec                      ; 0050aedf
        ;   XREF to: 0050b0ec (CONDITIONAL_JUMP)  ; LAB_0050b0ec
    MOV dword ptr [EAX + 0x4],0x3c0     ; 0050aee5 | g_CGameInstance.game_pixy
        ;   Label: LAB_0050aee5
    MOV dword ptr [EAX],0x500           ; 0050aeec | g_CGameInstance
    PUSH 0x1                            ; 0050aef2
        ;   Label: caseD_2
    MOV EAX,[0x0061f2a4]                ; 0050aef4 | DAT_0061f2a4
    PUSH EAX                            ; 0050aef9 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050aefa | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050aefc
    ADD ESP,0x8                         ; 0050aeff
    TEST EAX,EAX                        ; 0050af02
    JZ 0x0050ab3c                       ; 0050af04
        ;   XREF to: 0050ab3c (CONDITIONAL_JUMP)  ; LAB_0050ab3c
    ADD ESP,0x130                       ; 0050af0a
    POP EBP                             ; 0050af10
    POP EDI                             ; 0050af11
    POP ESI                             ; 0050af12
    POP EBX                             ; 0050af13
    RET                                 ; 0050af14
    CMP EDI,0x12c                       ; 0050af15
        ;   Label: LAB_0050af15
    JZ 0x0050af4f                       ; 0050af1b
        ;   XREF to: 0050af4f (CONDITIONAL_JUMP)  ; LAB_0050af4f
    CMP EDI,0x180                       ; 0050af1d
    JZ 0x0050af59                       ; 0050af23
        ;   XREF to: 0050af59 (CONDITIONAL_JUMP)  ; LAB_0050af59
    CMP EDI,0x1e0                       ; 0050af25
    JZ 0x0050af63                       ; 0050af2b
        ;   XREF to: 0050af63 (CONDITIONAL_JUMP)  ; LAB_0050af63
    CMP EDI,0x258                       ; 0050af2d
    JZ 0x0050af6d                       ; 0050af33
        ;   XREF to: 0050af6d (CONDITIONAL_JUMP)  ; LAB_0050af6d
    CMP EDI,0x300                       ; 0050af35
    JZ 0x0050af77                       ; 0050af3b
        ;   XREF to: 0050af77 (CONDITIONAL_JUMP)  ; LAB_0050af77
    CMP EDI,0x3c0                       ; 0050af3d
    JNZ 0x0050af81                      ; 0050af43
        ;   XREF to: 0050af81 (CONDITIONAL_JUMP)  ; LAB_0050af81
    PUSH 0x5e7ce4                       ; 0050af45 | = "Resolution : 1280x960"
    JMP 0x0050acf3                      ; 0050af4a
        ;   XREF to: 0050acf3 (UNCONDITIONAL_JUMP)  ; LAB_0050acf3
    PUSH 0x5e7c7a                       ; 0050af4f | = "Resolution : 400x300"
        ;   Label: LAB_0050af4f
    JMP 0x0050acf3                      ; 0050af54
        ;   XREF to: 0050acf3 (UNCONDITIONAL_JUMP)  ; LAB_0050acf3
    PUSH 0x5e7c8f                       ; 0050af59 | = "Resolution : 512x384"
        ;   Label: LAB_0050af59
    JMP 0x0050acf3                      ; 0050af5e
        ;   XREF to: 0050acf3 (UNCONDITIONAL_JUMP)  ; LAB_0050acf3
    PUSH 0x5e7ca4                       ; 0050af63 | = "Resolution : 640x480"
        ;   Label: LAB_0050af63
    JMP 0x0050acf3                      ; 0050af68
        ;   XREF to: 0050acf3 (UNCONDITIONAL_JUMP)  ; LAB_0050acf3
    PUSH 0x5e7cb9                       ; 0050af6d | = "Resolution : 800x600"
        ;   Label: LAB_0050af6d
    JMP 0x0050acf3                      ; 0050af72
        ;   XREF to: 0050acf3 (UNCONDITIONAL_JUMP)  ; LAB_0050acf3
    PUSH 0x5e7cce                       ; 0050af77 | = "Resolution : 1024x768"
        ;   Label: LAB_0050af77
    JMP 0x0050acf3                      ; 0050af7c
        ;   XREF to: 0050acf3 (UNCONDITIONAL_JUMP)  ; LAB_0050acf3
    PUSH 0x5e7cfa                       ; 0050af81 | = "Resolution : 320x240"
        ;   Label: LAB_0050af81
    JMP 0x0050acf3                      ; 0050af86
        ;   XREF to: 0050acf3 (UNCONDITIONAL_JUMP)  ; LAB_0050acf3
    PUSH 0x5e7d1e                       ; 0050af8b | = "Not enough video memory for 3D card"
        ;   Label: LAB_0050af8b
    JMP 0x0050ad38                      ; 0050af90
        ;   XREF to: 0050ad38 (UNCONDITIONAL_JUMP)  ; LAB_0050ad38
    CMP dword ptr [0x02c83370],0x0      ; 0050af95 | DAT_02c83370
        ;   Label: LAB_0050af95
    JZ 0x0050afa8                       ; 0050af9c
        ;   XREF to: 0050afa8 (CONDITIONAL_JUMP)  ; LAB_0050afa8
    PUSH 0x5e7d42                       ; 0050af9e | = "3D Hardware : On"
    JMP 0x0050ad38                      ; 0050afa3
        ;   XREF to: 0050ad38 (UNCONDITIONAL_JUMP)  ; LAB_0050ad38
    PUSH 0x5e7d53                       ; 0050afa8 | = "3D Hardware : Off"
        ;   Label: LAB_0050afa8
    JMP 0x0050ad38                      ; 0050afad
        ;   XREF to: 0050ad38 (UNCONDITIONAL_JUMP)  ; LAB_0050ad38
    PUSH 0x5e7d73                       ; 0050afb2 | = "trid3d.dll"
        ;   Label: LAB_0050afb2
    PUSH 0x6257d0                       ; 0050afb7 | DAT_006257d0
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0050afbc
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050afc1
    TEST EAX,EAX                        ; 0050afc4
    JNZ 0x0050afd2                      ; 0050afc6
        ;   XREF to: 0050afd2 (CONDITIONAL_JUMP)  ; LAB_0050afd2
    PUSH 0x5e7d7e                       ; 0050afc8 | = "3D API : DirectX 5"
    JMP 0x0050ad60                      ; 0050afcd
        ;   XREF to: 0050ad60 (UNCONDITIONAL_JUMP)  ; LAB_0050ad60
    PUSH 0x5e7d91                       ; 0050afd2 | = "tridx6.dll"
        ;   Label: LAB_0050afd2
    PUSH 0x6257d0                       ; 0050afd7 | DAT_006257d0
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0050afdc
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050afe1
    TEST EAX,EAX                        ; 0050afe4
    JNZ 0x0050aff2                      ; 0050afe6
        ;   XREF to: 0050aff2 (CONDITIONAL_JUMP)  ; LAB_0050aff2
    PUSH 0x5e7d9c                       ; 0050afe8 | = "3D API : DirectX 6"
    JMP 0x0050ad60                      ; 0050afed
        ;   XREF to: 0050ad60 (UNCONDITIONAL_JUMP)  ; LAB_0050ad60
    PUSH 0x5e7daf                       ; 0050aff2 | = "tridx7.dll"
        ;   Label: LAB_0050aff2
    PUSH 0x6257d0                       ; 0050aff7 | DAT_006257d0
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0050affc
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050b001
    TEST EAX,EAX                        ; 0050b004
    JNZ 0x0050b012                      ; 0050b006
        ;   XREF to: 0050b012 (CONDITIONAL_JUMP)  ; LAB_0050b012
    PUSH 0x5e7dba                       ; 0050b008 | = "3D API : DirectX 7"
    JMP 0x0050ad60                      ; 0050b00d
        ;   XREF to: 0050ad60 (UNCONDITIONAL_JUMP)  ; LAB_0050ad60
    PUSH 0x5e7dcd                       ; 0050b012 | = "tri3dfx.dll"
        ;   Label: LAB_0050b012
    PUSH 0x6257d0                       ; 0050b017 | DAT_006257d0
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0050b01c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050b021
    TEST EAX,EAX                        ; 0050b024
    JNZ 0x0050b032                      ; 0050b026
        ;   XREF to: 0050b032 (CONDITIONAL_JUMP)  ; LAB_0050b032
    PUSH 0x5e7dd9                       ; 0050b028 | = "3D API : Voodoo Blit Emulation"
    JMP 0x0050ad60                      ; 0050b02d
        ;   XREF to: 0050ad60 (UNCONDITIONAL_JUMP)  ; LAB_0050ad60
    PUSH 0x5e7df8                       ; 0050b032 | = "3D API : Custom"
        ;   Label: LAB_0050b032
    JMP 0x0050ad60                      ; 0050b037
        ;   XREF to: 0050ad60 (UNCONDITIONAL_JUMP)  ; LAB_0050ad60
    PUSH 0x5e7e20                       ; 0050b03c | = "3D Card : "
        ;   Label: LAB_0050b03c
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050b041
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050b046
    MOV EDI,0x1d1f1b8                   ; 0050b049
    MOV ESI,EAX                         ; 0050b04e
    PUSH EDI                            ; 0050b050
    MOV AL,byte ptr [ESI]               ; 0050b051
        ;   Label: LAB_0050b051
    MOV byte ptr [EDI],AL               ; 0050b053 | DAT_01d1f1b8 | DAT_01d1f1ba
    CMP AL,0x0                          ; 0050b055
    JZ 0x0050b069                       ; 0050b057
        ;   XREF to: 0050b069 (CONDITIONAL_JUMP)  ; LAB_0050b069
    MOV AL,byte ptr [ESI + 0x1]         ; 0050b059
    ADD ESI,0x2                         ; 0050b05c
    MOV byte ptr [EDI + 0x1],AL         ; 0050b05f | DAT_01d1f1b9 | DAT_01d1f1bb
    ADD EDI,0x2                         ; 0050b062
    CMP AL,0x0                          ; 0050b065
    JNZ 0x0050b051                      ; 0050b067
        ;   XREF to: 0050b051 (CONDITIONAL_JUMP)  ; LAB_0050b051
    POP EDI                             ; 0050b069
        ;   Label: LAB_0050b069
    MOV ESI,dword ptr [0x01d1f5d4]      ; 0050b06a | DAT_01d1f5d4
    MOV ESI,dword ptr [ESI*0x4 + 0x1d1f61c] ; 0050b070 | DAT_01d1f61c
    PUSH EDI                            ; 0050b077 | DAT_01d1f1b8
    SUB ECX,ECX                         ; 0050b078
    DEC ECX                             ; 0050b07a
    MOV AL,0x0                          ; 0050b07b
    SCASB.REPNE ES:EDI                  ; 0050b07d | DAT_01d1f1b8 | DAT_01d1f1b9
    DEC EDI                             ; 0050b07f
    MOV AL,byte ptr [ESI]               ; 0050b080
        ;   Label: LAB_0050b080
    MOV byte ptr [EDI],AL               ; 0050b082 | DAT_01d1f1b8 | DAT_01d1f1ba | DAT_01d1f1b9
    CMP AL,0x0                          ; 0050b084
    JZ 0x0050b098                       ; 0050b086
        ;   XREF to: 0050b098 (CONDITIONAL_JUMP)  ; LAB_0050b098
    MOV AL,byte ptr [ESI + 0x1]         ; 0050b088
    ADD ESI,0x2                         ; 0050b08b
    MOV byte ptr [EDI + 0x1],AL         ; 0050b08e | DAT_01d1f1b9 | DAT_01d1f1bb | DAT_01d1f1ba
    ADD EDI,0x2                         ; 0050b091
    CMP AL,0x0                          ; 0050b094
    JNZ 0x0050b080                      ; 0050b096
        ;   XREF to: 0050b080 (CONDITIONAL_JUMP)  ; LAB_0050b080
    POP EDI                             ; 0050b098
        ;   Label: LAB_0050b098
    MOV EAX,[0x01d1f5d4]                ; 0050b099 | DAT_01d1f5d4
    PUSH EAX                            ; 0050b09e
    PUSH 0x5e7e2b                       ; 0050b09f | = " (%d)"
    LEA EAX,[ESP + 0x108]               ; 0050b0a4
    PUSH EAX                            ; 0050b0ab
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0050b0ac
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050b0b1
    LEA ESI,[ESP + 0x100]               ; 0050b0b4
    PUSH EDI                            ; 0050b0bb | DAT_01d1f1b8
    SUB ECX,ECX                         ; 0050b0bc
    DEC ECX                             ; 0050b0be
    MOV AL,0x0                          ; 0050b0bf
    SCASB.REPNE ES:EDI                  ; 0050b0c1 | DAT_01d1f1b8 | DAT_01d1f1b9
    DEC EDI                             ; 0050b0c3
    MOV AL,byte ptr [ESI]               ; 0050b0c4
        ;   Label: LAB_0050b0c4
    MOV byte ptr [EDI],AL               ; 0050b0c6 | DAT_01d1f1b8 | DAT_01d1f1ba | DAT_01d1f1b9
    CMP AL,0x0                          ; 0050b0c8
    JZ 0x0050b0dc                       ; 0050b0ca
        ;   XREF to: 0050b0dc (CONDITIONAL_JUMP)  ; LAB_0050b0dc
    MOV AL,byte ptr [ESI + 0x1]         ; 0050b0cc
    ADD ESI,0x2                         ; 0050b0cf
    MOV byte ptr [EDI + 0x1],AL         ; 0050b0d2 | DAT_01d1f1b9 | DAT_01d1f1bb | DAT_01d1f1ba
    ADD EDI,0x2                         ; 0050b0d5
    CMP AL,0x0                          ; 0050b0d8
    JNZ 0x0050b0c4                      ; 0050b0da
        ;   XREF to: 0050b0c4 (CONDITIONAL_JUMP)  ; LAB_0050b0c4
    POP EDI                             ; 0050b0dc
        ;   Label: LAB_0050b0dc
    JMP 0x0050ad9e                      ; 0050b0dd
        ;   XREF to: 0050ad9e (UNCONDITIONAL_JUMP)  ; LAB_0050ad9e
    PUSH 0x5e7e69                       ; 0050b0e2 | = "Subtitles : Off"
        ;   Label: LAB_0050b0e2
    JMP 0x0050ae3b                      ; 0050b0e7
        ;   XREF to: 0050ae3b (UNCONDITIONAL_JUMP)  ; LAB_0050ae3b
    MOV EAX,[0x0061d95c]                ; 0050b0ec | g_CGamePtr
        ;   Label: LAB_0050b0ec
    CMP dword ptr [EAX + 0x4],0xf0      ; 0050b0f1 | g_CGameInstance.game_pixy
    JNZ 0x0050b10b                      ; 0050b0f8
        ;   XREF to: 0050b10b (CONDITIONAL_JUMP)  ; LAB_0050b10b
    CMP dword ptr [ESP + 0x124],0xb71b00 ; 0050b0fa
    JLE 0x0050b10b                      ; 0050b105
        ;   XREF to: 0050b10b (CONDITIONAL_JUMP)  ; LAB_0050b10b
    TEST EDX,EDX                        ; 0050b107
    JZ 0x0050b12d                       ; 0050b109
        ;   XREF to: 0050b12d (CONDITIONAL_JUMP)  ; LAB_0050b12d
    MOV EAX,[0x0061d95c]                ; 0050b10b | g_CGamePtr
        ;   Label: LAB_0050b10b
    MOV EBX,dword ptr [EAX + 0x4]       ; 0050b110 | g_CGameInstance.game_pixy
    CMP EBX,0xf0                        ; 0050b113
    JNZ 0x0050b13f                      ; 0050b119
        ;   XREF to: 0050b13f (CONDITIONAL_JUMP)  ; LAB_0050b13f
    MOV dword ptr [EAX + 0x4],0x1e0     ; 0050b11b | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x280           ; 0050b122 | g_CGameInstance
    JMP 0x0050aef2                      ; 0050b128
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV dword ptr [EAX + 0x4],0x300     ; 0050b12d | g_CGameInstance.game_pixy
        ;   Label: LAB_0050b12d
    MOV dword ptr [EAX],0x400           ; 0050b134 | g_CGameInstance
    JMP 0x0050aef2                      ; 0050b13a
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP EBX,0x12c                       ; 0050b13f
        ;   Label: LAB_0050b13f
    JNZ 0x0050b159                      ; 0050b145
        ;   XREF to: 0050b159 (CONDITIONAL_JUMP)  ; LAB_0050b159
    MOV dword ptr [EAX + 0x4],0xf0      ; 0050b147 | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x140           ; 0050b14e | g_CGameInstance
    JMP 0x0050aef2                      ; 0050b154
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP EBX,0x180                       ; 0050b159
        ;   Label: LAB_0050b159
    JNZ 0x0050b173                      ; 0050b15f
        ;   XREF to: 0050b173 (CONDITIONAL_JUMP)  ; LAB_0050b173
    MOV dword ptr [EAX + 0x4],0xf0      ; 0050b161 | g_CGameInstance.game_pixy
        ;   Label: LAB_0050b161
    MOV dword ptr [EAX],0x140           ; 0050b168 | g_CGameInstance
    JMP 0x0050aef2                      ; 0050b16e
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP EBX,0x1e0                       ; 0050b173
        ;   Label: LAB_0050b173
    JNZ 0x0050b18d                      ; 0050b179
        ;   XREF to: 0050b18d (CONDITIONAL_JUMP)  ; LAB_0050b18d
    MOV dword ptr [EAX + 0x4],0x180     ; 0050b17b | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x200           ; 0050b182 | g_CGameInstance
    JMP 0x0050aef2                      ; 0050b188
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP EBX,0x258                       ; 0050b18d
        ;   Label: LAB_0050b18d
    JNZ 0x0050b1a7                      ; 0050b193
        ;   XREF to: 0050b1a7 (CONDITIONAL_JUMP)  ; LAB_0050b1a7
    MOV dword ptr [EAX + 0x4],0x1e0     ; 0050b195 | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x280           ; 0050b19c | g_CGameInstance
    JMP 0x0050aef2                      ; 0050b1a2
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP EBX,0x300                       ; 0050b1a7
        ;   Label: LAB_0050b1a7
    JNZ 0x0050b161                      ; 0050b1ad
        ;   XREF to: 0050b161 (CONDITIONAL_JUMP)  ; LAB_0050b161
    MOV dword ptr [EAX + 0x4],0x258     ; 0050b1af | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x320           ; 0050b1b6 | g_CGameInstance
    JMP 0x0050aef2                      ; 0050b1bc
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x0061d95c]                ; 0050b1c1 | g_CGamePtr
        ;   Label: LAB_0050b1c1
    MOV EBX,dword ptr [EAX + 0x4]       ; 0050b1c6 | g_CGameInstance.game_pixy
    CMP EBX,0xf0                        ; 0050b1c9
    JNZ 0x0050b1e3                      ; 0050b1cf
        ;   XREF to: 0050b1e3 (CONDITIONAL_JUMP)  ; LAB_0050b1e3
    MOV dword ptr [EAX + 0x4],0x180     ; 0050b1d1 | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x200           ; 0050b1d8 | g_CGameInstance
    JMP 0x0050aef2                      ; 0050b1de
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP EBX,0x12c                       ; 0050b1e3
        ;   Label: LAB_0050b1e3
    JNZ 0x0050b1fd                      ; 0050b1e9
        ;   XREF to: 0050b1fd (CONDITIONAL_JUMP)  ; LAB_0050b1fd
    MOV dword ptr [EAX + 0x4],0x180     ; 0050b1eb | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x200           ; 0050b1f2 | g_CGameInstance
    JMP 0x0050aef2                      ; 0050b1f8
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP EBX,0x180                       ; 0050b1fd
        ;   Label: LAB_0050b1fd
    JNZ 0x0050b217                      ; 0050b203
        ;   XREF to: 0050b217 (CONDITIONAL_JUMP)  ; LAB_0050b217
    MOV dword ptr [EAX + 0x4],0x1e0     ; 0050b205 | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x280           ; 0050b20c | g_CGameInstance
    JMP 0x0050aef2                      ; 0050b212
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [ESP + 0x124],0xb71b00 ; 0050b217
        ;   Label: LAB_0050b217
    JLE 0x0050b23e                      ; 0050b222
        ;   XREF to: 0050b23e (CONDITIONAL_JUMP)  ; LAB_0050b23e
    CMP EBX,0x1e0                       ; 0050b224
    JNZ 0x0050b23e                      ; 0050b22a
        ;   XREF to: 0050b23e (CONDITIONAL_JUMP)  ; LAB_0050b23e
    MOV dword ptr [EAX + 0x4],0x258     ; 0050b22c | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x320           ; 0050b233 | g_CGameInstance
    JMP 0x0050aef2                      ; 0050b239
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [ESP + 0x124],0xb71b00 ; 0050b23e
        ;   Label: LAB_0050b23e
    JLE 0x0050b261                      ; 0050b249
        ;   XREF to: 0050b261 (CONDITIONAL_JUMP)  ; LAB_0050b261
    MOV EAX,[0x0061d95c]                ; 0050b24b | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0x258     ; 0050b250 | g_CGameInstance.game_pixy
    JNZ 0x0050b261                      ; 0050b257
        ;   XREF to: 0050b261 (CONDITIONAL_JUMP)  ; LAB_0050b261
    TEST EDX,EDX                        ; 0050b259
    JZ 0x0050b12d                       ; 0050b25b
        ;   XREF to: 0050b12d (CONDITIONAL_JUMP)  ; LAB_0050b12d
    CMP dword ptr [ESP + 0x124],0x16e3600 ; 0050b261
        ;   Label: LAB_0050b261
    JLE 0x0050b284                      ; 0050b26c
        ;   XREF to: 0050b284 (CONDITIONAL_JUMP)  ; LAB_0050b284
    MOV EAX,[0x0061d95c]                ; 0050b26e | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0x300     ; 0050b273 | g_CGameInstance.game_pixy
    JNZ 0x0050b284                      ; 0050b27a
        ;   XREF to: 0050b284 (CONDITIONAL_JUMP)  ; LAB_0050b284
    TEST EDX,EDX                        ; 0050b27c
    JZ 0x0050aee5                       ; 0050b27e
        ;   XREF to: 0050aee5 (CONDITIONAL_JUMP)  ; LAB_0050aee5
    MOV EAX,[0x0061d95c]                ; 0050b284 | g_CGamePtr
        ;   Label: LAB_0050b284
    MOV dword ptr [EAX],0x140           ; 0050b289 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0xf0      ; 0050b28f | g_CGameInstance.game_pixy
    JMP 0x0050aef2                      ; 0050b296
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [0x02c83370],0x0      ; 0050b29b | DAT_02c83370
        ;   Label: caseD_1
    SETZ AL                             ; 0050b2a2
    AND EAX,0xff                        ; 0050b2a5
    MOV [0x02c83370],EAX                ; 0050b2aa | DAT_02c83370
    JZ 0x0050b34b                       ; 0050b2af
        ;   XREF to: 0050b34b (CONDITIONAL_JUMP)  ; LAB_0050b34b
    CALL engine_special.cpp_kill_FUN_00581f20 ; 0050b2b5
        ;   XREF to: 00581f20 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_00581f20()
    PUSH 0x0                            ; 0050b2ba
    CALL engine_special.cpp_loadExternalRenderer_FUN_00581310 ; 0050b2bc
        ;   XREF to: 00581310 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_loadExternalRenderer_FUN_00581310(HWND window_handle)
    MOV EDI,dword ptr [0x02c83370]      ; 0050b2c1 | DAT_02c83370
    ADD ESP,0x4                         ; 0050b2c7
    TEST EDI,EDI                        ; 0050b2ca
    JZ 0x0050b343                       ; 0050b2cc
        ;   XREF to: 0050b343 (CONDITIONAL_JUMP)  ; LAB_0050b343
    PUSH 0x1d1f69c                      ; 0050b2ce
    PUSH 0x1d1f65c                      ; 0050b2d3 | DAT_01d1f65c
    PUSH 0x1d1f61c                      ; 0050b2d8
    PUSH 0x1d1f5dc                      ; 0050b2dd
    PUSH 0x1d1f5d8                      ; 0050b2e2 | DAT_01d1f5d8
    CALL engine_special.cpp_buildCardList_FUN_00582b30 ; 0050b2e7
        ;   XREF to: 00582b30 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_buildCardList_FUN_00582b30(int * out_card_count, char * * out_driver_names, char * * out_card_names, int * out_vendor_ids, ...)
    ADD ESP,0x14                        ; 0050b2ec
    LEA EAX,[ESP + 0x12c]               ; 0050b2ef
    PUSH EAX                            ; 0050b2f6
    LEA EAX,[ESP + 0x12c]               ; 0050b2f7
    PUSH EAX                            ; 0050b2fe
    LEA EAX,[ESP + 0x12c]               ; 0050b2ff
    PUSH EAX                            ; 0050b306
    CALL engine_special.cpp_getVideoMemory_FUN_00582ae0 ; 0050b307
        ;   XREF to: 00582ae0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_getVideoMemory_FUN_00582ae0(int * total_memory, int * available_memory, int * memory_type)
    ADD ESP,0xc                         ; 0050b30c
    MOV EAX,[0x01d1f5d4]                ; 0050b30f | DAT_01d1f5d4
        ;   Label: LAB_0050b30f
    CMP dword ptr [EAX*0x4 + 0x1d1f65c],0x121a ; 0050b314 | DAT_01d1f65c
    JNZ 0x0050aef2                      ; 0050b31f
        ;   XREF to: 0050aef2 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x0061d95c]                ; 0050b325 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 0050b32a | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 0050b331 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 0050b337 | g_CGameInstance.game_pixy
    JMP 0x0050aef2                      ; 0050b33e
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV dword ptr [0x01d1f5d8],EDI      ; 0050b343 | DAT_01d1f5d8
        ;   Label: LAB_0050b343
    JMP 0x0050b30f                      ; 0050b349
        ;   XREF to: 0050b30f (UNCONDITIONAL_JUMP)  ; LAB_0050b30f
    MOV dword ptr [0x01d1f5d8],EDX      ; 0050b34b | DAT_01d1f5d8
        ;   Label: LAB_0050b34b
    JMP 0x0050aef2                      ; 0050b351
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV ECX,dword ptr [0x01d1f5d8]      ; 0050b356 | DAT_01d1f5d8
        ;   Label: caseD_3
    TEST ECX,ECX                        ; 0050b35c
    JNZ 0x0050b36b                      ; 0050b35e
        ;   XREF to: 0050b36b (CONDITIONAL_JUMP)  ; LAB_0050b36b
    MOV dword ptr [0x01d1f5d4],EDX      ; 0050b360 | DAT_01d1f5d4
    JMP 0x0050aef2                      ; 0050b366
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EBX,dword ptr [0x01d1f5d4]      ; 0050b36b | DAT_01d1f5d4
        ;   Label: LAB_0050b36b
    INC EBX                             ; 0050b371
    MOV dword ptr [0x01d1f5d4],EBX      ; 0050b372 | DAT_01d1f5d4
    CMP EBX,ECX                         ; 0050b378
    JL 0x0050b382                       ; 0050b37a
        ;   XREF to: 0050b382 (CONDITIONAL_JUMP)  ; LAB_0050b382
    MOV dword ptr [0x01d1f5d4],EDX      ; 0050b37c | DAT_01d1f5d4
    MOV EAX,[0x01d1f5d4]                ; 0050b382 | DAT_01d1f5d4
        ;   Label: LAB_0050b382
    PUSH EAX                            ; 0050b387
    CALL engine_special.cpp_selectCard_FUN_00582b10 ; 0050b388
        ;   XREF to: 00582b10 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_selectCard_FUN_00582b10(int card_index)
    MOV EAX,[0x01d1f5d4]                ; 0050b38d | DAT_01d1f5d4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1f65c] ; 0050b392 | DAT_01d1f65c
    ADD ESP,0x4                         ; 0050b399
    CMP EDX,0x121a                      ; 0050b39c
    JNZ 0x0050aef2                      ; 0050b3a2
        ;   XREF to: 0050aef2 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x0061d95c]                ; 0050b3a8 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 0050b3ad | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 0050b3b4 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 0050b3ba | g_CGameInstance.game_pixy
    JMP 0x0050aef2                      ; 0050b3c1
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x0061d95c]                ; 0050b3c6 | g_CGamePtr
        ;   Label: caseD_4
    CMP dword ptr [EAX + 0x8],0x10      ; 0050b3cb | g_CGameInstance.game_bpp
    JNZ 0x0050b3dd                      ; 0050b3cf
        ;   XREF to: 0050b3dd (CONDITIONAL_JUMP)  ; LAB_0050b3dd
    MOV dword ptr [EAX + 0x8],0x20      ; 0050b3d1 | g_CGameInstance.game_bpp
    JMP 0x0050aef2                      ; 0050b3d8
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV dword ptr [EAX + 0x8],0x10      ; 0050b3dd | g_CGameInstance.game_bpp
        ;   Label: LAB_0050b3dd
    JMP 0x0050aef2                      ; 0050b3e4
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    CALL core_menu.cpp_showCalibrationTest_FUN_0050a9c0 ; 0050b3e9
        ;   XREF to: 0050a9c0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTest_FUN_0050a9c0()
        ;   Label: caseD_5
    JMP 0x0050aef2                      ; 0050b3ee
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x0061d95c]                ; 0050b3f3 | g_CGamePtr
        ;   Label: caseD_6
    CMP dword ptr [EAX + 0x10],0x0      ; 0050b3f8 | g_CGameInstance.subtitle_mode
    SETZ DL                             ; 0050b3fc
    AND EDX,0xff                        ; 0050b3ff
    MOV dword ptr [EAX + 0x10],EDX      ; 0050b405 | g_CGameInstance.subtitle_mode
    JMP 0x0050aef2                      ; 0050b408
        ;   XREF to: 0050aef2 (UNCONDITIONAL_JUMP)  ; caseD_7

