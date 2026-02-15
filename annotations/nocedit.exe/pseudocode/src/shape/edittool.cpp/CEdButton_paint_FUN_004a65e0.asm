; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(CEdButton *this_ptr,int draw_border_flag)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   draw_border_flag
; Local Variables:
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0xdb]:1  local_db
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005076ec
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 005072b1
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 at 004a4f43
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 at 0049e380
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 at 0049efc5
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049dd23
;
; Referenced Globals:
;   CBitFont* g_EditorFont
;   int g_UITextColor
;   int g_ClipTop
;   int g_ActiveRenderColor
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   engine_2d.c_drawHLine_FUN_00402ee0
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   shape_edittool.cpp_draw3DBorder_FUN_004a58f0
;   shape_edittool.cpp_drawDashedLine_FUN_0049d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a65e0
        ;   Label: shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
    PUSH ESI                            ; 004a65e1
    PUSH EDI                            ; 004a65e2
    PUSH EBP                            ; 004a65e3
    SUB ESP,0xcc                        ; 004a65e4
    MOV EBX,dword ptr [ESP + 0xe0]      ; 004a65ea
    MOV EDX,dword ptr [EBX + 0x18]      ; 004a65f1
    PUSH EDX                            ; 004a65f4
    MOV ECX,dword ptr [EBX + 0x14]      ; 004a65f5
    PUSH ECX                            ; 004a65f8
    MOV EDI,dword ptr [EBX + 0x10]      ; 004a65f9
    PUSH EDI                            ; 004a65fc
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a65fd
    MOV ESI,dword ptr [0x02d0255c]      ; 004a6600 | g_ClipTop
    PUSH EAX                            ; 004a6606
    MOV [0x02d0255c],EAX                ; 004a6607 | g_ClipTop
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a660c
    PUSH EAX                            ; 004a660f
    CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0 ; 004a6610
        ;   XREF to: 004a58f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_draw3DBorder_FUN_004a58f0(int left, int top, int width, int height, ...)
    ADD ESP,0x14                        ; 004a6615
    MOV dword ptr [0x02d0255c],ESI      ; 004a6618 | g_ClipTop
    LEA ESI,[EBX + 0x1c]                ; 004a661e
    PUSH ESI                            ; 004a6621
    MOV EDX,dword ptr [0x02cf1cd0]      ; 004a6622 | g_EditorFont
    PUSH EDX                            ; 004a6628
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004a6629
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004a662e
    PUSH ESI                            ; 004a6631
    MOV ECX,dword ptr [0x02cf1cd0]      ; 004a6632 | g_EditorFont
    PUSH ECX                            ; 004a6638
    MOV EBP,EAX                         ; 004a6639
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40 ; 004a663b
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 004a6640
    PUSH 0x41                           ; 004a6643
    MOV EDI,EAX                         ; 004a6645
    MOV EAX,[0x02cf1cd0]                ; 004a6647 | g_EditorFont
    PUSH EAX                            ; 004a664c
    CALL engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200 ; 004a664d
        ;   XREF to: 004d0200 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200(CBitFont * this_ptr, int char_code)
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a6652
    ADD EDI,EAX                         ; 004a6655
    ADD EDX,dword ptr [EBX + 0x8]       ; 004a6657
    SUB EDX,EBP                         ; 004a665a
    MOV EAX,EDX                         ; 004a665c
    SAR EDX,0x1f                        ; 004a665e
    SUB EAX,EDX                         ; 004a6661
    SAR EAX,0x1                         ; 004a6663
    MOV ECX,dword ptr [EBX + 0x14]      ; 004a6665
    MOV EDX,dword ptr [EBX + 0xc]       ; 004a6668
    ADD EDX,ECX                         ; 004a666b
    MOV EBP,dword ptr [EBX + 0x18]      ; 004a666d
    SUB EDX,EDI                         ; 004a6670
    ADD EBP,EAX                         ; 004a6672
    MOV EAX,EDX                         ; 004a6674
    SAR EDX,0x1f                        ; 004a6676
    SUB EAX,EDX                         ; 004a6679
    SAR EAX,0x1                         ; 004a667b
    ADD ESP,0x8                         ; 004a667d
    PUSH -0x1                           ; 004a6680
    MOV EDI,dword ptr [0x02cf2ae8]      ; 004a6682 | g_UITextColor
    MOV EDX,dword ptr [EBX + 0x18]      ; 004a6688
    PUSH EDI                            ; 004a668b
    ADD EDX,EAX                         ; 004a668c
    PUSH EDX                            ; 004a668e
    PUSH EBP                            ; 004a668f
    PUSH ESI                            ; 004a6690
    MOV dword ptr [ESP + 0xdc],EDX      ; 004a6691
    MOV EDX,dword ptr [0x02cf1cd0]      ; 004a6698 | g_EditorFont
    PUSH EDX                            ; 004a669e
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004a669f
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004a66a4
    MOV EAX,[0x02cf2ae8]                ; 004a66a7 | g_UITextColor
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004a66ac
    MOV [0x02d02570],EAX                ; 004a66b3 | g_ActiveRenderColor
    TEST ECX,ECX                        ; 004a66b8
    JNZ 0x004a6702                      ; 004a66ba
        ;   XREF to: 004a6702 (CONDITIONAL_JUMP)  ; LAB_004a6702
    MOV EDI,ESP                         ; 004a66bc
        ;   Label: LAB_004a66bc
    LEA ESI,[EBX + 0x1c]                ; 004a66be
    PUSH EDI                            ; 004a66c1
    MOV AL,byte ptr [ESI]               ; 004a66c2
        ;   Label: LAB_004a66c2
    MOV byte ptr [EDI],AL               ; 004a66c4
    CMP AL,0x0                          ; 004a66c6
    JZ 0x004a66da                       ; 004a66c8
        ;   XREF to: 004a66da (CONDITIONAL_JUMP)  ; LAB_004a66da
    MOV AL,byte ptr [ESI + 0x1]         ; 004a66ca
    ADD ESI,0x2                         ; 004a66cd
    MOV byte ptr [EDI + 0x1],AL         ; 004a66d0
    ADD EDI,0x2                         ; 004a66d3
    CMP AL,0x0                          ; 004a66d6
    JNZ 0x004a66c2                      ; 004a66d8
        ;   XREF to: 004a66c2 (CONDITIONAL_JUMP)  ; LAB_004a66c2
    POP EDI                             ; 004a66da
        ;   Label: LAB_004a66da
    XOR ESI,ESI                         ; 004a66db
    MOV EDI,ESP                         ; 004a66dd
        ;   Label: LAB_004a66dd
    SUB ECX,ECX                         ; 004a66df
    DEC ECX                             ; 004a66e1
    XOR EAX,EAX                         ; 004a66e2
    SCASB.REPNE ES:EDI                  ; 004a66e4
    NOT ECX                             ; 004a66e6
    DEC ECX                             ; 004a66e8
    CMP ESI,ECX                         ; 004a66e9
    JNC 0x004a672a                      ; 004a66eb
        ;   XREF to: 004a672a (CONDITIONAL_JUMP)  ; LAB_004a672a
    XOR EAX,EAX                         ; 004a66ed
    MOV AL,byte ptr [ESP + ESI*0x1]     ; 004a66ef
    PUSH EAX                            ; 004a66f2
    INC ESI                             ; 004a66f3
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004a66f4
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004a66f9
    MOV byte ptr [ESP + ESI*0x1 + -0x1],AL ; 004a66fc
    JMP 0x004a66dd                      ; 004a6700
        ;   XREF to: 004a66dd (UNCONDITIONAL_JUMP)  ; LAB_004a66dd
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a6702
        ;   Label: LAB_004a6702
    PUSH 0x1                            ; 004a6705
    SUB EAX,0x4                         ; 004a6707
    PUSH EAX                            ; 004a670a
    MOV EAX,dword ptr [EBX + 0x10]      ; 004a670b
    SUB EAX,0x5                         ; 004a670e
    PUSH EAX                            ; 004a6711
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a6712
    ADD EAX,0x3                         ; 004a6715
    PUSH EAX                            ; 004a6718
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a6719
    ADD EAX,0x3                         ; 004a671c
    PUSH EAX                            ; 004a671f
    CALL shape_edittool.cpp_drawDashedLine_FUN_0049d290 ; 004a6720
        ;   XREF to: 0049d290 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_drawDashedLine_FUN_0049d290(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004a6725
    JMP 0x004a66bc                      ; 004a6728
        ;   XREF to: 004a66bc (UNCONDITIONAL_JUMP)  ; LAB_004a66bc
    XOR EAX,EAX                         ; 004a672a
        ;   Label: LAB_004a672a
    MOV AL,byte ptr [EBX + 0x4]         ; 004a672c
    PUSH EAX                            ; 004a672f
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004a6730
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004a6735
    MOV ESI,ESP                         ; 004a6738
    MOV DL,AL                           ; 004a673a
    MOV AL,byte ptr [ESI]               ; 004a673c
        ;   Label: LAB_004a673c
    CMP AL,DL                           ; 004a673e
    JZ 0x004a6754                       ; 004a6740
        ;   XREF to: 004a6754 (CONDITIONAL_JUMP)  ; LAB_004a6754
    CMP AL,0x0                          ; 004a6742
    JZ 0x004a6752                       ; 004a6744
        ;   XREF to: 004a6752 (CONDITIONAL_JUMP)  ; LAB_004a6752
    INC ESI                             ; 004a6746
    MOV AL,byte ptr [ESI]               ; 004a6747
    CMP AL,DL                           ; 004a6749
    JZ 0x004a6754                       ; 004a674b
        ;   XREF to: 004a6754 (CONDITIONAL_JUMP)  ; LAB_004a6754
    INC ESI                             ; 004a674d
    CMP AL,0x0                          ; 004a674e
    JNZ 0x004a673c                      ; 004a6750
        ;   XREF to: 004a673c (CONDITIONAL_JUMP)  ; LAB_004a673c
    SUB ESI,ESI                         ; 004a6752
        ;   Label: LAB_004a6752
    MOV EDX,ESI                         ; 004a6754
        ;   Label: LAB_004a6754
    TEST ESI,ESI                        ; 004a6756
    JNZ 0x004a6765                      ; 004a6758
        ;   XREF to: 004a6765 (CONDITIONAL_JUMP)  ; LAB_004a6765
    ADD ESP,0xcc                        ; 004a675a
    POP EBP                             ; 004a6760
    POP EDI                             ; 004a6761
    POP ESI                             ; 004a6762
    POP EBX                             ; 004a6763
    RET                                 ; 004a6764
    MOV EDI,ESP                         ; 004a6765
        ;   Label: LAB_004a6765
    LEA ESI,[EBX + 0x1c]                ; 004a6767
    PUSH EDI                            ; 004a676a
    MOV AL,byte ptr [ESI]               ; 004a676b
        ;   Label: LAB_004a676b
    MOV byte ptr [EDI],AL               ; 004a676d
    CMP AL,0x0                          ; 004a676f
    JZ 0x004a6783                       ; 004a6771
        ;   XREF to: 004a6783 (CONDITIONAL_JUMP)  ; LAB_004a6783
    MOV AL,byte ptr [ESI + 0x1]         ; 004a6773
    ADD ESI,0x2                         ; 004a6776
    MOV byte ptr [EDI + 0x1],AL         ; 004a6779
    ADD EDI,0x2                         ; 004a677c
    CMP AL,0x0                          ; 004a677f
    JNZ 0x004a676b                      ; 004a6781
        ;   XREF to: 004a676b (CONDITIONAL_JUMP)  ; LAB_004a676b
    POP EDI                             ; 004a6783
        ;   Label: LAB_004a6783
    MOV EAX,ESP                         ; 004a6784
    PUSH EAX                            ; 004a6786
    MOV ESI,dword ptr [0x02cf1cd0]      ; 004a6787 | g_EditorFont
    PUSH ESI                            ; 004a678d
    MOV byte ptr [EDX],0x0              ; 004a678e
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004a6791
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,dword ptr [0x02cf1cd0]      ; 004a6796 | g_EditorFont
    MOV EDX,dword ptr [EDX + 0x3174]    ; 004a679c
    LEA EDI,[EAX + EDX*0x1]             ; 004a67a2
    XOR EAX,EAX                         ; 004a67a5
    ADD ESP,0x8                         ; 004a67a7
    MOV AL,byte ptr [EBX + 0x4]         ; 004a67aa
    PUSH EAX                            ; 004a67ad
    MOVZX ESI,byte ptr [EBX + 0x1c]     ; 004a67ae
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004a67b2
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004a67b7
    CMP EAX,ESI                         ; 004a67ba
    JNZ 0x004a6823                      ; 004a67bc
        ;   XREF to: 004a6823 (CONDITIONAL_JUMP)  ; LAB_004a6823
    XOR EAX,ESI                         ; 004a67be
    PUSH 0x41                           ; 004a67c0
        ;   Label: LAB_004a67c0
    MOV EDI,dword ptr [0x02cf1cd0]      ; 004a67c2 | g_EditorFont
    PUSH EDI                            ; 004a67c8
    ADD EBP,EAX                         ; 004a67c9
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004a67cb
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004a67d0
    INC EAX                             ; 004a67d3
    MOV EDX,dword ptr [ESP + 0xc8]      ; 004a67d4
    ADD EDX,EAX                         ; 004a67db
    MOV EAX,[0x02cf2ae8]                ; 004a67dd | g_UITextColor
    MOV [0x02d02570],EAX                ; 004a67e2 | g_ActiveRenderColor
    XOR EAX,EAX                         ; 004a67e7
    MOV AL,byte ptr [EBX + 0x4]         ; 004a67e9
    PUSH EAX                            ; 004a67ec
    MOV ECX,dword ptr [0x02cf1cd0]      ; 004a67ed | g_EditorFont
    PUSH ECX                            ; 004a67f3
    MOV dword ptr [ESP + 0xd0],EDX      ; 004a67f4
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0 ; 004a67fb
        ;   XREF to: 004d01a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont * font, int char_code)
    ADD EAX,EBP                         ; 004a6800
    ADD ESP,0x8                         ; 004a6802
    DEC EAX                             ; 004a6805
    PUSH EAX                            ; 004a6806
    MOV EBX,dword ptr [ESP + 0xcc]      ; 004a6807
    PUSH EBX                            ; 004a680e
    PUSH EBP                            ; 004a680f
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004a6810
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 004a6815
    ADD ESP,0xcc                        ; 004a6818
    POP EBP                             ; 004a681e
    POP EDI                             ; 004a681f
    POP ESI                             ; 004a6820
    POP EBX                             ; 004a6821
    RET                                 ; 004a6822
    MOV EAX,EDI                         ; 004a6823
        ;   Label: LAB_004a6823
    JMP 0x004a67c0                      ; 004a6825
        ;   XREF to: 004a67c0 (UNCONDITIONAL_JUMP)  ; LAB_004a67c0

