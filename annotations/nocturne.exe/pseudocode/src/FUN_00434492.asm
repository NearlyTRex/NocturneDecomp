; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00434492(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004341dc = 0043453b
;   undefined1* PTR_caseD_1_004341e0 = 0043479d
;   undefined1* PTR_caseD_3_004341e8 = 00434565
;   string caseD_0
;   undefined4 caseD_3
;   undefined4 caseD_1
;   string caseD_2
;   undefined4 DAT_00767b3c
;   undefined4 DAT_00767b40
;   undefined4 DAT_00767b4c
;   undefined1 DAT_00767b50
;   undefined4 DAT_00767b51
;   undefined4 DAT_00767b54
;   undefined4 DAT_00767b7c
;   undefined4 DAT_00767b84
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 00434492
        ;   Label: FUN_00434492
    MOV ESI,EDX                         ; 00434498
    ADD EDI,0x767b4c                    ; 0043449a | DAT_00767b4c
    PUSH EDI                            ; 004344a0
    MOV EAX,ECX                         ; 004344a1
    SHR ECX,0x2                         ; 004344a3
    MOVSD.REP ES:EDI,ESI                ; 004344a6 | DAT_00767b4c | DAT_00767b50
    MOV CL,AL                           ; 004344a8
    AND CL,0x3                          ; 004344aa
    MOVSB.REP ES:EDI,ESI                ; 004344ad | DAT_00767b50 | DAT_00767b51
    POP EDI                             ; 004344af
    INC dword ptr [0x00767b40]          ; 004344b0 | DAT_00767b40
    MOV EAX,dword ptr [ESP + 0x18]      ; 004344b6
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x00767b3c]      ; 004344ba | DAT_00767b3c
    INC EAX                             ; 004344c0
    ADD EBX,0x30                        ; 004344c1
    MOV dword ptr [ESP + 0x18],EAX      ; 004344c4
    CMP EAX,EDX                         ; 004344c8
    JL 0x00434449                       ; 004344ca
        ;   XREF to: 00434449 (CONDITIONAL_JUMP)  ; LAB_00434449
    MOV ECX,dword ptr [0x00767b40]      ; 004344d0 | DAT_00767b40
        ;   Label: LAB_004344d0
    CMP ECX,0x3                         ; 004344d6
    JL 0x00434714                       ; 004344d9
        ;   XREF to: 00434714 (CONDITIONAL_JUMP)  ; LAB_00434714
    XOR EBX,EBX                         ; 004344df
    MOV dword ptr [ESP + 0xc],EBX       ; 004344e1
    TEST ECX,ECX                        ; 004344e5
    JLE 0x0043457f                      ; 004344e7
        ;   XREF to: 0043457f (CONDITIONAL_JUMP)  ; LAB_0043457f
    MOV EBX,0x767b4c                    ; 004344ed | DAT_00767b4c
    MOV EAX,dword ptr [ESP + 0xc]       ; 004344f2
        ;   Label: LAB_004344f2
    MOV EBP,dword ptr [0x00767b40]      ; 004344f6 | DAT_00767b40
    INC EAX                             ; 004344fc
    CMP EAX,EBP                         ; 004344fd
    JNZ 0x00434503                      ; 004344ff
        ;   XREF to: 00434503 (CONDITIONAL_JUMP)  ; LAB_00434503
    XOR EAX,EBP                         ; 00434501
    IMUL EAX,EAX,0x30                   ; 00434503
        ;   Label: LAB_00434503
    MOV EBP,0x767b4c                    ; 00434506 | DAT_00767b4c
    MOV EDX,EBX                         ; 0043450b
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043450d | DAT_00767b54 | DAT_00767b84
    MOV ESI,dword ptr [EBX]             ; 00434510 | DAT_00767b4c | DAT_00767b7c
    NEG ECX                             ; 00434512
    ADD EBP,EAX                         ; 00434514
    XOR EAX,EAX                         ; 00434516
    CMP ECX,ESI                         ; 00434518
    JL 0x00434521                       ; 0043451a
        ;   XREF to: 00434521 (CONDITIONAL_JUMP)  ; LAB_00434521
    MOV EAX,0x1                         ; 0043451c
    MOV ECX,dword ptr [EBP + 0x8]       ; 00434521 | DAT_00767b54
        ;   Label: LAB_00434521
    MOV EDI,dword ptr [EBP]             ; 00434524 | DAT_00767b4c
    NEG ECX                             ; 00434527
    CMP ECX,EDI                         ; 00434529
    JL 0x0043452f                       ; 0043452b
        ;   XREF to: 0043452f (CONDITIONAL_JUMP)  ; LAB_0043452f
    OR AL,0x2                           ; 0043452d
    CMP EAX,0x3                         ; 0043452f
        ;   Label: LAB_0043452f
    JA 0x00434565                       ; 00434532
        ;   XREF to: 00434565 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4341dc]  ; 00434534 | = "k=D{v" | caseD_1 | caseD_2
        ;   Label: switchD

