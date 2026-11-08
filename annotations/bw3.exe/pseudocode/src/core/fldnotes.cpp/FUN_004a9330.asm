; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a9330(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004a8f30 at 004a9057
;
; Referenced Globals:
;   undefined4 DAT_005c0ef9
;   undefined4 DAT_005c0efc
;   undefined4 DAT_005c0eff
;   undefined4 DAT_005c0f02
;   TerminatedCString s_image_005c0f06
;   TerminatedCString s_s_d_d_n_005c0f0c
;   TerminatedCString s_Error_parsing_image_tag_005c0f17
;   TerminatedCString s_core_fldnotes_cpp_005c0f3d
;   TerminatedCString s_Out_of_memory_005c0f52
;   TerminatedCString s_twanachar_005c0f60
;   TerminatedCString s_s_n_005c0f6a
;   TerminatedCString s_Error_parsing_twanachar_005c0f70
;   TerminatedCString s_core_fldnotes_cpp_005c0f96
;   TerminatedCString s_Out_of_memory_005c0fab
;   TerminatedCString s_twanaentry_005c0fb9
;   ... and 6 more
;
; Called Functions:
;   FUN_004a8680
;   FUN_004a87a0
;   FUN_004a88d0
;   FUN_004a9230
;   FUN_004a9270
;   FUN_004a9300
;   FUN_004a9710
;   FUN_004e4330
;   FUN_005a28c0
;   FUN_005a3260
;   FUN_005a3cb2
;   FUN_005a3f90
;   FUN_005a5b9c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9330
        ;   Label: FUN_004a9330
    PUSH ESI                            ; 004a9331
    PUSH EDI                            ; 004a9332
    PUSH EBP                            ; 004a9333
    SUB ESP,0x210                       ; 004a9334
    MOV EBX,dword ptr [ESP + 0x224]     ; 004a933a
    MOV ESI,dword ptr [ESP + 0x228]     ; 004a9341
    PUSH 0x5c0ef9                       ; 004a9348 | DAT_005c0ef9
    PUSH ESI                            ; 004a934d
    CALL FUN_005a3260                   ; 004a934e
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004a9353
    TEST EAX,EAX                        ; 004a9356
    JNZ 0x004a9383                      ; 004a9358
        ;   XREF to: 004a9383 (CONDITIONAL_JUMP)  ; LAB_004a9383
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004a935a
    CMP ECX,dword ptr [EBX + 0x14]      ; 004a935d
    JNZ 0x004a936a                      ; 004a9360
        ;   XREF to: 004a936a (CONDITIONAL_JUMP)  ; LAB_004a936a
    MOV ESI,dword ptr [EBX + 0x20]      ; 004a9362
    CMP ESI,dword ptr [EBX + 0x18]      ; 004a9365
    JZ 0x004a9373                       ; 004a9368
        ;   XREF to: 004a9373 (CONDITIONAL_JUMP)  ; LAB_004a9373
    PUSH EBX                            ; 004a936a
        ;   Label: LAB_004a936a
    CALL FUN_004a9270                   ; 004a936b
        ;   XREF to: 004a9270 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9270()
    ADD ESP,0x4                         ; 004a9370
    MOV EAX,0x1                         ; 004a9373
        ;   Label: LAB_004a9373
    ADD ESP,0x210                       ; 004a9378
        ;   Label: LAB_004a9378
    POP EBP                             ; 004a937e
    POP EDI                             ; 004a937f
    POP ESI                             ; 004a9380
    POP EBX                             ; 004a9381
    RET                                 ; 004a9382
    PUSH 0x5c0efc                       ; 004a9383 | DAT_005c0efc
        ;   Label: LAB_004a9383
    PUSH ESI                            ; 004a9388
    CALL FUN_005a3260                   ; 004a9389
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004a938e
    TEST EAX,EAX                        ; 004a9391
    JZ 0x004a93be                       ; 004a9393
        ;   XREF to: 004a93be (CONDITIONAL_JUMP)  ; LAB_004a93be
    PUSH 0x5c0eff                       ; 004a9395 | DAT_005c0eff
    PUSH ESI                            ; 004a939a
    CALL FUN_005a3260                   ; 004a939b
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004a93a0
    TEST EAX,EAX                        ; 004a93a3
    JNZ 0x004a93d7                      ; 004a93a5
        ;   XREF to: 004a93d7 (CONDITIONAL_JUMP)  ; LAB_004a93d7
    MOV EAX,0x1                         ; 004a93a7
    MOV dword ptr [EBX + 0x34],0x1      ; 004a93ac
    ADD ESP,0x210                       ; 004a93b3
    POP EBP                             ; 004a93b9
    POP EDI                             ; 004a93ba
    POP ESI                             ; 004a93bb
    POP EBX                             ; 004a93bc
    RET                                 ; 004a93bd
    PUSH EBX                            ; 004a93be
        ;   Label: LAB_004a93be
    CALL FUN_004a9300                   ; 004a93bf
        ;   XREF to: 004a9300 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9300()
    MOV EAX,0x1                         ; 004a93c4
    ADD ESP,0x4                         ; 004a93c9
    ADD ESP,0x210                       ; 004a93cc
    POP EBP                             ; 004a93d2
    POP EDI                             ; 004a93d3
    POP ESI                             ; 004a93d4
    POP EBX                             ; 004a93d5
    RET                                 ; 004a93d6
    PUSH 0x5c0f02                       ; 004a93d7 | DAT_005c0f02
        ;   Label: LAB_004a93d7
    PUSH ESI                            ; 004a93dc
    CALL FUN_005a3260                   ; 004a93dd
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004a93e2
    TEST EAX,EAX                        ; 004a93e5
    JNZ 0x004a93fc                      ; 004a93e7
        ;   XREF to: 004a93fc (CONDITIONAL_JUMP)  ; LAB_004a93fc
    MOV dword ptr [EBX + 0x34],EAX      ; 004a93e9
    MOV EAX,0x1                         ; 004a93ec
    ADD ESP,0x210                       ; 004a93f1
    POP EBP                             ; 004a93f7
    POP EDI                             ; 004a93f8
    POP ESI                             ; 004a93f9
    POP EBX                             ; 004a93fa
    RET                                 ; 004a93fb
    PUSH 0x5                            ; 004a93fc
        ;   Label: LAB_004a93fc
    PUSH 0x5c0f06                       ; 004a93fe | = "image"
    PUSH ESI                            ; 004a9403
    CALL FUN_005a3f90                   ; 004a9404
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f90()
    ADD ESP,0xc                         ; 004a9409
    TEST EAX,EAX                        ; 004a940c
    JNZ 0x004a952b                      ; 004a940e
        ;   XREF to: 004a952b (CONDITIONAL_JUMP)  ; LAB_004a952b
    LEA EAX,[ESP + 0x208]               ; 004a9414
    PUSH EAX                            ; 004a941b
    LEA EAX,[ESP + 0x208]               ; 004a941c
    PUSH EAX                            ; 004a9423
    LEA EAX,[ESP + 0x208]               ; 004a9424
    PUSH EAX                            ; 004a942b
    LEA EAX,[ESP + 0x10c]               ; 004a942c
    PUSH EAX                            ; 004a9433
    PUSH 0x5c0f0c                       ; 004a9434 | = "%s %d %d%n"
    LEA EAX,[ESI + 0x5]                 ; 004a9439
    MOV EBP,0xffffffff                  ; 004a943c
    PUSH EAX                            ; 004a9441
    MOV dword ptr [ESP + 0x220],EBP     ; 004a9442
    CALL FUN_005a5b9c                   ; 004a9449
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; undefined FUN_005a5b9c()
    ADD ESP,0x18                        ; 004a944e
    CMP dword ptr [ESP + 0x208],0x3     ; 004a9451
    JL 0x004a950b                       ; 004a9459
        ;   XREF to: 004a950b (CONDITIONAL_JUMP)  ; LAB_004a950b
    MOV EDX,dword ptr [ESP + 0x204]     ; 004a945f
    PUSH EDX                            ; 004a9466
    MOV ECX,dword ptr [ESP + 0x204]     ; 004a9467
    PUSH ECX                            ; 004a946e
    PUSH EBX                            ; 004a946f
    CALL FUN_004a9710                   ; 004a9470
        ;   XREF to: 004a9710 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9710()
    ADD ESP,0xc                         ; 004a9475
    TEST EAX,EAX                        ; 004a9478
    JZ 0x004a9378                       ; 004a947a
        ;   XREF to: 004a9378 (CONDITIONAL_JUMP)  ; LAB_004a9378
    PUSH 0x2c                           ; 004a9480
    CALL FUN_005a3cb2                   ; 004a9482
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3cb2()
    ADD ESP,0x4                         ; 004a9487
    TEST EAX,EAX                        ; 004a948a
    JZ 0x004a94af                       ; 004a948c
        ;   XREF to: 004a94af (CONDITIONAL_JUMP)  ; LAB_004a94af
    MOV ESI,dword ptr [ESP + 0x204]     ; 004a948e
    PUSH ESI                            ; 004a9495
    MOV EDI,dword ptr [ESP + 0x204]     ; 004a9496
    PUSH EDI                            ; 004a949d
    LEA ESI,[ESP + 0x108]               ; 004a949e
    PUSH ESI                            ; 004a94a5
    PUSH EAX                            ; 004a94a6
    CALL FUN_004a8680                   ; 004a94a7
        ;   XREF to: 004a8680 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8680()
    ADD ESP,0x10                        ; 004a94ac
    MOV ESI,EAX                         ; 004a94af
        ;   Label: LAB_004a94af
    TEST EAX,EAX                        ; 004a94b1
    JNZ 0x004a94d7                      ; 004a94b3
        ;   XREF to: 004a94d7 (CONDITIONAL_JUMP)  ; LAB_004a94d7
    MOV EBP,0x5c0f3d                    ; 004a94b5 | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x601                       ; 004a94ba
    PUSH 0x5c0f52                       ; 004a94bf | = "Out of memory"
    MOV dword ptr [0x01d71de0],EBP      ; 004a94c4 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004a94ca | DAT_01d71de4
    CALL FUN_004e4330                   ; 004a94cf
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004a94d4
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a94d7
        ;   Label: LAB_004a94d7
    MOV dword ptr [ESI],EAX             ; 004a94da
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a94dc
    MOV dword ptr [ESI + 0x4],EAX       ; 004a94df
    MOV EAX,dword ptr [ESP + 0x200]     ; 004a94e2
    MOV EDX,dword ptr [EBX + 0x14]      ; 004a94e9
    PUSH ESI                            ; 004a94ec
    ADD EDX,EAX                         ; 004a94ed
    PUSH EBX                            ; 004a94ef
    MOV dword ptr [EBX + 0x14],EDX      ; 004a94f0
    CALL FUN_004a9230                   ; 004a94f3
        ;   XREF to: 004a9230 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9230()
    MOV EAX,0x1                         ; 004a94f8
    ADD ESP,0x8                         ; 004a94fd
    ADD ESP,0x210                       ; 004a9500
    POP EBP                             ; 004a9506
    POP EDI                             ; 004a9507
    POP ESI                             ; 004a9508
    POP EBX                             ; 004a9509
    RET                                 ; 004a950a
    PUSH ESI                            ; 004a950b
        ;   Label: LAB_004a950b
    PUSH 0x5c0f17                       ; 004a950c | = "Error parsing 'image' tag parms: '%s'"
    PUSH 0x1d0d010                      ; 004a9511 | DAT_01d0d010
    CALL FUN_005a28c0                   ; 004a9516
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 004a951b
    MOV EAX,EBP                         ; 004a951e
    ADD ESP,0x210                       ; 004a9520
    POP EBP                             ; 004a9526
    POP EDI                             ; 004a9527
    POP ESI                             ; 004a9528
    POP EBX                             ; 004a9529
    RET                                 ; 004a952a
    PUSH 0x9                            ; 004a952b
        ;   Label: LAB_004a952b
    PUSH 0x5c0f60                       ; 004a952d | = "twanachar"
    PUSH ESI                            ; 004a9532
    CALL FUN_005a3f90                   ; 004a9533
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f90()
    ADD ESP,0xc                         ; 004a9538
    TEST EAX,EAX                        ; 004a953b
    JNZ 0x004a963d                      ; 004a953d
        ;   XREF to: 004a963d (CONDITIONAL_JUMP)  ; LAB_004a963d
    LEA EAX,[ESP + 0x20c]               ; 004a9543
    PUSH EAX                            ; 004a954a
    LEA EAX,[ESP + 0x4]                 ; 004a954b
    PUSH EAX                            ; 004a954f
    PUSH 0x5c0f6a                       ; 004a9550 | = " %s%n"
    LEA EAX,[ESI + 0x9]                 ; 004a9555
    MOV ECX,0xffffffff                  ; 004a9558
    PUSH EAX                            ; 004a955d
    MOV dword ptr [ESP + 0x21c],ECX     ; 004a955e
    CALL FUN_005a5b9c                   ; 004a9565
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; undefined FUN_005a5b9c()
    ADD ESP,0x10                        ; 004a956a
    CMP dword ptr [ESP + 0x20c],0x3     ; 004a956d
    JL 0x004a9602                       ; 004a9575
        ;   XREF to: 004a9602 (CONDITIONAL_JUMP)  ; LAB_004a9602
    PUSH 0x4c                           ; 004a957b
    CALL FUN_005a3cb2                   ; 004a957d
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3cb2()
    ADD ESP,0x4                         ; 004a9582
    TEST EAX,EAX                        ; 004a9585
    JZ 0x004a9595                       ; 004a9587
        ;   XREF to: 004a9595 (CONDITIONAL_JUMP)  ; LAB_004a9595
    MOV ESI,ESP                         ; 004a9589
    PUSH ESI                            ; 004a958b
    PUSH EAX                            ; 004a958c
    CALL FUN_004a87a0                   ; 004a958d
        ;   XREF to: 004a87a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a87a0()
    ADD ESP,0x8                         ; 004a9592
    MOV ESI,EAX                         ; 004a9595
        ;   Label: LAB_004a9595
    TEST EAX,EAX                        ; 004a9597
    JNZ 0x004a95bd                      ; 004a9599
        ;   XREF to: 004a95bd (CONDITIONAL_JUMP)  ; LAB_004a95bd
    MOV EBP,0x5c0f96                    ; 004a959b | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x617                       ; 004a95a0
    PUSH 0x5c0fab                       ; 004a95a5 | = "Out of memory"
    MOV dword ptr [0x01d71de0],EBP      ; 004a95aa | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004a95b0 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004a95b5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004a95ba
    MOV EDX,dword ptr [ESI + 0xc]       ; 004a95bd
        ;   Label: LAB_004a95bd
    PUSH EDX                            ; 004a95c0
    MOV ECX,dword ptr [ESI + 0x8]       ; 004a95c1
    PUSH ECX                            ; 004a95c4
    PUSH EBX                            ; 004a95c5
    CALL FUN_004a9710                   ; 004a95c6
        ;   XREF to: 004a9710 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9710()
    ADD ESP,0xc                         ; 004a95cb
    TEST EAX,EAX                        ; 004a95ce
    JZ 0x004a9625                       ; 004a95d0
        ;   XREF to: 004a9625 (CONDITIONAL_JUMP)  ; LAB_004a9625
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a95d2
    MOV dword ptr [ESI],EAX             ; 004a95d5
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a95d7
    MOV dword ptr [ESI + 0x4],EAX       ; 004a95da
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a95dd
    MOV EDI,dword ptr [EBX + 0x14]      ; 004a95e0
    PUSH ESI                            ; 004a95e3
    ADD EDI,EAX                         ; 004a95e4
    PUSH EBX                            ; 004a95e6
    MOV dword ptr [EBX + 0x14],EDI      ; 004a95e7
    CALL FUN_004a9230                   ; 004a95ea
        ;   XREF to: 004a9230 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9230()
    MOV EAX,0x1                         ; 004a95ef
    ADD ESP,0x8                         ; 004a95f4
    ADD ESP,0x210                       ; 004a95f7
    POP EBP                             ; 004a95fd
    POP EDI                             ; 004a95fe
    POP ESI                             ; 004a95ff
    POP EBX                             ; 004a9600
    RET                                 ; 004a9601
    PUSH ESI                            ; 004a9602
        ;   Label: LAB_004a9602
    PUSH 0x5c0f70                       ; 004a9603 | = "Error parsing 'twanachar' parms: '%s'"
    PUSH 0x1d0d010                      ; 004a9608 | DAT_01d0d010
    CALL FUN_005a28c0                   ; 004a960d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    MOV EAX,0xffffffff                  ; 004a9612
    ADD ESP,0xc                         ; 004a9617
    ADD ESP,0x210                       ; 004a961a
    POP EBP                             ; 004a9620
    POP EDI                             ; 004a9621
    POP ESI                             ; 004a9622
    POP EBX                             ; 004a9623
    RET                                 ; 004a9624
    PUSH 0x2                            ; 004a9625
        ;   Label: LAB_004a9625
    MOV EAX,dword ptr [ESI + 0x14]      ; 004a9627
    PUSH ESI                            ; 004a962a
    CALL dword ptr [EAX]                ; 004a962b
    ADD ESP,0x8                         ; 004a962d
    XOR EAX,EAX                         ; 004a9630
    ADD ESP,0x210                       ; 004a9632
    POP EBP                             ; 004a9638
    POP EDI                             ; 004a9639
    POP ESI                             ; 004a963a
    POP EBX                             ; 004a963b
    RET                                 ; 004a963c
    PUSH 0x5c0fb9                       ; 004a963d | = "twanaentry"
        ;   Label: LAB_004a963d
    PUSH ESI                            ; 004a9642
    CALL FUN_005a3260                   ; 004a9643
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004a9648
    TEST EAX,EAX                        ; 004a964b
    JNZ 0x004a96df                      ; 004a964d
        ;   XREF to: 004a96df (CONDITIONAL_JUMP)  ; LAB_004a96df
    PUSH 0x118                          ; 004a9653
    CALL FUN_005a3cb2                   ; 004a9658
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3cb2()
    ADD ESP,0x4                         ; 004a965d
    TEST EAX,EAX                        ; 004a9660
    JZ 0x004a966d                       ; 004a9662
        ;   XREF to: 004a966d (CONDITIONAL_JUMP)  ; LAB_004a966d
    PUSH EAX                            ; 004a9664
    CALL FUN_004a88d0                   ; 004a9665
        ;   XREF to: 004a88d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a88d0()
    ADD ESP,0x4                         ; 004a966a
    MOV ESI,EAX                         ; 004a966d
        ;   Label: LAB_004a966d
    TEST EAX,EAX                        ; 004a966f
    JNZ 0x004a9696                      ; 004a9671
        ;   XREF to: 004a9696 (CONDITIONAL_JUMP)  ; LAB_004a9696
    MOV EDX,0x5c0fc4                    ; 004a9673 | = "..\\core\\fldnotes.cpp"
    MOV ECX,0x62f                       ; 004a9678
    PUSH 0x5c0fd9                       ; 004a967d | = "Out of memory"
    MOV dword ptr [0x01d71de0],EDX      ; 004a9682 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004a9688 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004a968e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004a9693
    MOV EDI,dword ptr [ESI + 0xc]       ; 004a9696
        ;   Label: LAB_004a9696
    PUSH EDI                            ; 004a9699
    MOV EBP,dword ptr [ESI + 0x8]       ; 004a969a
    PUSH EBP                            ; 004a969d
    PUSH EBX                            ; 004a969e
    CALL FUN_004a9710                   ; 004a969f
        ;   XREF to: 004a9710 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9710()
    ADD ESP,0xc                         ; 004a96a4
    TEST EAX,EAX                        ; 004a96a7
    JZ 0x004a9625                       ; 004a96a9
        ;   XREF to: 004a9625 (CONDITIONAL_JUMP)  ; LAB_004a9625
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a96af
    MOV dword ptr [ESI],EAX             ; 004a96b2
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a96b4
    MOV dword ptr [ESI + 0x4],EAX       ; 004a96b7
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a96ba
    MOV EDX,dword ptr [EBX + 0x14]      ; 004a96bd
    PUSH ESI                            ; 004a96c0
    ADD EDX,EAX                         ; 004a96c1
    PUSH EBX                            ; 004a96c3
    MOV dword ptr [EBX + 0x14],EDX      ; 004a96c4
    CALL FUN_004a9230                   ; 004a96c7
        ;   XREF to: 004a9230 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9230()
    MOV EAX,0x1                         ; 004a96cc
    ADD ESP,0x8                         ; 004a96d1
    ADD ESP,0x210                       ; 004a96d4
    POP EBP                             ; 004a96da
    POP EDI                             ; 004a96db
    POP ESI                             ; 004a96dc
    POP EBX                             ; 004a96dd
    RET                                 ; 004a96de
    PUSH ESI                            ; 004a96df
        ;   Label: LAB_004a96df
    PUSH 0x5c0fe7                       ; 004a96e0 | = "Ignoring unknown markup tag: %s"
    PUSH 0x1d0d010                      ; 004a96e5 | DAT_01d0d010
    CALL FUN_005a28c0                   ; 004a96ea
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    MOV EAX,0xffffffff                  ; 004a96ef
    ADD ESP,0xc                         ; 004a96f4
    ADD ESP,0x210                       ; 004a96f7
    POP EBP                             ; 004a96fd
    POP EDI                             ; 004a96fe
    POP ESI                             ; 004a96ff
    POP EBX                             ; 004a9700
    RET                                 ; 004a9701

