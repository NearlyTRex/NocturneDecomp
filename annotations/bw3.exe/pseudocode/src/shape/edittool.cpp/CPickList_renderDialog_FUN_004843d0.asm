; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_004843d0(CPickList *this_ptr)
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
;   core_game.cpp_FUN_004b6f30 at 004b794f
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450 at 004834e1
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5bb40
;   undefined4 DAT_01c5bb44
;   undefined4 DAT_01c5bb48
;   undefined4 DAT_01c5bb4c
;   undefined4 DAT_01c5bb50
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b4
;   ... and 1 more
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011a0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_font.cpp_FUN_004b0a20
;   engine_mini3d.cpp_FUN_004edaf0
;   engine_mini3d.cpp_FUN_004f3520
;   engine_mini3d.cpp_FUN_004f37e0
;   shape_edittool.cpp_calculateGridHeight_FUN_00485ff0
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
;   shape_edittool.cpp_FUN_0047b5e0
;   shape_edittool.cpp_FUN_0047fa80
;   shape_edittool.cpp_FUN_00480200
;   shape_edittool.cpp_FUN_00480410
;   shape_edittool.cpp_FUN_00485640
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004843d0
        ;   Label: shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0
    PUSH ESI                            ; 004843d1
    PUSH EDI                            ; 004843d2
    PUSH EBP                            ; 004843d3
    SUB ESP,0x154                       ; 004843d4
    MOV EDX,dword ptr [0x005fb140]      ; 004843da | g_CEditorToolsPtr
    PUSH EDX                            ; 004843e0
    CALL shape_edittool.cpp_FUN_0047fa80 ; 004843e1
        ;   XREF to: 0047fa80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047fa80()
    ADD ESP,0x4                         ; 004843e6
    PUSH 0x1                            ; 004843e9
    MOV ECX,dword ptr [0x005fb140]      ; 004843eb | g_CEditorToolsPtr
    PUSH ECX                            ; 004843f1
    CALL shape_edittool.cpp_FUN_00480200 ; 004843f2
        ;   XREF to: 00480200 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00480200()
    MOV EAX,[0x01c6b5a8]                ; 004843f7 | DAT_01c6b5a8
    ADD ESP,0x8                         ; 004843fc
    MOV dword ptr [ESP + 0x13c],EAX     ; 004843ff
    MOV EAX,dword ptr [ESP + 0x168]     ; 00484406
    MOV EAX,dword ptr [EAX + 0x198]     ; 0048440d
    MOV dword ptr [ESP + 0x140],EAX     ; 00484413
    MOV EAX,dword ptr [ESP + 0x168]     ; 0048441a
    XOR EBX,EBX                         ; 00484421
    MOV ESI,dword ptr [EAX + 0x1a8]     ; 00484423
    MOV dword ptr [ESP + 0x130],EBX     ; 00484429
    TEST ESI,ESI                        ; 00484430
    JLE 0x00484595                      ; 00484432
        ;   XREF to: 00484595 (CONDITIONAL_JUMP)  ; LAB_00484595
    MOV EAX,[0x01c6b5ac]                ; 00484438 | DAT_01c6b5ac
        ;   Label: LAB_00484438
    MOV dword ptr [ESP + 0x148],EAX     ; 0048443d
    MOV EAX,dword ptr [ESP + 0x168]     ; 00484444
    XOR EDI,EDI                         ; 0048444b
    MOV EBP,dword ptr [EAX + 0x1a0]     ; 0048444d
    MOV dword ptr [ESP + 0x138],EDI     ; 00484453
    TEST EBP,EBP                        ; 0048445a
    JLE 0x00484474                      ; 0048445c
        ;   XREF to: 00484474 (CONDITIONAL_JUMP)  ; LAB_00484474
    MOV EDX,dword ptr [ESP + 0x168]     ; 0048445e
        ;   Label: LAB_0048445e
    MOV EAX,dword ptr [ESP + 0x140]     ; 00484465
    CMP EAX,dword ptr [EDX]             ; 0048446c
    JL 0x004846c1                       ; 0048446e
        ;   XREF to: 004846c1 (CONDITIONAL_JUMP)  ; LAB_004846c1
    CMP dword ptr [ESP + 0x130],0x0     ; 00484474
        ;   Label: LAB_00484474
    JLE 0x00484554                      ; 0048447c
        ;   XREF to: 00484554 (CONDITIONAL_JUMP)  ; LAB_00484554
    MOV EAX,[0x01c5bb50]                ; 00484482 | DAT_01c5bb50
    MOV EBP,dword ptr [0x01c5baec]      ; 00484487 | DAT_01c5baec
    MOV EDI,dword ptr [0x01c6b5c0]      ; 0048448d | DAT_01c6b5c0
    TEST EBP,EBP                        ; 00484493
    JZ 0x0048495a                       ; 00484495
        ;   XREF to: 0048495a (CONDITIONAL_JUMP)  ; LAB_0048495a
    AND EAX,0xff                        ; 0048449b
    LEA EAX,[EAX + EAX*0x2]             ; 004844a0
    XOR EDX,EDX                         ; 004844a3
    XOR ECX,ECX                         ; 004844a5
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 004844a7 | DAT_01c6af99
    MOV CL,byte ptr [EAX + 0x1c6af98]   ; 004844ad | DAT_01c6af98
    SHL EDX,0x8                         ; 004844b3
    SHL ECX,0x10                        ; 004844b6
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 004844b9 | DAT_01c6af9a
    OR EDX,ECX                          ; 004844bf
    AND EAX,0xff                        ; 004844c1
    OR EAX,EDX                          ; 004844c6
    PUSH EAX                            ; 004844c8
    CALL engine_mini3d.cpp_FUN_004f3520 ; 004844c9
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 004844ce
    CALL shape_edittool.cpp_calculateGridHeight_FUN_00485ff0 ; 004844d1
        ;   XREF to: 00485ff0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridHeight_FUN_00485ff0()
        ;   Label: LAB_004844d1
    MOV EBX,EAX                         ; 004844d6
    MOV EAX,[0x005fba1c]                ; 004844d8 | DAT_005fba1c
    MOV EDX,EAX                         ; 004844dd
    MOV ECX,0x60                        ; 004844df
    SAR EDX,0x1f                        ; 004844e4
    IDIV ECX                            ; 004844e7
    MOV EDX,EAX                         ; 004844e9
    MOV EAX,dword ptr [ESP + 0x168]     ; 004844eb
    CMP dword ptr [EAX + 0x1f0],0x2     ; 004844f2
    JNZ 0x00484964                      ; 004844f9
        ;   XREF to: 00484964 (CONDITIONAL_JUMP)  ; LAB_00484964
    MOV EAX,0x3                         ; 004844ff
    MOV ESI,EDX                         ; 00484504
        ;   Label: LAB_00484504
    IMUL ESI,EAX                        ; 00484506
    PUSH 0x0                            ; 00484509
    CALL shape_edittool.cpp_FUN_00486580 ; 0048450b
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    ADD ESP,0x4                         ; 00484510
    LEA EDX,[EAX + ESI*0x1]             ; 00484513
    MOV EAX,dword ptr [ESP + 0x168]     ; 00484516
    CMP dword ptr [EAX + 0x1f0],0x2     ; 0048451d
    JNZ 0x0048496e                      ; 00484524
        ;   XREF to: 0048496e (CONDITIONAL_JUMP)  ; LAB_0048496e
    MOV EAX,EBX                         ; 0048452a
    ADD EAX,EDX                         ; 0048452c
        ;   Label: LAB_0048452c
    MOV EDX,dword ptr [0x01c6b5b4]      ; 0048452e | DAT_01c6b5b4
    SUB EDX,EAX                         ; 00484534
    PUSH EDX                            ; 00484536
    MOV EBP,dword ptr [ESP + 0x140]     ; 00484537
    PUSH EBP                            ; 0048453e
    MOV EAX,[0x01c6b5ac]                ; 0048453f | DAT_01c6b5ac
    PUSH EAX                            ; 00484544
    PUSH EBP                            ; 00484545
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00484546
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0048454b
    MOV dword ptr [0x01c6b5c0],EDI      ; 0048454e | DAT_01c6b5c0
    MOV EAX,dword ptr [ESP + 0x168]     ; 00484554
        ;   Label: LAB_00484554
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0048455b
    MOV EBP,dword ptr [ESP + 0x130]     ; 00484562
    MOV EDX,dword ptr [ESP + 0x168]     ; 00484569
    INC EBP                             ; 00484570
    MOV EAX,dword ptr [EAX + 0x1a4]     ; 00484571
    MOV ECX,dword ptr [EDX + 0x1a8]     ; 00484577
    ADD EDI,EAX                         ; 0048457d
    MOV dword ptr [ESP + 0x130],EBP     ; 0048457f
    MOV dword ptr [ESP + 0x13c],EDI     ; 00484586
    CMP EBP,ECX                         ; 0048458d
    JL 0x00484438                       ; 0048458f
        ;   XREF to: 00484438 (CONDITIONAL_JUMP)  ; LAB_00484438
    MOV EAX,dword ptr [ESP + 0x168]     ; 00484595
        ;   Label: LAB_00484595
    MOV ECX,dword ptr [ESP + 0x168]     ; 0048459c
    MOV EBX,dword ptr [EAX + 0x1f0]     ; 004845a3
    ADD ECX,0x1bc                       ; 004845a9
    CMP EBX,0x1                         ; 004845af
    JNZ 0x00484975                      ; 004845b2
        ;   XREF to: 00484975 (CONDITIONAL_JUMP)  ; LAB_00484975
    MOV EDX,dword ptr [ESP + 0x168]     ; 004845b8
    MOV EAX,dword ptr [EAX + 0x198]     ; 004845bf
    MOV dword ptr [EDX + 0x1bc],EAX     ; 004845c5
    MOV EAX,dword ptr [EDX]             ; 004845cb
    MOV dword ptr [EDX + 0x1c0],EAX     ; 004845cd
    MOV EAX,dword ptr [EDX + 0x1a0]     ; 004845d3
    PUSH ECX                            ; 004845d9
    MOV dword ptr [EDX + 0x1c4],EAX     ; 004845da
    CALL shape_edittool.cpp_FUN_00485640 ; 004845e0
        ;   XREF to: 00485640 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00485640()
        ;   Label: LAB_004845e0
    ADD ESP,0x4                         ; 004845e5
    MOV EAX,dword ptr [ESP + 0x168]     ; 004845e8
        ;   Label: LAB_004845e8
    CMP byte ptr [EAX + 0x5c],0x0       ; 004845ef
    JZ 0x0048461a                       ; 004845f3
        ;   XREF to: 0048461a (CONDITIONAL_JUMP)  ; LAB_0048461a
    CMP dword ptr [EAX + 0x3bc],0x0     ; 004845f5
    SETZ AL                             ; 004845fc
    AND EAX,0xff                        ; 004845ff
    PUSH EAX                            ; 00484604
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00484605
    ADD EAX,0x1f4                       ; 0048460c
    PUSH EAX                            ; 00484611
    CALL shape_edittool.cpp_FUN_00486120 ; 00484612
        ;   XREF to: 00486120 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00486120()
    ADD ESP,0x8                         ; 00484617
    MOV EAX,dword ptr [ESP + 0x168]     ; 0048461a
        ;   Label: LAB_0048461a
    CMP byte ptr [EAX + 0xc0],0x0       ; 00484621
    JZ 0x0048464f                       ; 00484628
        ;   XREF to: 0048464f (CONDITIONAL_JUMP)  ; LAB_0048464f
    CMP dword ptr [EAX + 0x3bc],0x1     ; 0048462a
    SETZ AL                             ; 00484631
    AND EAX,0xff                        ; 00484634
    PUSH EAX                            ; 00484639
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0048463a
    ADD EAX,0x2d8                       ; 00484641
    PUSH EAX                            ; 00484646
    CALL shape_edittool.cpp_FUN_00486120 ; 00484647
        ;   XREF to: 00486120 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00486120()
    ADD ESP,0x8                         ; 0048464c
    MOV EAX,dword ptr [ESP + 0x168]     ; 0048464f
        ;   Label: LAB_0048464f
    MOV EBX,dword ptr [EAX + 0x58]      ; 00484656
    TEST EBX,EBX                        ; 00484659
    JZ 0x004849ca                       ; 0048465b
        ;   XREF to: 004849ca (CONDITIONAL_JUMP)  ; LAB_004849ca
    ADD ESP,0x154                       ; 00484661
    POP EBP                             ; 00484667
    POP EDI                             ; 00484668
    POP ESI                             ; 00484669
    POP EBX                             ; 0048466a
    RET                                 ; 0048466b
    MOV EAX,dword ptr [ESP + 0x168]     ; 0048466c
        ;   Label: LAB_0048466c
    MOV EDX,dword ptr [ESP + 0x148]     ; 00484673
    MOV ECX,dword ptr [ESP + 0x140]     ; 0048467a
    MOV EAX,dword ptr [EAX + 0x18c]     ; 00484681
    MOV EBX,dword ptr [ESP + 0x138]     ; 00484687
    ADD EDX,EAX                         ; 0048468e
    INC ECX                             ; 00484690
    MOV dword ptr [ESP + 0x148],EDX     ; 00484691
    MOV EDX,dword ptr [ESP + 0x168]     ; 00484698
    INC EBX                             ; 0048469f
    MOV dword ptr [ESP + 0x140],ECX     ; 004846a0
    MOV ESI,dword ptr [EDX + 0x1a0]     ; 004846a7
    MOV dword ptr [ESP + 0x138],EBX     ; 004846ad
    CMP EBX,ESI                         ; 004846b4
    JL 0x0048445e                       ; 004846b6
        ;   XREF to: 0048445e (CONDITIONAL_JUMP)  ; LAB_0048445e
    JMP 0x00484474                      ; 004846bc
        ;   XREF to: 00484474 (UNCONDITIONAL_JUMP)  ; LAB_00484474
    CMP EAX,dword ptr [EDX + 0x194]     ; 004846c1
        ;   Label: LAB_004846c1
    JNZ 0x004847e7                      ; 004846c7
        ;   XREF to: 004847e7 (CONDITIONAL_JUMP)  ; LAB_004847e7
    MOV EDI,dword ptr [ESP + 0x13c]     ; 004846cd
    MOV EAX,EDX                         ; 004846d4
    MOV ESI,dword ptr [ESP + 0x148]     ; 004846d6
    MOV EDX,dword ptr [EDX + 0x1a4]     ; 004846dd
    MOV ECX,dword ptr [EAX + 0x18c]     ; 004846e3
    MOV EBX,dword ptr [EAX + 0x188]     ; 004846e9
    ADD EDI,EDX                         ; 004846ef
    ADD ESI,ECX                         ; 004846f1
    DEC EDI                             ; 004846f3
    DEC ESI                             ; 004846f4
    TEST EBX,EBX                        ; 004846f5
    JZ 0x00484900                       ; 004846f7
        ;   XREF to: 00484900 (CONDITIONAL_JUMP)  ; LAB_00484900
    MOV EAX,[0x01c5bb4c]                ; 004846fd | DAT_01c5bb4c
    MOV EBX,dword ptr [ESP + 0x148]     ; 00484702
        ;   Label: LAB_00484702
    MOV EBP,dword ptr [ESP + 0x13c]     ; 00484709
    MOV EDX,dword ptr [0x01c5baec]      ; 00484710 | DAT_01c5baec
    MOV dword ptr [ESP + 0x12c],EDI     ; 00484716
    MOV dword ptr [ESP + 0x134],ESI     ; 0048471d
    TEST EDX,EDX                        ; 00484724
    JZ 0x00484914                       ; 00484726
        ;   XREF to: 00484914 (CONDITIONAL_JUMP)  ; LAB_00484914
    JZ 0x0048490a                       ; 0048472c
        ;   XREF to: 0048490a (CONDITIONAL_JUMP)  ; LAB_0048490a
    AND EAX,0xff                        ; 00484732
    LEA EAX,[EAX + EAX*0x2]             ; 00484737
    XOR EDX,EDX                         ; 0048473a
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0048473c | DAT_01c6af99
    MOV ECX,EDX                         ; 00484742
    XOR EDX,EDX                         ; 00484744
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 00484746 | DAT_01c6af98
    SHL ECX,0x8                         ; 0048474c
    SHL EDX,0x10                        ; 0048474f
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 00484752 | DAT_01c6af9a
    OR EDX,ECX                          ; 00484758
    AND EAX,0xff                        ; 0048475a
    OR EAX,EDX                          ; 0048475f
    PUSH EAX                            ; 00484761
    CALL engine_mini3d.cpp_FUN_004f3520 ; 00484762
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 00484767
    MOV ECX,dword ptr [ESP + 0x134]     ; 0048476a
        ;   Label: LAB_0048476a
    PUSH ECX                            ; 00484771
    MOV EAX,dword ptr [ESP + 0x130]     ; 00484772
    PUSH EAX                            ; 00484779
    PUSH EBX                            ; 0048477a
    PUSH EBP                            ; 0048477b
    CALL engine_mini3d.cpp_FUN_004f37e0 ; 0048477c
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f37e0()
    ADD ESP,0x10                        ; 00484781
    MOV EAX,dword ptr [ESP + 0x168]     ; 00484784
        ;   Label: LAB_00484784
    CMP dword ptr [EAX + 0x3bc],-0x1    ; 0048478b
    JNZ 0x004847e7                      ; 00484792
        ;   XREF to: 004847e7 (CONDITIONAL_JUMP)  ; LAB_004847e7
    MOV ECX,dword ptr [0x01c5baec]      ; 00484794 | DAT_01c5baec
    TEST ECX,ECX                        ; 0048479a
    JZ 0x00484926                       ; 0048479c
        ;   XREF to: 00484926 (CONDITIONAL_JUMP)  ; LAB_00484926
    XOR EDX,EDX                         ; 004847a2
    XOR EAX,EAX                         ; 004847a4
    MOV DL,byte ptr [0x01c6af99]        ; 004847a6 | DAT_01c6af99
    MOV AL,[0x01c6af98]                 ; 004847ac | DAT_01c6af98
    SHL EDX,0x8                         ; 004847b1
    SHL EAX,0x10                        ; 004847b4
    OR EDX,EAX                          ; 004847b7
    XOR EAX,EAX                         ; 004847b9
    MOV AL,[0x01c6af9a]                 ; 004847bb | DAT_01c6af9a
    OR EAX,EDX                          ; 004847c0
    PUSH EAX                            ; 004847c2
    CALL engine_mini3d.cpp_FUN_004f3520 ; 004847c3
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 004847c8
    PUSH 0x1                            ; 004847cb
        ;   Label: LAB_004847cb
    PUSH ESI                            ; 004847cd
    PUSH EDI                            ; 004847ce
    MOV ESI,dword ptr [ESP + 0x154]     ; 004847cf
    PUSH ESI                            ; 004847d6
    MOV EDI,dword ptr [ESP + 0x14c]     ; 004847d7
    PUSH EDI                            ; 004847de
    CALL shape_edittool.cpp_FUN_0047b5e0 ; 004847df
        ;   XREF to: 0047b5e0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047b5e0()
    ADD ESP,0x14                        ; 004847e4
    MOV EAX,dword ptr [ESP + 0x140]     ; 004847e7
        ;   Label: LAB_004847e7
    PUSH EAX                            ; 004847ee
    MOV EDX,dword ptr [ESP + 0x16c]     ; 004847ef
    XOR EBP,EBP                         ; 004847f6
    PUSH EDX                            ; 004847f8
    MOV dword ptr [ESP + 0x154],EBP     ; 004847f9
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 00484800
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00484805
    MOV EBP,EAX                         ; 00484808
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0048480a
    MOV EAX,dword ptr [ESP + 0x168]     ; 00484811
    MOV EBX,dword ptr [ESP + 0x140]     ; 00484818
    MOV ESI,dword ptr [ESP + 0x168]     ; 0048481f
    PUSH EBX                            ; 00484826
    MOV ECX,dword ptr [EAX + 0x190]     ; 00484827
    MOV EAX,[0x01c5bb40]                ; 0048482d | DAT_01c5bb40
    PUSH ESI                            ; 00484832
    ADD EDI,ECX                         ; 00484833
    MOV dword ptr [ESP + 0x14c],EAX     ; 00484835
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0 ; 0048483c
        ;   XREF to: 00484ca0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 00484841
    TEST EAX,EAX                        ; 00484844
    JZ 0x00484931                       ; 00484846
        ;   XREF to: 00484931 (CONDITIONAL_JUMP)  ; LAB_00484931
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0048484c
        ;   Label: LAB_0048484c
    MOV ECX,dword ptr [ESP + 0x168]     ; 00484853
    SHL EAX,0x2                         ; 0048485a
    ADD EAX,ECX                         ; 0048485d
    MOV dword ptr [ESP + 0x150],EAX     ; 0048485f
    XOR BL,BL                           ; 00484866
    MOV EDX,ESP                         ; 00484868
        ;   Label: LAB_00484868
    MOV BH,byte ptr [EBP]               ; 0048486a
    MOV EAX,EBP                         ; 0048486d
    CMP BL,BH                           ; 0048486f
    JZ 0x00484953                       ; 00484871
        ;   XREF to: 00484953 (CONDITIONAL_JUMP)  ; LAB_00484953
    MOV BH,byte ptr [EAX]               ; 00484877
        ;   Label: LAB_00484877
    LEA ECX,[EAX + 0x1]                 ; 00484879
    CMP BH,0x9                          ; 0048487c
    JNZ 0x00484942                      ; 0048487f
        ;   XREF to: 00484942 (CONDITIONAL_JUMP)  ; LAB_00484942
    MOV ESI,ECX                         ; 00484885
    MOV byte ptr [EDX],BL               ; 00484887
        ;   Label: LAB_00484887
    PUSH 0xffff                         ; 00484889
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0048488e
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 00484893
    PUSH 0x3f800000                     ; 00484896
    CALL engine_mini3d.cpp_FUN_004edaf0 ; 0048489b
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edaf0()
    ADD ESP,0x4                         ; 004848a0
    PUSH -0x1                           ; 004848a3
    MOV EAX,dword ptr [ESP + 0x148]     ; 004848a5
    PUSH EAX                            ; 004848ac
    MOV EDX,dword ptr [ESP + 0x150]     ; 004848ad
    PUSH EDX                            ; 004848b4
    PUSH EDI                            ; 004848b5
    LEA EAX,[ESP + 0x10]                ; 004848b6
    PUSH EAX                            ; 004848ba
    MOV ECX,dword ptr [0x01c5b0e0]      ; 004848bb | DAT_01c5b0e0
    PUSH ECX                            ; 004848c1
    CALL engine_font.cpp_FUN_004b0a20   ; 004848c2
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004848c7
    MOV EAX,dword ptr [ESP + 0x150]     ; 004848ca
    MOV EBP,ESI                         ; 004848d1
    LEA ECX,[EAX + 0x4]                 ; 004848d3
    MOV EDX,dword ptr [EAX + 0x10]      ; 004848d6
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004848d9
    MOV dword ptr [ESP + 0x150],ECX     ; 004848e0
    ADD EDI,EDX                         ; 004848e7
    INC EAX                             ; 004848e9
    MOV CL,byte ptr [ESI]               ; 004848ea
    MOV dword ptr [ESP + 0x14c],EAX     ; 004848ec
    CMP BL,CL                           ; 004848f3
    JZ 0x0048466c                       ; 004848f5
        ;   XREF to: 0048466c (CONDITIONAL_JUMP)  ; LAB_0048466c
    JMP 0x00484868                      ; 004848fb
        ;   XREF to: 00484868 (UNCONDITIONAL_JUMP)  ; LAB_00484868
    MOV EAX,[0x01c5bb48]                ; 00484900 | DAT_01c5bb48
        ;   Label: LAB_00484900
    JMP 0x00484702                      ; 00484905
        ;   XREF to: 00484702 (UNCONDITIONAL_JUMP)  ; LAB_00484702
    MOV [0x01c6b5c0],EAX                ; 0048490a | DAT_01c6b5c0
        ;   Label: LAB_0048490a
    JMP 0x0048476a                      ; 0048490f
        ;   XREF to: 0048476a (UNCONDITIONAL_JUMP)  ; LAB_0048476a
    PUSH EAX                            ; 00484914
        ;   Label: LAB_00484914
    PUSH ESI                            ; 00484915
    PUSH EDI                            ; 00484916
    PUSH EBX                            ; 00484917
    PUSH EBP                            ; 00484918
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 00484919
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0048491e
    JMP 0x00484784                      ; 00484921
        ;   XREF to: 00484784 (UNCONDITIONAL_JUMP)  ; LAB_00484784
    MOV dword ptr [0x01c6b5c0],ECX      ; 00484926 | DAT_01c6b5c0
        ;   Label: LAB_00484926
    JMP 0x004847cb                      ; 0048492c
        ;   XREF to: 004847cb (UNCONDITIONAL_JUMP)  ; LAB_004847cb
    MOV EAX,[0x01c5bb44]                ; 00484931 | DAT_01c5bb44
        ;   Label: LAB_00484931
    MOV dword ptr [ESP + 0x144],EAX     ; 00484936
    JMP 0x0048484c                      ; 0048493d
        ;   XREF to: 0048484c (UNCONDITIONAL_JUMP)  ; LAB_0048484c
    MOV AL,byte ptr [EAX]               ; 00484942
        ;   Label: LAB_00484942
    MOV byte ptr [EDX],AL               ; 00484944
    INC EDX                             ; 00484946
    MOV BH,byte ptr [ECX]               ; 00484947
    MOV EAX,ECX                         ; 00484949
    CMP BL,BH                           ; 0048494b
    JNZ 0x00484877                      ; 0048494d
        ;   XREF to: 00484877 (CONDITIONAL_JUMP)  ; LAB_00484877
    MOV ESI,EAX                         ; 00484953
        ;   Label: LAB_00484953
    JMP 0x00484887                      ; 00484955
        ;   XREF to: 00484887 (UNCONDITIONAL_JUMP)  ; LAB_00484887
    MOV [0x01c6b5c0],EAX                ; 0048495a | DAT_01c6b5c0
        ;   Label: LAB_0048495a
    JMP 0x004844d1                      ; 0048495f
        ;   XREF to: 004844d1 (UNCONDITIONAL_JUMP)  ; LAB_004844d1
    MOV EAX,0x1                         ; 00484964
        ;   Label: LAB_00484964
    JMP 0x00484504                      ; 00484969
        ;   XREF to: 00484504 (UNCONDITIONAL_JUMP)  ; LAB_00484504
    XOR EAX,EAX                         ; 0048496e
        ;   Label: LAB_0048496e
    JMP 0x0048452c                      ; 00484970
        ;   XREF to: 0048452c (UNCONDITIONAL_JUMP)  ; LAB_0048452c
    CMP EBX,0x2                         ; 00484975
        ;   Label: LAB_00484975
    JNZ 0x004845e8                      ; 00484978
        ;   XREF to: 004845e8 (CONDITIONAL_JUMP)  ; LAB_004845e8
    MOV EDX,dword ptr [EAX + 0x198]     ; 0048497e
    MOV EBX,dword ptr [ESP + 0x168]     ; 00484984
    MOV EAX,EDX                         ; 0048498b
    MOV EDI,dword ptr [EBX + 0x1a0]     ; 0048498d
    SAR EDX,0x1f                        ; 00484993
    IDIV EDI                            ; 00484996
    MOV dword ptr [EBX + 0x1bc],EAX     ; 00484998
    MOV EBP,dword ptr [EBX + 0x1a0]     ; 0048499e
    MOV EAX,dword ptr [EBX]             ; 004849a4
    ADD EAX,EBP                         ; 004849a6
    LEA EDX,[EAX + -0x1]                ; 004849a8
    MOV EAX,EDX                         ; 004849ab
    SAR EDX,0x1f                        ; 004849ad
    IDIV EBP                            ; 004849b0
    MOV dword ptr [EBX + 0x1c0],EAX     ; 004849b2
    MOV EAX,dword ptr [EBX + 0x1a8]     ; 004849b8
    PUSH ECX                            ; 004849be
    MOV dword ptr [EBX + 0x1c4],EAX     ; 004849bf
    JMP 0x004845e0                      ; 004849c5
        ;   XREF to: 004845e0 (UNCONDITIONAL_JUMP)  ; LAB_004845e0
    PUSH EBX                            ; 004849ca
        ;   Label: LAB_004849ca
    MOV ESI,dword ptr [0x005fb140]      ; 004849cb | g_CEditorToolsPtr
    PUSH ESI                            ; 004849d1
    CALL shape_edittool.cpp_FUN_00480410 ; 004849d2
        ;   XREF to: 00480410 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00480410()
    ADD ESP,0x8                         ; 004849d7
    ADD ESP,0x154                       ; 004849da
    POP EBP                             ; 004849e0
    POP EDI                             ; 004849e1
    POP ESI                             ; 004849e2
    POP EBX                             ; 004849e3
    RET                                 ; 004849e4

