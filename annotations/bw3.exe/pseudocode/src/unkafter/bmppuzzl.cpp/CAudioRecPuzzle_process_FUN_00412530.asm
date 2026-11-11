; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl unkafter_bmppuzzl_cpp_CAudioRecPuzzle_process_FUN_00412530(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_ExitFromPuzzle_005b6795+1
;   TerminatedCString s_AudioPuzzleSuccess_005b67a5
;   undefined4 DAT_005b67be
;   undefined4 DAT_005fba60
;   undefined4 DAT_00600284
;   undefined4 DAT_007dffb8
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c5fae4
;   undefined4 DAT_01d70a78
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;   unkafter_alphabit.cpp_FUN_004119a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412530
        ;   Label: unkafter_bmppuzzl.cpp_CAudioRecPuzzle_process_FUN_00412530
    PUSH ESI                            ; 00412531
    PUSH EDI                            ; 00412532
    PUSH EBP                            ; 00412533
    SUB ESP,0x10                        ; 00412534
    MOV EBX,dword ptr [ESP + 0x24]      ; 00412537
    CMP dword ptr [EBX + 0x4c],0x0      ; 0041253b
    JZ 0x0041254a                       ; 0041253f
        ;   XREF to: 0041254a (CONDITIONAL_JUMP)  ; LAB_0041254a
    CMP dword ptr [EBX + 0xc28],0x1     ; 00412541
    JNZ 0x00412583                      ; 00412548
        ;   XREF to: 00412583 (CONDITIONAL_JUMP)  ; LAB_00412583
    PUSH 0x5b6796                       ; 0041254a | s_ExitFromPuzzle_005b6795+1
        ;   Label: LAB_0041254a
    MOV ESI,dword ptr [0x005fba60]      ; 0041254f | DAT_005fba60
    PUSH ESI                            ; 00412555
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00412556
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0041255b
    MOV EAX,[0x00600284]                ; 0041255e | DAT_00600284
    PUSH 0x200                          ; 00412563
    MOV EDX,dword ptr [EAX]             ; 00412568 | DAT_01d70a78
    PUSH EAX                            ; 0041256a | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0041256b
    ADD ESP,0x8                         ; 0041256e
    XOR EDI,EDI                         ; 00412571
    PUSH EDI                            ; 00412573
    PUSH EBX                            ; 00412574
    MOV dword ptr [0x01c5fae4],EDI      ; 00412575 | DAT_01c5fae4
    CALL unkafter_alphabit.cpp_FUN_004119a0 ; 0041257b
        ;   XREF to: 004119a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_alphabit.cpp_FUN_004119a0()
    ADD ESP,0x8                         ; 00412580
    MOV EBP,dword ptr [EBX + 0x24]      ; 00412583
        ;   Label: LAB_00412583
    TEST EBP,EBP                        ; 00412586
    JZ 0x00412708                       ; 00412588
        ;   XREF to: 00412708 (CONDITIONAL_JUMP)  ; LAB_00412708
    MOV ESI,dword ptr [EBX + 0x2c]      ; 0041258e
    TEST ESI,ESI                        ; 00412591
    JZ 0x0041262d                       ; 00412593
        ;   XREF to: 0041262d (CONDITIONAL_JUMP)  ; LAB_0041262d
    MOV EDX,dword ptr [EBX + 0x20]      ; 00412599
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041259c
    SUB EAX,EDX                         ; 004125a3
    SHL EAX,0x2                         ; 004125a5
    SUB EAX,EDX                         ; 004125a8
    SHL EAX,0x2                         ; 004125aa
    ADD EAX,EBX                         ; 004125ad
    MOV ESI,dword ptr [EAX + 0x68]      ; 004125af
    CMP ESI,0x2                         ; 004125b2
    JNZ 0x0041268b                      ; 004125b5
        ;   XREF to: 0041268b (CONDITIONAL_JUMP)  ; LAB_0041268b
    CMP dword ptr [0x007dffb8],-0x1     ; 004125bb | DAT_007dffb8
    JNZ 0x004125ce                      ; 004125c2
        ;   XREF to: 004125ce (CONDITIONAL_JUMP)  ; LAB_004125ce
    MOV EAX,[0x01c5fadc]                ; 004125c4 | DAT_01c5fadc
    MOV [0x007dffb8],EAX                ; 004125c9 | DAT_007dffb8
    MOV EAX,[0x01c5fadc]                ; 004125ce | DAT_01c5fadc
        ;   Label: LAB_004125ce
    MOV EDX,dword ptr [0x007dffb8]      ; 004125d3 | DAT_007dffb8
    SUB EAX,EDX                         ; 004125d9
    MOV dword ptr [ESP + 0xc],EAX       ; 004125db
    FILD dword ptr [ESP + 0xc]          ; 004125df
    FABS                                ; 004125e3
    FCOMP double ptr [0x005b67be]       ; 004125e5 | DAT_005b67be
    FNSTSW AX                           ; 004125eb
    SAHF                                ; 004125ed
    JBE 0x00412610                      ; 004125ee
        ;   XREF to: 00412610 (CONDITIONAL_JUMP)  ; LAB_00412610
    PUSH EBX                            ; 004125f0
    MOV EAX,dword ptr [EBX]             ; 004125f1
    XOR ESI,ESI                         ; 004125f3
    CALL dword ptr [EAX + 0x34]         ; 004125f5
    ADD ESP,0x4                         ; 004125f8
    PUSH ESI                            ; 004125fb
        ;   Label: LAB_004125fb
    MOV EAX,dword ptr [EBX]             ; 004125fc
    PUSH EBX                            ; 004125fe
    INC ESI                             ; 004125ff
    CALL dword ptr [EAX + 0x38]         ; 00412600
    ADD ESP,0x8                         ; 00412603
    CMP ESI,0x3                         ; 00412606
    JL 0x004125fb                       ; 00412609
        ;   XREF to: 004125fb (CONDITIONAL_JUMP)  ; LAB_004125fb
    LEA EAX,[EAX]                       ; 0041260b
    MOV ECX,ECX                         ; 0041260e
    MOV EDI,EBX                         ; 00412610
        ;   Label: LAB_00412610
    XOR ESI,ESI                         ; 00412612
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00412614
        ;   Label: LAB_00412614
    INC EAX                             ; 00412617
    CMP ESI,EAX                         ; 00412618
    JGE 0x004127fd                      ; 0041261a
        ;   XREF to: 004127fd (CONDITIONAL_JUMP)  ; LAB_004127fd
    ADD EDI,0x2c                        ; 00412620
    INC ESI                             ; 00412623
    MOV dword ptr [EDI + 0x50],0x0      ; 00412624
    JMP 0x00412614                      ; 0041262b
        ;   XREF to: 00412614 (UNCONDITIONAL_JUMP)  ; LAB_00412614
    MOV EDI,dword ptr [0x01c5fae0]      ; 0041262d | DAT_01c5fae0
        ;   Label: LAB_0041262d
    PUSH EDI                            ; 00412633
    MOV EBP,dword ptr [0x01c5fadc]      ; 00412634 | DAT_01c5fadc
    PUSH EBP                            ; 0041263a
    MOV EAX,dword ptr [EBX]             ; 0041263b
    PUSH EBX                            ; 0041263d
    MOV dword ptr [EBX + 0x2c],0x1      ; 0041263e
    CALL dword ptr [EAX + 0x2c]         ; 00412645
    ADD ESP,0xc                         ; 00412648
    TEST EAX,EAX                        ; 0041264b
    JZ 0x00412674                       ; 0041264d
        ;   XREF to: 00412674 (CONDITIONAL_JUMP)  ; LAB_00412674
    MOV EDX,dword ptr [EBX + 0x20]      ; 0041264f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00412652
    SUB EAX,EDX                         ; 00412659
    SHL EAX,0x2                         ; 0041265b
    SUB EAX,EDX                         ; 0041265e
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x68] ; 00412660
    CMP EDX,0x1                         ; 00412664
    JNZ 0x00412610                      ; 00412667
        ;   XREF to: 00412610 (CONDITIONAL_JUMP)  ; LAB_00412610
    CMP dword ptr [EBX + 0x20],0x0      ; 00412669
    JNZ 0x00412686                      ; 0041266d
        ;   XREF to: 00412686 (CONDITIONAL_JUMP)  ; LAB_00412686
    MOV dword ptr [EBX + 0x4c],ESI      ; 0041266f
    JMP 0x00412610                      ; 00412672
        ;   XREF to: 00412610 (UNCONDITIONAL_JUMP)  ; LAB_00412610
    MOV dword ptr [0x007dffb8],0xffffffff ; 00412674 | DAT_007dffb8
        ;   Label: LAB_00412674
    ADD ESP,0x10                        ; 0041267e
        ;   Label: LAB_0041267e
    POP EBP                             ; 00412681
    POP EDI                             ; 00412682
    POP ESI                             ; 00412683
    POP EBX                             ; 00412684
    RET                                 ; 00412685
    MOV dword ptr [EBX + 0x4c],EDX      ; 00412686
        ;   Label: LAB_00412686
    JMP 0x00412610                      ; 00412689
        ;   XREF to: 00412610 (UNCONDITIONAL_JUMP)  ; LAB_00412610
    CMP ESI,0x3                         ; 0041268b
        ;   Label: LAB_0041268b
    JNZ 0x00412610                      ; 0041268e
        ;   XREF to: 00412610 (CONDITIONAL_JUMP)  ; LAB_00412610
    MOV ESI,0x5                         ; 00412690
    MOV EDI,0x1                         ; 00412695
    XOR EBP,EBP                         ; 0041269a
    PUSH ESI                            ; 0041269c
        ;   Label: LAB_0041269c
    MOV EAX,dword ptr [EBX]             ; 0041269d
    PUSH EBX                            ; 0041269f
    CALL dword ptr [EAX + 0x54]         ; 004126a0
    ADD ESP,0x8                         ; 004126a3
    TEST EAX,EAX                        ; 004126a6
    JZ 0x004126d0                       ; 004126a8
        ;   XREF to: 004126d0 (CONDITIONAL_JUMP)  ; LAB_004126d0
    MOV EAX,dword ptr [EBX + 0x44]      ; 004126aa
    MOV dword ptr [EBX + 0x48],EAX      ; 004126ad
    LEA EAX,[ESI + -0x5]                ; 004126b0
    MOV dword ptr [EBX + 0x44],EAX      ; 004126b3
    MOV EAX,dword ptr [EBX + 0x48]      ; 004126b6
    CMP EAX,dword ptr [EBX + 0x44]      ; 004126b9
    JZ 0x004126c1                       ; 004126bc
        ;   XREF to: 004126c1 (CONDITIONAL_JUMP)  ; LAB_004126c1
    MOV dword ptr [EBX + 0x34],EDI      ; 004126be
    MOV EAX,dword ptr [EBX + 0x44]      ; 004126c1
        ;   Label: LAB_004126c1
    CMP EAX,0x4                         ; 004126c4
    JGE 0x004126dc                      ; 004126c7
        ;   XREF to: 004126dc (CONDITIONAL_JUMP)  ; LAB_004126dc
    CMP EBP,EAX                         ; 004126c9
    JGE 0x004126dc                      ; 004126cb
        ;   XREF to: 004126dc (CONDITIONAL_JUMP)  ; LAB_004126dc
    MOV dword ptr [EBX + 0x18],EDI      ; 004126cd
    INC ESI                             ; 004126d0
        ;   Label: LAB_004126d0
    CMP ESI,0xa                         ; 004126d1
    JGE 0x00412610                      ; 004126d4
        ;   XREF to: 00412610 (CONDITIONAL_JUMP)  ; LAB_00412610
    JMP 0x0041269c                      ; 004126da
        ;   XREF to: 0041269c (UNCONDITIONAL_JUMP)  ; LAB_0041269c
    CMP dword ptr [EBX + 0x44],0x4      ; 004126dc
        ;   Label: LAB_004126dc
    JNZ 0x004126f5                      ; 004126e0
        ;   XREF to: 004126f5 (CONDITIONAL_JUMP)  ; LAB_004126f5
    MOV dword ptr [EBX + 0x18],0x2      ; 004126e2
    INC ESI                             ; 004126e9
    CMP ESI,0xa                         ; 004126ea
    JGE 0x00412610                      ; 004126ed
        ;   XREF to: 00412610 (CONDITIONAL_JUMP)  ; LAB_00412610
    JMP 0x0041269c                      ; 004126f3
        ;   XREF to: 0041269c (UNCONDITIONAL_JUMP)  ; LAB_0041269c
    MOV dword ptr [EBX + 0x18],0x3      ; 004126f5
        ;   Label: LAB_004126f5
    INC ESI                             ; 004126fc
    CMP ESI,0xa                         ; 004126fd
    JGE 0x00412610                      ; 00412700
        ;   XREF to: 00412610 (CONDITIONAL_JUMP)  ; LAB_00412610
    JMP 0x0041269c                      ; 00412706
        ;   XREF to: 0041269c (UNCONDITIONAL_JUMP)  ; LAB_0041269c
    CMP EBP,dword ptr [EBX + 0x28]      ; 00412708
        ;   Label: LAB_00412708
    JNZ 0x00412735                      ; 0041270b
        ;   XREF to: 00412735 (CONDITIONAL_JUMP)  ; LAB_00412735
    MOV EBP,0x2                         ; 0041270d
        ;   Label: LAB_0041270d
    MOV EDI,EBX                         ; 00412712
    MOV dword ptr [EBX + 0x18],0x0      ; 00412714
    XOR ESI,ESI                         ; 0041271b
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0041271d
        ;   Label: LAB_0041271d
    INC EAX                             ; 00412720
    CMP ESI,EAX                         ; 00412721
    JGE 0x00412610                      ; 00412723
        ;   XREF to: 00412610 (CONDITIONAL_JUMP)  ; LAB_00412610
    CMP dword ptr [EDI + 0x7c],0x1      ; 00412729
    JZ 0x00412749                       ; 0041272d
        ;   XREF to: 00412749 (CONDITIONAL_JUMP)  ; LAB_00412749
    INC ESI                             ; 0041272f
        ;   Label: LAB_0041272f
    ADD EDI,0x2c                        ; 00412730
    JMP 0x0041271d                      ; 00412733
        ;   XREF to: 0041271d (UNCONDITIONAL_JUMP)  ; LAB_0041271d
    MOV ECX,0xffffffff                  ; 00412735
        ;   Label: LAB_00412735
    MOV dword ptr [EBX + 0x20],0xffffffff ; 0041273a
    MOV dword ptr [0x007dffb8],ECX      ; 00412741 | DAT_007dffb8
    JMP 0x0041270d                      ; 00412747
        ;   XREF to: 0041270d (UNCONDITIONAL_JUMP)  ; LAB_0041270d
    MOV EAX,dword ptr [EDI + 0x68]      ; 00412749
        ;   Label: LAB_00412749
    CMP EBP,EAX                         ; 0041274c
    JNZ 0x0041277e                      ; 0041274e
        ;   XREF to: 0041277e (CONDITIONAL_JUMP)  ; LAB_0041277e
    PUSH ESI                            ; 00412750
        ;   Label: LAB_00412750
    MOV EAX,dword ptr [EBX]             ; 00412751
    PUSH EBX                            ; 00412753
    CALL dword ptr [EAX + 0x54]         ; 00412754
    ADD ESP,0x8                         ; 00412757
    TEST EAX,EAX                        ; 0041275a
    JZ 0x0041272f                       ; 0041275c
        ;   XREF to: 0041272f (CONDITIONAL_JUMP)  ; LAB_0041272f
    CMP ESI,0xc                         ; 0041275e
    JNC 0x004127a2                      ; 00412761
        ;   XREF to: 004127a2 (CONDITIONAL_JUMP)  ; LAB_004127a2
    CMP ESI,0x4                         ; 00412763
    JNC 0x004127e1                      ; 00412766
        ;   XREF to: 004127e1 (CONDITIONAL_JUMP)  ; LAB_004127e1
    CMP ESI,0x2                         ; 0041276c
    JNZ 0x00412792                      ; 0041276f
        ;   XREF to: 00412792 (CONDITIONAL_JUMP)  ; LAB_00412792
    MOV dword ptr [EBX + 0x18],0x3      ; 00412771
        ;   Label: LAB_00412771
    INC ESI                             ; 00412778
    ADD EDI,0x2c                        ; 00412779
    JMP 0x0041271d                      ; 0041277c
        ;   XREF to: 0041271d (UNCONDITIONAL_JUMP)  ; LAB_0041271d
    CMP EAX,0x3                         ; 0041277e
        ;   Label: LAB_0041277e
    JZ 0x00412750                       ; 00412781
        ;   XREF to: 00412750 (CONDITIONAL_JUMP)  ; LAB_00412750
    INC ESI                             ; 00412783
    ADD EDI,0x2c                        ; 00412784
    JMP 0x0041271d                      ; 00412787
        ;   XREF to: 0041271d (UNCONDITIONAL_JUMP)  ; LAB_0041271d
    MOV dword ptr [EBX + 0x18],EBP      ; 00412789
        ;   Label: LAB_00412789
    INC ESI                             ; 0041278c
    ADD EDI,0x2c                        ; 0041278d
    JMP 0x0041271d                      ; 00412790
        ;   XREF to: 0041271d (UNCONDITIONAL_JUMP)  ; LAB_0041271d
    MOV dword ptr [EBX + 0x18],0x1      ; 00412792
        ;   Label: LAB_00412792
    INC ESI                             ; 00412799
    ADD EDI,0x2c                        ; 0041279a
    JMP 0x0041271d                      ; 0041279d
        ;   XREF to: 0041271d (UNCONDITIONAL_JUMP)  ; LAB_0041271d
    JBE 0x00412771                      ; 004127a2
        ;   XREF to: 00412771 (CONDITIONAL_JUMP)  ; LAB_00412771
        ;   Label: LAB_004127a2
    CMP ESI,0x15                        ; 004127a4
    JNC 0x004127c5                      ; 004127a7
        ;   XREF to: 004127c5 (CONDITIONAL_JUMP)  ; LAB_004127c5
    CMP ESI,0x10                        ; 004127a9
    JC 0x00412792                       ; 004127ac
        ;   XREF to: 00412792 (CONDITIONAL_JUMP)  ; LAB_00412792
    JBE 0x00412789                      ; 004127ae
        ;   XREF to: 00412789 (CONDITIONAL_JUMP)  ; LAB_00412789
    CMP ESI,0x11                        ; 004127b0
    JZ 0x00412771                       ; 004127b3
        ;   XREF to: 00412771 (CONDITIONAL_JUMP)  ; LAB_00412771
    MOV dword ptr [EBX + 0x18],0x1      ; 004127b5
    INC ESI                             ; 004127bc
    ADD EDI,0x2c                        ; 004127bd
    JMP 0x0041271d                      ; 004127c0
        ;   XREF to: 0041271d (UNCONDITIONAL_JUMP)  ; LAB_0041271d
    JBE 0x00412789                      ; 004127c5
        ;   XREF to: 00412789 (CONDITIONAL_JUMP)  ; LAB_00412789
        ;   Label: LAB_004127c5
    CMP ESI,0x16                        ; 004127c7
    JBE 0x00412771                      ; 004127ca
        ;   XREF to: 00412771 (CONDITIONAL_JUMP)  ; LAB_00412771
    CMP ESI,0x1a                        ; 004127cc
    JZ 0x00412789                       ; 004127cf
        ;   XREF to: 00412789 (CONDITIONAL_JUMP)  ; LAB_00412789
    MOV dword ptr [EBX + 0x18],0x1      ; 004127d1
    INC ESI                             ; 004127d8
    ADD EDI,0x2c                        ; 004127d9
    JMP 0x0041271d                      ; 004127dc
        ;   XREF to: 0041271d (UNCONDITIONAL_JUMP)  ; LAB_0041271d
    JBE 0x00412789                      ; 004127e1
        ;   XREF to: 00412789 (CONDITIONAL_JUMP)  ; LAB_00412789
        ;   Label: LAB_004127e1
    CMP ESI,0x5                         ; 004127e3
    JBE 0x00412771                      ; 004127e6
        ;   XREF to: 00412771 (CONDITIONAL_JUMP)  ; LAB_00412771
    CMP ESI,0x9                         ; 004127e8
    JZ 0x00412789                       ; 004127eb
        ;   XREF to: 00412789 (CONDITIONAL_JUMP)  ; LAB_00412789
    MOV dword ptr [EBX + 0x18],0x1      ; 004127ed
    INC ESI                             ; 004127f4
    ADD EDI,0x2c                        ; 004127f5
    JMP 0x0041271d                      ; 004127f8
        ;   XREF to: 0041271d (UNCONDITIONAL_JUMP)  ; LAB_0041271d
    MOV EAX,dword ptr [EBX + 0x44]      ; 004127fd
        ;   Label: LAB_004127fd
    LEA EDX,[EAX + 0x5]                 ; 00412800
    LEA EAX,[EDX*0x4 + 0x0]             ; 00412803
    SUB EAX,EDX                         ; 0041280a
    SHL EAX,0x2                         ; 0041280c
    SUB EAX,EDX                         ; 0041280f
    MOV dword ptr [EBX + EAX*0x4 + 0x7c],0x1 ; 00412811
    MOV EAX,dword ptr [EBX + 0x34]      ; 00412819
    LEA EDX,[EAX + 0x2]                 ; 0041281c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041281f
    SUB EAX,EDX                         ; 00412826
    SHL EAX,0x2                         ; 00412828
    SUB EAX,EDX                         ; 0041282b
    MOV dword ptr [EBX + EAX*0x4 + 0x7c],0x1 ; 0041282d
    MOV ESI,dword ptr [EBX + 0x34]      ; 00412835
    CMP ESI,0x1                         ; 00412838
    JZ 0x00412991                       ; 0041283b
        ;   XREF to: 00412991 (CONDITIONAL_JUMP)  ; LAB_00412991
    MOV dword ptr [EBX + 0x234],0x1     ; 00412841
    CMP dword ptr [EBX + 0x4c],0x0      ; 0041284b
        ;   Label: LAB_0041284b
    JNZ 0x0041299c                      ; 0041284f
        ;   XREF to: 0041299c (CONDITIONAL_JUMP)  ; LAB_0041299c
    MOV dword ptr [EBX + 0xa8],0x1      ; 00412855
    MOV EDI,EBX                         ; 0041285f
        ;   Label: LAB_0041285f
    LEA EAX,[EBX + 0x210]               ; 00412861
    XOR ESI,ESI                         ; 00412867
    MOV dword ptr [ESP + 0x8],EAX       ; 00412869
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041286d
        ;   Label: LAB_0041286d
    MOV ECX,EDI                         ; 00412871
    XOR EAX,EAX                         ; 00412873
    ADD EDX,ESI                         ; 00412875
    CMP EAX,dword ptr [ECX + 0x38]      ; 00412877
        ;   Label: LAB_00412877
    JNZ 0x00412883                      ; 0041287a
        ;   XREF to: 00412883 (CONDITIONAL_JUMP)  ; LAB_00412883
    MOV dword ptr [EDX + 0x7c],0x1      ; 0041287c
    INC EAX                             ; 00412883
        ;   Label: LAB_00412883
    ADD EDX,0x2c                        ; 00412884
    CMP EAX,0x5                         ; 00412887
    JL 0x00412877                       ; 0041288a
        ;   XREF to: 00412877 (CONDITIONAL_JUMP)  ; LAB_00412877
    ADD ESI,0xdc                        ; 0041288c
    ADD EDI,0x4                         ; 00412892
    CMP ESI,0x294                       ; 00412895
    JNZ 0x0041286d                      ; 0041289b
        ;   XREF to: 0041286d (CONDITIONAL_JUMP)  ; LAB_0041286d
    CMP dword ptr [EBX + 0x34],0x1      ; 0041289d
    JNZ 0x004128d0                      ; 004128a1
        ;   XREF to: 004128d0 (CONDITIONAL_JUMP)  ; LAB_004128d0
    MOV EDX,dword ptr [EBX + 0xc08]     ; 004128a3
    PUSH EDX                            ; 004128a9
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004128aa
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004128af
    MOV ECX,dword ptr [EBX + 0xc0c]     ; 004128b2
    PUSH ECX                            ; 004128b8
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004128b9
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004128be
    MOV ESI,dword ptr [EBX + 0xc10]     ; 004128c1
    PUSH ESI                            ; 004128c7
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004128c8
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004128cd
    CMP dword ptr [EBX + 0x34],0x1      ; 004128d0
        ;   Label: LAB_004128d0
    JZ 0x0041267e                       ; 004128d4
        ;   XREF to: 0041267e (CONDITIONAL_JUMP)  ; LAB_0041267e
    MOV EAX,dword ptr [EBX + 0x40]      ; 004128da
    MOV EBP,dword ptr [EBX + 0x3c]      ; 004128dd
    MOV dword ptr [ESP + 0x4],EAX       ; 004128e0
    MOV EAX,dword ptr [EBX + 0x34]      ; 004128e4
    MOV EDI,dword ptr [EBX + 0x44]      ; 004128e7
    MOV dword ptr [ESP],EAX             ; 004128ea
    MOV EAX,dword ptr [EBX + 0x30]      ; 004128ed
    MOV ESI,dword ptr [EBX + 0x38]      ; 004128f0
    TEST EAX,EAX                        ; 004128f3
    JZ 0x004129a8                       ; 004128f5
        ;   XREF to: 004129a8 (CONDITIONAL_JUMP)  ; LAB_004129a8
    CMP dword ptr [EBX + 0x30],0x0      ; 004128fb
        ;   Label: LAB_004128fb
    JZ 0x0041267e                       ; 004128ff
        ;   XREF to: 0041267e (CONDITIONAL_JUMP)  ; LAB_0041267e
    MOV EDX,dword ptr [EBX + 0xc08]     ; 00412905
    PUSH EDX                            ; 0041290b
    CALL sound_sndmain.cpp_FUN_00556700 ; 0041290c
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00412911
    TEST EAX,EAX                        ; 00412914
    JNZ 0x0041267e                      ; 00412916
        ;   XREF to: 0041267e (CONDITIONAL_JUMP)  ; LAB_0041267e
    MOV dword ptr [EBX + 0x34],0x1      ; 0041291c
    MOV ECX,dword ptr [EBX + 0xc14]     ; 00412923
    MOV dword ptr [EBX + 0x30],EAX      ; 00412929
    CMP ESI,ECX                         ; 0041292c
    JNZ 0x0041267e                      ; 0041292e
        ;   XREF to: 0041267e (CONDITIONAL_JUMP)  ; LAB_0041267e
    CMP EBP,dword ptr [EBX + 0xc18]     ; 00412934
    JNZ 0x0041267e                      ; 0041293a
        ;   XREF to: 0041267e (CONDITIONAL_JUMP)  ; LAB_0041267e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00412940
    CMP EAX,dword ptr [EBX + 0xc1c]     ; 00412944
    JNZ 0x0041267e                      ; 0041294a
        ;   XREF to: 0041267e (CONDITIONAL_JUMP)  ; LAB_0041267e
    CMP EDI,dword ptr [EBX + 0xc20]     ; 00412950
    JNZ 0x0041267e                      ; 00412956
        ;   XREF to: 0041267e (CONDITIONAL_JUMP)  ; LAB_0041267e
    MOV EAX,dword ptr [ESP]             ; 0041295c
    CMP EAX,dword ptr [EBX + 0xc24]     ; 0041295f
    JNZ 0x0041267e                      ; 00412965
        ;   XREF to: 0041267e (CONDITIONAL_JUMP)  ; LAB_0041267e
    PUSH 0x5b67a5                       ; 0041296b | = "AudioPuzzleSuccess"
    MOV ECX,dword ptr [0x005fba60]      ; 00412970 | DAT_005fba60
    PUSH ECX                            ; 00412976
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00412977
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0041297c
    MOV dword ptr [EBX + 0xc28],0x1     ; 0041297f
    ADD ESP,0x10                        ; 00412989
    POP EBP                             ; 0041298c
    POP EDI                             ; 0041298d
    POP ESI                             ; 0041298e
    POP EBX                             ; 0041298f
    RET                                 ; 00412990
    MOV dword ptr [EBX + 0x260],ESI     ; 00412991
        ;   Label: LAB_00412991
    JMP 0x0041284b                      ; 00412997
        ;   XREF to: 0041284b (UNCONDITIONAL_JUMP)  ; LAB_0041284b
    MOV dword ptr [EBX + 0x7c],0x1      ; 0041299c
        ;   Label: LAB_0041299c
    JMP 0x0041285f                      ; 004129a3
        ;   XREF to: 0041285f (UNCONDITIONAL_JUMP)  ; LAB_0041285f
    MOV EDX,dword ptr [EBX + 0xc08]     ; 004129a8
        ;   Label: LAB_004129a8
    PUSH EDX                            ; 004129ae
    CALL sound_sndmain.cpp_FUN_00556700 ; 004129af
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004129b4
    TEST EAX,EAX                        ; 004129b7
    JNZ 0x004128fb                      ; 004129b9
        ;   XREF to: 004128fb (CONDITIONAL_JUMP)  ; LAB_004128fb
    MOV ECX,dword ptr [ESP]             ; 004129bf
    PUSH ECX                            ; 004129c2
    PUSH EDI                            ; 004129c3
    MOV EDI,dword ptr [ESP + 0xc]       ; 004129c4
    PUSH EDI                            ; 004129c8
    PUSH EBP                            ; 004129c9
    PUSH ESI                            ; 004129ca
    MOV EAX,dword ptr [EBX]             ; 004129cb
    PUSH EBX                            ; 004129cd
    CALL dword ptr [EAX + 0x58]         ; 004129ce
    ADD ESP,0x18                        ; 004129d1
    MOV dword ptr [EBX + 0x30],0x1      ; 004129d4
    ADD ESP,0x10                        ; 004129db
    POP EBP                             ; 004129de
    POP EDI                             ; 004129df
    POP ESI                             ; 004129e0
    POP EBX                             ; 004129e1
    RET                                 ; 004129e2

