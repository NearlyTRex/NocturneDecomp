; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_004831d0(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x164]:1  local_164
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_FUN_004b5190 at 004b5c1b
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250 at 004822e1
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c263d8
;   undefined4 DAT_01c263dc
;   undefined4 DAT_01c263e0
;   undefined4 DAT_01c263e4
;   undefined4 DAT_01c263e8
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e54
;   ... and 1 more
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011a0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_FUN_004a8df0
;   engine_mini3d.cpp_FUN_004f3570
;   engine_mini3d.cpp_FUN_004f8e20
;   engine_mini3d.cpp_FUN_004f90d0
;   shape_edittool.cpp_calculateButtonHeight_FUN_00485380
;   shape_edittool.cpp_calculateGridHeight_FUN_00484df0
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;   shape_edittool.cpp_FUN_0047a590
;   shape_edittool.cpp_FUN_0047e870
;   shape_edittool.cpp_FUN_0047eff0
;   shape_edittool.cpp_FUN_0047f210
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004831d0
        ;   Label: shape_edittool.cpp_CPickList_renderDialog_FUN_004831d0
    PUSH ESI                            ; 004831d1
    PUSH EDI                            ; 004831d2
    PUSH EBP                            ; 004831d3
    SUB ESP,0x154                       ; 004831d4
    MOV EDX,dword ptr [0x006138e0]      ; 004831da | g_CEditorToolsPtr
    PUSH EDX                            ; 004831e0
    CALL shape_edittool.cpp_FUN_0047e870 ; 004831e1
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e870()
    ADD ESP,0x4                         ; 004831e6
    PUSH 0x1                            ; 004831e9
    MOV ECX,dword ptr [0x006138e0]      ; 004831eb | g_CEditorToolsPtr
    PUSH ECX                            ; 004831f1
    CALL shape_edittool.cpp_FUN_0047eff0 ; 004831f2
        ;   XREF to: 0047eff0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047eff0()
    MOV EAX,[0x01c35e48]                ; 004831f7 | DAT_01c35e48
    ADD ESP,0x8                         ; 004831fc
    MOV dword ptr [ESP + 0x13c],EAX     ; 004831ff
    MOV EAX,dword ptr [ESP + 0x168]     ; 00483206
    MOV EAX,dword ptr [EAX + 0x198]     ; 0048320d
    MOV dword ptr [ESP + 0x140],EAX     ; 00483213
    MOV EAX,dword ptr [ESP + 0x168]     ; 0048321a
    XOR EBX,EBX                         ; 00483221
    MOV ESI,dword ptr [EAX + 0x1a8]     ; 00483223
    MOV dword ptr [ESP + 0x130],EBX     ; 00483229
    TEST ESI,ESI                        ; 00483230
    JLE 0x00483395                      ; 00483232
        ;   XREF to: 00483395 (CONDITIONAL_JUMP)  ; LAB_00483395
    MOV EAX,[0x01c35e4c]                ; 00483238 | DAT_01c35e4c
        ;   Label: LAB_00483238
    MOV dword ptr [ESP + 0x148],EAX     ; 0048323d
    MOV EAX,dword ptr [ESP + 0x168]     ; 00483244
    XOR EDI,EDI                         ; 0048324b
    MOV EBP,dword ptr [EAX + 0x1a0]     ; 0048324d
    MOV dword ptr [ESP + 0x138],EDI     ; 00483253
    TEST EBP,EBP                        ; 0048325a
    JLE 0x00483274                      ; 0048325c
        ;   XREF to: 00483274 (CONDITIONAL_JUMP)  ; LAB_00483274
    MOV EDX,dword ptr [ESP + 0x168]     ; 0048325e
        ;   Label: LAB_0048325e
    MOV EAX,dword ptr [ESP + 0x140]     ; 00483265
    CMP EAX,dword ptr [EDX]             ; 0048326c
    JL 0x004834c1                       ; 0048326e
        ;   XREF to: 004834c1 (CONDITIONAL_JUMP)  ; LAB_004834c1
    CMP dword ptr [ESP + 0x130],0x0     ; 00483274
        ;   Label: LAB_00483274
    JLE 0x00483354                      ; 0048327c
        ;   XREF to: 00483354 (CONDITIONAL_JUMP)  ; LAB_00483354
    MOV EAX,[0x01c263e8]                ; 00483282 | DAT_01c263e8
    MOV EBP,dword ptr [0x01c25f84]      ; 00483287 | DAT_01c25f84
    MOV EDI,dword ptr [0x01c35e60]      ; 0048328d | DAT_01c35e60
    TEST EBP,EBP                        ; 00483293
    JZ 0x0048375a                       ; 00483295
        ;   XREF to: 0048375a (CONDITIONAL_JUMP)  ; LAB_0048375a
    AND EAX,0xff                        ; 0048329b
    LEA EAX,[EAX + EAX*0x2]             ; 004832a0
    XOR EDX,EDX                         ; 004832a3
    XOR ECX,ECX                         ; 004832a5
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 004832a7 | DAT_01c35839
    MOV CL,byte ptr [EAX + 0x1c35838]   ; 004832ad | DAT_01c35838
    SHL EDX,0x8                         ; 004832b3
    SHL ECX,0x10                        ; 004832b6
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 004832b9 | DAT_01c3583a
    OR EDX,ECX                          ; 004832bf
    AND EAX,0xff                        ; 004832c1
    OR EAX,EDX                          ; 004832c6
    PUSH EAX                            ; 004832c8
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 004832c9
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 004832ce
    CALL shape_edittool.cpp_calculateGridHeight_FUN_00484df0 ; 004832d1
        ;   XREF to: 00484df0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridHeight_FUN_00484df0()
        ;   Label: LAB_004832d1
    MOV EBX,EAX                         ; 004832d6
    MOV EAX,[0x006141bc]                ; 004832d8 | DAT_006141bc
    MOV EDX,EAX                         ; 004832dd
    MOV ECX,0x60                        ; 004832df
    SAR EDX,0x1f                        ; 004832e4
    IDIV ECX                            ; 004832e7
    MOV EDX,EAX                         ; 004832e9
    MOV EAX,dword ptr [ESP + 0x168]     ; 004832eb
    CMP dword ptr [EAX + 0x1f0],0x2     ; 004832f2
    JNZ 0x00483764                      ; 004832f9
        ;   XREF to: 00483764 (CONDITIONAL_JUMP)  ; LAB_00483764
    MOV EAX,0x3                         ; 004832ff
    MOV ESI,EDX                         ; 00483304
        ;   Label: LAB_00483304
    IMUL ESI,EAX                        ; 00483306
    PUSH 0x0                            ; 00483309
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_00485380 ; 0048330b
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_00485380(char * button_text)
    ADD ESP,0x4                         ; 00483310
    LEA EDX,[EAX + ESI*0x1]             ; 00483313
    MOV EAX,dword ptr [ESP + 0x168]     ; 00483316
    CMP dword ptr [EAX + 0x1f0],0x2     ; 0048331d
    JNZ 0x0048376e                      ; 00483324
        ;   XREF to: 0048376e (CONDITIONAL_JUMP)  ; LAB_0048376e
    MOV EAX,EBX                         ; 0048332a
    ADD EAX,EDX                         ; 0048332c
        ;   Label: LAB_0048332c
    MOV EDX,dword ptr [0x01c35e54]      ; 0048332e | DAT_01c35e54
    SUB EDX,EAX                         ; 00483334
    PUSH EDX                            ; 00483336
    MOV EBP,dword ptr [ESP + 0x140]     ; 00483337
    PUSH EBP                            ; 0048333e
    MOV EAX,[0x01c35e4c]                ; 0048333f | DAT_01c35e4c
    PUSH EAX                            ; 00483344
    PUSH EBP                            ; 00483345
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00483346
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0048334b
    MOV dword ptr [0x01c35e60],EDI      ; 0048334e | DAT_01c35e60
    MOV EAX,dword ptr [ESP + 0x168]     ; 00483354
        ;   Label: LAB_00483354
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0048335b
    MOV EBP,dword ptr [ESP + 0x130]     ; 00483362
    MOV EDX,dword ptr [ESP + 0x168]     ; 00483369
    INC EBP                             ; 00483370
    MOV EAX,dword ptr [EAX + 0x1a4]     ; 00483371
    MOV ECX,dword ptr [EDX + 0x1a8]     ; 00483377
    ADD EDI,EAX                         ; 0048337d
    MOV dword ptr [ESP + 0x130],EBP     ; 0048337f
    MOV dword ptr [ESP + 0x13c],EDI     ; 00483386
    CMP EBP,ECX                         ; 0048338d
    JL 0x00483238                       ; 0048338f
        ;   XREF to: 00483238 (CONDITIONAL_JUMP)  ; LAB_00483238
    MOV EAX,dword ptr [ESP + 0x168]     ; 00483395
        ;   Label: LAB_00483395
    MOV ECX,dword ptr [ESP + 0x168]     ; 0048339c
    MOV EBX,dword ptr [EAX + 0x1f0]     ; 004833a3
    ADD ECX,0x1bc                       ; 004833a9
    CMP EBX,0x1                         ; 004833af
    JNZ 0x00483775                      ; 004833b2
        ;   XREF to: 00483775 (CONDITIONAL_JUMP)  ; LAB_00483775
    MOV EDX,dword ptr [ESP + 0x168]     ; 004833b8
    MOV EAX,dword ptr [EAX + 0x198]     ; 004833bf
    MOV dword ptr [EDX + 0x1bc],EAX     ; 004833c5
    MOV EAX,dword ptr [EDX]             ; 004833cb
    MOV dword ptr [EDX + 0x1c0],EAX     ; 004833cd
    MOV EAX,dword ptr [EDX + 0x1a0]     ; 004833d3
    PUSH ECX                            ; 004833d9
    MOV dword ptr [EDX + 0x1c4],EAX     ; 004833da
    CALL shape_edittool.cpp_FUN_00484440 ; 004833e0
        ;   XREF to: 00484440 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00484440()
        ;   Label: LAB_004833e0
    ADD ESP,0x4                         ; 004833e5
    MOV EAX,dword ptr [ESP + 0x168]     ; 004833e8
        ;   Label: LAB_004833e8
    CMP byte ptr [EAX + 0x5c],0x0       ; 004833ef
    JZ 0x0048341a                       ; 004833f3
        ;   XREF to: 0048341a (CONDITIONAL_JUMP)  ; LAB_0048341a
    CMP dword ptr [EAX + 0x3bc],0x0     ; 004833f5
    SETZ AL                             ; 004833fc
    AND EAX,0xff                        ; 004833ff
    PUSH EAX                            ; 00483404
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00483405
    ADD EAX,0x1f4                       ; 0048340c
    PUSH EAX                            ; 00483411
    CALL shape_edittool.cpp_FUN_00484f20 ; 00483412
        ;   XREF to: 00484f20 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00484f20()
    ADD ESP,0x8                         ; 00483417
    MOV EAX,dword ptr [ESP + 0x168]     ; 0048341a
        ;   Label: LAB_0048341a
    CMP byte ptr [EAX + 0xc0],0x0       ; 00483421
    JZ 0x0048344f                       ; 00483428
        ;   XREF to: 0048344f (CONDITIONAL_JUMP)  ; LAB_0048344f
    CMP dword ptr [EAX + 0x3bc],0x1     ; 0048342a
    SETZ AL                             ; 00483431
    AND EAX,0xff                        ; 00483434
    PUSH EAX                            ; 00483439
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0048343a
    ADD EAX,0x2d8                       ; 00483441
    PUSH EAX                            ; 00483446
    CALL shape_edittool.cpp_FUN_00484f20 ; 00483447
        ;   XREF to: 00484f20 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00484f20()
    ADD ESP,0x8                         ; 0048344c
    MOV EAX,dword ptr [ESP + 0x168]     ; 0048344f
        ;   Label: LAB_0048344f
    MOV EBX,dword ptr [EAX + 0x58]      ; 00483456
    TEST EBX,EBX                        ; 00483459
    JZ 0x004837ca                       ; 0048345b
        ;   XREF to: 004837ca (CONDITIONAL_JUMP)  ; LAB_004837ca
    ADD ESP,0x154                       ; 00483461
    POP EBP                             ; 00483467
    POP EDI                             ; 00483468
    POP ESI                             ; 00483469
    POP EBX                             ; 0048346a
    RET                                 ; 0048346b
    MOV EAX,dword ptr [ESP + 0x168]     ; 0048346c
        ;   Label: LAB_0048346c
    MOV EDX,dword ptr [ESP + 0x148]     ; 00483473
    MOV ECX,dword ptr [ESP + 0x140]     ; 0048347a
    MOV EAX,dword ptr [EAX + 0x18c]     ; 00483481
    MOV EBX,dword ptr [ESP + 0x138]     ; 00483487
    ADD EDX,EAX                         ; 0048348e
    INC ECX                             ; 00483490
    MOV dword ptr [ESP + 0x148],EDX     ; 00483491
    MOV EDX,dword ptr [ESP + 0x168]     ; 00483498
    INC EBX                             ; 0048349f
    MOV dword ptr [ESP + 0x140],ECX     ; 004834a0
    MOV ESI,dword ptr [EDX + 0x1a0]     ; 004834a7
    MOV dword ptr [ESP + 0x138],EBX     ; 004834ad
    CMP EBX,ESI                         ; 004834b4
    JL 0x0048325e                       ; 004834b6
        ;   XREF to: 0048325e (CONDITIONAL_JUMP)  ; LAB_0048325e
    JMP 0x00483274                      ; 004834bc
        ;   XREF to: 00483274 (UNCONDITIONAL_JUMP)  ; LAB_00483274
    CMP EAX,dword ptr [EDX + 0x194]     ; 004834c1
        ;   Label: LAB_004834c1
    JNZ 0x004835e7                      ; 004834c7
        ;   XREF to: 004835e7 (CONDITIONAL_JUMP)  ; LAB_004835e7
    MOV EDI,dword ptr [ESP + 0x13c]     ; 004834cd
    MOV EAX,EDX                         ; 004834d4
    MOV ESI,dword ptr [ESP + 0x148]     ; 004834d6
    MOV EDX,dword ptr [EDX + 0x1a4]     ; 004834dd
    MOV ECX,dword ptr [EAX + 0x18c]     ; 004834e3
    MOV EBX,dword ptr [EAX + 0x188]     ; 004834e9
    ADD EDI,EDX                         ; 004834ef
    ADD ESI,ECX                         ; 004834f1
    DEC EDI                             ; 004834f3
    DEC ESI                             ; 004834f4
    TEST EBX,EBX                        ; 004834f5
    JZ 0x00483700                       ; 004834f7
        ;   XREF to: 00483700 (CONDITIONAL_JUMP)  ; LAB_00483700
    MOV EAX,[0x01c263e4]                ; 004834fd | DAT_01c263e4
    MOV EBX,dword ptr [ESP + 0x148]     ; 00483502
        ;   Label: LAB_00483502
    MOV EBP,dword ptr [ESP + 0x13c]     ; 00483509
    MOV EDX,dword ptr [0x01c25f84]      ; 00483510 | DAT_01c25f84
    MOV dword ptr [ESP + 0x12c],EDI     ; 00483516
    MOV dword ptr [ESP + 0x134],ESI     ; 0048351d
    TEST EDX,EDX                        ; 00483524
    JZ 0x00483714                       ; 00483526
        ;   XREF to: 00483714 (CONDITIONAL_JUMP)  ; LAB_00483714
    JZ 0x0048370a                       ; 0048352c
        ;   XREF to: 0048370a (CONDITIONAL_JUMP)  ; LAB_0048370a
    AND EAX,0xff                        ; 00483532
    LEA EAX,[EAX + EAX*0x2]             ; 00483537
    XOR EDX,EDX                         ; 0048353a
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0048353c | DAT_01c35839
    MOV ECX,EDX                         ; 00483542
    XOR EDX,EDX                         ; 00483544
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 00483546 | DAT_01c35838
    SHL ECX,0x8                         ; 0048354c
    SHL EDX,0x10                        ; 0048354f
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 00483552 | DAT_01c3583a
    OR EDX,ECX                          ; 00483558
    AND EAX,0xff                        ; 0048355a
    OR EAX,EDX                          ; 0048355f
    PUSH EAX                            ; 00483561
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 00483562
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 00483567
    MOV ECX,dword ptr [ESP + 0x134]     ; 0048356a
        ;   Label: LAB_0048356a
    PUSH ECX                            ; 00483571
    MOV EAX,dword ptr [ESP + 0x130]     ; 00483572
    PUSH EAX                            ; 00483579
    PUSH EBX                            ; 0048357a
    PUSH EBP                            ; 0048357b
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 0048357c
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 00483581
    MOV EAX,dword ptr [ESP + 0x168]     ; 00483584
        ;   Label: LAB_00483584
    CMP dword ptr [EAX + 0x3bc],-0x1    ; 0048358b
    JNZ 0x004835e7                      ; 00483592
        ;   XREF to: 004835e7 (CONDITIONAL_JUMP)  ; LAB_004835e7
    MOV ECX,dword ptr [0x01c25f84]      ; 00483594 | DAT_01c25f84
    TEST ECX,ECX                        ; 0048359a
    JZ 0x00483726                       ; 0048359c
        ;   XREF to: 00483726 (CONDITIONAL_JUMP)  ; LAB_00483726
    XOR EDX,EDX                         ; 004835a2
    XOR EAX,EAX                         ; 004835a4
    MOV DL,byte ptr [0x01c35839]        ; 004835a6 | DAT_01c35839
    MOV AL,[0x01c35838]                 ; 004835ac | DAT_01c35838
    SHL EDX,0x8                         ; 004835b1
    SHL EAX,0x10                        ; 004835b4
    OR EDX,EAX                          ; 004835b7
    XOR EAX,EAX                         ; 004835b9
    MOV AL,[0x01c3583a]                 ; 004835bb | DAT_01c3583a
    OR EAX,EDX                          ; 004835c0
    PUSH EAX                            ; 004835c2
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 004835c3
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 004835c8
    PUSH 0x1                            ; 004835cb
        ;   Label: LAB_004835cb
    PUSH ESI                            ; 004835cd
    PUSH EDI                            ; 004835ce
    MOV ESI,dword ptr [ESP + 0x154]     ; 004835cf
    PUSH ESI                            ; 004835d6
    MOV EDI,dword ptr [ESP + 0x14c]     ; 004835d7
    PUSH EDI                            ; 004835de
    CALL shape_edittool.cpp_FUN_0047a590 ; 004835df
        ;   XREF to: 0047a590 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047a590()
    ADD ESP,0x14                        ; 004835e4
    MOV EAX,dword ptr [ESP + 0x140]     ; 004835e7
        ;   Label: LAB_004835e7
    PUSH EAX                            ; 004835ee
    MOV EDX,dword ptr [ESP + 0x16c]     ; 004835ef
    XOR EBP,EBP                         ; 004835f6
    PUSH EDX                            ; 004835f8
    MOV dword ptr [ESP + 0x154],EBP     ; 004835f9
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 00483600
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00483605
    MOV EBP,EAX                         ; 00483608
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0048360a
    MOV EAX,dword ptr [ESP + 0x168]     ; 00483611
    MOV EBX,dword ptr [ESP + 0x140]     ; 00483618
    MOV ESI,dword ptr [ESP + 0x168]     ; 0048361f
    PUSH EBX                            ; 00483626
    MOV ECX,dword ptr [EAX + 0x190]     ; 00483627
    MOV EAX,[0x01c263d8]                ; 0048362d | DAT_01c263d8
    PUSH ESI                            ; 00483632
    ADD EDI,ECX                         ; 00483633
    MOV dword ptr [ESP + 0x14c],EAX     ; 00483635
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0 ; 0048363c
        ;   XREF to: 00483aa0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 00483641
    TEST EAX,EAX                        ; 00483644
    JZ 0x00483731                       ; 00483646
        ;   XREF to: 00483731 (CONDITIONAL_JUMP)  ; LAB_00483731
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0048364c
        ;   Label: LAB_0048364c
    MOV ECX,dword ptr [ESP + 0x168]     ; 00483653
    SHL EAX,0x2                         ; 0048365a
    ADD EAX,ECX                         ; 0048365d
    MOV dword ptr [ESP + 0x150],EAX     ; 0048365f
    XOR BL,BL                           ; 00483666
    MOV EDX,ESP                         ; 00483668
        ;   Label: LAB_00483668
    MOV BH,byte ptr [EBP]               ; 0048366a
    MOV EAX,EBP                         ; 0048366d
    CMP BL,BH                           ; 0048366f
    JZ 0x00483753                       ; 00483671
        ;   XREF to: 00483753 (CONDITIONAL_JUMP)  ; LAB_00483753
    MOV BH,byte ptr [EAX]               ; 00483677
        ;   Label: LAB_00483677
    LEA ECX,[EAX + 0x1]                 ; 00483679
    CMP BH,0x9                          ; 0048367c
    JNZ 0x00483742                      ; 0048367f
        ;   XREF to: 00483742 (CONDITIONAL_JUMP)  ; LAB_00483742
    MOV ESI,ECX                         ; 00483685
    MOV byte ptr [EDX],BL               ; 00483687
        ;   Label: LAB_00483687
    PUSH 0xffff                         ; 00483689
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0048368e
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 00483693
    PUSH 0x3f800000                     ; 00483696
    CALL engine_mini3d.cpp_FUN_004f3570 ; 0048369b
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3570()
    ADD ESP,0x4                         ; 004836a0
    PUSH -0x1                           ; 004836a3
    MOV EAX,dword ptr [ESP + 0x148]     ; 004836a5
    PUSH EAX                            ; 004836ac
    MOV EDX,dword ptr [ESP + 0x150]     ; 004836ad
    PUSH EDX                            ; 004836b4
    PUSH EDI                            ; 004836b5
    LEA EAX,[ESP + 0x10]                ; 004836b6
    PUSH EAX                            ; 004836ba
    MOV ECX,dword ptr [0x01c25590]      ; 004836bb | DAT_01c25590
    PUSH ECX                            ; 004836c1
    CALL engine_font.cpp_FUN_004a8df0   ; 004836c2
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004836c7
    MOV EAX,dword ptr [ESP + 0x150]     ; 004836ca
    MOV EBP,ESI                         ; 004836d1
    LEA ECX,[EAX + 0x4]                 ; 004836d3
    MOV EDX,dword ptr [EAX + 0x10]      ; 004836d6
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004836d9
    MOV dword ptr [ESP + 0x150],ECX     ; 004836e0
    ADD EDI,EDX                         ; 004836e7
    INC EAX                             ; 004836e9
    MOV CL,byte ptr [ESI]               ; 004836ea
    MOV dword ptr [ESP + 0x14c],EAX     ; 004836ec
    CMP BL,CL                           ; 004836f3
    JZ 0x0048346c                       ; 004836f5
        ;   XREF to: 0048346c (CONDITIONAL_JUMP)  ; LAB_0048346c
    JMP 0x00483668                      ; 004836fb
        ;   XREF to: 00483668 (UNCONDITIONAL_JUMP)  ; LAB_00483668
    MOV EAX,[0x01c263e0]                ; 00483700 | DAT_01c263e0
        ;   Label: LAB_00483700
    JMP 0x00483502                      ; 00483705
        ;   XREF to: 00483502 (UNCONDITIONAL_JUMP)  ; LAB_00483502
    MOV [0x01c35e60],EAX                ; 0048370a | DAT_01c35e60
        ;   Label: LAB_0048370a
    JMP 0x0048356a                      ; 0048370f
        ;   XREF to: 0048356a (UNCONDITIONAL_JUMP)  ; LAB_0048356a
    PUSH EAX                            ; 00483714
        ;   Label: LAB_00483714
    PUSH ESI                            ; 00483715
    PUSH EDI                            ; 00483716
    PUSH EBX                            ; 00483717
    PUSH EBP                            ; 00483718
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 00483719
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0048371e
    JMP 0x00483584                      ; 00483721
        ;   XREF to: 00483584 (UNCONDITIONAL_JUMP)  ; LAB_00483584
    MOV dword ptr [0x01c35e60],ECX      ; 00483726 | DAT_01c35e60
        ;   Label: LAB_00483726
    JMP 0x004835cb                      ; 0048372c
        ;   XREF to: 004835cb (UNCONDITIONAL_JUMP)  ; LAB_004835cb
    MOV EAX,[0x01c263dc]                ; 00483731 | DAT_01c263dc
        ;   Label: LAB_00483731
    MOV dword ptr [ESP + 0x144],EAX     ; 00483736
    JMP 0x0048364c                      ; 0048373d
        ;   XREF to: 0048364c (UNCONDITIONAL_JUMP)  ; LAB_0048364c
    MOV AL,byte ptr [EAX]               ; 00483742
        ;   Label: LAB_00483742
    MOV byte ptr [EDX],AL               ; 00483744
    INC EDX                             ; 00483746
    MOV BH,byte ptr [ECX]               ; 00483747
    MOV EAX,ECX                         ; 00483749
    CMP BL,BH                           ; 0048374b
    JNZ 0x00483677                      ; 0048374d
        ;   XREF to: 00483677 (CONDITIONAL_JUMP)  ; LAB_00483677
    MOV ESI,EAX                         ; 00483753
        ;   Label: LAB_00483753
    JMP 0x00483687                      ; 00483755
        ;   XREF to: 00483687 (UNCONDITIONAL_JUMP)  ; LAB_00483687
    MOV [0x01c35e60],EAX                ; 0048375a | DAT_01c35e60
        ;   Label: LAB_0048375a
    JMP 0x004832d1                      ; 0048375f
        ;   XREF to: 004832d1 (UNCONDITIONAL_JUMP)  ; LAB_004832d1
    MOV EAX,0x1                         ; 00483764
        ;   Label: LAB_00483764
    JMP 0x00483304                      ; 00483769
        ;   XREF to: 00483304 (UNCONDITIONAL_JUMP)  ; LAB_00483304
    XOR EAX,EAX                         ; 0048376e
        ;   Label: LAB_0048376e
    JMP 0x0048332c                      ; 00483770
        ;   XREF to: 0048332c (UNCONDITIONAL_JUMP)  ; LAB_0048332c
    CMP EBX,0x2                         ; 00483775
        ;   Label: LAB_00483775
    JNZ 0x004833e8                      ; 00483778
        ;   XREF to: 004833e8 (CONDITIONAL_JUMP)  ; LAB_004833e8
    MOV EDX,dword ptr [EAX + 0x198]     ; 0048377e
    MOV EBX,dword ptr [ESP + 0x168]     ; 00483784
    MOV EAX,EDX                         ; 0048378b
    MOV EDI,dword ptr [EBX + 0x1a0]     ; 0048378d
    SAR EDX,0x1f                        ; 00483793
    IDIV EDI                            ; 00483796
    MOV dword ptr [EBX + 0x1bc],EAX     ; 00483798
    MOV EBP,dword ptr [EBX + 0x1a0]     ; 0048379e
    MOV EAX,dword ptr [EBX]             ; 004837a4
    ADD EAX,EBP                         ; 004837a6
    LEA EDX,[EAX + -0x1]                ; 004837a8
    MOV EAX,EDX                         ; 004837ab
    SAR EDX,0x1f                        ; 004837ad
    IDIV EBP                            ; 004837b0
    MOV dword ptr [EBX + 0x1c0],EAX     ; 004837b2
    MOV EAX,dword ptr [EBX + 0x1a8]     ; 004837b8
    PUSH ECX                            ; 004837be
    MOV dword ptr [EBX + 0x1c4],EAX     ; 004837bf
    JMP 0x004833e0                      ; 004837c5
        ;   XREF to: 004833e0 (UNCONDITIONAL_JUMP)  ; LAB_004833e0
    PUSH EBX                            ; 004837ca
        ;   Label: LAB_004837ca
    MOV ESI,dword ptr [0x006138e0]      ; 004837cb | g_CEditorToolsPtr
    PUSH ESI                            ; 004837d1
    CALL shape_edittool.cpp_FUN_0047f210 ; 004837d2
        ;   XREF to: 0047f210 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f210()
    ADD ESP,0x8                         ; 004837d7
    ADD ESP,0x154                       ; 004837da
    POP EBP                             ; 004837e0
    POP EDI                             ; 004837e1
    POP ESI                             ; 004837e2
    POP EBX                             ; 004837e3
    RET                                 ; 004837e4

