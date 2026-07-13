; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043c360(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0043c5e0 at 0043c5ed
;
; Referenced Globals:
;   undefined1* switchdataD_0043c350 = 0043c39d
;   string s_limb?.wav_0057b3ed
;   undefined4 DAT_0057b3fa
;   undefined4 DAT_0057b402
;   undefined4 DAT_0057b40a
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77600
;   undefined4 DAT_01c777cc
;
; Called Functions:
;   FUN_0040dea0
;   FUN_00415b30
;   FUN_00416d40
;   FUN_00427e40
;   FUN_00427eb0
;   FUN_0042b490
;   FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c360
        ;   Label: FUN_0043c360
    PUSH ESI                            ; 0043c361
    PUSH EDI                            ; 0043c362
    PUSH EBP                            ; 0043c363
    SUB ESP,0xc                         ; 0043c364
    MOV EBX,dword ptr [ESP + 0x20]      ; 0043c367
    MOV ESI,dword ptr [ESP + 0x24]      ; 0043c36b
    FLD float ptr [ESI + 0x2c]          ; 0043c36f
    FLDZ                                ; 0043c372
    FCOMPP                              ; 0043c374
    FNSTSW AX                           ; 0043c376
    SAHF                                ; 0043c378
    JNC 0x0043c3a5                      ; 0043c379
        ;   XREF to: 0043c3a5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0043c37b
    JNZ 0x0043c3a5                      ; 0043c37e
        ;   XREF to: 0043c3a5 (CONDITIONAL_JUMP)  ; default
    CALL FUN_0056488c                   ; 0043c380
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
    MOV EDX,EAX                         ; 0043c385
    MOV EDI,0x4                         ; 0043c387
    SAR EDX,0x1f                        ; 0043c38c
    IDIV EDI                            ; 0043c38f
    CMP EDX,0x3                         ; 0043c391
    JA 0x0043c3a5                       ; 0043c394
        ;   XREF to: 0043c3a5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x43c350]  ; 0043c396 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbd30]    ; 0043c39d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 0043c3a3
        ;   Label: LAB_0043c3a3
    MOV ECX,dword ptr [EBX + 0xbd4c]    ; 0043c3a5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0043c3ab
    CMP EAX,ECX                         ; 0043c3ad
    JNZ 0x0043c574                      ; 0043c3af
        ;   XREF to: 0043c574 (CONDITIONAL_JUMP)  ; LAB_0043c574
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0043c3b5
        ;   Label: LAB_0043c3b5
    MOV dword ptr [ESP + 0x8],EAX       ; 0043c3b8
    MOV EAX,[0x005b9354]                ; 0043c3bc | DAT_005b9354
    CMP dword ptr [EAX + 0x1e0],0x0     ; 0043c3c1 | DAT_01c777cc
    JZ 0x0043c3d2                       ; 0043c3c8
        ;   XREF to: 0043c3d2 (CONDITIONAL_JUMP)  ; LAB_0043c3d2
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0043c3ca
    MOV EAX,[0x005b9354]                ; 0043c3d2 | DAT_005b9354
        ;   Label: LAB_0043c3d2
    MOV EDX,dword ptr [EAX + 0x14]      ; 0043c3d7 | DAT_01c77600
    TEST EDX,EDX                        ; 0043c3da
    JNZ 0x0043c3e2                      ; 0043c3dc
        ;   XREF to: 0043c3e2 (CONDITIONAL_JUMP)  ; LAB_0043c3e2
    MOV dword ptr [ESP + 0x8],EDX       ; 0043c3de
    PUSH dword ptr [ESP + 0x8]          ; 0043c3e2
        ;   Label: LAB_0043c3e2
    CALL FUN_0040dea0                   ; 0043c3e6
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dea0()
    ADD ESP,0x4                         ; 0043c3eb
    TEST EAX,EAX                        ; 0043c3ee
    JZ 0x0043c52d                       ; 0043c3f0
        ;   XREF to: 0043c52d (CONDITIONAL_JUMP)  ; LAB_0043c52d
    PUSH 0x0                            ; 0043c3f6
    PUSH 0x0                            ; 0043c3f8
    PUSH 0x0                            ; 0043c3fa
    PUSH EBX                            ; 0043c3fc
    LEA EDI,[ESI + 0xc]                 ; 0043c3fd
    PUSH EDI                            ; 0043c400
    LEA EAX,[EBX + 0x30]                ; 0043c401
    PUSH EAX                            ; 0043c404
    LEA EAX,[EBX + 0x20]                ; 0043c405
    PUSH EAX                            ; 0043c408
    CALL FUN_00415b30                   ; 0043c409
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00415b30()
    ADD ESP,0x1c                        ; 0043c40e
    PUSH 0x0                            ; 0043c411
    MOV EDX,dword ptr [ESI]             ; 0043c413
    PUSH EDX                            ; 0043c415
    PUSH EAX                            ; 0043c416
    PUSH EBX                            ; 0043c417
    MOV EBP,EAX                         ; 0043c418
    CALL FUN_00427eb0                   ; 0043c41a
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427eb0()
    MOV EAX,dword ptr [ESI]             ; 0043c41f
    MOV ECX,dword ptr [EBX + 0xbd48]    ; 0043c421
    ADD ESP,0x10                        ; 0043c427
    CMP EAX,ECX                         ; 0043c42a
    JNZ 0x0043c4dd                      ; 0043c42c
        ;   XREF to: 0043c4dd (CONDITIONAL_JUMP)  ; LAB_0043c4dd
    PUSH 0x0                            ; 0043c432
    PUSH EDI                            ; 0043c434
    MOV EAX,dword ptr [EBX + 0xbd30]    ; 0043c435
    PUSH EAX                            ; 0043c43b
    PUSH EBX                            ; 0043c43c
    CALL FUN_00427e40                   ; 0043c43d
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 0043c442
    PUSH 0x0                            ; 0043c445
    PUSH EDI                            ; 0043c447
    MOV EDX,dword ptr [EBX + 0xbd34]    ; 0043c448
    PUSH EDX                            ; 0043c44e
    PUSH EBX                            ; 0043c44f
    CALL FUN_00427e40                   ; 0043c450
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 0043c455
    PUSH 0x0                            ; 0043c458
    PUSH EDI                            ; 0043c45a
    MOV ECX,dword ptr [EBX + 0xbd38]    ; 0043c45b
    PUSH ECX                            ; 0043c461
    PUSH EBX                            ; 0043c462
    CALL FUN_00427e40                   ; 0043c463
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 0043c468
    PUSH 0x0                            ; 0043c46b
    PUSH EDI                            ; 0043c46d
    MOV EAX,dword ptr [EBX + 0xbd3c]    ; 0043c46e
    PUSH EAX                            ; 0043c474
    PUSH EBX                            ; 0043c475
    CALL FUN_00427e40                   ; 0043c476
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 0043c47b
    PUSH 0x0                            ; 0043c47e
    PUSH EDI                            ; 0043c480
    MOV EDX,dword ptr [EBX + 0xbd40]    ; 0043c481
    PUSH EDX                            ; 0043c487
    PUSH EBX                            ; 0043c488
    CALL FUN_00427e40                   ; 0043c489
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 0043c48e
    PUSH 0x0                            ; 0043c491
    PUSH EDI                            ; 0043c493
    MOV ECX,dword ptr [EBX + 0xbd44]    ; 0043c494
    PUSH ECX                            ; 0043c49a
    PUSH EBX                            ; 0043c49b
    CALL FUN_00427e40                   ; 0043c49c
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 0043c4a1
    PUSH 0x0                            ; 0043c4a4
    PUSH EDI                            ; 0043c4a6
    MOV EAX,dword ptr [EBX + 0xbd4c]    ; 0043c4a7
    PUSH EAX                            ; 0043c4ad
    PUSH EBX                            ; 0043c4ae
    CALL FUN_00427e40                   ; 0043c4af
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 0043c4b4
    PUSH 0x0                            ; 0043c4b7
    PUSH EDI                            ; 0043c4b9
    MOV EDX,dword ptr [EBX + 0xbd50]    ; 0043c4ba
    PUSH EDX                            ; 0043c4c0
    PUSH EBX                            ; 0043c4c1
    CALL FUN_00427e40                   ; 0043c4c2
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 0043c4c7
    PUSH 0x0                            ; 0043c4ca
    PUSH EDI                            ; 0043c4cc
    MOV ECX,dword ptr [EBX + 0xbd54]    ; 0043c4cd
    PUSH ECX                            ; 0043c4d3
    PUSH EBX                            ; 0043c4d4
    CALL FUN_00427e40                   ; 0043c4d5
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 0043c4da
    PUSH 0x57b3ed                       ; 0043c4dd | = "limb?.wav"
        ;   Label: LAB_0043c4dd
    PUSH EBX                            ; 0043c4e2
    CALL FUN_0042b490                   ; 0043c4e3
        ;   XREF to: 0042b490 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b490()
    ADD ESP,0x8                         ; 0043c4e8
    PUSH EBP                            ; 0043c4eb
    CALL FUN_00416d40                   ; 0043c4ec
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00416d40()
    MOV EAX,dword ptr [EBX + 0xbd30]    ; 0043c4f1
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2290] ; 0043c4f7
    ADD ESP,0x4                         ; 0043c4fe
    TEST EDI,EDI                        ; 0043c501
    JZ 0x0043c5a6                       ; 0043c503
        ;   XREF to: 0043c5a6 (CONDITIONAL_JUMP)  ; LAB_0043c5a6
    MOV EAX,dword ptr [EBX + 0xbd4c]    ; 0043c509
        ;   Label: LAB_0043c509
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 0043c50f
    JZ 0x0043c5b2                       ; 0043c517
        ;   XREF to: 0043c5b2 (CONDITIONAL_JUMP)  ; LAB_0043c5b2
    FLD float ptr [ESI + 0x8]           ; 0043c51d
        ;   Label: LAB_0043c51d
    FLD ST0                             ; 0043c520
    FMUL double ptr [0x0057b3fa]        ; 0043c522 | DAT_0057b3fa
    FSTP ST1                            ; 0043c528
    FSTP float ptr [ESI + 0x8]          ; 0043c52a
    MOV EDX,dword ptr [EBX + 0xbd30]    ; 0043c52d
        ;   Label: LAB_0043c52d
    CMP EDX,dword ptr [ESI]             ; 0043c533
    JNZ 0x0043c5be                      ; 0043c535
        ;   XREF to: 0043c5be (CONDITIONAL_JUMP)  ; LAB_0043c5be
    FLD float ptr [ESI + 0x4]           ; 0043c53b
    FLD ST0                             ; 0043c53e
    FMUL double ptr [0x0057b40a]        ; 0043c540 | DAT_0057b40a
    FSTP ST1                            ; 0043c546
    FSTP float ptr [ESI + 0x4]          ; 0043c548
    ADD ESP,0xc                         ; 0043c54b
    POP EBP                             ; 0043c54e
    POP EDI                             ; 0043c54f
    POP ESI                             ; 0043c550
    POP EBX                             ; 0043c551
    RET                                 ; 0043c552
    MOV EAX,dword ptr [EBX + 0xbd4c]    ; 0043c553
        ;   Label: caseD_1
    JMP 0x0043c3a3                      ; 0043c559
        ;   XREF to: 0043c3a3 (UNCONDITIONAL_JUMP)  ; LAB_0043c3a3
    MOV EAX,dword ptr [EBX + 0xbd50]    ; 0043c55e
        ;   Label: caseD_2
    JMP 0x0043c3a3                      ; 0043c564
        ;   XREF to: 0043c3a3 (UNCONDITIONAL_JUMP)  ; LAB_0043c3a3
    MOV EAX,dword ptr [EBX + 0xbd54]    ; 0043c569
        ;   Label: caseD_3
    JMP 0x0043c3a3                      ; 0043c56f
        ;   XREF to: 0043c3a3 (UNCONDITIONAL_JUMP)  ; LAB_0043c3a3
    CMP EAX,dword ptr [EBX + 0xbd50]    ; 0043c574
        ;   Label: LAB_0043c574
    JZ 0x0043c3b5                       ; 0043c57a
        ;   XREF to: 0043c3b5 (CONDITIONAL_JUMP)  ; LAB_0043c3b5
    CMP EAX,dword ptr [EBX + 0xbd54]    ; 0043c580
    JZ 0x0043c3b5                       ; 0043c586
        ;   XREF to: 0043c3b5 (CONDITIONAL_JUMP)  ; LAB_0043c3b5
    CMP EAX,dword ptr [EBX + 0xbd30]    ; 0043c58c
    JZ 0x0043c3b5                       ; 0043c592
        ;   XREF to: 0043c3b5 (CONDITIONAL_JUMP)  ; LAB_0043c3b5
    CMP EAX,dword ptr [EBX + 0xbd48]    ; 0043c598
    JZ 0x0043c3b5                       ; 0043c59e
        ;   XREF to: 0043c3b5 (CONDITIONAL_JUMP)  ; LAB_0043c3b5
    JMP 0x0043c52d                      ; 0043c5a4
        ;   XREF to: 0043c52d (UNCONDITIONAL_JUMP)  ; LAB_0043c52d
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 0043c5a6
        ;   Label: LAB_0043c5a6
    JMP 0x0043c509                      ; 0043c5ad
        ;   XREF to: 0043c509 (UNCONDITIONAL_JUMP)  ; LAB_0043c509
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 0043c5b2
        ;   Label: LAB_0043c5b2
    JMP 0x0043c51d                      ; 0043c5b9
        ;   XREF to: 0043c51d (UNCONDITIONAL_JUMP)  ; LAB_0043c51d
    FLD float ptr [ESI + 0x4]           ; 0043c5be
        ;   Label: LAB_0043c5be
    FLD ST0                             ; 0043c5c1
    FMUL double ptr [0x0057b402]        ; 0043c5c3 | DAT_0057b402
    FSTP ST1                            ; 0043c5c9
    FSTP float ptr [ESI + 0x4]          ; 0043c5cb
    ADD ESP,0xc                         ; 0043c5ce
    POP EBP                             ; 0043c5d1
    POP EDI                             ; 0043c5d2
    POP ESI                             ; 0043c5d3
    POP EBX                             ; 0043c5d4
    RET                                 ; 0043c5d5

