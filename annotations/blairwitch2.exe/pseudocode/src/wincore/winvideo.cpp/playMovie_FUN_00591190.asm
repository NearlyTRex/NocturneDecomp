; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winvideo_cpp_playMovie_FUN_00591190(char *directory_path,char *movie_filename)
;
; Parameters:
; char *           Stack[0x4]:4   directory_path
; char *           Stack[0x8]:4   movie_filename
; Local Variables:
; undefined        Stack[-0x1f8]:1  local_1f8
; undefined        Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xf3]:1  local_f3
; undefined1       Stack[-0xf2]:1  local_f2
; undefined1       Stack[-0xf1]:1  local_f1
; undefined1       Stack[-0xf0]:1  local_f0
; undefined1       Stack[-0xef]:1  local_ef
; undefined1       Stack[-0xee]:1  local_ee
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e4c19
;
; Referenced Globals:
;   void* PTR_mciGetErrorStringA_005c8438 = 001c88c0
;   void* PTR_mciSendStringA_005c8440 = 001c88e8
;   void* PTR_GetClientRect_005c84ac = 001c8aba
;   void* PTR_MessageBoxA_005c84cc = 001c8b3e
;   void* PTR_MoveWindow_005c84d0 = 001c8b4c
;   void* PTR_SetRectEmpty_005c84f8 = 001c8bf0
;   void* PTR_GetCurrentProcess_005c8578 = 001c8e18
;   void* PTR_SetThreadPriority_005c863c = 001c91c2
;   void* PTR_Sleep_005c8644 = 001c91f4
;   TerminatedCString s_where_mov_source_005eebfe
;   TerminatedCString s_open_s_alias_mov_style_c_005eec19
;   TerminatedCString s_status_mov_window_handle_005eec43
;   TerminatedCString s_Unable_to_open_AVI_005eec5c
;   TerminatedCString s_play_mov_fullscreen_noti_005eec71
;   TerminatedCString s_play_mov_window_notify_005eec8c
;   ... and 8 more
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_stdlib.c_atoi_FUN_005bad20
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   GetClientRect
;   GetCurrentProcess
;   mciGetErrorStringA
;   mciSendStringA
;   MessageBoxA
;   MoveWindow
;   SetRectEmpty
;   SetThreadPriority
;   Sleep
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00591190
        ;   Label: wincore_winvideo.cpp_playMovie_FUN_00591190
    SUB ESP,0x1f4                       ; 00591191
    MOV EDX,dword ptr [ESP + 0x200]     ; 00591197
    PUSH EDX                            ; 0059119e
    MOV ECX,dword ptr [ESP + 0x200]     ; 0059119f
    PUSH ECX                            ; 005911a6
    PUSH 0x5eecad                       ; 005911a7 | = "%s\\%s"
    LEA EAX,[ESP + 0x190]               ; 005911ac
    PUSH EAX                            ; 005911b3
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005911b4
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 005911b9
    PUSH 0x5eecb3                       ; 005911bc | DAT_005eecb3
    LEA EAX,[ESP + 0x188]               ; 005911c1
    PUSH EAX                            ; 005911c8
    CALL crt_stdio.c_fopen_FUN_005b910c ; 005911c9
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005b910c(char * filename, char * mode)
    ADD ESP,0x8                         ; 005911ce
    TEST EAX,EAX                        ; 005911d1
    JNZ 0x005911dd                      ; 005911d3
        ;   XREF to: 005911dd (CONDITIONAL_JUMP)  ; LAB_005911dd
    ADD ESP,0x1f4                       ; 005911d5
    POP EBP                             ; 005911db
    RET                                 ; 005911dc
    PUSH EDI                            ; 005911dd
        ;   Label: LAB_005911dd
    PUSH ESI                            ; 005911de
    PUSH EBX                            ; 005911df
    PUSH EAX                            ; 005911e0
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 005911e1
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 005911e6
    LEA ESI,[ESP + 0x190]               ; 005911e9
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 005911f0
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 005911f5
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    MOV EDI,dword ptr [0x02665a50]      ; 005911fa | DAT_02665a50
    MOV EBX,dword ptr [0x02664628]      ; 00591200 | DAT_02664628
    TEST EDI,EDI                        ; 00591206
    JZ 0x00591213                       ; 00591208
        ;   XREF to: 00591213 (CONDITIONAL_JUMP)  ; LAB_00591213
    PUSH EBX                            ; 0059120a
    CALL wincore_winvideo.cpp_closeMovie_FUN_00590e40 ; 0059120b
        ;   XREF to: 00590e40 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_00590e40(HWND window_handle)
    ADD ESP,0x4                         ; 00591210
    PUSH EBX                            ; 00591213
        ;   Label: LAB_00591213
    PUSH ESI                            ; 00591214
    PUSH 0x5eec19                       ; 00591215 | = "open \"%s\" alias mov style child par..."
    LEA EAX,[ESP + 0x18]                ; 0059121a
    PUSH EAX                            ; 0059121e
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0059121f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00591224
    PUSH 0x0                            ; 00591227
    PUSH 0x0                            ; 00591229
    PUSH 0x0                            ; 0059122b
    LEA EAX,[ESP + 0x18]                ; 0059122d
    PUSH EAX                            ; 00591231
    CALL dword ptr CS:[0x5c8440]        ; 00591232 | PTR_mciSendStringA_005c8440
    TEST EAX,EAX                        ; 00591239
    JNZ 0x005914be                      ; 0059123b
        ;   XREF to: 005914be (CONDITIONAL_JUMP)  ; LAB_005914be
    PUSH 0x0                            ; 00591241
    MOV EAX,0x1                         ; 00591243
    PUSH 0x104                          ; 00591248
    MOV [0x02665a50],EAX                ; 0059124d | DAT_02665a50
    LEA EAX,[ESP + 0x14]                ; 00591252
    PUSH EAX                            ; 00591256
    PUSH 0x5eec43                       ; 00591257 | = "status mov window handle"
    CALL dword ptr CS:[0x5c8440]        ; 0059125c | PTR_mciSendStringA_005c8440
    TEST EAX,EAX                        ; 00591263
    JNZ 0x005912f8                      ; 00591265
        ;   XREF to: 005912f8 (CONDITIONAL_JUMP)  ; LAB_005912f8
    LEA EAX,[ESP + 0xc]                 ; 0059126b
    PUSH EAX                            ; 0059126f
    CALL crt_stdlib.c_atoi_FUN_005bad20 ; 00591270
        ;   XREF to: 005bad20 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005bad20(char * string_ptr)
    ADD ESP,0x4                         ; 00591275
    MOV [0x02665a48],EAX                ; 00591278 | DAT_02665a48
    CMP dword ptr [0x02665a58],0x0      ; 0059127d | DAT_02665a58
        ;   Label: LAB_0059127d
    JNZ 0x00591427                      ; 00591284
        ;   XREF to: 00591427 (CONDITIONAL_JUMP)  ; LAB_00591427
    CMP dword ptr [0x02665a50],0x0      ; 0059128a | DAT_02665a50
    JZ 0x00591427                       ; 00591291
        ;   XREF to: 00591427 (CONDITIONAL_JUMP)  ; LAB_00591427
    LEA EAX,[ESP + 0x1f0]               ; 00591297
    PUSH EAX                            ; 0059129e
    PUSH EBX                            ; 0059129f
    CALL dword ptr CS:[0x5c84ac]        ; 005912a0 | PTR_GetClientRect_005c84ac
    PUSH 0x0                            ; 005912a7
    PUSH 0x80                           ; 005912a9
    LEA EAX,[ESP + 0x118]               ; 005912ae
    PUSH EAX                            ; 005912b5
    PUSH 0x5eebfe                       ; 005912b6 | = "where mov source"
    CALL dword ptr CS:[0x5c8440]        ; 005912bb | PTR_mciSendStringA_005c8440
    LEA EAX,[ESP + 0x1e0]               ; 005912c2
    PUSH EAX                            ; 005912c9
    CALL dword ptr CS:[0x5c84f8]        ; 005912ca | PTR_SetRectEmpty_005c84f8
    MOV DL,byte ptr [ESP + 0x110]       ; 005912d1
    LEA EAX,[ESP + 0x110]               ; 005912d8
    CMP DL,0x20                         ; 005912df
    JNZ 0x005912f0                      ; 005912e2
        ;   XREF to: 005912f0 (CONDITIONAL_JUMP)  ; LAB_005912f0
    MOV DH,byte ptr [EAX + 0x1]         ; 005912e4
        ;   Label: LAB_005912e4
    INC EAX                             ; 005912e7
    CMP DH,0x20                         ; 005912e8
    JZ 0x005912e4                       ; 005912eb
        ;   XREF to: 005912e4 (CONDITIONAL_JUMP)  ; LAB_005912e4
    LEA EAX,[EAX]                       ; 005912ed
    CMP byte ptr [EAX],0x20             ; 005912f0
        ;   Label: LAB_005912f0
    JZ 0x00591320                       ; 005912f3
        ;   XREF to: 00591320 (CONDITIONAL_JUMP)  ; LAB_00591320
    INC EAX                             ; 005912f5
    JMP 0x005912f0                      ; 005912f6
        ;   XREF to: 005912f0 (UNCONDITIONAL_JUMP)  ; LAB_005912f0
    PUSH 0x104                          ; 005912f8
        ;   Label: LAB_005912f8
    LEA EDX,[ESP + 0x10]                ; 005912fd
    PUSH EDX                            ; 00591301
    PUSH EAX                            ; 00591302
    CALL dword ptr CS:[0x5c8438]        ; 00591303 | PTR_mciGetErrorStringA_005c8438
    PUSH 0x30                           ; 0059130a
    PUSH 0x0                            ; 0059130c
    LEA EAX,[ESP + 0x14]                ; 0059130e
    PUSH EAX                            ; 00591312
    PUSH EBX                            ; 00591313
    CALL dword ptr CS:[0x5c84cc]        ; 00591314 | PTR_MessageBoxA_005c84cc
    JMP 0x0059127d                      ; 0059131b
        ;   XREF to: 0059127d (UNCONDITIONAL_JUMP)  ; LAB_0059127d
    CMP byte ptr [EAX],0x20             ; 00591320
        ;   Label: LAB_00591320
    JNZ 0x00591328                      ; 00591323
        ;   XREF to: 00591328 (CONDITIONAL_JUMP)  ; LAB_00591328
    INC EAX                             ; 00591325
    JMP 0x00591320                      ; 00591326
        ;   XREF to: 00591320 (UNCONDITIONAL_JUMP)  ; LAB_00591320
    CMP byte ptr [EAX],0x20             ; 00591328
        ;   Label: LAB_00591328
    JZ 0x00591330                       ; 0059132b
        ;   XREF to: 00591330 (CONDITIONAL_JUMP)  ; LAB_00591330
    INC EAX                             ; 0059132d
    JMP 0x00591328                      ; 0059132e
        ;   XREF to: 00591328 (UNCONDITIONAL_JUMP)  ; LAB_00591328
    CMP byte ptr [EAX],0x20             ; 00591330
        ;   Label: LAB_00591330
    JNZ 0x00591351                      ; 00591333
        ;   XREF to: 00591351 (CONDITIONAL_JUMP)  ; LAB_00591351
    INC EAX                             ; 00591335
    JMP 0x00591330                      ; 00591336
        ;   XREF to: 00591330 (UNCONDITIONAL_JUMP)  ; LAB_00591330
    IMUL ECX,dword ptr [ESP + 0x1e8],0xa ; 00591338
        ;   Label: LAB_00591338
    XOR EDX,EDX                         ; 00591340
    MOV DL,byte ptr [EAX]               ; 00591342
    SUB EDX,0x30                        ; 00591344
    ADD ECX,EDX                         ; 00591347
    INC EAX                             ; 00591349
    MOV dword ptr [ESP + 0x1e8],ECX     ; 0059134a
    MOV DL,byte ptr [EAX]               ; 00591351
        ;   Label: LAB_00591351
    CMP DL,0x30                         ; 00591353
    JNC 0x00591360                      ; 00591356
        ;   XREF to: 00591360 (CONDITIONAL_JUMP)  ; LAB_00591360
    CMP byte ptr [EAX],0x20             ; 00591358
        ;   Label: LAB_00591358
    JNZ 0x00591380                      ; 0059135b
        ;   XREF to: 00591380 (CONDITIONAL_JUMP)  ; LAB_00591380
    INC EAX                             ; 0059135d
    JMP 0x00591358                      ; 0059135e
        ;   XREF to: 00591358 (UNCONDITIONAL_JUMP)  ; LAB_00591358
    CMP DL,0x39                         ; 00591360
        ;   Label: LAB_00591360
    JBE 0x00591338                      ; 00591363
        ;   XREF to: 00591338 (CONDITIONAL_JUMP)  ; LAB_00591338
    JMP 0x00591358                      ; 00591365
        ;   XREF to: 00591358 (UNCONDITIONAL_JUMP)  ; LAB_00591358
    IMUL ECX,dword ptr [ESP + 0x1ec],0xa ; 00591367
        ;   Label: LAB_00591367
    XOR EDX,EDX                         ; 0059136f
    MOV DL,BH                           ; 00591371
    SUB EDX,0x30                        ; 00591373
    ADD ECX,EDX                         ; 00591376
    INC EAX                             ; 00591378
    MOV dword ptr [ESP + 0x1ec],ECX     ; 00591379
    MOV BH,byte ptr [EAX]               ; 00591380
        ;   Label: LAB_00591380
    CMP BH,0x30                         ; 00591382
    JC 0x0059138c                       ; 00591385
        ;   XREF to: 0059138c (CONDITIONAL_JUMP)  ; LAB_0059138c
    CMP BH,0x39                         ; 00591387
    JBE 0x00591367                      ; 0059138a
        ;   XREF to: 00591367 (CONDITIONAL_JUMP)  ; LAB_00591367
    CMP dword ptr [ESP + 0x1f8],0x190   ; 0059138c
        ;   Label: LAB_0059138c
    JLE 0x005914a8                      ; 00591397
        ;   XREF to: 005914a8 (CONDITIONAL_JUMP)  ; LAB_005914a8
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0059139d
        ;   Label: LAB_0059139d
    MOV EBP,dword ptr [ESP + 0x1ec]     ; 005913a4
    ADD EAX,EAX                         ; 005913ab
    ADD EBP,EBP                         ; 005913ad
    MOV dword ptr [ESP + 0x1e8],EAX     ; 005913af
    MOV dword ptr [ESP + 0x1ec],EBP     ; 005913b6
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 005913bd
        ;   Label: LAB_005913bd
    MOV EDX,EAX                         ; 005913c4
    SAR EDX,0x1f                        ; 005913c6
    SUB EAX,EDX                         ; 005913c9
    SAR EAX,0x1                         ; 005913cb
    MOV EBX,EAX                         ; 005913cd
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 005913cf
    MOV EDX,EAX                         ; 005913d6
    SAR EDX,0x1f                        ; 005913d8
    SUB EAX,EDX                         ; 005913db
    SAR EAX,0x1                         ; 005913dd
    SUB EBX,EAX                         ; 005913df
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 005913e1
    MOV EDX,EAX                         ; 005913e8
    SAR EDX,0x1f                        ; 005913ea
    SUB EAX,EDX                         ; 005913ed
    SAR EAX,0x1                         ; 005913ef
    MOV ECX,EAX                         ; 005913f1
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 005913f3
    MOV EDX,EAX                         ; 005913fa
    SAR EDX,0x1f                        ; 005913fc
    SUB EAX,EDX                         ; 005913ff
    SAR EAX,0x1                         ; 00591401
    PUSH 0x1                            ; 00591403
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 00591405
    PUSH EDX                            ; 0059140c
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 0059140d
    PUSH ESI                            ; 00591414
    SUB ECX,EAX                         ; 00591415
    PUSH ECX                            ; 00591417
    PUSH EBX                            ; 00591418
    MOV EDI,dword ptr [0x02665a48]      ; 00591419 | DAT_02665a48
    PUSH EDI                            ; 0059141f
    CALL dword ptr CS:[0x5c84d0]        ; 00591420 | PTR_MoveWindow_005c84d0
    MOV ECX,dword ptr [0x02665a4c]      ; 00591427 | DAT_02665a4c
        ;   Label: LAB_00591427
    MOV EAX,[0x02664628]                ; 0059142d | DAT_02664628
    TEST ECX,ECX                        ; 00591432
    SETZ DL                             ; 00591434
    AND EDX,0xff                        ; 00591437
    MOV dword ptr [0x02665a4c],EDX      ; 0059143d | DAT_02665a4c
    TEST EDX,EDX                        ; 00591443
    JZ 0x005914dc                       ; 00591445
        ;   XREF to: 005914dc (CONDITIONAL_JUMP)  ; LAB_005914dc
    MOV ESI,dword ptr [0x02665a58]      ; 0059144b | DAT_02665a58
    TEST ESI,ESI                        ; 00591451
    JZ 0x005914ec                       ; 00591453
        ;   XREF to: 005914ec (CONDITIONAL_JUMP)  ; LAB_005914ec
    PUSH EAX                            ; 00591459
    PUSH 0x0                            ; 0059145a
    PUSH 0x0                            ; 0059145c
    PUSH 0x5eec71                       ; 0059145e | = "play mov fullscreen notify"
    CALL dword ptr CS:[0x5c8440]        ; 00591463 | PTR_mciSendStringA_005c8440
        ;   Label: LAB_00591463
    CALL dword ptr CS:[0x5c8578]        ; 0059146a | PTR_GetCurrentProcess_005c8578
    PUSH -0xf                           ; 00591471
    PUSH EAX                            ; 00591473
    MOV EBX,EAX                         ; 00591474
    CALL dword ptr CS:[0x5c863c]        ; 00591476 | PTR_SetThreadPriority_005c863c
    XOR ESI,ESI                         ; 0059147d
    CALL wincore_winrun.cpp_processWindowMessages_FUN_0058f270 ; 0059147f
        ;   XREF to: 0058f270 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_0058f270()
        ;   Label: LAB_0059147f
    CMP ESI,dword ptr [0x02665a4c]      ; 00591484 | DAT_02665a4c
    JZ 0x005914f9                       ; 0059148a
        ;   XREF to: 005914f9 (CONDITIONAL_JUMP)  ; LAB_005914f9
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40 ; 0059148c
        ;   XREF to: 0058eb40 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40()
    TEST EAX,EAX                        ; 00591491
    JNZ 0x005914f9                      ; 00591493
        ;   XREF to: 005914f9 (CONDITIONAL_JUMP)  ; LAB_005914f9
    CMP ESI,dword ptr [0x02665a50]      ; 00591495 | DAT_02665a50
    JZ 0x005914f9                       ; 0059149b
        ;   XREF to: 005914f9 (CONDITIONAL_JUMP)  ; LAB_005914f9
    PUSH 0x14                           ; 0059149d
    CALL dword ptr CS:[0x5c8644]        ; 0059149f | PTR_Sleep_005c8644
    JMP 0x0059147f                      ; 005914a6
        ;   XREF to: 0059147f (UNCONDITIONAL_JUMP)  ; LAB_0059147f
    CMP dword ptr [ESP + 0x1fc],0x12c   ; 005914a8
        ;   Label: LAB_005914a8
    JG 0x0059139d                       ; 005914b3
        ;   XREF to: 0059139d (CONDITIONAL_JUMP)  ; LAB_0059139d
    JMP 0x005913bd                      ; 005914b9
        ;   XREF to: 005913bd (UNCONDITIONAL_JUMP)  ; LAB_005913bd
    PUSH 0x30                           ; 005914be
        ;   Label: LAB_005914be
    PUSH 0x0                            ; 005914c0
    PUSH 0x5eec5c                       ; 005914c2 | = "Unable to open .AVI!"
    PUSH EBX                            ; 005914c7
    XOR EBP,EBP                         ; 005914c8
    CALL dword ptr CS:[0x5c84cc]        ; 005914ca | PTR_MessageBoxA_005c84cc
    MOV dword ptr [0x02665a50],EBP      ; 005914d1 | DAT_02665a50
    JMP 0x00591427                      ; 005914d7
        ;   XREF to: 00591427 (UNCONDITIONAL_JUMP)  ; LAB_00591427
    PUSH 0x0                            ; 005914dc
        ;   Label: LAB_005914dc
    PUSH 0x0                            ; 005914de
    PUSH 0x0                            ; 005914e0
    PUSH 0x5eeca3                       ; 005914e2 | = "pause mov"
    JMP 0x00591463                      ; 005914e7
        ;   XREF to: 00591463 (UNCONDITIONAL_JUMP)  ; LAB_00591463
    PUSH EAX                            ; 005914ec
        ;   Label: LAB_005914ec
    PUSH ESI                            ; 005914ed
    PUSH ESI                            ; 005914ee
    PUSH 0x5eec8c                       ; 005914ef | = "play mov window notify"
    JMP 0x00591463                      ; 005914f4
        ;   XREF to: 00591463 (UNCONDITIONAL_JUMP)  ; LAB_00591463
    PUSH 0x1                            ; 005914f9
        ;   Label: LAB_005914f9
    PUSH EBX                            ; 005914fb
    CALL dword ptr CS:[0x5c863c]        ; 005914fc | PTR_SetThreadPriority_005c863c
    MOV EAX,[0x02664628]                ; 00591503 | DAT_02664628
    PUSH EAX                            ; 00591508
    CALL wincore_winvideo.cpp_closeMovie_FUN_00590e40 ; 00591509
        ;   XREF to: 00590e40 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_00590e40(HWND window_handle)
    ADD ESP,0x4                         ; 0059150e
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 00591511
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 00591516
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0059151b
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,0x1                         ; 00591520
    POP EBX                             ; 00591525
    POP ESI                             ; 00591526
    POP EDI                             ; 00591527
    ADD ESP,0x1f4                       ; 00591528
    POP EBP                             ; 0059152e
    RET                                 ; 0059152f

