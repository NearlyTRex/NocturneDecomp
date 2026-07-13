; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00411530(int param_1)
;
;
; XREF[4]:
;   FUN_004113d0 at 004113d5
;   FUN_00411400 at 00411406
;   FUN_00411440 at 00411446
;   FUN_004114a0 at 004114f9
;
; Referenced Globals:
;   string s_CBaron_00578729
;   undefined4 DAT_005baf90
;   undefined4 DAT_005be368
;   undefined4 DAT_00764368
;   undefined4 DAT_01cc9450
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   FUN_0040d540
;   FUN_0040d890
;   FUN_004d8c60
;   FUN_004d9720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411530
        ;   Label: FUN_00411530
    PUSH ESI                            ; 00411531
    PUSH EDI                            ; 00411532
    PUSH EBP                            ; 00411533
    MOV EDI,dword ptr [ESP + 0x14]      ; 00411534
    CMP dword ptr [EDI + 0x570],0x0     ; 00411538
    JNZ 0x0041155b                      ; 0041153f
        ;   XREF to: 0041155b (CONDITIONAL_JUMP)  ; LAB_0041155b
    XOR ESI,ESI                         ; 00411541
    XOR EBX,EBX                         ; 00411543
    MOV EAX,[0x005be368]                ; 00411545 | DAT_005be368 | DAT_01e57284
        ;   Label: LAB_00411545
    CMP EBX,dword ptr [EAX + 0x14cd6c]  ; 0041154a | DAT_01fa3ff0
    JL 0x00411560                       ; 00411550
        ;   XREF to: 00411560 (CONDITIONAL_JUMP)  ; LAB_00411560
    CMP dword ptr [EDI + 0x570],0x0     ; 00411552
        ;   Label: LAB_00411552
    JZ 0x00411587                       ; 00411559
        ;   XREF to: 00411587 (CONDITIONAL_JUMP)  ; LAB_00411587
    POP EBP                             ; 0041155b
        ;   Label: LAB_0041155b
    POP EDI                             ; 0041155c
    POP ESI                             ; 0041155d
    POP EBX                             ; 0041155e
    RET                                 ; 0041155f
    MOV EBP,dword ptr [0x00764368]      ; 00411560 | DAT_00764368
        ;   Label: LAB_00411560
    PUSH EBP                            ; 00411566
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14cd70] ; 00411567 | DAT_01fa3ff4
    PUSH EDX                            ; 0041156e
    CALL FUN_0040d890                   ; 0041156f
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 00411574
    MOV dword ptr [EDI + 0x570],EAX     ; 00411577
    TEST EAX,EAX                        ; 0041157d
    JNZ 0x00411552                      ; 0041157f
        ;   XREF to: 00411552 (CONDITIONAL_JUMP)  ; LAB_00411552
    INC EBX                             ; 00411581
    ADD ESI,0x4                         ; 00411582
    JMP 0x00411545                      ; 00411585
        ;   XREF to: 00411545 (UNCONDITIONAL_JUMP)  ; LAB_00411545
    PUSH 0x578729                       ; 00411587 | = "CBaron"
        ;   Label: LAB_00411587
    CALL FUN_0040d540                   ; 0041158c
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 00411591
    PUSH EAX                            ; 00411594
    MOV EBP,dword ptr [0x005baf90]      ; 00411595 | DAT_005baf90
    PUSH EBP                            ; 0041159b | DAT_01cc9450
    MOV dword ptr [EDI + 0x570],EAX     ; 0041159c
    CALL FUN_004d9720                   ; 004115a2
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; undefined FUN_004d9720()
    ADD ESP,0x8                         ; 004115a7
    MOV EAX,dword ptr [EDI + 0x570]     ; 004115aa
    PUSH EAX                            ; 004115b0
    MOV EBX,dword ptr [EAX + 0x14c]     ; 004115b1
    CALL dword ptr [EBX]                ; 004115b7
    ADD ESP,0x4                         ; 004115b9
    MOV EAX,dword ptr [EDI + 0x570]     ; 004115bc
    PUSH EAX                            ; 004115c2
    MOV EDX,dword ptr [0x005baf90]      ; 004115c3 | DAT_005baf90
    PUSH EDX                            ; 004115c9 | DAT_01cc9450
    LEA ESI,[EDI + 0x30]                ; 004115ca
    CALL FUN_004d8c60                   ; 004115cd
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c60()
    ADD ESP,0x8                         ; 004115d2
    ADD EDI,0x20                        ; 004115d5
    PUSH ESI                            ; 004115d8
    MOV EAX,dword ptr [EDI + 0x550]     ; 004115d9
    PUSH EDI                            ; 004115df
    MOV EBX,dword ptr [EAX + 0x14c]     ; 004115e0
    PUSH EAX                            ; 004115e6
    CALL dword ptr [EBX + 0x60]         ; 004115e7
    ADD ESP,0xc                         ; 004115ea
    POP EBP                             ; 004115ed
    POP EDI                             ; 004115ee
    POP ESI                             ; 004115ef
    POP EBX                             ; 004115f0
    RET                                 ; 004115f1

