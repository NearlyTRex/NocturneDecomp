; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f2430(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004f2340 at 004f23ab
;
; Referenced Globals:
;   TerminatedCString s_icepick_punch_wav_005e544f
;   undefined4 DAT_00622c18
;   undefined4 DAT_01e82168
;   undefined4 DAT_01fd1210
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040cc00
;   FUN_0042c010
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2430
        ;   Label: FUN_004f2430
    PUSH ESI                            ; 004f2431
    PUSH EDI                            ; 004f2432
    PUSH EBP                            ; 004f2433
    SUB ESP,0x74                        ; 004f2434
    MOV EBP,dword ptr [ESP + 0x88]      ; 004f2437
    MOV EDX,dword ptr [ESP + 0x8c]      ; 004f243e
    PUSH EDX                            ; 004f2445
    LEA EAX,[EBP + 0x158]               ; 004f2446
    PUSH EAX                            ; 004f244c
    LEA ESI,[ESP + 0x50]                ; 004f244d
    LEA EDI,[ESP + 0x44]                ; 004f2451
    CALL FUN_00569130                   ; 004f2455
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    ADD ESP,0x8                         ; 004f245a
    LEA EAX,[ESP + 0x3c]                ; 004f245d
    LEA ESI,[ESP + 0x48]                ; 004f2461
    PUSH EAX                            ; 004f2465
    MOVSD ES:EDI,ESI                    ; 004f2466
    MOVSD ES:EDI,ESI                    ; 004f2467
    MOVSD ES:EDI,ESI                    ; 004f2468
    PUSH EBP                            ; 004f2469
    LEA ESI,[ESP + 0x68]                ; 004f246a
    LEA EDI,[ESP + 0x5c]                ; 004f246e
    CALL FUN_00408b40                   ; 004f2472
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x68]                ; 004f2477
    ADD ESP,0x8                         ; 004f247b
    XOR ECX,ECX                         ; 004f247e
    MOVSD ES:EDI,ESI                    ; 004f2480
    MOVSD ES:EDI,ESI                    ; 004f2481
    MOVSD ES:EDI,ESI                    ; 004f2482
    MOV dword ptr [ESP + 0x6c],ECX      ; 004f2483
    XOR EDI,EDI                         ; 004f2487
    XOR ESI,ESI                         ; 004f2489
    MOV EAX,[0x00622c18]                ; 004f248b | DAT_00622c18 | DAT_01e82168
        ;   Label: LAB_004f248b
    CMP EDI,dword ptr [EAX + 0x14f0a8]  ; 004f2490 | DAT_01fd1210
    JGE 0x004f2522                      ; 004f2496
        ;   XREF to: 004f2522 (CONDITIONAL_JUMP)  ; LAB_004f2522
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14f0ac] ; 004f249c
    CMP EBX,EBP                         ; 004f24a3
    JNZ 0x004f24ad                      ; 004f24a5
        ;   XREF to: 004f24ad (CONDITIONAL_JUMP)  ; LAB_004f24ad
    INC EDI                             ; 004f24a7
        ;   Label: LAB_004f24a7
    ADD ESI,0x4                         ; 004f24a8
    JMP 0x004f248b                      ; 004f24ab
        ;   XREF to: 004f248b (UNCONDITIONAL_JUMP)  ; LAB_004f248b
    MOV EAX,ESP                         ; 004f24ad
        ;   Label: LAB_004f24ad
    PUSH EAX                            ; 004f24af
    CALL FUN_0042c010                   ; 004f24b0
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 004f24b5
    PUSH 0x43020000                     ; 004f24b8
    PUSH 0x42b40000                     ; 004f24bd
    CALL FUN_0040cc00                   ; 004f24c2
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x78],EAX      ; 004f24c7
    MOV EDX,0x3f000000                  ; 004f24cb
    FLD float ptr [ESP + 0x78]          ; 004f24d0
    ADD ESP,0x8                         ; 004f24d4
    MOV dword ptr [ESP + 0x2c],EDX      ; 004f24d7
    MOV EDX,ESP                         ; 004f24db
    MOV EAX,0xffffffff                  ; 004f24dd
    PUSH EDX                            ; 004f24e2
    MOV dword ptr [ESP + 0x4],EAX       ; 004f24e3
    MOV dword ptr [ESP + 0x38],EBP      ; 004f24e7
    PUSH 0x3f800000                     ; 004f24eb
    LEA EDX,[ESP + 0x5c]                ; 004f24f0
    MOV dword ptr [ESP + 0x40],EBP      ; 004f24f4
    PUSH EDX                            ; 004f24f8
    FSTP float ptr [ESP + 0x10]         ; 004f24f9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f24fd
    PUSH EBX                            ; 004f2503
    CALL dword ptr [EAX + 0x100]        ; 004f2504
    ADD ESP,0x10                        ; 004f250a
    TEST EAX,EAX                        ; 004f250d
    JZ 0x004f24a7                       ; 004f250f
        ;   XREF to: 004f24a7 (CONDITIONAL_JUMP)  ; LAB_004f24a7
    MOV dword ptr [ESP + 0x6c],0x1      ; 004f2511
    INC EDI                             ; 004f2519
    ADD ESI,0x4                         ; 004f251a
    JMP 0x004f248b                      ; 004f251d
        ;   XREF to: 004f248b (UNCONDITIONAL_JUMP)  ; LAB_004f248b
    CMP dword ptr [ESP + 0x6c],0x0      ; 004f2522
        ;   Label: LAB_004f2522
    JNZ 0x004f2531                      ; 004f2527
        ;   XREF to: 004f2531 (CONDITIONAL_JUMP)  ; LAB_004f2531
    ADD ESP,0x74                        ; 004f2529
    POP EBP                             ; 004f252c
    POP EDI                             ; 004f252d
    POP ESI                             ; 004f252e
    POP EBX                             ; 004f252f
    RET                                 ; 004f2530
    PUSH 0x5e544f                       ; 004f2531 | = "icepick-punch?.wav"
        ;   Label: LAB_004f2531
    MOV EAX,dword ptr [EBP + 0x154]     ; 004f2536
    PUSH EBP                            ; 004f253c
    CALL dword ptr [EAX + 0x2c]         ; 004f253d
    ADD ESP,0x8                         ; 004f2540
    ADD ESP,0x74                        ; 004f2543
    POP EBP                             ; 004f2546
    POP EDI                             ; 004f2547
    POP ESI                             ; 004f2548
    POP EBX                             ; 004f2549
    RET                                 ; 004f254a

