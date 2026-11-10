; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004a859e(CBitFont *param_1,CBitFont *param_2)
;
;
; Called Functions:
;   crt_string.c_strupr_FUN_005ba840
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004a8560
;   engine_font.cpp_CBitFont_openFontFile_FUN_004a7cd0
;   support_trstream.cpp_FUN_0057d390
;   unkaddr_0057b9a0.cpp_FUN_0057ba20
;   unkaddr_0057b9a0.cpp_FUN_0057cc20
;   unkaddr_0057b9a0.cpp_FUN_0057d180
;   unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004a859e
        ;   Label: engine_font.cpp_FUN_004a859e
    PUSH EBX                            ; 004a85a0
    PUSH ESI                            ; 004a85a1
    PUSH EDI                            ; 004a85a2
    PUSH EBP                            ; 004a85a3
    SUB ESP,0x248                       ; 004a85a4
    MOV EBX,dword ptr [ESP + 0x25c]     ; 004a85aa
    MOV EBP,dword ptr [ESP + 0x260]     ; 004a85b1
    LEA EAX,[ESP + 0x200]               ; 004a85b8
    PUSH EAX                            ; 004a85bf
    CALL unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 004a85c0
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004a85c5
    LEA EDX,[EBX + 0x144]               ; 004a85c8
    MOV ESI,EBP                         ; 004a85ce
    MOV EDI,EDX                         ; 004a85d0
    PUSH EDI                            ; 004a85d2
    MOV AL,byte ptr [ESI]               ; 004a85d3
        ;   Label: LAB_004a85d3
    MOV byte ptr [EDI],AL               ; 004a85d5
    CMP AL,0x0                          ; 004a85d7
    JZ 0x004a85eb                       ; 004a85d9
        ;   XREF to: 004a85eb (CONDITIONAL_JUMP)  ; LAB_004a85eb
    MOV AL,byte ptr [ESI + 0x1]         ; 004a85db
    ADD ESI,0x2                         ; 004a85de
    MOV byte ptr [EDI + 0x1],AL         ; 004a85e1
    ADD EDI,0x2                         ; 004a85e4
    CMP AL,0x0                          ; 004a85e7
    JNZ 0x004a85d3                      ; 004a85e9
        ;   XREF to: 004a85d3 (CONDITIONAL_JUMP)  ; LAB_004a85d3
    POP EDI                             ; 004a85eb
        ;   Label: LAB_004a85eb
    PUSH EDX                            ; 004a85ec
    CALL crt_string.c_strupr_FUN_005ba840 ; 004a85ed
        ;   XREF to: 005ba840 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005ba840(char * string)
    ADD ESP,0x4                         ; 004a85f2
    PUSH EBP                            ; 004a85f5
    PUSH 0x5d691b                       ; 004a85f6
    LEA EAX,[ESP + 0x208]               ; 004a85fb
    PUSH EAX                            ; 004a8602
    CALL support_trstream.cpp_FUN_0057d390 ; 004a8603
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d390()
    ADD ESP,0xc                         ; 004a8608
    TEST EAX,EAX                        ; 004a860b
    JNZ 0x004a862c                      ; 004a860d
        ;   XREF to: 004a862c (CONDITIONAL_JUMP)  ; LAB_004a862c
    PUSH 0x0                            ; 004a860f
        ;   Label: LAB_004a860f
    LEA EAX,[ESP + 0x204]               ; 004a8611
    PUSH EAX                            ; 004a8618
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004a8619
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a861e
    ADD ESP,0x248                       ; 004a8621
    POP EBP                             ; 004a8627
    POP EDI                             ; 004a8628
    POP ESI                             ; 004a8629
    POP EBX                             ; 004a862a
    RET                                 ; 004a862b
    PUSH 0xff                           ; 004a862c
        ;   Label: LAB_004a862c
    LEA EAX,[ESP + 0x104]               ; 004a8631
    PUSH EAX                            ; 004a8638
    LEA EAX,[ESP + 0x208]               ; 004a8639
    PUSH EAX                            ; 004a8640
    CALL unkaddr_0057b9a0.cpp_FUN_0057cc20 ; 004a8641
        ;   XREF to: 0057cc20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057cc20()
    ADD ESP,0xc                         ; 004a8646
    MOV EAX,ESP                         ; 004a8649
    PUSH EAX                            ; 004a864b
    PUSH 0x5d691f                       ; 004a864c
    LEA EAX,[ESP + 0x208]               ; 004a8651
    PUSH EAX                            ; 004a8658
    CALL unkaddr_0057b9a0.cpp_FUN_0057ba20 ; 004a8659
        ;   XREF to: 0057ba20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057ba20()
    ADD ESP,0xc                         ; 004a865e
    PUSH 0xff                           ; 004a8661
    LEA EAX,[ESP + 0x104]               ; 004a8666
    PUSH EAX                            ; 004a866d
    LEA EAX,[ESP + 0x208]               ; 004a866e
    PUSH EAX                            ; 004a8675
    CALL unkaddr_0057b9a0.cpp_FUN_0057cc20 ; 004a8676
        ;   XREF to: 0057cc20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057cc20()
    ADD ESP,0xc                         ; 004a867b
    LEA EAX,[ESP + 0x22c]               ; 004a867e
    PUSH EAX                            ; 004a8685
    LEA EAX,[ESP + 0x22c]               ; 004a8686
    PUSH EAX                            ; 004a868d
    PUSH 0x5d6923                       ; 004a868e
    LEA EAX,[ESP + 0x20c]               ; 004a8693
    PUSH EAX                            ; 004a869a
    CALL unkaddr_0057b9a0.cpp_FUN_0057ba20 ; 004a869b
        ;   XREF to: 0057ba20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057ba20()
    ADD ESP,0x10                        ; 004a86a0
    PUSH 0xff                           ; 004a86a3
    LEA EAX,[ESP + 0x104]               ; 004a86a8
    PUSH EAX                            ; 004a86af
    LEA EAX,[ESP + 0x208]               ; 004a86b0
    PUSH EAX                            ; 004a86b7
    CALL unkaddr_0057b9a0.cpp_FUN_0057cc20 ; 004a86b8
        ;   XREF to: 0057cc20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057cc20()
    ADD ESP,0xc                         ; 004a86bd
    LEA EAX,[ESP + 0x234]               ; 004a86c0
    PUSH EAX                            ; 004a86c7
    LEA EAX,[ESP + 0x234]               ; 004a86c8
    PUSH EAX                            ; 004a86cf
    PUSH 0x5d692a                       ; 004a86d0
    LEA EAX,[ESP + 0x20c]               ; 004a86d5
    PUSH EAX                            ; 004a86dc
    CALL unkaddr_0057b9a0.cpp_FUN_0057ba20 ; 004a86dd
        ;   XREF to: 0057ba20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057ba20()
    ADD ESP,0x10                        ; 004a86e2
    PUSH 0xff                           ; 004a86e5
    LEA EAX,[ESP + 0x104]               ; 004a86ea
    PUSH EAX                            ; 004a86f1
    LEA EAX,[ESP + 0x208]               ; 004a86f2
    PUSH EAX                            ; 004a86f9
    CALL unkaddr_0057b9a0.cpp_FUN_0057cc20 ; 004a86fa
        ;   XREF to: 0057cc20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057cc20()
    ADD ESP,0xc                         ; 004a86ff
    LEA EAX,[ESP + 0x238]               ; 004a8702
    PUSH EAX                            ; 004a8709
    PUSH 0x5d6931                       ; 004a870a
    LEA EAX,[ESP + 0x208]               ; 004a870f
    PUSH EAX                            ; 004a8716
    CALL unkaddr_0057b9a0.cpp_FUN_0057ba20 ; 004a8717
        ;   XREF to: 0057ba20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057ba20()
    ADD ESP,0xc                         ; 004a871c
    PUSH 0xff                           ; 004a871f
    LEA EAX,[ESP + 0x104]               ; 004a8724
    PUSH EAX                            ; 004a872b
    LEA EAX,[ESP + 0x208]               ; 004a872c
    PUSH EAX                            ; 004a8733
    CALL unkaddr_0057b9a0.cpp_FUN_0057cc20 ; 004a8734
        ;   XREF to: 0057cc20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057cc20()
    ADD ESP,0xc                         ; 004a8739
    LEA EAX,[ESP + 0x23c]               ; 004a873c
    PUSH EAX                            ; 004a8743
    PUSH 0x5d6935                       ; 004a8744
    LEA EAX,[ESP + 0x208]               ; 004a8749
    PUSH EAX                            ; 004a8750
    CALL unkaddr_0057b9a0.cpp_FUN_0057ba20 ; 004a8751
        ;   XREF to: 0057ba20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057ba20()
    ADD ESP,0xc                         ; 004a8756
    PUSH 0xff                           ; 004a8759
    LEA EAX,[ESP + 0x104]               ; 004a875e
    PUSH EAX                            ; 004a8765
    LEA EAX,[ESP + 0x208]               ; 004a8766
    PUSH EAX                            ; 004a876d
    CALL unkaddr_0057b9a0.cpp_FUN_0057cc20 ; 004a876e
        ;   XREF to: 0057cc20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057cc20()
    ADD ESP,0xc                         ; 004a8773
    LEA EAX,[ESP + 0x244]               ; 004a8776
    PUSH EAX                            ; 004a877d
    LEA EAX,[ESP + 0x244]               ; 004a877e
    PUSH EAX                            ; 004a8785
    PUSH 0x5d6939                       ; 004a8786
    LEA EAX,[ESP + 0x20c]               ; 004a878b
    PUSH EAX                            ; 004a8792
    CALL unkaddr_0057b9a0.cpp_FUN_0057ba20 ; 004a8793
        ;   XREF to: 0057ba20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057ba20()
    ADD ESP,0x10                        ; 004a8798
    LEA EAX,[ESP + 0x200]               ; 004a879b
    PUSH EAX                            ; 004a87a2
    CALL unkaddr_0057b9a0.cpp_FUN_0057d180 ; 004a87a3
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057d180()
    ADD ESP,0x4                         ; 004a87a8
    CMP dword ptr [ESP + 0x230],0x20    ; 004a87ab
    JZ 0x004a8817                       ; 004a87b3
        ;   XREF to: 004a8817 (CONDITIONAL_JUMP)  ; LAB_004a8817
    MOV EAX,dword ptr [ESP + 0x238]     ; 004a87b5
        ;   Label: LAB_004a87b5
    PUSH EAX                            ; 004a87bc
    MOV EDX,dword ptr [ESP + 0x238]     ; 004a87bd
    PUSH EDX                            ; 004a87c4
    MOV ECX,dword ptr [ESP + 0x238]     ; 004a87c5
    PUSH ECX                            ; 004a87cc
    MOV ESI,dword ptr [ESP + 0x238]     ; 004a87cd
    PUSH ESI                            ; 004a87d4
    MOV EDI,dword ptr [ESP + 0x238]     ; 004a87d5
    PUSH EDI                            ; 004a87dc
    LEA EAX,[ESP + 0x14]                ; 004a87dd
    PUSH EAX                            ; 004a87e1
    PUSH EBX                            ; 004a87e2
    CALL engine_font.cpp_CBitFont_loadNewBitmap_FUN_004a8560 ; 004a87e3
        ;   XREF to: 004a8560 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_loadNewBitmap_FUN_004a8560(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x1c                        ; 004a87e8
    MOV EAX,dword ptr [ESP + 0x23c]     ; 004a87eb
        ;   Label: LAB_004a87eb
    MOV dword ptr [EBX + 0x3668],EAX    ; 004a87f2
    MOV EAX,dword ptr [ESP + 0x240]     ; 004a87f8
    MOV EDX,dword ptr [ESP + 0x244]     ; 004a87ff
    MOV dword ptr [EBX + 0x41fc],EAX    ; 004a8806
    MOV dword ptr [EBX + 0x4200],EDX    ; 004a880c
    JMP 0x004a860f                      ; 004a8812
        ;   XREF to: 004a860f (UNCONDITIONAL_JUMP)  ; LAB_004a860f
    CMP dword ptr [ESP + 0x234],0xff    ; 004a8817
        ;   Label: LAB_004a8817
    JNZ 0x004a87b5                      ; 004a8822
        ;   XREF to: 004a87b5 (CONDITIONAL_JUMP)  ; LAB_004a87b5
    MOV ESI,dword ptr [ESP + 0x238]     ; 004a8824
    PUSH ESI                            ; 004a882b
    MOV EDI,dword ptr [ESP + 0x230]     ; 004a882c
    PUSH EDI                            ; 004a8833
    MOV EBP,dword ptr [ESP + 0x230]     ; 004a8834
    PUSH EBP                            ; 004a883b
    LEA EAX,[ESP + 0xc]                 ; 004a883c
    PUSH EAX                            ; 004a8840
    PUSH EBX                            ; 004a8841
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004a7cd0 ; 004a8842
        ;   XREF to: 004a7cd0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004a7cd0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 004a8847
    JMP 0x004a87eb                      ; 004a884a
        ;   XREF to: 004a87eb (UNCONDITIONAL_JUMP)  ; LAB_004a87eb

