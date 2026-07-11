; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df460(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_004df5b0 at 004df5ff
;
; Referenced Globals:
;   string s_..\\core\\morph.cpp_0058aaeb
;   string s_CMorphModel::addPart_-_too_many_p_0058aafd
;   string s_..\\core\\morph.cpp_0058ab24
;   string s_CMorphModel::setup_-_out_of_memo_0058ab36
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_004df660
;   FUN_004df9e0
;   FUN_00564a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df460
        ;   Label: FUN_004df460
    PUSH ESI                            ; 004df461
    PUSH EDI                            ; 004df462
    PUSH EBP                            ; 004df463
    MOV EBX,dword ptr [ESP + 0x14]      ; 004df464
    CMP dword ptr [EBX],0x5             ; 004df468
    JGE 0x004df550                      ; 004df46b
        ;   XREF to: 004df550 (CONDITIONAL_JUMP)  ; LAB_004df550
    MOV EAX,dword ptr [EBX]             ; 004df471
        ;   Label: LAB_004df471
    SHL EAX,0x4                         ; 004df473
    LEA EDX,[EBX + EAX*0x1]             ; 004df476
    MOV EAX,dword ptr [EBX + 0x54]      ; 004df479
    MOV dword ptr [EDX + 0xc],EAX       ; 004df47c
    MOV EAX,dword ptr [EBX]             ; 004df47f
    SHL EAX,0x4                         ; 004df481
    MOV EDX,dword ptr [ESP + 0x18]      ; 004df484
    MOV dword ptr [EBX + EAX*0x1 + 0x4],EDX ; 004df488
    MOV EAX,dword ptr [EBX]             ; 004df48c
    SHL EAX,0x4                         ; 004df48e
    LEA EDX,[EBX + EAX*0x1]             ; 004df491
    MOV EAX,dword ptr [EBX + 0x5c]      ; 004df494
    MOV dword ptr [EDX + 0x10],EAX      ; 004df497
    MOV EAX,dword ptr [EBX]             ; 004df49a
    SHL EAX,0x4                         ; 004df49c
    MOV EDX,dword ptr [ESP + 0x20]      ; 004df49f
    MOV dword ptr [EBX + EAX*0x1 + 0x8],EDX ; 004df4a3
    MOV EAX,dword ptr [EBX]             ; 004df4a7
    SHL EAX,0x4                         ; 004df4a9
    MOV EDI,dword ptr [EBX + 0x54]      ; 004df4ac
    ADD EDI,dword ptr [EBX + EAX*0x1 + 0x4] ; 004df4af
    MOV EAX,dword ptr [EBX]             ; 004df4b3
    MOV dword ptr [EBX + 0x54],EDI      ; 004df4b5
    SHL EAX,0x4                         ; 004df4b8
    MOV EBP,dword ptr [EBX + 0x5c]      ; 004df4bb
    ADD EBP,dword ptr [EBX + EAX*0x1 + 0x8] ; 004df4be
    MOV EAX,dword ptr [EBX + 0x54]      ; 004df4c2
    SHL EAX,0x4                         ; 004df4c5
    PUSH EAX                            ; 004df4c8
    MOV EAX,dword ptr [EBX + 0x58]      ; 004df4c9
    PUSH EAX                            ; 004df4cc
    MOV dword ptr [EBX + 0x5c],EBP      ; 004df4cd
    CALL FUN_00564a70                   ; 004df4d0
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00564a70()
    MOV dword ptr [EBX + 0x58],EAX      ; 004df4d5
    MOV EAX,dword ptr [EBX + 0x5c]      ; 004df4d8
    SHL EAX,0x2                         ; 004df4db
    MOV EDX,EAX                         ; 004df4de
    SHL EAX,0x4                         ; 004df4e0
    ADD ESP,0x8                         ; 004df4e3
    SUB EAX,EDX                         ; 004df4e6
    PUSH EAX                            ; 004df4e8
    MOV EDX,dword ptr [EBX + 0x60]      ; 004df4e9
    PUSH EDX                            ; 004df4ec
    CALL FUN_00564a70                   ; 004df4ed
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00564a70()
    ADD ESP,0x8                         ; 004df4f2
    MOV ECX,dword ptr [EBX]             ; 004df4f5
    MOV dword ptr [EBX + 0x60],EAX      ; 004df4f7
    INC ECX                             ; 004df4fa
    MOV ESI,dword ptr [EBX + 0x58]      ; 004df4fb
    MOV dword ptr [EBX],ECX             ; 004df4fe
    TEST ESI,ESI                        ; 004df500
    JNZ 0x004df578                      ; 004df502
        ;   XREF to: 004df578 (CONDITIONAL_JUMP)  ; LAB_004df578
    MOV EBP,0x58ab24                    ; 004df504 | = "..\\core\\morph.cpp"
        ;   Label: LAB_004df504
    MOV EAX,0xc5                        ; 004df509
    PUSH 0x58ab36                       ; 004df50e | = "CMorphModel::setup - out of memory!"
    MOV dword ptr [0x01cc4800],EBP      ; 004df513 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004df519 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004df51e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004df523
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004df526
        ;   Label: LAB_004df526
    TEST EDX,EDX                        ; 004df52a
    JZ 0x004df543                       ; 004df52c
        ;   XREF to: 004df543 (CONDITIONAL_JUMP)  ; LAB_004df543
    MOV ECX,dword ptr [ESP + 0x18]      ; 004df52e
    PUSH ECX                            ; 004df532
    PUSH 0x0                            ; 004df533
    MOV EAX,dword ptr [EBX]             ; 004df535
    PUSH EDX                            ; 004df537
    DEC EAX                             ; 004df538
    PUSH EAX                            ; 004df539
    PUSH EBX                            ; 004df53a
    CALL FUN_004df660                   ; 004df53b
        ;   XREF to: 004df660 (UNCONDITIONAL_CALL)  ; undefined FUN_004df660()
    ADD ESP,0x14                        ; 004df540
    MOV EDI,dword ptr [ESP + 0x24]      ; 004df543
        ;   Label: LAB_004df543
    TEST EDI,EDI                        ; 004df547
    JNZ 0x004df580                      ; 004df549
        ;   XREF to: 004df580 (CONDITIONAL_JUMP)  ; LAB_004df580
    POP EBP                             ; 004df54b
    POP EDI                             ; 004df54c
    POP ESI                             ; 004df54d
    POP EBX                             ; 004df54e
    RET                                 ; 004df54f
    MOV ECX,0x58aaeb                    ; 004df550 | = "..\\core\\morph.cpp"
        ;   Label: LAB_004df550
    MOV ESI,0xac                        ; 004df555
    PUSH 0x58aafd                       ; 004df55a | = "CMorphModel::addPart - too many parts!"
    MOV dword ptr [0x01cc4800],ECX      ; 004df55f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004df565 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004df56b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004df570
    JMP 0x004df471                      ; 004df573
        ;   XREF to: 004df471 (UNCONDITIONAL_JUMP)  ; LAB_004df471
    CMP dword ptr [EBX + 0x60],0x0      ; 004df578
        ;   Label: LAB_004df578
    JZ 0x004df504                       ; 004df57c
        ;   XREF to: 004df504 (CONDITIONAL_JUMP)  ; LAB_004df504
    JMP 0x004df526                      ; 004df57e
        ;   XREF to: 004df526 (UNCONDITIONAL_JUMP)  ; LAB_004df526
    MOV EBP,dword ptr [ESP + 0x20]      ; 004df580
        ;   Label: LAB_004df580
    PUSH EBP                            ; 004df584
    PUSH 0x0                            ; 004df585
    MOV EAX,dword ptr [ESP + 0x34]      ; 004df587
    PUSH EAX                            ; 004df58b
    MOV EDX,dword ptr [ESP + 0x34]      ; 004df58c
    PUSH EDX                            ; 004df590
    MOV EAX,dword ptr [EBX]             ; 004df591
    PUSH EDI                            ; 004df593
    DEC EAX                             ; 004df594
    PUSH EAX                            ; 004df595
    PUSH EBX                            ; 004df596
    CALL FUN_004df9e0                   ; 004df597
        ;   XREF to: 004df9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004df9e0()
    ADD ESP,0x1c                        ; 004df59c
    POP EBP                             ; 004df59f
    POP EDI                             ; 004df5a0
    POP ESI                             ; 004df5a1
    POP EBX                             ; 004df5a2
    RET                                 ; 004df5a3

