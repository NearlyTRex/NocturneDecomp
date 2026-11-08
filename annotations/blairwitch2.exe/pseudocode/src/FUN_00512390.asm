; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00512390(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
;
; Local Variables:
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
; XREF[1]:
;   FUN_00512a70 at 00512eb3
;
; Referenced Globals:
;   undefined4 DAT_01e4fed4
;
; Called Functions:
;   FUN_005122f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512390
        ;   Label: FUN_00512390
    PUSH ESI                            ; 00512391
    PUSH EDI                            ; 00512392
    PUSH EBP                            ; 00512393
    SUB ESP,0x28                        ; 00512394
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00512397
    MOV ESI,dword ptr [ESP + 0x40]      ; 0051239b
    MOV ECX,dword ptr [ESP + 0x44]      ; 0051239f
    MOV EBX,dword ptr [ESP + 0x48]      ; 005123a3
    MOV EDX,dword ptr [ESP + 0x4c]      ; 005123a7
    MOV EDI,dword ptr [ESP + 0x50]      ; 005123ab
    MOV dword ptr [ESP + 0x4],0x1       ; 005123af
    CMP ECX,EDI                         ; 005123b7
    JG 0x00512426                       ; 005123b9
        ;   XREF to: 00512426 (CONDITIONAL_JUMP)  ; LAB_00512426
    SUB EDX,ESI                         ; 005123bb
        ;   Label: LAB_005123bb
    SUB EDI,ECX                         ; 005123bd
    MOV dword ptr [ESP + 0x1c],EDX      ; 005123bf
    MOV dword ptr [ESP + 0x18],EDI      ; 005123c3
    TEST EDX,EDX                        ; 005123c7
    JL 0x00512441                       ; 005123c9
        ;   XREF to: 00512441 (CONDITIONAL_JUMP)  ; LAB_00512441
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005123cb
        ;   Label: LAB_005123cb
    MOV EDX,dword ptr [ESP + 0x18]      ; 005123cf
    MOV EDI,ECX                         ; 005123d3
    CMP EAX,EDX                         ; 005123d5
    JLE 0x005124f9                      ; 005123d7
        ;   XREF to: 005124f9 (CONDITIONAL_JUMP)  ; LAB_005124f9
    LEA EAX,[EDX + EDX*0x1]             ; 005123dd
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005123e0
    SUB EAX,EDX                         ; 005123e4
    MOV dword ptr [ESP + 0x24],EAX      ; 005123e6
    XOR EAX,EAX                         ; 005123ea
    MOV dword ptr [ESP + 0xc],EAX       ; 005123ec
    TEST EDX,EDX                        ; 005123f0
    JL 0x005124e7                       ; 005123f2
        ;   XREF to: 005124e7 (CONDITIONAL_JUMP)  ; LAB_005124e7
    DEC ECX                             ; 005123f8
    MOV dword ptr [ESP + 0x10],ECX      ; 005123f9
    PUSH EBX                            ; 005123fd
        ;   Label: LAB_005123fd
    PUSH ESI                            ; 005123fe
    MOV ECX,dword ptr [ESP + 0x18]      ; 005123ff
    PUSH ECX                            ; 00512403
    PUSH EBP                            ; 00512404
    CALL FUN_005122f0                   ; 00512405
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005122f0()
    ADD ESP,0x10                        ; 0051240a
    SUB EAX,EBX                         ; 0051240d
    CDQ                                 ; 0051240f
    XOR EAX,EDX                         ; 00512410
    SUB EAX,EDX                         ; 00512412
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512414 | DAT_01e4fed4
    JLE 0x00512457                      ; 0051241a
        ;   XREF to: 00512457 (CONDITIONAL_JUMP)  ; LAB_00512457
    XOR EAX,EAX                         ; 0051241c
        ;   Label: LAB_0051241c
    ADD ESP,0x28                        ; 0051241e
    POP EBP                             ; 00512421
    POP EDI                             ; 00512422
    POP ESI                             ; 00512423
    POP EBX                             ; 00512424
    RET                                 ; 00512425
    MOV EAX,ESI                         ; 00512426
        ;   Label: LAB_00512426
    MOV ESI,EDX                         ; 00512428
    MOV EDX,EAX                         ; 0051242a
    MOV EAX,ECX                         ; 0051242c
    MOV ECX,EDI                         ; 0051242e
    MOV EDI,EAX                         ; 00512430
    MOV EAX,EBX                         ; 00512432
    MOV EBX,dword ptr [ESP + 0x54]      ; 00512434
    MOV dword ptr [ESP + 0x54],EAX      ; 00512438
    JMP 0x005123bb                      ; 0051243c
        ;   XREF to: 005123bb (UNCONDITIONAL_JUMP)  ; LAB_005123bb
    MOV EDI,EDX                         ; 00512441
        ;   Label: LAB_00512441
    MOV EAX,0xffffffff                  ; 00512443
    NEG EDI                             ; 00512448
    MOV dword ptr [ESP + 0x4],EAX       ; 0051244a
    MOV dword ptr [ESP + 0x1c],EDI      ; 0051244e
    JMP 0x005123cb                      ; 00512452
        ;   XREF to: 005123cb (UNCONDITIONAL_JUMP)  ; LAB_005123cb
    PUSH EBX                            ; 00512457
        ;   Label: LAB_00512457
    PUSH ESI                            ; 00512458
    LEA EAX,[EDI + 0x1]                 ; 00512459
    PUSH EAX                            ; 0051245c
    PUSH EBP                            ; 0051245d
    MOV dword ptr [ESP + 0x18],EAX      ; 0051245e
    CALL FUN_005122f0                   ; 00512462
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005122f0()
    ADD ESP,0x10                        ; 00512467
    SUB EAX,EBX                         ; 0051246a
    CDQ                                 ; 0051246c
    XOR EAX,EDX                         ; 0051246d
    SUB EAX,EDX                         ; 0051246f
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512471 | DAT_01e4fed4
    JG 0x0051241c                       ; 00512477
        ;   XREF to: 0051241c (CONDITIONAL_JUMP)  ; LAB_0051241c
    PUSH EBX                            ; 00512479
    PUSH ESI                            ; 0051247a
    PUSH EDI                            ; 0051247b
    PUSH EBP                            ; 0051247c
    CALL FUN_005122f0                   ; 0051247d
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005122f0()
    ADD ESP,0x10                        ; 00512482
    MOV ECX,EAX                         ; 00512485
    MOV dword ptr [ESP],EAX             ; 00512487
    SUB EAX,EBX                         ; 0051248a
    CDQ                                 ; 0051248c
    XOR EAX,EDX                         ; 0051248d
    SUB EAX,EDX                         ; 0051248f
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512491 | DAT_01e4fed4
    JG 0x0051241c                       ; 00512497
        ;   XREF to: 0051241c (CONDITIONAL_JUMP)  ; LAB_0051241c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00512499
    MOV EBX,ECX                         ; 0051249d
    TEST EAX,EAX                        ; 0051249f
    JLE 0x005124be                      ; 005124a1
        ;   XREF to: 005124be (CONDITIONAL_JUMP)  ; LAB_005124be
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005124a3
    MOV ECX,dword ptr [ESP + 0x24]      ; 005124a7
    MOV EDX,dword ptr [ESP + 0x10]      ; 005124ab
    MOV EDI,dword ptr [ESP + 0x8]       ; 005124af
    SUB ECX,EAX                         ; 005124b3
    INC EDX                             ; 005124b5
    MOV dword ptr [ESP + 0x24],ECX      ; 005124b6
    MOV dword ptr [ESP + 0x10],EDX      ; 005124ba
    MOV EAX,dword ptr [ESP + 0x4]       ; 005124be
        ;   Label: LAB_005124be
    MOV EDX,dword ptr [ESP + 0x24]      ; 005124c2
    ADD ESI,EAX                         ; 005124c6
    MOV EAX,dword ptr [ESP + 0x18]      ; 005124c8
    MOV ECX,dword ptr [ESP + 0xc]       ; 005124cc
    ADD EDX,EAX                         ; 005124d0
    INC ECX                             ; 005124d2
    MOV dword ptr [ESP + 0x24],EDX      ; 005124d3
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005124d7
    MOV dword ptr [ESP + 0xc],ECX       ; 005124db
    CMP ECX,EDX                         ; 005124df
    JLE 0x005123fd                      ; 005124e1
        ;   XREF to: 005123fd (CONDITIONAL_JUMP)  ; LAB_005123fd
    MOV EAX,dword ptr [ESP]             ; 005124e7
        ;   Label: LAB_005124e7
    CMP EAX,dword ptr [ESP + 0x54]      ; 005124ea
    JZ 0x005125c8                       ; 005124ee
        ;   XREF to: 005125c8 (CONDITIONAL_JUMP)  ; LAB_005125c8
    JMP 0x0051241c                      ; 005124f4
        ;   XREF to: 0051241c (UNCONDITIONAL_JUMP)  ; LAB_0051241c
    ADD EAX,EAX                         ; 005124f9
        ;   Label: LAB_005124f9
    SUB EAX,EDX                         ; 005124fb
    MOV dword ptr [ESP + 0x20],EAX      ; 005124fd
    XOR EAX,EAX                         ; 00512501
    MOV dword ptr [ESP + 0x14],EAX      ; 00512503
    TEST EDX,EDX                        ; 00512507
    JL 0x005124e7                       ; 00512509
        ;   XREF to: 005124e7 (CONDITIONAL_JUMP)  ; LAB_005124e7
    PUSH EBX                            ; 0051250b
        ;   Label: LAB_0051250b
    LEA EAX,[ESI + 0x1]                 ; 0051250c
    PUSH EAX                            ; 0051250f
    PUSH EDI                            ; 00512510
    PUSH EBP                            ; 00512511
    CALL FUN_005122f0                   ; 00512512
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005122f0()
    ADD ESP,0x10                        ; 00512517
    SUB EAX,EBX                         ; 0051251a
    CDQ                                 ; 0051251c
    XOR EAX,EDX                         ; 0051251d
    SUB EAX,EDX                         ; 0051251f
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512521 | DAT_01e4fed4
    JLE 0x00512533                      ; 00512527
        ;   XREF to: 00512533 (CONDITIONAL_JUMP)  ; LAB_00512533
    XOR EAX,EAX                         ; 00512529
    ADD ESP,0x28                        ; 0051252b
    POP EBP                             ; 0051252e
    POP EDI                             ; 0051252f
    POP ESI                             ; 00512530
    POP EBX                             ; 00512531
    RET                                 ; 00512532
    PUSH EBX                            ; 00512533
        ;   Label: LAB_00512533
    LEA EAX,[ESI + -0x1]                ; 00512534
    PUSH EAX                            ; 00512537
    PUSH EDI                            ; 00512538
    PUSH EBP                            ; 00512539
    CALL FUN_005122f0                   ; 0051253a
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005122f0()
    ADD ESP,0x10                        ; 0051253f
    SUB EAX,EBX                         ; 00512542
    CDQ                                 ; 00512544
    XOR EAX,EDX                         ; 00512545
    SUB EAX,EDX                         ; 00512547
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512549 | DAT_01e4fed4
    JG 0x0051241c                       ; 0051254f
        ;   XREF to: 0051241c (CONDITIONAL_JUMP)  ; LAB_0051241c
    PUSH EBX                            ; 00512555
    PUSH ESI                            ; 00512556
    PUSH EDI                            ; 00512557
    PUSH EBP                            ; 00512558
    CALL FUN_005122f0                   ; 00512559
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005122f0()
    ADD ESP,0x10                        ; 0051255e
    MOV ECX,EAX                         ; 00512561
    MOV dword ptr [ESP],EAX             ; 00512563
    SUB EAX,EBX                         ; 00512566
    CDQ                                 ; 00512568
    XOR EAX,EDX                         ; 00512569
    SUB EAX,EDX                         ; 0051256b
    CMP EAX,dword ptr [0x01e4fed4]      ; 0051256d | DAT_01e4fed4
    JG 0x0051241c                       ; 00512573
        ;   XREF to: 0051241c (CONDITIONAL_JUMP)  ; LAB_0051241c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00512579
    MOV EBX,ECX                         ; 0051257d
    TEST EAX,EAX                        ; 0051257f
    JLE 0x00512597                      ; 00512581
        ;   XREF to: 00512597 (CONDITIONAL_JUMP)  ; LAB_00512597
    MOV EAX,dword ptr [ESP + 0x18]      ; 00512583
    MOV ECX,dword ptr [ESP + 0x20]      ; 00512587
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051258b
    SUB ECX,EAX                         ; 0051258f
    ADD ESI,EDX                         ; 00512591
    MOV dword ptr [ESP + 0x20],ECX      ; 00512593
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00512597
        ;   Label: LAB_00512597
    MOV ECX,dword ptr [ESP + 0x20]      ; 0051259b
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051259f
    ADD ECX,EAX                         ; 005125a3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005125a5
    INC EDI                             ; 005125a9
    INC EAX                             ; 005125aa
    MOV dword ptr [ESP + 0x20],ECX      ; 005125ab
    MOV dword ptr [ESP + 0x14],EAX      ; 005125af
    CMP EAX,EDX                         ; 005125b3
    JLE 0x0051250b                      ; 005125b5
        ;   XREF to: 0051250b (CONDITIONAL_JUMP)  ; LAB_0051250b
    MOV EAX,dword ptr [ESP]             ; 005125bb
    CMP EAX,dword ptr [ESP + 0x54]      ; 005125be
    JNZ 0x0051241c                      ; 005125c2
        ;   XREF to: 0051241c (CONDITIONAL_JUMP)  ; LAB_0051241c
    MOV EAX,0x1                         ; 005125c8
        ;   Label: LAB_005125c8
    ADD ESP,0x28                        ; 005125cd
    POP EBP                             ; 005125d0
    POP EDI                             ; 005125d1
    POP ESI                             ; 005125d2
    POP EBX                             ; 005125d3
    RET                                 ; 005125d4

