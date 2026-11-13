; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00497660(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830 at 0049b852
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 00493f32
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 004938fd
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc1cd
;   TerminatedCString s_CEditorTools_paintWindow_005dc1e3
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c3eb5c
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c3f54c
;   undefined4 DAT_01c3f550
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f020
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_mini3d.cpp_drawHLine_FUN_005182e0
;   engine_mini3d.cpp_setColor_FUN_00517d50
;   shape_edittool.cpp_FUN_0049d9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497660
        ;   Label: shape_edittool.cpp_FUN_00497660
    PUSH ESI                            ; 00497661
    PUSH EDI                            ; 00497662
    PUSH EBP                            ; 00497663
    SUB ESP,0x4                         ; 00497664
    CMP dword ptr [0x01c3eb5c],0x1      ; 00497667 | DAT_01c3eb5c
    JL 0x004977a2                       ; 0049766e
        ;   XREF to: 004977a2 (CONDITIONAL_JUMP)  ; LAB_004977a2
    MOV EAX,[0x01c3eb5c]                ; 00497674 | DAT_01c3eb5c
        ;   Label: LAB_00497674
    DEC EAX                             ; 00497679
    SHL EAX,0x3                         ; 0049767a
    MOV EBX,EAX                         ; 0049767d
    SHL EAX,0x6                         ; 0049767f
    SUB EAX,EBX                         ; 00497682
    MOV EBX,0x1c3eb60                   ; 00497684
    ADD EBX,EAX                         ; 00497689
    MOV EAX,[0x01c4f00c]                ; 0049768b | DAT_01c4f00c
    MOV dword ptr [ESP],EAX             ; 00497690
    MOV EAX,dword ptr [EBX + 0x4]       ; 00497693
    MOV [0x01c4f00c],EAX                ; 00497696 | DAT_01c4f00c
    MOV EAX,[0x0061b49c]                ; 0049769b | DAT_0061b49c
    MOV EDX,EAX                         ; 004976a0
    MOV ECX,0x60                        ; 004976a2
    SAR EDX,0x1f                        ; 004976a7
    IDIV ECX                            ; 004976aa
    PUSH 0x0                            ; 004976ac
    MOV EDI,dword ptr [0x01c4f020]      ; 004976ae | DAT_01c4f020
    MOV ESI,EAX                         ; 004976b4
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 004976b6
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    ADD ESP,0x4                         ; 004976bb
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004976be
    IMUL EDX,EAX                        ; 004976c2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004976c5
    INC EAX                             ; 004976c9
    IMUL EAX,ESI                        ; 004976ca
    MOV ESI,dword ptr [EBX + 0xc]       ; 004976cd
    ADD EAX,EDX                         ; 004976d0
    MOV EBP,dword ptr [0x01c3f544]      ; 004976d2 | DAT_01c3f544
    SUB ESI,EAX                         ; 004976d8
    MOV EAX,[0x01c3f54c]                ; 004976da | DAT_01c3f54c
    TEST EBP,EBP                        ; 004976df
    JZ 0x004977ca                       ; 004976e1
        ;   XREF to: 004977ca (CONDITIONAL_JUMP)  ; LAB_004977ca
    AND EAX,0xff                        ; 004976e7
    MOV EDX,EAX                         ; 004976ec
    SHL EAX,0x2                         ; 004976ee
    SUB EAX,EDX                         ; 004976f1
    XOR EDX,EDX                         ; 004976f3
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 004976f5 | DAT_01c4e9f9
    MOV ECX,EDX                         ; 004976fb
    XOR EDX,EDX                         ; 004976fd
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 004976ff | DAT_01c4e9f8
    SHL ECX,0x8                         ; 00497705
    SHL EDX,0x10                        ; 00497708
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 0049770b | DAT_01c4e9fa
    OR EDX,ECX                          ; 00497711
    AND EAX,0xff                        ; 00497713
    OR EAX,EDX                          ; 00497718
    PUSH EAX                            ; 0049771a
    CALL engine_mini3d.cpp_setColor_FUN_00517d50 ; 0049771b
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_00517d50(uint rgb)
    ADD ESP,0x4                         ; 00497720
    MOV ECX,dword ptr [0x01c3f544]      ; 00497723 | DAT_01c3f544
        ;   Label: LAB_00497723
    MOV EAX,dword ptr [EBX]             ; 00497729
    MOV EDX,dword ptr [EBX + 0x8]       ; 0049772b
    INC EAX                             ; 0049772e
    SUB EDX,0x2                         ; 0049772f
    TEST ECX,ECX                        ; 00497732
    JZ 0x004977d4                       ; 00497734
        ;   XREF to: 004977d4 (CONDITIONAL_JUMP)  ; LAB_004977d4
    PUSH EDX                            ; 0049773a
    PUSH ESI                            ; 0049773b
    PUSH EAX                            ; 0049773c
    CALL engine_mini3d.cpp_drawHLine_FUN_005182e0 ; 0049773d
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_005182e0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00497742
        ;   Label: LAB_00497742
    MOV EBP,dword ptr [0x01c3f550]      ; 00497745 | DAT_01c3f550
    CMP EBP,dword ptr [0x01c3f54c]      ; 0049774b | DAT_01c3f54c
    JZ 0x0049778c                       ; 00497751
        ;   XREF to: 0049778c (CONDITIONAL_JUMP)  ; LAB_0049778c
    MOV EDX,dword ptr [0x01c3f544]      ; 00497753 | DAT_01c3f544
    MOV EAX,EBP                         ; 00497759
    TEST EDX,EDX                        ; 0049775b
    JNZ 0x004977e1                      ; 0049775d
        ;   XREF to: 004977e1 (CONDITIONAL_JUMP)  ; LAB_004977e1
    MOV dword ptr [0x01c4f020],EBP      ; 00497763 | DAT_01c4f020
    MOV ECX,dword ptr [0x01c3f544]      ; 00497769 | DAT_01c3f544
        ;   Label: LAB_00497769
    DEC ESI                             ; 0049776f
    MOV EAX,dword ptr [EBX]             ; 00497770
    MOV EDX,dword ptr [EBX + 0x8]       ; 00497772
    INC EAX                             ; 00497775
    SUB EDX,0x2                         ; 00497776
    TEST ECX,ECX                        ; 00497779
    JZ 0x00497820                       ; 0049777b
        ;   XREF to: 00497820 (CONDITIONAL_JUMP)  ; LAB_00497820
    PUSH EDX                            ; 00497781
    PUSH ESI                            ; 00497782
    PUSH EAX                            ; 00497783
    CALL engine_mini3d.cpp_drawHLine_FUN_005182e0 ; 00497784
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_005182e0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00497789
        ;   Label: LAB_00497789
    MOV EAX,dword ptr [ESP]             ; 0049778c
        ;   Label: LAB_0049778c
    MOV dword ptr [0x01c4f020],EDI      ; 0049778f | DAT_01c4f020
    MOV [0x01c4f00c],EAX                ; 00497795 | DAT_01c4f00c
    ADD ESP,0x4                         ; 0049779a
        ;   Label: LAB_0049779a
    POP EBP                             ; 0049779d
    POP EDI                             ; 0049779e
    POP ESI                             ; 0049779f
    POP EBX                             ; 004977a0
    RET                                 ; 004977a1
    MOV ECX,0x5dc1cd                    ; 004977a2 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004977a2
    MOV EBX,0x99c                       ; 004977a7
    PUSH 0x5dc1e3                       ; 004977ac | = "CEditorTools::paintWindow() called bu..."
    MOV dword ptr [0x01d1d400],ECX      ; 004977b1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 004977b7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004977bd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004977c2
    JMP 0x00497674                      ; 004977c5
        ;   XREF to: 00497674 (UNCONDITIONAL_JUMP)  ; LAB_00497674
    MOV [0x01c4f020],EAX                ; 004977ca | DAT_01c4f020
        ;   Label: LAB_004977ca
    JMP 0x00497723                      ; 004977cf
        ;   XREF to: 00497723 (UNCONDITIONAL_JUMP)  ; LAB_00497723
    PUSH EDX                            ; 004977d4
        ;   Label: LAB_004977d4
    PUSH ESI                            ; 004977d5
    PUSH EAX                            ; 004977d6
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 004977d7
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x00497742                      ; 004977dc
        ;   XREF to: 00497742 (UNCONDITIONAL_JUMP)  ; LAB_00497742
    AND EAX,0xff                        ; 004977e1
        ;   Label: LAB_004977e1
    MOV EDX,EAX                         ; 004977e6
    SHL EAX,0x2                         ; 004977e8
    SUB EAX,EDX                         ; 004977eb
    XOR ECX,ECX                         ; 004977ed
    XOR EDX,EDX                         ; 004977ef
    MOV CL,byte ptr [EAX + 0x1c4e9f8]   ; 004977f1 | DAT_01c4e9f8
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 004977f7 | DAT_01c4e9f9
    SHL ECX,0x10                        ; 004977fd
    SHL EDX,0x8                         ; 00497800
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00497803 | DAT_01c4e9fa
    OR EDX,ECX                          ; 00497809
    AND EAX,0xff                        ; 0049780b
    OR EDX,EAX                          ; 00497810
    PUSH EDX                            ; 00497812
    CALL engine_mini3d.cpp_setColor_FUN_00517d50 ; 00497813
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_00517d50(uint rgb)
    ADD ESP,0x4                         ; 00497818
    JMP 0x00497769                      ; 0049781b
        ;   XREF to: 00497769 (UNCONDITIONAL_JUMP)  ; LAB_00497769
    PUSH EDX                            ; 00497820
        ;   Label: LAB_00497820
    PUSH ESI                            ; 00497821
    PUSH EAX                            ; 00497822
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 00497823
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x00497789                      ; 00497828
        ;   XREF to: 00497789 (UNCONDITIONAL_JUMP)  ; LAB_00497789

