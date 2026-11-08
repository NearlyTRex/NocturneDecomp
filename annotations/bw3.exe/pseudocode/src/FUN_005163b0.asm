; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005163b0(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0043a840 at 0043a86f
;
; Referenced Globals:
;   undefined4 DAT_00603974
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b01c
;   undefined4 DAT_0060b020
;   undefined4 DAT_0060b024
;   undefined4 DAT_0060b028
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b040
;   undefined4 DAT_007303f4
;   undefined4 DAT_007303fc
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b0
;   undefined4 DAT_01c6e2b4
;   ... and 6 more
;
; Called Functions:
;   FUN_005158e0
;   FUN_00515ac0
;   FUN_00563257
;   FUN_00565c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005163b0
        ;   Label: FUN_005163b0
    PUSH ESI                            ; 005163b1
    PUSH EDI                            ; 005163b2
    PUSH EBP                            ; 005163b3
    SUB ESP,0x54                        ; 005163b4
    CMP dword ptr [0x007303fc],0x0      ; 005163b7 | DAT_007303fc
    JZ 0x0051641d                       ; 005163be
        ;   XREF to: 0051641d (CONDITIONAL_JUMP)  ; LAB_0051641d
    MOV ECX,dword ptr [ESP + 0x6c]      ; 005163c0
    CMP ECX,0x3                         ; 005163c4
    JLE 0x0051649c                      ; 005163c7
        ;   XREF to: 0051649c (CONDITIONAL_JUMP)  ; LAB_0051649c
    MOV EBX,dword ptr [ESP + 0x68]      ; 005163cd
    LEA EBP,[ECX + -0x2]                ; 005163d1
    XOR ESI,ESI                         ; 005163d4
    XOR EDI,EDI                         ; 005163d6
    TEST EBP,EBP                        ; 005163d8
    JLE 0x00516415                      ; 005163da
        ;   XREF to: 00516415 (CONDITIONAL_JUMP)  ; LAB_00516415
    IMUL EAX,dword ptr [EBX + 0x8],0x30 ; 005163dc
        ;   Label: LAB_005163dc
    ADD EAX,0x60b014                    ; 005163e0 | DAT_0060b014
    MOV ECX,dword ptr [EBX + 0x4]       ; 005163e5
    PUSH EAX                            ; 005163e8
    IMUL EAX,ECX,0x30                   ; 005163e9
    ADD EAX,0x60b014                    ; 005163ec | DAT_0060b014
    MOV EDX,dword ptr [EBX]             ; 005163f1
    PUSH EAX                            ; 005163f3
    IMUL EAX,EDX,0x30                   ; 005163f4
    ADD EAX,0x60b014                    ; 005163f7 | DAT_0060b014
    PUSH EAX                            ; 005163fc
    CALL FUN_00515ac0                   ; 005163fd
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00515ac0()
    ADD ESP,0xc                         ; 00516402
    TEST EAX,EAX                        ; 00516405
    JZ 0x00516496                       ; 00516407
        ;   XREF to: 00516496 (CONDITIONAL_JUMP)  ; LAB_00516496
    INC ESI                             ; 0051640d
        ;   Label: LAB_0051640d
    ADD EBX,0x4                         ; 0051640e
    CMP ESI,EBP                         ; 00516411
    JL 0x005163dc                       ; 00516413
        ;   XREF to: 005163dc (CONDITIONAL_JUMP)  ; LAB_005163dc
    CMP EDI,EBP                         ; 00516415
        ;   Label: LAB_00516415
    JZ 0x0051648e                       ; 00516417
        ;   XREF to: 0051648e (CONDITIONAL_JUMP)  ; LAB_0051648e
    CMP dword ptr [0x01c6cee8],0x0      ; 0051641d | DAT_01c6cee8
        ;   Label: LAB_0051641d
    JZ 0x005164fe                       ; 00516424
        ;   XREF to: 005164fe (CONDITIONAL_JUMP)  ; LAB_005164fe
    CMP dword ptr [0x007303f4],0x0      ; 0051642a | DAT_007303f4
    JNZ 0x005164fe                      ; 00516431
        ;   XREF to: 005164fe (CONDITIONAL_JUMP)  ; LAB_005164fe
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00516437
    XOR EAX,EAX                         ; 0051643b
    TEST EBX,EBX                        ; 0051643d
    JLE 0x00516460                      ; 0051643f
        ;   XREF to: 00516460 (CONDITIONAL_JUMP)  ; LAB_00516460
    MOV ECX,dword ptr [ESP + 0x68]      ; 00516441
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00516445
    IMUL EDX,dword ptr [ECX],0x30       ; 00516449
        ;   Label: LAB_00516449
    INC EAX                             ; 0051644c
    ADD EDX,0x60b014                    ; 0051644d | DAT_0060b014
    ADD ECX,0x4                         ; 00516453
    MOV dword ptr [ESP + EAX*0x4 + -0x4],EDX ; 00516456
    CMP EAX,ESI                         ; 0051645a
    JL 0x00516449                       ; 0051645c
        ;   XREF to: 00516449 (CONDITIONAL_JUMP)  ; LAB_00516449
    MOV EAX,EAX                         ; 0051645e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00516460
        ;   Label: LAB_00516460
    MOV EDI,dword ptr [0x01ed3198]      ; 00516464 | DAT_01ed3198
    MOV EBP,dword ptr [0x01c6e2b4]      ; 0051646a | DAT_01c6e2b4
    SUB EAX,0x2                         ; 00516470
    PUSH EBP                            ; 00516473
    ADD EDI,EAX                         ; 00516474
    MOV EAX,dword ptr [ESP + 0x70]      ; 00516476
    PUSH EAX                            ; 0051647a
    LEA EAX,[ESP + 0x8]                 ; 0051647b
    PUSH EAX                            ; 0051647f
    MOV dword ptr [0x01ed3198],EDI      ; 00516480 | DAT_01ed3198
    CALL FUN_00565c40                   ; 00516486
        ;   XREF to: 00565c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00565c40()
    ADD ESP,0xc                         ; 0051648b
    ADD ESP,0x54                        ; 0051648e
        ;   Label: LAB_0051648e
    POP EBP                             ; 00516491
    POP EDI                             ; 00516492
    POP ESI                             ; 00516493
    POP EBX                             ; 00516494
    RET                                 ; 00516495
    INC EDI                             ; 00516496
        ;   Label: LAB_00516496
    JMP 0x0051640d                      ; 00516497
        ;   XREF to: 0051640d (UNCONDITIONAL_JUMP)  ; LAB_0051640d
    MOV EDX,dword ptr [ESP + 0x68]      ; 0051649c
        ;   Label: LAB_0051649c
    MOV EDX,dword ptr [EDX + 0x8]       ; 005164a0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005164a3
    SUB EAX,EDX                         ; 005164aa
    SHL EAX,0x4                         ; 005164ac
    MOV EDX,dword ptr [ESP + 0x68]      ; 005164af
    ADD EAX,0x60b014                    ; 005164b3 | DAT_0060b014
    MOV EDX,dword ptr [EDX + 0x4]       ; 005164b8
    PUSH EAX                            ; 005164bb
    LEA EAX,[EDX*0x4 + 0x0]             ; 005164bc
    SUB EAX,EDX                         ; 005164c3
    SHL EAX,0x4                         ; 005164c5
    MOV EDX,dword ptr [ESP + 0x6c]      ; 005164c8
    ADD EAX,0x60b014                    ; 005164cc | DAT_0060b014
    MOV EDX,dword ptr [EDX]             ; 005164d1
    PUSH EAX                            ; 005164d3
    LEA EAX,[EDX*0x4 + 0x0]             ; 005164d4
    SUB EAX,EDX                         ; 005164db
    SHL EAX,0x4                         ; 005164dd
    ADD EAX,0x60b014                    ; 005164e0 | DAT_0060b014
    PUSH EAX                            ; 005164e5
    CALL FUN_00515ac0                   ; 005164e6
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00515ac0()
    ADD ESP,0xc                         ; 005164eb
    TEST EAX,EAX                        ; 005164ee
    JNZ 0x0051641d                      ; 005164f0
        ;   XREF to: 0051641d (CONDITIONAL_JUMP)  ; LAB_0051641d
    ADD ESP,0x54                        ; 005164f6
    POP EBP                             ; 005164f9
    POP EDI                             ; 005164fa
    POP ESI                             ; 005164fb
    POP EBX                             ; 005164fc
    RET                                 ; 005164fd
    MOV ESI,0x4b0                       ; 005164fe
        ;   Label: LAB_005164fe
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00516503
    XOR EDI,EDI                         ; 00516507
    MOV EDX,dword ptr [0x01ed3198]      ; 00516509 | DAT_01ed3198
    MOV dword ptr [0x01ed3190],EDI      ; 0051650f | DAT_01ed3190
    MOV dword ptr [0x01ed2c88],EDI      ; 00516515 | DAT_01ed2c88
    MOV dword ptr [ESP + 0x48],EDI      ; 0051651b
    INC EDX                             ; 0051651f
    MOV dword ptr [0x01ed318c],ESI      ; 00516520 | DAT_01ed318c
    MOV dword ptr [0x01ed3198],EDX      ; 00516526 | DAT_01ed3198
    TEST ECX,ECX                        ; 0051652c
    JLE 0x00516599                      ; 0051652e
        ;   XREF to: 00516599 (CONDITIONAL_JUMP)  ; LAB_00516599
    MOV EAX,dword ptr [ESP + 0x68]      ; 00516530
    MOV dword ptr [ESP + 0x44],EAX      ; 00516534
    MOV EAX,dword ptr [ESP + 0x48]      ; 00516538
        ;   Label: LAB_00516538
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0051653c
    INC EAX                             ; 00516540
    CMP EAX,EBX                         ; 00516541
    JL 0x00516547                       ; 00516543
        ;   XREF to: 00516547 (CONDITIONAL_JUMP)  ; LAB_00516547
    XOR EAX,EAX                         ; 00516545
    MOV EDX,dword ptr [ESP + 0x44]      ; 00516547
        ;   Label: LAB_00516547
    IMUL EBP,dword ptr [EDX],0x30       ; 0051654b
    MOV ESI,dword ptr [ESP + 0x68]      ; 0051654e
    SHL EAX,0x2                         ; 00516552
    ADD EAX,ESI                         ; 00516555
    IMUL EAX,dword ptr [EAX],0x30       ; 00516557
    ADD EBP,0x60b014                    ; 0051655a | DAT_0060b014
    ADD EAX,0x60b014                    ; 00516560 | DAT_0060b014
    MOV EBX,EBP                         ; 00516565
    MOV ECX,dword ptr [EBP + 0x14]      ; 00516567 | DAT_0060b028
    MOV ESI,dword ptr [EAX + 0x14]      ; 0051656a | DAT_0060b028
    SAR ECX,0x10                        ; 0051656d
    SAR ESI,0x10                        ; 00516570
    MOV EDI,EAX                         ; 00516573
    CMP ECX,ESI                         ; 00516575
    JNZ 0x005166c8                      ; 00516577
        ;   XREF to: 005166c8 (CONDITIONAL_JUMP)  ; LAB_005166c8
    MOV ESI,dword ptr [ESP + 0x44]      ; 0051657d
        ;   Label: LAB_0051657d
    MOV EDI,dword ptr [ESP + 0x48]      ; 00516581
    MOV EBP,dword ptr [ESP + 0x6c]      ; 00516585
    ADD ESI,0x4                         ; 00516589
    INC EDI                             ; 0051658c
    MOV dword ptr [ESP + 0x44],ESI      ; 0051658d
    MOV dword ptr [ESP + 0x48],EDI      ; 00516591
    CMP EDI,EBP                         ; 00516595
    JL 0x00516538                       ; 00516597
        ;   XREF to: 00516538 (CONDITIONAL_JUMP)  ; LAB_00516538
    PUSH 0x0                            ; 00516599
        ;   Label: LAB_00516599
    MOV EAX,[0x01ed318c]                ; 0051659b | DAT_01ed318c
    PUSH EAX                            ; 005165a0
    CALL FUN_005158e0                   ; 005165a1
        ;   XREF to: 005158e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005158e0()
    ADD ESP,0x8                         ; 005165a6
    MOV EBP,EAX                         ; 005165a9
    TEST EAX,EAX                        ; 005165ab
    JZ 0x0051648e                       ; 005165ad
        ;   XREF to: 0051648e (CONDITIONAL_JUMP)  ; LAB_0051648e
    PUSH EAX                            ; 005165b3
    MOV EDX,dword ptr [0x01ed318c]      ; 005165b4 | DAT_01ed318c
    PUSH EDX                            ; 005165ba
    CALL FUN_005158e0                   ; 005165bb
        ;   XREF to: 005158e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005158e0()
    ADD ESP,0x8                         ; 005165c0
    MOV dword ptr [ESP + 0x50],EAX      ; 005165c3
    TEST EAX,EAX                        ; 005165c7
    JZ 0x0051648e                       ; 005165c9
        ;   XREF to: 0051648e (CONDITIONAL_JUMP)  ; LAB_0051648e
    MOV EAX,[0x01ed318c]                ; 005165cf | DAT_01ed318c
    MOV ECX,dword ptr [0x00603974]      ; 005165d4 | DAT_00603974
    MOV dword ptr [ESP + 0x4c],EAX      ; 005165da
    CMP EAX,ECX                         ; 005165de
    JGE 0x0051648e                      ; 005165e0
        ;   XREF to: 0051648e (CONDITIONAL_JUMP)  ; LAB_0051648e
        ;   Label: LAB_005165e0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005165e6
    CMP EAX,dword ptr [EBP + 0x4]       ; 005165ea
    JGE 0x005168af                      ; 005165ed
        ;   XREF to: 005168af (CONDITIONAL_JUMP)  ; LAB_005168af
    MOV EDX,dword ptr [ESP + 0x50]      ; 005165f3
        ;   Label: LAB_005165f3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005165f7
    CMP EAX,dword ptr [EDX + 0x4]       ; 005165fb
    JL 0x0051661c                       ; 005165fe
        ;   XREF to: 0051661c (CONDITIONAL_JUMP)  ; LAB_0051661c
    PUSH EBP                            ; 00516600
    PUSH EAX                            ; 00516601
    MOV dword ptr [EDX],0xffffffff      ; 00516602
    CALL FUN_005158e0                   ; 00516608
        ;   XREF to: 005158e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005158e0()
    ADD ESP,0x8                         ; 0051660d
    MOV dword ptr [ESP + 0x50],EAX      ; 00516610
    TEST EAX,EAX                        ; 00516614
    JZ 0x0051648e                       ; 00516616
        ;   XREF to: 0051648e (CONDITIONAL_JUMP)  ; LAB_0051648e
    MOV EDI,dword ptr [ESP + 0x50]      ; 0051661c
        ;   Label: LAB_0051661c
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00516620
    MOV ESI,EBP                         ; 00516624
    CALL FUN_00563257                   ; 00516626
        ;   XREF to: 00563257 (UNCONDITIONAL_CALL)  ; undefined FUN_00563257()
    MOV EAX,dword ptr [EBP + 0xc]       ; 0051662b
    ADD dword ptr [EBP + 0x8],EAX       ; 0051662e
    MOV EBX,dword ptr [EBP + 0x18]      ; 00516631
    MOV ESI,dword ptr [EBP + 0x20]      ; 00516634
    MOV EDI,dword ptr [EBP + 0x10]      ; 00516637
    MOV EDX,dword ptr [EBP + 0x28]      ; 0051663a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051663d
    MOV ECX,dword ptr [EBP + 0x30]      ; 00516640
    ADD EBX,EAX                         ; 00516643
    MOV EAX,dword ptr [EBP + 0x24]      ; 00516645
    MOV dword ptr [EBP + 0x18],EBX      ; 00516648
    ADD ESI,EAX                         ; 0051664b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051664d
    MOV dword ptr [EBP + 0x20],ESI      ; 00516650
    ADD EDI,EAX                         ; 00516653
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00516655
    MOV dword ptr [EBP + 0x10],EDI      ; 00516658
    ADD EDX,EAX                         ; 0051665b
    MOV EAX,dword ptr [EBP + 0x34]      ; 0051665d
    MOV dword ptr [EBP + 0x28],EDX      ; 00516660
    ADD ECX,EAX                         ; 00516663
    MOV EAX,dword ptr [ESP + 0x50]      ; 00516665
    MOV dword ptr [EBP + 0x30],ECX      ; 00516669
    MOV EDX,dword ptr [ESP + 0x50]      ; 0051666c
    MOV EAX,dword ptr [EAX + 0xc]       ; 00516670
    MOV EBX,dword ptr [EDX + 0x8]       ; 00516673
    MOV ESI,dword ptr [EDX + 0x18]      ; 00516676
    ADD EBX,EAX                         ; 00516679
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0051667b
    MOV dword ptr [EDX + 0x8],EBX       ; 0051667e
    ADD ESI,EAX                         ; 00516681
    MOV dword ptr [EDX + 0x18],ESI      ; 00516683
    MOV EDI,dword ptr [EDX + 0x20]      ; 00516686
    MOV ECX,dword ptr [EDX + 0x10]      ; 00516689
    MOV EBX,dword ptr [EDX + 0x28]      ; 0051668c
    MOV EAX,dword ptr [EDX + 0x24]      ; 0051668f
    MOV ESI,dword ptr [EDX + 0x30]      ; 00516692
    ADD EDI,EAX                         ; 00516695
    MOV EAX,dword ptr [EDX + 0x14]      ; 00516697
    MOV dword ptr [EDX + 0x20],EDI      ; 0051669a
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0051669d
    ADD ECX,EAX                         ; 005166a1
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005166a3
    MOV dword ptr [EDX + 0x10],ECX      ; 005166a6
    ADD EBX,EAX                         ; 005166a9
    MOV EAX,dword ptr [EDX + 0x34]      ; 005166ab
    MOV dword ptr [EDX + 0x28],EBX      ; 005166ae
    ADD ESI,EAX                         ; 005166b1
    INC EDI                             ; 005166b3
    MOV dword ptr [EDX + 0x30],ESI      ; 005166b4
    MOV EDX,dword ptr [0x00603974]      ; 005166b7 | DAT_00603974
    MOV dword ptr [ESP + 0x4c],EDI      ; 005166bd
    CMP EDI,EDX                         ; 005166c1
    JMP 0x005165e0                      ; 005166c3
        ;   XREF to: 005165e0 (UNCONDITIONAL_JUMP)  ; LAB_005165e0
    MOV EDX,dword ptr [EBP + 0x14]      ; 005166c8 | DAT_0060b028
        ;   Label: LAB_005166c8
    CMP EDX,dword ptr [EAX + 0x14]      ; 005166cb | DAT_0060b028
    JLE 0x005166da                      ; 005166ce
        ;   XREF to: 005166da (CONDITIONAL_JUMP)  ; LAB_005166da
    MOV EBX,EAX                         ; 005166d0
    MOV EDI,EBP                         ; 005166d2
    MOV EAX,ECX                         ; 005166d4
    MOV ECX,ESI                         ; 005166d6
    MOV ESI,EAX                         ; 005166d8
    IMUL EBP,dword ptr [0x01ed2c88],0x50 ; 005166da | DAT_01ed2c88
        ;   Label: LAB_005166da
    ADD EBP,0x1ed2c8c                   ; 005166e1
    MOV dword ptr [EBP],ECX             ; 005166e7 | DAT_01ed2c8c
    MOV EDX,dword ptr [0x01ed318c]      ; 005166ea | DAT_01ed318c
    MOV dword ptr [EBP + 0x4],ESI       ; 005166f0
    CMP ECX,EDX                         ; 005166f3
    JGE 0x005166fd                      ; 005166f5
        ;   XREF to: 005166fd (CONDITIONAL_JUMP)  ; LAB_005166fd
    MOV dword ptr [0x01ed318c],ECX      ; 005166f7 | DAT_01ed318c
    CMP ESI,dword ptr [0x01ed3190]      ; 005166fd | DAT_01ed3190
        ;   Label: LAB_005166fd
    JLE 0x0051670b                      ; 00516703
        ;   XREF to: 0051670b (CONDITIONAL_JUMP)  ; LAB_0051670b
    MOV dword ptr [0x01ed3190],ESI      ; 00516705 | DAT_01ed3190
    MOV ESI,dword ptr [EBX + 0x14]      ; 0051670b | DAT_0060b028
        ;   Label: LAB_0051670b
    MOV ECX,dword ptr [EDI + 0x14]      ; 0051670e | DAT_0060b028
    SUB ECX,ESI                         ; 00516711
    CMP ECX,0x10000                     ; 00516713
    JNC 0x00516863                      ; 00516719
        ;   XREF to: 00516863 (CONDITIONAL_JUMP)  ; LAB_00516863
    XOR ECX,ECX                         ; 0051671f
    MOV EAX,dword ptr [EDI + 0x10]      ; 00516721 | DAT_0060b024
        ;   Label: LAB_00516721
    MOV EDX,dword ptr [EBX + 0x10]      ; 00516724 | DAT_0060b024
    MOV ESI,dword ptr [EBX + 0x14]      ; 00516727 | DAT_0060b028
    SUB EAX,EDX                         ; 0051672a
    AND ESI,0xffff                      ; 0051672c
    MOV EDX,EAX                         ; 00516732
    MOV EAX,ECX                         ; 00516734
    XOR SI,0xffff                       ; 00516736
    IMUL EDX                            ; 0051673a
    SHRD EAX,EDX,0x10                   ; 0051673c
    MOV EDX,EAX                         ; 00516740
    MOV dword ptr [EBP + 0xc],EAX       ; 00516742
    MOV EAX,ESI                         ; 00516745
    IMUL EDX                            ; 00516747
    SHRD EAX,EDX,0x10                   ; 00516749
    MOV dword ptr [ESP + 0x40],EAX      ; 0051674d
    MOV EDX,dword ptr [ESP + 0x40]      ; 00516751
    MOV EAX,dword ptr [EBX + 0x10]      ; 00516755 | DAT_0060b024
    ADD EAX,EDX                         ; 00516758
    MOV dword ptr [EBP + 0x8],EAX       ; 0051675a
    MOV EAX,dword ptr [EDI + 0x18]      ; 0051675d | DAT_0060b02c
    MOV EDX,dword ptr [EBX + 0x18]      ; 00516760 | DAT_0060b02c
    SUB EAX,EDX                         ; 00516763
    MOV EDX,EAX                         ; 00516765
    MOV EAX,ECX                         ; 00516767
    IMUL EDX                            ; 00516769
    SHRD EAX,EDX,0x10                   ; 0051676b
    MOV EDX,EAX                         ; 0051676f
    MOV dword ptr [EBP + 0x1c],EAX      ; 00516771
    MOV EAX,ESI                         ; 00516774
    IMUL EDX                            ; 00516776
    SHRD EAX,EDX,0x10                   ; 00516778
    MOV dword ptr [ESP + 0x40],EAX      ; 0051677c
    MOV EDX,dword ptr [ESP + 0x40]      ; 00516780
    MOV EAX,dword ptr [EBX + 0x18]      ; 00516784 | DAT_0060b02c
    ADD EAX,EDX                         ; 00516787
    MOV dword ptr [EBP + 0x18],EAX      ; 00516789
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0051678c | DAT_0060b030
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0051678f | DAT_0060b030
    SUB EAX,EDX                         ; 00516792
    MOV EDX,EAX                         ; 00516794
    MOV EAX,ECX                         ; 00516796
    IMUL EDX                            ; 00516798
    SHRD EAX,EDX,0x10                   ; 0051679a
    MOV EDX,EAX                         ; 0051679e
    MOV dword ptr [EBP + 0x24],EAX      ; 005167a0
    MOV EAX,ESI                         ; 005167a3
    IMUL EDX                            ; 005167a5
    SHRD EAX,EDX,0x10                   ; 005167a7
    MOV dword ptr [ESP + 0x40],EAX      ; 005167ab
    MOV EDX,dword ptr [ESP + 0x40]      ; 005167af
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005167b3 | DAT_0060b030
    ADD EAX,EDX                         ; 005167b6
    MOV dword ptr [EBP + 0x20],EAX      ; 005167b8
    MOV EAX,dword ptr [EDI + 0x20]      ; 005167bb | DAT_0060b034
    MOV EDX,dword ptr [EBX + 0x20]      ; 005167be | DAT_0060b034
    SUB EAX,EDX                         ; 005167c1
    MOV EDX,EAX                         ; 005167c3
    MOV EAX,ECX                         ; 005167c5
    IMUL EDX                            ; 005167c7
    SHRD EAX,EDX,0x10                   ; 005167c9
    MOV EDX,EAX                         ; 005167cd
    MOV dword ptr [EBP + 0x14],EAX      ; 005167cf
    MOV EAX,ESI                         ; 005167d2
    IMUL EDX                            ; 005167d4
    SHRD EAX,EDX,0x10                   ; 005167d6
    MOV dword ptr [ESP + 0x40],EAX      ; 005167da
    MOV EDX,dword ptr [ESP + 0x40]      ; 005167de
    MOV EAX,dword ptr [EBX + 0x20]      ; 005167e2 | DAT_0060b034
    ADD EAX,EDX                         ; 005167e5
    MOV dword ptr [EBP + 0x10],EAX      ; 005167e7
    MOV EAX,dword ptr [EDI + 0x2c]      ; 005167ea | DAT_0060b040
    MOV EDX,dword ptr [EBX + 0x2c]      ; 005167ed | DAT_0060b040
    SUB EAX,EDX                         ; 005167f0
    MOV EDX,EAX                         ; 005167f2
    MOV EAX,ECX                         ; 005167f4
    IMUL EDX                            ; 005167f6
    SHRD EAX,EDX,0x10                   ; 005167f8
    MOV EDX,EAX                         ; 005167fc
    MOV dword ptr [EBP + 0x34],EAX      ; 005167fe
    MOV EAX,ESI                         ; 00516801
    IMUL EDX                            ; 00516803
    SHRD EAX,EDX,0x10                   ; 00516805
    MOV dword ptr [ESP + 0x40],EAX      ; 00516809
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051680d
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00516811 | DAT_0060b040
    ADD EAX,EDX                         ; 00516814
    MOV dword ptr [EBP + 0x30],EAX      ; 00516816
    CMP dword ptr [0x01c6e2b8],0x1      ; 00516819 | DAT_01c6e2b8
    JNZ 0x0051687b                      ; 00516820
        ;   XREF to: 0051687b (CONDITIONAL_JUMP)  ; LAB_0051687b
    CMP dword ptr [0x01c6e2b0],0x0      ; 00516822 | DAT_01c6e2b0
    JZ 0x00516873                       ; 00516829
        ;   XREF to: 00516873 (CONDITIONAL_JUMP)  ; LAB_00516873
    MOV EAX,0x7fffffff                  ; 0051682b
    MOV EDX,dword ptr [EBX + 0x8]       ; 00516830 | DAT_0060b01c
    MOV EBX,EAX                         ; 00516833
    SUB EBX,EDX                         ; 00516835
    MOV EDX,EAX                         ; 00516837
    SUB EDX,dword ptr [EDI + 0x8]       ; 00516839 | DAT_0060b01c
    MOV EAX,ECX                         ; 0051683c
        ;   Label: LAB_0051683c
    SUB EDX,EBX                         ; 0051683e
    IMUL EDX                            ; 00516840
    SHRD EAX,EDX,0x10                   ; 00516842
    MOV EDX,EAX                         ; 00516846
    MOV dword ptr [EBP + 0x2c],EAX      ; 00516848
    MOV EAX,ESI                         ; 0051684b
    IMUL EDX                            ; 0051684d
    SHRD EAX,EDX,0x10                   ; 0051684f
    ADD EBX,EAX                         ; 00516853
    MOV dword ptr [EBP + 0x28],EBX      ; 00516855
    INC dword ptr [0x01ed2c88]          ; 00516858 | DAT_01ed2c88
    JMP 0x0051657d                      ; 0051685e
        ;   XREF to: 0051657d (UNCONDITIONAL_JUMP)  ; LAB_0051657d
    MOV EAX,0xffffffff                  ; 00516863
        ;   Label: LAB_00516863
    XOR EDX,EDX                         ; 00516868
    DIV ECX                             ; 0051686a
    MOV ECX,EAX                         ; 0051686c
    JMP 0x00516721                      ; 0051686e
        ;   XREF to: 00516721 (UNCONDITIONAL_JUMP)  ; LAB_00516721
    MOV EDX,dword ptr [EDI + 0xc]       ; 00516873 | DAT_0060b020
        ;   Label: LAB_00516873
    MOV EBX,dword ptr [EBX + 0xc]       ; 00516876 | DAT_0060b020
    JMP 0x0051683c                      ; 00516879
        ;   XREF to: 0051683c (UNCONDITIONAL_JUMP)  ; LAB_0051683c
    MOV EAX,dword ptr [EDI + 0x8]       ; 0051687b | DAT_0060b01c
        ;   Label: LAB_0051687b
    MOV EDX,dword ptr [EBX + 0x8]       ; 0051687e | DAT_0060b01c
    SUB EAX,EDX                         ; 00516881
    MOV EDX,EAX                         ; 00516883
    MOV EAX,ECX                         ; 00516885
    IMUL EDX                            ; 00516887
    SHRD EAX,EDX,0x10                   ; 00516889
    MOV EDX,EAX                         ; 0051688d
    MOV dword ptr [EBP + 0x2c],EAX      ; 0051688f
    MOV EAX,ESI                         ; 00516892
    IMUL EDX                            ; 00516894
    SHRD EAX,EDX,0x10                   ; 00516896
    MOV EDX,EAX                         ; 0051689a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0051689c | DAT_0060b01c
    ADD EAX,EDX                         ; 0051689f
    MOV dword ptr [EBP + 0x28],EAX      ; 005168a1
    INC dword ptr [0x01ed2c88]          ; 005168a4 | DAT_01ed2c88
    JMP 0x0051657d                      ; 005168aa
        ;   XREF to: 0051657d (UNCONDITIONAL_JUMP)  ; LAB_0051657d
    MOV EBX,dword ptr [ESP + 0x50]      ; 005168af
        ;   Label: LAB_005168af
    PUSH EBX                            ; 005168b3
    PUSH EAX                            ; 005168b4
    MOV dword ptr [EBP],0xffffffff      ; 005168b5
    CALL FUN_005158e0                   ; 005168bc
        ;   XREF to: 005158e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005158e0()
    ADD ESP,0x8                         ; 005168c1
    MOV EBP,EAX                         ; 005168c4
    TEST EAX,EAX                        ; 005168c6
    JZ 0x0051648e                       ; 005168c8
        ;   XREF to: 0051648e (CONDITIONAL_JUMP)  ; LAB_0051648e
    JMP 0x005165f3                      ; 005168ce
        ;   XREF to: 005165f3 (UNCONDITIONAL_JUMP)  ; LAB_005165f3

