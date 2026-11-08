; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005032a0(void)
;
;
; XREF[1]:
;   FUN_005b2e00 at 005b304a
;
; Referenced Globals:
;   undefined4 DAT_005e70d2
;   TerminatedCString s_stderr_txt_005e70d5
;   TerminatedCString s_stderr_txt_005e70e0
;   TerminatedCString s_core_main_c_005e70eb
;   TerminatedCString s_Please_copy_Nocturne_to_005e70fa
;   TerminatedCString s_wt_005e7122
;   TerminatedCString s_stderr_txt_005e7125
;   TerminatedCString s_msglist_txt_005e7130
;   TerminatedCString s_core_main_c_005e713c
;   TerminatedCString s_This_CPU_does_not_have_a_005e714b
;   TerminatedCString s_core_main_c_005e716f
;   TerminatedCString s_Unable_to_set_640x480x32_005e717e
;   TerminatedCString s_Windows_is_reporting_005e720f
;   TerminatedCString s_s_1f_005e7225
;   TerminatedCString s_MB_of_system_RAM_005e722a
;   ... and 70 more
;
; Called Functions:
;   FUN_00401010
;   FUN_0040d0a0
;   FUN_0040d0c0
;   FUN_0040d220
;   FUN_0040d4b0
;   FUN_00415c20
;   FUN_0045dc30
;   FUN_0045e000
;   FUN_00478e40
;   FUN_00494340
;   FUN_004bf770
;   FUN_004c3ea0
;   FUN_004c4510
;   FUN_004f4f50
;   FUN_005030e0
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005032a0
        ;   Label: FUN_005032a0
    PUSH ESI                            ; 005032a1
    PUSH EDI                            ; 005032a2
    PUSH EBP                            ; 005032a3
    MOV EBP,ESP                         ; 005032a4
    SUB ESP,0x718                       ; 005032a6
    AND ESP,0xfffffff8                  ; 005032ac
    MOV ECX,0x10000                     ; 005032af
    PUSH 0x5e70d2                       ; 005032b4 | DAT_005e70d2
    MOV EBX,0x1                         ; 005032b9
    XOR EDX,EDX                         ; 005032be
    PUSH 0x5e70d5                       ; 005032c0 | = "stderr.txt"
    MOV dword ptr [0x01c51d10],EDX      ; 005032c5 | DAT_01c51d10
    MOV dword ptr [0x006258dc],ECX      ; 005032cb | DAT_006258dc
    MOV dword ptr [0x006258d0],EBX      ; 005032d1 | DAT_006258d0
    CALL FUN_005c157c                   ; 005032d7
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined FUN_005c157c()
    ADD ESP,0x8                         ; 005032dc
    TEST EAX,EAX                        ; 005032df
    JNZ 0x005039b1                      ; 005032e1
        ;   XREF to: 005039b1 (CONDITIONAL_JUMP)  ; LAB_005039b1
    PUSH 0x626308                       ; 005032e7 | DAT_00626308
        ;   Label: LAB_005032e7
    PUSH 0x5e7122                       ; 005032ec | = "wt"
    PUSH 0x5e7125                       ; 005032f1 | = "stderr.txt"
    CALL FUN_005c1614                   ; 005032f6
        ;   XREF to: 005c1614 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1614()
    ADD ESP,0xc                         ; 005032fb
    CALL FUN_004bf770                   ; 005032fe
        ;   XREF to: 004bf770 (UNCONDITIONAL_CALL)  ; undefined FUN_004bf770()
    CALL FUN_004f4f50                   ; 00503303
        ;   XREF to: 004f4f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4f50()
    MOV EDX,dword ptr [0x00622a6c]      ; 00503308 | DAT_00622a6c
    MOV EAX,0x2                         ; 0050330e
    PUSH EDX                            ; 00503313
    MOV [0x02c8337c],EAX                ; 00503314 | DAT_02c8337c
    CALL FUN_0053c8a0                   ; 00503319
        ;   XREF to: 0053c8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053c8a0()
    ADD ESP,0x4                         ; 0050331e
    PUSH 0x53d520                       ; 00503321 | LAB_0053d520
    CALL FUN_00478e40                   ; 00503326
        ;   XREF to: 00478e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00478e40()
    ADD ESP,0x4                         ; 0050332b
    PUSH 0x478ef0                       ; 0050332e
    CALL FUN_00478e40                   ; 00503333
        ;   XREF to: 00478e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00478e40()
    ADD ESP,0x4                         ; 00503338
    PUSH 0x5e7130                       ; 0050333b | = "msglist.txt"
    CALL FUN_00530bf0                   ; 00503340
        ;   XREF to: 00530bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00530bf0()
    ADD ESP,0x4                         ; 00503345
    CALL FUN_0051c450                   ; 00503348
        ;   XREF to: 0051c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c450()
    CMP dword ptr [0x01c51d00],0x0      ; 0050334d | DAT_01c51d00
    JNZ 0x00503382                      ; 00503354
        ;   XREF to: 00503382 (CONDITIONAL_JUMP)  ; LAB_00503382
    MOV EBX,0x5e713c                    ; 00503356 | = "..\\core\\main.c"
    MOV ESI,0x3dd                       ; 0050335b
    PUSH 0x5e714b                       ; 00503360 | = "This CPU does not have an MMX unit."
    MOV dword ptr [0x01d1d400],EBX      ; 00503365 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0050336b | DAT_01d1d404
    CALL FUN_00531090                   ; 00503371
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 00503376
    PUSH EAX                            ; 00503379
    CALL FUN_005030e0                   ; 0050337a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0050337f
    CALL FUN_005072c0                   ; 00503382
        ;   XREF to: 005072c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005072c0()
        ;   Label: LAB_00503382
    CALL thunk_FUN_00597970             ; 00503387
        ;   XREF to: 00403790 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_00597970()
    CALL FUN_00401010                   ; 0050338c
        ;   XREF to: 00401010 (UNCONDITIONAL_CALL)  ; undefined FUN_00401010()
    CALL FUN_005b21e0                   ; 00503391
        ;   XREF to: 005b21e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b21e0()
    CALL FUN_005b3aa0                   ; 00503396
        ;   XREF to: 005b3aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3aa0()
    PUSH 0x20                           ; 0050339b
    PUSH 0x1e0                          ; 0050339d
    PUSH 0x280                          ; 005033a2
    CALL FUN_005ac300                   ; 005033a7
        ;   XREF to: 005ac300 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac300()
    ADD ESP,0xc                         ; 005033ac
    TEST EAX,EAX                        ; 005033af
    JNZ 0x005033d5                      ; 005033b1
        ;   XREF to: 005033d5 (CONDITIONAL_JUMP)  ; LAB_005033d5
    MOV EDI,0x5e716f                    ; 005033b3 | = "..\\core\\main.c"
    MOV EAX,0x3f5                       ; 005033b8
    PUSH 0x5e717e                       ; 005033bd | = "Unable to set 640x480x32bpp.  Please ..."
    MOV dword ptr [0x01d1d400],EDI      ; 005033c2 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005033c8 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005033cd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005033d2
    CALL FUN_0045e000                   ; 005033d5
        ;   XREF to: 0045e000 (UNCONDITIONAL_CALL)  ; undefined FUN_0045e000()
        ;   Label: LAB_005033d5
    CMP dword ptr [0x02c9be78],0x3c00000 ; 005033da | DAT_02c9be78
    JGE 0x00503658                      ; 005033e4
        ;   XREF to: 00503658 (CONDITIONAL_JUMP)  ; LAB_00503658
    PUSH 0x5e720f                       ; 005033ea | = "Windows is reporting "
    CALL FUN_00531090                   ; 005033ef
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 005033f4
    LEA EDI,[ESP + 0x200]               ; 005033f7
    MOV ESI,EAX                         ; 005033fe
    PUSH EDI                            ; 00503400
    MOV AL,byte ptr [ESI]               ; 00503401
        ;   Label: LAB_00503401
    MOV byte ptr [EDI],AL               ; 00503403
    CMP AL,0x0                          ; 00503405
    JZ 0x00503419                       ; 00503407
        ;   XREF to: 00503419 (CONDITIONAL_JUMP)  ; LAB_00503419
    MOV AL,byte ptr [ESI + 0x1]         ; 00503409
    ADD ESI,0x2                         ; 0050340c
    MOV byte ptr [EDI + 0x1],AL         ; 0050340f
    ADD EDI,0x2                         ; 00503412
    CMP AL,0x0                          ; 00503415
    JNZ 0x00503401                      ; 00503417
        ;   XREF to: 00503401 (CONDITIONAL_JUMP)  ; LAB_00503401
    POP EDI                             ; 00503419
        ;   Label: LAB_00503419
    FILD dword ptr [0x02c9be78]         ; 0050341a | DAT_02c9be78
    FMUL float ptr [0x005e73d1]         ; 00503420 | DAT_005e73d1
    SUB ESP,0x8                         ; 00503426
    FSTP double ptr [ESP]               ; 00503429
    PUSH 0x5e7225                       ; 0050342c | = "%.1f"
    LEA EAX,[ESP + 0x40c]               ; 00503431
    PUSH EAX                            ; 00503438
    CALL FUN_005bfb40                   ; 00503439
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0050343e
    LEA ESI,[ESP + 0x400]               ; 00503441
    LEA EDI,[ESP + 0x200]               ; 00503448
    PUSH EDI                            ; 0050344f
    SUB ECX,ECX                         ; 00503450
    DEC ECX                             ; 00503452
    MOV AL,0x0                          ; 00503453
    SCASB.REPNE ES:EDI                  ; 00503455
    DEC EDI                             ; 00503457
    MOV AL,byte ptr [ESI]               ; 00503458
        ;   Label: LAB_00503458
    MOV byte ptr [EDI],AL               ; 0050345a
    CMP AL,0x0                          ; 0050345c
    JZ 0x00503470                       ; 0050345e
        ;   XREF to: 00503470 (CONDITIONAL_JUMP)  ; LAB_00503470
    MOV AL,byte ptr [ESI + 0x1]         ; 00503460
    ADD ESI,0x2                         ; 00503463
    MOV byte ptr [EDI + 0x1],AL         ; 00503466
    ADD EDI,0x2                         ; 00503469
    CMP AL,0x0                          ; 0050346c
    JNZ 0x00503458                      ; 0050346e
        ;   XREF to: 00503458 (CONDITIONAL_JUMP)  ; LAB_00503458
    POP EDI                             ; 00503470
        ;   Label: LAB_00503470
    PUSH 0x5e722a                       ; 00503471 | = "MB of system RAM."
    CALL FUN_00531090                   ; 00503476
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050347b
    LEA EDI,[ESP + 0x200]               ; 0050347e
    MOV ESI,EAX                         ; 00503485
    PUSH EDI                            ; 00503487
    SUB ECX,ECX                         ; 00503488
    DEC ECX                             ; 0050348a
    MOV AL,0x0                          ; 0050348b
    SCASB.REPNE ES:EDI                  ; 0050348d
    DEC EDI                             ; 0050348f
    MOV AL,byte ptr [ESI]               ; 00503490
        ;   Label: LAB_00503490
    MOV byte ptr [EDI],AL               ; 00503492
    CMP AL,0x0                          ; 00503494
    JZ 0x005034a8                       ; 00503496
        ;   XREF to: 005034a8 (CONDITIONAL_JUMP)  ; LAB_005034a8
    MOV AL,byte ptr [ESI + 0x1]         ; 00503498
    ADD ESI,0x2                         ; 0050349b
    MOV byte ptr [EDI + 0x1],AL         ; 0050349e
    ADD EDI,0x2                         ; 005034a1
    CMP AL,0x0                          ; 005034a4
    JNZ 0x00503490                      ; 005034a6
        ;   XREF to: 00503490 (CONDITIONAL_JUMP)  ; LAB_00503490
    POP EDI                             ; 005034a8
        ;   Label: LAB_005034a8
    MOV ESI,0x5e723c                    ; 005034a9 | = "\n"
    LEA EDI,[ESP + 0x200]               ; 005034ae
    PUSH EDI                            ; 005034b5
    SUB ECX,ECX                         ; 005034b6
    DEC ECX                             ; 005034b8
    MOV AL,0x0                          ; 005034b9
    SCASB.REPNE ES:EDI                  ; 005034bb
    DEC EDI                             ; 005034bd
    MOV AL,byte ptr [ESI]               ; 005034be | = "\n" | s_Nocturne_requires_at_lea_005e723e
        ;   Label: LAB_005034be
    MOV byte ptr [EDI],AL               ; 005034c0
    CMP AL,0x0                          ; 005034c2
    JZ 0x005034d6                       ; 005034c4
        ;   XREF to: 005034d6 (CONDITIONAL_JUMP)  ; LAB_005034d6
    MOV AL,byte ptr [ESI + 0x1]         ; 005034c6 | s_anon_005e723c+1 | s_Nocturne_requires_at_lea_005e723e+1
    ADD ESI,0x2                         ; 005034c9
    MOV byte ptr [EDI + 0x1],AL         ; 005034cc
    ADD EDI,0x2                         ; 005034cf
    CMP AL,0x0                          ; 005034d2
    JNZ 0x005034be                      ; 005034d4
        ;   XREF to: 005034be (CONDITIONAL_JUMP)  ; LAB_005034be
    POP EDI                             ; 005034d6
        ;   Label: LAB_005034d6
    PUSH 0x5e723e                       ; 005034d7 | = "Nocturne requires at least 64MB of sy..."
    CALL FUN_00531090                   ; 005034dc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 005034e1
    LEA EDI,[ESP + 0x200]               ; 005034e4
    MOV ESI,EAX                         ; 005034eb
    PUSH EDI                            ; 005034ed
    SUB ECX,ECX                         ; 005034ee
    DEC ECX                             ; 005034f0
    MOV AL,0x0                          ; 005034f1
    SCASB.REPNE ES:EDI                  ; 005034f3
    DEC EDI                             ; 005034f5
    MOV AL,byte ptr [ESI]               ; 005034f6
        ;   Label: LAB_005034f6
    MOV byte ptr [EDI],AL               ; 005034f8
    CMP AL,0x0                          ; 005034fa
    JZ 0x0050350e                       ; 005034fc
        ;   XREF to: 0050350e (CONDITIONAL_JUMP)  ; LAB_0050350e
    MOV AL,byte ptr [ESI + 0x1]         ; 005034fe
    ADD ESI,0x2                         ; 00503501
    MOV byte ptr [EDI + 0x1],AL         ; 00503504
    ADD EDI,0x2                         ; 00503507
    CMP AL,0x0                          ; 0050350a
    JNZ 0x005034f6                      ; 0050350c
        ;   XREF to: 005034f6 (CONDITIONAL_JUMP)  ; LAB_005034f6
    POP EDI                             ; 0050350e
        ;   Label: LAB_0050350e
    MOV ESI,0x5e726d                    ; 0050350f | = "\n"
    LEA EDI,[ESP + 0x200]               ; 00503514
    PUSH EDI                            ; 0050351b
    SUB ECX,ECX                         ; 0050351c
    DEC ECX                             ; 0050351e
    MOV AL,0x0                          ; 0050351f
    SCASB.REPNE ES:EDI                  ; 00503521
    DEC EDI                             ; 00503523
    MOV AL,byte ptr [ESI]               ; 00503524 | = "\n" | s_If_you_think_you_have_at_005e726f
        ;   Label: LAB_00503524
    MOV byte ptr [EDI],AL               ; 00503526
    CMP AL,0x0                          ; 00503528
    JZ 0x0050353c                       ; 0050352a
        ;   XREF to: 0050353c (CONDITIONAL_JUMP)  ; LAB_0050353c
    MOV AL,byte ptr [ESI + 0x1]         ; 0050352c | s_anon_005e726d+1 | s_If_you_think_you_have_at_005e726f+1
    ADD ESI,0x2                         ; 0050352f
    MOV byte ptr [EDI + 0x1],AL         ; 00503532
    ADD EDI,0x2                         ; 00503535
    CMP AL,0x0                          ; 00503538
    JNZ 0x00503524                      ; 0050353a
        ;   XREF to: 00503524 (CONDITIONAL_JUMP)  ; LAB_00503524
    POP EDI                             ; 0050353c
        ;   Label: LAB_0050353c
    PUSH 0x5e726f                       ; 0050353d | = "If you think you have at least 64MB o..."
    CALL FUN_00531090                   ; 00503542
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 00503547
    LEA EDI,[ESP + 0x200]               ; 0050354a
    MOV ESI,EAX                         ; 00503551
    PUSH EDI                            ; 00503553
    SUB ECX,ECX                         ; 00503554
    DEC ECX                             ; 00503556
    MOV AL,0x0                          ; 00503557
    SCASB.REPNE ES:EDI                  ; 00503559
    DEC EDI                             ; 0050355b
    MOV AL,byte ptr [ESI]               ; 0050355c
        ;   Label: LAB_0050355c
    MOV byte ptr [EDI],AL               ; 0050355e
    CMP AL,0x0                          ; 00503560
    JZ 0x00503574                       ; 00503562
        ;   XREF to: 00503574 (CONDITIONAL_JUMP)  ; LAB_00503574
    MOV AL,byte ptr [ESI + 0x1]         ; 00503564
    ADD ESI,0x2                         ; 00503567
    MOV byte ptr [EDI + 0x1],AL         ; 0050356a
    ADD EDI,0x2                         ; 0050356d
    CMP AL,0x0                          ; 00503570
    JNZ 0x0050355c                      ; 00503572
        ;   XREF to: 0050355c (CONDITIONAL_JUMP)  ; LAB_0050355c
    POP EDI                             ; 00503574
        ;   Label: LAB_00503574
    MOV ESI,0x5e72a1                    ; 00503575 | = "\n"
    LEA EDI,[ESP + 0x200]               ; 0050357a
    PUSH EDI                            ; 00503581
    SUB ECX,ECX                         ; 00503582
    DEC ECX                             ; 00503584
    MOV AL,0x0                          ; 00503585
    SCASB.REPNE ES:EDI                  ; 00503587
    DEC EDI                             ; 00503589
    MOV AL,byte ptr [ESI]               ; 0050358a | = "\n" | s_then_ignore_this_message_005e72a3
        ;   Label: LAB_0050358a
    MOV byte ptr [EDI],AL               ; 0050358c
    CMP AL,0x0                          ; 0050358e
    JZ 0x005035a2                       ; 00503590
        ;   XREF to: 005035a2 (CONDITIONAL_JUMP)  ; LAB_005035a2
    MOV AL,byte ptr [ESI + 0x1]         ; 00503592 | s_anon_005e72a1+1 | s_then_ignore_this_message_005e72a3+1
    ADD ESI,0x2                         ; 00503595
    MOV byte ptr [EDI + 0x1],AL         ; 00503598
    ADD EDI,0x2                         ; 0050359b
    CMP AL,0x0                          ; 0050359e
    JNZ 0x0050358a                      ; 005035a0
        ;   XREF to: 0050358a (CONDITIONAL_JUMP)  ; LAB_0050358a
    POP EDI                             ; 005035a2
        ;   Label: LAB_005035a2
    PUSH 0x5e72a3                       ; 005035a3 | = "then ignore this message."
    CALL FUN_00531090                   ; 005035a8
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 005035ad
    LEA EDI,[ESP + 0x200]               ; 005035b0
    MOV ESI,EAX                         ; 005035b7
    PUSH EDI                            ; 005035b9
    SUB ECX,ECX                         ; 005035ba
    DEC ECX                             ; 005035bc
    MOV AL,0x0                          ; 005035bd
    SCASB.REPNE ES:EDI                  ; 005035bf
    DEC EDI                             ; 005035c1
    MOV AL,byte ptr [ESI]               ; 005035c2
        ;   Label: LAB_005035c2
    MOV byte ptr [EDI],AL               ; 005035c4
    CMP AL,0x0                          ; 005035c6
    JZ 0x005035da                       ; 005035c8
        ;   XREF to: 005035da (CONDITIONAL_JUMP)  ; LAB_005035da
    MOV AL,byte ptr [ESI + 0x1]         ; 005035ca
    ADD ESI,0x2                         ; 005035cd
    MOV byte ptr [EDI + 0x1],AL         ; 005035d0
    ADD EDI,0x2                         ; 005035d3
    CMP AL,0x0                          ; 005035d6
    JNZ 0x005035c2                      ; 005035d8
        ;   XREF to: 005035c2 (CONDITIONAL_JUMP)  ; LAB_005035c2
    POP EDI                             ; 005035da
        ;   Label: LAB_005035da
    MOV ESI,0x5e72bd                    ; 005035db | = "\n"
    LEA EDI,[ESP + 0x200]               ; 005035e0
    PUSH EDI                            ; 005035e7
    SUB ECX,ECX                         ; 005035e8
    DEC ECX                             ; 005035ea
    MOV AL,0x0                          ; 005035eb
    SCASB.REPNE ES:EDI                  ; 005035ed
    DEC EDI                             ; 005035ef
    MOV AL,byte ptr [ESI]               ; 005035f0 | = "\n" | s_See_README_TXT_for_more_005e72bf
        ;   Label: LAB_005035f0
    MOV byte ptr [EDI],AL               ; 005035f2
    CMP AL,0x0                          ; 005035f4
    JZ 0x00503608                       ; 005035f6
        ;   XREF to: 00503608 (CONDITIONAL_JUMP)  ; LAB_00503608
    MOV AL,byte ptr [ESI + 0x1]         ; 005035f8 | s_anon_005e72bd+1 | s_See_README_TXT_for_more_005e72bf+1
    ADD ESI,0x2                         ; 005035fb
    MOV byte ptr [EDI + 0x1],AL         ; 005035fe
    ADD EDI,0x2                         ; 00503601
    CMP AL,0x0                          ; 00503604
    JNZ 0x005035f0                      ; 00503606
        ;   XREF to: 005035f0 (CONDITIONAL_JUMP)  ; LAB_005035f0
    POP EDI                             ; 00503608
        ;   Label: LAB_00503608
    PUSH 0x5e72bf                       ; 00503609 | = "See README.TXT for more information."
    CALL FUN_00531090                   ; 0050360e
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 00503613
    LEA EDI,[ESP + 0x200]               ; 00503616
    MOV ESI,EAX                         ; 0050361d
    PUSH EDI                            ; 0050361f
    SUB ECX,ECX                         ; 00503620
    DEC ECX                             ; 00503622
    MOV AL,0x0                          ; 00503623
    SCASB.REPNE ES:EDI                  ; 00503625
    DEC EDI                             ; 00503627
    MOV AL,byte ptr [ESI]               ; 00503628
        ;   Label: LAB_00503628
    MOV byte ptr [EDI],AL               ; 0050362a
    CMP AL,0x0                          ; 0050362c
    JZ 0x00503640                       ; 0050362e
        ;   XREF to: 00503640 (CONDITIONAL_JUMP)  ; LAB_00503640
    MOV AL,byte ptr [ESI + 0x1]         ; 00503630
    ADD ESI,0x2                         ; 00503633
    MOV byte ptr [EDI + 0x1],AL         ; 00503636
    ADD EDI,0x2                         ; 00503639
    CMP AL,0x0                          ; 0050363c
    JNZ 0x00503628                      ; 0050363e
        ;   XREF to: 00503628 (CONDITIONAL_JUMP)  ; LAB_00503628
    POP EDI                             ; 00503640
        ;   Label: LAB_00503640
    LEA EAX,[ESP + 0x200]               ; 00503641
    PUSH EAX                            ; 00503648
    MOV ECX,dword ptr [0x0061abc0]      ; 00503649 | DAT_0061abc0
    PUSH ECX                            ; 0050364f
    CALL FUN_00494340                   ; 00503650
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined FUN_00494340()
    ADD ESP,0x8                         ; 00503655
    CMP dword ptr [0x02c9be7c],0xc800000 ; 00503658 | DAT_02c9be7c
        ;   Label: LAB_00503658
    JGE 0x005037e2                      ; 00503662
        ;   XREF to: 005037e2 (CONDITIONAL_JUMP)  ; LAB_005037e2
    PUSH 0x5e72e4                       ; 00503668 | = "Windows is reporting "
    CALL FUN_00531090                   ; 0050366d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 00503672
    MOV EDI,ESP                         ; 00503675
    MOV ESI,EAX                         ; 00503677
    PUSH EDI                            ; 00503679
    MOV AL,byte ptr [ESI]               ; 0050367a
        ;   Label: LAB_0050367a
    MOV byte ptr [EDI],AL               ; 0050367c
    CMP AL,0x0                          ; 0050367e
    JZ 0x00503692                       ; 00503680
        ;   XREF to: 00503692 (CONDITIONAL_JUMP)  ; LAB_00503692
    MOV AL,byte ptr [ESI + 0x1]         ; 00503682
    ADD ESI,0x2                         ; 00503685
    MOV byte ptr [EDI + 0x1],AL         ; 00503688
    ADD EDI,0x2                         ; 0050368b
    CMP AL,0x0                          ; 0050368e
    JNZ 0x0050367a                      ; 00503690
        ;   XREF to: 0050367a (CONDITIONAL_JUMP)  ; LAB_0050367a
    POP EDI                             ; 00503692
        ;   Label: LAB_00503692
    FILD dword ptr [0x02c9be7c]         ; 00503693 | DAT_02c9be7c
    FMUL float ptr [0x005e73d1]         ; 00503699 | DAT_005e73d1
    SUB ESP,0x8                         ; 0050369f
    FSTP double ptr [ESP]               ; 005036a2
    PUSH 0x5e72fa                       ; 005036a5 | = "%.1f"
    LEA EAX,[ESP + 0x60c]               ; 005036aa
    PUSH EAX                            ; 005036b1
    CALL FUN_005bfb40                   ; 005036b2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 005036b7
    LEA ESI,[ESP + 0x600]               ; 005036ba
    MOV EDI,ESP                         ; 005036c1
    PUSH EDI                            ; 005036c3
    SUB ECX,ECX                         ; 005036c4
    DEC ECX                             ; 005036c6
    MOV AL,0x0                          ; 005036c7
    SCASB.REPNE ES:EDI                  ; 005036c9
    DEC EDI                             ; 005036cb
    MOV AL,byte ptr [ESI]               ; 005036cc
        ;   Label: LAB_005036cc
    MOV byte ptr [EDI],AL               ; 005036ce
    CMP AL,0x0                          ; 005036d0
    JZ 0x005036e4                       ; 005036d2
        ;   XREF to: 005036e4 (CONDITIONAL_JUMP)  ; LAB_005036e4
    MOV AL,byte ptr [ESI + 0x1]         ; 005036d4
    ADD ESI,0x2                         ; 005036d7
    MOV byte ptr [EDI + 0x1],AL         ; 005036da
    ADD EDI,0x2                         ; 005036dd
    CMP AL,0x0                          ; 005036e0
    JNZ 0x005036cc                      ; 005036e2
        ;   XREF to: 005036cc (CONDITIONAL_JUMP)  ; LAB_005036cc
    POP EDI                             ; 005036e4
        ;   Label: LAB_005036e4
    PUSH 0x5e72ff                       ; 005036e5 | = "MB of free swap disk space."
    CALL FUN_00531090                   ; 005036ea
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 005036ef
    MOV EDI,ESP                         ; 005036f2
    MOV ESI,EAX                         ; 005036f4
    PUSH EDI                            ; 005036f6
    SUB ECX,ECX                         ; 005036f7
    DEC ECX                             ; 005036f9
    MOV AL,0x0                          ; 005036fa
    SCASB.REPNE ES:EDI                  ; 005036fc
    DEC EDI                             ; 005036fe
    MOV AL,byte ptr [ESI]               ; 005036ff
        ;   Label: LAB_005036ff
    MOV byte ptr [EDI],AL               ; 00503701
    CMP AL,0x0                          ; 00503703
    JZ 0x00503717                       ; 00503705
        ;   XREF to: 00503717 (CONDITIONAL_JUMP)  ; LAB_00503717
    MOV AL,byte ptr [ESI + 0x1]         ; 00503707
    ADD ESI,0x2                         ; 0050370a
    MOV byte ptr [EDI + 0x1],AL         ; 0050370d
    ADD EDI,0x2                         ; 00503710
    CMP AL,0x0                          ; 00503713
    JNZ 0x005036ff                      ; 00503715
        ;   XREF to: 005036ff (CONDITIONAL_JUMP)  ; LAB_005036ff
    POP EDI                             ; 00503717
        ;   Label: LAB_00503717
    MOV ESI,0x5e731b                    ; 00503718 | = "\n"
    MOV EDI,ESP                         ; 0050371d
    PUSH EDI                            ; 0050371f
    SUB ECX,ECX                         ; 00503720
    DEC ECX                             ; 00503722
    MOV AL,0x0                          ; 00503723
    SCASB.REPNE ES:EDI                  ; 00503725
    DEC EDI                             ; 00503727
    MOV AL,byte ptr [ESI]               ; 00503728 | = "\n" | s_Nocturne_runs_best_with_005e731d
        ;   Label: LAB_00503728
    MOV byte ptr [EDI],AL               ; 0050372a
    CMP AL,0x0                          ; 0050372c
    JZ 0x00503740                       ; 0050372e
        ;   XREF to: 00503740 (CONDITIONAL_JUMP)  ; LAB_00503740
    MOV AL,byte ptr [ESI + 0x1]         ; 00503730 | s_anon_005e731b+1 | s_Nocturne_runs_best_with_005e731d+1
    ADD ESI,0x2                         ; 00503733
    MOV byte ptr [EDI + 0x1],AL         ; 00503736
    ADD EDI,0x2                         ; 00503739
    CMP AL,0x0                          ; 0050373c
    JNZ 0x00503728                      ; 0050373e
        ;   XREF to: 00503728 (CONDITIONAL_JUMP)  ; LAB_00503728
    POP EDI                             ; 00503740
        ;   Label: LAB_00503740
    PUSH 0x5e731d                       ; 00503741 | = "Nocturne runs best with at least 200M..."
    CALL FUN_00531090                   ; 00503746
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050374b
    MOV EDI,ESP                         ; 0050374e
    MOV ESI,EAX                         ; 00503750
    PUSH EDI                            ; 00503752
    SUB ECX,ECX                         ; 00503753
    DEC ECX                             ; 00503755
    MOV AL,0x0                          ; 00503756
    SCASB.REPNE ES:EDI                  ; 00503758
    DEC EDI                             ; 0050375a
    MOV AL,byte ptr [ESI]               ; 0050375b
        ;   Label: LAB_0050375b
    MOV byte ptr [EDI],AL               ; 0050375d
    CMP AL,0x0                          ; 0050375f
    JZ 0x00503773                       ; 00503761
        ;   XREF to: 00503773 (CONDITIONAL_JUMP)  ; LAB_00503773
    MOV AL,byte ptr [ESI + 0x1]         ; 00503763
    ADD ESI,0x2                         ; 00503766
    MOV byte ptr [EDI + 0x1],AL         ; 00503769
    ADD EDI,0x2                         ; 0050376c
    CMP AL,0x0                          ; 0050376f
    JNZ 0x0050375b                      ; 00503771
        ;   XREF to: 0050375b (CONDITIONAL_JUMP)  ; LAB_0050375b
    POP EDI                             ; 00503773
        ;   Label: LAB_00503773
    MOV ESI,0x5e734a                    ; 00503774 | = "\n"
    MOV EDI,ESP                         ; 00503779
    PUSH EDI                            ; 0050377b
    SUB ECX,ECX                         ; 0050377c
    DEC ECX                             ; 0050377e
    MOV AL,0x0                          ; 0050377f
    SCASB.REPNE ES:EDI                  ; 00503781
    DEC EDI                             ; 00503783
    MOV AL,byte ptr [ESI]               ; 00503784 | = "\n" | s_See_README_TXT_for_more_005e734c
        ;   Label: LAB_00503784
    MOV byte ptr [EDI],AL               ; 00503786
    CMP AL,0x0                          ; 00503788
    JZ 0x0050379c                       ; 0050378a
        ;   XREF to: 0050379c (CONDITIONAL_JUMP)  ; LAB_0050379c
    MOV AL,byte ptr [ESI + 0x1]         ; 0050378c | s_anon_005e734a+1 | s_See_README_TXT_for_more_005e734c+1
    ADD ESI,0x2                         ; 0050378f
    MOV byte ptr [EDI + 0x1],AL         ; 00503792
    ADD EDI,0x2                         ; 00503795
    CMP AL,0x0                          ; 00503798
    JNZ 0x00503784                      ; 0050379a
        ;   XREF to: 00503784 (CONDITIONAL_JUMP)  ; LAB_00503784
    POP EDI                             ; 0050379c
        ;   Label: LAB_0050379c
    PUSH 0x5e734c                       ; 0050379d | = "See README.TXT for more information."
    CALL FUN_00531090                   ; 005037a2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 005037a7
    MOV EDI,ESP                         ; 005037aa
    MOV ESI,EAX                         ; 005037ac
    PUSH EDI                            ; 005037ae
    SUB ECX,ECX                         ; 005037af
    DEC ECX                             ; 005037b1
    MOV AL,0x0                          ; 005037b2
    SCASB.REPNE ES:EDI                  ; 005037b4
    DEC EDI                             ; 005037b6
    MOV AL,byte ptr [ESI]               ; 005037b7
        ;   Label: LAB_005037b7
    MOV byte ptr [EDI],AL               ; 005037b9
    CMP AL,0x0                          ; 005037bb
    JZ 0x005037cf                       ; 005037bd
        ;   XREF to: 005037cf (CONDITIONAL_JUMP)  ; LAB_005037cf
    MOV AL,byte ptr [ESI + 0x1]         ; 005037bf
    ADD ESI,0x2                         ; 005037c2
    MOV byte ptr [EDI + 0x1],AL         ; 005037c5
    ADD EDI,0x2                         ; 005037c8
    CMP AL,0x0                          ; 005037cb
    JNZ 0x005037b7                      ; 005037cd
        ;   XREF to: 005037b7 (CONDITIONAL_JUMP)  ; LAB_005037b7
    POP EDI                             ; 005037cf
        ;   Label: LAB_005037cf
    MOV EAX,ESP                         ; 005037d0
    PUSH EAX                            ; 005037d2
    MOV ESI,dword ptr [0x0061abc0]      ; 005037d3 | DAT_0061abc0
    PUSH ESI                            ; 005037d9
    CALL FUN_00494340                   ; 005037da
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined FUN_00494340()
    ADD ESP,0x8                         ; 005037df
    CMP dword ptr [0x01d06d68],0x0      ; 005037e2 | DAT_01d06d68
        ;   Label: LAB_005037e2
    JNZ 0x005039fc                      ; 005037e9
        ;   XREF to: 005039fc (CONDITIONAL_JUMP)  ; LAB_005039fc
    PUSH 0x5e7371                       ; 005037ef | = "opening.avi"
        ;   Label: LAB_005037ef
    PUSH 0x5e737d                       ; 005037f4 | = "video"
    CALL FUN_005b4cd0                   ; 005037f9
        ;   XREF to: 005b4cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b4cd0()
    ADD ESP,0x8                         ; 005037fe
    CALL FUN_0057dc40                   ; 00503801
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dc40()
    PUSH 0x5e7383                       ; 00503806 | = "Loading..."
    CALL FUN_00531090                   ; 0050380b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 00503810
    LEA EDI,[ESP + 0x500]               ; 00503813
    MOV ESI,EAX                         ; 0050381a
    PUSH EDI                            ; 0050381c
    MOV AL,byte ptr [ESI]               ; 0050381d
        ;   Label: LAB_0050381d
    MOV byte ptr [EDI],AL               ; 0050381f
    CMP AL,0x0                          ; 00503821
    JZ 0x00503835                       ; 00503823
        ;   XREF to: 00503835 (CONDITIONAL_JUMP)  ; LAB_00503835
    MOV AL,byte ptr [ESI + 0x1]         ; 00503825
    ADD ESI,0x2                         ; 00503828
    MOV byte ptr [EDI + 0x1],AL         ; 0050382b
    ADD EDI,0x2                         ; 0050382e
    CMP AL,0x0                          ; 00503831
    JNZ 0x0050381d                      ; 00503833
        ;   XREF to: 0050381d (CONDITIONAL_JUMP)  ; LAB_0050381d
    POP EDI                             ; 00503835
        ;   Label: LAB_00503835
    LEA EAX,[ESP + 0x500]               ; 00503836
    PUSH EAX                            ; 0050383d
    MOV ECX,dword ptr [0x0152d244]      ; 0050383e | DAT_0152d244
    PUSH ECX                            ; 00503844
    CALL FUN_004c3ea0                   ; 00503845
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3ea0()
    ADD ESP,0x8                         ; 0050384a
    PUSH 0x58                           ; 0050384d
    MOV EBX,dword ptr [0x0152d244]      ; 0050384f | DAT_0152d244
    PUSH EBX                            ; 00503855
    CALL FUN_004c4510                   ; 00503856
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    ADD ESP,0x8                         ; 0050385b
    LEA EAX,[ESP + 0x700]               ; 0050385e
    PUSH EAX                            ; 00503865
    CALL FUN_0040d0a0                   ; 00503866
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 0050386b
    PUSH 0x1e0                          ; 0050386e
    PUSH 0x280                          ; 00503873
    PUSH 0x5e738e                       ; 00503878 | = "fangs"
    LEA EAX,[ESP + 0x70c]               ; 0050387d
    PUSH EAX                            ; 00503884
    CALL FUN_0040d220                   ; 00503885
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d220()
    ADD ESP,0x10                        ; 0050388a
    PUSH 0x8000                         ; 0050388d
    PUSH 0x0                            ; 00503892
    PUSH 0x0                            ; 00503894
    LEA EAX,[ESP + 0x70c]               ; 00503896
    PUSH EAX                            ; 0050389d
    CALL FUN_0040d4b0                   ; 0050389e
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d4b0()
    ADD ESP,0x10                        ; 005038a3
    CALL FUN_005acff0                   ; 005038a6
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acff0()
    PUSH 0x0                            ; 005038ab
    LEA EAX,[ESP + 0x704]               ; 005038ad
    PUSH EAX                            ; 005038b4
    CALL FUN_0040d0c0                   ; 005038b5
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    ADD ESP,0x8                         ; 005038ba
    MOV ESI,dword ptr [0x006236b8]      ; 005038bd | DAT_006236b8
    PUSH ESI                            ; 005038c3
    CALL FUN_0057cb30                   ; 005038c4
        ;   XREF to: 0057cb30 (UNCONDITIONAL_CALL)  ; undefined FUN_0057cb30()
    ADD ESP,0x4                         ; 005038c9
    MOV EDI,dword ptr [0x0061f650]      ; 005038cc | DAT_0061f650
    PUSH EDI                            ; 005038d2 | DAT_01d2c900
    XOR EBX,EBX                         ; 005038d3
    XOR ESI,ESI                         ; 005038d5
    CALL FUN_0051a2d0                   ; 005038d7
        ;   XREF to: 0051a2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051a2d0()
    ADD ESP,0x4                         ; 005038dc
    MOV dword ptr [ESP + 0x714],EBX     ; 005038df
        ;   Label: LAB_005038df
    FILD dword ptr [ESP + 0x714]        ; 005038e6
    FMUL double ptr [0x005e73d5]        ; 005038ed | DAT_005e73d5
    PUSH 0x0                            ; 005038f3
    FADD double ptr [0x005e73d5]        ; 005038f5 | DAT_005e73d5
    SUB ESP,0x4                         ; 005038fb
    FSTP float ptr [ESP]                ; 005038fe
    MOV EAX,dword ptr [ESI + 0x611328]  ; 00503901 | DAT_00611328 | DAT_0061132c
    PUSH EAX                            ; 00503907
    ADD ESI,0x4                         ; 00503908
    INC EBX                             ; 0050390b
    CALL FUN_0045dc30                   ; 0050390c
        ;   XREF to: 0045dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0045dc30()
    ADD ESP,0xc                         ; 00503911
    CMP EBX,0x8                         ; 00503914
    JL 0x005038df                       ; 00503917
        ;   XREF to: 005038df (CONDITIONAL_JUMP)  ; LAB_005038df
    XOR ESI,ESI                         ; 00503919
    XOR EBX,EBX                         ; 0050391b
    MOV dword ptr [ESP + 0x714],ESI     ; 0050391d
        ;   Label: LAB_0050391d
    MOV EAX,dword ptr [EBX + 0x611348]  ; 00503924 | DAT_00611348 | DAT_0061134c
    FILD dword ptr [ESP + 0x714]        ; 0050392a
    MOV dword ptr [EAX],0x100           ; 00503931 | DAT_0152c39c | DAT_0152c3e8
    FMUL double ptr [0x005e73dd]        ; 00503937 | DAT_005e73dd
    MOV EAX,dword ptr [EBX + 0x611348]  ; 0050393d | DAT_00611348 | DAT_0061134c
    PUSH 0x0                            ; 00503943
    MOV dword ptr [EAX + 0x4],0x100     ; 00503945 | DAT_0152c3a0 | DAT_0152c3ec
    FADD double ptr [0x005e73dd]        ; 0050394c | DAT_005e73dd
    SUB ESP,0x4                         ; 00503952
    FSTP float ptr [ESP]                ; 00503955
    MOV EDX,dword ptr [EBX + 0x611348]  ; 00503958 | DAT_00611348 | DAT_0061134c
    PUSH EDX                            ; 0050395e | DAT_0152c39c | DAT_0152c3e8
    ADD EBX,0x4                         ; 0050395f
    INC ESI                             ; 00503962
    CALL FUN_0045dc30                   ; 00503963
        ;   XREF to: 0045dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0045dc30()
    ADD ESP,0xc                         ; 00503968
    CMP ESI,0x4                         ; 0050396b
    JL 0x0050391d                       ; 0050396e
        ;   XREF to: 0050391d (CONDITIONAL_JUMP)  ; LAB_0050391d
    MOV ECX,dword ptr [0x00622700]      ; 00503970 | DAT_00622700
    PUSH ECX                            ; 00503976
    CALL FUN_005312c0                   ; 00503977
        ;   XREF to: 005312c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005312c0()
    ADD ESP,0x4                         ; 0050397c
    MOV EBX,dword ptr [0x00622580]      ; 0050397f | DAT_00622580
    PUSH EBX                            ; 00503985 | DAT_01d51c20
    CALL FUN_0052c520                   ; 00503986
        ;   XREF to: 0052c520 (UNCONDITIONAL_CALL)  ; undefined FUN_0052c520()
    ADD ESP,0x4                         ; 0050398b
    CALL FUN_00415c20                   ; 0050398e
        ;   XREF to: 00415c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00415c20()
    PUSH 0x5e7394                       ; 00503993 | = "0"
    PUSH 0x5e7396                       ; 00503998 | = "Flip on VBlank"
    PUSH 0x5e73a5                       ; 0050399d | = "SOFTWARE\\Matrox\\PowerDesk\\Current ..."
    CALL FUN_005b3a10                   ; 005039a2
        ;   XREF to: 005b3a10 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3a10()
    ADD ESP,0xc                         ; 005039a7
    MOV ESP,EBP                         ; 005039aa
    POP EBP                             ; 005039ac
    POP EDI                             ; 005039ad
    POP ESI                             ; 005039ae
    POP EBX                             ; 005039af
    RET                                 ; 005039b0
    PUSH EAX                            ; 005039b1
        ;   Label: LAB_005039b1
    CALL FUN_005c0d10                   ; 005039b2
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 005039b7
    PUSH 0x1c0                          ; 005039ba
    PUSH 0x5e70e0                       ; 005039bf | = "stderr.txt"
    CALL FUN_005c1dc0                   ; 005039c4
        ;   XREF to: 005c1dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1dc0()
    ADD ESP,0x8                         ; 005039c9
    TEST EAX,EAX                        ; 005039cc
    JZ 0x005032e7                       ; 005039ce
        ;   XREF to: 005032e7 (CONDITIONAL_JUMP)  ; LAB_005032e7
    MOV ESI,0x5e70eb                    ; 005039d4 | = "..\\core\\main.c"
    MOV EDI,0x3b8                       ; 005039d9
    PUSH 0x5e70fa                       ; 005039de | = "Please copy Nocturne to your hard drive"
    MOV dword ptr [0x01d1d400],ESI      ; 005039e3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005039e9 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005039ef
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005039f4
    JMP 0x005032e7                      ; 005039f7
        ;   XREF to: 005032e7 (UNCONDITIONAL_JUMP)  ; LAB_005032e7
    XOR EAX,EAX                         ; 005039fc
        ;   Label: LAB_005039fc
    MOV [0x01d06d68],EAX                ; 005039fe | DAT_01d06d68
    MOV EAX,[0x0061d95c]                ; 00503a03 | DAT_0061d95c
    MOV dword ptr [EAX],0x280           ; 00503a08 | DAT_01ccf390
    XOR EDX,EDX                         ; 00503a0e
    MOV dword ptr [EAX + 0x4],0x1e0     ; 00503a10 | DAT_01ccf394
    MOV dword ptr [0x02c83370],EDX      ; 00503a17 | DAT_02c83370
    MOV dword ptr [EAX + 0x8],0x20      ; 00503a1d | DAT_01ccf398
    CALL FUN_0050a9c0                   ; 00503a24
        ;   XREF to: 0050a9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050a9c0()
    JMP 0x005037ef                      ; 00503a29
        ;   XREF to: 005037ef (UNCONDITIONAL_JUMP)  ; LAB_005037ef

