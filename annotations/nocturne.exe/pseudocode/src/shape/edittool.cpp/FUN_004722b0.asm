; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004722b0(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   FUN_0046f7e0 at 0046f8a2
;   FUN_0046fb40 at 0046fc2f
;   FUN_0046fcd0 at 0046fdbf
;   FUN_0046fe60 at 0046ff4f
;   FUN_00470eb0 at 00470f9a
;   FUN_004759d0 at 004759e1
;   core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0 at 004cfc5f
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760 at 00471816
;
; Referenced Globals:
;   undefined4 s_..\\shape\\edittool.cpp_0057e4f9+1
;   string s_gEdFont_must_be_set_by_the_appli_0057e510
;   string s_..\\shape\\edittool.cpp_0057e9f6
;   string s_CEditorTools::paintWindow()_call_0057ea0c
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd07c
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01bcddc8
;   undefined4 DAT_01bcddcc
;   undefined4 DAT_01bcddd0
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c70
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00403bd0
;   engine_2d.c_fillRectWithBorder_FUN_00403ef0
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   engine_matrix.c_popViewport_FUN_004ce920
;   engine_matrix.c_pushViewport_FUN_004ce7c0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004722b0
        ;   Label: FUN_004722b0
    PUSH ESI                            ; 004722b1
    PUSH EDI                            ; 004722b2
    PUSH EBP                            ; 004722b3
    SUB ESP,0x4                         ; 004722b4
    CMP dword ptr [0x01bcd070],0x0      ; 004722b7 | DAT_01bcd070
    JZ 0x0047239e                       ; 004722be
        ;   XREF to: 0047239e (CONDITIONAL_JUMP)  ; LAB_0047239e
    MOV EAX,[0x01bcd070]                ; 004722c4 | DAT_01bcd070
        ;   Label: LAB_004722c4
    PUSH 0x6a                           ; 004722c9
    MOV EDX,dword ptr [EAX + 0x3168]    ; 004722cb
    PUSH EAX                            ; 004722d1
    MOV dword ptr [0x01bcd9b8],EDX      ; 004722d2 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004722d8
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    MOV ESI,dword ptr [0x01bcd07c]      ; 004722dd | DAT_01bcd07c
    ADD ESP,0x8                         ; 004722e3
    MOV [0x01bcd9bc],EAX                ; 004722e6 | DAT_01bcd9bc
    CMP ESI,0x1                         ; 004722eb
    JGE 0x00472313                      ; 004722ee
        ;   XREF to: 00472313 (CONDITIONAL_JUMP)  ; LAB_00472313
    MOV EDI,0x57e9f6                    ; 004722f0 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x749                       ; 004722f5
    PUSH 0x57ea0c                       ; 004722fa | = "CEditorTools::paintWindow() called bu..."
    MOV dword ptr [0x01cc4800],EDI      ; 004722ff | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00472305 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0047230b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00472310
    MOV EDX,dword ptr [0x01bcd07c]      ; 00472313 | DAT_01bcd07c
        ;   Label: LAB_00472313
    DEC EDX                             ; 00472319
    MOV EBX,EDX                         ; 0047231a
    SHL EBX,0x4                         ; 0047231c
    SUB EBX,EDX                         ; 0047231f
    SHL EBX,0x2                         ; 00472321
    SUB EBX,EDX                         ; 00472324
    SHL EBX,0x3                         ; 00472326
    MOV EAX,[0x01c00c70]                ; 00472329 | DAT_01c00c70
    ADD EBX,0x1bcd080                   ; 0047232e
    MOV dword ptr [ESP],EAX             ; 00472334
    MOV EDX,dword ptr [EBX + 0xc]       ; 00472337
    SUB EDX,dword ptr [EBX + 0x4]       ; 0047233a
    LEA EAX,[EDX + 0x1]                 ; 0047233d
    MOV ECX,dword ptr [EBX]             ; 00472340
    MOV EDX,dword ptr [EBX + 0x8]       ; 00472342
    SUB EDX,ECX                         ; 00472345
    PUSH EAX                            ; 00472347
    INC EDX                             ; 00472348
    PUSH EDX                            ; 00472349
    MOV ESI,dword ptr [EBX + 0x4]       ; 0047234a
    PUSH ESI                            ; 0047234d
    PUSH ECX                            ; 0047234e
    CALL engine_matrix.c_pushViewport_FUN_004ce7c0 ; 0047234f
        ;   XREF to: 004ce7c0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_pushViewport_FUN_004ce7c0()
    ADD ESP,0x10                        ; 00472354
    MOV EBP,dword ptr [0x01bcddcc]      ; 00472357 | DAT_01bcddcc
    PUSH EBP                            ; 0047235d
    MOV EAX,[0x01bcddc8]                ; 0047235e | DAT_01bcddc8
    PUSH EAX                            ; 00472363
    MOV EAX,dword ptr [EBX + 0xc]       ; 00472364
    SUB EAX,0x2                         ; 00472367
    PUSH EAX                            ; 0047236a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047236b
    SUB EAX,0x2                         ; 0047236e
    PUSH EAX                            ; 00472371
    MOV EAX,dword ptr [EBX + 0x4]       ; 00472372
    INC EAX                             ; 00472375
    PUSH EAX                            ; 00472376
    MOV EAX,dword ptr [EBX]             ; 00472377
    INC EAX                             ; 00472379
    PUSH EAX                            ; 0047237a
    CALL engine_2d.c_fillRectWithBorder_FUN_00403ef0 ; 0047237b
        ;   XREF to: 00403ef0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_fillRectWithBorder_FUN_00403ef0()
    ADD ESP,0x18                        ; 00472380
    CALL engine_matrix.c_popViewport_FUN_004ce920 ; 00472383
        ;   XREF to: 004ce920 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_popViewport_FUN_004ce920()
    CMP byte ptr [EBX + 0x38],0x0       ; 00472388
    JNZ 0x004723c6                      ; 0047238c
        ;   XREF to: 004723c6 (CONDITIONAL_JUMP)  ; LAB_004723c6
    MOV EAX,dword ptr [ESP]             ; 0047238e
    MOV [0x01c00c70],EAX                ; 00472391 | DAT_01c00c70
    ADD ESP,0x4                         ; 00472396
    POP EBP                             ; 00472399
    POP EDI                             ; 0047239a
    POP ESI                             ; 0047239b
    POP EBX                             ; 0047239c
    RET                                 ; 0047239d
    MOV ECX,0x57e4fa                    ; 0047239e | s_..\shape\edittool.cpp_0057e4f9+1
        ;   Label: LAB_0047239e
    MOV EBX,0x8b                        ; 004723a3
    PUSH 0x57e510                       ; 004723a8 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 004723ad | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004723b3 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004723b9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004723be
    JMP 0x004722c4                      ; 004723c1
        ;   XREF to: 004722c4 (UNCONDITIONAL_JUMP)  ; LAB_004722c4
    PUSH 0xffff                         ; 004723c6
        ;   Label: LAB_004723c6
    MOV EAX,dword ptr [EBX + 0x4]       ; 004723cb
    MOV EDI,dword ptr [0x01c00c5c]      ; 004723ce | DAT_01c00c5c
    MOV [0x01c00c5c],EAX                ; 004723d4 | DAT_01c00c5c
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004723d9
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 004723de
    PUSH -0x1                           ; 004723e1
    MOV EDX,dword ptr [0x01bcddd0]      ; 004723e3 | DAT_01bcddd0
    MOV EAX,[0x01bcd9bc]                ; 004723e9 | DAT_01bcd9bc
    PUSH EDX                            ; 004723ee
    MOV EDX,EAX                         ; 004723ef
    SAR EDX,0x1f                        ; 004723f1
    SUB EAX,EDX                         ; 004723f4
    SAR EAX,0x1                         ; 004723f6
    ADD EAX,dword ptr [EBX + 0x4]       ; 004723f8
    MOV EBP,dword ptr [EBX]             ; 004723fb
    INC EAX                             ; 004723fd
    MOV ESI,dword ptr [EBX + 0x8]       ; 004723fe
    PUSH EAX                            ; 00472401
    ADD EBP,ESI                         ; 00472402
    LEA ESI,[EBX + 0x38]                ; 00472404
    PUSH ESI                            ; 00472407
    MOV EAX,[0x01bcd070]                ; 00472408 | DAT_01bcd070
    PUSH EAX                            ; 0047240d
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0047240e
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    MOV EDX,EBP                         ; 00472413
    SUB EDX,EAX                         ; 00472415
    MOV EAX,EDX                         ; 00472417
    SAR EDX,0x1f                        ; 00472419
    SUB EAX,EDX                         ; 0047241c
    SAR EAX,0x1                         ; 0047241e
    ADD ESP,0x8                         ; 00472420
    PUSH EAX                            ; 00472423
    PUSH ESI                            ; 00472424
    MOV EDX,dword ptr [0x01bcd070]      ; 00472425 | DAT_01bcd070
    PUSH EDX                            ; 0047242b
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0047242c
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 00472431
    PUSH ESI                            ; 00472434
    MOV ECX,dword ptr [0x01bcd070]      ; 00472435 | DAT_01bcd070
    MOV EAX,[0x01bcddcc]                ; 0047243b | DAT_01bcddcc
    PUSH ECX                            ; 00472440
    MOV [0x01c00c70],EAX                ; 00472441 | DAT_01c00c70
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60 ; 00472446
        ;   XREF to: 00492e60 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60()
    MOV EBP,dword ptr [0x01bcd9bc]      ; 0047244b | DAT_01bcd9bc
    ADD ESP,0x8                         ; 00472451
    MOV EDX,dword ptr [EBX + 0x8]       ; 00472454
    MOV ESI,dword ptr [EBX + 0x4]       ; 00472457
    SUB EDX,0x2                         ; 0047245a
    ADD EAX,ESI                         ; 0047245d
    PUSH EDX                            ; 0047245f
    ADD EAX,EBP                         ; 00472460
    PUSH EAX                            ; 00472462
    MOV EAX,dword ptr [EBX]             ; 00472463
    INC EAX                             ; 00472465
    PUSH EAX                            ; 00472466
    CALL engine_2d.c_drawHLine_FUN_00403bd0 ; 00472467
        ;   XREF to: 00403bd0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawHLine_FUN_00403bd0()
    ADD ESP,0xc                         ; 0047246c
    MOV dword ptr [0x01c00c5c],EDI      ; 0047246f | DAT_01c00c5c
    MOV EAX,dword ptr [ESP]             ; 00472475
    MOV [0x01c00c70],EAX                ; 00472478 | DAT_01c00c70
    ADD ESP,0x4                         ; 0047247d
    POP EBP                             ; 00472480
    POP EDI                             ; 00472481
    POP ESI                             ; 00472482
    POP EBX                             ; 00472483
    RET                                 ; 00472484

