; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005464a0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x1d0]:8  local_1d0
; undefined8       Stack[-0x1c8]:8  local_1c8
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0x8c]:1  local_8c
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 s_m-gun1.wav_@_2.3_*_%f_005968cf+2
;   string s_m-gun-t.wav_005968e7
;   undefined4 DAT_005968f5
;   undefined4 DAT_005968f9
;   undefined4 DAT_005b9284
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   FUN_0040dda0
;   FUN_004940d0
;   FUN_00525b70
;   FUN_005262d0
;   FUN_00526340
;   FUN_005263c0
;   FUN_00526cd0
;   FUN_00526d10
;   FUN_00527130
;   FUN_00527230
;   FUN_00528800
;   FUN_00528890
;   FUN_00554030
;   FUN_00563a30
;   FUN_00563c90
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005464a0
        ;   Label: FUN_005464a0
    PUSH ESI                            ; 005464a1
    PUSH EDI                            ; 005464a2
    PUSH EBP                            ; 005464a3
    MOV EBP,ESP                         ; 005464a4
    SUB ESP,0x1b4                       ; 005464a6
    AND ESP,0xfffffff8                  ; 005464ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 005464af
    PUSH dword ptr [EBP + 0x18]         ; 005464b2
    PUSH EBX                            ; 005464b5
    CALL FUN_00554030                   ; 005464b6
        ;   XREF to: 00554030 (UNCONDITIONAL_CALL)  ; undefined FUN_00554030()
    MOV EDX,dword ptr [EBX + 0x570]     ; 005464bb
    ADD ESP,0x8                         ; 005464c1
    TEST EDX,EDX                        ; 005464c4
    JLE 0x005465a6                      ; 005464c6
        ;   XREF to: 005465a6 (CONDITIONAL_JUMP)  ; LAB_005465a6
    PUSH 0x3f8e38e4                     ; 005464cc
    LEA ESI,[EDX + -0x1]                ; 005464d1
    PUSH 0x3f666666                     ; 005464d4
    MOV dword ptr [EBX + 0x570],ESI     ; 005464d9
    CALL FUN_0040dda0                   ; 005464df
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005464e4
    FLD float ptr [ESP + 0x1b8]         ; 005464eb
    ADD ESP,0x8                         ; 005464f2
    MOV EDI,dword ptr [EBX + 0x574]     ; 005464f5
    FSTP float ptr [ESP + 0x8]          ; 005464fb
    PUSH dword ptr [ESP + 0x8]          ; 005464ff
    PUSH EDI                            ; 00546503
    CALL FUN_00527130                   ; 00546504
        ;   XREF to: 00527130 (UNCONDITIONAL_CALL)  ; undefined FUN_00527130()
    ADD ESP,0x8                         ; 00546509
    TEST EAX,EAX                        ; 0054650c
    JNZ 0x00546568                      ; 0054650e
        ;   XREF to: 00546568 (CONDITIONAL_JUMP)  ; LAB_00546568
    MOV EAX,dword ptr [EBX + 0x574]     ; 00546510
    PUSH EAX                            ; 00546516
    CALL FUN_00527230                   ; 00546517
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 0054651c
    FLD float ptr [ESP + 0x8]           ; 0054651f
    SUB ESP,0x8                         ; 00546523
    FSTP double ptr [ESP]               ; 00546526
    PUSH 0x5968d1                       ; 00546529 | s_m-gun1.wav_@_2.3_*_%f_005968cf+2
    LEA EAX,[ESP + 0x148]               ; 0054652e
    PUSH EAX                            ; 00546535
    CALL FUN_00563c90                   ; 00546536
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x10                        ; 0054653b
    MOV EDX,dword ptr [EBX + 0x578]     ; 0054653e
    PUSH EDX                            ; 00546544
    CALL FUN_00527230                   ; 00546545
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 0054654a
    LEA EDX,[ESP + 0x13c]               ; 0054654d
    PUSH EDX                            ; 00546554
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00546555
    PUSH EBX                            ; 0054655b
    CALL dword ptr [EAX + 0x28]         ; 0054655c
    ADD ESP,0x8                         ; 0054655f
    MOV dword ptr [EBX + 0x574],EAX     ; 00546562
    PUSH EBX                            ; 00546568
        ;   Label: LAB_00546568
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00546569
    CALL dword ptr [EAX + 0x8c]         ; 0054656f
    MOV EBX,dword ptr [0x01cae0e8]      ; 00546575 | DAT_01cae0e8
    MOV ECX,dword ptr [EBX*0x4 + 0x1cae0d8] ; 0054657b
    ADD ESP,0x4                         ; 00546582
    CMP EAX,ECX                         ; 00546585
    JZ 0x00546590                       ; 00546587
        ;   XREF to: 00546590 (CONDITIONAL_JUMP)  ; LAB_00546590
    MOV ESP,EBP                         ; 00546589
        ;   Label: LAB_00546589
    POP EBP                             ; 0054658b
    POP EDI                             ; 0054658c
    POP ESI                             ; 0054658d
    POP EBX                             ; 0054658e
    RET                                 ; 0054658f
    MOV EBX,dword ptr [0x005b9284]      ; 00546590 | DAT_005b9284
        ;   Label: LAB_00546590
    PUSH EBX                            ; 00546596
    CALL FUN_004940d0                   ; 00546597
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 0054659c
    MOV ESP,EBP                         ; 0054659f
    POP EBP                             ; 005465a1
    POP EDI                             ; 005465a2
    POP ESI                             ; 005465a3
    POP EBX                             ; 005465a4
    RET                                 ; 005465a5
    PUSH 0x2                            ; 005465a6
        ;   Label: LAB_005465a6
    MOV ECX,dword ptr [EBX + 0x574]     ; 005465a8
    PUSH ECX                            ; 005465ae
    CALL FUN_00526d10                   ; 005465af
        ;   XREF to: 00526d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00526d10()
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005465b4
    MOV dword ptr [ESP + 0x1b4],EDX     ; 005465bb
    FLD double ptr [ESP + 0x1b0]        ; 005465c2
    ADD ESP,0x8                         ; 005465c9
    FST float ptr [ESP + 0x10]          ; 005465cc
    FLDZ                                ; 005465d0
    FCOMPP                              ; 005465d2
    FNSTSW AX                           ; 005465d4
    SAHF                                ; 005465d6
    JA 0x00546724                       ; 005465d7
        ;   XREF to: 00546724 (CONDITIONAL_JUMP)  ; LAB_00546724
    CALL FUN_00528800                   ; 005465dd
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; undefined FUN_00528800()
    FLD float ptr [ESP + 0x10]          ; 005465e2
    FMUL float ptr [0x005968f5]         ; 005465e6 | DAT_005968f5
    FST float ptr [ESP + 0x10]          ; 005465ec
    FSTP double ptr [ESP + 0x1a8]       ; 005465f0
    MOV EDI,dword ptr [ESP + 0x1ac]     ; 005465f7
    PUSH EDI                            ; 005465fe
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 005465ff
    PUSH EAX                            ; 00546606
    CALL FUN_005648c0                   ; 00546607
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0054660c
    MOV dword ptr [ESP + 0x1ac],EDX     ; 00546613
    FLD double ptr [ESP + 0x1a8]        ; 0054661a
    ADD ESP,0x8                         ; 00546621
    LEA EAX,[ESP + 0x14]                ; 00546624
    FSUBR double ptr [ESP + 0x1a8]      ; 00546628
    PUSH EAX                            ; 0054662f
    FSTP float ptr [ESP + 0x14]         ; 00546630
    CALL FUN_00525b70                   ; 00546634
        ;   XREF to: 00525b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00525b70()
    ADD ESP,0x4                         ; 00546639
    LEA EAX,[ESP + 0x14]                ; 0054663c
    PUSH EAX                            ; 00546640
    MOV EDX,dword ptr [EBX + 0x574]     ; 00546641
    PUSH EDX                            ; 00546647
    CALL FUN_00526cd0                   ; 00546648
        ;   XREF to: 00526cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00526cd0()
    ADD ESP,0x8                         ; 0054664d
    TEST EAX,EAX                        ; 00546650
    JZ 0x005466d5                       ; 00546652
        ;   XREF to: 005466d5 (CONDITIONAL_JUMP)  ; LAB_005466d5
    MOV EAX,dword ptr [ESP + 0x124]     ; 00546658
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0054665f
    FILD dword ptr [ESP + 0x1b0]        ; 00546666
    FMUL float ptr [ESP + 0x10]         ; 0054666d
    FMUL float ptr [0x005968f9]         ; 00546671 | DAT_005968f9
    CALL FUN_00563a30                   ; 00546677
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0xc]         ; 0054667c
    CALL FUN_00526340                   ; 00546680
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
    MOV EAX,dword ptr [ESP + 0xc]       ; 00546685
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00546689
    FLDZ                                ; 00546690
    FILD dword ptr [ESP + 0x1b0]        ; 00546692
    FSTP double ptr [ESP]               ; 00546699
    FCOMP double ptr [ESP]              ; 0054669c
    FNSTSW AX                           ; 0054669f
    SAHF                                ; 005466a1
    JNC 0x005466b8                      ; 005466a2
        ;   XREF to: 005466b8 (CONDITIONAL_JUMP)  ; LAB_005466b8
    PUSH 0x0                            ; 005466a4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005466a6
    PUSH ECX                            ; 005466aa
    MOV ESI,dword ptr [ESP + 0x8]       ; 005466ab
    PUSH ESI                            ; 005466af
    CALL FUN_005262d0                   ; 005466b0
        ;   XREF to: 005262d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005262d0()
    ADD ESP,0xc                         ; 005466b5
    PUSH 0x5968e7                       ; 005466b8 | = "m-gun-t.wav"
        ;   Label: LAB_005466b8
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005466bd
    PUSH EBX                            ; 005466c3
    CALL dword ptr [EAX + 0x24]         ; 005466c4
    ADD ESP,0x8                         ; 005466c7
    MOV dword ptr [EBX + 0x578],EAX     ; 005466ca
    CALL FUN_005263c0                   ; 005466d0
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    MOV EDI,dword ptr [EBX + 0x574]     ; 005466d5
        ;   Label: LAB_005466d5
    PUSH EDI                            ; 005466db
    CALL FUN_00527230                   ; 005466dc
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 005466e1
    CALL FUN_00528890                   ; 005466e4
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined FUN_00528890()
    PUSH EBX                            ; 005466e9
        ;   Label: LAB_005466e9
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005466ea
    CALL dword ptr [EAX + 0x8c]         ; 005466f0
    MOV EDX,dword ptr [0x01cae0e8]      ; 005466f6 | DAT_01cae0e8
    MOV ECX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 005466fc
    ADD ESP,0x4                         ; 00546703
    CMP EAX,ECX                         ; 00546706
    JNZ 0x00546589                      ; 00546708
        ;   XREF to: 00546589 (CONDITIONAL_JUMP)  ; LAB_00546589
    MOV EBX,dword ptr [0x005b9284]      ; 0054670e | DAT_005b9284
    PUSH EBX                            ; 00546714
    CALL FUN_004940d0                   ; 00546715
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 0054671a
    MOV ESP,EBP                         ; 0054671d
    POP EBP                             ; 0054671f
    POP EDI                             ; 00546720
    POP ESI                             ; 00546721
    POP EBX                             ; 00546722
    RET                                 ; 00546723
    MOV ESI,dword ptr [EBX + 0x574]     ; 00546724
        ;   Label: LAB_00546724
    PUSH ESI                            ; 0054672a
    CALL FUN_00527230                   ; 0054672b
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 00546730
    JMP 0x005466e9                      ; 00546733
        ;   XREF to: 005466e9 (UNCONDITIONAL_JUMP)  ; LAB_005466e9

