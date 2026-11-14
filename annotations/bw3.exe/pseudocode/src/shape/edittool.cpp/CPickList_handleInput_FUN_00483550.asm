; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_00483550(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00600284
;   undefined4 DAT_006074b8
;   undefined4 DAT_01d70a78
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004df590
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0
;   shape_edittool.cpp_CStrList_copyToClipboard_FUN_00482740
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
;   wincore_winrun.cpp_wasKeyPressed_FUN_00580800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483550
        ;   Label: shape_edittool.cpp_CPickList_handleInput_FUN_00483550
    PUSH ESI                            ; 00483551
    PUSH EDI                            ; 00483552
    PUSH EBP                            ; 00483553
    MOV EBX,dword ptr [ESP + 0x14]      ; 00483554
    PUSH 0x1c                           ; 00483558
    MOV EAX,[0x00600284]                ; 0048355a | DAT_00600284
    PUSH EAX                            ; 0048355f | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00483560 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 00483562
    ADD ESP,0x8                         ; 00483565
    TEST EAX,EAX                        ; 00483568
    JZ 0x004835a4                       ; 0048356a
        ;   XREF to: 004835a4 (CONDITIONAL_JUMP)  ; LAB_004835a4
    CMP dword ptr [EBX + 0x3bc],0x1     ; 0048356c
    JNZ 0x0048357f                      ; 00483573
        ;   XREF to: 0048357f (CONDITIONAL_JUMP)  ; LAB_0048357f
    MOV EAX,0xffffffff                  ; 00483575
        ;   Label: LAB_00483575
    POP EBP                             ; 0048357a
    POP EDI                             ; 0048357b
    POP ESI                             ; 0048357c
    POP EBX                             ; 0048357d
    RET                                 ; 0048357e
    MOV ECX,dword ptr [EBX + 0x194]     ; 0048357f
        ;   Label: LAB_0048357f
    PUSH ECX                            ; 00483585
    PUSH EBX                            ; 00483586
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0 ; 00483587
        ;   XREF to: 00484ca0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 0048358c
    TEST EAX,EAX                        ; 0048358f
    JZ 0x004835a4                       ; 00483591
        ;   XREF to: 004835a4 (CONDITIONAL_JUMP)  ; LAB_004835a4
    MOV dword ptr [EBX + 0x188],0x1     ; 00483593
    XOR EAX,EAX                         ; 0048359d
    POP EBP                             ; 0048359f
    POP EDI                             ; 004835a0
    POP ESI                             ; 004835a1
    POP EBX                             ; 004835a2
    RET                                 ; 004835a3
    PUSH 0x1                            ; 004835a4
        ;   Label: LAB_004835a4
    MOV EAX,[0x00600284]                ; 004835a6 | DAT_00600284
    PUSH EAX                            ; 004835ab | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004835ac | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004835ae
    ADD ESP,0x8                         ; 004835b1
    TEST EAX,EAX                        ; 004835b4
    JNZ 0x00483575                      ; 004835b6
        ;   XREF to: 00483575 (CONDITIONAL_JUMP)  ; LAB_00483575
    PUSH 0x1d                           ; 004835b8
    MOV EAX,[0x00600284]                ; 004835ba | DAT_00600284
    PUSH EAX                            ; 004835bf | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004835c0 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004835c2
    ADD ESP,0x8                         ; 004835c4
    TEST EAX,EAX                        ; 004835c7
    JZ 0x00483605                       ; 004835c9
        ;   XREF to: 00483605 (CONDITIONAL_JUMP)  ; LAB_00483605
    PUSH 0x52                           ; 004835cb
    MOV EAX,[0x00600284]                ; 004835cd | DAT_00600284
    PUSH EAX                            ; 004835d2 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004835d3 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004835d5
    ADD ESP,0x8                         ; 004835d8
    TEST EAX,EAX                        ; 004835db
    JZ 0x004835e8                       ; 004835dd
        ;   XREF to: 004835e8 (CONDITIONAL_JUMP)  ; LAB_004835e8
    PUSH EBX                            ; 004835df
    CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_00482740 ; 004835e0
        ;   XREF to: 00482740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_copyToClipboard_FUN_00482740(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004835e5
    PUSH 0x2e                           ; 004835e8
        ;   Label: LAB_004835e8
    MOV EAX,[0x00600284]                ; 004835ea | DAT_00600284
    PUSH EAX                            ; 004835ef | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004835f0 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004835f2
    ADD ESP,0x8                         ; 004835f5
    TEST EAX,EAX                        ; 004835f8
    JZ 0x00483605                       ; 004835fa
        ;   XREF to: 00483605 (CONDITIONAL_JUMP)  ; LAB_00483605
    PUSH EBX                            ; 004835fc
    CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_00482740 ; 004835fd
        ;   XREF to: 00482740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_copyToClipboard_FUN_00482740(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00483602
    PUSH 0x2a                           ; 00483605
        ;   Label: LAB_00483605
    MOV EAX,[0x00600284]                ; 00483607 | DAT_00600284
    PUSH EAX                            ; 0048360c | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0048360d | DAT_01d70a78
    XOR ESI,ESI                         ; 0048360f
    CALL dword ptr [EDX]                ; 00483611
    ADD ESP,0x8                         ; 00483613
    TEST EAX,EAX                        ; 00483616
    JZ 0x00483726                       ; 00483618
        ;   XREF to: 00483726 (CONDITIONAL_JUMP)  ; LAB_00483726
    PUSH 0x2a                           ; 0048361e
        ;   Label: LAB_0048361e
    MOV EAX,[0x00600284]                ; 00483620 | DAT_00600284
    PUSH EAX                            ; 00483625 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00483626 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 00483628
    ADD ESP,0x8                         ; 0048362a
    TEST EAX,EAX                        ; 0048362d
    JNZ 0x00483748                      ; 0048362f
        ;   XREF to: 00483748 (CONDITIONAL_JUMP)  ; LAB_00483748
    XOR EAX,EAX                         ; 00483635
        ;   Label: LAB_00483635
    XOR EDX,EDX                         ; 00483637
    MOV EDI,dword ptr [EBX + 0x3bc]     ; 00483639
        ;   Label: LAB_00483639
    ADD EDI,ESI                         ; 0048363f
    MOV dword ptr [EBX + 0x3bc],EDI     ; 00483641
    CMP EDI,0x2                         ; 00483647
    JL 0x00483788                       ; 0048364a
        ;   XREF to: 00483788 (CONDITIONAL_JUMP)  ; LAB_00483788
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 00483650
    LEA ESI,[EBX + 0x124]               ; 0048365a
        ;   Label: LAB_0048365a
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00580800 ; 00483660
        ;   XREF to: 00580800 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00580800()
        ;   Label: LAB_00483660
    TEST EAX,EAX                        ; 00483665
    JZ 0x004837e8                       ; 00483667
        ;   XREF to: 004837e8 (CONDITIONAL_JUMP)  ; LAB_004837e8
    MOV EDI,dword ptr [0x00600284]      ; 0048366d | DAT_00600284
    PUSH EDI                            ; 00483673 | DAT_01d70a78
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004df590 ; 00483674
        ;   XREF to: 004df590 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004df590(CKeys * this_ptr)
    ADD ESP,0x4                         ; 00483679
    MOV EDX,EAX                         ; 0048367c
    CMP EAX,0x8                         ; 0048367e
    JNZ 0x0048368a                      ; 00483681
        ;   XREF to: 0048368a (CONDITIONAL_JUMP)  ; LAB_0048368a
    MOV byte ptr [EBX + 0x124],0x0      ; 00483683
    CMP dword ptr [EBX + 0x1b4],0x0     ; 0048368a
        ;   Label: LAB_0048368a
    JNZ 0x00483660                      ; 00483691
        ;   XREF to: 00483660 (CONDITIONAL_JUMP)  ; LAB_00483660
    MOV AL,DL                           ; 00483693
    INC AL                              ; 00483695
    AND EAX,0xff                        ; 00483697
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0048369c | DAT_006074b8
    JZ 0x004836c7                       ; 004836a3
        ;   XREF to: 004836c7 (CONDITIONAL_JUMP)  ; LAB_004836c7
    MOV EDI,ESI                         ; 004836a5
    SUB ECX,ECX                         ; 004836a7
    DEC ECX                             ; 004836a9
    XOR EAX,EAX                         ; 004836aa
    SCASB.REPNE ES:EDI                  ; 004836ac
    NOT ECX                             ; 004836ae
    DEC ECX                             ; 004836b0
    CMP ECX,0x63                        ; 004836b1
    JNC 0x004836c7                      ; 004836b4
        ;   XREF to: 004836c7 (CONDITIONAL_JUMP)  ; LAB_004836c7
    LEA EAX,[EBX + ECX*0x1]             ; 004836b6
    MOV byte ptr [EAX + 0x124],DL       ; 004836b9
    MOV byte ptr [ECX + EBX*0x1 + 0x125],0x0 ; 004836bf
    CMP byte ptr [EBX + 0x124],0x0      ; 004836c7
        ;   Label: LAB_004836c7
    JZ 0x00483660                       ; 004836ce
        ;   XREF to: 00483660 (CONDITIONAL_JUMP)  ; LAB_00483660
    MOV EAX,dword ptr [EBX + 0x194]     ; 004836d0
    PUSH EAX                            ; 004836d6
    PUSH EBX                            ; 004836d7
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 004836d8
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004836dd
    PUSH EAX                            ; 004836e0
    PUSH ESI                            ; 004836e1
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004836e2
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004836e7
    TEST EAX,EAX                        ; 004836ea
    JLE 0x004837d9                      ; 004836ec
        ;   XREF to: 004837d9 (CONDITIONAL_JUMP)  ; LAB_004837d9
    MOV EDX,dword ptr [EBX]             ; 004836f2
        ;   Label: LAB_004836f2
    MOV EAX,dword ptr [EBX + 0x194]     ; 004836f4
    CMP EAX,EDX                         ; 004836fa
    JGE 0x00483660                      ; 004836fc
        ;   XREF to: 00483660 (CONDITIONAL_JUMP)  ; LAB_00483660
    PUSH EAX                            ; 00483702
    PUSH EBX                            ; 00483703
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 00483704
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00483709
    PUSH EAX                            ; 0048370c
    PUSH ESI                            ; 0048370d
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048370e
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00483713
    TEST EAX,EAX                        ; 00483716
    JLE 0x00483660                      ; 00483718
        ;   XREF to: 00483660 (CONDITIONAL_JUMP)  ; LAB_00483660
    INC dword ptr [EBX + 0x194]         ; 0048371e
    JMP 0x004836f2                      ; 00483724
        ;   XREF to: 004836f2 (UNCONDITIONAL_JUMP)  ; LAB_004836f2
    PUSH 0xf                            ; 00483726
        ;   Label: LAB_00483726
    MOV EAX,[0x00600284]                ; 00483728 | DAT_00600284
    PUSH EAX                            ; 0048372d | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0048372e | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 00483730
    ADD ESP,0x8                         ; 00483733
    TEST EAX,EAX                        ; 00483736
    JZ 0x0048361e                       ; 00483738
        ;   XREF to: 0048361e (CONDITIONAL_JUMP)  ; LAB_0048361e
    MOV ESI,0x1                         ; 0048373e
    JMP 0x0048361e                      ; 00483743
        ;   XREF to: 0048361e (UNCONDITIONAL_JUMP)  ; LAB_0048361e
    PUSH 0xf                            ; 00483748
        ;   Label: LAB_00483748
    MOV EAX,[0x00600284]                ; 0048374a | DAT_00600284
    PUSH EAX                            ; 0048374f | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00483750 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 00483752
    ADD ESP,0x8                         ; 00483755
    TEST EAX,EAX                        ; 00483758
    JZ 0x00483635                       ; 0048375a
        ;   XREF to: 00483635 (CONDITIONAL_JUMP)  ; LAB_00483635
    MOV ESI,0xffffffff                  ; 00483760
    JMP 0x00483635                      ; 00483765
        ;   XREF to: 00483635 (UNCONDITIONAL_JUMP)  ; LAB_00483635
    INC EAX                             ; 0048376a
        ;   Label: LAB_0048376a
    CMP EAX,0xa                         ; 0048376b
    JL 0x00483639                       ; 0048376e
        ;   XREF to: 00483639 (CONDITIONAL_JUMP)  ; LAB_00483639
    CMP dword ptr [EBX + 0x3bc],-0x1    ; 00483774
    JZ 0x0048365a                       ; 0048377b
        ;   XREF to: 0048365a (CONDITIONAL_JUMP)  ; LAB_0048365a
    XOR EAX,EAX                         ; 00483781
    POP EBP                             ; 00483783
    POP EDI                             ; 00483784
    POP ESI                             ; 00483785
    POP EBX                             ; 00483786
    RET                                 ; 00483787
    CMP EDI,-0x1                        ; 00483788
        ;   Label: LAB_00483788
    JGE 0x004837b3                      ; 0048378b
        ;   XREF to: 004837b3 (CONDITIONAL_JUMP)  ; LAB_004837b3
    MOV dword ptr [EBX + 0x3bc],0x1     ; 0048378d
    CMP DL,byte ptr [EBX + 0xc0]        ; 00483797
        ;   Label: LAB_00483797
    JZ 0x0048376a                       ; 0048379d
        ;   XREF to: 0048376a (CONDITIONAL_JUMP)  ; LAB_0048376a
    CMP dword ptr [EBX + 0x3bc],-0x1    ; 0048379f
    JZ 0x0048365a                       ; 004837a6
        ;   XREF to: 0048365a (CONDITIONAL_JUMP)  ; LAB_0048365a
    XOR EAX,EAX                         ; 004837ac
    POP EBP                             ; 004837ae
    POP EDI                             ; 004837af
    POP ESI                             ; 004837b0
    POP EBX                             ; 004837b1
    RET                                 ; 004837b2
    CMP EDX,EDI                         ; 004837b3
        ;   Label: LAB_004837b3
    JNZ 0x004837bc                      ; 004837b5
        ;   XREF to: 004837bc (CONDITIONAL_JUMP)  ; LAB_004837bc
    CMP DL,byte ptr [EBX + 0x5c]        ; 004837b7
    JZ 0x0048376a                       ; 004837ba
        ;   XREF to: 0048376a (CONDITIONAL_JUMP)  ; LAB_0048376a
    CMP dword ptr [EBX + 0x3bc],0x1     ; 004837bc
        ;   Label: LAB_004837bc
    JZ 0x00483797                       ; 004837c3
        ;   XREF to: 00483797 (CONDITIONAL_JUMP)  ; LAB_00483797
    CMP dword ptr [EBX + 0x3bc],-0x1    ; 004837c5
    JZ 0x0048365a                       ; 004837cc
        ;   XREF to: 0048365a (CONDITIONAL_JUMP)  ; LAB_0048365a
    XOR EAX,EAX                         ; 004837d2
    POP EBP                             ; 004837d4
    POP EDI                             ; 004837d5
    POP ESI                             ; 004837d6
    POP EBX                             ; 004837d7
    RET                                 ; 004837d8
    MOV dword ptr [EBX + 0x194],0x0     ; 004837d9
        ;   Label: LAB_004837d9
    JMP 0x004836f2                      ; 004837e3
        ;   XREF to: 004836f2 (UNCONDITIONAL_JUMP)  ; LAB_004836f2
    PUSH 0x48                           ; 004837e8
        ;   Label: LAB_004837e8
    MOV EAX,[0x00600284]                ; 004837ea | DAT_00600284
    PUSH EAX                            ; 004837ef | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004837f0 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004837f2
    ADD ESP,0x8                         ; 004837f5
    TEST EAX,EAX                        ; 004837f8
    JZ 0x00483810                       ; 004837fa
        ;   XREF to: 00483810 (CONDITIONAL_JUMP)  ; LAB_00483810
    MOV EDX,dword ptr [EBX + 0x194]     ; 004837fc
    MOV byte ptr [EBX + 0x124],0x0      ; 00483802
    DEC EDX                             ; 00483809
    MOV dword ptr [EBX + 0x194],EDX     ; 0048380a
    PUSH 0x50                           ; 00483810
        ;   Label: LAB_00483810
    MOV EAX,[0x00600284]                ; 00483812 | DAT_00600284
    PUSH EAX                            ; 00483817 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00483818 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0048381a
    ADD ESP,0x8                         ; 0048381d
    TEST EAX,EAX                        ; 00483820
    JZ 0x00483838                       ; 00483822
        ;   XREF to: 00483838 (CONDITIONAL_JUMP)  ; LAB_00483838
    MOV ECX,dword ptr [EBX + 0x194]     ; 00483824
    MOV byte ptr [EBX + 0x124],0x0      ; 0048382a
    INC ECX                             ; 00483831
    MOV dword ptr [EBX + 0x194],ECX     ; 00483832
    PUSH 0x47                           ; 00483838
        ;   Label: LAB_00483838
    MOV EAX,[0x00600284]                ; 0048383a | DAT_00600284
    PUSH EAX                            ; 0048383f | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00483840 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 00483842
    ADD ESP,0x8                         ; 00483845
    TEST EAX,EAX                        ; 00483848
    JZ 0x0048385d                       ; 0048384a
        ;   XREF to: 0048385d (CONDITIONAL_JUMP)  ; LAB_0048385d
    MOV byte ptr [EBX + 0x124],0x0      ; 0048384c
    MOV dword ptr [EBX + 0x194],0x0     ; 00483853
    PUSH 0x4f                           ; 0048385d
        ;   Label: LAB_0048385d
    MOV EAX,[0x00600284]                ; 0048385f | DAT_00600284
    PUSH EAX                            ; 00483864 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00483865 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 00483867
    ADD ESP,0x8                         ; 0048386a
    TEST EAX,EAX                        ; 0048386d
    JZ 0x00483880                       ; 0048386f
        ;   XREF to: 00483880 (CONDITIONAL_JUMP)  ; LAB_00483880
    MOV EAX,dword ptr [EBX]             ; 00483871
    MOV byte ptr [EBX + 0x124],0x0      ; 00483873
    MOV dword ptr [EBX + 0x194],EAX     ; 0048387a
    PUSH 0x49                           ; 00483880
        ;   Label: LAB_00483880
    MOV EAX,[0x00600284]                ; 00483882 | DAT_00600284
    PUSH EAX                            ; 00483887 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00483888 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0048388a
    ADD ESP,0x8                         ; 0048388d
    TEST EAX,EAX                        ; 00483890
    JZ 0x004838c3                       ; 00483892
        ;   XREF to: 004838c3 (CONDITIONAL_JUMP)  ; LAB_004838c3
    MOV ESI,dword ptr [EBX + 0x194]     ; 00483894
    MOV EAX,dword ptr [EBX + 0x19c]     ; 0048389a
    MOV EDI,dword ptr [EBX + 0x198]     ; 004838a0
    MOV byte ptr [EBX + 0x124],0x0      ; 004838a6
    SUB ESI,EAX                         ; 004838ad
    MOV EAX,dword ptr [EBX + 0x19c]     ; 004838af
    MOV dword ptr [EBX + 0x194],ESI     ; 004838b5
    SUB EDI,EAX                         ; 004838bb
    MOV dword ptr [EBX + 0x198],EDI     ; 004838bd
    PUSH 0x51                           ; 004838c3
        ;   Label: LAB_004838c3
    MOV EAX,[0x00600284]                ; 004838c5 | DAT_00600284
    PUSH EAX                            ; 004838ca | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004838cb | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004838cd
    ADD ESP,0x8                         ; 004838d0
    TEST EAX,EAX                        ; 004838d3
    JZ 0x00483906                       ; 004838d5
        ;   XREF to: 00483906 (CONDITIONAL_JUMP)  ; LAB_00483906
    MOV EBP,dword ptr [EBX + 0x194]     ; 004838d7
    MOV EAX,dword ptr [EBX + 0x19c]     ; 004838dd
    MOV EDX,dword ptr [EBX + 0x198]     ; 004838e3
    MOV byte ptr [EBX + 0x124],0x0      ; 004838e9
    ADD EBP,EAX                         ; 004838f0
    MOV EAX,dword ptr [EBX + 0x19c]     ; 004838f2
    MOV dword ptr [EBX + 0x194],EBP     ; 004838f8
    ADD EDX,EAX                         ; 004838fe
    MOV dword ptr [EBX + 0x198],EDX     ; 00483900
    PUSH 0x4b                           ; 00483906
        ;   Label: LAB_00483906
    MOV EAX,[0x00600284]                ; 00483908 | DAT_00600284
    PUSH EAX                            ; 0048390d | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0048390e | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 00483910
    ADD ESP,0x8                         ; 00483913
    TEST EAX,EAX                        ; 00483916
    JZ 0x00483935                       ; 00483918
        ;   XREF to: 00483935 (CONDITIONAL_JUMP)  ; LAB_00483935
    MOV ECX,dword ptr [EBX + 0x194]     ; 0048391a
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 00483920
    MOV byte ptr [EBX + 0x124],0x0      ; 00483926
    SUB ECX,EAX                         ; 0048392d
    MOV dword ptr [EBX + 0x194],ECX     ; 0048392f
    PUSH 0x4d                           ; 00483935
        ;   Label: LAB_00483935
    MOV EAX,[0x00600284]                ; 00483937 | DAT_00600284
    PUSH EAX                            ; 0048393c | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0048393d | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0048393f
    ADD ESP,0x8                         ; 00483942
    TEST EAX,EAX                        ; 00483945
    JZ 0x00483964                       ; 00483947
        ;   XREF to: 00483964 (CONDITIONAL_JUMP)  ; LAB_00483964
    MOV ESI,dword ptr [EBX + 0x194]     ; 00483949
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 0048394f
    MOV byte ptr [EBX + 0x124],0x0      ; 00483955
    ADD ESI,EAX                         ; 0048395c
    MOV dword ptr [EBX + 0x194],ESI     ; 0048395e
    XOR EAX,EAX                         ; 00483964
        ;   Label: LAB_00483964
    POP EBP                             ; 00483966
    POP EDI                             ; 00483967
    POP ESI                             ; 00483968
    POP EBX                             ; 00483969
    RET                                 ; 0048396a

