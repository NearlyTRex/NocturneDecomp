; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_loadState_FUN_00495490(CEventList *this_ptr,_FILE *file_handle)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004bdfb0 at 004be68e
;
; Referenced Globals:
;   undefined4 DAT_005c0111
;   TerminatedCString s_core_event_cpp_005c0115
;   TerminatedCString s_CEventList_loadState_fil_005c0127
;   undefined4 DAT_005c018a
;   TerminatedCString s_anon_005c018e
;   undefined4 DAT_005c0195
;   TerminatedCString s_anon_005c0199
;   undefined4 DAT_005c01a0
;   TerminatedCString s_anon_005c01a4
;   undefined4 DAT_005c01ab
;   TerminatedCString s_f_005c01af
;   undefined4 DAT_005c01ba
;   TerminatedCString s_d_005c01be
;   undefined4 DAT_005c01c9
;   TerminatedCString s_anon_005c01cd
;   ... and 4 more
;
; Called Functions:
;   core_event.cpp_CEventList_reset_FUN_0048bfd0
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fgets_FUN_005a3f00
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495490
        ;   Label: core_event.cpp_CEventList_loadState_FUN_00495490
    PUSH ESI                            ; 00495491
    PUSH EDI                            ; 00495492
    PUSH EBP                            ; 00495493
    SUB ESP,0x110                       ; 00495494
    MOV EBX,dword ptr [ESP + 0x124]     ; 0049549a
    MOV ESI,dword ptr [ESP + 0x128]     ; 004954a1
    PUSH EBX                            ; 004954a8
    CALL core_event.cpp_CEventList_reset_FUN_0048bfd0 ; 004954a9
        ;   XREF to: 0048bfd0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_reset_FUN_0048bfd0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004954ae
    PUSH ESI                            ; 004954b1
    PUSH 0xff                           ; 004954b2
    LEA EAX,[ESP + 0x8]                 ; 004954b7
    PUSH EAX                            ; 004954bb
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004954bc
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004954c1
    LEA EAX,[ESP + 0x100]               ; 004954c4
    PUSH EAX                            ; 004954cb
    PUSH 0x5c0111                       ; 004954cc | DAT_005c0111
    PUSH ESI                            ; 004954d1
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004954d2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004954d7
    MOV EDX,dword ptr [ESP + 0x100]     ; 004954da
    CMP EDX,0x5                         ; 004954e1
    JG 0x004957bb                       ; 004954e4
        ;   XREF to: 004957bb (CONDITIONAL_JUMP)  ; LAB_004957bb
    PUSH ESI                            ; 004954ea
        ;   Label: LAB_004954ea
    PUSH 0xff                           ; 004954eb
    LEA EAX,[ESP + 0x8]                 ; 004954f0
    PUSH EAX                            ; 004954f4
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004954f5
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004954fa
    PUSH EBX                            ; 004954fd
    PUSH 0x5c018a                       ; 004954fe | DAT_005c018a
    PUSH ESI                            ; 00495503
    XOR EBP,EBP                         ; 00495504
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00495506
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [EBX]             ; 0049550b
    ADD ESP,0xc                         ; 0049550d
    TEST EAX,EAX                        ; 00495510
    JLE 0x00495530                      ; 00495512
        ;   XREF to: 00495530 (CONDITIONAL_JUMP)  ; LAB_00495530
    LEA EDI,[EBX + 0x4]                 ; 00495514
    PUSH EDI                            ; 00495517
        ;   Label: LAB_00495517
    PUSH 0x5c018e                       ; 00495518 | = "%[^\n]\n"
    PUSH ESI                            ; 0049551d
    INC EBP                             ; 0049551e
    ADD EDI,0x20                        ; 0049551f
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00495522
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EDX,dword ptr [EBX]             ; 00495527
    ADD ESP,0xc                         ; 00495529
    CMP EBP,EDX                         ; 0049552c
    JL 0x00495517                       ; 0049552e
        ;   XREF to: 00495517 (CONDITIONAL_JUMP)  ; LAB_00495517
    PUSH ESI                            ; 00495530
        ;   Label: LAB_00495530
    PUSH 0xff                           ; 00495531
    LEA EDI,[ESP + 0x8]                 ; 00495536
    PUSH EDI                            ; 0049553a
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0049553b
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00495540
    LEA EDI,[EBX + 0xc84]               ; 00495543
    PUSH EDI                            ; 00495549
    PUSH 0x5c0195                       ; 0049554a | DAT_005c0195
    PUSH ESI                            ; 0049554f
    XOR EBP,EBP                         ; 00495550
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00495552
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV ECX,dword ptr [EBX + 0xc84]     ; 00495557
    ADD ESP,0xc                         ; 0049555d
    TEST ECX,ECX                        ; 00495560
    JLE 0x00495590                      ; 00495562
        ;   XREF to: 00495590 (CONDITIONAL_JUMP)  ; LAB_00495590
    LEA EDI,[EBX + 0xc88]               ; 00495564
    PUSH EDI                            ; 0049556a
        ;   Label: LAB_0049556a
    PUSH 0x5c0199                       ; 0049556b | = "%[^\n]\n"
    PUSH ESI                            ; 00495570
    INC EBP                             ; 00495571
    ADD EDI,0x20                        ; 00495572
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00495575
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [EBX + 0xc84]     ; 0049557a
    ADD ESP,0xc                         ; 00495580
    CMP EBP,EAX                         ; 00495583
    JL 0x0049556a                       ; 00495585
        ;   XREF to: 0049556a (CONDITIONAL_JUMP)  ; LAB_0049556a
    LEA EAX,[EAX]                       ; 00495587
    LEA EDX,[EDX]                       ; 0049558d
    PUSH ESI                            ; 00495590
        ;   Label: LAB_00495590
    PUSH 0xff                           ; 00495591
    LEA EDI,[ESP + 0x8]                 ; 00495596
    PUSH EDI                            ; 0049559a
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0049559b
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004955a0
    LEA EDI,[EBX + 0x258c]              ; 004955a3
    PUSH EDI                            ; 004955a9
    PUSH 0x5c01a0                       ; 004955aa | DAT_005c01a0
    PUSH ESI                            ; 004955af
    XOR EBP,EBP                         ; 004955b0
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004955b2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EDX,dword ptr [EBX + 0x258c]    ; 004955b7
    ADD ESP,0xc                         ; 004955bd
    TEST EDX,EDX                        ; 004955c0
    JLE 0x004955f0                      ; 004955c2
        ;   XREF to: 004955f0 (CONDITIONAL_JUMP)  ; LAB_004955f0
    LEA EDI,[EBX + 0x2590]              ; 004955c4
    PUSH EDI                            ; 004955ca
        ;   Label: LAB_004955ca
    PUSH 0x5c01a4                       ; 004955cb | = "%[^\n]\n"
    PUSH ESI                            ; 004955d0
    INC EBP                             ; 004955d1
    ADD EDI,0x20                        ; 004955d2
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004955d5
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV ECX,dword ptr [EBX + 0x258c]    ; 004955da
    ADD ESP,0xc                         ; 004955e0
    CMP EBP,ECX                         ; 004955e3
    JL 0x004955ca                       ; 004955e5
        ;   XREF to: 004955ca (CONDITIONAL_JUMP)  ; LAB_004955ca
    LEA EAX,[EAX]                       ; 004955e7
    LEA EDX,[EDX]                       ; 004955ed
    CMP dword ptr [ESP + 0x100],0x2     ; 004955f0
        ;   Label: LAB_004955f0
    JL 0x00495680                       ; 004955f8
        ;   XREF to: 00495680 (CONDITIONAL_JUMP)  ; LAB_00495680
    PUSH ESI                            ; 004955fe
    PUSH 0xff                           ; 004955ff
    LEA EDI,[ESP + 0x8]                 ; 00495604
    PUSH EDI                            ; 00495608
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00495609
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0049560e
    LEA EDI,[EBX + 0x3210]              ; 00495611
    PUSH EDI                            ; 00495617
    PUSH 0x5c01ab                       ; 00495618 | DAT_005c01ab
    PUSH ESI                            ; 0049561d
    XOR EBP,EBP                         ; 0049561e
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00495620
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00495625
    MOV EAX,dword ptr [EBX + 0x3210]    ; 00495628
    MOV dword ptr [ESP + 0x10c],EBP     ; 0049562e
    TEST EAX,EAX                        ; 00495635
    JLE 0x00495680                      ; 00495637
        ;   XREF to: 00495680 (CONDITIONAL_JUMP)  ; LAB_00495680
    LEA EDI,[EBX + 0x3214]              ; 00495639
    LEA EBP,[EBX + 0x3354]              ; 0049563f
    PUSH EDI                            ; 00495645
        ;   Label: LAB_00495645
    PUSH EBP                            ; 00495646
    PUSH 0x5c01af                       ; 00495647 | = "%f, %[^\n]\n"
    PUSH ESI                            ; 0049564c
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0049564d
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 00495652
    ADD EDI,0x20                        ; 00495655
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00495658
    ADD EBP,0x4                         ; 0049565f
    INC EDX                             ; 00495662
    MOV ECX,dword ptr [EBX + 0x3210]    ; 00495663
    MOV dword ptr [ESP + 0x10c],EDX     ; 00495669
    CMP EDX,ECX                         ; 00495670
    JL 0x00495645                       ; 00495672
        ;   XREF to: 00495645 (CONDITIONAL_JUMP)  ; LAB_00495645
    LEA EAX,[EAX]                       ; 00495674
    LEA EDX,[EDX]                       ; 0049567a
    CMP dword ptr [ESP + 0x100],0x3     ; 00495680
        ;   Label: LAB_00495680
    JL 0x00495710                       ; 00495688
        ;   XREF to: 00495710 (CONDITIONAL_JUMP)  ; LAB_00495710
    PUSH ESI                            ; 0049568e
    PUSH 0xff                           ; 0049568f
    LEA EDI,[ESP + 0x8]                 ; 00495694
    PUSH EDI                            ; 00495698
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00495699
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0049569e
    LEA EDI,[EBX + 0x337c]              ; 004956a1
    PUSH EDI                            ; 004956a7
    PUSH 0x5c01ba                       ; 004956a8 | DAT_005c01ba
    PUSH ESI                            ; 004956ad
    XOR EBP,EBP                         ; 004956ae
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004956b0
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004956b5
    ADD ESP,0xc                         ; 004956bb
    TEST EAX,EAX                        ; 004956be
    JLE 0x00495710                      ; 004956c0
        ;   XREF to: 00495710 (CONDITIONAL_JUMP)  ; LAB_00495710
    LEA EAX,[EBX + 0x3380]              ; 004956c2
    LEA EDI,[EBX + 0x34c0]              ; 004956c8
    MOV dword ptr [ESP + 0x108],EAX     ; 004956ce
    MOV EDX,dword ptr [ESP + 0x108]     ; 004956d5
        ;   Label: LAB_004956d5
    PUSH EDX                            ; 004956dc
    PUSH EDI                            ; 004956dd
    PUSH 0x5c01be                       ; 004956de | = "%d, %[^\n]\n"
    PUSH ESI                            ; 004956e3
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004956e4
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 004956e9
    INC EBP                             ; 004956ec
    MOV ECX,dword ptr [ESP + 0x108]     ; 004956ed
    ADD EDI,0x4                         ; 004956f4
    ADD ECX,0x20                        ; 004956f7
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004956fa
    MOV dword ptr [ESP + 0x108],ECX     ; 00495700
    CMP EBP,EAX                         ; 00495707
    JL 0x004956d5                       ; 00495709
        ;   XREF to: 004956d5 (CONDITIONAL_JUMP)  ; LAB_004956d5
    LEA EAX,[EAX]                       ; 0049570b
    MOV ECX,ECX                         ; 0049570e
    CMP dword ptr [ESP + 0x100],0x4     ; 00495710
        ;   Label: LAB_00495710
    JL 0x004957a0                       ; 00495718
        ;   XREF to: 004957a0 (CONDITIONAL_JUMP)  ; LAB_004957a0
    PUSH ESI                            ; 0049571e
    PUSH 0xff                           ; 0049571f
    LEA EDI,[ESP + 0x8]                 ; 00495724
    PUSH EDI                            ; 00495728
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00495729
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0049572e
    LEA EDI,[EBX + 0x34e8]              ; 00495731
    PUSH EDI                            ; 00495737
    PUSH 0x5c01c9                       ; 00495738 | DAT_005c01c9
    PUSH ESI                            ; 0049573d
    XOR EBP,EBP                         ; 0049573e
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00495740
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV ECX,dword ptr [EBX + 0x34e8]    ; 00495745
    ADD ESP,0xc                         ; 0049574b
    TEST ECX,ECX                        ; 0049574e
    JLE 0x004957a0                      ; 00495750
        ;   XREF to: 004957a0 (CONDITIONAL_JUMP)  ; LAB_004957a0
    LEA EAX,[EBX + 0x37da]              ; 00495752
    LEA EDI,[EBX + 0x34ec]              ; 00495758
    MOV dword ptr [ESP + 0x104],EAX     ; 0049575e
    MOV EAX,dword ptr [ESP + 0x104]     ; 00495765
        ;   Label: LAB_00495765
    PUSH EAX                            ; 0049576c
    PUSH EDI                            ; 0049576d
    PUSH 0x5c01cd                       ; 0049576e | = "\"%[^\"]\" , \"%[^\"]\"\n"
    PUSH ESI                            ; 00495773
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00495774
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 00495779
    INC EBP                             ; 0049577c
    MOV EDX,dword ptr [ESP + 0x104]     ; 0049577d
    ADD EDI,0x1e                        ; 00495784
    ADD EDX,0x1e                        ; 00495787
    MOV ECX,dword ptr [EBX + 0x34e8]    ; 0049578a
    MOV dword ptr [ESP + 0x104],EDX     ; 00495790
    CMP EBP,ECX                         ; 00495797
    JL 0x00495765                       ; 00495799
        ;   XREF to: 00495765 (CONDITIONAL_JUMP)  ; LAB_00495765
    LEA EAX,[EAX]                       ; 0049579b
    MOV ECX,ECX                         ; 0049579e
    CMP dword ptr [ESP + 0x100],0x5     ; 004957a0
        ;   Label: LAB_004957a0
    JGE 0x004957e6                      ; 004957a8
        ;   XREF to: 004957e6 (CONDITIONAL_JUMP)  ; LAB_004957e6
    LEA EAX,[EAX]                       ; 004957aa
    ADD ESP,0x110                       ; 004957b0
        ;   Label: LAB_004957b0
    POP EBP                             ; 004957b6
    POP EDI                             ; 004957b7
    POP ESI                             ; 004957b8
    POP EBX                             ; 004957b9
    RET                                 ; 004957ba
    PUSH 0x5                            ; 004957bb
        ;   Label: LAB_004957bb
    PUSH EDX                            ; 004957bd
    MOV ECX,0x5c0115                    ; 004957be | = "..\\core\\event.cpp"
    MOV EDI,0x1035                      ; 004957c3
    PUSH 0x5c0127                       ; 004957c8 | = "CEventList::loadState - file version ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004957cd | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004957d3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004957d9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 004957de
    JMP 0x004954ea                      ; 004957e1
        ;   XREF to: 004954ea (UNCONDITIONAL_JUMP)  ; LAB_004954ea
    PUSH ESI                            ; 004957e6
        ;   Label: LAB_004957e6
    PUSH 0xff                           ; 004957e7
    LEA EDI,[ESP + 0x8]                 ; 004957ec
    PUSH EDI                            ; 004957f0
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004957f1
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004957f6
    LEA EDI,[EBX + 0x1908]              ; 004957f9
    PUSH EDI                            ; 004957ff
    PUSH 0x5c01e0                       ; 00495800 | DAT_005c01e0
    PUSH ESI                            ; 00495805
    XOR EDI,EDI                         ; 00495806
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00495808
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EBP,dword ptr [EBX + 0x1908]    ; 0049580d
    ADD ESP,0xc                         ; 00495813
    TEST EBP,EBP                        ; 00495816
    JLE 0x004957b0                      ; 00495818
        ;   XREF to: 004957b0 (CONDITIONAL_JUMP)  ; LAB_004957b0
    LEA EBP,[EBX + 0x190c]              ; 0049581a
    PUSH EBP                            ; 00495820
        ;   Label: LAB_00495820
    PUSH 0x5c01e4                       ; 00495821 | = "%[^\n]\n"
    PUSH ESI                            ; 00495826
    INC EDI                             ; 00495827
    ADD EBP,0x20                        ; 00495828
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0049582b
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [EBX + 0x1908]    ; 00495830
    ADD ESP,0xc                         ; 00495836
    CMP EDI,EAX                         ; 00495839
    JL 0x00495820                       ; 0049583b
        ;   XREF to: 00495820 (CONDITIONAL_JUMP)  ; LAB_00495820
    ADD ESP,0x110                       ; 0049583d
    POP EBP                             ; 00495843
    POP EDI                             ; 00495844
    POP ESI                             ; 00495845
    POP EBX                             ; 00495846
    RET                                 ; 00495847

