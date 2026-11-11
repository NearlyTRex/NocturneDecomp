; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004abe00(int param_1)
;
; Local Variables:
; undefined        Stack[-0x520]:1  local_520
; undefined        Stack[-0x420]:1  local_420
; undefined        Stack[-0x320]:1  local_320
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b72b0
;
; Referenced Globals:
;   undefined4 DAT_005c0d12
;   TerminatedCString s_tab_s_005c0d17
;   TerminatedCString s_pentip_005c0d1e
;   TerminatedCString s_pentipink_005c0d25
;   TerminatedCString s_xmarker_005c0d2f
;   TerminatedCString s_questionmark_005c0d37
;   TerminatedCString s_twanabox_005c0d44
;   TerminatedCString s_ltarrow_005c0d4d
;   TerminatedCString s_rtarrow_005c0d55
;   TerminatedCString s_fieldnotes_exit_005c0d5d
;   TerminatedCString s_underline_005c0d6d
;   undefined4 DAT_005c17b4
;   undefined4 DAT_005fe370
;   undefined4 DAT_005fe374
;   undefined4 DAT_005fe378
;   ... and 41 more
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90
;   core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a8d50
;   core_fldnotes.cpp_STextView_drawPage_FUN_004a98b0
;   core_fldnotes.cpp_STextView_reset_FUN_004a8e00
;   core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;   engine_alphabit.cpp_FUN_0040d400
;   engine_alphabit.cpp_FUN_0040d8a0
;   engine_alphabit.cpp_FUN_0040dbb0
;   engine_dosio.cpp_splitPath_FUN_00465e50
;   engine_font.cpp_FUN_004b0a20
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004abe00
        ;   Label: core_fldnotes.cpp_FUN_004abe00
    PUSH ESI                            ; 004abe01
    PUSH EDI                            ; 004abe02
    PUSH EBP                            ; 004abe03
    SUB ESP,0x510                       ; 004abe04
    MOV ESI,0x1d19bc0                   ; 004abe0a
    MOV EAX,dword ptr [ESP + 0x524]     ; 004abe0f
    XOR EDX,EDX                         ; 004abe16
    ADD ESI,0x78                        ; 004abe18
    MOV ECX,dword ptr [EAX + 0x40]      ; 004abe1b
    MOV dword ptr [ESP + 0x508],EDX     ; 004abe1e
    TEST ECX,ECX                        ; 004abe25
    JZ 0x004ac1f1                       ; 004abe27
        ;   XREF to: 004ac1f1 (CONDITIONAL_JUMP)  ; LAB_004ac1f1
    CMP dword ptr [0x005fe370],0x0      ; 004abe2d | DAT_005fe370
    JNZ 0x004ac2b2                      ; 004abe34
        ;   XREF to: 004ac2b2 (CONDITIONAL_JUMP)  ; LAB_004ac2b2
    XOR DH,DH                           ; 004abe3a
        ;   Label: LAB_004abe3a
    MOV ESI,dword ptr [0x005fe374]      ; 004abe3c | DAT_005fe374
    MOV byte ptr [0x01d19cf0],DH        ; 004abe42 | DAT_01d19cf0
    TEST ESI,ESI                        ; 004abe48
    JZ 0x004abeb7                       ; 004abe4a
        ;   XREF to: 004abeb7 (CONDITIONAL_JUMP)  ; LAB_004abeb7
    PUSH 0x1b8                          ; 004abe4c
    PUSH 0x1eb                          ; 004abe51
    PUSH 0x40                           ; 004abe56
    PUSH 0x60                           ; 004abe58
    PUSH 0x1d19d30                      ; 004abe5a
    CALL core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0 ; 004abe5f
        ;   XREF to: 004a8eb0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0(STextView * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004abe64
    XOR EDI,EDI                         ; 004abe67
    PUSH 0x1d19d30                      ; 004abe69
    XOR BL,BL                           ; 004abe6e
    XOR ESI,ESI                         ; 004abe70
    CALL core_fldnotes.cpp_STextView_reset_FUN_004a8e00 ; 004abe72
        ;   XREF to: 004a8e00 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004a8e00(STextView * this_ptr)
    MOV EBP,dword ptr [0x01d0d210]      ; 004abe77 | DAT_01d0d210
    ADD ESP,0x4                         ; 004abe7d
    MOV dword ptr [0x005fe374],EDI      ; 004abe80 | DAT_005fe374
    MOV byte ptr [0x01d0d010],BL        ; 004abe86 | DAT_01d0d010
    TEST EBP,EBP                        ; 004abe8c
    JLE 0x004abeb7                      ; 004abe8e
        ;   XREF to: 004abeb7 (CONDITIONAL_JUMP)  ; LAB_004abeb7
    MOV EBX,0x1d0d214                   ; 004abe90
    PUSH 0x1d19d30                      ; 004abe95
        ;   Label: LAB_004abe95
    PUSH EBX                            ; 004abe9a
    CALL core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90 ; 004abe9b
        ;   XREF to: 004a9d90 (UNCONDITIONAL_CALL)  ; bool core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90(SNotesSection * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004abea0
    TEST EAX,EAX                        ; 004abea3
    JZ 0x004abeb7                       ; 004abea5
        ;   XREF to: 004abeb7 (CONDITIONAL_JUMP)  ; LAB_004abeb7
    MOV EAX,[0x01d0d210]                ; 004abea7 | DAT_01d0d210
    INC ESI                             ; 004abeac
    ADD EBX,0x2e4                       ; 004abead
    CMP ESI,EAX                         ; 004abeb3
    JL 0x004abe95                       ; 004abeb5
        ;   XREF to: 004abe95 (CONDITIONAL_JUMP)  ; LAB_004abe95
    PUSH 0xffff                         ; 004abeb7
        ;   Label: LAB_004abeb7
    PUSH 0x0                            ; 004abebc
    PUSH 0x0                            ; 004abebe
    PUSH 0x1d19bac                      ; 004abec0
    XOR ESI,ESI                         ; 004abec5
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004abec7
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EDI,dword ptr [0x01d19ba8]      ; 004abecc | DAT_01d19ba8
    MOV EDX,dword ptr [0x01d0d210]      ; 004abed2 | DAT_01d0d210
    ADD ESP,0x10                        ; 004abed8
    TEST EDX,EDX                        ; 004abedb
    JLE 0x004ac5a9                      ; 004abedd
        ;   XREF to: 004ac5a9 (CONDITIONAL_JUMP)  ; LAB_004ac5a9
    MOV EAX,0x1d0d214                   ; 004abee3
    MOV ECX,dword ptr [0x01d0d210]      ; 004abee8 | DAT_01d0d210
    MOV EBX,dword ptr [EAX + 0x140]     ; 004abeee | SNotesSection_ARRAY_01d0d214[0].first_page | SNotesSection_ARRAY_01d0d214[1].first_page
        ;   Label: LAB_004abeee
    CMP EDI,EBX                         ; 004abef4
    JL 0x004ac59b                       ; 004abef6
        ;   XREF to: 004ac59b (CONDITIONAL_JUMP)  ; LAB_004ac59b
    ADD EBX,dword ptr [EAX + 0x144]     ; 004abefc | SNotesSection_ARRAY_01d0d214[0].page_count | SNotesSection_ARRAY_01d0d214[1].page_count
    CMP EBX,EDI                         ; 004abf02
    JLE 0x004ac59b                      ; 004abf04
        ;   XREF to: 004ac59b (CONDITIONAL_JUMP)  ; LAB_004ac59b
    MOV EBX,ESI                         ; 004abf0a
    MOV EAX,[0x01d0d210]                ; 004abf0c | DAT_01d0d210
        ;   Label: LAB_004abf0c
    MOV dword ptr [ESP + 0x50c],EBX     ; 004abf11
    XOR ESI,ESI                         ; 004abf18
    TEST EAX,EAX                        ; 004abf1a
    JLE 0x004abf79                      ; 004abf1c
        ;   XREF to: 004abf79 (CONDITIONAL_JUMP)  ; LAB_004abf79
    MOV EBX,0x1d0d214                   ; 004abf1e
    MOV EDI,0x1d19bc0                   ; 004abf23
    LEA EAX,[ESI*0x4 + 0x0]             ; 004abf28
        ;   Label: LAB_004abf28
    ADD EAX,ESI                         ; 004abf2f
    MOV EDX,dword ptr [ESP + 0x50c]     ; 004abf31
    SHL EAX,0x2                         ; 004abf38
    CMP ESI,EDX                         ; 004abf3b
    JNZ 0x004ac5b3                      ; 004abf3d
        ;   XREF to: 004ac5b3 (CONDITIONAL_JUMP)  ; LAB_004ac5b3
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004abf43 | SNotesSection_ARRAY_01d0d214[0].tab_y | SNotesSection_ARRAY_01d0d214[1].tab_y
    PUSH 0xffff                         ; 004abf49
    SUB EAX,0x2                         ; 004abf4e
    PUSH EAX                            ; 004abf51
    MOV EAX,dword ptr [EBX + 0x148]     ; 004abf52 | SNotesSection_ARRAY_01d0d214[0].tab_x | SNotesSection_ARRAY_01d0d214[1].tab_x
    SUB EAX,0x2                         ; 004abf58
    PUSH EAX                            ; 004abf5b
    PUSH EDI                            ; 004abf5c
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004abf5d
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004abf62
    MOV EDX,dword ptr [0x01d0d210]      ; 004abf65 | DAT_01d0d210
        ;   Label: LAB_004abf65
    ADD EDI,0x14                        ; 004abf6b
    INC ESI                             ; 004abf6e
    ADD EBX,0x2e4                       ; 004abf6f
    CMP ESI,EDX                         ; 004abf75
    JL 0x004abf28                       ; 004abf77
        ;   XREF to: 004abf28 (CONDITIONAL_JUMP)  ; LAB_004abf28
    MOV EBX,dword ptr [0x01d19ba8]      ; 004abf79 | DAT_01d19ba8
        ;   Label: LAB_004abf79
    PUSH EBX                            ; 004abf7f
    XOR ECX,ECX                         ; 004abf80
    PUSH 0x1d19d30                      ; 004abf82
    MOV dword ptr [0x01d1a058],ECX      ; 004abf87 | DAT_01d1a058
    CALL core_fldnotes.cpp_STextView_drawPage_FUN_004a98b0 ; 004abf8d
        ;   XREF to: 004a98b0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_drawPage_FUN_004a98b0(STextView * this_ptr, int param_2)
    MOV EAX,[0x005fe9dc]                ; 004abf92 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x24c]     ; 004abf97 | g_CGameInstance.letterbox_mode
    ADD ESP,0x8                         ; 004abf9d
    TEST ESI,ESI                        ; 004abfa0
    JNZ 0x004ac683                      ; 004abfa2
        ;   XREF to: 004ac683 (CONDITIONAL_JUMP)  ; LAB_004ac683
    MOV EDI,dword ptr [0x01c5fae0]      ; 004abfa8 | DAT_01c5fae0
    PUSH EDI                            ; 004abfae
    MOV EBP,dword ptr [0x01c5fadc]      ; 004abfaf | DAT_01c5fadc
    PUSH EBP                            ; 004abfb5
    CALL unkaddr_004a76f0.cpp_FUN_004a80d0 ; 004abfb6
        ;   XREF to: 004a80d0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a76f0.cpp_FUN_004a80d0()
    ADD ESP,0x8                         ; 004abfbb
    TEST EAX,EAX                        ; 004abfbe
    JL 0x004abff5                       ; 004abfc0
        ;   XREF to: 004abff5 (CONDITIONAL_JUMP)  ; LAB_004abff5
    MOV EBX,EAX                         ; 004abfc2
    SHL EAX,0x3                         ; 004abfc4
    ADD EAX,EBX                         ; 004abfc7
    SHL EAX,0x2                         ; 004abfc9
    ADD EAX,EBX                         ; 004abfcc
    SHL EAX,0x2                         ; 004abfce
    MOV EBX,EAX                         ; 004abfd1
    SHL EAX,0x2                         ; 004abfd3
    ADD EAX,EBX                         ; 004abfd6
    ADD EAX,0x1d0d214                   ; 004abfd8
    ADD EAX,0x40                        ; 004abfdd
    PUSH EAX                            ; 004abfe0
    CALL unkaddr_004a76f0.cpp_FUN_004a7a70 ; 004abfe1
        ;   XREF to: 004a7a70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a76f0.cpp_FUN_004a7a70()
    MOV EAX,0x1                         ; 004abfe6
    ADD ESP,0x4                         ; 004abfeb
    MOV dword ptr [ESP + 0x508],EAX     ; 004abfee
    MOV EDX,dword ptr [0x01c5fae0]      ; 004abff5 | DAT_01c5fae0
        ;   Label: LAB_004abff5
    PUSH EDX                            ; 004abffb
    MOV ECX,dword ptr [0x01c5fadc]      ; 004abffc | DAT_01c5fadc
    PUSH ECX                            ; 004ac002
    CALL unkaddr_004a76f0.cpp_FUN_004a8180 ; 004ac003
        ;   XREF to: 004a8180 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a76f0.cpp_FUN_004a8180()
    ADD ESP,0x8                         ; 004ac008
    TEST EAX,EAX                        ; 004ac00b
    JZ 0x004ac01a                       ; 004ac00d
        ;   XREF to: 004ac01a (CONDITIONAL_JUMP)  ; LAB_004ac01a
    MOV dword ptr [ESP + 0x508],0x1     ; 004ac00f
    MOV EBX,dword ptr [0x01d19ba8]      ; 004ac01a | DAT_01d19ba8
        ;   Label: LAB_004ac01a
    LEA EAX,[EBX*0x4 + 0x0]             ; 004ac020
    MOV ESI,dword ptr [0x01c5fae0]      ; 004ac027 | DAT_01c5fae0
    ADD EAX,EBX                         ; 004ac02d
    MOV EDI,dword ptr [0x01c5fadc]      ; 004ac02f | DAT_01c5fadc
    SHL EAX,0x4                         ; 004ac035
    PUSH ESI                            ; 004ac038
    ADD EAX,EBX                         ; 004ac039
    MOV EBX,dword ptr [0x01d19d6c]      ; 004ac03b | g_STextViewInstance.pages
    SHL EAX,0x2                         ; 004ac041
    PUSH EDI                            ; 004ac044
    ADD EAX,EBX                         ; 004ac045
    PUSH EAX                            ; 004ac047
    CALL core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a8d50 ; 004ac048
        ;   XREF to: 004a8d50 (UNCONDITIONAL_CALL)  ; int * core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a8d50(STextPage * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 004ac04d
    TEST EAX,EAX                        ; 004ac050
    JZ 0x004ac086                       ; 004ac052
        ;   XREF to: 004ac086 (CONDITIONAL_JUMP)  ; LAB_004ac086
    MOV EBX,dword ptr [0x01c5fae0]      ; 004ac054 | DAT_01c5fae0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ac05a
    MOV ESI,dword ptr [0x01c5fadc]      ; 004ac05d | DAT_01c5fadc
    SUB EBX,EDX                         ; 004ac063
    MOV EBP,dword ptr [EAX]             ; 004ac065
    PUSH EBX                            ; 004ac067
    SUB ESI,EBP                         ; 004ac068
    PUSH ESI                            ; 004ac06a
    PUSH 0x0                            ; 004ac06b
    MOV EDI,dword ptr [EAX + 0x14]      ; 004ac06d
    PUSH EAX                            ; 004ac070
    CALL dword ptr [EDI + 0x8]          ; 004ac071
    ADD ESP,0x10                        ; 004ac074
    TEST EAX,EAX                        ; 004ac077
    JZ 0x004ac086                       ; 004ac079
        ;   XREF to: 004ac086 (CONDITIONAL_JUMP)  ; LAB_004ac086
    MOV dword ptr [ESP + 0x508],0x1     ; 004ac07b
    CMP dword ptr [0x01d19ba8],0x0      ; 004ac086 | DAT_01d19ba8
        ;   Label: LAB_004ac086
    JLE 0x004ac0af                      ; 004ac08d
        ;   XREF to: 004ac0af (CONDITIONAL_JUMP)  ; LAB_004ac0af
    PUSH 0xffff                         ; 004ac08f
    MOV ESI,dword ptr [0x005fe37c]      ; 004ac094 | DAT_005fe37c
    PUSH ESI                            ; 004ac09a
    MOV EDI,dword ptr [0x005fe378]      ; 004ac09b | DAT_005fe378
    PUSH EDI                            ; 004ac0a1
    PUSH 0x1d19c9c                      ; 004ac0a2
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004ac0a7
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004ac0ac
    MOV EAX,[0x01d19d68]                ; 004ac0af | g_STextViewInstance.page_count
        ;   Label: LAB_004ac0af
    MOV EBP,dword ptr [0x01d19ba8]      ; 004ac0b4 | DAT_01d19ba8
    SUB EAX,0x2                         ; 004ac0ba
    CMP EAX,EBP                         ; 004ac0bd
    JLE 0x004ac0e0                      ; 004ac0bf
        ;   XREF to: 004ac0e0 (CONDITIONAL_JUMP)  ; LAB_004ac0e0
    PUSH 0xffff                         ; 004ac0c1
    MOV EAX,[0x005fe384]                ; 004ac0c6 | DAT_005fe384
    PUSH EAX                            ; 004ac0cb
    MOV EDX,dword ptr [0x005fe380]      ; 004ac0cc | DAT_005fe380
    PUSH EDX                            ; 004ac0d2
    PUSH 0x1d19cb0                      ; 004ac0d3
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004ac0d8
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004ac0dd
    CMP byte ptr [0x01d19cf0],0x0       ; 004ac0e0 | DAT_01d19cf0
        ;   Label: LAB_004ac0e0
    JZ 0x004ac10f                       ; 004ac0e7
        ;   XREF to: 004ac10f (CONDITIONAL_JUMP)  ; LAB_004ac10f
    PUSH -0x1                           ; 004ac0e9
    PUSH 0x0                            ; 004ac0eb
    MOV ECX,dword ptr [0x005fe38c]      ; 004ac0ed | DAT_005fe38c
    PUSH ECX                            ; 004ac0f3
    MOV EBX,dword ptr [0x005fe388]      ; 004ac0f4 | DAT_005fe388
    PUSH EBX                            ; 004ac0fa
    PUSH 0x1d19cf0                      ; 004ac0fb | DAT_01d19cf0
    MOV ESI,dword ptr [0x01549ac0]      ; 004ac100 | DAT_01549ac0
    PUSH ESI                            ; 004ac106
    CALL engine_font.cpp_FUN_004b0a20   ; 004ac107
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004ac10c
    PUSH 0xffff                         ; 004ac10f
        ;   Label: LAB_004ac10f
    MOV EDI,dword ptr [0x005fe394]      ; 004ac114 | DAT_005fe394
    PUSH EDI                            ; 004ac11a
    MOV EBP,dword ptr [0x005fe390]      ; 004ac11b | DAT_005fe390
    PUSH EBP                            ; 004ac121
    PUSH 0x1d19cc4                      ; 004ac122
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004ac127
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EBX,dword ptr [0x01c5fadc]      ; 004ac12c | DAT_01c5fadc
    MOV ESI,dword ptr [0x01c5fae0]      ; 004ac132 | DAT_01c5fae0
    MOV EAX,[0x005fe390]                ; 004ac138 | DAT_005fe390
    ADD ESP,0x10                        ; 004ac13d
    CMP EBX,EAX                         ; 004ac140
    JGE 0x004ac5f2                      ; 004ac142
        ;   XREF to: 004ac5f2 (CONDITIONAL_JUMP)  ; LAB_004ac5f2
    MOV EDI,dword ptr [0x005fe3a8]      ; 004ac148 | DAT_005fe3a8
        ;   Label: LAB_004ac148
    TEST EDI,EDI                        ; 004ac14e
    JL 0x004ac1a8                       ; 004ac150
        ;   XREF to: 004ac1a8 (CONDITIONAL_JUMP)  ; LAB_004ac1a8
    MOV EBP,dword ptr [0x01d1a058]      ; 004ac152 | DAT_01d1a058
    TEST EBP,EBP                        ; 004ac158
    JZ 0x004ac646                       ; 004ac15a
        ;   XREF to: 004ac646 (CONDITIONAL_JUMP)  ; LAB_004ac646
    MOV EAX,[0x01d19f84]                ; 004ac160 | DAT_01d19f84
    PUSH 0x0                            ; 004ac165
    DEC EAX                             ; 004ac167
    PUSH EAX                            ; 004ac168
    MOV EAX,[0x01d19f80]                ; 004ac169 | DAT_01d19f80
    DEC EAX                             ; 004ac16e
    PUSH EAX                            ; 004ac16f
    MOV EBX,dword ptr [0x01d19f7c]      ; 004ac170 | DAT_01d19f7c
    PUSH EBX                            ; 004ac176
    PUSH EDI                            ; 004ac177
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004ac178
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004ac17d
    PUSH -0x1                           ; 004ac180
    PUSH 0xff                           ; 004ac182
    MOV EDI,dword ptr [0x01d19f8c]      ; 004ac187 | DAT_01d19f8c
    PUSH EDI                            ; 004ac18d
    MOV EBP,dword ptr [0x01d19f88]      ; 004ac18e | DAT_01d19f88
    PUSH EBP                            ; 004ac194
    PUSH 0x1d19f90                      ; 004ac195 | DAT_01d19f90
    MOV EAX,[0x01549aa4]                ; 004ac19a | DAT_01549aa4
    PUSH EAX                            ; 004ac19f
    CALL engine_font.cpp_FUN_004b0a20   ; 004ac1a0
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004ac1a5
    MOV ESI,dword ptr [ESP + 0x508]     ; 004ac1a8
        ;   Label: LAB_004ac1a8
    MOV EDX,dword ptr [0x005fe398]      ; 004ac1af | DAT_005fe398
    MOV EBX,dword ptr [0x01c5fadc]      ; 004ac1b5 | DAT_01c5fadc
    MOV EAX,[0x01c5fae0]                ; 004ac1bb | DAT_01c5fae0
    MOV ECX,dword ptr [0x005fe39c]      ; 004ac1c0 | DAT_005fe39c
    SUB EBX,EDX                         ; 004ac1c6
    SUB EAX,ECX                         ; 004ac1c8
    TEST ESI,ESI                        ; 004ac1ca
    JZ 0x004ac664                       ; 004ac1cc
        ;   XREF to: 004ac664 (CONDITIONAL_JUMP)  ; LAB_004ac664
    PUSH 0xffff                         ; 004ac1d2
    PUSH EAX                            ; 004ac1d7
    PUSH EBX                            ; 004ac1d8
    PUSH 0x1d19c4c                      ; 004ac1d9
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004ac1de
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004ac1e3
    ADD ESP,0x510                       ; 004ac1e6
    POP EBP                             ; 004ac1ec
    POP EDI                             ; 004ac1ed
    POP ESI                             ; 004ac1ee
    POP EBX                             ; 004ac1ef
    RET                                 ; 004ac1f0
    PUSH 0x1d19bac                      ; 004ac1f1
        ;   Label: LAB_004ac1f1
    MOV EBX,0x1d19bc0                   ; 004ac1f6
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac1fb
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac200
    PUSH EBX                            ; 004ac203
        ;   Label: LAB_004ac203
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac204
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004ac209
    ADD ESP,0x4                         ; 004ac20c
    CMP EBX,ESI                         ; 004ac20f
    JNZ 0x004ac203                      ; 004ac211
        ;   XREF to: 004ac203 (CONDITIONAL_JUMP)  ; LAB_004ac203
    PUSH 0x1d19c38                      ; 004ac213
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac218
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac21d
    PUSH 0x1d19c4c                      ; 004ac220
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac225
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac22a
    PUSH 0x1d19c60                      ; 004ac22d
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac232
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac237
    PUSH 0x1d19c74                      ; 004ac23a
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac23f
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac244
    PUSH 0x1d19c9c                      ; 004ac247
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac24c
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac251
    PUSH 0x1d19cb0                      ; 004ac254
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac259
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac25e
    PUSH 0x1d19cc4                      ; 004ac261
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac266
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac26b
    MOV ESI,0x1                         ; 004ac26e
    PUSH 0x1d19cd8                      ; 004ac273
    MOV EBP,0xffffffff                  ; 004ac278
    XOR EDI,EDI                         ; 004ac27d
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac27f
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac284
    MOV dword ptr [0x005fe370],ESI      ; 004ac287 | DAT_005fe370
    MOV dword ptr [0x01d19f78],EDI      ; 004ac28d | DAT_01d19f78
    MOV dword ptr [0x005fe3a8],EBP      ; 004ac293 | DAT_005fe3a8
    XOR AH,AH                           ; 004ac299
    MOV dword ptr [0x01d1a058],EDI      ; 004ac29b | DAT_01d1a058
    MOV byte ptr [0x01d19f90],AH        ; 004ac2a1 | DAT_01d19f90
    ADD ESP,0x510                       ; 004ac2a7
    POP EBP                             ; 004ac2ad
    POP EDI                             ; 004ac2ae
    POP ESI                             ; 004ac2af
    POP EBX                             ; 004ac2b0
    RET                                 ; 004ac2b1
    PUSH 0x1d19bac                      ; 004ac2b2
        ;   Label: LAB_004ac2b2
    MOV EBX,0x1d19bc0                   ; 004ac2b7
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac2bc
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac2c1
    PUSH EBX                            ; 004ac2c4
        ;   Label: LAB_004ac2c4
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac2c5
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004ac2ca
    ADD ESP,0x4                         ; 004ac2cd
    CMP EBX,ESI                         ; 004ac2d0
    JNZ 0x004ac2c4                      ; 004ac2d2
        ;   XREF to: 004ac2c4 (CONDITIONAL_JUMP)  ; LAB_004ac2c4
    PUSH 0x1d19c38                      ; 004ac2d4
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac2d9
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac2de
    PUSH 0x1d19c4c                      ; 004ac2e1
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac2e6
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac2eb
    PUSH 0x1d19c60                      ; 004ac2ee
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac2f3
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac2f8
    PUSH 0x1d19c74                      ; 004ac2fb
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac300
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac305
    PUSH 0x1d19c9c                      ; 004ac308
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac30d
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac312
    PUSH 0x1d19cb0                      ; 004ac315
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac31a
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac31f
    PUSH 0x1d19cc4                      ; 004ac322
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac327
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac32c
    PUSH 0x1d19cd8                      ; 004ac32f
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004ac334
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac339
    XOR ECX,ECX                         ; 004ac33c
    PUSH ECX                            ; 004ac33e
    LEA EAX,[ESP + 0x404]               ; 004ac33f
    PUSH EAX                            ; 004ac346
    MOV EBX,0xffffffff                  ; 004ac347
    MOV EDX,0x1                         ; 004ac34c
    PUSH ECX                            ; 004ac351
    MOV dword ptr [0x005fe3a8],EBX      ; 004ac352 | DAT_005fe3a8
    MOV dword ptr [0x005fe370],EDX      ; 004ac358 | DAT_005fe370
    PUSH ECX                            ; 004ac35e
    MOV dword ptr [0x01d19f78],ECX      ; 004ac35f | DAT_01d19f78
    XOR DL,DL                           ; 004ac365
    PUSH 0x1d0cfc8                      ; 004ac367
    MOV dword ptr [0x01d1a058],ECX      ; 004ac36c | DAT_01d1a058
    MOV byte ptr [0x01d19f90],DL        ; 004ac372 | DAT_01d19f90
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 004ac378
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004ac37d
    PUSH 0x1d0cfa8                      ; 004ac380 | DAT_01d0cfa8
    LEA EAX,[ESP + 0x404]               ; 004ac385
    PUSH EAX                            ; 004ac38c
    PUSH 0x5c0d12                       ; 004ac38d | DAT_005c0d12
    LEA EAX,[ESP + 0xc]                 ; 004ac392
    PUSH EAX                            ; 004ac396
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ac397
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ac39c
    PUSH 0x1e0                          ; 004ac39f
    PUSH 0x280                          ; 004ac3a4
    LEA EAX,[ESP + 0x8]                 ; 004ac3a9
    PUSH EAX                            ; 004ac3ad
    PUSH 0x1d19bac                      ; 004ac3ae
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004ac3b3
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ac3b8
    PUSH 0xff                           ; 004ac3bb
    PUSH 0x1d19bac                      ; 004ac3c0
    MOV EBP,0x9                         ; 004ac3c5
    XOR EBX,EBX                         ; 004ac3ca
    CALL engine_alphabit.cpp_FUN_0040dbb0 ; 004ac3cc
        ;   XREF to: 0040dbb0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040dbb0()
    MOV EDI,dword ptr [0x01d0d210]      ; 004ac3d1 | DAT_01d0d210
    ADD ESP,0x8                         ; 004ac3d7
    TEST EDI,EDI                        ; 004ac3da
    JLE 0x004ac4b0                      ; 004ac3dc
        ;   XREF to: 004ac4b0 (CONDITIONAL_JUMP)  ; LAB_004ac4b0
    MOV ESI,0x1d0d214                   ; 004ac3e2
    MOV EDI,0x1d19bc0                   ; 004ac3e7
    IMUL EAX,EBX,0x2e4                  ; 004ac3ec
        ;   Label: LAB_004ac3ec
    PUSH ESI                            ; 004ac3f2
    PUSH 0x5c0d17                       ; 004ac3f3 | = "tab_%s"
    MOV dword ptr [ESP + 0x508],EAX     ; 004ac3f8
    LEA EAX,[ESP + 0x108]               ; 004ac3ff
    PUSH EAX                            ; 004ac406
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ac407
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    IMUL EAX,EBX,0x14                   ; 004ac40c
    ADD ESP,0xc                         ; 004ac40f
    PUSH 0x0                            ; 004ac412
    MOV dword ptr [ESP + 0x508],EAX     ; 004ac414
    LEA EAX,[ESP + 0x304]               ; 004ac41b
    PUSH EAX                            ; 004ac422
    PUSH 0x0                            ; 004ac423
    PUSH 0x0                            ; 004ac425
    LEA EAX,[ESP + 0x110]               ; 004ac427
    PUSH EAX                            ; 004ac42e
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 004ac42f
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004ac434
    PUSH 0x1d0cfa8                      ; 004ac437 | DAT_01d0cfa8
    LEA EAX,[ESP + 0x304]               ; 004ac43c
    PUSH EAX                            ; 004ac443
    PUSH 0x5c0d12                       ; 004ac444 | DAT_005c0d12
    LEA EAX,[ESP + 0x20c]               ; 004ac449
    PUSH EAX                            ; 004ac450
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ac451
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ac456
    PUSH 0x36                           ; 004ac459
    PUSH 0x5a                           ; 004ac45b
    LEA EAX,[ESP + 0x208]               ; 004ac45d
    PUSH EAX                            ; 004ac464
    PUSH EDI                            ; 004ac465
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004ac466
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ac46b
    MOV EAX,dword ptr [ESP + 0x500]     ; 004ac46e
    MOV dword ptr [EAX + 0x1d0d35c],0x215 ; 004ac475
    MOV dword ptr [EAX + 0x1d0d360],EBP ; 004ac47f
    MOV EAX,dword ptr [ESP + 0x504]     ; 004ac485
    ADD ESI,0x2e4                       ; 004ac48c
    INC EBX                             ; 004ac492
    MOV EAX,dword ptr [EAX + 0x1d19bd0] ; 004ac493
    MOV ECX,dword ptr [0x01d0d210]      ; 004ac499 | DAT_01d0d210
    ADD EAX,0xa                         ; 004ac49f
    ADD EDI,0x14                        ; 004ac4a2
    ADD EBP,EAX                         ; 004ac4a5
    CMP EBX,ECX                         ; 004ac4a7
    JL 0x004ac3ec                       ; 004ac4a9
        ;   XREF to: 004ac3ec (CONDITIONAL_JUMP)  ; LAB_004ac3ec
    NOP                                 ; 004ac4af
    PUSH 0x20                           ; 004ac4b0
        ;   Label: LAB_004ac4b0
    PUSH 0x20                           ; 004ac4b2
    PUSH 0x5c0d1e                       ; 004ac4b4 | = "pentip"
    PUSH 0x1d19c38                      ; 004ac4b9
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004ac4be
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ac4c3
    PUSH 0x20                           ; 004ac4c6
    PUSH 0x20                           ; 004ac4c8
    PUSH 0x5c0d25                       ; 004ac4ca | = "pentipink"
    PUSH 0x1d19c4c                      ; 004ac4cf
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004ac4d4
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ac4d9
    PUSH 0x10                           ; 004ac4dc
    PUSH 0x10                           ; 004ac4de
    PUSH 0x5c0d2f                       ; 004ac4e0 | = "xmarker"
    PUSH 0x1d19c60                      ; 004ac4e5
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004ac4ea
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ac4ef
    PUSH 0x3f                           ; 004ac4f2
    PUSH 0x21                           ; 004ac4f4
    PUSH 0x5c0d37                       ; 004ac4f6 | = "questionmark"
    PUSH 0x1d19c74                      ; 004ac4fb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004ac500
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ac505
    PUSH 0x4a                           ; 004ac508
    PUSH 0x80                           ; 004ac50a
    PUSH 0x5c0d44                       ; 004ac50f | = "twanabox"
    PUSH 0x1d19c88                      ; 004ac514
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004ac519
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ac51e
    PUSH 0x20                           ; 004ac521
    PUSH 0x40                           ; 004ac523
    PUSH 0x5c0d4d                       ; 004ac525 | = "ltarrow"
    PUSH 0x1d19c9c                      ; 004ac52a
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004ac52f
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ac534
    PUSH 0x20                           ; 004ac537
    PUSH 0x40                           ; 004ac539
    PUSH 0x5c0d55                       ; 004ac53b | = "rtarrow"
    PUSH 0x1d19cb0                      ; 004ac540
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004ac545
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ac54a
    PUSH 0x20                           ; 004ac54d
    PUSH 0x1e                           ; 004ac54f
    PUSH 0x5c0d5d                       ; 004ac551 | = "fieldnotes_exit"
    PUSH 0x1d19cc4                      ; 004ac556
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004ac55b
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ac560
    PUSH 0xff                           ; 004ac563
    PUSH 0x1d19cc4                      ; 004ac568
    CALL engine_alphabit.cpp_FUN_0040dbb0 ; 004ac56d
        ;   XREF to: 0040dbb0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040dbb0()
    ADD ESP,0x8                         ; 004ac572
    PUSH 0x8                            ; 004ac575
    PUSH 0x100                          ; 004ac577
    PUSH 0x5c0d6d                       ; 004ac57c | = "underline"
    PUSH 0x1d19cd8                      ; 004ac581
    XOR EBX,EBX                         ; 004ac586
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004ac588
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ac58d
    MOV dword ptr [0x005fe370],EBX      ; 004ac590 | DAT_005fe370
    JMP 0x004abe3a                      ; 004ac596
        ;   XREF to: 004abe3a (UNCONDITIONAL_JUMP)  ; LAB_004abe3a
    INC ESI                             ; 004ac59b
        ;   Label: LAB_004ac59b
    ADD EAX,0x2e4                       ; 004ac59c
    CMP ESI,ECX                         ; 004ac5a1
    JL 0x004abeee                       ; 004ac5a3
        ;   XREF to: 004abeee (CONDITIONAL_JUMP)  ; LAB_004abeee
    MOV EBX,0xffffffff                  ; 004ac5a9
        ;   Label: LAB_004ac5a9
    JMP 0x004abf0c                      ; 004ac5ae
        ;   XREF to: 004abf0c (UNCONDITIONAL_JUMP)  ; LAB_004abf0c
    MOV EBP,dword ptr [EAX + 0x1d19bd0] ; 004ac5b3
        ;   Label: LAB_004ac5b3
    PUSH 0xffff                         ; 004ac5b9
    DEC EBP                             ; 004ac5be
    MOV EAX,dword ptr [EAX + 0x1d19bcc] ; 004ac5bf
    PUSH EBP                            ; 004ac5c5
    DEC EAX                             ; 004ac5c6
    PUSH EAX                            ; 004ac5c7
    MOV ECX,dword ptr [EBX + 0x148]     ; 004ac5c8 | SNotesSection_ARRAY_01d0d214[1].tab_x
    MOV EAX,0x246                       ; 004ac5ce
    PUSH 0x0                            ; 004ac5d3
    SUB EAX,ECX                         ; 004ac5d5
    PUSH EAX                            ; 004ac5d7
    MOV EBP,dword ptr [EBX + 0x14c]     ; 004ac5d8 | SNotesSection_ARRAY_01d0d214[1].tab_y
    PUSH EBP                            ; 004ac5de
    PUSH 0x246                          ; 004ac5df
    PUSH EDI                            ; 004ac5e4
    CALL engine_alphabit.cpp_FUN_0040d8a0 ; 004ac5e5
        ;   XREF to: 0040d8a0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d8a0()
    ADD ESP,0x20                        ; 004ac5ea
    JMP 0x004abf65                      ; 004ac5ed
        ;   XREF to: 004abf65 (UNCONDITIONAL_JUMP)  ; LAB_004abf65
    MOV EDX,dword ptr [0x005fe394]      ; 004ac5f2 | DAT_005fe394
        ;   Label: LAB_004ac5f2
    CMP ESI,EDX                         ; 004ac5f8
    JL 0x004ac148                       ; 004ac5fa
        ;   XREF to: 004ac148 (CONDITIONAL_JUMP)  ; LAB_004ac148
    ADD EAX,dword ptr [0x01d19cd0]      ; 004ac600 | CAlphaBitmap_01d19cc4.width
    CMP EBX,EAX                         ; 004ac606
    JGE 0x004ac148                      ; 004ac608
        ;   XREF to: 004ac148 (CONDITIONAL_JUMP)  ; LAB_004ac148
    MOV EBX,dword ptr [0x01d19cd4]      ; 004ac60e | CAlphaBitmap_01d19cc4.height
    LEA EAX,[EDX + EBX*0x1]             ; 004ac614
    CMP ESI,EAX                         ; 004ac617
    JGE 0x004ac148                      ; 004ac619
        ;   XREF to: 004ac148 (CONDITIONAL_JUMP)  ; LAB_004ac148
    PUSH 0x5c17b4                       ; 004ac61f | DAT_005c17b4
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004ac624
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004ac629
    PUSH EAX                            ; 004ac62c
    MOV ESI,0x1                         ; 004ac62d
    CALL unkaddr_004a76f0.cpp_FUN_004a7a70 ; 004ac632
        ;   XREF to: 004a7a70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a76f0.cpp_FUN_004a7a70()
    ADD ESP,0x4                         ; 004ac637
    MOV dword ptr [ESP + 0x508],ESI     ; 004ac63a
    JMP 0x004ac148                      ; 004ac641
        ;   XREF to: 004ac148 (UNCONDITIONAL_JUMP)  ; LAB_004ac148
    MOV EDX,0xffffffff                  ; 004ac646
        ;   Label: LAB_004ac646
    XOR CL,CL                           ; 004ac64b
    MOV dword ptr [0x01d19f78],EBP      ; 004ac64d | DAT_01d19f78
    MOV byte ptr [0x01d19f90],CL        ; 004ac653 | DAT_01d19f90
    MOV dword ptr [0x005fe3a8],EDX      ; 004ac659 | DAT_005fe3a8
    JMP 0x004ac1a8                      ; 004ac65f
        ;   XREF to: 004ac1a8 (UNCONDITIONAL_JUMP)  ; LAB_004ac1a8
    PUSH 0xffff                         ; 004ac664
        ;   Label: LAB_004ac664
    PUSH EAX                            ; 004ac669
    PUSH EBX                            ; 004ac66a
    PUSH 0x1d19c38                      ; 004ac66b
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004ac670
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004ac675
    ADD ESP,0x510                       ; 004ac678
    POP EBP                             ; 004ac67e
    POP EDI                             ; 004ac67f
    POP ESI                             ; 004ac680
    POP EBX                             ; 004ac681
    RET                                 ; 004ac682
    MOV EBP,0xffffffff                  ; 004ac683
        ;   Label: LAB_004ac683
    XOR CH,CH                           ; 004ac688
    XOR EDI,EDI                         ; 004ac68a
    MOV byte ptr [0x01d19f90],CH        ; 004ac68c | DAT_01d19f90
    MOV dword ptr [0x005fe3a8],EBP      ; 004ac692 | DAT_005fe3a8
    MOV dword ptr [0x01d1a058],EDI      ; 004ac698 | DAT_01d1a058
    MOV dword ptr [0x01d19f78],EDI      ; 004ac69e | DAT_01d19f78
    ADD ESP,0x510                       ; 004ac6a4
    POP EBP                             ; 004ac6aa
    POP EDI                             ; 004ac6ab
    POP ESI                             ; 004ac6ac
    POP EBX                             ; 004ac6ad
    RET                                 ; 004ac6ae

