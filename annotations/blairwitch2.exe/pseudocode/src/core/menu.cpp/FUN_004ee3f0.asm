; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_FUN_004ee3f0(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_main.c_FUN_004e46b0 at 004e46b0
;
; Referenced Globals:
;   void* switchdataD_004ee3e0 = 004ee653
;   TerminatedCString s_fblurl_005dd26f
;   TerminatedCString s_fblurm_005dd276
;   TerminatedCString s_fblurr_005dd27d
;   TerminatedCString s_S_T_A_R_T_005dd284
;   TerminatedCString s_O_P_T_I_O_N_S_005dd28e
;   TerminatedCString s_L_O_A_D_005dd29c
;   TerminatedCString s_Q_U_I_T_005dd2a4
;   TerminatedCString s_f0100_005dd711
;   TerminatedCString s_f0300_005dd717
;   undefined4 DAT_006141bc
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_00617dd4
;   void* PTR_s_f0100_00618088 = 005dd711
;   undefined1* PTR_s_f0300_0061808c = 005dd717
;   ... and 26 more
;
; Called Functions:
;   core_game.cpp_FUN_004b3000
;   core_game.cpp_FUN_004b3010
;   core_game.cpp_FUN_004bbf70
;   core_game.cpp_FUN_004bc840
;   core_main.c_FUN_004e45e0
;   core_menu.cpp_FUN_004eb0e0
;   core_menu.cpp_FUN_004ee1a0
;   core_moon.cpp_FUN_005023e0
;   core_moon.cpp_FUN_00502450
;   core_moon.cpp_FUN_005024a0
;   core_moon.cpp_FUN_00502510
;   core_set.cpp_FUN_005344c0
;   core_sound.cpp_FUN_0055ac50
;   core_sound.cpp_FUN_0055adb0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ee3f0
        ;   Label: core_menu.cpp_FUN_004ee3f0
    SUB ESP,0xc                         ; 004ee3f1
    CMP dword ptr [0x006141bc],0x1e0    ; 004ee3f4 | DAT_006141bc
    JL 0x004ee7f9                       ; 004ee3fe
        ;   XREF to: 004ee7f9 (CONDITIONAL_JUMP)  ; LAB_004ee7f9
    CMP dword ptr [0x0264bba0],0x0      ; 004ee404 | DAT_0264bba0
    JZ 0x004ee803                       ; 004ee40b
        ;   XREF to: 004ee803 (CONDITIONAL_JUMP)  ; LAB_004ee803
    PUSH EDI                            ; 004ee411
        ;   Label: LAB_004ee411
    PUSH ESI                            ; 004ee412
    PUSH EBX                            ; 004ee413
    MOV EBX,0x1d05580                   ; 004ee414
    XOR ESI,ESI                         ; 004ee419
    MOV EBP,0x40                        ; 004ee41b
    PUSH EBP                            ; 004ee420
        ;   Label: LAB_004ee420
    PUSH EBP                            ; 004ee421
    MOV EDI,dword ptr [ESI + 0x618088]  ; 004ee422 | PTR_s_f0100_00618088 | PTR_s_f0300_0061808c
    PUSH EDI                            ; 004ee428 | = "f0100" | s_f0300_005dd717
    PUSH EBX                            ; 004ee429
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004ee42a
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ee42f
    PUSH 0x1                            ; 004ee432
    PUSH 0x2                            ; 004ee434
    PUSH EBX                            ; 004ee436
    ADD ESI,0x4                         ; 004ee437
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004ee43a
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004ee43f
    ADD EBX,0x14                        ; 004ee442
    CMP ESI,0x20                        ; 004ee445
    JNZ 0x004ee420                      ; 004ee448
        ;   XREF to: 004ee420 (CONDITIONAL_JUMP)  ; LAB_004ee420
    PUSH 0x46                           ; 004ee44a
    PUSH 0x68                           ; 004ee44c
    PUSH 0x5dd26f                       ; 004ee44e | = "fblurl"
    PUSH 0x1d060f0                      ; 004ee453
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004ee458
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ee45d
    PUSH 0x46                           ; 004ee460
    PUSH ESI                            ; 004ee462
    PUSH 0x5dd276                       ; 004ee463 | = "fblurm"
    PUSH 0x1d06104                      ; 004ee468
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004ee46d
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ee472
    PUSH 0x46                           ; 004ee475
    PUSH 0x68                           ; 004ee477
    PUSH 0x5dd27d                       ; 004ee479 | = "fblurr"
    PUSH 0x1d06118                      ; 004ee47e
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004ee483
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ee488
    XOR EBP,EBP                         ; 004ee48b
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004ee48d
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL engine_texture.cpp_FUN_00575010 ; 004ee492
        ;   XREF to: 00575010 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00575010()
    PUSH 0x1d05620                      ; 004ee497
    MOV dword ptr [ESP + 0x10],EBP      ; 004ee49c
    CALL core_moon.cpp_FUN_005023e0     ; 004ee4a0
        ;   XREF to: 005023e0 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_005023e0()
    ADD ESP,0x4                         ; 004ee4a5
    MOV EDX,dword ptr [0x00616494]      ; 004ee4a8 | g_CGamePtr
    MOV EAX,0x1                         ; 004ee4ae
    PUSH EDX                            ; 004ee4b3 | g_CGameInstance
    MOV dword ptr [ESP + 0x18],EAX      ; 004ee4b4
    CALL core_game.cpp_FUN_004b3000     ; 004ee4b8
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3000(CGame * this_ptr)
    ADD ESP,0x4                         ; 004ee4bd
    MOV ECX,dword ptr [0x00616494]      ; 004ee4c0 | g_CGamePtr
        ;   Label: LAB_004ee4c0
    PUSH ECX                            ; 004ee4c6 | g_CGameInstance
    CALL core_game.cpp_FUN_004b3010     ; 004ee4c7
        ;   XREF to: 004b3010 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3010(CGame * this_ptr)
    ADD ESP,0x4                         ; 004ee4cc
    PUSH 0x10000                        ; 004ee4cf
    MOV EAX,[0x00616494]                ; 004ee4d4 | g_CGamePtr
    PUSH 0xc350                         ; 004ee4d9
    MOV EAX,dword ptr [EAX + 0x284]     ; 004ee4de | g_CGameInstance.field644_0x284
    PUSH 0xc350                         ; 004ee4e4
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ee4e9
    MOV EAX,[0x0061b5a8]                ; 004ee4ed | g_CDemonSetPtr
    PUSH EAX                            ; 004ee4f2 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004ee4f3 | g_CDemonSetInstance.field1420932_0x15ae84
    CALL core_set.cpp_FUN_005344c0      ; 004ee4fd
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004ee502
    MOV EAX,[0x0061b5a8]                ; 004ee505 | g_CDemonSetPtr
    PUSH dword ptr [ESP + 0x10]         ; 004ee50a
    PUSH 0x1d05620                      ; 004ee50e
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004ee513 | g_CDemonSetInstance.field1420948_0x15ae94
    CALL core_moon.cpp_FUN_005024a0     ; 004ee51d
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_005024a0()
    ADD ESP,0x8                         ; 004ee522
    PUSH 0x1d05620                      ; 004ee525
    CALL core_moon.cpp_FUN_00502510     ; 004ee52a
        ;   XREF to: 00502510 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00502510()
    ADD ESP,0x4                         ; 004ee52f
    MOV EAX,[0x0061b5a8]                ; 004ee532 | g_CDemonSetPtr
    PUSH 0x5dd284                       ; 004ee537 | = "S T A R T"
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004ee53c | g_CDemonSetInstance.field1420932_0x15ae84
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ee546
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ee54b
    MOV EDI,0x1d082e0                   ; 004ee54e
    MOV ESI,EAX                         ; 004ee553
    PUSH EDI                            ; 004ee555
    MOV AL,byte ptr [ESI]               ; 004ee556
        ;   Label: LAB_004ee556
    MOV byte ptr [EDI],AL               ; 004ee558 | DAT_01d082e0 | DAT_01d082e2
    CMP AL,0x0                          ; 004ee55a
    JZ 0x004ee56e                       ; 004ee55c
        ;   XREF to: 004ee56e (CONDITIONAL_JUMP)  ; LAB_004ee56e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ee55e
    ADD ESI,0x2                         ; 004ee561
    MOV byte ptr [EDI + 0x1],AL         ; 004ee564 | DAT_01d082e1 | DAT_01d082e3
    ADD EDI,0x2                         ; 004ee567
    CMP AL,0x0                          ; 004ee56a
    JNZ 0x004ee556                      ; 004ee56c
        ;   XREF to: 004ee556 (CONDITIONAL_JUMP)  ; LAB_004ee556
    POP EDI                             ; 004ee56e
        ;   Label: LAB_004ee56e
    PUSH 0x5dd28e                       ; 004ee56f | = "O P T I O N S"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ee574
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ee579
    MOV EDI,0x1d083e0                   ; 004ee57c
    MOV ESI,EAX                         ; 004ee581
    PUSH EDI                            ; 004ee583
    MOV AL,byte ptr [ESI]               ; 004ee584
        ;   Label: LAB_004ee584
    MOV byte ptr [EDI],AL               ; 004ee586 | DAT_01d083e0 | DAT_01d083e2
    CMP AL,0x0                          ; 004ee588
    JZ 0x004ee59c                       ; 004ee58a
        ;   XREF to: 004ee59c (CONDITIONAL_JUMP)  ; LAB_004ee59c
    MOV AL,byte ptr [ESI + 0x1]         ; 004ee58c
    ADD ESI,0x2                         ; 004ee58f
    MOV byte ptr [EDI + 0x1],AL         ; 004ee592 | DAT_01d083e1 | DAT_01d083e3
    ADD EDI,0x2                         ; 004ee595
    CMP AL,0x0                          ; 004ee598
    JNZ 0x004ee584                      ; 004ee59a
        ;   XREF to: 004ee584 (CONDITIONAL_JUMP)  ; LAB_004ee584
    POP EDI                             ; 004ee59c
        ;   Label: LAB_004ee59c
    PUSH 0x5dd29c                       ; 004ee59d | = "L O A D"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ee5a2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ee5a7
    MOV EDI,0x1d084e0                   ; 004ee5aa
    MOV ESI,EAX                         ; 004ee5af
    PUSH EDI                            ; 004ee5b1
    MOV AL,byte ptr [ESI]               ; 004ee5b2
        ;   Label: LAB_004ee5b2
    MOV byte ptr [EDI],AL               ; 004ee5b4 | DAT_01d084e0 | DAT_01d084e2
    CMP AL,0x0                          ; 004ee5b6
    JZ 0x004ee5ca                       ; 004ee5b8
        ;   XREF to: 004ee5ca (CONDITIONAL_JUMP)  ; LAB_004ee5ca
    MOV AL,byte ptr [ESI + 0x1]         ; 004ee5ba
    ADD ESI,0x2                         ; 004ee5bd
    MOV byte ptr [EDI + 0x1],AL         ; 004ee5c0 | DAT_01d084e1 | DAT_01d084e3
    ADD EDI,0x2                         ; 004ee5c3
    CMP AL,0x0                          ; 004ee5c6
    JNZ 0x004ee5b2                      ; 004ee5c8
        ;   XREF to: 004ee5b2 (CONDITIONAL_JUMP)  ; LAB_004ee5b2
    POP EDI                             ; 004ee5ca
        ;   Label: LAB_004ee5ca
    PUSH 0x5dd2a4                       ; 004ee5cb | = "Q U I T"
    MOV EDI,0x1d085e0                   ; 004ee5d0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ee5d5
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ee5da
    MOV ESI,EAX                         ; 004ee5dd
    MOV EDX,0x1d082e0                   ; 004ee5df
    PUSH EDI                            ; 004ee5e4
    MOV AL,byte ptr [ESI]               ; 004ee5e5
        ;   Label: LAB_004ee5e5
    MOV byte ptr [EDI],AL               ; 004ee5e7 | DAT_01d085e0 | DAT_01d085e2
    CMP AL,0x0                          ; 004ee5e9
    JZ 0x004ee5fd                       ; 004ee5eb
        ;   XREF to: 004ee5fd (CONDITIONAL_JUMP)  ; LAB_004ee5fd
    MOV AL,byte ptr [ESI + 0x1]         ; 004ee5ed
    ADD ESI,0x2                         ; 004ee5f0
    MOV byte ptr [EDI + 0x1],AL         ; 004ee5f3 | DAT_01d085e1 | DAT_01d085e3
    ADD EDI,0x2                         ; 004ee5f6
    CMP AL,0x0                          ; 004ee5f9
    JNZ 0x004ee5e5                      ; 004ee5fb
        ;   XREF to: 004ee5e5 (CONDITIONAL_JUMP)  ; LAB_004ee5e5
    POP EDI                             ; 004ee5fd
        ;   Label: LAB_004ee5fd
    XOR EAX,EAX                         ; 004ee5fe
    MOV dword ptr [EAX + 0x1d086e0],EDX ; 004ee600 | DAT_01d082e0 | DAT_01d083e0
        ;   Label: LAB_004ee600
    ADD EAX,0x4                         ; 004ee606
    ADD EDX,0x100                       ; 004ee609
    CMP EAX,0x10                        ; 004ee60f
    JNZ 0x004ee600                      ; 004ee612
        ;   XREF to: 004ee600 (CONDITIONAL_JUMP)  ; LAB_004ee600
    PUSH 0x0                            ; 004ee614
    PUSH 0x136                          ; 004ee616
    LEA EAX,[ESP + 0x14]                ; 004ee61b
    PUSH EAX                            ; 004ee61f
    PUSH 0x4                            ; 004ee620
    PUSH 0x1d086e0                      ; 004ee622
    CALL core_menu.cpp_FUN_004eb0e0     ; 004ee627
        ;   XREF to: 004eb0e0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_FUN_004eb0e0()
    ADD ESP,0x14                        ; 004ee62c
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ee62f
    MOV ESI,EAX                         ; 004ee633
    TEST EBX,EBX                        ; 004ee635
    JZ 0x004ee63e                       ; 004ee637
        ;   XREF to: 004ee63e (CONDITIONAL_JUMP)  ; LAB_004ee63e
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004ee639
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 004ee63e
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
        ;   Label: LAB_004ee63e
    CMP ESI,0x3                         ; 004ee643
    JA 0x004ee6d4                       ; 004ee646
        ;   XREF to: 004ee6d4 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ESI*0x4 + 0x4ee3e0]  ; 004ee64c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x1d05620                      ; 004ee653
        ;   Label: caseD_0
    CALL core_moon.cpp_FUN_00502450     ; 004ee658
        ;   XREF to: 00502450 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00502450()
    ADD ESP,0x4                         ; 004ee65d
    MOV EDX,dword ptr [0x0061c068]      ; 004ee660 | DAT_0061c068
    PUSH EDX                            ; 004ee666
    CALL core_sound.cpp_FUN_0055adb0    ; 004ee667
        ;   XREF to: 0055adb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055adb0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ee66c
    MOV EAX,[0x00617dd4]                ; 004ee66f | DAT_00617dd4
    PUSH 0x2a                           ; 004ee674
    MOV EDX,dword ptr [EAX]             ; 004ee676 | DAT_01d02f84
    PUSH EAX                            ; 004ee678 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004ee679
    ADD ESP,0x8                         ; 004ee67b
    TEST EAX,EAX                        ; 004ee67e
    JZ 0x004ee827                       ; 004ee680
        ;   XREF to: 004ee827 (CONDITIONAL_JUMP)  ; LAB_004ee827
    PUSH 0x1d                           ; 004ee686
    MOV EAX,[0x00617dd4]                ; 004ee688 | DAT_00617dd4
    PUSH EAX                            ; 004ee68d | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ee68e | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004ee690
    ADD ESP,0x8                         ; 004ee692
    TEST EAX,EAX                        ; 004ee695
    JZ 0x004ee827                       ; 004ee697
        ;   XREF to: 004ee827 (CONDITIONAL_JUMP)  ; LAB_004ee827
    PUSH 0x2                            ; 004ee69d
    MOV ESI,dword ptr [0x00616494]      ; 004ee69f | g_CGamePtr
    PUSH ESI                            ; 004ee6a5 | g_CGameInstance
    CALL core_game.cpp_FUN_004bc840     ; 004ee6a6
        ;   XREF to: 004bc840 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004bc840()
        ;   Label: LAB_004ee6a6
    ADD ESP,0x8                         ; 004ee6ab
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004ee6ae
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL engine_texture.cpp_FUN_00575010 ; 004ee6b3
        ;   XREF to: 00575010 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00575010()
    PUSH 0x1d05620                      ; 004ee6b8
    CALL core_moon.cpp_FUN_005023e0     ; 004ee6bd
        ;   XREF to: 005023e0 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_005023e0()
    ADD ESP,0x4                         ; 004ee6c2
    MOV EDI,dword ptr [0x0061c068]      ; 004ee6c5 | DAT_0061c068
    PUSH EDI                            ; 004ee6cb
    CALL core_sound.cpp_FUN_0055ac50    ; 004ee6cc
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055ac50(CSound * this_ptr)
        ;   Label: LAB_004ee6cc
    ADD ESP,0x4                         ; 004ee6d1
        ;   Label: LAB_004ee6d1
    PUSH 0x1                            ; 004ee6d4
        ;   Label: default
    MOV EAX,[0x00617dd4]                ; 004ee6d6 | DAT_00617dd4
    PUSH EAX                            ; 004ee6db | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ee6dc | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004ee6de
    ADD ESP,0x8                         ; 004ee6e1
    TEST EAX,EAX                        ; 004ee6e4
    JZ 0x004ee6ed                       ; 004ee6e6
        ;   XREF to: 004ee6ed (CONDITIONAL_JUMP)  ; LAB_004ee6ed
    MOV EBP,0x63                        ; 004ee6e8
    PUSH 0x1d                           ; 004ee6ed
        ;   Label: LAB_004ee6ed
    MOV EAX,[0x00617dd4]                ; 004ee6ef | DAT_00617dd4
    PUSH EAX                            ; 004ee6f4 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ee6f5 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004ee6f7
    ADD ESP,0x8                         ; 004ee6f9
    TEST EAX,EAX                        ; 004ee6fc
    JZ 0x004ee73a                       ; 004ee6fe
        ;   XREF to: 004ee73a (CONDITIONAL_JUMP)  ; LAB_004ee73a
    PUSH 0x32                           ; 004ee700
    MOV EAX,[0x00617dd4]                ; 004ee702 | DAT_00617dd4
    PUSH EAX                            ; 004ee707 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ee708 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004ee70a
    ADD ESP,0x8                         ; 004ee70d
    TEST EAX,EAX                        ; 004ee710
    JZ 0x004ee73a                       ; 004ee712
        ;   XREF to: 004ee73a (CONDITIONAL_JUMP)  ; LAB_004ee73a
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00550bc0 ; 004ee714
        ;   XREF to: 00550bc0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00550bc0()
    TEST EAX,EAX                        ; 004ee719
    SETZ AL                             ; 004ee71b
    AND EAX,0xff                        ; 004ee71e
    PUSH EAX                            ; 004ee723
    CALL sound_sndmain.cpp_setSoundMuted_FUN_00550bd0 ; 004ee724
        ;   XREF to: 00550bd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundMuted_FUN_00550bd0(int muted)
    ADD ESP,0x4                         ; 004ee729
    MOV EAX,[0x0061c068]                ; 004ee72c | DAT_0061c068
    PUSH EAX                            ; 004ee731
    CALL core_sound.cpp_FUN_0055ac50    ; 004ee732
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055ac50(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ee737
    PUSH 0x1d                           ; 004ee73a
        ;   Label: LAB_004ee73a
    MOV EAX,[0x00617dd4]                ; 004ee73c | DAT_00617dd4
    PUSH EAX                            ; 004ee741 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ee742 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004ee744
    ADD ESP,0x8                         ; 004ee746
    TEST EAX,EAX                        ; 004ee749
    JZ 0x004ee788                       ; 004ee74b
        ;   XREF to: 004ee788 (CONDITIONAL_JUMP)  ; LAB_004ee788
    PUSH 0x20                           ; 004ee74d
    MOV EAX,[0x00617dd4]                ; 004ee74f | DAT_00617dd4
    PUSH EAX                            ; 004ee754 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ee755 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004ee757
    ADD ESP,0x8                         ; 004ee75a
    TEST EAX,EAX                        ; 004ee75d
    JZ 0x004ee8bc                       ; 004ee75f
        ;   XREF to: 004ee8bc (CONDITIONAL_JUMP)  ; LAB_004ee8bc
    MOV EDX,dword ptr [0x0061c068]      ; 004ee765 | DAT_0061c068
        ;   Label: LAB_004ee765
    PUSH EDX                            ; 004ee76b
    CALL core_sound.cpp_FUN_0055adb0    ; 004ee76c
        ;   XREF to: 0055adb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055adb0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ee771
    CALL core_main.c_FUN_004e45e0       ; 004ee774
        ;   XREF to: 004e45e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e45e0()
    MOV ECX,dword ptr [0x0061c068]      ; 004ee779 | DAT_0061c068
    PUSH ECX                            ; 004ee77f
    CALL core_sound.cpp_FUN_0055ac50    ; 004ee780
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055ac50(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ee785
    PUSH 0x1d                           ; 004ee788
        ;   Label: LAB_004ee788
    MOV EAX,[0x00617dd4]                ; 004ee78a | DAT_00617dd4
    PUSH EAX                            ; 004ee78f | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ee790 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004ee792
    ADD ESP,0x8                         ; 004ee794
    TEST EAX,EAX                        ; 004ee797
    JZ 0x004ee7ab                       ; 004ee799
        ;   XREF to: 004ee7ab (CONDITIONAL_JUMP)  ; LAB_004ee7ab
    PUSH 0x21                           ; 004ee79b
    MOV EAX,[0x00617dd4]                ; 004ee79d | DAT_00617dd4
    PUSH EAX                            ; 004ee7a2 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ee7a3 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004ee7a5
    ADD ESP,0x8                         ; 004ee7a8
    CMP dword ptr [ESP + 0x14],0x0      ; 004ee7ab
        ;   Label: LAB_004ee7ab
    JZ 0x004ee7cc                       ; 004ee7b0
        ;   XREF to: 004ee7cc (CONDITIONAL_JUMP)  ; LAB_004ee7cc
    MOV EDI,dword ptr [0x0061c068]      ; 004ee7b2 | DAT_0061c068
    XOR ESI,ESI                         ; 004ee7b8
    PUSH EDI                            ; 004ee7ba
    MOV dword ptr [ESP + 0x18],ESI      ; 004ee7bb
    CALL core_sound.cpp_FUN_0055ac50    ; 004ee7bf
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055ac50(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ee7c4
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004ee7c7
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    TEST EBP,EBP                        ; 004ee7cc
        ;   Label: LAB_004ee7cc
    JZ 0x004ee4c0                       ; 004ee7ce
        ;   XREF to: 004ee4c0 (CONDITIONAL_JUMP)  ; LAB_004ee4c0
    MOV EAX,[0x0061c068]                ; 004ee7d4 | DAT_0061c068
    PUSH EAX                            ; 004ee7d9
    CALL core_sound.cpp_FUN_0055adb0    ; 004ee7da
        ;   XREF to: 0055adb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055adb0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ee7df
    PUSH 0x1d05620                      ; 004ee7e2
    CALL core_moon.cpp_FUN_00502450     ; 004ee7e7
        ;   XREF to: 00502450 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00502450()
    ADD ESP,0x4                         ; 004ee7ec
    MOV EAX,EBP                         ; 004ee7ef
    POP EBX                             ; 004ee7f1
    POP ESI                             ; 004ee7f2
    POP EDI                             ; 004ee7f3
    ADD ESP,0xc                         ; 004ee7f4
    POP EBP                             ; 004ee7f7
    RET                                 ; 004ee7f8
    MOV EAX,0x1                         ; 004ee7f9
        ;   Label: LAB_004ee7f9
    ADD ESP,0xc                         ; 004ee7fe
    POP EBP                             ; 004ee801
    RET                                 ; 004ee802
    MOV EAX,[0x00616494]                ; 004ee803 | g_CGamePtr
        ;   Label: LAB_004ee803
    CMP dword ptr [EAX + 0x4],0x1e0     ; 004ee808 | g_CGameInstance.field4_0x4
    JLE 0x004ee411                      ; 004ee80f
        ;   XREF to: 004ee411 (CONDITIONAL_JUMP)  ; LAB_004ee411
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004ee815 | g_CGameInstance.field4_0x4
    MOV dword ptr [EAX],0x280           ; 004ee81c | g_CGameInstance
    JMP 0x004ee411                      ; 004ee822
        ;   XREF to: 004ee411 (UNCONDITIONAL_JUMP)  ; LAB_004ee411
    PUSH 0x1d                           ; 004ee827
        ;   Label: LAB_004ee827
    MOV EAX,[0x00617dd4]                ; 004ee829 | DAT_00617dd4
    PUSH EAX                            ; 004ee82e | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ee82f | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004ee831
    ADD ESP,0x8                         ; 004ee833
    TEST EAX,EAX                        ; 004ee836
    JZ 0x004ee848                       ; 004ee838
        ;   XREF to: 004ee848 (CONDITIONAL_JUMP)  ; LAB_004ee848
    PUSH 0x1                            ; 004ee83a
    MOV EBX,dword ptr [0x00616494]      ; 004ee83c | g_CGamePtr
    PUSH EBX                            ; 004ee842 | g_CGameInstance
    JMP 0x004ee6a6                      ; 004ee843
        ;   XREF to: 004ee6a6 (UNCONDITIONAL_JUMP)  ; LAB_004ee6a6
    PUSH EAX                            ; 004ee848
        ;   Label: LAB_004ee848
    MOV ECX,dword ptr [0x00616494]      ; 004ee849 | g_CGamePtr
    PUSH ECX                            ; 004ee84f | g_CGameInstance
    JMP 0x004ee6a6                      ; 004ee850
        ;   XREF to: 004ee6a6 (UNCONDITIONAL_JUMP)  ; LAB_004ee6a6
    PUSH 0x1d05620                      ; 004ee855
        ;   Label: caseD_2
    CALL core_moon.cpp_FUN_00502450     ; 004ee85a
        ;   XREF to: 00502450 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00502450()
    ADD ESP,0x4                         ; 004ee85f
    MOV ESI,dword ptr [0x0061c068]      ; 004ee862 | DAT_0061c068
    PUSH ESI                            ; 004ee868
    CALL core_sound.cpp_FUN_0055adb0    ; 004ee869
        ;   XREF to: 0055adb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055adb0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ee86e
    PUSH 0x1                            ; 004ee871
    PUSH 0x0                            ; 004ee873
    MOV EDI,dword ptr [0x00616494]      ; 004ee875 | g_CGamePtr
    PUSH EDI                            ; 004ee87b | g_CGameInstance
    CALL core_game.cpp_FUN_004bbf70     ; 004ee87c
        ;   XREF to: 004bbf70 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bbf70(CGame * this_ptr, char * save_filename, int load_mode)
    ADD ESP,0xc                         ; 004ee881
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004ee884
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL engine_texture.cpp_FUN_00575010 ; 004ee889
        ;   XREF to: 00575010 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00575010()
    PUSH 0x1d05620                      ; 004ee88e
    CALL core_moon.cpp_FUN_005023e0     ; 004ee893
        ;   XREF to: 005023e0 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_005023e0()
    ADD ESP,0x4                         ; 004ee898
    MOV EAX,[0x0061c068]                ; 004ee89b | DAT_0061c068
    PUSH EAX                            ; 004ee8a0
    JMP 0x004ee6cc                      ; 004ee8a1
        ;   XREF to: 004ee6cc (UNCONDITIONAL_JUMP)  ; LAB_004ee6cc
    PUSH 0x0                            ; 004ee8a6
        ;   Label: caseD_1
    CALL core_menu.cpp_FUN_004ee1a0     ; 004ee8a8
        ;   XREF to: 004ee1a0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_FUN_004ee1a0()
    JMP 0x004ee6d1                      ; 004ee8ad
        ;   XREF to: 004ee6d1 (UNCONDITIONAL_JUMP)  ; LAB_004ee6d1
    MOV EBP,0x63                        ; 004ee8b2
        ;   Label: caseD_3
    JMP 0x004ee6d4                      ; 004ee8b7
        ;   XREF to: 004ee6d4 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x26                           ; 004ee8bc
        ;   Label: LAB_004ee8bc
    MOV EAX,[0x00617dd4]                ; 004ee8be | DAT_00617dd4
    PUSH EAX                            ; 004ee8c3 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ee8c4 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004ee8c6
    ADD ESP,0x8                         ; 004ee8c9
    TEST EAX,EAX                        ; 004ee8cc
    JNZ 0x004ee765                      ; 004ee8ce
        ;   XREF to: 004ee765 (CONDITIONAL_JUMP)  ; LAB_004ee765
    JMP 0x004ee788                      ; 004ee8d4
        ;   XREF to: 004ee788 (UNCONDITIONAL_JUMP)  ; LAB_004ee788

