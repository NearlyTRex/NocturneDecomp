; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00485610(CEdCheck *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   engine_2d.c_clipLineGlobal_FUN_00402ca0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0
;   engine_font.cpp_FUN_004a8df0
;   engine_mini3d.cpp_setColor_FUN_004f8e20
;   shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004855c0
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580
;   shape_edittool.cpp_FUN_00483ea0
;   shape_edittool.cpp_FUN_004855f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485610
        ;   Label: shape_edittool.cpp_FUN_00485610
    PUSH ESI                            ; 00485611
    PUSH EDI                            ; 00485612
    PUSH EBP                            ; 00485613
    SUB ESP,0x8                         ; 00485614
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00485617
    PUSH EBX                            ; 0048561b
    MOV ESI,dword ptr [EBX + 0x14]      ; 0048561c
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0048561f
    MOV EDI,dword ptr [EBX + 0x10]      ; 00485622
    ADD ESI,ECX                         ; 00485625
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004855c0 ; 00485627
        ;   XREF to: 004855c0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004855c0(CEdCheck * this_ptr)
    MOV EDX,ESI                         ; 0048562c
    SUB EDX,EAX                         ; 0048562e
    MOV EAX,EDX                         ; 00485630
    SAR EDX,0x1f                        ; 00485632
    SUB EAX,EDX                         ; 00485635
    SAR EAX,0x1                         ; 00485637
    ADD ESP,0x4                         ; 00485639
    PUSH EBX                            ; 0048563c
    MOV ESI,EAX                         ; 0048563d
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580 ; 0048563f
        ;   XREF to: 00485580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 00485644
    PUSH EBX                            ; 00485647
    LEA EBP,[EDI + EAX*0x1]             ; 00485648
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004855c0 ; 0048564b
        ;   XREF to: 004855c0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004855c0(CEdCheck * this_ptr)
    MOV EDX,ESI                         ; 00485650
    ADD ESP,0x4                         ; 00485652
    ADD EDX,EAX                         ; 00485655
    LEA EAX,[EBX + 0x24]                ; 00485657
    PUSH EAX                            ; 0048565a
    MOV dword ptr [ESP + 0x8],EDX       ; 0048565b
    MOV EDX,dword ptr [0x01c25590]      ; 0048565f | DAT_01c25590
    PUSH EDX                            ; 00485665
    MOV dword ptr [ESP + 0x8],EAX       ; 00485666
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0 ; 0048566a
        ;   XREF to: 004aafb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0048566f
    PUSH -0x1                           ; 00485672
    MOV ECX,dword ptr [EBX + 0xc]       ; 00485674
    MOV EDX,dword ptr [EBX + 0x14]      ; 00485677
    PUSH ECX                            ; 0048567a
    ADD EDX,dword ptr [EBX + 0x1c]      ; 0048567b
    SUB EDX,EAX                         ; 0048567e
    MOV EAX,EDX                         ; 00485680
    SAR EDX,0x1f                        ; 00485682
    SUB EAX,EDX                         ; 00485685
    SAR EAX,0x1                         ; 00485687
    PUSH EAX                            ; 00485689
    PUSH EBX                            ; 0048568a
    CALL shape_edittool.cpp_FUN_004855f0 ; 0048568b
        ;   XREF to: 004855f0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004855f0()
    ADD ESP,0x4                         ; 00485690
    ADD EAX,EBP                         ; 00485693
    PUSH EAX                            ; 00485695
    MOV EAX,dword ptr [ESP + 0x10]      ; 00485696
    PUSH EAX                            ; 0048569a
    MOV EDX,dword ptr [0x01c25590]      ; 0048569b | DAT_01c25590
    PUSH EDX                            ; 004856a1
    CALL engine_font.cpp_FUN_004a8df0   ; 004856a2
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004856a7
    MOV ECX,dword ptr [EBX + 0x20]      ; 004856aa
    PUSH ECX                            ; 004856ad
    MOV EAX,dword ptr [ESP + 0x8]       ; 004856ae
    PUSH EAX                            ; 004856b2
    PUSH EBP                            ; 004856b3
    PUSH ESI                            ; 004856b4
    PUSH EDI                            ; 004856b5
    CALL shape_edittool.cpp_FUN_00483ea0 ; 004856b6
        ;   XREF to: 00483ea0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00483ea0()
    MOV EDX,dword ptr [EBX + 0x20]      ; 004856bb
    ADD ESP,0x14                        ; 004856be
    TEST EDX,EDX                        ; 004856c1
    JZ 0x00485709                       ; 004856c3
        ;   XREF to: 00485709 (CONDITIONAL_JUMP)  ; LAB_00485709
    INC ESI                             ; 004856c5
    INC EDI                             ; 004856c6
    CMP dword ptr [EBX + 0x4],0x1       ; 004856c7
        ;   Label: LAB_004856c7
    JNZ 0x00485701                      ; 004856cb
        ;   XREF to: 00485701 (CONDITIONAL_JUMP)  ; LAB_00485701
    MOV EDX,dword ptr [0x01c25f84]      ; 004856cd | DAT_01c25f84
    TEST EDX,EDX                        ; 004856d3
    JNZ 0x00485715                      ; 004856d5
        ;   XREF to: 00485715 (CONDITIONAL_JUMP)  ; LAB_00485715
    MOV dword ptr [0x01c35e60],EDX      ; 004856d7 | DAT_01c35e60
    MOV EBX,dword ptr [ESP + 0x4]       ; 004856dd
        ;   Label: LAB_004856dd
    SUB EBX,0x2                         ; 004856e1
    PUSH EBX                            ; 004856e4
    SUB EBP,0x2                         ; 004856e5
    PUSH EBP                            ; 004856e8
    INC ESI                             ; 004856e9
    PUSH ESI                            ; 004856ea
    INC EDI                             ; 004856eb
    PUSH EDI                            ; 004856ec
    CALL engine_2d.c_clipLineGlobal_FUN_00402ca0 ; 004856ed
        ;   XREF to: 00402ca0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clipLineGlobal_FUN_00402ca0()
    ADD ESP,0x10                        ; 004856f2
    PUSH EBX                            ; 004856f5
    PUSH EDI                            ; 004856f6
    PUSH ESI                            ; 004856f7
    PUSH EBP                            ; 004856f8
    CALL engine_2d.c_clipLineGlobal_FUN_00402ca0 ; 004856f9
        ;   XREF to: 00402ca0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clipLineGlobal_FUN_00402ca0()
    ADD ESP,0x10                        ; 004856fe
    ADD ESP,0x8                         ; 00485701
        ;   Label: LAB_00485701
    POP EBP                             ; 00485704
    POP EDI                             ; 00485705
    POP ESI                             ; 00485706
    POP EBX                             ; 00485707
    RET                                 ; 00485708
    MOV ECX,dword ptr [ESP + 0x4]       ; 00485709
        ;   Label: LAB_00485709
    DEC ECX                             ; 0048570d
    DEC EBP                             ; 0048570e
    MOV dword ptr [ESP + 0x4],ECX       ; 0048570f
    JMP 0x004856c7                      ; 00485713
        ;   XREF to: 004856c7 (UNCONDITIONAL_JUMP)  ; LAB_004856c7
    XOR EDX,EDX                         ; 00485715
        ;   Label: LAB_00485715
    XOR EAX,EAX                         ; 00485717
    MOV DL,byte ptr [0x01c35839]        ; 00485719 | DAT_01c35839
    MOV AL,[0x01c35838]                 ; 0048571f | DAT_01c35838
    SHL EDX,0x8                         ; 00485724
    SHL EAX,0x10                        ; 00485727
    OR EDX,EAX                          ; 0048572a
    XOR EAX,EAX                         ; 0048572c
    MOV AL,[0x01c3583a]                 ; 0048572e | DAT_01c3583a
    OR EAX,EDX                          ; 00485733
    PUSH EAX                            ; 00485735
    CALL engine_mini3d.cpp_setColor_FUN_004f8e20 ; 00485736
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_004f8e20(uint rgb)
    ADD ESP,0x4                         ; 0048573b
    JMP 0x004856dd                      ; 0048573e
        ;   XREF to: 004856dd (UNCONDITIONAL_JUMP)  ; LAB_004856dd

