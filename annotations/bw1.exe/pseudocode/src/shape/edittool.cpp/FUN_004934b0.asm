; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004934b0(CInputString *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x420]:1  local_420
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_004958d0 at 00495b1c
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 00493918
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbcf8
;   TerminatedCString s_CInputString_draw_string_005dbd0e
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c3f568
;   undefined4 DAT_01c3f56c
;   undefined4 DAT_01c3f570
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01c4f020
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;   engine_2d.c_drawLine_FUN_004011a0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_font.cpp_FUN_004c1dd0
;   engine_mini3d.cpp_FUN_00512320
;   engine_mini3d.cpp_FUN_00517d50
;   engine_mini3d.cpp_FUN_00518010
;   shape_edittool.cpp_CInputString_calcX_FUN_004933e0
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004934b0
        ;   Label: shape_edittool.cpp_FUN_004934b0
    PUSH ESI                            ; 004934b1
    PUSH EDI                            ; 004934b2
    PUSH EBP                            ; 004934b3
    SUB ESP,0x410                       ; 004934b4
    MOV EBX,dword ptr [ESP + 0x424]     ; 004934ba
    MOV EDI,dword ptr [ESP + 0x42c]     ; 004934c1
    MOV EBP,dword ptr [0x01c3f53c]      ; 004934c8 | DAT_01c3f53c
    MOV EAX,dword ptr [EBX + 0x138]     ; 004934ce
    MOV EDX,dword ptr [EBX + 0x134]     ; 004934d4
    ADD EBP,EDI                         ; 004934da
    CMP EAX,EDX                         ; 004934dc
    JNZ 0x004935d6                      ; 004934de
        ;   XREF to: 004935d6 (CONDITIONAL_JUMP)  ; LAB_004935d6
    PUSH 0xffff                         ; 004934e4
        ;   Label: LAB_004934e4
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 004934e9
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 004934ee
    PUSH 0x3f800000                     ; 004934f1
    CALL engine_mini3d.cpp_FUN_00512320 ; 004934f6
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00512320()
    MOV EAX,dword ptr [EBX + 0x13c]     ; 004934fb
    ADD ESP,0x4                         ; 00493501
    TEST EAX,EAX                        ; 00493504
    JZ 0x004936be                       ; 00493506
        ;   XREF to: 004936be (CONDITIONAL_JUMP)  ; LAB_004936be
    CMP dword ptr [EBX + 0x130],0x400   ; 0049350c
    JC 0x0049353b                       ; 00493516
        ;   XREF to: 0049353b (CONDITIONAL_JUMP)  ; LAB_0049353b
    MOV EDX,0x5dbcf8                    ; 00493518 | = "..\\shape\\edittool.cpp"
    MOV ECX,0x22e                       ; 0049351d
    PUSH 0x5dbd0e                       ; 00493522 | = "CInputString::draw - string too big f..."
    MOV dword ptr [0x01d1d400],EDX      ; 00493527 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0049352d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00493533
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00493538
    MOV ESI,dword ptr [EBX + 0x130]     ; 0049353b
        ;   Label: LAB_0049353b
    PUSH ESI                            ; 00493541
    PUSH 0x2a                           ; 00493542
    LEA EAX,[ESP + 0x8]                 ; 00493544
    PUSH EAX                            ; 00493548
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00493549
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0049354e
    MOV EAX,dword ptr [EBX + 0x130]     ; 00493551
    XOR DL,DL                           ; 00493557
    PUSH -0x1                           ; 00493559
    MOV byte ptr [ESP + EAX*0x1 + 0x4],DL ; 0049355b
    MOV EAX,[0x01c3f56c]                ; 0049355f | DAT_01c3f56c
    PUSH EAX                            ; 00493564
    PUSH EDI                            ; 00493565
    MOV EDX,dword ptr [ESP + 0x434]     ; 00493566
    PUSH EDX                            ; 0049356d
    LEA EAX,[ESP + 0x10]                ; 0049356e
    PUSH EAX                            ; 00493572
    MOV ECX,dword ptr [0x01c3eb50]      ; 00493573 | DAT_01c3eb50
    PUSH ECX                            ; 00493579
    CALL engine_font.cpp_FUN_004c1dd0   ; 0049357a
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
        ;   Label: LAB_0049357a
    ADD ESP,0x18                        ; 0049357f
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 00493582
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    TEST EAX,0x40000                    ; 00493587
    JZ 0x004935cb                       ; 0049358c
        ;   XREF to: 004935cb (CONDITIONAL_JUMP)  ; LAB_004935cb
    MOV ESI,dword ptr [0x01c3f544]      ; 0049358e | DAT_01c3f544
    MOV EAX,[0x01c3f570]                ; 00493594 | DAT_01c3f570
    TEST ESI,ESI                        ; 00493599
    JNZ 0x004936dd                      ; 0049359b
        ;   XREF to: 004936dd (CONDITIONAL_JUMP)  ; LAB_004936dd
    MOV [0x01c4f020],EAX                ; 004935a1 | DAT_01c4f020
    MOV EAX,dword ptr [EBX + 0x134]     ; 004935a6
        ;   Label: LAB_004935a6
    PUSH EAX                            ; 004935ac
    PUSH EBX                            ; 004935ad
    CALL shape_edittool.cpp_CInputString_calcX_FUN_004933e0 ; 004935ae
        ;   XREF to: 004933e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CInputString_calcX_FUN_004933e0(CInputString * this_ptr, int char_index)
    ADD ESP,0x8                         ; 004935b3
    MOV EDX,dword ptr [ESP + 0x428]     ; 004935b6
    PUSH EBP                            ; 004935bd
    ADD EAX,EDX                         ; 004935be
    PUSH EAX                            ; 004935c0
    PUSH EDI                            ; 004935c1
    PUSH EAX                            ; 004935c2
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 004935c3
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004935c8
    ADD ESP,0x410                       ; 004935cb
        ;   Label: LAB_004935cb
    POP EBP                             ; 004935d1
    POP EDI                             ; 004935d2
    POP ESI                             ; 004935d3
    POP EBX                             ; 004935d4
    RET                                 ; 004935d5
    PUSH EAX                            ; 004935d6
        ;   Label: LAB_004935d6
    PUSH EBX                            ; 004935d7
    CALL shape_edittool.cpp_CInputString_calcX_FUN_004933e0 ; 004935d8
        ;   XREF to: 004933e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CInputString_calcX_FUN_004933e0(CInputString * this_ptr, int char_index)
    ADD ESP,0x8                         ; 004935dd
    MOV ESI,dword ptr [ESP + 0x428]     ; 004935e0
    ADD ESI,EAX                         ; 004935e7
    MOV EAX,dword ptr [EBX + 0x134]     ; 004935e9
    PUSH EAX                            ; 004935ef
    PUSH EBX                            ; 004935f0
    CALL shape_edittool.cpp_CInputString_calcX_FUN_004933e0 ; 004935f1
        ;   XREF to: 004933e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CInputString_calcX_FUN_004933e0(CInputString * this_ptr, int char_index)
    ADD ESP,0x8                         ; 004935f6
    ADD EAX,dword ptr [ESP + 0x428]     ; 004935f9
    CMP ESI,EAX                         ; 00493600
    JLE 0x0049360a                      ; 00493602
        ;   XREF to: 0049360a (CONDITIONAL_JUMP)  ; LAB_0049360a
    MOV EDX,ESI                         ; 00493604
    MOV ESI,EAX                         ; 00493606
    MOV EAX,EDX                         ; 00493608
    MOV EDX,dword ptr [0x01c3f568]      ; 0049360a | DAT_01c3f568
        ;   Label: LAB_0049360a
    MOV ECX,dword ptr [0x01c3f544]      ; 00493610 | DAT_01c3f544
    MOV dword ptr [ESP + 0x40c],EDI     ; 00493616
    MOV dword ptr [ESP + 0x408],EAX     ; 0049361d
    MOV dword ptr [ESP + 0x400],EBP     ; 00493624
    MOV dword ptr [ESP + 0x404],ESI     ; 0049362b
    TEST ECX,ECX                        ; 00493632
    JZ 0x004936ac                       ; 00493634
        ;   XREF to: 004936ac (CONDITIONAL_JUMP)  ; LAB_004936ac
    JNZ 0x0049366b                      ; 00493636
        ;   XREF to: 0049366b (CONDITIONAL_JUMP)  ; LAB_0049366b
    MOV dword ptr [0x01c4f020],EDX      ; 00493638 | DAT_01c4f020
    MOV EAX,dword ptr [ESP + 0x400]     ; 0049363e
        ;   Label: LAB_0049363e
    PUSH EAX                            ; 00493645
    MOV EDX,dword ptr [ESP + 0x40c]     ; 00493646
    PUSH EDX                            ; 0049364d
    MOV ECX,dword ptr [ESP + 0x414]     ; 0049364e
    PUSH ECX                            ; 00493655
    MOV ESI,dword ptr [ESP + 0x410]     ; 00493656
    PUSH ESI                            ; 0049365d
    CALL engine_mini3d.cpp_FUN_00518010 ; 0049365e
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518010()
    ADD ESP,0x10                        ; 00493663
    JMP 0x004934e4                      ; 00493666
        ;   XREF to: 004934e4 (UNCONDITIONAL_JUMP)  ; LAB_004934e4
    AND EDX,0xff                        ; 0049366b
        ;   Label: LAB_0049366b
    LEA EAX,[EDX*0x4 + 0x0]             ; 00493671
    SUB EAX,EDX                         ; 00493678
    XOR EDX,EDX                         ; 0049367a
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 0049367c | DAT_01c4e9f9
    MOV ESI,EDX                         ; 00493682
    XOR EDX,EDX                         ; 00493684
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 00493686 | DAT_01c4e9f8
    SHL ESI,0x8                         ; 0049368c
    SHL EDX,0x10                        ; 0049368f
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00493692 | DAT_01c4e9fa
    OR EDX,ESI                          ; 00493698
    AND EAX,0xff                        ; 0049369a
    OR EDX,EAX                          ; 0049369f
    PUSH EDX                            ; 004936a1
    CALL engine_mini3d.cpp_FUN_00517d50 ; 004936a2
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 004936a7
    JMP 0x0049363e                      ; 004936aa
        ;   XREF to: 0049363e (UNCONDITIONAL_JUMP)  ; LAB_0049363e
    PUSH EDX                            ; 004936ac
        ;   Label: LAB_004936ac
    PUSH EBP                            ; 004936ad
    PUSH EAX                            ; 004936ae
    PUSH EDI                            ; 004936af
    PUSH ESI                            ; 004936b0
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004936b1
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004936b6
    JMP 0x004934e4                      ; 004936b9
        ;   XREF to: 004934e4 (UNCONDITIONAL_JUMP)  ; LAB_004934e4
    PUSH -0x1                           ; 004936be
        ;   Label: LAB_004936be
    MOV EDX,dword ptr [0x01c3f56c]      ; 004936c0 | DAT_01c3f56c
    PUSH EDX                            ; 004936c6
    PUSH EDI                            ; 004936c7
    MOV ECX,dword ptr [ESP + 0x434]     ; 004936c8
    PUSH ECX                            ; 004936cf
    PUSH EBX                            ; 004936d0
    MOV ESI,dword ptr [0x01c3eb50]      ; 004936d1 | DAT_01c3eb50
    PUSH ESI                            ; 004936d7
    JMP 0x0049357a                      ; 004936d8
        ;   XREF to: 0049357a (UNCONDITIONAL_JUMP)  ; LAB_0049357a
    AND EAX,0xff                        ; 004936dd
        ;   Label: LAB_004936dd
    MOV EDX,EAX                         ; 004936e2
    SHL EAX,0x2                         ; 004936e4
    SUB EAX,EDX                         ; 004936e7
    XOR EDX,EDX                         ; 004936e9
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 004936eb | DAT_01c4e9f9
    MOV ESI,EDX                         ; 004936f1
    XOR EDX,EDX                         ; 004936f3
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 004936f5 | DAT_01c4e9f8
    SHL ESI,0x8                         ; 004936fb
    SHL EDX,0x10                        ; 004936fe
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00493701 | DAT_01c4e9fa
    OR EDX,ESI                          ; 00493707
    AND EAX,0xff                        ; 00493709
    OR EAX,EDX                          ; 0049370e
    PUSH EAX                            ; 00493710
    CALL engine_mini3d.cpp_FUN_00517d50 ; 00493711
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 00493716
    JMP 0x004935a6                      ; 00493719
        ;   XREF to: 004935a6 (UNCONDITIONAL_JUMP)  ; LAB_004935a6

