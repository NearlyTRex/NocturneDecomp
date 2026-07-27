; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_main_c_FUN_004c90e0(void)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_00559260 at 005594eb
;
; Referenced Globals:
;   TerminatedCString s_load_d_00587e78
;   TerminatedCString s_In_stores_10_26_99_00587e7f
;   TerminatedCString s_www_nocturnegame_com_00587e92
;   TerminatedCString s_Press_any_key_to_continu_00587ea7
;   TerminatedCString s_rb_00587ec4
;   TerminatedCString s_enemy_pod_00587ec7
;   undefined4 DAT_00587ed1
;   int INT_005b9284 = 0x1c70f74
;   int INT_005bac64 = 0x1cc30e4
;   undefined4 DAT_005baf90
;   undefined4 DAT_005bdee0
;   undefined4 DAT_005be060
;   undefined4 DAT_005be1cc
;   undefined4 DAT_005bed68
;   undefined4 DAT_014b98f8
;   ... and 4 more
;
; Called Functions:
;   core_dfont.cpp_FUN_0044cc00
;   core_dmodel.cpp_FUN_00454460
;   core_inivar.cpp_writeIniData_FUN_004be2d0
;   core_mission.cpp_FUN_004d7e90
;   core_netgame.cpp_CNetGame_shutdown_FUN_004e99c0
;   core_skeleton.cpp_freeAllSkeletons_FUN_0051f730
;   core_skeleton.cpp_FUN_0051f650
;   core_sound.cpp_FUN_00527e10
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdlib.c_rand_FUN_0056488c
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_2d.c_FUN_004012a0
;   engine_3d.c_FUN_005458d0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c90e0
        ;   Label: core_main.c_FUN_004c90e0
    PUSH ESI                            ; 004c90e1
    PUSH EDI                            ; 004c90e2
    PUSH EBP                            ; 004c90e3
    SUB ESP,0x100                       ; 004c90e4
    PUSH 0x587ec4                       ; 004c90ea | = "rb"
    PUSH 0x587ec7                       ; 004c90ef | = "enemy.pod"
    PUSH 0x587ed1                       ; 004c90f4 | DAT_00587ed1
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004c90f9
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004c90fe
    TEST EAX,EAX                        ; 004c9101
    JNZ 0x004c939e                      ; 004c9103
        ;   XREF to: 004c939e (CONDITIONAL_JUMP)  ; LAB_004c939e
    PUSH 0x58                           ; 004c9109
    MOV EDX,dword ptr [0x014b9900]      ; 004c910b | DAT_014b9900
    PUSH EDX                            ; 004c9111
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004c9112
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004c9117
    MOV ESI,EAX                         ; 004c911a
    MOV EDI,EAX                         ; 004c911c
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004c911e
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004c9123
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004c9128
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
    AND EAX,0x3                         ; 004c912d
    INC EAX                             ; 004c9130
    PUSH EAX                            ; 004c9131
    PUSH 0x587e78                       ; 004c9132 | = "load%d"
    LEA EAX,[ESP + 0x8]                 ; 004c9137
    PUSH EAX                            ; 004c913b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c913c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004c9141
    PUSH 0x1e0                          ; 004c9144
    PUSH 0x280                          ; 004c9149
    LEA EAX,[ESP + 0x8]                 ; 004c914e
    PUSH EAX                            ; 004c9152
    PUSH 0x1cc480c                      ; 004c9153
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004c9158
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004c915d
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 004c9160
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_clearScreen_FUN_0052ee70()
    PUSH 0xffff                         ; 004c9165
    PUSH 0x0                            ; 004c916a
    PUSH 0x0                            ; 004c916c
    PUSH 0x1cc480c                      ; 004c916e
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004c9173
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710()
    ADD ESP,0x10                        ; 004c9178
    PUSH 0x587e7f                       ; 004c917b | = "In stores 10/26/99"
    MOV ECX,dword ptr [0x014b98f8]      ; 004c9180 | DAT_014b98f8
    PUSH ECX                            ; 004c9186
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c9187
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    MOV EDX,EAX                         ; 004c918c
    SAR EDX,0x1f                        ; 004c918e
    SUB EAX,EDX                         ; 004c9191
    SAR EAX,0x1                         ; 004c9193
    ADD ESP,0x8                         ; 004c9195
    PUSH 0x0                            ; 004c9198
    PUSH 0x7                            ; 004c919a
    MOV EDX,0x140                       ; 004c919c
    PUSH 0xdc                           ; 004c91a1
    SUB EDX,EAX                         ; 004c91a6
    PUSH EDX                            ; 004c91a8
    PUSH 0x587e7f                       ; 004c91a9 | = "In stores 10/26/99"
    MOV EBX,dword ptr [0x014b98f8]      ; 004c91ae | DAT_014b98f8
    PUSH EBX                            ; 004c91b4
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c91b5
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c91ba
    MOV EBX,0x1e0                       ; 004c91bd
    PUSH 0x587e92                       ; 004c91c2 | = "www.nocturnegame.com"
    SUB EBX,ESI                         ; 004c91c7
    MOV ESI,dword ptr [0x014b98f8]      ; 004c91c9 | DAT_014b98f8
    PUSH ESI                            ; 004c91cf
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c91d0
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    MOV EDX,EAX                         ; 004c91d5
    SAR EDX,0x1f                        ; 004c91d7
    SUB EAX,EDX                         ; 004c91da
    SAR EAX,0x1                         ; 004c91dc
    ADD ESP,0x8                         ; 004c91de
    PUSH 0x0                            ; 004c91e1
    PUSH 0x7                            ; 004c91e3
    MOV EDX,0x140                       ; 004c91e5
    PUSH EBX                            ; 004c91ea
    SUB EDX,EAX                         ; 004c91eb
    PUSH EDX                            ; 004c91ed
    PUSH 0x587e92                       ; 004c91ee | = "www.nocturnegame.com"
    MOV EBP,dword ptr [0x014b98f8]      ; 004c91f3 | DAT_014b98f8
    PUSH EBP                            ; 004c91f9
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c91fa
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c91ff
    MOV EBX,0xa0000                     ; 004c9202
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004c9207
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004c920c
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ESI,EAX                         ; 004c9211
    XOR EBP,EBP                         ; 004c9213
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004c9215
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_004c9215
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004c921a
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ECX,EAX                         ; 004c921f
    SUB EAX,ESI                         ; 004c9221
    MOV EDX,EAX                         ; 004c9223
    MOV ESI,0x12                        ; 004c9225
    SAR EDX,0x1f                        ; 004c922a
    IDIV ESI                            ; 004c922d
    MOV [0x01bd1d80],EAX                ; 004c922f | DAT_01bd1d80
    CMP EBP,EAX                         ; 004c9234
    JLE 0x004c923e                      ; 004c9236
        ;   XREF to: 004c923e (CONDITIONAL_JUMP)  ; LAB_004c923e
    MOV dword ptr [0x01bd1d80],EBP      ; 004c9238 | DAT_01bd1d80
    MOV EDX,dword ptr [0x01bd1d80]      ; 004c923e | DAT_01bd1d80
        ;   Label: LAB_004c923e
    MOV ESI,ECX                         ; 004c9244
    CMP EDX,0x4000                      ; 004c9246
    JLE 0x004c9258                      ; 004c924c
        ;   XREF to: 004c9258 (CONDITIONAL_JUMP)  ; LAB_004c9258
    MOV dword ptr [0x01bd1d80],0x4000   ; 004c924e | DAT_01bd1d80
    MOV EAX,[0x01bd1d80]                ; 004c9258 | DAT_01bd1d80
        ;   Label: LAB_004c9258
    PUSH 0x2a                           ; 004c925d
    SUB EBX,EAX                         ; 004c925f
    MOV EAX,[0x005bac64]                ; 004c9261 | INT_005bac64
    PUSH EAX                            ; 004c9266 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004c9267 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004c9269
    ADD ESP,0x8                         ; 004c926b
    TEST EAX,EAX                        ; 004c926e
    JZ 0x004c9285                       ; 004c9270
        ;   XREF to: 004c9285 (CONDITIONAL_JUMP)  ; LAB_004c9285
    PUSH 0x1                            ; 004c9272
    MOV EAX,[0x005bac64]                ; 004c9274 | INT_005bac64
    PUSH EAX                            ; 004c9279 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004c927a | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004c927c
    ADD ESP,0x8                         ; 004c927e
    TEST EAX,EAX                        ; 004c9281
    JNZ 0x004c9289                      ; 004c9283
        ;   XREF to: 004c9289 (CONDITIONAL_JUMP)  ; LAB_004c9289
    TEST EBX,EBX                        ; 004c9285
        ;   Label: LAB_004c9285
    JG 0x004c9215                       ; 004c9287
        ;   XREF to: 004c9215 (CONDITIONAL_JUMP)  ; LAB_004c9215
    MOV EAX,0x1e0                       ; 004c9289
        ;   Label: LAB_004c9289
    LEA ESI,[EDI + EDI*0x1]             ; 004c928e
    SUB EAX,ESI                         ; 004c9291
    PUSH 0x587ea7                       ; 004c9293 | = "Press any key to continue..."
    MOV ESI,EAX                         ; 004c9298
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c929a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004c929f
    PUSH EAX                            ; 004c92a2
    MOV EDX,dword ptr [0x014b98f8]      ; 004c92a3 | DAT_014b98f8
    PUSH EDX                            ; 004c92a9
    MOV EBX,EAX                         ; 004c92aa
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c92ac
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    MOV EDX,EAX                         ; 004c92b1
    SAR EDX,0x1f                        ; 004c92b3
    SUB EAX,EDX                         ; 004c92b6
    SAR EAX,0x1                         ; 004c92b8
    ADD ESP,0x8                         ; 004c92ba
    PUSH 0x0                            ; 004c92bd
    PUSH 0x7                            ; 004c92bf
    MOV EDX,0x140                       ; 004c92c1
    PUSH ESI                            ; 004c92c6
    SUB EDX,EAX                         ; 004c92c7
    PUSH EDX                            ; 004c92c9
    PUSH EBX                            ; 004c92ca
    MOV ECX,dword ptr [0x014b98f8]      ; 004c92cb | DAT_014b98f8
    PUSH ECX                            ; 004c92d1
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c92d2
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c92d7
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004c92da
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004c92df
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 004c92e4
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004c92e9
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    PUSH 0x1cc480c                      ; 004c92ee
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360 ; 004c92f3
        ;   XREF to: 0040e360 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360()
    ADD ESP,0x4                         ; 004c92f8
    PUSH 0x1cc4820                      ; 004c92fb
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360 ; 004c9300
        ;   XREF to: 0040e360 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360()
    ADD ESP,0x4                         ; 004c9305
        ;   Label: LAB_004c9305
    MOV EBX,dword ptr [0x005bdee0]      ; 004c9308 | DAT_005bdee0
    PUSH EBX                            ; 004c930e | DAT_01cea280
    CALL core_netgame.cpp_CNetGame_shutdown_FUN_004e99c0 ; 004c930f
        ;   XREF to: 004e99c0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_shutdown_FUN_004e99c0()
    ADD ESP,0x4                         ; 004c9314
    MOV ESI,dword ptr [0x005b9284]      ; 004c9317 | INT_005b9284
    PUSH ESI                            ; 004c931d
    CALL xxx_unk.c_FUN_004940d0         ; 004c931e
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    ADD ESP,0x4                         ; 004c9323
    MOV EDI,dword ptr [0x005be060]      ; 004c9326 | DAT_005be060
    PUSH EDI                            ; 004c932c
    CALL engine_ncursfx.cpp_FUN_004ee680 ; 004c932d
        ;   XREF to: 004ee680 (UNCONDITIONAL_CALL)  ; undefined engine_ncursfx.cpp_FUN_004ee680()
    ADD ESP,0x4                         ; 004c9332
    MOV EBP,dword ptr [0x005baf90]      ; 004c9335 | DAT_005baf90
    PUSH EBP                            ; 004c933b
    CALL core_mission.cpp_FUN_004d7e90  ; 004c933c
        ;   XREF to: 004d7e90 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004d7e90()
    ADD ESP,0x4                         ; 004c9341
    MOV EAX,[0x005bed68]                ; 004c9344 | DAT_005bed68
    PUSH EAX                            ; 004c9349
    CALL core_sound.cpp_FUN_00527e10    ; 004c934a
        ;   XREF to: 0052dd80 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_FUN_00527e10()
    ADD ESP,0x4                         ; 004c934f
    CALL core_dmodel.cpp_FUN_00454460   ; 004c9352
        ;   XREF to: 00454460 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00454460()
    CALL core_skeleton.cpp_FUN_0051f650 ; 004c9357
        ;   XREF to: 0051f650 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0051f650()
    CALL core_skeleton.cpp_freeAllSkeletons_FUN_0051f730 ; 004c935c
        ;   XREF to: 0051f730 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_freeAllSkeletons_FUN_0051f730()
    CALL engine_matrix.c_FUN_004cca50   ; 004c9361
        ;   XREF to: 004cca50 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004cca50()
    CALL wincore_winrun.cpp_endPeriod_FUN_00558a20 ; 004c9366
        ;   XREF to: 00558a20 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_endPeriod_FUN_00558a20()
    CALL engine_2d.c_FUN_004012a0       ; 004c936b
        ;   XREF to: 004012a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_004012a0()
    CALL engine_3d.c_FUN_005458d0       ; 004c9370
        ;   XREF to: 00404490 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_005458d0()
    CALL core_dfont.cpp_FUN_0044cc00    ; 004c9375
        ;   XREF to: 0044cc00 (UNCONDITIONAL_CALL)  ; undefined core_dfont.cpp_FUN_0044cc00()
    CALL wincore_winrun.cpp_FUN_00559e90 ; 004c937a
        ;   XREF to: 00559e90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00559e90()
    MOV EDX,dword ptr [0x005be1cc]      ; 004c937f | DAT_005be1cc
    PUSH EDX                            ; 004c9385
    CALL engine_pod.cpp_CPod_cleanup_FUN_004f8b40 ; 004c9386
        ;   XREF to: 004f8b40 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_CPod_cleanup_FUN_004f8b40()
    ADD ESP,0x4                         ; 004c938b
    CALL core_inivar.cpp_writeIniData_FUN_004be2d0 ; 004c938e
        ;   XREF to: 004be2d0 (UNCONDITIONAL_CALL)  ; undefined core_inivar.cpp_writeIniData_FUN_004be2d0()
    ADD ESP,0x100                       ; 004c9393
    POP EBP                             ; 004c9399
    POP EDI                             ; 004c939a
    POP ESI                             ; 004c939b
    POP EBX                             ; 004c939c
    RET                                 ; 004c939d
    PUSH EAX                            ; 004c939e
        ;   Label: LAB_004c939e
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004c939f
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    JMP 0x004c9305                      ; 004c93a4
        ;   XREF to: 004c9305 (UNCONDITIONAL_JUMP)  ; LAB_004c9305

