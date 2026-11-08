; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d7250(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x6f8]:1  local_6f8
; undefined        Stack[-0x338]:1  local_338
; undefined        Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005031c0 at 0050324c
;   FUN_0050cc90 at 0050cf43
;
; Referenced Globals:
;   undefined4 DAT_005e3104
;   TerminatedCString s_blairhero_pod_005e3107
;   undefined4 DAT_005e3115
;   undefined4 DAT_005e3116
;   TerminatedCString s_pod_ini_005e3119
;   undefined4 DAT_005e3121
;   TerminatedCString s_system_nocturne_ini_005e3126
;   TerminatedCString s_Act1Code_005e313a
;   TerminatedCString s_The_Rustin_Parr_Investig_005e3143
;   TerminatedCString s_The_Rustin_Parr_Investig_005e3161
;   TerminatedCString s_Choose_a_story_to_play_005e317f
;   TerminatedCString s_Normal_Puzzles_Normal_Co_005e3196
;   TerminatedCString s_Normal_Puzzles_Hard_Comb_005e31b4
;   TerminatedCString s_Hard_Puzzles_Normal_Comb_005e31d0
;   TerminatedCString s_Hard_Puzzles_Hard_Combat_005e31ec
;   ... and 31 more
;
; Called Functions:
;   FUN_00479180
;   FUN_00494fd0
;   FUN_004994d0
;   FUN_0049a620
;   FUN_0049a710
;   FUN_0049a8b0
;   FUN_0049c370
;   FUN_004a9a00
;   FUN_004bdaa0
;   FUN_004d6990
;   FUN_004f4b00
;   FUN_004f4b30
;   FUN_004f4d10
;   FUN_004fe840
;   FUN_0051a3f0
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7250
        ;   Label: FUN_004d7250
    PUSH ESI                            ; 004d7251
    PUSH EDI                            ; 004d7252
    PUSH EBP                            ; 004d7253
    SUB ESP,0x6e8                       ; 004d7254
    PUSH 0x5e3104                       ; 004d725a | DAT_005e3104
    PUSH 0x5e3107                       ; 004d725f | = "blairhero.pod"
    PUSH 0x5e3115                       ; 004d7264 | DAT_005e3115
    CALL FUN_00479180                   ; 004d7269
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 004d726e
    TEST EAX,EAX                        ; 004d7271
    JNZ 0x004d75a4                      ; 004d7273
        ;   XREF to: 004d75a4 (CONDITIONAL_JUMP)  ; LAB_004d75a4
    MOV EBP,0x1                         ; 004d7279
    MOV EAX,dword ptr [ESP + 0x6fc]     ; 004d727e
        ;   Label: LAB_004d727e
    MOV dword ptr [EAX + 0x26c],0x0     ; 004d7285
    MOV dword ptr [EAX + 0x274],0x0     ; 004d728f
    MOV dword ptr [EAX + 0x268],0x0     ; 004d7299
    MOV dword ptr [EAX + 0x270],0x0     ; 004d72a3
    PUSH 0x5e3116                       ; 004d72ad | DAT_005e3116
    MOV dword ptr [EAX + 0x250],0x0     ; 004d72b2
    MOV EAX,[0x01c3eb50]                ; 004d72bc | DAT_01c3eb50
    PUSH 0x5e3119                       ; 004d72c1 | = "pod.ini"
    MOV dword ptr [ESP + 0x6e8],EAX     ; 004d72c6
    MOV EAX,[0x0152d244]                ; 004d72cd | DAT_0152d244
    XOR EBX,EBX                         ; 004d72d2
    MOV [0x01c3eb50],EAX                ; 004d72d4 | DAT_01c3eb50
    CALL FUN_005c157c                   ; 004d72d9
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined FUN_005c157c()
    ADD ESP,0x8                         ; 004d72de
    TEST EAX,EAX                        ; 004d72e1
    JZ 0x004d72f3                       ; 004d72e3
        ;   XREF to: 004d72f3 (CONDITIONAL_JUMP)  ; LAB_004d72f3
    PUSH EAX                            ; 004d72e5
    MOV EBX,0x1                         ; 004d72e6
    CALL FUN_005c0d10                   ; 004d72eb
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 004d72f0
    MOV EDX,dword ptr [ESP + 0x700]     ; 004d72f3
        ;   Label: LAB_004d72f3
    CMP EDX,0x1                         ; 004d72fa
    JNZ 0x004d7301                      ; 004d72fd
        ;   XREF to: 004d7301 (CONDITIONAL_JUMP)  ; LAB_004d7301
    MOV EBX,EDX                         ; 004d72ff
    TEST EBP,EBP                        ; 004d7301
        ;   Label: LAB_004d7301
    PUSH 0x5e3121                       ; 004d7303 | DAT_005e3121
    PUSH 0x5e3126                       ; 004d7308 | = "system\\nocturne.ini"
    LEA EAX,[ESP + 0x3c8]               ; 004d730d
    PUSH EAX                            ; 004d7314
    CALL FUN_004f4b00                   ; 004d7315
        ;   XREF to: 004f4b00 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4b00()
    ADD ESP,0xc                         ; 004d731a
    LEA EAX,[ESP + 0x6dc]               ; 004d731d
    PUSH EAX                            ; 004d7324
    PUSH 0x5e313a                       ; 004d7325 | = "Act1Code"
    LEA EAX,[ESP + 0x3c8]               ; 004d732a
    XOR ECX,ECX                         ; 004d7331
    PUSH EAX                            ; 004d7333
    MOV dword ptr [ESP + 0x6e8],ECX     ; 004d7334
    CALL FUN_004f4d10                   ; 004d733b
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4d10()
    ADD ESP,0xc                         ; 004d7340
    PUSH 0x5e3143                       ; 004d7343 | = "The Rustin Parr Investigation"
    MOV ESI,0xffffffff                  ; 004d7348
    CALL FUN_00531090                   ; 004d734d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d7352
    MOV EBP,ESI                         ; 004d7355
    MOV dword ptr [ESP + 0x6c8],EAX     ; 004d7357
    MOV dword ptr [ESP + 0x6e4],ESI     ; 004d735e
    TEST EBX,EBX                        ; 004d7365
    JNZ 0x004d76db                      ; 004d7367
        ;   XREF to: 004d76db (CONDITIONAL_JUMP)  ; LAB_004d76db
    MOV EDI,ESI                         ; 004d736d
    XOR ESI,ESI                         ; 004d736f
    TEST EBP,EBP                        ; 004d7371
        ;   Label: LAB_004d7371
    JL 0x004d75b4                       ; 004d7373
        ;   XREF to: 004d75b4 (CONDITIONAL_JUMP)  ; LAB_004d75b4
    LEA EDI,[ESP + 0x5c4]               ; 004d7379
    MOV ESI,dword ptr [0x0061da58]      ; 004d7380 | PTR_DAT_0061da58
    PUSH EDI                            ; 004d7386
    MOV AL,byte ptr [ESI]               ; 004d7387 | DAT_005e36ab | DAT_005e36ad
        ;   Label: LAB_004d7387
    MOV byte ptr [EDI],AL               ; 004d7389
    CMP AL,0x0                          ; 004d738b
    JZ 0x004d739f                       ; 004d738d
        ;   XREF to: 004d739f (CONDITIONAL_JUMP)  ; LAB_004d739f
    MOV AL,byte ptr [ESI + 0x1]         ; 004d738f | DAT_005e36ac | = "bw1.msn"
    ADD ESI,0x2                         ; 004d7392
    MOV byte ptr [EDI + 0x1],AL         ; 004d7395
    ADD EDI,0x2                         ; 004d7398
    CMP AL,0x0                          ; 004d739b
    JNZ 0x004d7387                      ; 004d739d
        ;   XREF to: 004d7387 (CONDITIONAL_JUMP)  ; LAB_004d7387
    POP EDI                             ; 004d739f
        ;   Label: LAB_004d739f
    TEST EBP,EBP                        ; 004d73a0
    JNZ 0x004d73b7                      ; 004d73a2
        ;   XREF to: 004d73b7 (CONDITIONAL_JUMP)  ; LAB_004d73b7
    MOV EAX,dword ptr [ESP + 0x6fc]     ; 004d73a4
    MOV dword ptr [EAX + 0xe8],EBP      ; 004d73ab
    MOV dword ptr [EAX + 0xe4],EBP      ; 004d73b1
    CMP EBP,0x1                         ; 004d73b7
        ;   Label: LAB_004d73b7
    JNZ 0x004d73d3                      ; 004d73ba
        ;   XREF to: 004d73d3 (CONDITIONAL_JUMP)  ; LAB_004d73d3
    MOV EAX,dword ptr [ESP + 0x6fc]     ; 004d73bc
    MOV dword ptr [EAX + 0xe4],0x0      ; 004d73c3
    MOV dword ptr [EAX + 0xe8],EBP      ; 004d73cd
    CMP EBP,0x2                         ; 004d73d3
        ;   Label: LAB_004d73d3
    JNZ 0x004d73f3                      ; 004d73d6
        ;   XREF to: 004d73f3 (CONDITIONAL_JUMP)  ; LAB_004d73f3
    MOV EAX,dword ptr [ESP + 0x6fc]     ; 004d73d8
    MOV dword ptr [EAX + 0xe8],0x0      ; 004d73df
    MOV dword ptr [EAX + 0xe4],0x1      ; 004d73e9
    CMP EBP,0x3                         ; 004d73f3
        ;   Label: LAB_004d73f3
    JNZ 0x004d7413                      ; 004d73f6
        ;   XREF to: 004d7413 (CONDITIONAL_JUMP)  ; LAB_004d7413
    MOV EAX,dword ptr [ESP + 0x6fc]     ; 004d73f8
    MOV dword ptr [EAX + 0xe8],0x1      ; 004d73ff
    MOV dword ptr [EAX + 0xe4],0x1      ; 004d7409
    PUSH 0x5e3226                       ; 004d7413 | = "rt"
        ;   Label: LAB_004d7413
    LEA EAX,[ESP + 0x5c8]               ; 004d7418
    PUSH EAX                            ; 004d741f
    PUSH 0x5e3229                       ; 004d7420 | = "world"
    CALL FUN_00479180                   ; 004d7425
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 004d742a
    TEST EAX,EAX                        ; 004d742d
    JZ 0x004d757b                       ; 004d742f
        ;   XREF to: 004d757b (CONDITIONAL_JUMP)  ; LAB_004d757b
    PUSH EAX                            ; 004d7435
    CALL FUN_005c0d10                   ; 004d7436
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 004d743b
    MOV EAX,dword ptr [ESP + 0x6e4]     ; 004d743e
    MOV EDI,0x1cd09e8                   ; 004d7445
    MOV EDX,0x41000000                  ; 004d744a
    MOV EBX,dword ptr [EAX*0x4 + 0x61db5c] ; 004d744f | DAT_0061db5c
    MOV ESI,dword ptr [ESP + EAX*0x4 + 0x6c8] ; 004d7456
    MOV dword ptr [0x01cd0ae8],EBX      ; 004d745d | DAT_01cd0ae8
    PUSH EDI                            ; 004d7463 | DAT_01cd09e8
    MOV AL,byte ptr [ESI]               ; 004d7464
        ;   Label: LAB_004d7464
    MOV byte ptr [EDI],AL               ; 004d7466 | DAT_01cd09e8 | DAT_01cd09ea
    CMP AL,0x0                          ; 004d7468
    JZ 0x004d747c                       ; 004d746a
        ;   XREF to: 004d747c (CONDITIONAL_JUMP)  ; LAB_004d747c
    MOV AL,byte ptr [ESI + 0x1]         ; 004d746c
    ADD ESI,0x2                         ; 004d746f
    MOV byte ptr [EDI + 0x1],AL         ; 004d7472 | DAT_01cd09e9 | DAT_01cd09eb
    ADD EDI,0x2                         ; 004d7475
    CMP AL,0x0                          ; 004d7478
    JNZ 0x004d7464                      ; 004d747a
        ;   XREF to: 004d7464 (CONDITIONAL_JUMP)  ; LAB_004d7464
    POP EDI                             ; 004d747c
        ;   Label: LAB_004d747c
    MOV dword ptr [0x01cd0aec],EDX      ; 004d747d | DAT_01cd0aec
    MOV ECX,dword ptr [0x0061d418]      ; 004d7483 | DAT_0061d418
        ;   Label: LAB_004d7483
    PUSH ECX                            ; 004d7489 | DAT_01cc8004
    CALL FUN_004bdaa0                   ; 004d748a
        ;   XREF to: 004bdaa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bdaa0()
    ADD ESP,0x4                         ; 004d748f
    MOV EBX,dword ptr [0x0061b4d0]      ; 004d7492 | DAT_0061b4d0
    PUSH EBX                            ; 004d7498
    CALL FUN_004a9a00                   ; 004d7499
        ;   XREF to: 004a9a00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9a00()
    ADD ESP,0x4                         ; 004d749e
    LEA EAX,[ESP + 0x5c4]               ; 004d74a1
    PUSH EAX                            ; 004d74a8
    PUSH 0x1cd05c0                      ; 004d74a9 | DAT_01cd05c0
    MOV ESI,0x1                         ; 004d74ae
    CALL FUN_005c04e0                   ; 004d74b3
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004d74b8
    TEST EAX,EAX                        ; 004d74bb
    JZ 0x004d74e7                       ; 004d74bd
        ;   XREF to: 004d74e7 (CONDITIONAL_JUMP)  ; LAB_004d74e7
    LEA ESI,[ESP + 0x5c4]               ; 004d74bf
    MOV EDI,0x1cd05c0                   ; 004d74c6
    PUSH EDI                            ; 004d74cb | DAT_01cd05c0
    MOV AL,byte ptr [ESI]               ; 004d74cc
        ;   Label: LAB_004d74cc
    MOV byte ptr [EDI],AL               ; 004d74ce | DAT_01cd05c0 | DAT_01cd05c2
    CMP AL,0x0                          ; 004d74d0
    JZ 0x004d74e4                       ; 004d74d2
        ;   XREF to: 004d74e4 (CONDITIONAL_JUMP)  ; LAB_004d74e4
    MOV AL,byte ptr [ESI + 0x1]         ; 004d74d4
    ADD ESI,0x2                         ; 004d74d7
    MOV byte ptr [EDI + 0x1],AL         ; 004d74da | DAT_01cd05c1 | DAT_01cd05c3
    ADD EDI,0x2                         ; 004d74dd
    CMP AL,0x0                          ; 004d74e0
    JNZ 0x004d74cc                      ; 004d74e2
        ;   XREF to: 004d74cc (CONDITIONAL_JUMP)  ; LAB_004d74cc
    POP EDI                             ; 004d74e4
        ;   Label: LAB_004d74e4
    XOR ESI,ESI                         ; 004d74e5
    MOV EDI,dword ptr [ESP + 0x6e4]     ; 004d74e7
        ;   Label: LAB_004d74e7
    PUSH EDI                            ; 004d74ee
    PUSH 0x0                            ; 004d74ef
    PUSH 0xa                            ; 004d74f1
    MOV EBP,dword ptr [0x0061f2e0]      ; 004d74f3 | DAT_0061f2e0
    PUSH EBP                            ; 004d74f9
    CALL FUN_004fe840                   ; 004d74fa
        ;   XREF to: 004fe840 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe840()
    ADD ESP,0x10                        ; 004d74ff
    PUSH ESI                            ; 004d7502
    LEA EAX,[ESP + 0x5c8]               ; 004d7503
    PUSH EAX                            ; 004d750a
    MOV EAX,[0x0061f650]                ; 004d750b | DAT_0061f650
    PUSH EAX                            ; 004d7510 | DAT_01d2c900
    CALL FUN_0051a3f0                   ; 004d7511
        ;   XREF to: 0051a3f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051a3f0()
    ADD ESP,0xc                         ; 004d7516
    PUSH 0x0                            ; 004d7519
    MOV EDX,dword ptr [0x0061f650]      ; 004d751b | DAT_0061f650
    PUSH EDX                            ; 004d7521 | DAT_01d2c900
    CALL FUN_0051c0a0                   ; 004d7522
        ;   XREF to: 0051c0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c0a0()
    ADD ESP,0x8                         ; 004d7527
    TEST EAX,EAX                        ; 004d752a
    JZ 0x004d757b                       ; 004d752c
        ;   XREF to: 004d757b (CONDITIONAL_JUMP)  ; LAB_004d757b
    MOV ECX,dword ptr [0x0061f650]      ; 004d752e | DAT_0061f650
    PUSH ECX                            ; 004d7534 | DAT_01d2c900
    CALL FUN_0051bdc0                   ; 004d7535
        ;   XREF to: 0051bdc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051bdc0()
    ADD ESP,0x4                         ; 004d753a
    MOV EBX,dword ptr [0x0061f650]      ; 004d753d | DAT_0061f650
    PUSH EBX                            ; 004d7543 | DAT_01d2c900
    CALL FUN_0051bad0                   ; 004d7544
        ;   XREF to: 0051bad0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051bad0()
    ADD ESP,0x4                         ; 004d7549
    MOV EAX,dword ptr [ESP + 0x6fc]     ; 004d754c
    CMP dword ptr [EAX + 0x9f8],0x0     ; 004d7553
    JZ 0x004d757b                       ; 004d755a
        ;   XREF to: 004d757b (CONDITIONAL_JUMP)  ; LAB_004d757b
    PUSH 0x1                            ; 004d755c
    ADD EAX,0x9fc                       ; 004d755e
    PUSH EAX                            ; 004d7563
    MOV EDI,dword ptr [ESP + 0x704]     ; 004d7564
    PUSH EDI                            ; 004d756b
    MOV dword ptr [EAX + -0x4],0x0      ; 004d756c
    CALL FUN_004d6990                   ; 004d7573
        ;   XREF to: 004d6990 (UNCONDITIONAL_CALL)  ; undefined FUN_004d6990()
    ADD ESP,0xc                         ; 004d7578
    MOV EAX,dword ptr [ESP + 0x6e0]     ; 004d757b
        ;   Label: LAB_004d757b
    PUSH 0x0                            ; 004d7582
    MOV [0x01c3eb50],EAX                ; 004d7584 | DAT_01c3eb50
    LEA EAX,[ESP + 0x3c4]               ; 004d7589
        ;   Label: LAB_004d7589
    PUSH EAX                            ; 004d7590
    CALL FUN_004f4b30                   ; 004d7591
        ;   XREF to: 004f4b30 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4b30()
    ADD ESP,0x8                         ; 004d7596
    ADD ESP,0x6e8                       ; 004d7599
    POP EBP                             ; 004d759f
    POP EDI                             ; 004d75a0
    POP ESI                             ; 004d75a1
    POP EBX                             ; 004d75a2
    RET                                 ; 004d75a3
    PUSH EAX                            ; 004d75a4
        ;   Label: LAB_004d75a4
    CALL FUN_005c0d10                   ; 004d75a5
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    XOR EBP,EBP                         ; 004d75aa
    ADD ESP,0x4                         ; 004d75ac
    JMP 0x004d727e                      ; 004d75af
        ;   XREF to: 004d727e (UNCONDITIONAL_JUMP)  ; LAB_004d727e
    MOV EAX,ESP                         ; 004d75b4
        ;   Label: LAB_004d75b4
    PUSH EAX                            ; 004d75b6
    CALL FUN_0049a620                   ; 004d75b7
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a620()
    ADD ESP,0x4                         ; 004d75bc
    PUSH 0x5e3161                       ; 004d75bf | = "The Rustin Parr Investigation"
    CALL FUN_00531090                   ; 004d75c4
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d75c9
    PUSH EAX                            ; 004d75cc
    LEA EAX,[ESP + 0x4]                 ; 004d75cd
    PUSH EAX                            ; 004d75d1
    CALL FUN_004994d0                   ; 004d75d2
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004994d0()
    ADD ESP,0x8                         ; 004d75d7
    PUSH ESI                            ; 004d75da
    PUSH EDI                            ; 004d75db
    PUSH 0x5e317f                       ; 004d75dc | = "Choose a story to play"
    CALL FUN_00531090                   ; 004d75e1
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d75e6
    PUSH EAX                            ; 004d75e9
    LEA EAX,[ESP + 0xc]                 ; 004d75ea
    PUSH EAX                            ; 004d75ee
    CALL FUN_0049a8b0                   ; 004d75ef
        ;   XREF to: 0049a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a8b0()
    ADD ESP,0x10                        ; 004d75f4
    MOV EBX,EAX                         ; 004d75f7
    MOV dword ptr [ESP + 0x6e4],EAX     ; 004d75f9
    TEST EAX,EAX                        ; 004d7600
    JL 0x004d76b9                       ; 004d7602
        ;   XREF to: 004d76b9 (CONDITIONAL_JUMP)  ; LAB_004d76b9
    MOV EAX,ESP                         ; 004d7608
    PUSH EAX                            ; 004d760a
    CALL FUN_0049c370                   ; 004d760b
        ;   XREF to: 0049c370 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c370()
    ADD ESP,0x4                         ; 004d7610
    TEST EBX,EBX                        ; 004d7613
    JNZ 0x004d76a6                      ; 004d7615
        ;   XREF to: 004d76a6 (CONDITIONAL_JUMP)  ; LAB_004d76a6
    PUSH 0x5e3196                       ; 004d761b | = "Normal Puzzles, Normal Combat"
    CALL FUN_00531090                   ; 004d7620
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d7625
    PUSH EAX                            ; 004d7628
    LEA EAX,[ESP + 0x4]                 ; 004d7629
    PUSH EAX                            ; 004d762d
    CALL FUN_004994d0                   ; 004d762e
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004994d0()
    ADD ESP,0x8                         ; 004d7633
    PUSH 0x5e31b4                       ; 004d7636 | = "Normal Puzzles, Hard Combat"
    CALL FUN_00531090                   ; 004d763b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d7640
    PUSH EAX                            ; 004d7643
    LEA EAX,[ESP + 0x4]                 ; 004d7644
    PUSH EAX                            ; 004d7648
    CALL FUN_004994d0                   ; 004d7649
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004994d0()
    ADD ESP,0x8                         ; 004d764e
    PUSH 0x5e31d0                       ; 004d7651 | = "Hard Puzzles, Normal Combat"
    CALL FUN_00531090                   ; 004d7656
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d765b
    PUSH EAX                            ; 004d765e
    LEA EAX,[ESP + 0x4]                 ; 004d765f
    PUSH EAX                            ; 004d7663
    CALL FUN_004994d0                   ; 004d7664
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004994d0()
    ADD ESP,0x8                         ; 004d7669
    PUSH 0x5e31ec                       ; 004d766c | = "Hard Puzzles, Hard Combat"
    CALL FUN_00531090                   ; 004d7671
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d7676
    PUSH EAX                            ; 004d7679
    LEA EAX,[ESP + 0x4]                 ; 004d767a
    PUSH EAX                            ; 004d767e
    CALL FUN_004994d0                   ; 004d767f
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004994d0()
    ADD ESP,0x8                         ; 004d7684
    PUSH ESI                            ; 004d7687
    PUSH EDI                            ; 004d7688
    PUSH 0x5e3206                       ; 004d7689 | = "'The Rustin Parr Investigation'"
    CALL FUN_00531090                   ; 004d768e
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d7693
    PUSH EAX                            ; 004d7696
    LEA EAX,[ESP + 0xc]                 ; 004d7697
    PUSH EAX                            ; 004d769b
    CALL FUN_0049a8b0                   ; 004d769c
        ;   XREF to: 0049a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a8b0()
    ADD ESP,0x10                        ; 004d76a1
    MOV EBP,EAX                         ; 004d76a4
    PUSH ESI                            ; 004d76a6
        ;   Label: LAB_004d76a6
    LEA EAX,[ESP + 0x4]                 ; 004d76a7
    PUSH EAX                            ; 004d76ab
    CALL FUN_0049a710                   ; 004d76ac
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a710()
    ADD ESP,0x8                         ; 004d76b1
    JMP 0x004d7371                      ; 004d76b4
        ;   XREF to: 004d7371 (UNCONDITIONAL_JUMP)  ; LAB_004d7371
    MOV EAX,dword ptr [ESP + 0x6e0]     ; 004d76b9
        ;   Label: LAB_004d76b9
    PUSH 0x0                            ; 004d76c0
    MOV [0x01c3eb50],EAX                ; 004d76c2 | DAT_01c3eb50
    LEA EAX,[ESP + 0x4]                 ; 004d76c7
    PUSH EAX                            ; 004d76cb
    CALL FUN_0049a710                   ; 004d76cc
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a710()
    ADD ESP,0x8                         ; 004d76d1
    PUSH 0x0                            ; 004d76d4
    JMP 0x004d7589                      ; 004d76d6
        ;   XREF to: 004d7589 (UNCONDITIONAL_JUMP)  ; LAB_004d7589
    PUSH 0x0                            ; 004d76db
        ;   Label: LAB_004d76db
    LEA EAX,[ESP + 0x5c8]               ; 004d76dd
    PUSH EAX                            ; 004d76e4
    PUSH 0x5e322f                       ; 004d76e5 | = "*.msn"
    PUSH 0x5e3235                       ; 004d76ea | = "world"
    PUSH 0x5e323b                       ; 004d76ef | = "Select mission to play"
    MOV EDI,dword ptr [0x0061abc0]      ; 004d76f4 | DAT_0061abc0
    PUSH EDI                            ; 004d76fa
    CALL FUN_00494fd0                   ; 004d76fb
        ;   XREF to: 00494fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00494fd0()
    ADD ESP,0x18                        ; 004d7700
    TEST EAX,EAX                        ; 004d7703
    JZ 0x004d757b                       ; 004d7705
        ;   XREF to: 004d757b (CONDITIONAL_JUMP)  ; LAB_004d757b
    XOR AH,AH                           ; 004d770b
    XOR EBP,ESI                         ; 004d770d
    MOV byte ptr [0x01cd09e8],AH        ; 004d770f | DAT_01cd09e8
    XOR EAX,EAX                         ; 004d7715
    MOV dword ptr [0x01cd0ae8],EBP      ; 004d7717 | DAT_01cd0ae8
    MOV [0x01cd0aec],EAX                ; 004d771d | DAT_01cd0aec
    JMP 0x004d7483                      ; 004d7722
        ;   XREF to: 004d7483 (UNCONDITIONAL_JUMP)  ; LAB_004d7483

