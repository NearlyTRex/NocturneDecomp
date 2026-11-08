; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_005a9440(uint param_1,LPVOID param_2,DWORD param_3)
;
;
; XREF[2]:
;   FUN_005a33b0 at 005a343f
;   FUN_005a3890 at 005a39a9
;
; Referenced Globals:
;   void* PTR_ReadFile_005b3618 = 001b4100
;   void* PTR_FUN_006079a4 = 005a7f44
;   void* PTR_FUN_006079a8 = 005a7f44
;   undefined4 DAT_00607b18
;   undefined4 DAT_00607b40
;   undefined4 DAT_00607b84
;   undefined4 DAT_00607bdc
;
; Called Functions:
;   FUN_005a7f44
;   FUN_005a92c0
;   FUN_005ab46c
;   ReadFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9440
        ;   Label: FUN_005a9440
    PUSH ESI                            ; 005a9441
    PUSH EDI                            ; 005a9442
    PUSH EBP                            ; 005a9443
    SUB ESP,0x4                         ; 005a9444
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a9447
    TEST EBX,EBX                        ; 005a944b
    JL 0x005a9457                       ; 005a944d
        ;   XREF to: 005a9457 (CONDITIONAL_JUMP)  ; LAB_005a9457
    CMP EBX,dword ptr [0x00607b84]      ; 005a944f | DAT_00607b84
    JBE 0x005a946b                      ; 005a9455
        ;   XREF to: 005a946b (CONDITIONAL_JUMP)  ; LAB_005a946b
    PUSH 0x4                            ; 005a9457
        ;   Label: LAB_005a9457
    CALL FUN_005a92c0                   ; 005a9459
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a92c0()
    MOV EAX,0xffffffff                  ; 005a945e
    ADD ESP,0x4                         ; 005a9463
    JMP 0x005a9501                      ; 005a9466
        ;   XREF to: 005a9501 (UNCONDITIONAL_JUMP)  ; LAB_005a9501
    PUSH EBX                            ; 005a946b
        ;   Label: LAB_005a946b
    CALL dword ptr [0x006079a4]         ; 005a946c | PTR_FUN_006079a4
    MOV ECX,dword ptr [0x00607b40]      ; 005a9472 | DAT_00607b40
    ADD ESP,0x4                         ; 005a9478
    TEST ECX,ECX                        ; 005a947b
    JZ 0x005a94b7                       ; 005a947d
        ;   XREF to: 005a94b7 (CONDITIONAL_JUMP)  ; LAB_005a94b7
    PUSH EBX                            ; 005a947f
    CALL dword ptr [0x00607b18]         ; 005a9480 | DAT_00607b18
    ADD ESP,0x4                         ; 005a9486
    TEST EAX,EAX                        ; 005a9489
    JZ 0x005a94b7                       ; 005a948b
        ;   XREF to: 005a94b7 (CONDITIONAL_JUMP)  ; LAB_005a94b7
    MOV EDX,dword ptr [ESP + 0x20]      ; 005a948d
    PUSH EDX                            ; 005a9491
    MOV ECX,dword ptr [ESP + 0x20]      ; 005a9492
    PUSH ECX                            ; 005a9496
    PUSH EAX                            ; 005a9497
    CALL dword ptr [0x00607b40]         ; 005a9498 | DAT_00607b40
    ADD ESP,0xc                         ; 005a949e
    PUSH EBX                            ; 005a94a1
    MOV ESI,EAX                         ; 005a94a2
    CALL dword ptr [0x006079a8]         ; 005a94a4 | PTR_FUN_006079a8
    ADD ESP,0x4                         ; 005a94aa
    MOV EAX,ESI                         ; 005a94ad
    ADD ESP,0x4                         ; 005a94af
    POP EBP                             ; 005a94b2
    POP EDI                             ; 005a94b3
    POP ESI                             ; 005a94b4
    POP EBX                             ; 005a94b5
    RET                                 ; 005a94b6
    PUSH 0x0                            ; 005a94b7
        ;   Label: LAB_005a94b7
    LEA EAX,[ESP + 0x4]                 ; 005a94b9
    PUSH EAX                            ; 005a94bd
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a94be
    PUSH EDI                            ; 005a94c2
    MOV EBP,dword ptr [ESP + 0x28]      ; 005a94c3
    MOV ESI,dword ptr [0x00607bdc]      ; 005a94c7 | DAT_00607bdc
    PUSH EBP                            ; 005a94cd
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 005a94ce
    PUSH ESI                            ; 005a94d1
    CALL dword ptr CS:[0x5b3618]        ; 005a94d2 | PTR_ReadFile_005b3618
    TEST EAX,EAX                        ; 005a94d9
    JNZ 0x005a94f4                      ; 005a94db
        ;   XREF to: 005a94f4 (CONDITIONAL_JUMP)  ; LAB_005a94f4
    PUSH EBX                            ; 005a94dd
    CALL dword ptr [0x006079a8]         ; 005a94de | PTR_FUN_006079a8
    ADD ESP,0x4                         ; 005a94e4
    CALL FUN_005ab46c                   ; 005a94e7
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined FUN_005ab46c()
    ADD ESP,0x4                         ; 005a94ec
    POP EBP                             ; 005a94ef
    POP EDI                             ; 005a94f0
    POP ESI                             ; 005a94f1
    POP EBX                             ; 005a94f2
    RET                                 ; 005a94f3
    PUSH EBX                            ; 005a94f4
        ;   Label: LAB_005a94f4
    CALL dword ptr [0x006079a8]         ; 005a94f5 | PTR_FUN_006079a8
    ADD ESP,0x4                         ; 005a94fb
    MOV EAX,dword ptr [ESP]             ; 005a94fe
    ADD ESP,0x4                         ; 005a9501
        ;   Label: LAB_005a9501
    POP EBP                             ; 005a9504
    POP EDI                             ; 005a9505
    POP ESI                             ; 005a9506
    POP EBX                             ; 005a9507
    RET                                 ; 005a9508

