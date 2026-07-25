; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004673e0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Consolidating_raytrace_g_0057e055
;   undefined4 DAT_005b6d50
;
; Called Functions:
;   FUN_00467560
;   FUN_004675e0
;   FUN_004720c0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004673e0
        ;   Label: FUN_004673e0
    PUSH ESI                            ; 004673e1
    PUSH EDI                            ; 004673e2
    PUSH EBP                            ; 004673e3
    SUB ESP,0x10                        ; 004673e4
    MOV EBX,dword ptr [ESP + 0x24]      ; 004673e7
    PUSH 0x57e055                       ; 004673eb | = "Consolidating raytrace geometry array..."
    MOV EDX,dword ptr [0x005b6d50]      ; 004673f0 | DAT_005b6d50
    PUSH EDX                            ; 004673f6
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660 ; 004673f7
        ;   XREF to: 00471660 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660()
    ADD ESP,0x8                         ; 004673fc
    PUSH EBX                            ; 004673ff
    CALL FUN_004675e0                   ; 00467400
        ;   XREF to: 004675e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004675e0()
    ADD ESP,0x4                         ; 00467405
    MOV dword ptr [EBX + 0x4],0x0       ; 00467408
    XOR EAX,EAX                         ; 0046740f
    XOR EDX,EDX                         ; 00467411
    MOV ECX,dword ptr [EBX + 0x44]      ; 00467413
        ;   Label: LAB_00467413
    MOV EBP,dword ptr [EBX + 0x40]      ; 00467416
    IMUL EBP,ECX                        ; 00467419
    IMUL EBP,dword ptr [EBX + 0x48]     ; 0046741c
    CMP EAX,EBP                         ; 00467420
    JGE 0x00467438                      ; 00467422
        ;   XREF to: 00467438 (CONDITIONAL_JUMP)  ; LAB_00467438
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00467424
    MOV ESI,dword ptr [EBX + 0x4]       ; 00467427
    MOV ECX,dword ptr [ECX + EDX*0x1]   ; 0046742a
    ADD EDX,0x58                        ; 0046742d
    ADD ESI,ECX                         ; 00467430
    INC EAX                             ; 00467432
    MOV dword ptr [EBX + 0x4],ESI       ; 00467433
    JMP 0x00467413                      ; 00467436
        ;   XREF to: 00467413 (UNCONDITIONAL_JUMP)  ; LAB_00467413
    PUSH EBX                            ; 00467438
        ;   Label: LAB_00467438
    CALL FUN_00467560                   ; 00467439
        ;   XREF to: 00467560 (UNCONDITIONAL_CALL)  ; undefined FUN_00467560()
    XOR EDI,EDI                         ; 0046743e
    ADD ESP,0x4                         ; 00467440
    MOV dword ptr [ESP + 0x8],EDI       ; 00467443
    MOV dword ptr [ESP + 0x4],EDI       ; 00467447
    MOV dword ptr [ESP],EDI             ; 0046744b
    MOV EDI,dword ptr [EBX + 0x44]      ; 0046744e
        ;   Label: LAB_0046744e
    MOV EBP,dword ptr [EBX + 0x40]      ; 00467451
    IMUL EBP,EDI                        ; 00467454
    IMUL EBP,dword ptr [EBX + 0x48]     ; 00467457
    CMP EBP,dword ptr [ESP + 0x4]       ; 0046745b
    JLE 0x00467547                      ; 0046745f
        ;   XREF to: 00467547 (CONDITIONAL_JUMP)  ; LAB_00467547
    MOV ECX,dword ptr [ESP]             ; 00467465
    MOV EBP,dword ptr [EBX + 0x4c]      ; 00467468
    ADD EBP,ECX                         ; 0046746b
    MOV ESI,dword ptr [EBP]             ; 0046746d
    TEST ESI,ESI                        ; 00467470
    JLE 0x004674f8                      ; 00467472
        ;   XREF to: 004674f8 (CONDITIONAL_JUMP)  ; LAB_004674f8
    IMUL ECX,ESI,0x38                   ; 00467478
    IMUL EDI,dword ptr [ESP + 0x8],0x38 ; 0046747b
    MOV EAX,dword ptr [EBX + 0x8]       ; 00467480
    MOV ESI,dword ptr [EBP + 0x4]       ; 00467483
    ADD EDI,EAX                         ; 00467486
    MOV EDX,dword ptr [ESP + 0x8]       ; 00467488
    PUSH EDI                            ; 0046748c
    MOV EAX,ECX                         ; 0046748d
    SHR ECX,0x2                         ; 0046748f
    MOVSD.REP ES:EDI,ESI                ; 00467492
    MOV CL,AL                           ; 00467494
    AND CL,0x3                          ; 00467496
    MOVSB.REP ES:EDI,ESI                ; 00467499
    POP EDI                             ; 0046749b
    MOV ECX,dword ptr [EBP]             ; 0046749c
    MOV EDI,dword ptr [EBX + 0xc]       ; 0046749f
    MOV ESI,dword ptr [EBP + 0x54]      ; 004674a2
    ADD EDI,EDX                         ; 004674a5
    PUSH EDI                            ; 004674a7
    MOV EAX,ECX                         ; 004674a8
    SHR ECX,0x2                         ; 004674aa
    MOVSD.REP ES:EDI,ESI                ; 004674ad
    MOV CL,AL                           ; 004674af
    AND CL,0x3                          ; 004674b1
    MOVSB.REP ES:EDI,ESI                ; 004674b4
    POP EDI                             ; 004674b6
    MOV EAX,dword ptr [EBP + 0x4]       ; 004674b7
    TEST EAX,EAX                        ; 004674ba
    JZ 0x004674ca                       ; 004674bc
        ;   XREF to: 004674ca (CONDITIONAL_JUMP)  ; LAB_004674ca
    SUB EAX,0x4                         ; 004674be
    PUSH EAX                            ; 004674c1
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004674c2
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004674c7
    MOV ECX,dword ptr [EBP + 0x54]      ; 004674ca
        ;   Label: LAB_004674ca
    PUSH ECX                            ; 004674cd
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004674ce
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004674d3
    MOV ESI,dword ptr [ESP + 0x8]       ; 004674d6
    IMUL EDX,ESI,0x38                   ; 004674da
    MOV EAX,dword ptr [EBX + 0x8]       ; 004674dd
    ADD EAX,EDX                         ; 004674e0
    MOV dword ptr [EBP + 0x4],EAX       ; 004674e2
    MOV EAX,dword ptr [EBX + 0xc]       ; 004674e5
    LEA EDX,[ESI + EAX*0x1]             ; 004674e8
    MOV EAX,dword ptr [EBP]             ; 004674eb
    LEA EDI,[ESI + EAX*0x1]             ; 004674ee
    MOV dword ptr [EBP + 0x54],EDX      ; 004674f1
    MOV dword ptr [ESP + 0x8],EDI       ; 004674f4
    MOV EBP,dword ptr [EBX + 0x40]      ; 004674f8
        ;   Label: LAB_004674f8
    IMUL EBP,dword ptr [EBX + 0x44]     ; 004674fb
    MOV EDX,dword ptr [EBX + 0x48]      ; 004674ff
    IMUL EBP,EDX                        ; 00467502
    MOV dword ptr [ESP + 0xc],EBP       ; 00467505
    FILD dword ptr [ESP + 0xc]          ; 00467509
    SUB ESP,0x4                         ; 0046750d
    MOV EDI,dword ptr [ESP + 0x8]       ; 00467510
    INC EDI                             ; 00467514
    MOV dword ptr [ESP + 0x10],EDI      ; 00467515
    FSTP float ptr [ESP]                ; 00467519
    FILD dword ptr [ESP + 0x10]         ; 0046751c
    SUB ESP,0x4                         ; 00467520
    MOV ECX,dword ptr [0x005b6d50]      ; 00467523 | DAT_005b6d50
    FSTP float ptr [ESP]                ; 00467529
    PUSH ECX                            ; 0046752c
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760 ; 0046752d
        ;   XREF to: 00471760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760()
    ADD ESP,0xc                         ; 00467532
    MOV ESI,dword ptr [ESP]             ; 00467535
    ADD ESI,0x58                        ; 00467538
    MOV dword ptr [ESP + 0x4],EDI       ; 0046753b
    MOV dword ptr [ESP],ESI             ; 0046753f
    JMP 0x0046744e                      ; 00467542
        ;   XREF to: 0046744e (UNCONDITIONAL_JUMP)  ; LAB_0046744e
    MOV EDI,dword ptr [0x005b6d50]      ; 00467547 | DAT_005b6d50
        ;   Label: LAB_00467547
    PUSH EDI                            ; 0046754d
    CALL FUN_004720c0                   ; 0046754e
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004720c0()
    ADD ESP,0x4                         ; 00467553
    ADD ESP,0x10                        ; 00467556
    POP EBP                             ; 00467559
    POP EDI                             ; 0046755a
    POP ESI                             ; 0046755b
    POP EBX                             ; 0046755c
    RET                                 ; 0046755d

