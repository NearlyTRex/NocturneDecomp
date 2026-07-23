; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_saveState_FUN_00481330(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004a3b90 at 004a3d18
;
; Referenced Globals:
;   TerminatedCString s_CEventList_version_00580d9b
;   TerminatedCString s_d_00580db2
;   TerminatedCString s_eventCount_list_00580db6
;   TerminatedCString s_d_00580dcb
;   TerminatedCString s_s_00580dcf
;   TerminatedCString s_currentEventCount_list_00580dd3
;   TerminatedCString s_d_00580def
;   TerminatedCString s_s_00580df3
;   TerminatedCString s_persistentEventCount_lis_00580df7
;   TerminatedCString s_d_00580e16
;   TerminatedCString s_s_00580e1a
;   TerminatedCString s_timerCount_list_duration_00580e1e
;   TerminatedCString s_d_00580e43
;   TerminatedCString s_f_s_00580e47
;   TerminatedCString s_counterCount_list_value_00580e4f
;   ... and 8 more
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481330
        ;   Label: core_event.cpp_CEventList_saveState_FUN_00481330
    PUSH ESI                            ; 00481331
    PUSH EDI                            ; 00481332
    PUSH EBP                            ; 00481333
    SUB ESP,0xc                         ; 00481334
    MOV EBX,dword ptr [ESP + 0x20]      ; 00481337
    MOV ESI,dword ptr [ESP + 0x24]      ; 0048133b
    PUSH 0x580d9b                       ; 0048133f | = "// CEventList version\n"
    PUSH ESI                            ; 00481344
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00481345
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0048134a
    PUSH 0x5                            ; 0048134d
    PUSH 0x580db2                       ; 0048134f | = "%d\n"
    PUSH ESI                            ; 00481354
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00481355
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0048135a
    PUSH 0x580db6                       ; 0048135d | = "// eventCount, list\n"
    PUSH ESI                            ; 00481362
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00481363
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 00481368
    MOV EDX,dword ptr [EBX]             ; 0048136b
    PUSH EDX                            ; 0048136d
    PUSH 0x580dcb                       ; 0048136e | = "%d\n"
    PUSH ESI                            ; 00481373
    XOR EBP,EBP                         ; 00481374
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00481376
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ECX,dword ptr [EBX]             ; 0048137b
    ADD ESP,0xc                         ; 0048137d
    TEST ECX,ECX                        ; 00481380
    JLE 0x004813a0                      ; 00481382
        ;   XREF to: 004813a0 (CONDITIONAL_JUMP)  ; LAB_004813a0
    LEA EDI,[EBX + 0x4]                 ; 00481384
    PUSH EDI                            ; 00481387
        ;   Label: LAB_00481387
    PUSH 0x580dcf                       ; 00481388 | = "%s\n"
    PUSH ESI                            ; 0048138d
    INC EBP                             ; 0048138e
    ADD EDI,0x20                        ; 0048138f
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00481392
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,dword ptr [EBX]             ; 00481397
    ADD ESP,0xc                         ; 00481399
    CMP EBP,EAX                         ; 0048139c
    JL 0x00481387                       ; 0048139e
        ;   XREF to: 00481387 (CONDITIONAL_JUMP)  ; LAB_00481387
    PUSH 0x580dd3                       ; 004813a0 | = "// currentEventCount, list\n"
        ;   Label: LAB_004813a0
    PUSH ESI                            ; 004813a5
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004813a6
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004813ab
    MOV EDX,dword ptr [EBX + 0xc84]     ; 004813ae
    PUSH EDX                            ; 004813b4
    PUSH 0x580def                       ; 004813b5 | = "%d\n"
    PUSH ESI                            ; 004813ba
    XOR EDI,EDI                         ; 004813bb
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004813bd
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ECX,dword ptr [EBX + 0xc84]     ; 004813c2
    ADD ESP,0xc                         ; 004813c8
    TEST ECX,ECX                        ; 004813cb
    JLE 0x00481400                      ; 004813cd
        ;   XREF to: 00481400 (CONDITIONAL_JUMP)  ; LAB_00481400
    LEA EBP,[EBX + 0xc88]               ; 004813cf
    PUSH EBP                            ; 004813d5
        ;   Label: LAB_004813d5
    PUSH 0x580df3                       ; 004813d6 | = "%s\n"
    PUSH ESI                            ; 004813db
    INC EDI                             ; 004813dc
    ADD EBP,0x20                        ; 004813dd
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004813e0
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,dword ptr [EBX + 0xc84]     ; 004813e5
    ADD ESP,0xc                         ; 004813eb
    CMP EDI,EAX                         ; 004813ee
    JL 0x004813d5                       ; 004813f0
        ;   XREF to: 004813d5 (CONDITIONAL_JUMP)  ; LAB_004813d5
    LEA EAX,[EAX]                       ; 004813f2
    LEA EDX,[EDX]                       ; 004813f8
    MOV EAX,EAX                         ; 004813fe
    PUSH 0x580df7                       ; 00481400 | = "// persistentEventCount, list\n"
        ;   Label: LAB_00481400
    PUSH ESI                            ; 00481405
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00481406
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0048140b
    MOV EDX,dword ptr [EBX + 0x258c]    ; 0048140e
    PUSH EDX                            ; 00481414
    PUSH 0x580e16                       ; 00481415 | = "%d\n"
    PUSH ESI                            ; 0048141a
    XOR EBP,EBP                         ; 0048141b
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0048141d
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ECX,dword ptr [EBX + 0x258c]    ; 00481422
    ADD ESP,0xc                         ; 00481428
    TEST ECX,ECX                        ; 0048142b
    JLE 0x00481460                      ; 0048142d
        ;   XREF to: 00481460 (CONDITIONAL_JUMP)  ; LAB_00481460
    LEA EDI,[EBX + 0x2590]              ; 0048142f
    PUSH EDI                            ; 00481435
        ;   Label: LAB_00481435
    PUSH 0x580e1a                       ; 00481436 | = "%s\n"
    PUSH ESI                            ; 0048143b
    INC EBP                             ; 0048143c
    ADD EDI,0x20                        ; 0048143d
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00481440
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,dword ptr [EBX + 0x258c]    ; 00481445
    ADD ESP,0xc                         ; 0048144b
    CMP EBP,EAX                         ; 0048144e
    JL 0x00481435                       ; 00481450
        ;   XREF to: 00481435 (CONDITIONAL_JUMP)  ; LAB_00481435
    LEA EAX,[EAX]                       ; 00481452
    LEA EDX,[EDX]                       ; 00481458
    MOV EAX,EAX                         ; 0048145e
    PUSH 0x580e1e                       ; 00481460 | = "// timerCount, list(duration, name)\n"
        ;   Label: LAB_00481460
    PUSH ESI                            ; 00481465
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00481466
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0048146b
    MOV EDX,dword ptr [EBX + 0x3210]    ; 0048146e
    PUSH EDX                            ; 00481474
    PUSH 0x580e43                       ; 00481475 | = "%d\n"
    PUSH ESI                            ; 0048147a
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0048147b
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 00481480
    XOR ECX,ECX                         ; 00481483
    MOV EDI,dword ptr [EBX + 0x3210]    ; 00481485
    MOV dword ptr [ESP + 0x4],ECX       ; 0048148b
    TEST EDI,EDI                        ; 0048148f
    JLE 0x004814d0                      ; 00481491
        ;   XREF to: 004814d0 (CONDITIONAL_JUMP)  ; LAB_004814d0
    LEA EBP,[EBX + 0x3214]              ; 00481493
    MOV EDI,EBX                         ; 00481499
    PUSH EBP                            ; 0048149b
        ;   Label: LAB_0048149b
    SUB ESP,0x8                         ; 0048149c
    FLD float ptr [EDI + 0x3354]        ; 0048149f
    FSTP double ptr [ESP]               ; 004814a5
    PUSH 0x580e47                       ; 004814a8 | = "%f, %s\n"
    PUSH ESI                            ; 004814ad
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004814ae
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x14                        ; 004814b3
    ADD EDI,0x4                         ; 004814b6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004814b9
    ADD EBP,0x20                        ; 004814bd
    INC EAX                             ; 004814c0
    MOV EDX,dword ptr [EBX + 0x3210]    ; 004814c1
    MOV dword ptr [ESP + 0x4],EAX       ; 004814c7
    CMP EAX,EDX                         ; 004814cb
    JL 0x0048149b                       ; 004814cd
        ;   XREF to: 0048149b (CONDITIONAL_JUMP)  ; LAB_0048149b
    NOP                                 ; 004814cf
    PUSH 0x580e4f                       ; 004814d0 | = "// counterCount, list(value, name)\n"
        ;   Label: LAB_004814d0
    PUSH ESI                            ; 004814d5
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004814d6
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004814db
    MOV ECX,dword ptr [EBX + 0x337c]    ; 004814de
    PUSH ECX                            ; 004814e4
    PUSH 0x580e73                       ; 004814e5 | = "%d\n"
    PUSH ESI                            ; 004814ea
    XOR EDI,EDI                         ; 004814eb
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004814ed
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004814f2
    MOV EBP,dword ptr [EBX + 0x337c]    ; 004814f5
    MOV dword ptr [ESP + 0x8],EDI       ; 004814fb
    TEST EBP,EBP                        ; 004814ff
    JLE 0x00481540                      ; 00481501
        ;   XREF to: 00481540 (CONDITIONAL_JUMP)  ; LAB_00481540
    LEA EDI,[EBX + 0x3380]              ; 00481503
    MOV EBP,EBX                         ; 00481509
    PUSH EDI                            ; 0048150b
        ;   Label: LAB_0048150b
    MOV EAX,dword ptr [EBP + 0x34c0]    ; 0048150c
    PUSH EAX                            ; 00481512
    PUSH 0x580e77                       ; 00481513 | = "%d, %s\n"
    PUSH ESI                            ; 00481518
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00481519
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 0048151e
    ADD EBP,0x4                         ; 00481521
    MOV EDX,dword ptr [ESP + 0x8]       ; 00481524
    ADD EDI,0x20                        ; 00481528
    INC EDX                             ; 0048152b
    MOV ECX,dword ptr [EBX + 0x337c]    ; 0048152c
    MOV dword ptr [ESP + 0x8],EDX       ; 00481532
    CMP EDX,ECX                         ; 00481536
    JL 0x0048150b                       ; 00481538
        ;   XREF to: 0048150b (CONDITIONAL_JUMP)  ; LAB_0048150b
    LEA EAX,[EAX]                       ; 0048153a
    PUSH 0x580e7f                       ; 00481540 | = "// actorVarCount, list(varName, actor..."
        ;   Label: LAB_00481540
    PUSH ESI                            ; 00481545
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00481546
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0048154b
    MOV EDI,dword ptr [EBX + 0x34e8]    ; 0048154e
    PUSH EDI                            ; 00481554
    PUSH 0x580eab                       ; 00481555 | = "%d\n"
    PUSH ESI                            ; 0048155a
    XOR EBP,EBP                         ; 0048155b
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0048155d
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 00481562
    ADD ESP,0xc                         ; 00481568
    TEST EAX,EAX                        ; 0048156b
    JLE 0x004815b0                      ; 0048156d
        ;   XREF to: 004815b0 (CONDITIONAL_JUMP)  ; LAB_004815b0
    LEA EAX,[EBX + 0x37da]              ; 0048156f
    LEA EDI,[EBX + 0x34ec]              ; 00481575
    MOV dword ptr [ESP],EAX             ; 0048157b
    MOV EDX,dword ptr [ESP]             ; 0048157e
        ;   Label: LAB_0048157e
    PUSH EDX                            ; 00481581
    PUSH EDI                            ; 00481582
    PUSH 0x580eaf                       ; 00481583 | = "\"%s\", \"%s\"\n"
    PUSH ESI                            ; 00481588
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00481589
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 0048158e
    INC EBP                             ; 00481591
    MOV ECX,dword ptr [ESP]             ; 00481592
    ADD EDI,0x1e                        ; 00481595
    ADD ECX,0x1e                        ; 00481598
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 0048159b
    MOV dword ptr [ESP],ECX             ; 004815a1
    CMP EBP,EAX                         ; 004815a4
    JL 0x0048157e                       ; 004815a6
        ;   XREF to: 0048157e (CONDITIONAL_JUMP)  ; LAB_0048157e
    LEA EAX,[EAX]                       ; 004815a8
    MOV EDX,EDX                         ; 004815ae
    PUSH 0x580ebb                       ; 004815b0 | = "// gameFlagCount, list\n"
        ;   Label: LAB_004815b0
    PUSH ESI                            ; 004815b5
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004815b6
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004815bb
    MOV EDX,dword ptr [EBX + 0x1908]    ; 004815be
    PUSH EDX                            ; 004815c4
    PUSH 0x580ed3                       ; 004815c5 | = "%d\n"
    PUSH ESI                            ; 004815ca
    XOR EBP,EBP                         ; 004815cb
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004815cd
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ECX,dword ptr [EBX + 0x1908]    ; 004815d2
    ADD ESP,0xc                         ; 004815d8
    TEST ECX,ECX                        ; 004815db
    JLE 0x00481610                      ; 004815dd
        ;   XREF to: 00481610 (CONDITIONAL_JUMP)  ; LAB_00481610
    LEA EDI,[EBX + 0x190c]              ; 004815df
    PUSH EDI                            ; 004815e5
        ;   Label: LAB_004815e5
    PUSH 0x580ed7                       ; 004815e6 | = "%s\n"
    PUSH ESI                            ; 004815eb
    INC EBP                             ; 004815ec
    ADD EDI,0x20                        ; 004815ed
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004815f0
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,dword ptr [EBX + 0x1908]    ; 004815f5
    ADD ESP,0xc                         ; 004815fb
    CMP EBP,EAX                         ; 004815fe
    JL 0x004815e5                       ; 00481600
        ;   XREF to: 004815e5 (CONDITIONAL_JUMP)  ; LAB_004815e5
    LEA EAX,[EAX]                       ; 00481602
    LEA EDX,[EDX]                       ; 00481608
    MOV EAX,EAX                         ; 0048160e
    ADD ESP,0xc                         ; 00481610
        ;   Label: LAB_00481610
    POP EBP                             ; 00481613
    POP EDI                             ; 00481614
    POP ESI                             ; 00481615
    POP EBX                             ; 00481616
    RET                                 ; 00481617

