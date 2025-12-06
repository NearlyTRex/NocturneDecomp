; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470()
;
; Local Variables:
; undefined4       Stack[-0x167]:4  local_167
; undefined1       Stack[-0x163]:1  local_163
; undefined1       Stack[-0x162]:1  local_162
; undefined4       Stack[-0x113]:4  local_113
; undefined1       Stack[-0x10f]:1  local_10f
; undefined1       Stack[-0x10e]:1  local_10e
; undefined4       Stack[-0xfb]:4  local_fb
; undefined2       Stack[-0xf7]:2  local_f7
; undefined1       Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined1       Stack[-0xa0]:1  local_a0
; undefined2       Stack[-0x9c]:2  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 at 00540e56
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063db4d
;   TerminatedCString s_CNetGame_applyNewGameSet_0063db61
;   TerminatedCString s_core_netgame_cpp_0063dbad
;   TerminatedCString s_Hell_froze_0063dbc1
;   undefined4 DAT_00680a04
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
;   core_netgame.cpp_CNetGame_FUN_00543e20
;   core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542470
        ;   Label: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
    PUSH ESI                            ; 00542471
    PUSH EDI                            ; 00542472
    PUSH EBP                            ; 00542473
    SUB ESP,0x160                       ; 00542474
    MOV ESI,dword ptr [ESP + 0x178]     ; 0054247a
    MOV EAX,dword ptr [ESP + 0x174]     ; 00542481
    CMP dword ptr [EAX],0x2             ; 00542488
    JNZ 0x00542493                      ; 0054248b | LAB_00542493
        ;   XREF to: 00542493 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x4],0x1       ; 0054248d
    JZ 0x005424b6                       ; 00542491 | LAB_005424b6
        ;   XREF to: 005424b6 (CONDITIONAL_JUMP)
    MOV EBX,0x63db4d                    ; 00542493 | = "..\\core\\netgame.cpp" | s_core_netgame_cpp_0063db4d = ..\core\netgame.cpp
        ;   Label: LAB_00542493
    MOV EDI,0x7e6                       ; 00542498
    PUSH 0x63db61                       ; 0054249d | = "CNetGame::applyNewGameSettings - shou..." | s_CNetGame_applyNewGameSet_0063db61 = CNetGame::applyNewGameSettings - should only call this in client lobby mode
    MOV dword ptr [0x02f0ca48],EBX      ; 005424a2 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005424a8 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005424ae | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005424b3
    MOV ECX,0x2c                        ; 005424b6
        ;   Label: LAB_005424b6
    MOV EDI,ESP                         ; 005424bb
    MOVSD.REP ES:EDI,ESI                ; 005424bd
    MOVSB ES:EDI,ESI                    ; 005424bf
    MOV EDX,dword ptr [ESP + 0x174]     ; 005424c0
    MOV EAX,dword ptr [ESP + 0x9]       ; 005424c7
    MOV EBP,0xffffffff                  ; 005424cb
    MOV dword ptr [EDX + 0x16c],EAX     ; 005424d0
    MOV dword ptr [ESP + 0x140],EBP     ; 005424d6
    MOV EAX,dword ptr [ESP + 0x5d]      ; 005424dd
    XOR EDI,EDI                         ; 005424e1
    TEST EAX,EAX                        ; 005424e3
    JLE 0x00542562                      ; 005424e5 | LAB_00542562
        ;   XREF to: 00542562 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX + 0x110]     ; 005424eb
    SHL EAX,0x3                         ; 005424f1
    MOV EDX,EAX                         ; 005424f4
    SHL EAX,0x4                         ; 005424f6
    SUB EAX,EDX                         ; 005424f9
    MOV EDX,dword ptr [ESP + 0x174]     ; 005424fb
    MOV EDX,dword ptr [EDX + 0x114]     ; 00542502
    MOV EBX,dword ptr [ESP + 0x174]     ; 00542508
    SHL EDX,0x3                         ; 0054250f
    ADD EBX,0x20                        ; 00542512
    MOV ECX,EDX                         ; 00542515
    SHL EDX,0x4                         ; 00542517
    ADD EAX,EBX                         ; 0054251a
    SUB EDX,ECX                         ; 0054251c
    ADD EAX,0x1c                        ; 0054251e
    ADD EDX,EBX                         ; 00542521
    LEA ECX,[ESP + 0x61]                ; 00542523
    ADD EDX,0x1c                        ; 00542527
    LEA ESI,[ECX + 0x14]                ; 0054252a
    MOV CX,word ptr [ESI + 0x4]         ; 0054252d
        ;   Label: LAB_0054252d
    CMP CX,word ptr [EDX + 0x4]         ; 00542531
    JNZ 0x0054253f                      ; 00542535 | LAB_0054253f
        ;   XREF to: 0054253f (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESI]             ; 00542537
    CMP EBX,dword ptr [EDX]             ; 00542539
    JNZ 0x0054253f                      ; 0054253b | LAB_0054253f
        ;   XREF to: 0054253f (CONDITIONAL_JUMP)
    MOV EBP,EDI                         ; 0054253d
    MOV CX,word ptr [ESI + 0x4]         ; 0054253f
        ;   Label: LAB_0054253f
    CMP CX,word ptr [EAX + 0x4]         ; 00542543
    JNZ 0x00542556                      ; 00542547 | LAB_00542556
        ;   XREF to: 00542556 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESI]             ; 00542549
    CMP EBX,dword ptr [EAX]             ; 0054254b
    JNZ 0x00542556                      ; 0054254d | LAB_00542556
        ;   XREF to: 00542556 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x140],EDI     ; 0054254f
    MOV ECX,dword ptr [ESP + 0x5d]      ; 00542556
        ;   Label: LAB_00542556
    INC EDI                             ; 0054255a
    ADD ESI,0x28                        ; 0054255b
    CMP EDI,ECX                         ; 0054255e
    JL 0x0054252d                       ; 00542560 | LAB_0054252d
        ;   XREF to: 0054252d (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x140],0x0     ; 00542562
        ;   Label: LAB_00542562
    JL 0x00542935                       ; 0054256a | LAB_00542935
        ;   XREF to: 00542935 (CONDITIONAL_JUMP)
    TEST EBP,EBP                        ; 00542570
    JL 0x00542935                       ; 00542572 | LAB_00542935
        ;   XREF to: 00542935 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x174]     ; 00542578
    LEA ESI,[ESP + 0xd]                 ; 0054257f
    ADD EDI,0x118                       ; 00542583
    PUSH EDI                            ; 00542589
    MOV AL,byte ptr [ESI]               ; 0054258a
        ;   Label: LAB_0054258a
    MOV byte ptr [EDI],AL               ; 0054258c
    CMP AL,0x0                          ; 0054258e
    JZ 0x005425a2                       ; 00542590 | LAB_005425a2
        ;   XREF to: 005425a2 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00542592
    ADD ESI,0x2                         ; 00542595
    MOV byte ptr [EDI + 0x1],AL         ; 00542598
    ADD EDI,0x2                         ; 0054259b
    CMP AL,0x0                          ; 0054259e
    JNZ 0x0054258a                      ; 005425a0 | LAB_0054258a
        ;   XREF to: 0054258a (CONDITIONAL_JUMP)
    POP EDI                             ; 005425a2
        ;   Label: LAB_005425a2
    MOV EAX,dword ptr [ESP + 0x174]     ; 005425a3
    XOR ESI,ESI                         ; 005425aa
    MOV EDI,dword ptr [EAX + 0x1c]      ; 005425ac
    MOV dword ptr [ESP + 0x138],ESI     ; 005425af
    TEST EDI,EDI                        ; 005425b6
    JLE 0x00542694                      ; 005425b8 | LAB_00542694
        ;   XREF to: 00542694 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x174]     ; 005425be
    ADD EAX,0x20                        ; 005425c5
    MOV dword ptr [ESP + 0x134],ESI     ; 005425c8
    ADD EDX,0x3c                        ; 005425cf
    MOV dword ptr [ESP + 0x14c],EAX     ; 005425d2
    MOV EAX,dword ptr [ESP + 0x174]     ; 005425d9
    MOV dword ptr [ESP + 0x144],EDX     ; 005425e0
    MOV dword ptr [ESP + 0x148],EAX     ; 005425e7
    MOV EAX,dword ptr [ESP + 0x5d]      ; 005425ee
        ;   Label: LAB_005425ee
    XOR EBX,EBX                         ; 005425f2
    TEST EAX,EAX                        ; 005425f4
    JLE 0x00542623                      ; 005425f6 | LAB_00542623
        ;   XREF to: 00542623 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x61]                ; 005425f8
    MOV ECX,dword ptr [ESP + 0x5d]      ; 005425fc
    MOV EBP,dword ptr [ESP + 0x144]     ; 00542600
    ADD EAX,0x14                        ; 00542607
    MOV SI,word ptr [EAX + 0x4]         ; 0054260a
        ;   Label: LAB_0054260a
    CMP SI,word ptr [EBP + 0x4]         ; 0054260e
    JNZ 0x00542942                      ; 00542612 | LAB_00542942
        ;   XREF to: 00542942 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX]             ; 00542618
    CMP ESI,dword ptr [EBP]             ; 0054261a
    JNZ 0x00542942                      ; 0054261d | LAB_00542942
        ;   XREF to: 00542942 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [ESP + 0x5d]      ; 00542623
        ;   Label: LAB_00542623
    JNZ 0x00542953                      ; 00542627 | LAB_00542953
        ;   XREF to: 00542953 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x174]     ; 0054262d
    MOV EAX,dword ptr [ESP + 0x138]     ; 00542634
    CMP EAX,dword ptr [EDX + 0x114]     ; 0054263b
    JNZ 0x00542665                      ; 00542641 | LAB_00542665
        ;   XREF to: 00542665 (CONDITIONAL_JUMP)
    MOV EAX,0x63dbad                    ; 00542643 | = "..\\core\\netgame.cpp" | s_core_netgame_cpp_0063dbad = ..\core\netgame.cpp
    MOV EDX,0x811                       ; 00542648
    PUSH 0x63dbc1                       ; 0054264d | = "Hell froze" | s_Hell_froze_0063dbc1 = Hell froze
    MOV [0x02f0ca48],EAX                ; 00542652 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00542657 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054265d | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00542662
    MOV ECX,dword ptr [ESP + 0x138]     ; 00542665
        ;   Label: LAB_00542665
    PUSH ECX                            ; 0054266c
    MOV EBX,dword ptr [ESP + 0x178]     ; 0054266d
    PUSH EBX                            ; 00542674
    CALL core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00 ; 00542675 | undefined core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00()
        ;   XREF to: 00542b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054267a
    MOV EDX,dword ptr [ESP + 0x174]     ; 0054267d
        ;   Label: LAB_0054267d
    MOV EAX,dword ptr [ESP + 0x138]     ; 00542684
    CMP EAX,dword ptr [EDX + 0x1c]      ; 0054268b
    JL 0x005425ee                       ; 0054268e | LAB_005425ee
        ;   XREF to: 005425ee (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x5d]      ; 00542694
        ;   Label: LAB_00542694
    XOR ESI,ESI                         ; 00542698
    TEST EDI,EDI                        ; 0054269a
    JLE 0x005426b2                      ; 0054269c | LAB_005426b2
        ;   XREF to: 005426b2 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x174]     ; 0054269e
    XOR EBX,EBX                         ; 005426a5
    CMP byte ptr [ESP + EBX*0x1 + 0x61],0x0 ; 005426a7
        ;   Label: LAB_005426a7
    JNZ 0x00542aa3                      ; 005426ac | LAB_00542aa3
        ;   XREF to: 00542aa3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x174]     ; 005426b2
        ;   Label: LAB_005426b2
    MOV EAX,dword ptr [EAX + 0x110]     ; 005426b9
    MOV EDX,dword ptr [ESP + 0x174]     ; 005426bf
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x12c] ; 005426c6
    MOV dword ptr [EDX + 0x110],EAX     ; 005426cd
    MOV EAX,dword ptr [EDX + 0x114]     ; 005426d3
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x12c] ; 005426d9
    MOV dword ptr [EDX + 0x114],EAX     ; 005426e0
    MOV EAX,dword ptr [EDX + 0x1c]      ; 005426e6
    DEC EAX                             ; 005426e9
    MOV dword ptr [ESP + 0x154],EAX     ; 005426ea
    TEST EAX,EAX                        ; 005426f1
    JL 0x00542925                       ; 005426f3 | LAB_00542925
        ;   XREF to: 00542925 (CONDITIONAL_JUMP)
    LEA EAX,[EDX + 0x20]                ; 005426f9
    MOV dword ptr [ESP + 0x150],EAX     ; 005426fc
    XOR EBP,EBP                         ; 00542703
        ;   Label: LAB_00542703
    MOV EAX,dword ptr [ESP + 0x154]     ; 00542705
    MOV dword ptr [ESP + 0x15c],EBP     ; 0054270c
    TEST EAX,EAX                        ; 00542713
    JLE 0x0054290e                      ; 00542715 | LAB_0054290e
        ;   XREF to: 0054290e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x150]     ; 0054271b
    MOV EBX,dword ptr [ESP + 0x150]     ; 00542722
    MOV dword ptr [ESP + 0x13c],EBP     ; 00542729
    ADD EAX,0x1c                        ; 00542730
    ADD EBX,0x78                        ; 00542733
    MOV dword ptr [ESP + 0x158],EAX     ; 00542736
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0054273d
        ;   Label: LAB_0054273d
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00542744
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x130] ; 0054274b
    CMP ECX,dword ptr [ESP + EAX*0x1 + 0x12c] ; 00542752
    JGE 0x005428cb                      ; 00542759 | LAB_005428cb
        ;   XREF to: 005428cb (CONDITIONAL_JUMP)
    LEA EBP,[ESP + 0x12c]               ; 0054275f
    LEA EAX,[EDX + 0x4]                 ; 00542766
    ADD EBP,EAX                         ; 00542769
    LEA EAX,[ESP + 0x12c]               ; 0054276b
    ADD EAX,EDX                         ; 00542772
    MOV EDX,dword ptr [EBP]             ; 00542774
    MOV ECX,dword ptr [EAX]             ; 00542777
    MOV dword ptr [EAX],EDX             ; 00542779
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0054277b
    SHL EAX,0x3                         ; 00542782
    MOV dword ptr [EBP],ECX             ; 00542785
    MOV EBP,EAX                         ; 00542788
    SHL EAX,0x4                         ; 0054278a
    SUB EAX,EBP                         ; 0054278d
    MOV EBP,dword ptr [ESP + 0x150]     ; 0054278f
    ADD EBP,EAX                         ; 00542796
    LEA EDI,[ESP + 0xb4]                ; 00542798
    MOV ESI,EBP                         ; 0054279f
    MOVSD ES:EDI,ESI                    ; 005427a1
    MOVSD ES:EDI,ESI                    ; 005427a2
    MOVSD ES:EDI,ESI                    ; 005427a3
    MOVSD ES:EDI,ESI                    ; 005427a4
    MOVSD ES:EDI,ESI                    ; 005427a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005427a6
    MOV dword ptr [ESP + 0xc8],EAX      ; 005427a9
    MOV EDI,dword ptr [ESP + 0x158]     ; 005427b0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005427b7
    PUSH EDI                            ; 005427ba
    MOV dword ptr [ESP + 0xd0],EAX      ; 005427bb
    LEA EAX,[ESP + 0xd4]                ; 005427c2
    PUSH EAX                            ; 005427c9
    CALL core_netgame.cpp_CNetGame_FUN_00543e20 ; 005427ca | undefined core_netgame.cpp_CNetGame_FUN_00543e20()
        ;   XREF to: 00543e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005427cf
    MOV AX,word ptr [EDI + 0x4]         ; 005427d2
    MOV word ptr [ESP + 0xd4],AX        ; 005427d6
    MOV EAX,dword ptr [EBP + 0x24]      ; 005427de
    MOV dword ptr [ESP + 0xd8],EAX      ; 005427e1
    MOV EAX,dword ptr [EBP + 0x28]      ; 005427e8
    MOV dword ptr [ESP + 0xdc],EAX      ; 005427eb
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005427f2
    MOV dword ptr [ESP + 0xe0],EAX      ; 005427f5
    MOV EAX,dword ptr [EBP + 0x30]      ; 005427fc
    MOV dword ptr [ESP + 0xe4],EAX      ; 005427ff
    MOV EAX,dword ptr [EBP + 0x34]      ; 00542806
    MOV dword ptr [ESP + 0xe8],EAX      ; 00542809
    MOV EAX,dword ptr [EBP + 0x38]      ; 00542810
    MOV dword ptr [ESP + 0xec],EAX      ; 00542813
    MOV EAX,dword ptr [EBP + 0x3c]      ; 0054281a
    MOV dword ptr [ESP + 0xf0],EAX      ; 0054281d
    MOV EAX,dword ptr [EBP + 0x40]      ; 00542824
    MOV dword ptr [ESP + 0xf4],EAX      ; 00542827
    MOV EAX,dword ptr [EBP + 0x44]      ; 0054282e
    MOV dword ptr [ESP + 0xf8],EAX      ; 00542831
    MOV EAX,dword ptr [EBP + 0x48]      ; 00542838
    MOV dword ptr [ESP + 0xfc],EAX      ; 0054283b
    MOV EAX,dword ptr [EBX + -0x2c]     ; 00542842
    MOV dword ptr [ESP + 0x100],EAX     ; 00542845
    MOV EAX,dword ptr [EBX + -0x28]     ; 0054284c
    MOV dword ptr [ESP + 0x104],EAX     ; 0054284f
    MOV EAX,dword ptr [EBX + -0x24]     ; 00542856
    MOV dword ptr [ESP + 0x108],EAX     ; 00542859
    MOV EAX,dword ptr [EBX + -0x20]     ; 00542860
    MOV dword ptr [ESP + 0x10c],EAX     ; 00542863
    MOV EAX,dword ptr [EBX + -0x1c]     ; 0054286a
    MOV dword ptr [ESP + 0x110],EAX     ; 0054286d
    MOV EAX,dword ptr [EBX + -0x18]     ; 00542874
    MOV dword ptr [ESP + 0x114],EAX     ; 00542877
    MOV EAX,dword ptr [EBX + -0x14]     ; 0054287e
    MOV dword ptr [ESP + 0x118],EAX     ; 00542881
    MOV EAX,dword ptr [EBX + -0x10]     ; 00542888
    MOV dword ptr [ESP + 0x11c],EAX     ; 0054288b
    MOV EAX,dword ptr [EBX + -0xc]      ; 00542892
    MOV dword ptr [ESP + 0x120],EAX     ; 00542895
    MOV EAX,dword ptr [EBX + -0x8]      ; 0054289c
    MOV ESI,EBX                         ; 0054289f
    MOV dword ptr [ESP + 0x124],EAX     ; 005428a1
    MOV ECX,0x1e                        ; 005428a8
    MOV EAX,dword ptr [EBX + -0x4]      ; 005428ad
    MOV EDI,EBP                         ; 005428b0
    MOV dword ptr [ESP + 0x128],EAX     ; 005428b2
    MOVSD.REP ES:EDI,ESI                ; 005428b9
    MOV ECX,0x1e                        ; 005428bb
    LEA ESI,[ESP + 0xb4]                ; 005428c0
    MOV EDI,EBX                         ; 005428c7
    MOVSD.REP ES:EDI,ESI                ; 005428c9
    MOV EDX,dword ptr [ESP + 0x13c]     ; 005428cb
        ;   Label: LAB_005428cb
    MOV ECX,dword ptr [ESP + 0x158]     ; 005428d2
    MOV ESI,dword ptr [ESP + 0x15c]     ; 005428d9
    MOV EDI,dword ptr [ESP + 0x154]     ; 005428e0
    ADD EBX,0x78                        ; 005428e7
    ADD EDX,0x4                         ; 005428ea
    ADD ECX,0x78                        ; 005428ed
    INC ESI                             ; 005428f0
    MOV dword ptr [ESP + 0x13c],EDX     ; 005428f1
    MOV dword ptr [ESP + 0x158],ECX     ; 005428f8
    MOV dword ptr [ESP + 0x15c],ESI     ; 005428ff
    CMP ESI,EDI                         ; 00542906
    JL 0x0054273d                       ; 00542908 | LAB_0054273d
        ;   XREF to: 0054273d (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x154]     ; 0054290e
        ;   Label: LAB_0054290e
    DEC ESI                             ; 00542915
    MOV dword ptr [ESP + 0x154],ESI     ; 00542916
    TEST ESI,ESI                        ; 0054291d
    JGE 0x00542703                      ; 0054291f | LAB_00542703
        ;   XREF to: 00542703 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00542925
        ;   Label: LAB_00542925
    ADD ESP,0x160                       ; 0054292a
    POP EBP                             ; 00542930
    POP EDI                             ; 00542931
    POP ESI                             ; 00542932
    POP EBX                             ; 00542933
    RET                                 ; 00542934
    XOR EAX,EAX                         ; 00542935
        ;   Label: LAB_00542935
    ADD ESP,0x160                       ; 00542937
    POP EBP                             ; 0054293d
    POP EDI                             ; 0054293e
    POP ESI                             ; 0054293f
    POP EBX                             ; 00542940
    RET                                 ; 00542941
    INC EBX                             ; 00542942
        ;   Label: LAB_00542942
    ADD EAX,0x28                        ; 00542943
    CMP EBX,ECX                         ; 00542946
    JL 0x0054260a                       ; 00542948 | LAB_0054260a
        ;   XREF to: 0054260a (CONDITIONAL_JUMP)
    JMP 0x00542623                      ; 0054294e | LAB_00542623
        ;   XREF to: 00542623 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x134]     ; 00542953
        ;   Label: LAB_00542953
    MOV dword ptr [ESP + EAX*0x1 + 0x12c],EBX ; 0054295a
    IMUL EDX,EBX,0x28                   ; 00542961
    MOV EAX,dword ptr [ESP + 0x138]     ; 00542964
    SHL EAX,0x3                         ; 0054296b
    LEA ESI,[ESP + 0x61]                ; 0054296e
    MOV ECX,EAX                         ; 00542972
    MOV EDI,dword ptr [ESP + 0x174]     ; 00542974
    SHL ECX,0x4                         ; 0054297b
    MOV EBP,dword ptr [EDI + 0x114]     ; 0054297e
    SUB ECX,EAX                         ; 00542984
    MOV EAX,dword ptr [ESP + 0x138]     ; 00542986
    ADD ESI,EDX                         ; 0054298d
    CMP EAX,EBP                         ; 0054298f
    JNZ 0x00542a59                      ; 00542991 | LAB_00542a59
        ;   XREF to: 00542a59 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00542997
    MOV EDX,dword ptr [ESP + 0x150]     ; 00542998
    XOR EAX,EBP                         ; 0054299f
    PUSH EDX                            ; 005429a1
    MOV [0x00680a04],EAX                ; 005429a2 | undefined4 DAT_00680a04
    CALL crt_string.c_strcmp_FUN_005fef20 ; 005429a7 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005429ac
    TEST EAX,EAX                        ; 005429af
    JZ 0x005429bd                       ; 005429b1 | LAB_005429bd
        ;   XREF to: 005429bd (CONDITIONAL_JUMP)
    MOV dword ptr [0x00680a04],0x1      ; 005429b3 | undefined4 DAT_00680a04
    IMUL EAX,EBX,0x28                   ; 005429bd
        ;   Label: LAB_005429bd
    MOV EDX,dword ptr [ESP + 0x148]     ; 005429c0
    MOV EDX,dword ptr [EDX + 0x64]      ; 005429c7
    CMP EDX,dword ptr [ESP + EAX*0x1 + 0x85] ; 005429ca
    JZ 0x00542a4e                       ; 005429d1 | LAB_00542a4e
        ;   XREF to: 00542a4e (CONDITIONAL_JUMP)
    MOV dword ptr [0x00680a04],0x1      ; 005429d3 | undefined4 DAT_00680a04
    MOV EAX,dword ptr [ESP + 0x174]     ; 005429dd
        ;   Label: LAB_005429dd
    PUSH EAX                            ; 005429e4
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0 ; 005429e5 | undefined core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0()
        ;   XREF to: 00542ff0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005429ea
    IMUL EBX,EBX,0x28                   ; 005429ed
        ;   Label: LAB_005429ed
    MOV ECX,dword ptr [ESP + 0x14c]     ; 005429f0
    MOV ESI,dword ptr [ESP + 0x148]     ; 005429f7
    MOV EDI,dword ptr [ESP + 0x138]     ; 005429fe
    XOR DL,DL                           ; 00542a05
    ADD ECX,0x78                        ; 00542a07
    ADD ESI,0x78                        ; 00542a0a
    INC EDI                             ; 00542a0d
    MOV dword ptr [ESP + 0x14c],ECX     ; 00542a0e
    MOV dword ptr [ESP + 0x148],ESI     ; 00542a15
    MOV dword ptr [ESP + 0x138],EDI     ; 00542a1c
    MOV byte ptr [ESP + EBX*0x1 + 0x61],DL ; 00542a23
    MOV EDX,dword ptr [ESP + 0x144]     ; 00542a27
    MOV EBX,dword ptr [ESP + 0x134]     ; 00542a2e
    ADD EDX,0x78                        ; 00542a35
    ADD EBX,0x4                         ; 00542a38
    MOV dword ptr [ESP + 0x144],EDX     ; 00542a3b
    MOV dword ptr [ESP + 0x134],EBX     ; 00542a42
    JMP 0x0054267d                      ; 00542a49 | LAB_0054267d
        ;   XREF to: 0054267d (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x00680a04],0x0      ; 00542a4e | undefined4 DAT_00680a04
        ;   Label: LAB_00542a4e
    JNZ 0x005429dd                      ; 00542a55 | LAB_005429dd
        ;   XREF to: 005429dd (CONDITIONAL_JUMP)
    JMP 0x005429ed                      ; 00542a57 | LAB_005429ed
        ;   XREF to: 005429ed (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x14c]     ; 00542a59
        ;   Label: LAB_00542a59
    PUSH EDI                            ; 00542a60
    MOV AL,byte ptr [ESI]               ; 00542a61
        ;   Label: LAB_00542a61
    MOV byte ptr [EDI],AL               ; 00542a63
    CMP AL,0x0                          ; 00542a65
    JZ 0x00542a79                       ; 00542a67 | LAB_00542a79
        ;   XREF to: 00542a79 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00542a69
    ADD ESI,0x2                         ; 00542a6c
    MOV byte ptr [EDI + 0x1],AL         ; 00542a6f
    ADD EDI,0x2                         ; 00542a72
    CMP AL,0x0                          ; 00542a75
    JNZ 0x00542a61                      ; 00542a77 | LAB_00542a61
        ;   XREF to: 00542a61 (CONDITIONAL_JUMP)
    POP EDI                             ; 00542a79
        ;   Label: LAB_00542a79
    MOV EAX,dword ptr [ESP + 0x174]     ; 00542a7a
    ADD EAX,ECX                         ; 00542a81
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x85] ; 00542a83
    MOV dword ptr [EAX + 0x64],ECX      ; 00542a8a
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x7d] ; 00542a8d
    MOV dword ptr [EAX + 0x34],ECX      ; 00542a91
    MOV EDX,dword ptr [ESP + EDX*0x1 + 0x81] ; 00542a94
    MOV dword ptr [EAX + 0x38],EDX      ; 00542a9b
    JMP 0x005429ed                      ; 00542a9e | LAB_005429ed
        ;   XREF to: 005429ed (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + EBX*0x1 + 0x81] ; 00542aa3
        ;   Label: LAB_00542aa3
    PUSH EDX                            ; 00542aaa
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x81] ; 00542aab
    LEA EAX,[ESP + 0x65]                ; 00542ab2
    PUSH ECX                            ; 00542ab6
    ADD EAX,EBX                         ; 00542ab7
    PUSH EAX                            ; 00542ab9
    ADD EAX,0x14                        ; 00542aba
    PUSH EAX                            ; 00542abd
    PUSH EDI                            ; 00542abe
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0 ; 00542abf | undefined core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0()
        ;   XREF to: 005412b0 (UNCONDITIONAL_CALL)
    IMUL ECX,EAX,0x78                   ; 00542ac4
    ADD ESP,0x14                        ; 00542ac7
    ADD ECX,EDI                         ; 00542aca
    MOV EDX,dword ptr [ESP + EBX*0x1 + 0x85] ; 00542acc
    MOV dword ptr [ECX + 0x64],EDX      ; 00542ad3
    MOV dword ptr [ESP + EAX*0x4 + 0x12c],ESI ; 00542ad6
    MOV EAX,dword ptr [ESP + 0x5d]      ; 00542add
    INC ESI                             ; 00542ae1
    ADD EBX,0x28                        ; 00542ae2
    CMP ESI,EAX                         ; 00542ae5
    JL 0x005426a7                       ; 00542ae7 | LAB_005426a7
        ;   XREF to: 005426a7 (CONDITIONAL_JUMP)
    JMP 0x005426b2                      ; 00542aed | LAB_005426b2
        ;   XREF to: 005426b2 (UNCONDITIONAL_JUMP)

