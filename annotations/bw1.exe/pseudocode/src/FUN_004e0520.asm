; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0520(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01cd0d98
;
; Called Functions:
;   FUN_00568e30
;   FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0520
        ;   Label: FUN_004e0520
    PUSH EDI                            ; 004e0521
    PUSH EBP                            ; 004e0522
    MOV EBP,ESP                         ; 004e0523
    SUB ESP,0x78                        ; 004e0525
    MOV EBX,ESI                         ; 004e0528
    MOV EDX,dword ptr [0x01cd0d98]      ; 004e052a | DAT_01cd0d98
    MOV ESI,dword ptr [EBP + 0x10]      ; 004e0530
    PUSH EDX                            ; 004e0533
    ADD ESI,0x158                       ; 004e0534
    PUSH ESI                            ; 004e053a
    LEA ESI,[EBP + -0x48]               ; 004e053b
    LEA EDI,[EBP + -0x78]               ; 004e053e
    CALL FUN_00568e30                   ; 004e0541
        ;   XREF to: 00568e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e30()
    MOV ECX,0xc                         ; 004e0546
    LEA ESI,[EBP + -0x48]               ; 004e054b
    MOVSD.REP ES:EDI,ESI                ; 004e054e
    ADD ESP,0x8                         ; 004e0550
    LEA ESI,[EBP + -0x78]               ; 004e0553
    MOV EDI,0x3e99999a                  ; 004e0556
    XOR ECX,ECX                         ; 004e055b
    PUSH ESI                            ; 004e055d
    MOV ESI,0x3f333333                  ; 004e055e
    MOV dword ptr [EBP + -0x18],ECX     ; 004e0563
    MOV dword ptr [EBP + -0x14],ESI     ; 004e0566
    LEA ESI,[EBP + -0x18]               ; 004e0569
    MOV dword ptr [EBP + -0x10],EDI     ; 004e056c
    PUSH ESI                            ; 004e056f
    LEA ESI,[EBP + -0xc]                ; 004e0570
    MOV EDI,EBX                         ; 004e0573
    CALL FUN_005b5080                   ; 004e0575
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    LEA ESI,[EBP + -0xc]                ; 004e057a
    ADD ESP,0x8                         ; 004e057d
    MOVSD ES:EDI,ESI                    ; 004e0580
    MOVSD ES:EDI,ESI                    ; 004e0581
    MOVSD ES:EDI,ESI                    ; 004e0582
    MOV EAX,EBX                         ; 004e0583
    MOV ESP,EBP                         ; 004e0585
    POP EBP                             ; 004e0587
    POP EDI                             ; 004e0588
    POP EBX                             ; 004e0589
    RET                                 ; 004e058a

