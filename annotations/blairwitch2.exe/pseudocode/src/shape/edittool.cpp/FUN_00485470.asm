; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00485470(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580
;   shape_edittool.cpp_FUN_004855f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485470
        ;   Label: shape_edittool.cpp_FUN_00485470
    PUSH ESI                            ; 00485471
    PUSH EDI                            ; 00485472
    PUSH EBP                            ; 00485473
    MOV EBX,dword ptr [ESP + 0x14]      ; 00485474
    MOV ESI,dword ptr [ESP + 0x20]      ; 00485478
    TEST ESI,ESI                        ; 0048547c
    JNZ 0x00485485                      ; 0048547e
        ;   XREF to: 00485485 (CONDITIONAL_JUMP)  ; LAB_00485485
    MOV ESI,0x5d2b05                    ; 00485480
    MOV EAX,dword ptr [ESP + 0x18]      ; 00485485
        ;   Label: LAB_00485485
    MOV dword ptr [EBX + 0x10],EAX      ; 00485489
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048548c
    LEA EDI,[EBX + 0x24]                ; 00485490
    MOV dword ptr [EBX + 0x14],EAX      ; 00485493
    PUSH EDI                            ; 00485496
    MOV AL,byte ptr [ESI]               ; 00485497
        ;   Label: LAB_00485497
    MOV byte ptr [EDI],AL               ; 00485499
    CMP AL,0x0                          ; 0048549b
    JZ 0x004854af                       ; 0048549d
        ;   XREF to: 004854af (CONDITIONAL_JUMP)  ; LAB_004854af
    MOV AL,byte ptr [ESI + 0x1]         ; 0048549f
    ADD ESI,0x2                         ; 004854a2
    MOV byte ptr [EDI + 0x1],AL         ; 004854a5
    ADD EDI,0x2                         ; 004854a8
    CMP AL,0x0                          ; 004854ab
    JNZ 0x00485497                      ; 004854ad
        ;   XREF to: 00485497 (CONDITIONAL_JUMP)  ; LAB_00485497
    POP EDI                             ; 004854af
        ;   Label: LAB_004854af
    CMP dword ptr [0x01c25590],0x0      ; 004854b0 | DAT_01c25590
    JZ 0x0048552a                       ; 004854b7
        ;   XREF to: 0048552a (CONDITIONAL_JUMP)  ; LAB_0048552a
    MOV EAX,[0x01c25590]                ; 004854b9 | DAT_01c25590
        ;   Label: LAB_004854b9
    PUSH 0x6a                           ; 004854be
    MOV ESI,dword ptr [EAX + 0x41e8]    ; 004854c0
    PUSH EAX                            ; 004854c6
    MOV dword ptr [0x01c25f78],ESI      ; 004854c7 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004854cd
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004854d2
    LEA ESI,[EBX + 0x24]                ; 004854d5
    PUSH ESI                            ; 004854d8
    MOV EDI,dword ptr [0x01c25590]      ; 004854d9 | DAT_01c25590
    PUSH EDI                            ; 004854df
    MOV [0x01c25f7c],EAX                ; 004854e0 | DAT_01c25f7c
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0 ; 004854e5
        ;   XREF to: 004aafb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0(CBitFont * this_ptr, char * text_string)
    MOV EDI,EAX                         ; 004854ea
    MOV EAX,dword ptr [EBX + 0x14]      ; 004854ec
    ADD ESP,0x8                         ; 004854ef
    ADD EAX,EDI                         ; 004854f2
    PUSH EBX                            ; 004854f4
    MOV dword ptr [EBX + 0x1c],EAX      ; 004854f5
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580 ; 004854f8
        ;   XREF to: 00485580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 004854fd
    MOV EDI,dword ptr [EBX + 0x10]      ; 00485500
    PUSH EBX                            ; 00485503
    ADD EDI,EAX                         ; 00485504
    CALL shape_edittool.cpp_FUN_004855f0 ; 00485506
        ;   XREF to: 004855f0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004855f0()
    ADD ESP,0x4                         ; 0048550b
    PUSH ESI                            ; 0048550e
    MOV EBP,dword ptr [0x01c25590]      ; 0048550f | DAT_01c25590
    PUSH EBP                            ; 00485515
    ADD EDI,EAX                         ; 00485516
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 00485518
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD EDI,EAX                         ; 0048551d
    ADD ESP,0x8                         ; 0048551f
    MOV dword ptr [EBX + 0x18],EDI      ; 00485522
    POP EBP                             ; 00485525
    POP EDI                             ; 00485526
    POP ESI                             ; 00485527
    POP EBX                             ; 00485528
    RET                                 ; 00485529
    MOV ECX,0x5d1e6f                    ; 0048552a
        ;   Label: LAB_0048552a
    MOV ESI,0xa0                        ; 0048552f
    PUSH 0x5d1e85                       ; 00485534
    MOV dword ptr [0x01d046a0],ECX      ; 00485539 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0048553f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00485545
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0048554a
    JMP 0x004854b9                      ; 0048554d
        ;   XREF to: 004854b9 (UNCONDITIONAL_JUMP)  ; LAB_004854b9

