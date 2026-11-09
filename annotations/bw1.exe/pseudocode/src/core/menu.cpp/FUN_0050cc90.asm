; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_FUN_0050cc90(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_main.c_FUN_00503290 at 00503290
;
; Referenced Globals:
;   void* switchdataD_0050cc78 = 0050cef0
;   TerminatedCString s_fblurl_005e8240
;   TerminatedCString s_fblurm_005e8247
;   TerminatedCString s_fblurr_005e824e
;   TerminatedCString s_S_T_A_R_T_005e8255
;   TerminatedCString s_O_P_T_I_O_N_S_005e825f
;   TerminatedCString s_L_O_A_D_005e826d
;   TerminatedCString s_Q_U_I_T_005e8275
;   TerminatedCString s_f0100_005e8798
;   TerminatedCString s_f0300_005e879e
;   undefined4 DAT_0061b49c
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_0061f2a4
;   void* PTR_s_f0100_0061f570 = 005e8798
;   undefined1* PTR_s_f0300_0061f574 = 005e879e
;   ... and 26 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004cbf10
;   core_game.cpp_FUN_004cbf20
;   core_game.cpp_FUN_004d6990
;   core_game.cpp_FUN_004d7250
;   core_main.c_FUN_005031c0
;   core_menu.cpp_FUN_0050c990
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00509e20
;   core_moon.cpp_FUN_00521c50
;   core_moon.cpp_FUN_00521d50
;   core_moon.cpp_FUN_00521dd0
;   core_moon.cpp_FUN_00521e40
;   core_set.cpp_FUN_00555770
;   core_sound.cpp_FUN_0057d6a0
;   core_sound.cpp_FUN_0057d800
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0050cc90
        ;   Label: core_menu.cpp_FUN_0050cc90
    SUB ESP,0xc                         ; 0050cc91
    CMP dword ptr [0x0061b49c],0x1e0    ; 0050cc94 | DAT_0061b49c
    JL 0x0050d0ba                       ; 0050cc9e
        ;   XREF to: 0050d0ba (CONDITIONAL_JUMP)  ; LAB_0050d0ba
    CMP dword ptr [0x02c83370],0x0      ; 0050cca4 | DAT_02c83370
    JZ 0x0050d0c4                       ; 0050ccab
        ;   XREF to: 0050d0c4 (CONDITIONAL_JUMP)  ; LAB_0050d0c4
    PUSH EDI                            ; 0050ccb1
        ;   Label: LAB_0050ccb1
    PUSH ESI                            ; 0050ccb2
    PUSH EBX                            ; 0050ccb3
    MOV ESI,0x1d1e2e0                   ; 0050ccb4
    XOR EBX,EBX                         ; 0050ccb9
    MOV EBP,0x40                        ; 0050ccbb
    PUSH EBP                            ; 0050ccc0
        ;   Label: LAB_0050ccc0
    PUSH EBP                            ; 0050ccc1
    MOV EDI,dword ptr [EBX + 0x61f570]  ; 0050ccc2 | PTR_s_f0100_0061f570 | PTR_s_f0300_0061f574
    PUSH EDI                            ; 0050ccc8 | = "f0100" | s_f0300_005e879e
    PUSH ESI                            ; 0050ccc9
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 0050ccca
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0050cccf
    PUSH 0x1                            ; 0050ccd2
    PUSH 0x2                            ; 0050ccd4
    PUSH ESI                            ; 0050ccd6
    ADD EBX,0x4                         ; 0050ccd7
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840 ; 0050ccda
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040d840(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 0050ccdf
    ADD ESI,0x14                        ; 0050cce2
    CMP EBX,0x20                        ; 0050cce5
    JNZ 0x0050ccc0                      ; 0050cce8
        ;   XREF to: 0050ccc0 (CONDITIONAL_JUMP)  ; LAB_0050ccc0
    PUSH 0x46                           ; 0050ccea
    PUSH 0x68                           ; 0050ccec
    PUSH 0x5e8240                       ; 0050ccee | = "fblurl"
    PUSH 0x1d1ee50                      ; 0050ccf3
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 0050ccf8
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0050ccfd
    PUSH 0x46                           ; 0050cd00
    PUSH EBX                            ; 0050cd02
    PUSH 0x5e8247                       ; 0050cd03 | = "fblurm"
    PUSH 0x1d1ee64                      ; 0050cd08
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 0050cd0d
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0050cd12
    PUSH 0x46                           ; 0050cd15
    PUSH 0x68                           ; 0050cd17
    PUSH 0x5e824e                       ; 0050cd19 | = "fblurr"
    PUSH 0x1d1ee78                      ; 0050cd1e
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 0050cd23
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0050cd28
    XOR EBP,EBP                         ; 0050cd2b
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0050cd2d
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL engine_texture.cpp_FUN_00597c30 ; 0050cd32
        ;   XREF to: 00597c30 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597c30()
    PUSH 0x1d1e380                      ; 0050cd37
    MOV dword ptr [ESP + 0x10],EBP      ; 0050cd3c
    CALL core_moon.cpp_FUN_00521c50     ; 0050cd40
        ;   XREF to: 00521c50 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00521c50()
    ADD ESP,0x4                         ; 0050cd45
    MOV EDX,dword ptr [0x0061d95c]      ; 0050cd48 | g_CGamePtr
    MOV EAX,0x1                         ; 0050cd4e
    PUSH EDX                            ; 0050cd53 | g_CGameInstance
    MOV dword ptr [ESP + 0x18],EAX      ; 0050cd54
    CALL core_game.cpp_CGame_saveClockTime_FUN_004cbf10 ; 0050cd58
        ;   XREF to: 004cbf10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004cbf10(CGame * this_ptr)
    ADD ESP,0x4                         ; 0050cd5d
    MOV ECX,dword ptr [0x0061d95c]      ; 0050cd60 | g_CGamePtr
        ;   Label: LAB_0050cd60
    PUSH ECX                            ; 0050cd66 | g_CGameInstance
    CALL core_game.cpp_FUN_004cbf20     ; 0050cd67
        ;   XREF to: 004cbf20 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004cbf20()
    ADD ESP,0x4                         ; 0050cd6c
    PUSH 0x10000                        ; 0050cd6f
    MOV EAX,[0x0061d95c]                ; 0050cd74 | g_CGamePtr
    PUSH 0xc350                         ; 0050cd79
    MOV EAX,dword ptr [EAX + 0x294]     ; 0050cd7e | g_CGameInstance.field660_0x294
    PUSH 0xc350                         ; 0050cd84
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050cd89
    MOV EAX,[0x00622c18]                ; 0050cd8d | g_CDemonSetPtr
    PUSH EAX                            ; 0050cd92 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 0050cd93 | g_CDemonSetInstance.field1420932_0x15ae84
    CALL core_set.cpp_FUN_00555770      ; 0050cd9d
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00555770(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 0050cda2
    MOV EAX,[0x00622c18]                ; 0050cda5 | g_CDemonSetPtr
    PUSH dword ptr [ESP + 0x10]         ; 0050cdaa
    PUSH 0x1d1e380                      ; 0050cdae
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 0050cdb3 | g_CDemonSetInstance.field1420948_0x15ae94
    CALL core_moon.cpp_FUN_00521dd0     ; 0050cdbd
        ;   XREF to: 00521dd0 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00521dd0()
    ADD ESP,0x8                         ; 0050cdc2
    PUSH 0x1d1e380                      ; 0050cdc5
    CALL core_moon.cpp_FUN_00521e40     ; 0050cdca
        ;   XREF to: 00521e40 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00521e40()
    ADD ESP,0x4                         ; 0050cdcf
    MOV EAX,[0x00622c18]                ; 0050cdd2 | g_CDemonSetPtr
    PUSH 0x5e8255                       ; 0050cdd7 | = "S T A R T"
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 0050cddc | g_CDemonSetInstance.field1420932_0x15ae84
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050cde6
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050cdeb
    MOV EDI,0x1d21048                   ; 0050cdee
    MOV ESI,EAX                         ; 0050cdf3
    PUSH EDI                            ; 0050cdf5
    MOV AL,byte ptr [ESI]               ; 0050cdf6
        ;   Label: LAB_0050cdf6
    MOV byte ptr [EDI],AL               ; 0050cdf8 | DAT_01d21048 | DAT_01d2104a
    CMP AL,0x0                          ; 0050cdfa
    JZ 0x0050ce0e                       ; 0050cdfc
        ;   XREF to: 0050ce0e (CONDITIONAL_JUMP)  ; LAB_0050ce0e
    MOV AL,byte ptr [ESI + 0x1]         ; 0050cdfe
    ADD ESI,0x2                         ; 0050ce01
    MOV byte ptr [EDI + 0x1],AL         ; 0050ce04 | DAT_01d21049 | DAT_01d2104b
    ADD EDI,0x2                         ; 0050ce07
    CMP AL,0x0                          ; 0050ce0a
    JNZ 0x0050cdf6                      ; 0050ce0c
        ;   XREF to: 0050cdf6 (CONDITIONAL_JUMP)  ; LAB_0050cdf6
    POP EDI                             ; 0050ce0e
        ;   Label: LAB_0050ce0e
    PUSH 0x5e825f                       ; 0050ce0f | = "O P T I O N S"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ce14
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ce19
    MOV EDI,0x1d21148                   ; 0050ce1c
    MOV ESI,EAX                         ; 0050ce21
    PUSH EDI                            ; 0050ce23
    MOV AL,byte ptr [ESI]               ; 0050ce24
        ;   Label: LAB_0050ce24
    MOV byte ptr [EDI],AL               ; 0050ce26 | DAT_01d21148 | DAT_01d2114a
    CMP AL,0x0                          ; 0050ce28
    JZ 0x0050ce3c                       ; 0050ce2a
        ;   XREF to: 0050ce3c (CONDITIONAL_JUMP)  ; LAB_0050ce3c
    MOV AL,byte ptr [ESI + 0x1]         ; 0050ce2c
    ADD ESI,0x2                         ; 0050ce2f
    MOV byte ptr [EDI + 0x1],AL         ; 0050ce32 | DAT_01d21149 | DAT_01d2114b
    ADD EDI,0x2                         ; 0050ce35
    CMP AL,0x0                          ; 0050ce38
    JNZ 0x0050ce24                      ; 0050ce3a
        ;   XREF to: 0050ce24 (CONDITIONAL_JUMP)  ; LAB_0050ce24
    POP EDI                             ; 0050ce3c
        ;   Label: LAB_0050ce3c
    PUSH 0x5e826d                       ; 0050ce3d | = "L O A D"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ce42
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ce47
    MOV EDI,0x1d21248                   ; 0050ce4a
    MOV ESI,EAX                         ; 0050ce4f
    PUSH EDI                            ; 0050ce51
    MOV AL,byte ptr [ESI]               ; 0050ce52
        ;   Label: LAB_0050ce52
    MOV byte ptr [EDI],AL               ; 0050ce54 | DAT_01d21248 | DAT_01d2124a
    CMP AL,0x0                          ; 0050ce56
    JZ 0x0050ce6a                       ; 0050ce58
        ;   XREF to: 0050ce6a (CONDITIONAL_JUMP)  ; LAB_0050ce6a
    MOV AL,byte ptr [ESI + 0x1]         ; 0050ce5a
    ADD ESI,0x2                         ; 0050ce5d
    MOV byte ptr [EDI + 0x1],AL         ; 0050ce60 | DAT_01d21249 | DAT_01d2124b
    ADD EDI,0x2                         ; 0050ce63
    CMP AL,0x0                          ; 0050ce66
    JNZ 0x0050ce52                      ; 0050ce68
        ;   XREF to: 0050ce52 (CONDITIONAL_JUMP)  ; LAB_0050ce52
    POP EDI                             ; 0050ce6a
        ;   Label: LAB_0050ce6a
    PUSH 0x5e8275                       ; 0050ce6b | = "Q U I T"
    MOV EDI,0x1d21348                   ; 0050ce70
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ce75
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ce7a
    MOV ESI,EAX                         ; 0050ce7d
    MOV EDX,0x1d21048                   ; 0050ce7f
    PUSH EDI                            ; 0050ce84
    MOV AL,byte ptr [ESI]               ; 0050ce85
        ;   Label: LAB_0050ce85
    MOV byte ptr [EDI],AL               ; 0050ce87 | DAT_01d21348 | DAT_01d2134a
    CMP AL,0x0                          ; 0050ce89
    JZ 0x0050ce9d                       ; 0050ce8b
        ;   XREF to: 0050ce9d (CONDITIONAL_JUMP)  ; LAB_0050ce9d
    MOV AL,byte ptr [ESI + 0x1]         ; 0050ce8d
    ADD ESI,0x2                         ; 0050ce90
    MOV byte ptr [EDI + 0x1],AL         ; 0050ce93 | DAT_01d21349 | DAT_01d2134b
    ADD EDI,0x2                         ; 0050ce96
    CMP AL,0x0                          ; 0050ce99
    JNZ 0x0050ce85                      ; 0050ce9b
        ;   XREF to: 0050ce85 (CONDITIONAL_JUMP)  ; LAB_0050ce85
    POP EDI                             ; 0050ce9d
        ;   Label: LAB_0050ce9d
    XOR EAX,EAX                         ; 0050ce9e
    MOV dword ptr [EAX + 0x1d21448],EDX ; 0050cea0 | DAT_01d21048 | DAT_01d21148
        ;   Label: LAB_0050cea0
    ADD EAX,0x4                         ; 0050cea6
    ADD EDX,0x100                       ; 0050cea9
    CMP EAX,0x10                        ; 0050ceaf
    JNZ 0x0050cea0                      ; 0050ceb2
        ;   XREF to: 0050cea0 (CONDITIONAL_JUMP)  ; LAB_0050cea0
    PUSH 0x0                            ; 0050ceb4
    PUSH 0x32                           ; 0050ceb6
    LEA EAX,[ESP + 0x14]                ; 0050ceb8
    PUSH EAX                            ; 0050cebc
    PUSH 0x4                            ; 0050cebd
    PUSH 0x1d21448                      ; 0050cebf
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_00509e20 ; 0050cec4
        ;   XREF to: 00509e20 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_renderMenuAndGetChoice_FUN_00509e20(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
    ADD ESP,0x14                        ; 0050cec9
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050cecc
    MOV ESI,EAX                         ; 0050ced0
    TEST EBX,EBX                        ; 0050ced2
    JZ 0x0050cedb                       ; 0050ced4
        ;   XREF to: 0050cedb (CONDITIONAL_JUMP)  ; LAB_0050cedb
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 0050ced6
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    CALL wincore_wddvmem.cpp_FUN_005acff0 ; 0050cedb
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005acff0()
        ;   Label: LAB_0050cedb
    CMP ESI,0x3                         ; 0050cee0
    JA 0x0050cf71                       ; 0050cee3
        ;   XREF to: 0050cf71 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ESI*0x4 + 0x50cc78]  ; 0050cee9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x1d1e380                      ; 0050cef0
        ;   Label: caseD_0
    CALL core_moon.cpp_FUN_00521d50     ; 0050cef5
        ;   XREF to: 00521d50 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00521d50()
    ADD ESP,0x4                         ; 0050cefa
    MOV EDX,dword ptr [0x006236b8]      ; 0050cefd | DAT_006236b8
    PUSH EDX                            ; 0050cf03
    CALL core_sound.cpp_FUN_0057d800    ; 0050cf04
        ;   XREF to: 0057d800 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057d800(CSound * this_ptr)
    ADD ESP,0x4                         ; 0050cf09
    MOV EAX,[0x0061f2a4]                ; 0050cf0c | DAT_0061f2a4
    PUSH 0x2a                           ; 0050cf11
    MOV EDX,dword ptr [EAX]             ; 0050cf13 | DAT_01d1bca0
    PUSH EAX                            ; 0050cf15 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0050cf16
    ADD ESP,0x8                         ; 0050cf18
    TEST EAX,EAX                        ; 0050cf1b
    JZ 0x0050d0e8                       ; 0050cf1d
        ;   XREF to: 0050d0e8 (CONDITIONAL_JUMP)  ; LAB_0050d0e8
    PUSH 0x1d                           ; 0050cf23
    MOV EAX,[0x0061f2a4]                ; 0050cf25 | DAT_0061f2a4
    PUSH EAX                            ; 0050cf2a | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050cf2b | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0050cf2d
    ADD ESP,0x8                         ; 0050cf2f
    TEST EAX,EAX                        ; 0050cf32
    JZ 0x0050d0e8                       ; 0050cf34
        ;   XREF to: 0050d0e8 (CONDITIONAL_JUMP)  ; LAB_0050d0e8
    PUSH 0x2                            ; 0050cf3a
    MOV ESI,dword ptr [0x0061d95c]      ; 0050cf3c | g_CGamePtr
    PUSH ESI                            ; 0050cf42 | g_CGameInstance
    CALL core_game.cpp_FUN_004d7250     ; 0050cf43
        ;   XREF to: 004d7250 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d7250()
        ;   Label: LAB_0050cf43
    ADD ESP,0x8                         ; 0050cf48
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0050cf4b
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL engine_texture.cpp_FUN_00597c30 ; 0050cf50
        ;   XREF to: 00597c30 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597c30()
    PUSH 0x1d1e380                      ; 0050cf55
    CALL core_moon.cpp_FUN_00521c50     ; 0050cf5a
        ;   XREF to: 00521c50 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00521c50()
    ADD ESP,0x4                         ; 0050cf5f
    MOV EDI,dword ptr [0x006236b8]      ; 0050cf62 | DAT_006236b8
    PUSH EDI                            ; 0050cf68
    CALL core_sound.cpp_FUN_0057d6a0    ; 0050cf69
        ;   XREF to: 0057d6a0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057d6a0(CSound * this_ptr)
        ;   Label: LAB_0050cf69
    ADD ESP,0x4                         ; 0050cf6e
        ;   Label: LAB_0050cf6e
    PUSH 0x1                            ; 0050cf71
        ;   Label: default
    MOV EAX,[0x0061f2a4]                ; 0050cf73 | DAT_0061f2a4
    PUSH EAX                            ; 0050cf78 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050cf79 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050cf7b
    ADD ESP,0x8                         ; 0050cf7e
    TEST EAX,EAX                        ; 0050cf81
    JZ 0x0050cf8a                       ; 0050cf83
        ;   XREF to: 0050cf8a (CONDITIONAL_JUMP)  ; LAB_0050cf8a
    MOV EBP,0x63                        ; 0050cf85
    PUSH 0x1d                           ; 0050cf8a
        ;   Label: LAB_0050cf8a
    MOV EAX,[0x0061f2a4]                ; 0050cf8c | DAT_0061f2a4
    PUSH EAX                            ; 0050cf91 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050cf92 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0050cf94
    ADD ESP,0x8                         ; 0050cf96
    TEST EAX,EAX                        ; 0050cf99
    JZ 0x0050cfd7                       ; 0050cf9b
        ;   XREF to: 0050cfd7 (CONDITIONAL_JUMP)  ; LAB_0050cfd7
    PUSH 0x32                           ; 0050cf9d
    MOV EAX,[0x0061f2a4]                ; 0050cf9f | DAT_0061f2a4
    PUSH EAX                            ; 0050cfa4 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050cfa5 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050cfa7
    ADD ESP,0x8                         ; 0050cfaa
    TEST EAX,EAX                        ; 0050cfad
    JZ 0x0050cfd7                       ; 0050cfaf
        ;   XREF to: 0050cfd7 (CONDITIONAL_JUMP)  ; LAB_0050cfd7
    CALL sound_sndmain.cpp_isSoundMuted_FUN_005735f0 ; 0050cfb1
        ;   XREF to: 005735f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_005735f0()
    TEST EAX,EAX                        ; 0050cfb6
    SETZ AL                             ; 0050cfb8
    AND EAX,0xff                        ; 0050cfbb
    PUSH EAX                            ; 0050cfc0
    CALL sound_sndmain.cpp_setSoundMuted_FUN_00573600 ; 0050cfc1
        ;   XREF to: 00573600 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundMuted_FUN_00573600(int muted)
    ADD ESP,0x4                         ; 0050cfc6
    MOV EAX,[0x006236b8]                ; 0050cfc9 | DAT_006236b8
    PUSH EAX                            ; 0050cfce
    CALL core_sound.cpp_FUN_0057d6a0    ; 0050cfcf
        ;   XREF to: 0057d6a0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057d6a0(CSound * this_ptr)
    ADD ESP,0x4                         ; 0050cfd4
    PUSH 0x1d                           ; 0050cfd7
        ;   Label: LAB_0050cfd7
    MOV EAX,[0x0061f2a4]                ; 0050cfd9 | DAT_0061f2a4
    PUSH EAX                            ; 0050cfde | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050cfdf | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0050cfe1
    ADD ESP,0x8                         ; 0050cfe3
    TEST EAX,EAX                        ; 0050cfe6
    JZ 0x0050d049                       ; 0050cfe8
        ;   XREF to: 0050d049 (CONDITIONAL_JUMP)  ; LAB_0050d049
    PUSH 0x20                           ; 0050cfea
    MOV EAX,[0x0061f2a4]                ; 0050cfec | DAT_0061f2a4
    PUSH EAX                            ; 0050cff1 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050cff2 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050cff4
    ADD ESP,0x8                         ; 0050cff7
    TEST EAX,EAX                        ; 0050cffa
    JZ 0x0050d17d                       ; 0050cffc
        ;   XREF to: 0050d17d (CONDITIONAL_JUMP)  ; LAB_0050d17d
    PUSH 0x1d1e380                      ; 0050d002
        ;   Label: LAB_0050d002
    CALL core_moon.cpp_FUN_00521d50     ; 0050d007
        ;   XREF to: 00521d50 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00521d50()
    ADD ESP,0x4                         ; 0050d00c
    MOV EDX,dword ptr [0x006236b8]      ; 0050d00f | DAT_006236b8
    PUSH EDX                            ; 0050d015
    CALL core_sound.cpp_FUN_0057d800    ; 0050d016
        ;   XREF to: 0057d800 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057d800(CSound * this_ptr)
    ADD ESP,0x4                         ; 0050d01b
    CALL core_main.c_FUN_005031c0       ; 0050d01e
        ;   XREF to: 005031c0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005031c0()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0050d023
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL engine_texture.cpp_FUN_00597c30 ; 0050d028
        ;   XREF to: 00597c30 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597c30()
    PUSH 0x1d1e380                      ; 0050d02d
    CALL core_moon.cpp_FUN_00521c50     ; 0050d032
        ;   XREF to: 00521c50 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00521c50()
    ADD ESP,0x4                         ; 0050d037
    MOV ECX,dword ptr [0x006236b8]      ; 0050d03a | DAT_006236b8
    PUSH ECX                            ; 0050d040
    CALL core_sound.cpp_FUN_0057d6a0    ; 0050d041
        ;   XREF to: 0057d6a0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057d6a0(CSound * this_ptr)
    ADD ESP,0x4                         ; 0050d046
    PUSH 0x1d                           ; 0050d049
        ;   Label: LAB_0050d049
    MOV EAX,[0x0061f2a4]                ; 0050d04b | DAT_0061f2a4
    PUSH EAX                            ; 0050d050 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050d051 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0050d053
    ADD ESP,0x8                         ; 0050d055
    TEST EAX,EAX                        ; 0050d058
    JZ 0x0050d06c                       ; 0050d05a
        ;   XREF to: 0050d06c (CONDITIONAL_JUMP)  ; LAB_0050d06c
    PUSH 0x21                           ; 0050d05c
    MOV EAX,[0x0061f2a4]                ; 0050d05e | DAT_0061f2a4
    PUSH EAX                            ; 0050d063 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050d064 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050d066
    ADD ESP,0x8                         ; 0050d069
    CMP dword ptr [ESP + 0x14],0x0      ; 0050d06c
        ;   Label: LAB_0050d06c
    JZ 0x0050d08d                       ; 0050d071
        ;   XREF to: 0050d08d (CONDITIONAL_JUMP)  ; LAB_0050d08d
    MOV EDI,dword ptr [0x006236b8]      ; 0050d073 | DAT_006236b8
    XOR ESI,ESI                         ; 0050d079
    PUSH EDI                            ; 0050d07b
    MOV dword ptr [ESP + 0x18],ESI      ; 0050d07c
    CALL core_sound.cpp_FUN_0057d6a0    ; 0050d080
        ;   XREF to: 0057d6a0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057d6a0(CSound * this_ptr)
    ADD ESP,0x4                         ; 0050d085
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0050d088
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    TEST EBP,EBP                        ; 0050d08d
        ;   Label: LAB_0050d08d
    JZ 0x0050cd60                       ; 0050d08f
        ;   XREF to: 0050cd60 (CONDITIONAL_JUMP)  ; LAB_0050cd60
    MOV EAX,[0x006236b8]                ; 0050d095 | DAT_006236b8
    PUSH EAX                            ; 0050d09a
    CALL core_sound.cpp_FUN_0057d800    ; 0050d09b
        ;   XREF to: 0057d800 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057d800(CSound * this_ptr)
    ADD ESP,0x4                         ; 0050d0a0
    PUSH 0x1d1e380                      ; 0050d0a3
    CALL core_moon.cpp_FUN_00521d50     ; 0050d0a8
        ;   XREF to: 00521d50 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00521d50()
    ADD ESP,0x4                         ; 0050d0ad
    MOV EAX,EBP                         ; 0050d0b0
    POP EBX                             ; 0050d0b2
    POP ESI                             ; 0050d0b3
    POP EDI                             ; 0050d0b4
    ADD ESP,0xc                         ; 0050d0b5
    POP EBP                             ; 0050d0b8
    RET                                 ; 0050d0b9
    MOV EAX,0x1                         ; 0050d0ba
        ;   Label: LAB_0050d0ba
    ADD ESP,0xc                         ; 0050d0bf
    POP EBP                             ; 0050d0c2
    RET                                 ; 0050d0c3
    MOV EAX,[0x0061d95c]                ; 0050d0c4 | g_CGamePtr
        ;   Label: LAB_0050d0c4
    CMP dword ptr [EAX + 0x4],0x1e0     ; 0050d0c9 | g_CGameInstance.field4_0x4
    JLE 0x0050ccb1                      ; 0050d0d0
        ;   XREF to: 0050ccb1 (CONDITIONAL_JUMP)  ; LAB_0050ccb1
    MOV dword ptr [EAX + 0x4],0x1e0     ; 0050d0d6 | g_CGameInstance.field4_0x4
    MOV dword ptr [EAX],0x280           ; 0050d0dd | g_CGameInstance
    JMP 0x0050ccb1                      ; 0050d0e3
        ;   XREF to: 0050ccb1 (UNCONDITIONAL_JUMP)  ; LAB_0050ccb1
    PUSH 0x1d                           ; 0050d0e8
        ;   Label: LAB_0050d0e8
    MOV EAX,[0x0061f2a4]                ; 0050d0ea | DAT_0061f2a4
    PUSH EAX                            ; 0050d0ef | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050d0f0 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0050d0f2
    ADD ESP,0x8                         ; 0050d0f4
    TEST EAX,EAX                        ; 0050d0f7
    JZ 0x0050d109                       ; 0050d0f9
        ;   XREF to: 0050d109 (CONDITIONAL_JUMP)  ; LAB_0050d109
    PUSH 0x1                            ; 0050d0fb
    MOV EBX,dword ptr [0x0061d95c]      ; 0050d0fd | g_CGamePtr
    PUSH EBX                            ; 0050d103 | g_CGameInstance
    JMP 0x0050cf43                      ; 0050d104
        ;   XREF to: 0050cf43 (UNCONDITIONAL_JUMP)  ; LAB_0050cf43
    PUSH EAX                            ; 0050d109
        ;   Label: LAB_0050d109
    MOV ECX,dword ptr [0x0061d95c]      ; 0050d10a | g_CGamePtr
    PUSH ECX                            ; 0050d110 | g_CGameInstance
    JMP 0x0050cf43                      ; 0050d111
        ;   XREF to: 0050cf43 (UNCONDITIONAL_JUMP)  ; LAB_0050cf43
    PUSH 0x1d1e380                      ; 0050d116
        ;   Label: caseD_2
    CALL core_moon.cpp_FUN_00521d50     ; 0050d11b
        ;   XREF to: 00521d50 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00521d50()
    ADD ESP,0x4                         ; 0050d120
    MOV ESI,dword ptr [0x006236b8]      ; 0050d123 | DAT_006236b8
    PUSH ESI                            ; 0050d129
    CALL core_sound.cpp_FUN_0057d800    ; 0050d12a
        ;   XREF to: 0057d800 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057d800(CSound * this_ptr)
    ADD ESP,0x4                         ; 0050d12f
    PUSH 0x1                            ; 0050d132
    PUSH 0x0                            ; 0050d134
    MOV EDI,dword ptr [0x0061d95c]      ; 0050d136 | g_CGamePtr
    PUSH EDI                            ; 0050d13c | g_CGameInstance
    CALL core_game.cpp_FUN_004d6990     ; 0050d13d
        ;   XREF to: 004d6990 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d6990(CGame * this_ptr, char * save_filename, int load_mode)
    ADD ESP,0xc                         ; 0050d142
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0050d145
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL engine_texture.cpp_FUN_00597c30 ; 0050d14a
        ;   XREF to: 00597c30 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597c30()
    PUSH 0x1d1e380                      ; 0050d14f
    CALL core_moon.cpp_FUN_00521c50     ; 0050d154
        ;   XREF to: 00521c50 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00521c50()
    ADD ESP,0x4                         ; 0050d159
    MOV EAX,[0x006236b8]                ; 0050d15c | DAT_006236b8
    PUSH EAX                            ; 0050d161
    JMP 0x0050cf69                      ; 0050d162
        ;   XREF to: 0050cf69 (UNCONDITIONAL_JUMP)  ; LAB_0050cf69
    PUSH 0x0                            ; 0050d167
        ;   Label: caseD_1
    CALL core_menu.cpp_FUN_0050c990     ; 0050d169
        ;   XREF to: 0050c990 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_FUN_0050c990()
    JMP 0x0050cf6e                      ; 0050d16e
        ;   XREF to: 0050cf6e (UNCONDITIONAL_JUMP)  ; LAB_0050cf6e
    MOV EBP,0x63                        ; 0050d173
        ;   Label: caseD_3
    JMP 0x0050cf71                      ; 0050d178
        ;   XREF to: 0050cf71 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x26                           ; 0050d17d
        ;   Label: LAB_0050d17d
    MOV EAX,[0x0061f2a4]                ; 0050d17f | DAT_0061f2a4
    PUSH EAX                            ; 0050d184 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050d185 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050d187
    ADD ESP,0x8                         ; 0050d18a
    TEST EAX,EAX                        ; 0050d18d
    JNZ 0x0050d002                      ; 0050d18f
        ;   XREF to: 0050d002 (CONDITIONAL_JUMP)  ; LAB_0050d002
    JMP 0x0050d049                      ; 0050d195
        ;   XREF to: 0050d049 (UNCONDITIONAL_JUMP)  ; LAB_0050d049

