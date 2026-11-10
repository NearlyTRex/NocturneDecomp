; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_FUN_004e85a0(void)
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
;   core_menu.cpp_FUN_004ea280 at 004ea3d9
;
; Referenced Globals:
;   void* switchdataD_004e8580 = 004e8a0b
;   undefined1 DAT_005c73f6
;   undefined1 DAT_005c73f7
;   undefined1 DAT_005c73f8
;   TerminatedCString s_dx7_dll_005c73f9
;   TerminatedCString s_Resolution_320x240_005c7401
;   TerminatedCString s_Resolution_400x300_005c7416
;   TerminatedCString s_Resolution_512x384_005c742b
;   TerminatedCString s_Resolution_640x480_005c7440
;   TerminatedCString s_Resolution_800x600_005c7455
;   TerminatedCString s_Resolution_1024x768_005c746a
;   TerminatedCString s_Resolution_1280x960_005c7480
;   TerminatedCString s_Resolution_320x240_005c7496
;   TerminatedCString s_No_3D_Hardware_005c74ab
;   TerminatedCString s_Not_enough_video_memory_005c74ba
;   ... and 59 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004b4430
;   core_game.cpp_FUN_004b4440
;   core_menu.cpp_FUN_004e7860
;   core_menu.cpp_showCalibrationTest_FUN_004e84d0
;   core_moon.cpp_FUN_004f9670
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_special.cpp_buildCardList_FUN_00566400
;   engine_special.cpp_getVideoMemory_FUN_005663b0
;   engine_special.cpp_kill_FUN_005657f0
;   engine_special.cpp_loadExternalRenderer_FUN_00564be0
;   engine_special.cpp_selectCard_FUN_005663e0
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e85a0
        ;   Label: core_menu.cpp_FUN_004e85a0
    PUSH ESI                            ; 004e85a1
    PUSH EDI                            ; 004e85a2
    PUSH EBP                            ; 004e85a3
    SUB ESP,0x130                       ; 004e85a4
    MOV ECX,dword ptr [0x005fe9dc]      ; 004e85aa | g_CGamePtr
    XOR EDX,EDX                         ; 004e85b0
    PUSH ECX                            ; 004e85b2 | g_CGameInstance
    MOV dword ptr [ESP + 0x124],EDX     ; 004e85b3
    CALL core_game.cpp_CGame_saveClockTime_FUN_004b4430 ; 004e85ba
        ;   XREF to: 004b4430 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004b4430(CGame * this_ptr)
    MOV EDX,0x1d73800                   ; 004e85bf
    ADD ESP,0x4                         ; 004e85c4
    XOR EAX,EAX                         ; 004e85c7
    MOV dword ptr [EAX + 0x1d74000],EDX ; 004e85c9
        ;   Label: LAB_004e85c9
    ADD EAX,0x4                         ; 004e85cf
    ADD EDX,0x100                       ; 004e85d2
    CMP EAX,0x20                        ; 004e85d8
    JNZ 0x004e85c9                      ; 004e85db
        ;   XREF to: 004e85c9 (CONDITIONAL_JUMP)  ; LAB_004e85c9
    PUSH 0x1d740e8                      ; 004e85dd
    PUSH 0x1d740a8                      ; 004e85e2
    PUSH 0x1d74068                      ; 004e85e7
    PUSH 0x1d74028                      ; 004e85ec
    PUSH 0x1d74024                      ; 004e85f1 | DAT_01d74024
    XOR EBP,EBP                         ; 004e85f6
    CALL engine_special.cpp_buildCardList_FUN_00566400 ; 004e85f8
        ;   XREF to: 00566400 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_buildCardList_FUN_00566400(int * out_card_count, char * * out_driver_names, char * * out_card_names, int * out_vendor_ids, ...)
    MOV EAX,[0x01d74020]                ; 004e85fd | DAT_01d74020
    MOV EBX,dword ptr [0x01d74024]      ; 004e8602 | DAT_01d74024
    ADD ESP,0x14                        ; 004e8608
    CMP EAX,EBX                         ; 004e860b
    JL 0x004e8615                       ; 004e860d
        ;   XREF to: 004e8615 (CONDITIONAL_JUMP)  ; LAB_004e8615
    MOV dword ptr [0x01d74020],EBP      ; 004e860f | DAT_01d74020
    LEA EAX,[ESP + 0x12c]               ; 004e8615
        ;   Label: LAB_004e8615
    PUSH EAX                            ; 004e861c
    LEA EAX,[ESP + 0x12c]               ; 004e861d
    XOR EDI,EDI                         ; 004e8624
    PUSH EAX                            ; 004e8626
    LEA EAX,[ESP + 0x12c]               ; 004e8627
    MOV dword ptr [ESP + 0x12c],EDI     ; 004e862e
    PUSH EAX                            ; 004e8635
    MOV dword ptr [ESP + 0x134],EDI     ; 004e8636
    MOV dword ptr [ESP + 0x138],EDI     ; 004e863d
    CALL engine_special.cpp_getVideoMemory_FUN_005663b0 ; 004e8644
        ;   XREF to: 005663b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_getVideoMemory_FUN_005663b0(int * total_memory, int * available_memory, int * memory_type)
    ADD ESP,0xc                         ; 004e8649
    MOV ECX,dword ptr [0x005fe9dc]      ; 004e864c | g_CGamePtr
        ;   Label: LAB_004e864c
    PUSH ECX                            ; 004e8652 | g_CGameInstance
    CALL core_game.cpp_FUN_004b4440     ; 004e8653
        ;   XREF to: 004b4440 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004b4440()
    ADD ESP,0x4                         ; 004e8658
    PUSH 0x10000                        ; 004e865b
    PUSH 0xc350                         ; 004e8660
    PUSH 0xc350                         ; 004e8665
    MOV EAX,[0x00603b28]                ; 004e866a | g_CDemonSetPtr
    PUSH EAX                            ; 004e866f | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004e8670 | g_CDemonSetInstance.rendering_mode
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100 ; 004e867a
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004e867f
    MOV EAX,[0x00603b28]                ; 004e8682 | g_CDemonSetPtr
    PUSH 0x1d72cb0                      ; 004e8687
    MOV ESI,0x5c73f6                    ; 004e868c | DAT_005c73f6
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004e8691 | g_CDemonSetInstance.ambient_base_quick
    CALL core_moon.cpp_FUN_004f9670     ; 004e869b
        ;   XREF to: 004f9670 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_004f9670()
    MOV EAX,[0x00603b28]                ; 004e86a0 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004e86a5
    MOV EDI,0x606730                    ; 004e86a8 | DAT_00606730
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004e86ad | g_CDemonSetInstance.rendering_mode
    PUSH EDI                            ; 004e86b7 | DAT_00606730
    MOV AL,byte ptr [ESI]               ; 004e86b8 | DAT_005c73f6 | DAT_005c73f8
        ;   Label: LAB_004e86b8
    MOV byte ptr [EDI],AL               ; 004e86ba | DAT_00606730 | DAT_00606732
    CMP AL,0x0                          ; 004e86bc
    JZ 0x004e86d0                       ; 004e86be
        ;   XREF to: 004e86d0 (CONDITIONAL_JUMP)  ; LAB_004e86d0
    MOV AL,byte ptr [ESI + 0x1]         ; 004e86c0 | DAT_005c73f7 | = "dx7.dll"
    ADD ESI,0x2                         ; 004e86c3
    MOV byte ptr [EDI + 0x1],AL         ; 004e86c6 | DAT_00606731 | = "d3d.dll"
    ADD EDI,0x2                         ; 004e86c9
    CMP AL,0x0                          ; 004e86cc
    JNZ 0x004e86b8                      ; 004e86ce
        ;   XREF to: 004e86b8 (CONDITIONAL_JUMP)  ; LAB_004e86b8
    POP EDI                             ; 004e86d0
        ;   Label: LAB_004e86d0
    CMP dword ptr [0x01d74024],0x0      ; 004e86d1 | DAT_01d74024
    JLE 0x004e87c6                      ; 004e86d8
        ;   XREF to: 004e87c6 (CONDITIONAL_JUMP)  ; LAB_004e87c6
    CMP dword ptr [0x02cf5fcc],0x0      ; 004e86de | DAT_02cf5fcc
    JZ 0x004e87c6                       ; 004e86e5
        ;   XREF to: 004e87c6 (CONDITIONAL_JUMP)  ; LAB_004e87c6
    MOV EAX,[0x01d74020]                ; 004e86eb | DAT_01d74020
    SHL EAX,0x2                         ; 004e86f0
    CMP dword ptr [EAX + 0x1d740a8],0x121a ; 004e86f3 | DAT_01d740a8
    JNZ 0x004e8721                      ; 004e86fd
        ;   XREF to: 004e8721 (CONDITIONAL_JUMP)  ; LAB_004e8721
    CMP dword ptr [EAX + 0x1d740e8],0x5 ; 004e86ff
    JG 0x004e8721                       ; 004e8706
        ;   XREF to: 004e8721 (CONDITIONAL_JUMP)  ; LAB_004e8721
    MOV EAX,[0x005fe9dc]                ; 004e8708 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 004e870d | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 004e8714 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e871a | g_CGameInstance.game_pixy
    MOV EAX,[0x01d74020]                ; 004e8721 | DAT_01d74020
        ;   Label: LAB_004e8721
    SHL EAX,0x2                         ; 004e8726
    CMP dword ptr [EAX + 0x1d740a8],0x8086 ; 004e8729 | DAT_01d740a8
    JNZ 0x004e875a                      ; 004e8733
        ;   XREF to: 004e875a (CONDITIONAL_JUMP)  ; LAB_004e875a
    CMP dword ptr [EAX + 0x1d740e8],0x7800 ; 004e8735
    JNZ 0x004e875a                      ; 004e873f
        ;   XREF to: 004e875a (CONDITIONAL_JUMP)  ; LAB_004e875a
    MOV EAX,[0x005fe9dc]                ; 004e8741 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 004e8746 | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 004e874d | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e8753 | g_CGameInstance.game_pixy
    MOV EAX,[0x01d74020]                ; 004e875a | DAT_01d74020
        ;   Label: LAB_004e875a
    SHL EAX,0x2                         ; 004e875f
    CMP dword ptr [EAX + 0x1d740a8],0x12d2 ; 004e8762 | DAT_01d740a8
    JNZ 0x004e8790                      ; 004e876c
        ;   XREF to: 004e8790 (CONDITIONAL_JUMP)  ; LAB_004e8790
    CMP dword ptr [EAX + 0x1d740e8],0x18 ; 004e876e
    JNZ 0x004e8790                      ; 004e8775
        ;   XREF to: 004e8790 (CONDITIONAL_JUMP)  ; LAB_004e8790
    MOV EAX,[0x005fe9dc]                ; 004e8777 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 004e877c | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 004e8783 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e8789 | g_CGameInstance.game_pixy
    MOV EAX,[0x01d74020]                ; 004e8790 | DAT_01d74020
        ;   Label: LAB_004e8790
    SHL EAX,0x2                         ; 004e8795
    CMP dword ptr [EAX + 0x1d740a8],0x12d2 ; 004e8798 | DAT_01d740a8
    JNZ 0x004e87c6                      ; 004e87a2
        ;   XREF to: 004e87c6 (CONDITIONAL_JUMP)  ; LAB_004e87c6
    CMP dword ptr [EAX + 0x1d740e8],0x19 ; 004e87a4
    JNZ 0x004e87c6                      ; 004e87ab
        ;   XREF to: 004e87c6 (CONDITIONAL_JUMP)  ; LAB_004e87c6
    MOV EAX,[0x005fe9dc]                ; 004e87ad | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 004e87b2 | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 004e87b9 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e87bf | g_CGameInstance.game_pixy
    CMP dword ptr [0x02cf5fcc],0x0      ; 004e87c6 | DAT_02cf5fcc
        ;   Label: LAB_004e87c6
    JNZ 0x004e87ea                      ; 004e87cd
        ;   XREF to: 004e87ea (CONDITIONAL_JUMP)  ; LAB_004e87ea
    MOV EAX,[0x005fe9dc]                ; 004e87cf | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0x1e0     ; 004e87d4 | g_CGameInstance.game_pixy
    JLE 0x004e87ea                      ; 004e87db
        ;   XREF to: 004e87ea (CONDITIONAL_JUMP)  ; LAB_004e87ea
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e87dd | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x280           ; 004e87e4 | g_CGameInstance
    MOV EAX,[0x005fe9dc]                ; 004e87ea | g_CGamePtr
        ;   Label: LAB_004e87ea
    MOV EDI,dword ptr [EAX + 0x4]       ; 004e87ef | g_CGameInstance.game_pixy
    CMP EDI,0xf0                        ; 004e87f2
    JNZ 0x004e8a6b                      ; 004e87f8
        ;   XREF to: 004e8a6b (CONDITIONAL_JUMP)  ; LAB_004e8a6b
    PUSH 0x5c7401                       ; 004e87fe | = "Resolution : 320x240"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e8803
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004e8803
    ADD ESP,0x4                         ; 004e8808
    PUSH EAX                            ; 004e880b
    PUSH 0x1d73800                      ; 004e880c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e8811
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004e8816
    MOV EAX,[0x005fe9dc]                ; 004e8819 | g_CGamePtr
    MOV dword ptr [EAX + 0xc],0x0       ; 004e881e | g_CGameInstance.field3_0xc
    TEST EBP,EBP                        ; 004e8825
    JZ 0x004e8aeb                       ; 004e8827
        ;   XREF to: 004e8aeb (CONDITIONAL_JUMP)  ; LAB_004e8aeb
    XOR EBX,EBX                         ; 004e882d
    MOV ESI,dword ptr [0x01d74024]      ; 004e882f | DAT_01d74024
    MOV dword ptr [0x02cf5fcc],EBX      ; 004e8835 | DAT_02cf5fcc
    TEST ESI,ESI                        ; 004e883b
    JNZ 0x004e8ae1                      ; 004e883d
        ;   XREF to: 004e8ae1 (CONDITIONAL_JUMP)  ; LAB_004e8ae1
    PUSH 0x5c74ab                       ; 004e8843 | = "No 3D Hardware"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e8848
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004e8848
    ADD ESP,0x4                         ; 004e884d
    PUSH EAX                            ; 004e8850
    PUSH 0x1d73900                      ; 004e8851
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e8856
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004e885b
    CMP dword ptr [0x01d74024],0x0      ; 004e885e | DAT_01d74024
    JNZ 0x004e8b08                      ; 004e8865
        ;   XREF to: 004e8b08 (CONDITIONAL_JUMP)  ; LAB_004e8b08
    PUSH 0x5c7501                       ; 004e886b | = "No 3D Hardware detected"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e8870
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e8875
    PUSH EAX                            ; 004e8878
    PUSH 0x1d73a00                      ; 004e8879
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e887e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004e8883
    PUSH 0x5c752a                       ; 004e8886 | = "Bits Per Pixel : "
        ;   Label: LAB_004e8886
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e888b
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e8890
    MOV EDI,0x1d73b00                   ; 004e8893
    MOV ESI,EAX                         ; 004e8898
    PUSH EDI                            ; 004e889a
    MOV AL,byte ptr [ESI]               ; 004e889b
        ;   Label: LAB_004e889b
    MOV byte ptr [EDI],AL               ; 004e889d | DAT_01d73b00 | DAT_01d73b02
    CMP AL,0x0                          ; 004e889f
    JZ 0x004e88b3                       ; 004e88a1
        ;   XREF to: 004e88b3 (CONDITIONAL_JUMP)  ; LAB_004e88b3
    MOV AL,byte ptr [ESI + 0x1]         ; 004e88a3
    ADD ESI,0x2                         ; 004e88a6
    MOV byte ptr [EDI + 0x1],AL         ; 004e88a9 | DAT_01d73b01 | DAT_01d73b03
    ADD EDI,0x2                         ; 004e88ac
    CMP AL,0x0                          ; 004e88af
    JNZ 0x004e889b                      ; 004e88b1
        ;   XREF to: 004e889b (CONDITIONAL_JUMP)  ; LAB_004e889b
    POP EDI                             ; 004e88b3
        ;   Label: LAB_004e88b3
    MOV EAX,[0x005fe9dc]                ; 004e88b4 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e88b9 | g_CGameInstance.game_bpp
    PUSH EDX                            ; 004e88bc
    PUSH 0x5c753c                       ; 004e88bd | DAT_005c753c
    LEA EAX,[ESP + 0x8]                 ; 004e88c2
    PUSH EAX                            ; 004e88c6
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e88c7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e88cc
    MOV ESI,ESP                         ; 004e88cf
    PUSH EDI                            ; 004e88d1 | DAT_01d73b00
    SUB ECX,ECX                         ; 004e88d2
    DEC ECX                             ; 004e88d4
    MOV AL,0x0                          ; 004e88d5
    SCASB.REPNE ES:EDI                  ; 004e88d7 | DAT_01d73b00 | DAT_01d73b01
    DEC EDI                             ; 004e88d9
    MOV AL,byte ptr [ESI]               ; 004e88da
        ;   Label: LAB_004e88da
    MOV byte ptr [EDI],AL               ; 004e88dc | DAT_01d73b00 | DAT_01d73b02 | DAT_01d73b01
    CMP AL,0x0                          ; 004e88de
    JZ 0x004e88f2                       ; 004e88e0
        ;   XREF to: 004e88f2 (CONDITIONAL_JUMP)  ; LAB_004e88f2
    MOV AL,byte ptr [ESI + 0x1]         ; 004e88e2
    ADD ESI,0x2                         ; 004e88e5
    MOV byte ptr [EDI + 0x1],AL         ; 004e88e8 | DAT_01d73b01 | DAT_01d73b03 | DAT_01d73b02
    ADD EDI,0x2                         ; 004e88eb
    CMP AL,0x0                          ; 004e88ee
    JNZ 0x004e88da                      ; 004e88f0
        ;   XREF to: 004e88da (CONDITIONAL_JUMP)  ; LAB_004e88da
    POP EDI                             ; 004e88f2
        ;   Label: LAB_004e88f2
    PUSH 0x5c753f                       ; 004e88f3 | = "Monitor Calibration"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e88f8
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e88fd
    PUSH EAX                            ; 004e8900
    PUSH 0x1d73c00                      ; 004e8901
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e8906
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,[0x005fe9dc]                ; 004e890b | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x10]      ; 004e8910 | g_CGameInstance.field7_0x10
    ADD ESP,0x8                         ; 004e8913
    TEST ECX,ECX                        ; 004e8916
    JZ 0x004e8bae                       ; 004e8918
        ;   XREF to: 004e8bae (CONDITIONAL_JUMP)  ; LAB_004e8bae
    PUSH 0x5c7553                       ; 004e891e | = "Subtitles : On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e8923
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004e8923
    ADD ESP,0x4                         ; 004e8928
    MOV EDI,0x1d73d00                   ; 004e892b
    MOV ESI,EAX                         ; 004e8930
    PUSH EDI                            ; 004e8932 | DAT_01d73d00
    MOV AL,byte ptr [ESI]               ; 004e8933
        ;   Label: LAB_004e8933
    MOV byte ptr [EDI],AL               ; 004e8935 | DAT_01d73d00 | DAT_01d73d02
    CMP AL,0x0                          ; 004e8937
    JZ 0x004e894b                       ; 004e8939
        ;   XREF to: 004e894b (CONDITIONAL_JUMP)  ; LAB_004e894b
    MOV AL,byte ptr [ESI + 0x1]         ; 004e893b
    ADD ESI,0x2                         ; 004e893e
    MOV byte ptr [EDI + 0x1],AL         ; 004e8941 | DAT_01d73d01 | DAT_01d73d03
    ADD EDI,0x2                         ; 004e8944
    CMP AL,0x0                          ; 004e8947
    JNZ 0x004e8933                      ; 004e8949
        ;   XREF to: 004e8933 (CONDITIONAL_JUMP)  ; LAB_004e8933
    POP EDI                             ; 004e894b
        ;   Label: LAB_004e894b
    MOV EAX,[0x005fe9dc]                ; 004e894c | g_CGamePtr
    CMP dword ptr [EAX + 0xe0],0x0      ; 004e8951 | g_CGameInstance.field176_0xe0
    JZ 0x004e8bb8                       ; 004e8958
        ;   XREF to: 004e8bb8 (CONDITIONAL_JUMP)  ; LAB_004e8bb8
    PUSH 0x5c7572                       ; 004e895e | = "Health/Mana Numbers : On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e8963
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004e8963
    ADD ESP,0x4                         ; 004e8968
    MOV EDI,0x1d73e00                   ; 004e896b
    MOV ESI,EAX                         ; 004e8970
    PUSH EDI                            ; 004e8972 | DAT_01d73e00
    MOV AL,byte ptr [ESI]               ; 004e8973
        ;   Label: LAB_004e8973
    MOV byte ptr [EDI],AL               ; 004e8975 | DAT_01d73e00 | DAT_01d73e02
    CMP AL,0x0                          ; 004e8977
    JZ 0x004e898b                       ; 004e8979
        ;   XREF to: 004e898b (CONDITIONAL_JUMP)  ; LAB_004e898b
    MOV AL,byte ptr [ESI + 0x1]         ; 004e897b
    ADD ESI,0x2                         ; 004e897e
    MOV byte ptr [EDI + 0x1],AL         ; 004e8981 | DAT_01d73e01 | DAT_01d73e03
    ADD EDI,0x2                         ; 004e8984
    CMP AL,0x0                          ; 004e8987
    JNZ 0x004e8973                      ; 004e8989
        ;   XREF to: 004e8973 (CONDITIONAL_JUMP)  ; LAB_004e8973
    POP EDI                             ; 004e898b
        ;   Label: LAB_004e898b
    MOV EAX,[0x005fe9dc]                ; 004e898c | g_CGamePtr
    CMP dword ptr [EAX + 0xe4],0x0      ; 004e8991 | g_CGameInstance.field180_0xe4
    JZ 0x004e8bc2                       ; 004e8998
        ;   XREF to: 004e8bc2 (CONDITIONAL_JUMP)  ; LAB_004e8bc2
    PUSH 0x5c75a5                       ; 004e899e | = "Display Crosshair : On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e89a3
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004e89a3
    ADD ESP,0x4                         ; 004e89a8
    MOV EDI,0x1d73f00                   ; 004e89ab
    MOV ESI,EAX                         ; 004e89b0
    PUSH EDI                            ; 004e89b2 | DAT_01d73f00
    MOV AL,byte ptr [ESI]               ; 004e89b3
        ;   Label: LAB_004e89b3
    MOV byte ptr [EDI],AL               ; 004e89b5 | DAT_01d73f00 | DAT_01d73f02
    CMP AL,0x0                          ; 004e89b7
    JZ 0x004e89cb                       ; 004e89b9
        ;   XREF to: 004e89cb (CONDITIONAL_JUMP)  ; LAB_004e89cb
    MOV AL,byte ptr [ESI + 0x1]         ; 004e89bb
    ADD ESI,0x2                         ; 004e89be
    MOV byte ptr [EDI + 0x1],AL         ; 004e89c1 | DAT_01d73f01 | DAT_01d73f03
    ADD EDI,0x2                         ; 004e89c4
    CMP AL,0x0                          ; 004e89c7
    JNZ 0x004e89b3                      ; 004e89c9
        ;   XREF to: 004e89b3 (CONDITIONAL_JUMP)  ; LAB_004e89b3
    POP EDI                             ; 004e89cb
        ;   Label: LAB_004e89cb
    PUSH 0x5c75d4                       ; 004e89cc | = "Graphic Options"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e89d1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e89d6
    PUSH EAX                            ; 004e89d9
    PUSH 0xc8                           ; 004e89da
    LEA EAX,[ESP + 0x128]               ; 004e89df
    PUSH EAX                            ; 004e89e6
    PUSH 0x8                            ; 004e89e7
    PUSH 0x1d74000                      ; 004e89e9
    CALL core_menu.cpp_FUN_004e7860     ; 004e89ee
        ;   XREF to: 004e7860 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_FUN_004e7860(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
    ADD ESP,0x14                        ; 004e89f3
    MOV EBX,EAX                         ; 004e89f6
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 004e89f8
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    XOR EDX,EDX                         ; 004e89fd
    CMP EBX,0x7                         ; 004e89ff
    JA 0x004e8a48                       ; 004e8a02
        ;   XREF to: 004e8a48 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4e8580]  ; 004e8a04 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [0x01d737d4],0x1      ; 004e8a0b | DAT_01d737d4
        ;   Label: caseD_0
    JNZ 0x004e8ca1                      ; 004e8a12
        ;   XREF to: 004e8ca1 (CONDITIONAL_JUMP)  ; LAB_004e8ca1
    MOV EAX,[0x005fe9dc]                ; 004e8a18 | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0xf0      ; 004e8a1d | g_CGameInstance.game_pixy
    JNZ 0x004e8bcc                      ; 004e8a24
        ;   XREF to: 004e8bcc (CONDITIONAL_JUMP)  ; LAB_004e8bcc
    CMP dword ptr [ESP + 0x124],0x16e3600 ; 004e8a2a
    JLE 0x004e8bcc                      ; 004e8a35
        ;   XREF to: 004e8bcc (CONDITIONAL_JUMP)  ; LAB_004e8bcc
    MOV dword ptr [EAX + 0x4],0x3c0     ; 004e8a3b | g_CGameInstance.game_pixy
        ;   Label: LAB_004e8a3b
    MOV dword ptr [EAX],0x500           ; 004e8a42 | g_CGameInstance
    PUSH 0x1                            ; 004e8a48
        ;   Label: default
    MOV EAX,[0x00600284]                ; 004e8a4a | DAT_00600284
    PUSH EAX                            ; 004e8a4f | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e8a50 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e8a52
    ADD ESP,0x8                         ; 004e8a55
    TEST EAX,EAX                        ; 004e8a58
    JZ 0x004e864c                       ; 004e8a5a
        ;   XREF to: 004e864c (CONDITIONAL_JUMP)  ; LAB_004e864c
    ADD ESP,0x130                       ; 004e8a60
    POP EBP                             ; 004e8a66
    POP EDI                             ; 004e8a67
    POP ESI                             ; 004e8a68
    POP EBX                             ; 004e8a69
    RET                                 ; 004e8a6a
    CMP EDI,0x12c                       ; 004e8a6b
        ;   Label: LAB_004e8a6b
    JZ 0x004e8aa5                       ; 004e8a71
        ;   XREF to: 004e8aa5 (CONDITIONAL_JUMP)  ; LAB_004e8aa5
    CMP EDI,0x180                       ; 004e8a73
    JZ 0x004e8aaf                       ; 004e8a79
        ;   XREF to: 004e8aaf (CONDITIONAL_JUMP)  ; LAB_004e8aaf
    CMP EDI,0x1e0                       ; 004e8a7b
    JZ 0x004e8ab9                       ; 004e8a81
        ;   XREF to: 004e8ab9 (CONDITIONAL_JUMP)  ; LAB_004e8ab9
    CMP EDI,0x258                       ; 004e8a83
    JZ 0x004e8ac3                       ; 004e8a89
        ;   XREF to: 004e8ac3 (CONDITIONAL_JUMP)  ; LAB_004e8ac3
    CMP EDI,0x300                       ; 004e8a8b
    JZ 0x004e8acd                       ; 004e8a91
        ;   XREF to: 004e8acd (CONDITIONAL_JUMP)  ; LAB_004e8acd
    CMP EDI,0x3c0                       ; 004e8a93
    JNZ 0x004e8ad7                      ; 004e8a99
        ;   XREF to: 004e8ad7 (CONDITIONAL_JUMP)  ; LAB_004e8ad7
    PUSH 0x5c7480                       ; 004e8a9b | = "Resolution : 1280x960"
    JMP 0x004e8803                      ; 004e8aa0
        ;   XREF to: 004e8803 (UNCONDITIONAL_JUMP)  ; LAB_004e8803
    PUSH 0x5c7416                       ; 004e8aa5 | = "Resolution : 400x300"
        ;   Label: LAB_004e8aa5
    JMP 0x004e8803                      ; 004e8aaa
        ;   XREF to: 004e8803 (UNCONDITIONAL_JUMP)  ; LAB_004e8803
    PUSH 0x5c742b                       ; 004e8aaf | = "Resolution : 512x384"
        ;   Label: LAB_004e8aaf
    JMP 0x004e8803                      ; 004e8ab4
        ;   XREF to: 004e8803 (UNCONDITIONAL_JUMP)  ; LAB_004e8803
    PUSH 0x5c7440                       ; 004e8ab9 | = "Resolution : 640x480"
        ;   Label: LAB_004e8ab9
    JMP 0x004e8803                      ; 004e8abe
        ;   XREF to: 004e8803 (UNCONDITIONAL_JUMP)  ; LAB_004e8803
    PUSH 0x5c7455                       ; 004e8ac3 | = "Resolution : 800x600"
        ;   Label: LAB_004e8ac3
    JMP 0x004e8803                      ; 004e8ac8
        ;   XREF to: 004e8803 (UNCONDITIONAL_JUMP)  ; LAB_004e8803
    PUSH 0x5c746a                       ; 004e8acd | = "Resolution : 1024x768"
        ;   Label: LAB_004e8acd
    JMP 0x004e8803                      ; 004e8ad2
        ;   XREF to: 004e8803 (UNCONDITIONAL_JUMP)  ; LAB_004e8803
    PUSH 0x5c7496                       ; 004e8ad7 | = "Resolution : 320x240"
        ;   Label: LAB_004e8ad7
    JMP 0x004e8803                      ; 004e8adc
        ;   XREF to: 004e8803 (UNCONDITIONAL_JUMP)  ; LAB_004e8803
    PUSH 0x5c74ba                       ; 004e8ae1 | = "Not enough video memory for 3D card"
        ;   Label: LAB_004e8ae1
    JMP 0x004e8848                      ; 004e8ae6
        ;   XREF to: 004e8848 (UNCONDITIONAL_JUMP)  ; LAB_004e8848
    CMP dword ptr [0x02cf5fcc],0x0      ; 004e8aeb | DAT_02cf5fcc
        ;   Label: LAB_004e8aeb
    JZ 0x004e8afe                       ; 004e8af2
        ;   XREF to: 004e8afe (CONDITIONAL_JUMP)  ; LAB_004e8afe
    PUSH 0x5c74de                       ; 004e8af4 | = "3D Hardware : On"
    JMP 0x004e8848                      ; 004e8af9
        ;   XREF to: 004e8848 (UNCONDITIONAL_JUMP)  ; LAB_004e8848
    PUSH 0x5c74ef                       ; 004e8afe | = "3D Hardware : Off"
        ;   Label: LAB_004e8afe
    JMP 0x004e8848                      ; 004e8b03
        ;   XREF to: 004e8848 (UNCONDITIONAL_JUMP)  ; LAB_004e8848
    PUSH 0x5c7519                       ; 004e8b08 | = "3D Card : "
        ;   Label: LAB_004e8b08
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e8b0d
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e8b12
    MOV EDI,0x1d73a00                   ; 004e8b15
    MOV ESI,EAX                         ; 004e8b1a
    PUSH EDI                            ; 004e8b1c
    MOV AL,byte ptr [ESI]               ; 004e8b1d
        ;   Label: LAB_004e8b1d
    MOV byte ptr [EDI],AL               ; 004e8b1f | DAT_01d73a00 | DAT_01d73a02
    CMP AL,0x0                          ; 004e8b21
    JZ 0x004e8b35                       ; 004e8b23
        ;   XREF to: 004e8b35 (CONDITIONAL_JUMP)  ; LAB_004e8b35
    MOV AL,byte ptr [ESI + 0x1]         ; 004e8b25
    ADD ESI,0x2                         ; 004e8b28
    MOV byte ptr [EDI + 0x1],AL         ; 004e8b2b | DAT_01d73a01 | DAT_01d73a03
    ADD EDI,0x2                         ; 004e8b2e
    CMP AL,0x0                          ; 004e8b31
    JNZ 0x004e8b1d                      ; 004e8b33
        ;   XREF to: 004e8b1d (CONDITIONAL_JUMP)  ; LAB_004e8b1d
    POP EDI                             ; 004e8b35
        ;   Label: LAB_004e8b35
    MOV ESI,dword ptr [0x01d74020]      ; 004e8b36 | DAT_01d74020
    MOV ESI,dword ptr [ESI*0x4 + 0x1d74068] ; 004e8b3c | DAT_01d74068
    PUSH EDI                            ; 004e8b43 | DAT_01d73a00
    SUB ECX,ECX                         ; 004e8b44
    DEC ECX                             ; 004e8b46
    MOV AL,0x0                          ; 004e8b47
    SCASB.REPNE ES:EDI                  ; 004e8b49 | DAT_01d73a00 | DAT_01d73a01
    DEC EDI                             ; 004e8b4b
    MOV AL,byte ptr [ESI]               ; 004e8b4c
        ;   Label: LAB_004e8b4c
    MOV byte ptr [EDI],AL               ; 004e8b4e | DAT_01d73a00 | DAT_01d73a02 | DAT_01d73a01
    CMP AL,0x0                          ; 004e8b50
    JZ 0x004e8b64                       ; 004e8b52
        ;   XREF to: 004e8b64 (CONDITIONAL_JUMP)  ; LAB_004e8b64
    MOV AL,byte ptr [ESI + 0x1]         ; 004e8b54
    ADD ESI,0x2                         ; 004e8b57
    MOV byte ptr [EDI + 0x1],AL         ; 004e8b5a | DAT_01d73a01 | DAT_01d73a03 | DAT_01d73a02
    ADD EDI,0x2                         ; 004e8b5d
    CMP AL,0x0                          ; 004e8b60
    JNZ 0x004e8b4c                      ; 004e8b62
        ;   XREF to: 004e8b4c (CONDITIONAL_JUMP)  ; LAB_004e8b4c
    POP EDI                             ; 004e8b64
        ;   Label: LAB_004e8b64
    MOV EAX,[0x01d74020]                ; 004e8b65 | DAT_01d74020
    PUSH EAX                            ; 004e8b6a
    PUSH 0x5c7524                       ; 004e8b6b | = " (%d)"
    LEA EAX,[ESP + 0x108]               ; 004e8b70
    PUSH EAX                            ; 004e8b77
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e8b78
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e8b7d
    LEA ESI,[ESP + 0x100]               ; 004e8b80
    PUSH EDI                            ; 004e8b87 | DAT_01d73a00
    SUB ECX,ECX                         ; 004e8b88
    DEC ECX                             ; 004e8b8a
    MOV AL,0x0                          ; 004e8b8b
    SCASB.REPNE ES:EDI                  ; 004e8b8d | DAT_01d73a00 | DAT_01d73a01
    DEC EDI                             ; 004e8b8f
    MOV AL,byte ptr [ESI]               ; 004e8b90
        ;   Label: LAB_004e8b90
    MOV byte ptr [EDI],AL               ; 004e8b92 | DAT_01d73a00 | DAT_01d73a02 | DAT_01d73a01
    CMP AL,0x0                          ; 004e8b94
    JZ 0x004e8ba8                       ; 004e8b96
        ;   XREF to: 004e8ba8 (CONDITIONAL_JUMP)  ; LAB_004e8ba8
    MOV AL,byte ptr [ESI + 0x1]         ; 004e8b98
    ADD ESI,0x2                         ; 004e8b9b
    MOV byte ptr [EDI + 0x1],AL         ; 004e8b9e | DAT_01d73a01 | DAT_01d73a03 | DAT_01d73a02
    ADD EDI,0x2                         ; 004e8ba1
    CMP AL,0x0                          ; 004e8ba4
    JNZ 0x004e8b90                      ; 004e8ba6
        ;   XREF to: 004e8b90 (CONDITIONAL_JUMP)  ; LAB_004e8b90
    POP EDI                             ; 004e8ba8
        ;   Label: LAB_004e8ba8
    JMP 0x004e8886                      ; 004e8ba9
        ;   XREF to: 004e8886 (UNCONDITIONAL_JUMP)  ; LAB_004e8886
    PUSH 0x5c7562                       ; 004e8bae | = "Subtitles : Off"
        ;   Label: LAB_004e8bae
    JMP 0x004e8923                      ; 004e8bb3
        ;   XREF to: 004e8923 (UNCONDITIONAL_JUMP)  ; LAB_004e8923
    PUSH 0x5c758b                       ; 004e8bb8 | = "Health/Mana Numbers : Off"
        ;   Label: LAB_004e8bb8
    JMP 0x004e8963                      ; 004e8bbd
        ;   XREF to: 004e8963 (UNCONDITIONAL_JUMP)  ; LAB_004e8963
    PUSH 0x5c75bc                       ; 004e8bc2 | = "Display Crosshair : Off"
        ;   Label: LAB_004e8bc2
    JMP 0x004e89a3                      ; 004e8bc7
        ;   XREF to: 004e89a3 (UNCONDITIONAL_JUMP)  ; LAB_004e89a3
    MOV EAX,[0x005fe9dc]                ; 004e8bcc | g_CGamePtr
        ;   Label: LAB_004e8bcc
    CMP dword ptr [EAX + 0x4],0xf0      ; 004e8bd1 | g_CGameInstance.game_pixy
    JNZ 0x004e8beb                      ; 004e8bd8
        ;   XREF to: 004e8beb (CONDITIONAL_JUMP)  ; LAB_004e8beb
    CMP dword ptr [ESP + 0x124],0xb71b00 ; 004e8bda
    JLE 0x004e8beb                      ; 004e8be5
        ;   XREF to: 004e8beb (CONDITIONAL_JUMP)  ; LAB_004e8beb
    TEST EDX,EDX                        ; 004e8be7
    JZ 0x004e8c0d                       ; 004e8be9
        ;   XREF to: 004e8c0d (CONDITIONAL_JUMP)  ; LAB_004e8c0d
    MOV EAX,[0x005fe9dc]                ; 004e8beb | g_CGamePtr
        ;   Label: LAB_004e8beb
    MOV EBX,dword ptr [EAX + 0x4]       ; 004e8bf0 | g_CGameInstance.game_pixy
    CMP EBX,0xf0                        ; 004e8bf3
    JNZ 0x004e8c1f                      ; 004e8bf9
        ;   XREF to: 004e8c1f (CONDITIONAL_JUMP)  ; LAB_004e8c1f
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e8bfb | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x280           ; 004e8c02 | g_CGameInstance
    JMP 0x004e8a48                      ; 004e8c08
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0x4],0x300     ; 004e8c0d | g_CGameInstance.game_pixy
        ;   Label: LAB_004e8c0d
    MOV dword ptr [EAX],0x400           ; 004e8c14 | g_CGameInstance
    JMP 0x004e8a48                      ; 004e8c1a
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    CMP EBX,0x12c                       ; 004e8c1f
        ;   Label: LAB_004e8c1f
    JNZ 0x004e8c39                      ; 004e8c25
        ;   XREF to: 004e8c39 (CONDITIONAL_JUMP)  ; LAB_004e8c39
    MOV dword ptr [EAX + 0x4],0xf0      ; 004e8c27 | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x140           ; 004e8c2e | g_CGameInstance
    JMP 0x004e8a48                      ; 004e8c34
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    CMP EBX,0x180                       ; 004e8c39
        ;   Label: LAB_004e8c39
    JNZ 0x004e8c53                      ; 004e8c3f
        ;   XREF to: 004e8c53 (CONDITIONAL_JUMP)  ; LAB_004e8c53
    MOV dword ptr [EAX + 0x4],0xf0      ; 004e8c41 | g_CGameInstance.game_pixy
        ;   Label: LAB_004e8c41
    MOV dword ptr [EAX],0x140           ; 004e8c48 | g_CGameInstance
    JMP 0x004e8a48                      ; 004e8c4e
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    CMP EBX,0x1e0                       ; 004e8c53
        ;   Label: LAB_004e8c53
    JNZ 0x004e8c6d                      ; 004e8c59
        ;   XREF to: 004e8c6d (CONDITIONAL_JUMP)  ; LAB_004e8c6d
    MOV dword ptr [EAX + 0x4],0x180     ; 004e8c5b | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x200           ; 004e8c62 | g_CGameInstance
    JMP 0x004e8a48                      ; 004e8c68
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    CMP EBX,0x258                       ; 004e8c6d
        ;   Label: LAB_004e8c6d
    JNZ 0x004e8c87                      ; 004e8c73
        ;   XREF to: 004e8c87 (CONDITIONAL_JUMP)  ; LAB_004e8c87
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e8c75 | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x280           ; 004e8c7c | g_CGameInstance
    JMP 0x004e8a48                      ; 004e8c82
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    CMP EBX,0x300                       ; 004e8c87
        ;   Label: LAB_004e8c87
    JNZ 0x004e8c41                      ; 004e8c8d
        ;   XREF to: 004e8c41 (CONDITIONAL_JUMP)  ; LAB_004e8c41
    MOV dword ptr [EAX + 0x4],0x258     ; 004e8c8f | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x320           ; 004e8c96 | g_CGameInstance
    JMP 0x004e8a48                      ; 004e8c9c
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 004e8ca1 | g_CGamePtr
        ;   Label: LAB_004e8ca1
    MOV ECX,dword ptr [EAX + 0x4]       ; 004e8ca6 | g_CGameInstance.game_pixy
    CMP ECX,0xf0                        ; 004e8ca9
    JNZ 0x004e8cc3                      ; 004e8caf
        ;   XREF to: 004e8cc3 (CONDITIONAL_JUMP)  ; LAB_004e8cc3
    MOV dword ptr [EAX + 0x4],0x180     ; 004e8cb1 | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x200           ; 004e8cb8 | g_CGameInstance
    JMP 0x004e8a48                      ; 004e8cbe
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    CMP ECX,0x12c                       ; 004e8cc3
        ;   Label: LAB_004e8cc3
    JNZ 0x004e8cdd                      ; 004e8cc9
        ;   XREF to: 004e8cdd (CONDITIONAL_JUMP)  ; LAB_004e8cdd
    MOV dword ptr [EAX + 0x4],0x180     ; 004e8ccb | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x200           ; 004e8cd2 | g_CGameInstance
    JMP 0x004e8a48                      ; 004e8cd8
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    CMP ECX,0x180                       ; 004e8cdd
        ;   Label: LAB_004e8cdd
    JNZ 0x004e8cf7                      ; 004e8ce3
        ;   XREF to: 004e8cf7 (CONDITIONAL_JUMP)  ; LAB_004e8cf7
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e8ce5 | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x280           ; 004e8cec | g_CGameInstance
    JMP 0x004e8a48                      ; 004e8cf2
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESP + 0x124],0xb71b00 ; 004e8cf7
        ;   Label: LAB_004e8cf7
    JLE 0x004e8d1e                      ; 004e8d02
        ;   XREF to: 004e8d1e (CONDITIONAL_JUMP)  ; LAB_004e8d1e
    CMP ECX,0x1e0                       ; 004e8d04
    JNZ 0x004e8d1e                      ; 004e8d0a
        ;   XREF to: 004e8d1e (CONDITIONAL_JUMP)  ; LAB_004e8d1e
    MOV dword ptr [EAX + 0x4],0x258     ; 004e8d0c | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x320           ; 004e8d13 | g_CGameInstance
    JMP 0x004e8a48                      ; 004e8d19
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESP + 0x124],0xb71b00 ; 004e8d1e
        ;   Label: LAB_004e8d1e
    JLE 0x004e8d41                      ; 004e8d29
        ;   XREF to: 004e8d41 (CONDITIONAL_JUMP)  ; LAB_004e8d41
    MOV EAX,[0x005fe9dc]                ; 004e8d2b | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0x258     ; 004e8d30 | g_CGameInstance.game_pixy
    JNZ 0x004e8d41                      ; 004e8d37
        ;   XREF to: 004e8d41 (CONDITIONAL_JUMP)  ; LAB_004e8d41
    TEST EDX,EDX                        ; 004e8d39
    JZ 0x004e8c0d                       ; 004e8d3b
        ;   XREF to: 004e8c0d (CONDITIONAL_JUMP)  ; LAB_004e8c0d
    CMP dword ptr [ESP + 0x124],0x16e3600 ; 004e8d41
        ;   Label: LAB_004e8d41
    JLE 0x004e8d64                      ; 004e8d4c
        ;   XREF to: 004e8d64 (CONDITIONAL_JUMP)  ; LAB_004e8d64
    MOV EAX,[0x005fe9dc]                ; 004e8d4e | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0x300     ; 004e8d53 | g_CGameInstance.game_pixy
    JNZ 0x004e8d64                      ; 004e8d5a
        ;   XREF to: 004e8d64 (CONDITIONAL_JUMP)  ; LAB_004e8d64
    TEST EDX,EDX                        ; 004e8d5c
    JZ 0x004e8a3b                       ; 004e8d5e
        ;   XREF to: 004e8a3b (CONDITIONAL_JUMP)  ; LAB_004e8a3b
    MOV EAX,[0x005fe9dc]                ; 004e8d64 | g_CGamePtr
        ;   Label: LAB_004e8d64
    MOV dword ptr [EAX],0x140           ; 004e8d69 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0xf0      ; 004e8d6f | g_CGameInstance.game_pixy
    JMP 0x004e8a48                      ; 004e8d76
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [0x02cf5fcc],0x0      ; 004e8d7b | DAT_02cf5fcc
        ;   Label: caseD_1
    SETZ AL                             ; 004e8d82
    AND EAX,0xff                        ; 004e8d85
    MOV [0x02cf5fcc],EAX                ; 004e8d8a | DAT_02cf5fcc
    JZ 0x004e8e2b                       ; 004e8d8f
        ;   XREF to: 004e8e2b (CONDITIONAL_JUMP)  ; LAB_004e8e2b
    CALL engine_special.cpp_kill_FUN_005657f0 ; 004e8d95
        ;   XREF to: 005657f0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_005657f0()
    PUSH 0x0                            ; 004e8d9a
    CALL engine_special.cpp_loadExternalRenderer_FUN_00564be0 ; 004e8d9c
        ;   XREF to: 00564be0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_loadExternalRenderer_FUN_00564be0(HWND window_handle)
    MOV EBX,dword ptr [0x02cf5fcc]      ; 004e8da1 | DAT_02cf5fcc
    ADD ESP,0x4                         ; 004e8da7
    TEST EBX,EBX                        ; 004e8daa
    JZ 0x004e8e23                       ; 004e8dac
        ;   XREF to: 004e8e23 (CONDITIONAL_JUMP)  ; LAB_004e8e23
    PUSH 0x1d740e8                      ; 004e8dae
    PUSH 0x1d740a8                      ; 004e8db3 | DAT_01d740a8
    PUSH 0x1d74068                      ; 004e8db8
    PUSH 0x1d74028                      ; 004e8dbd
    PUSH 0x1d74024                      ; 004e8dc2 | DAT_01d74024
    CALL engine_special.cpp_buildCardList_FUN_00566400 ; 004e8dc7
        ;   XREF to: 00566400 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_buildCardList_FUN_00566400(int * out_card_count, char * * out_driver_names, char * * out_card_names, int * out_vendor_ids, ...)
    ADD ESP,0x14                        ; 004e8dcc
    LEA EAX,[ESP + 0x12c]               ; 004e8dcf
    PUSH EAX                            ; 004e8dd6
    LEA EAX,[ESP + 0x12c]               ; 004e8dd7
    PUSH EAX                            ; 004e8dde
    LEA EAX,[ESP + 0x12c]               ; 004e8ddf
    PUSH EAX                            ; 004e8de6
    CALL engine_special.cpp_getVideoMemory_FUN_005663b0 ; 004e8de7
        ;   XREF to: 005663b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_getVideoMemory_FUN_005663b0(int * total_memory, int * available_memory, int * memory_type)
    ADD ESP,0xc                         ; 004e8dec
    MOV EAX,[0x01d74020]                ; 004e8def | DAT_01d74020
        ;   Label: LAB_004e8def
    CMP dword ptr [EAX*0x4 + 0x1d740a8],0x121a ; 004e8df4 | DAT_01d740a8
    JNZ 0x004e8a48                      ; 004e8dff
        ;   XREF to: 004e8a48 (CONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 004e8e05 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 004e8e0a | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 004e8e11 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e8e17 | g_CGameInstance.game_pixy
    JMP 0x004e8a48                      ; 004e8e1e
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [0x01d74024],EBX      ; 004e8e23 | DAT_01d74024
        ;   Label: LAB_004e8e23
    JMP 0x004e8def                      ; 004e8e29
        ;   XREF to: 004e8def (UNCONDITIONAL_JUMP)  ; LAB_004e8def
    MOV [0x01d74024],EAX                ; 004e8e2b | DAT_01d74024
        ;   Label: LAB_004e8e2b
    JMP 0x004e8a48                      ; 004e8e30
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    MOV EDI,dword ptr [0x01d74024]      ; 004e8e35 | DAT_01d74024
        ;   Label: caseD_2
    TEST EDI,EDI                        ; 004e8e3b
    JNZ 0x004e8e4a                      ; 004e8e3d
        ;   XREF to: 004e8e4a (CONDITIONAL_JUMP)  ; LAB_004e8e4a
    MOV dword ptr [0x01d74020],EDX      ; 004e8e3f | DAT_01d74020
    JMP 0x004e8a48                      ; 004e8e45
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x01d74020]                ; 004e8e4a | DAT_01d74020
        ;   Label: LAB_004e8e4a
    INC EAX                             ; 004e8e4f
    MOV [0x01d74020],EAX                ; 004e8e50 | DAT_01d74020
    CMP EAX,EDI                         ; 004e8e55
    JL 0x004e8e5f                       ; 004e8e57
        ;   XREF to: 004e8e5f (CONDITIONAL_JUMP)  ; LAB_004e8e5f
    MOV dword ptr [0x01d74020],EDX      ; 004e8e59 | DAT_01d74020
    MOV EBX,dword ptr [0x01d74020]      ; 004e8e5f | DAT_01d74020
        ;   Label: LAB_004e8e5f
    PUSH EBX                            ; 004e8e65
    CALL engine_special.cpp_selectCard_FUN_005663e0 ; 004e8e66
        ;   XREF to: 005663e0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_selectCard_FUN_005663e0(int card_index)
    MOV EAX,[0x01d74020]                ; 004e8e6b | DAT_01d74020
    MOV ESI,dword ptr [EAX*0x4 + 0x1d740a8] ; 004e8e70 | DAT_01d740a8
    ADD ESP,0x4                         ; 004e8e77
    CMP ESI,0x121a                      ; 004e8e7a
    JNZ 0x004e8a48                      ; 004e8e80
        ;   XREF to: 004e8a48 (CONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 004e8e86 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 004e8e8b | g_CGameInstance.game_bpp
    MOV dword ptr [EAX],0x280           ; 004e8e92 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e8e98 | g_CGameInstance.game_pixy
    JMP 0x004e8a48                      ; 004e8e9f
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 004e8ea4 | g_CGamePtr
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0x8],0x10      ; 004e8ea9 | g_CGameInstance.game_bpp
    JNZ 0x004e8ebb                      ; 004e8ead
        ;   XREF to: 004e8ebb (CONDITIONAL_JUMP)  ; LAB_004e8ebb
    MOV dword ptr [EAX + 0x8],0x20      ; 004e8eaf | g_CGameInstance.game_bpp
    JMP 0x004e8a48                      ; 004e8eb6
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0x8],0x10      ; 004e8ebb | g_CGameInstance.game_bpp
        ;   Label: LAB_004e8ebb
    JMP 0x004e8a48                      ; 004e8ec2
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_showCalibrationTest_FUN_004e84d0 ; 004e8ec7
        ;   XREF to: 004e84d0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTest_FUN_004e84d0()
        ;   Label: caseD_4
    JMP 0x004e8a48                      ; 004e8ecc
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 004e8ed1 | g_CGamePtr
        ;   Label: caseD_5
    CMP dword ptr [EAX + 0x10],0x0      ; 004e8ed6 | g_CGameInstance.field7_0x10
    SETZ DL                             ; 004e8eda
    AND EDX,0xff                        ; 004e8edd
    MOV dword ptr [EAX + 0x10],EDX      ; 004e8ee3 | g_CGameInstance.field7_0x10
    JMP 0x004e8a48                      ; 004e8ee6
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 004e8eeb | g_CGamePtr
        ;   Label: caseD_6
    CMP dword ptr [EAX + 0xe0],0x0      ; 004e8ef0 | g_CGameInstance.field176_0xe0
    SETZ DL                             ; 004e8ef7
    AND EDX,0xff                        ; 004e8efa
    MOV dword ptr [EAX + 0xe0],EDX      ; 004e8f00 | g_CGameInstance.field176_0xe0
    JMP 0x004e8a48                      ; 004e8f06
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 004e8f0b | g_CGamePtr
        ;   Label: caseD_7
    CMP dword ptr [EAX + 0xe4],0x0      ; 004e8f10 | g_CGameInstance.field180_0xe4
    SETZ DL                             ; 004e8f17
    AND EDX,0xff                        ; 004e8f1a
    MOV dword ptr [EAX + 0xe4],EDX      ; 004e8f20 | g_CGameInstance.field180_0xe4
    JMP 0x004e8a48                      ; 004e8f26
        ;   XREF to: 004e8a48 (UNCONDITIONAL_JUMP)  ; default

