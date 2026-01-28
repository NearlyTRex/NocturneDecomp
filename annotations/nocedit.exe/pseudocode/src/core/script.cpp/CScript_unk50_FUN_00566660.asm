; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_script_cpp_CScript_unk50_FUN_00566660(void)
;
;
; XREF[2]:
;   core_msnedit.cpp_FUN_005374b0 at 005374d8
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053aa0a
;
; Referenced Globals:
;   CBitFont* g_ConsoleFont
;   CEdScrollBar CEdScrollBar_0310fcd8
;   undefined4 CEdScrollBar_0310fcd8.current_value
;   undefined4 CEdScrollBar_0310fcd8.max_value
;   CEdScrollBar CEdScrollBar_0310fd0c
;   undefined4 CEdScrollBar_0310fd0c.current_value
;   undefined4 CEdScrollBar_0310fd0c.max_value
;   undefined4 DAT_031141d0
;   undefined4 DAT_031141d4
;   undefined4 DAT_031141d8
;   undefined4 DAT_031141dc
;   undefined4 DAT_031141e0
;   undefined4 DAT_031141e4
;   undefined4 DAT_031141e8
;   undefined4 DAT_031141ec
;   ... and 7 more
;
; Called Functions:
;   core_script.cpp_FUN_005644e0
;   core_script.cpp_FUN_00566800
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
;   shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
;   shape_edittool.cpp_calculateGridWidth_FUN_004a6490
;   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;   shape_edittool.cpp_getFontCharSpacing_FUN_004a6f00
;   shape_edittool.cpp_getFontMaxCharWidth_FUN_004a6ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566660
        ;   Label: core_script.cpp_CScript_unk50_FUN_00566660
    PUSH ESI                            ; 00566661
    PUSH EDI                            ; 00566662
    PUSH EBP                            ; 00566663
    MOV EDI,dword ptr [ESP + 0x14]      ; 00566664
    MOV ESI,dword ptr [ESP + 0x18]      ; 00566668
    PUSH 0x4d                           ; 0056666c
    MOV EAX,[0x020a5728]                ; 0056666e | g_ConsoleFont
    PUSH EAX                            ; 00566673
    MOV [0x03114200],EAX                ; 00566674 | DAT_03114200
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0 ; 00566679
        ;   XREF to: 004d01a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont * font, int char_code)
    ADD ESP,0x8                         ; 0056667e
    MOV ECX,dword ptr [0x03114200]      ; 00566681 | DAT_03114200
    PUSH ECX                            ; 00566687
    MOV EBX,EAX                         ; 00566688
    CALL shape_edittool.cpp_getFontCharSpacing_FUN_004a6f00 ; 0056668a
        ;   XREF to: 004a6f00 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontCharSpacing_FUN_004a6f00(CBitFont * font_ptr)
    ADD EBX,EAX                         ; 0056668f
    ADD ESP,0x4                         ; 00566691
    MOV dword ptr [0x03114204],EBX      ; 00566694 | DAT_03114204
    MOV EBX,dword ptr [0x03114200]      ; 0056669a | DAT_03114200
    PUSH EBX                            ; 005666a0
    CALL shape_edittool.cpp_getFontMaxCharWidth_FUN_004a6ef0 ; 005666a1
        ;   XREF to: 004a6ef0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontMaxCharWidth_FUN_004a6ef0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 005666a6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005666a9
    MOV dword ptr [0x031141d4],EDX      ; 005666ad | DAT_031141d4
    MOV EDX,dword ptr [ESP + 0x20]      ; 005666b3
    INC EDX                             ; 005666b7
    MOV dword ptr [0x031141d8],EDX      ; 005666b8 | DAT_031141d8
    MOV EDX,dword ptr [ESP + 0x24]      ; 005666be
    INC EDX                             ; 005666c2
    MOV dword ptr [0x031141dc],EDX      ; 005666c3 | DAT_031141dc
    MOV EDX,dword ptr [0x031141d8]      ; 005666c9 | DAT_031141d8
    MOV [0x03114208],EAX                ; 005666cf | DAT_03114208
    MOV dword ptr [0x031141f8],EDX      ; 005666d4 | DAT_031141f8
    MOV EDX,dword ptr [0x031141dc]      ; 005666da | DAT_031141dc
    MOV dword ptr [0x031141d0],ESI      ; 005666e0 | DAT_031141d0
    MOV dword ptr [0x031141fc],EDX      ; 005666e6 | INT_031141fc
    SUB EDX,EAX                         ; 005666ec
    MOV dword ptr [0x031141f0],ESI      ; 005666ee | DAT_031141f0
    MOV dword ptr [0x031141f4],EDX      ; 005666f4 | DAT_031141f4
    CALL shape_edittool.cpp_calculateGridHeight_FUN_004a64b0 ; 005666fa
        ;   XREF to: 004a64b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridHeight_FUN_004a64b0()
    MOV EBX,EAX                         ; 005666ff
    CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490 ; 00566701
        ;   XREF to: 004a6490 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridWidth_FUN_004a6490()
    MOV EDX,dword ptr [0x031141d0]      ; 00566706 | DAT_031141d0
    MOV dword ptr [0x031141e0],EDX      ; 0056670c | DAT_031141e0
    MOV EDX,dword ptr [0x031141d4]      ; 00566712 | DAT_031141d4
    INC EDX                             ; 00566718
    MOV ESI,dword ptr [0x031141f4]      ; 00566719 | DAT_031141f4
    MOV dword ptr [0x031141e4],EDX      ; 0056671f | DAT_031141e4
    MOV EDX,dword ptr [0x031141d8]      ; 00566725 | DAT_031141d8
    PUSH ESI                            ; 0056672b
    SUB EDX,EAX                         ; 0056672c
    MOV EAX,[0x031141f4]                ; 0056672e | DAT_031141f4
    PUSH EDX                            ; 00566733
    SUB EAX,EBX                         ; 00566734
    PUSH EAX                            ; 00566736
    MOV dword ptr [0x031141e8],EDX      ; 00566737 | DAT_031141e8
    MOV EDX,dword ptr [0x031141e0]      ; 0056673d | DAT_031141e0
    PUSH EDX                            ; 00566743
    PUSH 0x310fd0c                      ; 00566744 | CEdScrollBar_0310fd0c
    MOV [0x031141ec],EAX                ; 00566749 | DAT_031141ec
    CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60 ; 0056674e
        ;   XREF to: 004a5b60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, ...)
    ADD ESP,0x14                        ; 00566753
    MOV ECX,dword ptr [0x031141ec]      ; 00566756 | DAT_031141ec
    PUSH ECX                            ; 0056675c
    MOV EBX,dword ptr [0x031141d8]      ; 0056675d | DAT_031141d8
    PUSH EBX                            ; 00566763
    MOV ESI,dword ptr [0x031141e4]      ; 00566764 | DAT_031141e4
    PUSH ESI                            ; 0056676a
    MOV EBP,dword ptr [0x031141e8]      ; 0056676b | DAT_031141e8
    PUSH EBP                            ; 00566771
    PUSH 0x310fcd8                      ; 00566772 | CEdScrollBar_0310fcd8
    CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60 ; 00566777
        ;   XREF to: 004a5b60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, ...)
    MOV EDX,dword ptr [0x031141ec]      ; 0056677c | DAT_031141ec
    SUB EDX,dword ptr [0x031141e4]      ; 00566782 | DAT_031141e4
    MOV EBX,dword ptr [0x03114208]      ; 00566788 | DAT_03114208
    MOV EAX,EDX                         ; 0056678e
    SAR EDX,0x1f                        ; 00566790
    IDIV EBX                            ; 00566793
    MOV ECX,dword ptr [0x031141e0]      ; 00566795 | DAT_031141e0
    MOV EDX,dword ptr [0x031141e8]      ; 0056679b | DAT_031141e8
    MOV EBX,dword ptr [0x03114204]      ; 005667a1 | DAT_03114204
    SUB EDX,ECX                         ; 005667a7
    MOV [0x0310fce0],EAX                ; 005667a9 | CEdScrollBar_0310fcd8.max_value
    MOV EAX,EDX                         ; 005667ae
    SAR EDX,0x1f                        ; 005667b0
    IDIV EBX                            ; 005667b3
    ADD ESP,0x14                        ; 005667b5
    LEA ESI,[EDI + 0x38]                ; 005667b8
    PUSH ESI                            ; 005667bb
    XOR EBX,EBX                         ; 005667bc
    MOV [0x0310fd14],EAX                ; 005667be | CEdScrollBar_0310fd0c.max_value
    MOV dword ptr [0x0310fd10],EBX      ; 005667c3 | CEdScrollBar_0310fd0c.current_value
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 005667c9
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 005667ce
    MOV [0x0310fcdc],EAX                ; 005667d1 | CEdScrollBar_0310fcd8.current_value
    PUSH ESI                            ; 005667d6
        ;   Label: LAB_005667d6
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 005667d7
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 005667dc
    CMP EBX,EAX                         ; 005667df
    JL 0x005667ed                       ; 005667e1
        ;   XREF to: 005667ed (CONDITIONAL_JUMP)  ; LAB_005667ed
    CALL core_script.cpp_FUN_005644e0   ; 005667e3
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005644e0()
    POP EBP                             ; 005667e8
    POP EDI                             ; 005667e9
    POP ESI                             ; 005667ea
    POP EBX                             ; 005667eb
    RET                                 ; 005667ec
    PUSH EBX                            ; 005667ed
        ;   Label: LAB_005667ed
    PUSH EDI                            ; 005667ee
    CALL core_script.cpp_FUN_00566800   ; 005667ef
        ;   XREF to: 00566800 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566800()
    INC EBX                             ; 005667f4
    ADD ESP,0x8                         ; 005667f5
    JMP 0x005667d6                      ; 005667f8
        ;   XREF to: 005667d6 (UNCONDITIONAL_JUMP)  ; LAB_005667d6

