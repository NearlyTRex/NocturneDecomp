; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_00482350(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00617dd4
;   undefined4 DAT_0061ed94
;   undefined4 DAT_01d02f84
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004dfea0
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0
;   shape_edittool.cpp_CStrList_copyToClipboard_FUN_00481540
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;   wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482350
        ;   Label: shape_edittool.cpp_CPickList_handleInput_FUN_00482350
    PUSH ESI                            ; 00482351
    PUSH EDI                            ; 00482352
    PUSH EBP                            ; 00482353
    MOV EBX,dword ptr [ESP + 0x14]      ; 00482354
    PUSH 0x1c                           ; 00482358
    MOV EAX,[0x00617dd4]                ; 0048235a | DAT_00617dd4
    PUSH EAX                            ; 0048235f | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00482360 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 00482362
    ADD ESP,0x8                         ; 00482365
    TEST EAX,EAX                        ; 00482368
    JZ 0x004823a4                       ; 0048236a
        ;   XREF to: 004823a4 (CONDITIONAL_JUMP)  ; LAB_004823a4
    CMP dword ptr [EBX + 0x3bc],0x1     ; 0048236c
    JNZ 0x0048237f                      ; 00482373
        ;   XREF to: 0048237f (CONDITIONAL_JUMP)  ; LAB_0048237f
    MOV EAX,0xffffffff                  ; 00482375
        ;   Label: LAB_00482375
    POP EBP                             ; 0048237a
    POP EDI                             ; 0048237b
    POP ESI                             ; 0048237c
    POP EBX                             ; 0048237d
    RET                                 ; 0048237e
    MOV ECX,dword ptr [EBX + 0x194]     ; 0048237f
        ;   Label: LAB_0048237f
    PUSH ECX                            ; 00482385
    PUSH EBX                            ; 00482386
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0 ; 00482387
        ;   XREF to: 00483aa0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 0048238c
    TEST EAX,EAX                        ; 0048238f
    JZ 0x004823a4                       ; 00482391
        ;   XREF to: 004823a4 (CONDITIONAL_JUMP)  ; LAB_004823a4
    MOV dword ptr [EBX + 0x188],0x1     ; 00482393
    XOR EAX,EAX                         ; 0048239d
    POP EBP                             ; 0048239f
    POP EDI                             ; 004823a0
    POP ESI                             ; 004823a1
    POP EBX                             ; 004823a2
    RET                                 ; 004823a3
    PUSH 0x1                            ; 004823a4
        ;   Label: LAB_004823a4
    MOV EAX,[0x00617dd4]                ; 004823a6 | DAT_00617dd4
    PUSH EAX                            ; 004823ab | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004823ac | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004823ae
    ADD ESP,0x8                         ; 004823b1
    TEST EAX,EAX                        ; 004823b4
    JNZ 0x00482375                      ; 004823b6
        ;   XREF to: 00482375 (CONDITIONAL_JUMP)  ; LAB_00482375
    PUSH 0x1d                           ; 004823b8
    MOV EAX,[0x00617dd4]                ; 004823ba | DAT_00617dd4
    PUSH EAX                            ; 004823bf | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004823c0 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004823c2
    ADD ESP,0x8                         ; 004823c4
    TEST EAX,EAX                        ; 004823c7
    JZ 0x00482405                       ; 004823c9
        ;   XREF to: 00482405 (CONDITIONAL_JUMP)  ; LAB_00482405
    PUSH 0x52                           ; 004823cb
    MOV EAX,[0x00617dd4]                ; 004823cd | DAT_00617dd4
    PUSH EAX                            ; 004823d2 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004823d3 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004823d5
    ADD ESP,0x8                         ; 004823d8
    TEST EAX,EAX                        ; 004823db
    JZ 0x004823e8                       ; 004823dd
        ;   XREF to: 004823e8 (CONDITIONAL_JUMP)  ; LAB_004823e8
    PUSH EBX                            ; 004823df
    CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_00481540 ; 004823e0
        ;   XREF to: 00481540 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_copyToClipboard_FUN_00481540(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004823e5
    PUSH 0x2e                           ; 004823e8
        ;   Label: LAB_004823e8
    MOV EAX,[0x00617dd4]                ; 004823ea | DAT_00617dd4
    PUSH EAX                            ; 004823ef | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004823f0 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004823f2
    ADD ESP,0x8                         ; 004823f5
    TEST EAX,EAX                        ; 004823f8
    JZ 0x00482405                       ; 004823fa
        ;   XREF to: 00482405 (CONDITIONAL_JUMP)  ; LAB_00482405
    PUSH EBX                            ; 004823fc
    CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_00481540 ; 004823fd
        ;   XREF to: 00481540 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_copyToClipboard_FUN_00481540(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00482402
    PUSH 0x2a                           ; 00482405
        ;   Label: LAB_00482405
    MOV EAX,[0x00617dd4]                ; 00482407 | DAT_00617dd4
    PUSH EAX                            ; 0048240c | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0048240d | DAT_01d02f84
    XOR ESI,ESI                         ; 0048240f
    CALL dword ptr [EDX]                ; 00482411
    ADD ESP,0x8                         ; 00482413
    TEST EAX,EAX                        ; 00482416
    JZ 0x00482526                       ; 00482418
        ;   XREF to: 00482526 (CONDITIONAL_JUMP)  ; LAB_00482526
    PUSH 0x2a                           ; 0048241e
        ;   Label: LAB_0048241e
    MOV EAX,[0x00617dd4]                ; 00482420 | DAT_00617dd4
    PUSH EAX                            ; 00482425 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00482426 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 00482428
    ADD ESP,0x8                         ; 0048242a
    TEST EAX,EAX                        ; 0048242d
    JNZ 0x00482548                      ; 0048242f
        ;   XREF to: 00482548 (CONDITIONAL_JUMP)  ; LAB_00482548
    XOR EAX,EAX                         ; 00482435
        ;   Label: LAB_00482435
    XOR EDX,EDX                         ; 00482437
    MOV EDI,dword ptr [EBX + 0x3bc]     ; 00482439
        ;   Label: LAB_00482439
    ADD EDI,ESI                         ; 0048243f
    MOV dword ptr [EBX + 0x3bc],EDI     ; 00482441
    CMP EDI,0x2                         ; 00482447
    JL 0x00482588                       ; 0048244a
        ;   XREF to: 00482588 (CONDITIONAL_JUMP)  ; LAB_00482588
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 00482450
    LEA ESI,[EBX + 0x124]               ; 0048245a
        ;   Label: LAB_0048245a
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40 ; 00482460
        ;   XREF to: 0058eb40 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40()
        ;   Label: LAB_00482460
    TEST EAX,EAX                        ; 00482465
    JZ 0x004825e8                       ; 00482467
        ;   XREF to: 004825e8 (CONDITIONAL_JUMP)  ; LAB_004825e8
    MOV EDI,dword ptr [0x00617dd4]      ; 0048246d | DAT_00617dd4
    PUSH EDI                            ; 00482473 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004dfea0 ; 00482474
        ;   XREF to: 004dfea0 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004dfea0(CKeys * this_ptr)
    ADD ESP,0x4                         ; 00482479
    MOV EDX,EAX                         ; 0048247c
    CMP EAX,0x8                         ; 0048247e
    JNZ 0x0048248a                      ; 00482481
        ;   XREF to: 0048248a (CONDITIONAL_JUMP)  ; LAB_0048248a
    MOV byte ptr [EBX + 0x124],0x0      ; 00482483
    CMP dword ptr [EBX + 0x1b4],0x0     ; 0048248a
        ;   Label: LAB_0048248a
    JNZ 0x00482460                      ; 00482491
        ;   XREF to: 00482460 (CONDITIONAL_JUMP)  ; LAB_00482460
    MOV AL,DL                           ; 00482493
    INC AL                              ; 00482495
    AND EAX,0xff                        ; 00482497
    TEST byte ptr [EAX + 0x61ed94],0xe0 ; 0048249c | DAT_0061ed94
    JZ 0x004824c7                       ; 004824a3
        ;   XREF to: 004824c7 (CONDITIONAL_JUMP)  ; LAB_004824c7
    MOV EDI,ESI                         ; 004824a5
    SUB ECX,ECX                         ; 004824a7
    DEC ECX                             ; 004824a9
    XOR EAX,EAX                         ; 004824aa
    SCASB.REPNE ES:EDI                  ; 004824ac
    NOT ECX                             ; 004824ae
    DEC ECX                             ; 004824b0
    CMP ECX,0x63                        ; 004824b1
    JNC 0x004824c7                      ; 004824b4
        ;   XREF to: 004824c7 (CONDITIONAL_JUMP)  ; LAB_004824c7
    LEA EAX,[EBX + ECX*0x1]             ; 004824b6
    MOV byte ptr [EAX + 0x124],DL       ; 004824b9
    MOV byte ptr [ECX + EBX*0x1 + 0x125],0x0 ; 004824bf
    CMP byte ptr [EBX + 0x124],0x0      ; 004824c7
        ;   Label: LAB_004824c7
    JZ 0x00482460                       ; 004824ce
        ;   XREF to: 00482460 (CONDITIONAL_JUMP)  ; LAB_00482460
    MOV EAX,dword ptr [EBX + 0x194]     ; 004824d0
    PUSH EAX                            ; 004824d6
    PUSH EBX                            ; 004824d7
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 004824d8
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004824dd
    PUSH EAX                            ; 004824e0
    PUSH ESI                            ; 004824e1
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004824e2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004824e7
    TEST EAX,EAX                        ; 004824ea
    JLE 0x004825d9                      ; 004824ec
        ;   XREF to: 004825d9 (CONDITIONAL_JUMP)  ; LAB_004825d9
    MOV EDX,dword ptr [EBX]             ; 004824f2
        ;   Label: LAB_004824f2
    MOV EAX,dword ptr [EBX + 0x194]     ; 004824f4
    CMP EAX,EDX                         ; 004824fa
    JGE 0x00482460                      ; 004824fc
        ;   XREF to: 00482460 (CONDITIONAL_JUMP)  ; LAB_00482460
    PUSH EAX                            ; 00482502
    PUSH EBX                            ; 00482503
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 00482504
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00482509
    PUSH EAX                            ; 0048250c
    PUSH ESI                            ; 0048250d
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048250e
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00482513
    TEST EAX,EAX                        ; 00482516
    JLE 0x00482460                      ; 00482518
        ;   XREF to: 00482460 (CONDITIONAL_JUMP)  ; LAB_00482460
    INC dword ptr [EBX + 0x194]         ; 0048251e
    JMP 0x004824f2                      ; 00482524
        ;   XREF to: 004824f2 (UNCONDITIONAL_JUMP)  ; LAB_004824f2
    PUSH 0xf                            ; 00482526
        ;   Label: LAB_00482526
    MOV EAX,[0x00617dd4]                ; 00482528 | DAT_00617dd4
    PUSH EAX                            ; 0048252d | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0048252e | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 00482530
    ADD ESP,0x8                         ; 00482533
    TEST EAX,EAX                        ; 00482536
    JZ 0x0048241e                       ; 00482538
        ;   XREF to: 0048241e (CONDITIONAL_JUMP)  ; LAB_0048241e
    MOV ESI,0x1                         ; 0048253e
    JMP 0x0048241e                      ; 00482543
        ;   XREF to: 0048241e (UNCONDITIONAL_JUMP)  ; LAB_0048241e
    PUSH 0xf                            ; 00482548
        ;   Label: LAB_00482548
    MOV EAX,[0x00617dd4]                ; 0048254a | DAT_00617dd4
    PUSH EAX                            ; 0048254f | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00482550 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 00482552
    ADD ESP,0x8                         ; 00482555
    TEST EAX,EAX                        ; 00482558
    JZ 0x00482435                       ; 0048255a
        ;   XREF to: 00482435 (CONDITIONAL_JUMP)  ; LAB_00482435
    MOV ESI,0xffffffff                  ; 00482560
    JMP 0x00482435                      ; 00482565
        ;   XREF to: 00482435 (UNCONDITIONAL_JUMP)  ; LAB_00482435
    INC EAX                             ; 0048256a
        ;   Label: LAB_0048256a
    CMP EAX,0xa                         ; 0048256b
    JL 0x00482439                       ; 0048256e
        ;   XREF to: 00482439 (CONDITIONAL_JUMP)  ; LAB_00482439
    CMP dword ptr [EBX + 0x3bc],-0x1    ; 00482574
    JZ 0x0048245a                       ; 0048257b
        ;   XREF to: 0048245a (CONDITIONAL_JUMP)  ; LAB_0048245a
    XOR EAX,EAX                         ; 00482581
    POP EBP                             ; 00482583
    POP EDI                             ; 00482584
    POP ESI                             ; 00482585
    POP EBX                             ; 00482586
    RET                                 ; 00482587
    CMP EDI,-0x1                        ; 00482588
        ;   Label: LAB_00482588
    JGE 0x004825b3                      ; 0048258b
        ;   XREF to: 004825b3 (CONDITIONAL_JUMP)  ; LAB_004825b3
    MOV dword ptr [EBX + 0x3bc],0x1     ; 0048258d
    CMP DL,byte ptr [EBX + 0xc0]        ; 00482597
        ;   Label: LAB_00482597
    JZ 0x0048256a                       ; 0048259d
        ;   XREF to: 0048256a (CONDITIONAL_JUMP)  ; LAB_0048256a
    CMP dword ptr [EBX + 0x3bc],-0x1    ; 0048259f
    JZ 0x0048245a                       ; 004825a6
        ;   XREF to: 0048245a (CONDITIONAL_JUMP)  ; LAB_0048245a
    XOR EAX,EAX                         ; 004825ac
    POP EBP                             ; 004825ae
    POP EDI                             ; 004825af
    POP ESI                             ; 004825b0
    POP EBX                             ; 004825b1
    RET                                 ; 004825b2
    CMP EDX,EDI                         ; 004825b3
        ;   Label: LAB_004825b3
    JNZ 0x004825bc                      ; 004825b5
        ;   XREF to: 004825bc (CONDITIONAL_JUMP)  ; LAB_004825bc
    CMP DL,byte ptr [EBX + 0x5c]        ; 004825b7
    JZ 0x0048256a                       ; 004825ba
        ;   XREF to: 0048256a (CONDITIONAL_JUMP)  ; LAB_0048256a
    CMP dword ptr [EBX + 0x3bc],0x1     ; 004825bc
        ;   Label: LAB_004825bc
    JZ 0x00482597                       ; 004825c3
        ;   XREF to: 00482597 (CONDITIONAL_JUMP)  ; LAB_00482597
    CMP dword ptr [EBX + 0x3bc],-0x1    ; 004825c5
    JZ 0x0048245a                       ; 004825cc
        ;   XREF to: 0048245a (CONDITIONAL_JUMP)  ; LAB_0048245a
    XOR EAX,EAX                         ; 004825d2
    POP EBP                             ; 004825d4
    POP EDI                             ; 004825d5
    POP ESI                             ; 004825d6
    POP EBX                             ; 004825d7
    RET                                 ; 004825d8
    MOV dword ptr [EBX + 0x194],0x0     ; 004825d9
        ;   Label: LAB_004825d9
    JMP 0x004824f2                      ; 004825e3
        ;   XREF to: 004824f2 (UNCONDITIONAL_JUMP)  ; LAB_004824f2
    PUSH 0x48                           ; 004825e8
        ;   Label: LAB_004825e8
    MOV EAX,[0x00617dd4]                ; 004825ea | DAT_00617dd4
    PUSH EAX                            ; 004825ef | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004825f0 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004825f2
    ADD ESP,0x8                         ; 004825f5
    TEST EAX,EAX                        ; 004825f8
    JZ 0x00482610                       ; 004825fa
        ;   XREF to: 00482610 (CONDITIONAL_JUMP)  ; LAB_00482610
    MOV EDX,dword ptr [EBX + 0x194]     ; 004825fc
    MOV byte ptr [EBX + 0x124],0x0      ; 00482602
    DEC EDX                             ; 00482609
    MOV dword ptr [EBX + 0x194],EDX     ; 0048260a
    PUSH 0x50                           ; 00482610
        ;   Label: LAB_00482610
    MOV EAX,[0x00617dd4]                ; 00482612 | DAT_00617dd4
    PUSH EAX                            ; 00482617 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00482618 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 0048261a
    ADD ESP,0x8                         ; 0048261d
    TEST EAX,EAX                        ; 00482620
    JZ 0x00482638                       ; 00482622
        ;   XREF to: 00482638 (CONDITIONAL_JUMP)  ; LAB_00482638
    MOV ECX,dword ptr [EBX + 0x194]     ; 00482624
    MOV byte ptr [EBX + 0x124],0x0      ; 0048262a
    INC ECX                             ; 00482631
    MOV dword ptr [EBX + 0x194],ECX     ; 00482632
    PUSH 0x47                           ; 00482638
        ;   Label: LAB_00482638
    MOV EAX,[0x00617dd4]                ; 0048263a | DAT_00617dd4
    PUSH EAX                            ; 0048263f | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00482640 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 00482642
    ADD ESP,0x8                         ; 00482645
    TEST EAX,EAX                        ; 00482648
    JZ 0x0048265d                       ; 0048264a
        ;   XREF to: 0048265d (CONDITIONAL_JUMP)  ; LAB_0048265d
    MOV byte ptr [EBX + 0x124],0x0      ; 0048264c
    MOV dword ptr [EBX + 0x194],0x0     ; 00482653
    PUSH 0x4f                           ; 0048265d
        ;   Label: LAB_0048265d
    MOV EAX,[0x00617dd4]                ; 0048265f | DAT_00617dd4
    PUSH EAX                            ; 00482664 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00482665 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 00482667
    ADD ESP,0x8                         ; 0048266a
    TEST EAX,EAX                        ; 0048266d
    JZ 0x00482680                       ; 0048266f
        ;   XREF to: 00482680 (CONDITIONAL_JUMP)  ; LAB_00482680
    MOV EAX,dword ptr [EBX]             ; 00482671
    MOV byte ptr [EBX + 0x124],0x0      ; 00482673
    MOV dword ptr [EBX + 0x194],EAX     ; 0048267a
    PUSH 0x49                           ; 00482680
        ;   Label: LAB_00482680
    MOV EAX,[0x00617dd4]                ; 00482682 | DAT_00617dd4
    PUSH EAX                            ; 00482687 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00482688 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 0048268a
    ADD ESP,0x8                         ; 0048268d
    TEST EAX,EAX                        ; 00482690
    JZ 0x004826c3                       ; 00482692
        ;   XREF to: 004826c3 (CONDITIONAL_JUMP)  ; LAB_004826c3
    MOV ESI,dword ptr [EBX + 0x194]     ; 00482694
    MOV EAX,dword ptr [EBX + 0x19c]     ; 0048269a
    MOV EDI,dword ptr [EBX + 0x198]     ; 004826a0
    MOV byte ptr [EBX + 0x124],0x0      ; 004826a6
    SUB ESI,EAX                         ; 004826ad
    MOV EAX,dword ptr [EBX + 0x19c]     ; 004826af
    MOV dword ptr [EBX + 0x194],ESI     ; 004826b5
    SUB EDI,EAX                         ; 004826bb
    MOV dword ptr [EBX + 0x198],EDI     ; 004826bd
    PUSH 0x51                           ; 004826c3
        ;   Label: LAB_004826c3
    MOV EAX,[0x00617dd4]                ; 004826c5 | DAT_00617dd4
    PUSH EAX                            ; 004826ca | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004826cb | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004826cd
    ADD ESP,0x8                         ; 004826d0
    TEST EAX,EAX                        ; 004826d3
    JZ 0x00482706                       ; 004826d5
        ;   XREF to: 00482706 (CONDITIONAL_JUMP)  ; LAB_00482706
    MOV EBP,dword ptr [EBX + 0x194]     ; 004826d7
    MOV EAX,dword ptr [EBX + 0x19c]     ; 004826dd
    MOV EDX,dword ptr [EBX + 0x198]     ; 004826e3
    MOV byte ptr [EBX + 0x124],0x0      ; 004826e9
    ADD EBP,EAX                         ; 004826f0
    MOV EAX,dword ptr [EBX + 0x19c]     ; 004826f2
    MOV dword ptr [EBX + 0x194],EBP     ; 004826f8
    ADD EDX,EAX                         ; 004826fe
    MOV dword ptr [EBX + 0x198],EDX     ; 00482700
    PUSH 0x4b                           ; 00482706
        ;   Label: LAB_00482706
    MOV EAX,[0x00617dd4]                ; 00482708 | DAT_00617dd4
    PUSH EAX                            ; 0048270d | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0048270e | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 00482710
    ADD ESP,0x8                         ; 00482713
    TEST EAX,EAX                        ; 00482716
    JZ 0x00482735                       ; 00482718
        ;   XREF to: 00482735 (CONDITIONAL_JUMP)  ; LAB_00482735
    MOV ECX,dword ptr [EBX + 0x194]     ; 0048271a
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 00482720
    MOV byte ptr [EBX + 0x124],0x0      ; 00482726
    SUB ECX,EAX                         ; 0048272d
    MOV dword ptr [EBX + 0x194],ECX     ; 0048272f
    PUSH 0x4d                           ; 00482735
        ;   Label: LAB_00482735
    MOV EAX,[0x00617dd4]                ; 00482737 | DAT_00617dd4
    PUSH EAX                            ; 0048273c | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0048273d | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 0048273f
    ADD ESP,0x8                         ; 00482742
    TEST EAX,EAX                        ; 00482745
    JZ 0x00482764                       ; 00482747
        ;   XREF to: 00482764 (CONDITIONAL_JUMP)  ; LAB_00482764
    MOV ESI,dword ptr [EBX + 0x194]     ; 00482749
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 0048274f
    MOV byte ptr [EBX + 0x124],0x0      ; 00482755
    ADD ESI,EAX                         ; 0048275c
    MOV dword ptr [EBX + 0x194],ESI     ; 0048275e
    XOR EAX,EAX                         ; 00482764
        ;   Label: LAB_00482764
    POP EBP                             ; 00482766
    POP EDI                             ; 00482767
    POP ESI                             ; 00482768
    POP EBX                             ; 00482769
    RET                                 ; 0048276a

