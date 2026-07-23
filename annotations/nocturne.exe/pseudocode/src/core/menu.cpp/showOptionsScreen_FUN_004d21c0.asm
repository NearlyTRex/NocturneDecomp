; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_showOptionsScreen_FUN_004d21c0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_004d23d0 at 004d2841
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e309
;
; Referenced Globals:
;   void* switchdataD_004d21ac = 004d22ed
;   TerminatedCString s_Graphic_options_00588cc3
;   TerminatedCString s_Sound_options_00588cd3
;   TerminatedCString s_Control_options_00588ce1
;   TerminatedCString s_Credits_00588cf1
;   TerminatedCString s_Option_Menu_00588cf9
;   undefined4 DAT_005b9354
;   undefined4 DAT_005bac64
;   undefined4 DAT_005bed68
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c776a8
;   undefined4 DAT_01c776ac
;   undefined4 DAT_01c77850
;   undefined4 DAT_01cc30e4
;
; Called Functions:
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90
;   core_game.cpp_CGame_saveClockTime_FUN_0049a890
;   core_game.cpp_CGame_updateDT_FUN_0049a8a0
;   core_inivar.cpp_writeIniData_FUN_004be2d0
;   core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00
;   core_menu.cpp_configureCustomKeys_FUN_004d0d20
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0
;   core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440
;   core_moon.cpp_CMoon_free_FUN_004dea60
;   core_moon.cpp_CMoon_init_FUN_004de860
;   core_moon.cpp_CMoon_render_FUN_004dec50
;   core_moon.cpp_CMoon_update_FUN_004deae0
;   core_sound.cpp_CSound_configure_FUN_0052e850
;   core_sound.cpp_CSound_reset_FUN_0052e9c0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d21c0
        ;   Label: core_menu.cpp_showOptionsScreen_FUN_004d21c0
    PUSH EDI                            ; 004d21c1
    PUSH EBP                            ; 004d21c2
    SUB ESP,0x4                         ; 004d21c3
    XOR EDX,EDX                         ; 004d21c6
    MOV ECX,dword ptr [ESP + 0x14]      ; 004d21c8
    MOV dword ptr [ESP],EDX             ; 004d21cc
    TEST ECX,ECX                        ; 004d21cf
    JNZ 0x004d2321                      ; 004d21d1
        ;   XREF to: 004d2321 (CONDITIONAL_JUMP)  ; LAB_004d2321
    PUSH ESI                            ; 004d21d7
        ;   Label: LAB_004d21d7
    MOV ESI,dword ptr [0x005b9354]      ; 004d21d8 | DAT_005b9354
    PUSH ESI                            ; 004d21de | DAT_01c775ec
    MOV EBX,0x1cc7900                   ; 004d21df
    CALL core_game.cpp_CGame_saveClockTime_FUN_0049a890 ; 004d21e4
        ;   XREF to: 0049a890 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_saveClockTime_FUN_0049a890()
    ADD ESP,0x4                         ; 004d21e9
    XOR EAX,EAX                         ; 004d21ec
    POP ESI                             ; 004d21ee
    MOV dword ptr [EAX + 0x1cc7d00],EBX ; 004d21ef
        ;   Label: LAB_004d21ef
    ADD EAX,0x4                         ; 004d21f5
    ADD EBX,0x100                       ; 004d21f8
    CMP EAX,0x10                        ; 004d21fe
    JNZ 0x004d21ef                      ; 004d2201
        ;   XREF to: 004d21ef (CONDITIONAL_JUMP)  ; LAB_004d21ef
    MOV EDI,dword ptr [0x005b9354]      ; 004d2203 | DAT_005b9354
        ;   Label: LAB_004d2203
    PUSH EDI                            ; 004d2209 | DAT_01c775ec
    CALL core_game.cpp_CGame_updateDT_FUN_0049a8a0 ; 004d220a
        ;   XREF to: 0049a8a0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_updateDT_FUN_0049a8a0()
    MOV EAX,[0x005b9354]                ; 004d220f | DAT_005b9354
    ADD ESP,0x4                         ; 004d2214
    MOV EAX,dword ptr [EAX + 0x264]     ; 004d2217 | DAT_01c77850
    PUSH EAX                            ; 004d221d
    PUSH 0x1cc5780                      ; 004d221e
    CALL core_moon.cpp_CMoon_update_FUN_004deae0 ; 004d2223
        ;   XREF to: 004deae0 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_update_FUN_004deae0()
    ADD ESP,0x8                         ; 004d2228
    PUSH 0x1cc5780                      ; 004d222b
    CALL core_moon.cpp_CMoon_render_FUN_004dec50 ; 004d2230
        ;   XREF to: 004dec50 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_render_FUN_004dec50()
    ADD ESP,0x4                         ; 004d2235
    PUSH 0x588cc3                       ; 004d2238 | = "Graphic options"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d223d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d2242
    PUSH EAX                            ; 004d2245
    PUSH 0x1cc7900                      ; 004d2246
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d224b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004d2250
    PUSH 0x588cd3                       ; 004d2253 | = "Sound options"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2258
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d225d
    PUSH EAX                            ; 004d2260
    PUSH 0x1cc7a00                      ; 004d2261
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d2266
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004d226b
    PUSH 0x588ce1                       ; 004d226e | = "Control options"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2273
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d2278
    PUSH EAX                            ; 004d227b
    PUSH 0x1cc7b00                      ; 004d227c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d2281
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004d2286
    PUSH 0x588cf1                       ; 004d2289 | = "Credits"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d228e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d2293
    PUSH EAX                            ; 004d2296
    PUSH 0x1cc7c00                      ; 004d2297
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d229c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004d22a1
    MOV EAX,[0x005b9354]                ; 004d22a4 | DAT_005b9354
    PUSH 0x588cf9                       ; 004d22a9 | = "Option Menu"
    MOV dword ptr [EAX + 0xc0],0x2      ; 004d22ae | DAT_01c776ac
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d22b8
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d22bd
    PUSH EAX                            ; 004d22c0
    PUSH 0xfa                           ; 004d22c1
    LEA EAX,[ESP + 0x8]                 ; 004d22c6
    PUSH EAX                            ; 004d22ca
    PUSH 0x4                            ; 004d22cb
    PUSH 0x1cc7d00                      ; 004d22cd
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440 ; 004d22d2
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440()
    ADD ESP,0x14                        ; 004d22d7
    MOV EBX,EAX                         ; 004d22da
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004d22dc
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CMP EBX,0x3                         ; 004d22e1
    JA 0x004d22f2                       ; 004d22e4
        ;   XREF to: 004d22f2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4d21ac]  ; 004d22e6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL core_menu.cpp_configureGraphicsOptions_FUN_004d0080 ; 004d22ed
        ;   XREF to: 004d0080 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_configureGraphicsOptions_FUN_004d0080()
        ;   Label: caseD_0
    PUSH 0x1                            ; 004d22f2
        ;   Label: default
    MOV EAX,[0x005bac64]                ; 004d22f4 | DAT_005bac64
    PUSH EAX                            ; 004d22f9 | DAT_01cc30e4
    MOV EBX,dword ptr [EAX]             ; 004d22fa | DAT_01cc30e4
    CALL dword ptr [EBX + 0x4]          ; 004d22fc
    ADD ESP,0x8                         ; 004d22ff
    TEST EAX,EAX                        ; 004d2302
    JZ 0x004d2203                       ; 004d2304
        ;   XREF to: 004d2203 (CONDITIONAL_JUMP)  ; LAB_004d2203
    CMP dword ptr [ESP + 0x14],0x0      ; 004d230a
    JNZ 0x004d238f                      ; 004d230f
        ;   XREF to: 004d238f (CONDITIONAL_JUMP)  ; LAB_004d238f
    CALL core_inivar.cpp_writeIniData_FUN_004be2d0 ; 004d2315
        ;   XREF to: 004be2d0 (UNCONDITIONAL_CALL)  ; undefined core_inivar.cpp_writeIniData_FUN_004be2d0()
    ADD ESP,0x4                         ; 004d231a
    POP EBP                             ; 004d231d
    POP EDI                             ; 004d231e
    POP EBX                             ; 004d231f
    RET                                 ; 004d2320
    MOV EBX,dword ptr [0x005bed68]      ; 004d2321 | DAT_005bed68
        ;   Label: LAB_004d2321
    PUSH EBX                            ; 004d2327
    CALL core_sound.cpp_CSound_configure_FUN_0052e850 ; 004d2328
        ;   XREF to: 0052e850 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_configure_FUN_0052e850()
    ADD ESP,0x4                         ; 004d232d
    PUSH 0x1cc5780                      ; 004d2330
    CALL core_moon.cpp_CMoon_init_FUN_004de860 ; 004d2335
        ;   XREF to: 004de860 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_init_FUN_004de860()
    ADD ESP,0x4                         ; 004d233a
    JMP 0x004d21d7                      ; 004d233d
        ;   XREF to: 004d21d7 (UNCONDITIONAL_JUMP)  ; LAB_004d21d7
    CALL core_menu.cpp_configureSoundOptions_FUN_004d12e0 ; 004d2342
        ;   XREF to: 004d12e0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_configureSoundOptions_FUN_004d12e0()
        ;   Label: caseD_1
    JMP 0x004d22f2                      ; 004d2347
        ;   XREF to: 004d22f2 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005b9354]                ; 004d2349 | DAT_005b9354
        ;   Label: caseD_2
    MOV EBX,dword ptr [EAX + 0xbc]      ; 004d234e | DAT_01c776a8
    CALL core_menu.cpp_configureCustomKeys_FUN_004d0d20 ; 004d2354
        ;   XREF to: 004d0d20 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_configureCustomKeys_FUN_004d0d20()
    MOV EAX,[0x005b9354]                ; 004d2359 | DAT_005b9354
    CMP EBX,dword ptr [EAX + 0xbc]      ; 004d235e | DAT_01c776a8
    JZ 0x004d22f2                       ; 004d2364
        ;   XREF to: 004d22f2 (CONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00 ; 004d2366
        ;   XREF to: 004d2d00 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00()
    JMP 0x004d22f2                      ; 004d236b
        ;   XREF to: 004d22f2 (UNCONDITIONAL_JUMP)  ; default
    MOV EBP,dword ptr [0x005b9354]      ; 004d236d | DAT_005b9354
        ;   Label: caseD_3
    PUSH EBP                            ; 004d2373 | DAT_01c775ec
    CALL core_game.cpp_CGame_rollCredits_FUN_004a6e90 ; 004d2374
        ;   XREF to: 004a6e90 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_rollCredits_FUN_004a6e90()
    ADD ESP,0x4                         ; 004d2379
    MOV EAX,[0x005bed68]                ; 004d237c | DAT_005bed68
    PUSH EAX                            ; 004d2381
    CALL core_sound.cpp_CSound_configure_FUN_0052e850 ; 004d2382
        ;   XREF to: 0052e850 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_configure_FUN_0052e850()
    ADD ESP,0x4                         ; 004d2387
    JMP 0x004d22f2                      ; 004d238a
        ;   XREF to: 004d22f2 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1cc5780                      ; 004d238f
        ;   Label: LAB_004d238f
    CALL core_moon.cpp_CMoon_free_FUN_004dea60 ; 004d2394
        ;   XREF to: 004dea60 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_free_FUN_004dea60()
    ADD ESP,0x4                         ; 004d2399
    MOV EBX,dword ptr [0x005bed68]      ; 004d239c | DAT_005bed68
    PUSH EBX                            ; 004d23a2
    CALL core_sound.cpp_CSound_reset_FUN_0052e9c0 ; 004d23a3
        ;   XREF to: 0052e9c0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_reset_FUN_0052e9c0()
    ADD ESP,0x4                         ; 004d23a8
    CALL core_inivar.cpp_writeIniData_FUN_004be2d0 ; 004d23ab
        ;   XREF to: 004be2d0 (UNCONDITIONAL_CALL)  ; undefined core_inivar.cpp_writeIniData_FUN_004be2d0()
    ADD ESP,0x4                         ; 004d23b0
    POP EBP                             ; 004d23b3
    POP EDI                             ; 004d23b4
    POP EBX                             ; 004d23b5
    RET                                 ; 004d23b6

