; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004be0f0(int param_1)
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
;   core_game.cpp_FUN_004ce580 at 004ce900
;
; Referenced Globals:
;   undefined4 DAT_005df825
;   TerminatedCString s_tab_s_005df82a
;   TerminatedCString s_pentipink_005df831
;   TerminatedCString s_pentip_005df83b
;   TerminatedCString s_xmarker_005df842
;   TerminatedCString s_questionmark_005df84a
;   TerminatedCString s_twanabox_005df857
;   TerminatedCString s_ltarrow_005df860
;   TerminatedCString s_rtarrow_005df868
;   TerminatedCString s_fieldnotes_exit_005df870
;   TerminatedCString s_underline_005df880
;   undefined4 DAT_005e02c5
;   undefined4 DAT_0061d2e0
;   undefined4 DAT_0061d2e4
;   undefined4 DAT_0061d2e8
;   ... and 41 more
;
; Called Functions:
;   core_flashlit.cpp_FUN_004b9e30
;   core_flashlit.cpp_FUN_004ba490
;   core_flashlit.cpp_FUN_004ba540
;   core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130
;   core_fldnotes.cpp_STextPage_findResourceAt_FUN_004bb110
;   core_fldnotes.cpp_STextView_drawPage_FUN_004bbc70
;   core_fldnotes.cpp_STextView_reset_FUN_004bb1c0
;   core_fldnotes.cpp_STextView_setRect_FUN_004bb270
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_alphabit.cpp_FUN_0040d660
;   engine_alphabit.cpp_FUN_0040d970
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be0f0
        ;   Label: core_fldnotes.cpp_FUN_004be0f0
    PUSH ESI                            ; 004be0f1
    PUSH EDI                            ; 004be0f2
    PUSH EBP                            ; 004be0f3
    SUB ESP,0x510                       ; 004be0f4
    MOV ESI,0x1cc7ba8                   ; 004be0fa
    MOV EAX,dword ptr [ESP + 0x524]     ; 004be0ff
    XOR EDX,EDX                         ; 004be106
    ADD ESI,0x78                        ; 004be108
    MOV ECX,dword ptr [EAX + 0x40]      ; 004be10b
    MOV dword ptr [ESP + 0x508],EDX     ; 004be10e
    TEST ECX,ECX                        ; 004be115
    JZ 0x004be49f                       ; 004be117
        ;   XREF to: 004be49f (CONDITIONAL_JUMP)  ; LAB_004be49f
    CMP dword ptr [0x0061d2e0],0x0      ; 004be11d | DAT_0061d2e0
    JNZ 0x004be560                      ; 004be124
        ;   XREF to: 004be560 (CONDITIONAL_JUMP)  ; LAB_004be560
    CMP dword ptr [0x0061d2e4],0x0      ; 004be12a | DAT_0061d2e4
        ;   Label: LAB_004be12a
    JZ 0x004be19e                       ; 004be131
        ;   XREF to: 004be19e (CONDITIONAL_JUMP)  ; LAB_004be19e
    PUSH 0x1b8                          ; 004be133
    PUSH 0x1eb                          ; 004be138
    PUSH 0x40                           ; 004be13d
    PUSH 0x60                           ; 004be13f
    PUSH 0x1cc7cd4                      ; 004be141
    CALL core_fldnotes.cpp_STextView_setRect_FUN_004bb270 ; 004be146
        ;   XREF to: 004bb270 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_setRect_FUN_004bb270(STextView * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004be14b
    PUSH 0x1cc7cd4                      ; 004be14e
    XOR EDI,EDI                         ; 004be153
    XOR ESI,ESI                         ; 004be155
    CALL core_fldnotes.cpp_STextView_reset_FUN_004bb1c0 ; 004be157
        ;   XREF to: 004bb1c0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004bb1c0(STextView * this_ptr)
    MOV EBP,dword ptr [0x01cc4470]      ; 004be15c | DAT_01cc4470
    ADD ESP,0x4                         ; 004be162
    XOR DH,DH                           ; 004be165
    MOV dword ptr [0x0061d2e4],EDI      ; 004be167 | DAT_0061d2e4
    MOV byte ptr [0x01cc4270],DH        ; 004be16d | DAT_01cc4270
    TEST EBP,EBP                        ; 004be173
    JLE 0x004be19e                      ; 004be175
        ;   XREF to: 004be19e (CONDITIONAL_JUMP)  ; LAB_004be19e
    MOV EBX,0x1cc4474                   ; 004be177
    PUSH 0x1cc7cd4                      ; 004be17c
        ;   Label: LAB_004be17c
    PUSH EBX                            ; 004be181
    CALL core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130 ; 004be182
        ;   XREF to: 004bc130 (UNCONDITIONAL_CALL)  ; bool core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130(SNotesSection * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004be187
    TEST EAX,EAX                        ; 004be18a
    JZ 0x004be19e                       ; 004be18c
        ;   XREF to: 004be19e (CONDITIONAL_JUMP)  ; LAB_004be19e
    MOV EAX,[0x01cc4470]                ; 004be18e | DAT_01cc4470
    INC ESI                             ; 004be193
    ADD EBX,0x2e4                       ; 004be194
    CMP ESI,EAX                         ; 004be19a
    JL 0x004be17c                       ; 004be19c
        ;   XREF to: 004be17c (CONDITIONAL_JUMP)  ; LAB_004be17c
    PUSH 0xffff                         ; 004be19e
        ;   Label: LAB_004be19e
    PUSH 0x0                            ; 004be1a3
    PUSH 0x0                            ; 004be1a5
    PUSH 0x1cc7b94                      ; 004be1a7
    XOR EDI,EDI                         ; 004be1ac
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004be1ae
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EAX,[0x01cc7b90]                ; 004be1b3 | DAT_01cc7b90
    MOV EDX,dword ptr [0x01cc4470]      ; 004be1b8 | DAT_01cc4470
    ADD ESP,0x10                        ; 004be1be
    TEST EDX,EDX                        ; 004be1c1
    JLE 0x004be85a                      ; 004be1c3
        ;   XREF to: 004be85a (CONDITIONAL_JUMP)  ; LAB_004be85a
    MOV EBX,0x1cc4474                   ; 004be1c9
    MOV ECX,dword ptr [0x01cc4470]      ; 004be1ce | DAT_01cc4470
    MOV ESI,dword ptr [EBX + 0x140]     ; 004be1d4 | SNotesSection_ARRAY_01cc4474[0].first_page | SNotesSection_ARRAY_01cc4474[1].first_page
        ;   Label: LAB_004be1d4
    CMP EAX,ESI                         ; 004be1da
    JL 0x004be84b                       ; 004be1dc
        ;   XREF to: 004be84b (CONDITIONAL_JUMP)  ; LAB_004be84b
    ADD ESI,dword ptr [EBX + 0x144]     ; 004be1e2 | SNotesSection_ARRAY_01cc4474[0].page_count | SNotesSection_ARRAY_01cc4474[1].page_count
    CMP ESI,EAX                         ; 004be1e8
    JLE 0x004be84b                      ; 004be1ea
        ;   XREF to: 004be84b (CONDITIONAL_JUMP)  ; LAB_004be84b
    MOV ESI,EDI                         ; 004be1f0
    MOV EAX,[0x01cc4470]                ; 004be1f2 | DAT_01cc4470
        ;   Label: LAB_004be1f2
    MOV dword ptr [ESP + 0x50c],ESI     ; 004be1f7
    XOR ESI,ESI                         ; 004be1fe
    TEST EAX,EAX                        ; 004be200
    JLE 0x004be254                      ; 004be202
        ;   XREF to: 004be254 (CONDITIONAL_JUMP)  ; LAB_004be254
    MOV EBX,0x1cc4474                   ; 004be204
    MOV EDI,0x1cc7ba8                   ; 004be209
    IMUL EBP,ESI,0x14                   ; 004be20e
        ;   Label: LAB_004be20e
    CMP ESI,dword ptr [ESP + 0x50c]     ; 004be211
    JNZ 0x004be864                      ; 004be218
        ;   XREF to: 004be864 (CONDITIONAL_JUMP)  ; LAB_004be864
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004be21e | SNotesSection_ARRAY_01cc4474[0].tab_y | SNotesSection_ARRAY_01cc4474[1].tab_y
    PUSH 0xffff                         ; 004be224
    SUB EAX,0x2                         ; 004be229
    PUSH EAX                            ; 004be22c
    MOV EAX,dword ptr [EBX + 0x148]     ; 004be22d | SNotesSection_ARRAY_01cc4474[0].tab_x | SNotesSection_ARRAY_01cc4474[1].tab_x
    SUB EAX,0x2                         ; 004be233
    PUSH EAX                            ; 004be236
    PUSH EDI                            ; 004be237
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004be238
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004be23d
    MOV EDX,dword ptr [0x01cc4470]      ; 004be240 | DAT_01cc4470
        ;   Label: LAB_004be240
    ADD EDI,0x14                        ; 004be246
    INC ESI                             ; 004be249
    ADD EBX,0x2e4                       ; 004be24a
    CMP ESI,EDX                         ; 004be250
    JL 0x004be20e                       ; 004be252
        ;   XREF to: 004be20e (CONDITIONAL_JUMP)  ; LAB_004be20e
    MOV EBX,dword ptr [0x01cc7b90]      ; 004be254 | DAT_01cc7b90
        ;   Label: LAB_004be254
    PUSH EBX                            ; 004be25a
    XOR ECX,ECX                         ; 004be25b
    PUSH 0x1cc7cd4                      ; 004be25d
    MOV dword ptr [0x01cc8000],ECX      ; 004be262 | DAT_01cc8000
    CALL core_fldnotes.cpp_STextView_drawPage_FUN_004bbc70 ; 004be268
        ;   XREF to: 004bbc70 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_drawPage_FUN_004bbc70(STextView * this_ptr, int param_2)
    MOV EAX,[0x0061d95c]                ; 004be26d | g_CGamePtr | g_CGameInstance
    MOV ESI,dword ptr [EAX + 0x244]     ; 004be272 | g_CGameInstance.letterbox_mode
    ADD ESP,0x8                         ; 004be278
    TEST ESI,ESI                        ; 004be27b
    JNZ 0x004be936                      ; 004be27d
        ;   XREF to: 004be936 (CONDITIONAL_JUMP)  ; LAB_004be936
    MOV EDI,dword ptr [0x01c43540]      ; 004be283 | DAT_01c43540
    PUSH EDI                            ; 004be289
    MOV EBP,dword ptr [0x01c4353c]      ; 004be28a | DAT_01c4353c
    PUSH EBP                            ; 004be290
    CALL core_flashlit.cpp_FUN_004ba490 ; 004be291
        ;   XREF to: 004ba490 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004ba490()
    ADD ESP,0x8                         ; 004be296
    TEST EAX,EAX                        ; 004be299
    JL 0x004be2d0                       ; 004be29b
        ;   XREF to: 004be2d0 (CONDITIONAL_JUMP)  ; LAB_004be2d0
    MOV EBX,EAX                         ; 004be29d
    SHL EAX,0x3                         ; 004be29f
    ADD EAX,EBX                         ; 004be2a2
    SHL EAX,0x2                         ; 004be2a4
    ADD EAX,EBX                         ; 004be2a7
    SHL EAX,0x2                         ; 004be2a9
    MOV EBX,EAX                         ; 004be2ac
    SHL EAX,0x2                         ; 004be2ae
    ADD EAX,EBX                         ; 004be2b1
    ADD EAX,0x1cc4474                   ; 004be2b3
    ADD EAX,0x40                        ; 004be2b8
    PUSH EAX                            ; 004be2bb
    CALL core_flashlit.cpp_FUN_004b9e30 ; 004be2bc
        ;   XREF to: 004b9e30 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004b9e30()
    MOV EAX,0x1                         ; 004be2c1
    ADD ESP,0x4                         ; 004be2c6
    MOV dword ptr [ESP + 0x508],EAX     ; 004be2c9
    MOV EDX,dword ptr [0x01c43540]      ; 004be2d0 | DAT_01c43540
        ;   Label: LAB_004be2d0
    PUSH EDX                            ; 004be2d6
    MOV ECX,dword ptr [0x01c4353c]      ; 004be2d7 | DAT_01c4353c
    PUSH ECX                            ; 004be2dd
    CALL core_flashlit.cpp_FUN_004ba540 ; 004be2de
        ;   XREF to: 004ba540 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004ba540()
    ADD ESP,0x8                         ; 004be2e3
    TEST EAX,EAX                        ; 004be2e6
    JZ 0x004be2f5                       ; 004be2e8
        ;   XREF to: 004be2f5 (CONDITIONAL_JUMP)  ; LAB_004be2f5
    MOV dword ptr [ESP + 0x508],0x1     ; 004be2ea
    MOV EBX,dword ptr [0x01cc7b90]      ; 004be2f5 | DAT_01cc7b90
        ;   Label: LAB_004be2f5
    LEA EAX,[EBX*0x4 + 0x0]             ; 004be2fb
    MOV ESI,dword ptr [0x01c43540]      ; 004be302 | DAT_01c43540
    ADD EAX,EBX                         ; 004be308
    MOV EDI,dword ptr [0x01c4353c]      ; 004be30a | DAT_01c4353c
    SHL EAX,0x4                         ; 004be310
    PUSH ESI                            ; 004be313
    ADD EAX,EBX                         ; 004be314
    MOV EBX,dword ptr [0x01cc7d10]      ; 004be316 | g_STextViewInstance.pages
    SHL EAX,0x2                         ; 004be31c
    PUSH EDI                            ; 004be31f
    ADD EAX,EBX                         ; 004be320
    PUSH EAX                            ; 004be322
    CALL core_fldnotes.cpp_STextPage_findResourceAt_FUN_004bb110 ; 004be323
        ;   XREF to: 004bb110 (UNCONDITIONAL_CALL)  ; int * core_fldnotes.cpp_STextPage_findResourceAt_FUN_004bb110(STextPage * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 004be328
    TEST EAX,EAX                        ; 004be32b
    JZ 0x004be361                       ; 004be32d
        ;   XREF to: 004be361 (CONDITIONAL_JUMP)  ; LAB_004be361
    MOV EBX,dword ptr [0x01c43540]      ; 004be32f | DAT_01c43540
    MOV EDX,dword ptr [EAX + 0x4]       ; 004be335
    MOV ESI,dword ptr [0x01c4353c]      ; 004be338 | DAT_01c4353c
    SUB EBX,EDX                         ; 004be33e
    MOV EBP,dword ptr [EAX]             ; 004be340
    PUSH EBX                            ; 004be342
    SUB ESI,EBP                         ; 004be343
    PUSH ESI                            ; 004be345
    PUSH 0x0                            ; 004be346
    MOV EDI,dword ptr [EAX + 0x14]      ; 004be348
    PUSH EAX                            ; 004be34b
    CALL dword ptr [EDI + 0x8]          ; 004be34c
    ADD ESP,0x10                        ; 004be34f
    TEST EAX,EAX                        ; 004be352
    JZ 0x004be361                       ; 004be354
        ;   XREF to: 004be361 (CONDITIONAL_JUMP)  ; LAB_004be361
    MOV dword ptr [ESP + 0x508],0x1     ; 004be356
    CMP dword ptr [0x01cc7b90],0x0      ; 004be361 | DAT_01cc7b90
        ;   Label: LAB_004be361
    JLE 0x004be38a                      ; 004be368
        ;   XREF to: 004be38a (CONDITIONAL_JUMP)  ; LAB_004be38a
    PUSH 0xffff                         ; 004be36a
    MOV ESI,dword ptr [0x0061d2ec]      ; 004be36f | DAT_0061d2ec
    PUSH ESI                            ; 004be375
    MOV EDI,dword ptr [0x0061d2e8]      ; 004be376 | DAT_0061d2e8
    PUSH EDI                            ; 004be37c
    PUSH 0x1cc7c84                      ; 004be37d
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004be382
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004be387
    MOV EAX,[0x01cc7d0c]                ; 004be38a | g_STextViewInstance.page_count
        ;   Label: LAB_004be38a
    MOV EBP,dword ptr [0x01cc7b90]      ; 004be38f | DAT_01cc7b90
    SUB EAX,0x2                         ; 004be395
    CMP EAX,EBP                         ; 004be398
    JLE 0x004be3bb                      ; 004be39a
        ;   XREF to: 004be3bb (CONDITIONAL_JUMP)  ; LAB_004be3bb
    PUSH 0xffff                         ; 004be39c
    MOV EAX,[0x0061d2f4]                ; 004be3a1 | DAT_0061d2f4
    PUSH EAX                            ; 004be3a6
    MOV EDX,dword ptr [0x0061d2f0]      ; 004be3a7 | DAT_0061d2f0
    PUSH EDX                            ; 004be3ad
    PUSH 0x1cc7c98                      ; 004be3ae
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004be3b3
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004be3b8
    PUSH 0xffff                         ; 004be3bb
        ;   Label: LAB_004be3bb
    MOV ECX,dword ptr [0x0061d2fc]      ; 004be3c0 | DAT_0061d2fc
    PUSH ECX                            ; 004be3c6
    MOV EBX,dword ptr [0x0061d2f8]      ; 004be3c7 | DAT_0061d2f8
    PUSH EBX                            ; 004be3cd
    PUSH 0x1cc7cac                      ; 004be3ce
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004be3d3
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV ESI,dword ptr [0x01c4353c]      ; 004be3d8 | DAT_01c4353c
    MOV EBX,dword ptr [0x01c43540]      ; 004be3de | DAT_01c43540
    MOV EDI,dword ptr [0x0061d2f8]      ; 004be3e4 | DAT_0061d2f8
    ADD ESP,0x10                        ; 004be3ea
    CMP ESI,EDI                         ; 004be3ed
    JGE 0x004be8a3                      ; 004be3ef
        ;   XREF to: 004be8a3 (CONDITIONAL_JUMP)  ; LAB_004be8a3
    MOV ESI,dword ptr [0x0061d310]      ; 004be3f5 | DAT_0061d310
        ;   Label: LAB_004be3f5
    TEST ESI,ESI                        ; 004be3fb
    JL 0x004be456                       ; 004be3fd
        ;   XREF to: 004be456 (CONDITIONAL_JUMP)  ; LAB_004be456
    MOV EDI,dword ptr [0x01cc8000]      ; 004be3ff | DAT_01cc8000
    TEST EDI,EDI                        ; 004be405
    JZ 0x004be8fa                       ; 004be407
        ;   XREF to: 004be8fa (CONDITIONAL_JUMP)  ; LAB_004be8fa
    MOV EAX,[0x01cc7f28]                ; 004be40d | DAT_01cc7f28
    PUSH 0x0                            ; 004be412
    DEC EAX                             ; 004be414
    PUSH EAX                            ; 004be415
    MOV EAX,[0x01cc7f24]                ; 004be416 | DAT_01cc7f24
    DEC EAX                             ; 004be41b
    PUSH EAX                            ; 004be41c
    MOV ECX,dword ptr [0x01cc7f20]      ; 004be41d | DAT_01cc7f20
    PUSH ECX                            ; 004be423
    PUSH ESI                            ; 004be424
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004be425
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004be42a
    PUSH -0x1                           ; 004be42d
    PUSH 0xff                           ; 004be42f
    MOV ESI,dword ptr [0x01cc7f30]      ; 004be434 | DAT_01cc7f30
    PUSH ESI                            ; 004be43a
    MOV EDI,dword ptr [0x01cc7f2c]      ; 004be43b | DAT_01cc7f2c
    PUSH EDI                            ; 004be441
    PUSH 0x1cc7f38                      ; 004be442 | DAT_01cc7f38
    MOV EBP,dword ptr [0x0152d240]      ; 004be447 | DAT_0152d240
    PUSH EBP                            ; 004be44d
    CALL engine_font.cpp_FUN_004c1dd0   ; 004be44e
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004be453
    MOV ESI,dword ptr [ESP + 0x508]     ; 004be456
        ;   Label: LAB_004be456
    MOV EDX,dword ptr [0x0061d300]      ; 004be45d | DAT_0061d300
    MOV EBX,dword ptr [0x01c4353c]      ; 004be463 | DAT_01c4353c
    MOV EAX,[0x01c43540]                ; 004be469 | DAT_01c43540
    MOV ECX,dword ptr [0x0061d304]      ; 004be46e | DAT_0061d304
    SUB EBX,EDX                         ; 004be474
    SUB EAX,ECX                         ; 004be476
    TEST ESI,ESI                        ; 004be478
    JZ 0x004be917                       ; 004be47a
        ;   XREF to: 004be917 (CONDITIONAL_JUMP)  ; LAB_004be917
    PUSH 0xffff                         ; 004be480
    PUSH EAX                            ; 004be485
    PUSH EBX                            ; 004be486
    PUSH 0x1cc7c34                      ; 004be487
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004be48c
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004be491
    ADD ESP,0x510                       ; 004be494
    POP EBP                             ; 004be49a
    POP EDI                             ; 004be49b
    POP ESI                             ; 004be49c
    POP EBX                             ; 004be49d
    RET                                 ; 004be49e
    PUSH 0x1cc7b94                      ; 004be49f
        ;   Label: LAB_004be49f
    MOV EBX,0x1cc7ba8                   ; 004be4a4
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be4a9
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be4ae
    PUSH EBX                            ; 004be4b1
        ;   Label: LAB_004be4b1
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be4b2
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004be4b7
    ADD ESP,0x4                         ; 004be4ba
    CMP EBX,ESI                         ; 004be4bd
    JNZ 0x004be4b1                      ; 004be4bf
        ;   XREF to: 004be4b1 (CONDITIONAL_JUMP)  ; LAB_004be4b1
    PUSH 0x1cc7c20                      ; 004be4c1
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be4c6
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be4cb
    PUSH 0x1cc7c34                      ; 004be4ce
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be4d3
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be4d8
    PUSH 0x1cc7c48                      ; 004be4db
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be4e0
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be4e5
    PUSH 0x1cc7c5c                      ; 004be4e8
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be4ed
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be4f2
    PUSH 0x1cc7c84                      ; 004be4f5
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be4fa
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be4ff
    PUSH 0x1cc7c98                      ; 004be502
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be507
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be50c
    PUSH 0x1cc7cac                      ; 004be50f
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be514
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be519
    MOV ESI,0x1                         ; 004be51c
    PUSH 0x1cc7cc0                      ; 004be521
    MOV EBP,0xffffffff                  ; 004be526
    XOR EDI,EDI                         ; 004be52b
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be52d
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be532
    MOV dword ptr [0x0061d2e0],ESI      ; 004be535 | DAT_0061d2e0
    MOV dword ptr [0x01cc7f1c],EDI      ; 004be53b | DAT_01cc7f1c
    MOV dword ptr [0x0061d310],EBP      ; 004be541 | DAT_0061d310
    XOR AH,AH                           ; 004be547
    MOV dword ptr [0x01cc8000],EDI      ; 004be549 | DAT_01cc8000
    MOV byte ptr [0x01cc7f38],AH        ; 004be54f | DAT_01cc7f38
    ADD ESP,0x510                       ; 004be555
    POP EBP                             ; 004be55b
    POP EDI                             ; 004be55c
    POP ESI                             ; 004be55d
    POP EBX                             ; 004be55e
    RET                                 ; 004be55f
    PUSH 0x1cc7b94                      ; 004be560
        ;   Label: LAB_004be560
    MOV EBX,0x1cc7ba8                   ; 004be565
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be56a
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be56f
    PUSH EBX                            ; 004be572
        ;   Label: LAB_004be572
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be573
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004be578
    ADD ESP,0x4                         ; 004be57b
    CMP EBX,ESI                         ; 004be57e
    JNZ 0x004be572                      ; 004be580
        ;   XREF to: 004be572 (CONDITIONAL_JUMP)  ; LAB_004be572
    PUSH 0x1cc7c20                      ; 004be582
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be587
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be58c
    PUSH 0x1cc7c34                      ; 004be58f
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be594
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be599
    PUSH 0x1cc7c48                      ; 004be59c
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be5a1
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be5a6
    PUSH 0x1cc7c5c                      ; 004be5a9
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be5ae
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be5b3
    PUSH 0x1cc7c84                      ; 004be5b6
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be5bb
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be5c0
    PUSH 0x1cc7c98                      ; 004be5c3
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be5c8
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be5cd
    PUSH 0x1cc7cac                      ; 004be5d0
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be5d5
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be5da
    PUSH 0x1cc7cc0                      ; 004be5dd
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be5e2
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be5e7
    XOR ECX,ECX                         ; 004be5ea
    PUSH ECX                            ; 004be5ec
    LEA EAX,[ESP + 0x104]               ; 004be5ed
    PUSH EAX                            ; 004be5f4
    MOV EBX,0xffffffff                  ; 004be5f5
    MOV EDX,0x1                         ; 004be5fa
    PUSH ECX                            ; 004be5ff
    MOV dword ptr [0x0061d310],EBX      ; 004be600 | DAT_0061d310
    MOV dword ptr [0x0061d2e0],EDX      ; 004be606 | DAT_0061d2e0
    PUSH ECX                            ; 004be60c
    MOV dword ptr [0x01cc7f1c],ECX      ; 004be60d | DAT_01cc7f1c
    XOR DL,DL                           ; 004be613
    PUSH 0x1cc4228                      ; 004be615 | DAT_01cc4228
    MOV dword ptr [0x01cc8000],ECX      ; 004be61a | DAT_01cc8000
    MOV byte ptr [0x01cc7f38],DL        ; 004be620 | DAT_01cc7f38
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004be626
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004be62b
    PUSH 0x1cc4208                      ; 004be62e | DAT_01cc4208
    LEA EAX,[ESP + 0x104]               ; 004be633
    PUSH EAX                            ; 004be63a
    PUSH 0x5df825                       ; 004be63b | DAT_005df825
    LEA EAX,[ESP + 0x20c]               ; 004be640
    PUSH EAX                            ; 004be647
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004be648
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004be64d
    PUSH 0x1e0                          ; 004be650
    PUSH 0x280                          ; 004be655
    LEA EAX,[ESP + 0x208]               ; 004be65a
    PUSH EAX                            ; 004be661
    PUSH 0x1cc7b94                      ; 004be662
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004be667
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be66c
    PUSH 0xff                           ; 004be66f
    PUSH 0x1cc7b94                      ; 004be674
    MOV EBP,0x9                         ; 004be679
    XOR EBX,EBX                         ; 004be67e
    CALL engine_alphabit.cpp_FUN_0040d970 ; 004be680
        ;   XREF to: 0040d970 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d970()
    MOV EDI,dword ptr [0x01cc4470]      ; 004be685 | DAT_01cc4470
    ADD ESP,0x8                         ; 004be68b
    TEST EDI,EDI                        ; 004be68e
    JLE 0x004be760                      ; 004be690
        ;   XREF to: 004be760 (CONDITIONAL_JUMP)  ; LAB_004be760
    MOV ESI,0x1cc4474                   ; 004be696
    MOV EDI,0x1cc7ba8                   ; 004be69b
    IMUL EAX,EBX,0x2e4                  ; 004be6a0
        ;   Label: LAB_004be6a0
    PUSH ESI                            ; 004be6a6
    PUSH 0x5df82a                       ; 004be6a7 | = "tab_%s"
    MOV dword ptr [ESP + 0x508],EAX     ; 004be6ac
    LEA EAX,[ESP + 0x308]               ; 004be6b3
    PUSH EAX                            ; 004be6ba
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004be6bb
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    IMUL EAX,EBX,0x14                   ; 004be6c0
    ADD ESP,0xc                         ; 004be6c3
    PUSH 0x0                            ; 004be6c6
    MOV dword ptr [ESP + 0x508],EAX     ; 004be6c8
    LEA EAX,[ESP + 0x404]               ; 004be6cf
    PUSH EAX                            ; 004be6d6
    PUSH 0x0                            ; 004be6d7
    PUSH 0x0                            ; 004be6d9
    LEA EAX,[ESP + 0x310]               ; 004be6db
    PUSH EAX                            ; 004be6e2
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004be6e3
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004be6e8
    PUSH 0x1cc4208                      ; 004be6eb | DAT_01cc4208
    LEA EAX,[ESP + 0x404]               ; 004be6f0
    PUSH EAX                            ; 004be6f7
    PUSH 0x5df825                       ; 004be6f8 | DAT_005df825
    LEA EAX,[ESP + 0xc]                 ; 004be6fd
    PUSH EAX                            ; 004be701
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004be702
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004be707
    PUSH 0x36                           ; 004be70a
    PUSH 0x5a                           ; 004be70c
    LEA EAX,[ESP + 0x8]                 ; 004be70e
    PUSH EAX                            ; 004be712
    PUSH EDI                            ; 004be713
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004be714
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be719
    MOV EAX,dword ptr [ESP + 0x500]     ; 004be71c
    MOV dword ptr [EAX + 0x1cc45bc],0x215 ; 004be723
    MOV dword ptr [EAX + 0x1cc45c0],EBP ; 004be72d
    MOV EAX,dword ptr [ESP + 0x504]     ; 004be733
    ADD ESI,0x2e4                       ; 004be73a
    INC EBX                             ; 004be740
    MOV EAX,dword ptr [EAX + 0x1cc7bb8] ; 004be741
    MOV ECX,dword ptr [0x01cc4470]      ; 004be747 | DAT_01cc4470
    ADD EAX,0xa                         ; 004be74d
    ADD EDI,0x14                        ; 004be750
    ADD EBP,EAX                         ; 004be753
    CMP EBX,ECX                         ; 004be755
    JL 0x004be6a0                       ; 004be757
        ;   XREF to: 004be6a0 (CONDITIONAL_JUMP)  ; LAB_004be6a0
    LEA EAX,[EAX]                       ; 004be75d
    PUSH 0x20                           ; 004be760
        ;   Label: LAB_004be760
    PUSH 0x20                           ; 004be762
    PUSH 0x5df831                       ; 004be764 | = "pentipink"
    PUSH 0x1cc7c20                      ; 004be769
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004be76e
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be773
    PUSH 0x20                           ; 004be776
    PUSH 0x20                           ; 004be778
    PUSH 0x5df83b                       ; 004be77a | = "pentip"
    PUSH 0x1cc7c34                      ; 004be77f
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004be784
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be789
    PUSH 0x10                           ; 004be78c
    PUSH 0x10                           ; 004be78e
    PUSH 0x5df842                       ; 004be790 | = "xmarker"
    PUSH 0x1cc7c48                      ; 004be795
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004be79a
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be79f
    PUSH 0x3f                           ; 004be7a2
    PUSH 0x21                           ; 004be7a4
    PUSH 0x5df84a                       ; 004be7a6 | = "questionmark"
    PUSH 0x1cc7c5c                      ; 004be7ab
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004be7b0
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be7b5
    PUSH 0x4a                           ; 004be7b8
    PUSH 0x80                           ; 004be7ba
    PUSH 0x5df857                       ; 004be7bf | = "twanabox"
    PUSH 0x1cc7c70                      ; 004be7c4
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004be7c9
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be7ce
    PUSH 0x20                           ; 004be7d1
    PUSH 0x40                           ; 004be7d3
    PUSH 0x5df860                       ; 004be7d5 | = "ltarrow"
    PUSH 0x1cc7c84                      ; 004be7da
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004be7df
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be7e4
    PUSH 0x20                           ; 004be7e7
    PUSH 0x40                           ; 004be7e9
    PUSH 0x5df868                       ; 004be7eb | = "rtarrow"
    PUSH 0x1cc7c98                      ; 004be7f0
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004be7f5
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be7fa
    PUSH 0x20                           ; 004be7fd
    PUSH 0x1e                           ; 004be7ff
    PUSH 0x5df870                       ; 004be801 | = "fieldnotes_exit"
    PUSH 0x1cc7cac                      ; 004be806
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004be80b
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be810
    PUSH 0xff                           ; 004be813
    PUSH 0x1cc7cac                      ; 004be818
    CALL engine_alphabit.cpp_FUN_0040d970 ; 004be81d
        ;   XREF to: 0040d970 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d970()
    ADD ESP,0x8                         ; 004be822
    PUSH 0x8                            ; 004be825
    PUSH 0x100                          ; 004be827
    PUSH 0x5df880                       ; 004be82c | = "underline"
    PUSH 0x1cc7cc0                      ; 004be831
    XOR EBX,EBX                         ; 004be836
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004be838
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be83d
    MOV dword ptr [0x0061d2e0],EBX      ; 004be840 | DAT_0061d2e0
    JMP 0x004be12a                      ; 004be846
        ;   XREF to: 004be12a (UNCONDITIONAL_JUMP)  ; LAB_004be12a
    INC EDI                             ; 004be84b
        ;   Label: LAB_004be84b
    ADD EBX,0x2e4                       ; 004be84c
    CMP EDI,ECX                         ; 004be852
    JL 0x004be1d4                       ; 004be854
        ;   XREF to: 004be1d4 (CONDITIONAL_JUMP)  ; LAB_004be1d4
    MOV ESI,0xffffffff                  ; 004be85a
        ;   Label: LAB_004be85a
    JMP 0x004be1f2                      ; 004be85f
        ;   XREF to: 004be1f2 (UNCONDITIONAL_JUMP)  ; LAB_004be1f2
    MOV EAX,dword ptr [EBP + 0x1cc7bb8] ; 004be864 | CAlphaBitmap_ARRAY_01cc7ba8[1].height
        ;   Label: LAB_004be864
    PUSH 0xffff                         ; 004be86a
    DEC EAX                             ; 004be86f
    PUSH EAX                            ; 004be870
    MOV EAX,dword ptr [EBP + 0x1cc7bb4] ; 004be871 | CAlphaBitmap_ARRAY_01cc7ba8[1].width
    DEC EAX                             ; 004be877
    PUSH EAX                            ; 004be878
    MOV ECX,dword ptr [EBX + 0x148]     ; 004be879 | SNotesSection_ARRAY_01cc4474[1].tab_x
    MOV EAX,0x246                       ; 004be87f
    PUSH 0x0                            ; 004be884
    SUB EAX,ECX                         ; 004be886
    PUSH EAX                            ; 004be888
    MOV EBP,dword ptr [EBX + 0x14c]     ; 004be889 | SNotesSection_ARRAY_01cc4474[1].tab_y
    PUSH EBP                            ; 004be88f
    PUSH 0x246                          ; 004be890
    PUSH EDI                            ; 004be895
    CALL engine_alphabit.cpp_FUN_0040d660 ; 004be896
        ;   XREF to: 0040d660 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d660()
    ADD ESP,0x20                        ; 004be89b
    JMP 0x004be240                      ; 004be89e
        ;   XREF to: 004be240 (UNCONDITIONAL_JUMP)  ; LAB_004be240
    MOV EBP,dword ptr [0x0061d2fc]      ; 004be8a3 | DAT_0061d2fc
        ;   Label: LAB_004be8a3
    CMP EBX,EBP                         ; 004be8a9
    JL 0x004be3f5                       ; 004be8ab
        ;   XREF to: 004be3f5 (CONDITIONAL_JUMP)  ; LAB_004be3f5
    MOV EDX,dword ptr [0x01cc7cb8]      ; 004be8b1 | CAlphaBitmap_01cc7cac.width
    LEA EAX,[EDI + EDX*0x1]             ; 004be8b7
    CMP ESI,EAX                         ; 004be8ba
    JGE 0x004be3f5                      ; 004be8bc
        ;   XREF to: 004be3f5 (CONDITIONAL_JUMP)  ; LAB_004be3f5
    MOV ECX,dword ptr [0x01cc7cbc]      ; 004be8c2 | CAlphaBitmap_01cc7cac.height
    LEA EAX,[ECX + EBP*0x1]             ; 004be8c8
    CMP EBX,EAX                         ; 004be8cb
    JGE 0x004be3f5                      ; 004be8cd
        ;   XREF to: 004be3f5 (CONDITIONAL_JUMP)  ; LAB_004be3f5
    PUSH 0x5e02c5                       ; 004be8d3 | DAT_005e02c5
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004be8d8
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004be8dd
    PUSH EAX                            ; 004be8e0
    MOV EBX,0x1                         ; 004be8e1
    CALL core_flashlit.cpp_FUN_004b9e30 ; 004be8e6
        ;   XREF to: 004b9e30 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004b9e30()
    ADD ESP,0x4                         ; 004be8eb
    MOV dword ptr [ESP + 0x508],EBX     ; 004be8ee
    JMP 0x004be3f5                      ; 004be8f5
        ;   XREF to: 004be3f5 (UNCONDITIONAL_JUMP)  ; LAB_004be3f5
    MOV EAX,0xffffffff                  ; 004be8fa
        ;   Label: LAB_004be8fa
    XOR BL,BL                           ; 004be8ff
    MOV dword ptr [0x01cc7f1c],EDI      ; 004be901 | DAT_01cc7f1c
    MOV byte ptr [0x01cc7f38],BL        ; 004be907 | DAT_01cc7f38
    MOV [0x0061d310],EAX                ; 004be90d | DAT_0061d310
    JMP 0x004be456                      ; 004be912
        ;   XREF to: 004be456 (UNCONDITIONAL_JUMP)  ; LAB_004be456
    PUSH 0xffff                         ; 004be917
        ;   Label: LAB_004be917
    PUSH EAX                            ; 004be91c
    PUSH EBX                            ; 004be91d
    PUSH 0x1cc7c20                      ; 004be91e
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004be923
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004be928
    ADD ESP,0x510                       ; 004be92b
    POP EBP                             ; 004be931
    POP EDI                             ; 004be932
    POP ESI                             ; 004be933
    POP EBX                             ; 004be934
    RET                                 ; 004be935
    MOV EBP,0xffffffff                  ; 004be936
        ;   Label: LAB_004be936
    XOR BH,BH                           ; 004be93b
    XOR EDI,EDI                         ; 004be93d
    MOV byte ptr [0x01cc7f38],BH        ; 004be93f | DAT_01cc7f38
    MOV dword ptr [0x0061d310],EBP      ; 004be945 | DAT_0061d310
    MOV dword ptr [0x01cc8000],EDI      ; 004be94b | DAT_01cc8000
    MOV dword ptr [0x01cc7f1c],EDI      ; 004be951 | DAT_01cc7f1c
    ADD ESP,0x510                       ; 004be957
    POP EBP                             ; 004be95d
    POP EDI                             ; 004be95e
    POP ESI                             ; 004be95f
    POP EBX                             ; 004be960
    RET                                 ; 004be961

