; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_1000bbc0(int param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_1000bd68 = 1000bbf1
;   undefined4 PTR_caseD_3_1000bd84+2
;   undefined4 DAT_10017748
;   undefined4 DAT_1001774c
;   undefined4 DAT_100178f8
;   undefined4 DAT_100178fc
;   undefined4 DAT_10017900
;   undefined4 DAT_10017904
;
; Called Functions:
;   __exit
;   __getptd
;   __lock
;   FUN_10005a10
;   FUN_1000bda0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 1000bbc0
        ;   Label: FUN_1000bbc0
    PUSH EBX                            ; 1000bbc3
    PUSH ESI                            ; 1000bbc4
    PUSH EDI                            ; 1000bbc5
    XOR EBX,EBX                         ; 1000bbc6
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000bbc8
    PUSH EBP                            ; 1000bbcc
    LEA EAX,[EDI + -0x2]                ; 1000bbcd
    CMP EAX,0x14                        ; 1000bbd0
    JA 0x1000bbe4                       ; 1000bbd3
        ;   XREF to: 1000bbe4 (CONDITIONAL_JUMP)  ; caseD_14
    XOR ECX,ECX                         ; 1000bbd5
    MOV CL,byte ptr [EAX + 0x1000bd88]  ; 1000bbd7 | PTR_caseD_3_1000bd84+2
    JMP dword ptr [ECX*0x4 + 0x1000bd68] ; 1000bbdd | caseD_2 | caseD_14 | caseD_b
        ;   Label: switchD
    MOV EAX,0xffffffff                  ; 1000bbe4
        ;   Label: caseD_3
    POP EBP                             ; 1000bbe9
    POP EDI                             ; 1000bbea
    POP ESI                             ; 1000bbeb
    POP EBX                             ; 1000bbec
    ADD ESP,0xc                         ; 1000bbed
    RET                                 ; 1000bbf0
    MOV dword ptr [ESP + 0x10],0x100178f8 ; 1000bbf1 | DAT_100178f8
        ;   Label: caseD_2
    MOV ESI,dword ptr [0x100178f8]      ; 1000bbf9 | DAT_100178f8
    JMP 0x1000bc4f                      ; 1000bbff
        ;   XREF to: 1000bc4f (UNCONDITIONAL_JUMP)  ; LAB_1000bc4f
    CALL __getptd                       ; 1000bc01
        ;   XREF to: 100077b0 (UNCONDITIONAL_CALL)  ; _ptiddata __getptd()
        ;   Label: caseD_4
    MOV EBP,EAX                         ; 1000bc06
    MOV EAX,dword ptr [EAX + 0x50]      ; 1000bc08
    PUSH EAX                            ; 1000bc0b
    PUSH EDI                            ; 1000bc0c
    CALL FUN_1000bda0                   ; 1000bc0d
        ;   XREF to: 1000bda0 (UNCONDITIONAL_CALL)  ; undefined FUN_1000bda0()
    MOV ESI,dword ptr [EAX + 0x8]       ; 1000bc12
    ADD ESP,0x8                         ; 1000bc15
    ADD EAX,0x8                         ; 1000bc18
    MOV dword ptr [ESP + 0x10],EAX      ; 1000bc1b
    JMP 0x1000bc58                      ; 1000bc1f
        ;   XREF to: 1000bc58 (UNCONDITIONAL_JUMP)  ; LAB_1000bc58
    MOV dword ptr [ESP + 0x10],0x10017904 ; 1000bc21 | DAT_10017904
        ;   Label: caseD_f
    MOV ESI,dword ptr [0x10017904]      ; 1000bc29 | DAT_10017904
    JMP 0x1000bc4f                      ; 1000bc2f
        ;   XREF to: 1000bc4f (UNCONDITIONAL_JUMP)  ; LAB_1000bc4f
    MOV dword ptr [ESP + 0x10],0x100178fc ; 1000bc31 | DAT_100178fc
        ;   Label: caseD_15
    MOV ESI,dword ptr [0x100178fc]      ; 1000bc39 | DAT_100178fc
    JMP 0x1000bc4f                      ; 1000bc3f
        ;   XREF to: 1000bc4f (UNCONDITIONAL_JUMP)  ; LAB_1000bc4f
    MOV dword ptr [ESP + 0x10],0x10017900 ; 1000bc41 | DAT_10017900
        ;   Label: caseD_16
    MOV ESI,dword ptr [0x10017900]      ; 1000bc49 | DAT_10017900
    MOV EBX,0x1                         ; 1000bc4f
        ;   Label: LAB_1000bc4f
    MOV EBP,dword ptr [ESP + 0x14]      ; 1000bc54
    TEST EBX,EBX                        ; 1000bc58
        ;   Label: LAB_1000bc58
    JZ 0x1000bc66                       ; 1000bc5a
        ;   XREF to: 1000bc66 (CONDITIONAL_JUMP)  ; LAB_1000bc66
    PUSH 0x1                            ; 1000bc5c
    CALL __lock                         ; 1000bc5e
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 1000bc63
    CMP ESI,0x1                         ; 1000bc66
        ;   Label: LAB_1000bc66
    JNZ 0x1000bc83                      ; 1000bc69
        ;   XREF to: 1000bc83 (CONDITIONAL_JUMP)  ; LAB_1000bc83
    TEST EBX,EBX                        ; 1000bc6b
    JZ 0x1000bc79                       ; 1000bc6d
        ;   XREF to: 1000bc79 (CONDITIONAL_JUMP)  ; LAB_1000bc79
    PUSH 0x1                            ; 1000bc6f
    CALL FUN_10005a10                   ; 1000bc71
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000bc76
    XOR EAX,EAX                         ; 1000bc79
        ;   Label: LAB_1000bc79
    POP EBP                             ; 1000bc7b
    POP EDI                             ; 1000bc7c
    POP ESI                             ; 1000bc7d
    POP EBX                             ; 1000bc7e
    ADD ESP,0xc                         ; 1000bc7f
    RET                                 ; 1000bc82
    TEST ESI,ESI                        ; 1000bc83
        ;   Label: LAB_1000bc83
    JNZ 0x1000bc9f                      ; 1000bc85
        ;   XREF to: 1000bc9f (CONDITIONAL_JUMP)  ; LAB_1000bc9f
    TEST EBX,EBX                        ; 1000bc87
    JZ 0x1000bc95                       ; 1000bc89
        ;   XREF to: 1000bc95 (CONDITIONAL_JUMP)  ; LAB_1000bc95
    PUSH 0x1                            ; 1000bc8b
    CALL FUN_10005a10                   ; 1000bc8d
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000bc92
    PUSH 0x3                            ; 1000bc95
        ;   Label: LAB_1000bc95
    CALL __exit                         ; 1000bc97
        ;   XREF to: 100075c0 (UNCONDITIONAL_CALL)  ; void __exit(int _Code)
    CMP EDI,0x8                         ; 1000bc9f
        ;   Label: LAB_1000bc9f
    JZ 0x1000bcae                       ; 1000bca2
        ;   XREF to: 1000bcae (CONDITIONAL_JUMP)  ; LAB_1000bcae
    CMP EDI,0xb                         ; 1000bca4
    JZ 0x1000bcae                       ; 1000bca7
        ;   XREF to: 1000bcae (CONDITIONAL_JUMP)  ; LAB_1000bcae
    CMP EDI,0x4                         ; 1000bca9
    JNZ 0x1000bccf                      ; 1000bcac
        ;   XREF to: 1000bccf (CONDITIONAL_JUMP)  ; LAB_1000bccf
    MOV EAX,dword ptr [EBP + 0x54]      ; 1000bcae
        ;   Label: LAB_1000bcae
    CMP EDI,0x8                         ; 1000bcb1
    MOV dword ptr [EBP + 0x54],0x0      ; 1000bcb4
    MOV dword ptr [ESP + 0x14],EAX      ; 1000bcbb
    JNZ 0x1000bd0c                      ; 1000bcbf
        ;   XREF to: 1000bd0c (CONDITIONAL_JUMP)  ; LAB_1000bd0c
    MOV EAX,dword ptr [EBP + 0x58]      ; 1000bcc1
    MOV dword ptr [EBP + 0x58],0x8c     ; 1000bcc4
    MOV dword ptr [ESP + 0x18],EAX      ; 1000bccb
    CMP EDI,0x8                         ; 1000bccf
        ;   Label: LAB_1000bccf
    JNZ 0x1000bd0c                      ; 1000bcd2
        ;   XREF to: 1000bd0c (CONDITIONAL_JUMP)  ; LAB_1000bd0c
    MOV ECX,dword ptr [0x10017748]      ; 1000bcd4 | DAT_10017748
    MOV EAX,[0x1001774c]                ; 1000bcda | DAT_1001774c
    ADD EAX,ECX                         ; 1000bcdf
    CMP EAX,ECX                         ; 1000bce1
    JLE 0x1000bd16                      ; 1000bce3
        ;   XREF to: 1000bd16 (CONDITIONAL_JUMP)  ; LAB_1000bd16
    LEA EAX,[ECX + ECX*0x2]             ; 1000bce5
    SHL EAX,0x2                         ; 1000bce8
    MOV EDX,dword ptr [EBP + 0x50]      ; 1000bceb
        ;   Label: LAB_1000bceb
    ADD EAX,0xc                         ; 1000bcee
    INC ECX                             ; 1000bcf1
    MOV dword ptr [EDX + EAX*0x1 + -0x4],0x0 ; 1000bcf2
    MOV EDX,dword ptr [0x10017748]      ; 1000bcfa | DAT_10017748
    ADD EDX,dword ptr [0x1001774c]      ; 1000bd00 | DAT_1001774c
    CMP EDX,ECX                         ; 1000bd06
    JG 0x1000bceb                       ; 1000bd08
        ;   XREF to: 1000bceb (CONDITIONAL_JUMP)  ; LAB_1000bceb
    JMP 0x1000bd16                      ; 1000bd0a
        ;   XREF to: 1000bd16 (UNCONDITIONAL_JUMP)  ; LAB_1000bd16
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000bd0c
        ;   Label: LAB_1000bd0c
    MOV dword ptr [EAX],0x0             ; 1000bd10 | DAT_10017900
    TEST EBX,EBX                        ; 1000bd16
        ;   Label: LAB_1000bd16
    JZ 0x1000bd24                       ; 1000bd18
        ;   XREF to: 1000bd24 (CONDITIONAL_JUMP)  ; LAB_1000bd24
    PUSH 0x1                            ; 1000bd1a
    CALL FUN_10005a10                   ; 1000bd1c
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000bd21
    CMP EDI,0x8                         ; 1000bd24
        ;   Label: LAB_1000bd24
    JNZ 0x1000bd36                      ; 1000bd27
        ;   XREF to: 1000bd36 (CONDITIONAL_JUMP)  ; LAB_1000bd36
    MOV EAX,dword ptr [EBP + 0x58]      ; 1000bd29
    PUSH EAX                            ; 1000bd2c
    PUSH 0x8                            ; 1000bd2d
    CALL ESI                            ; 1000bd2f
    ADD ESP,0x8                         ; 1000bd31
    JMP 0x1000bd3c                      ; 1000bd34
        ;   XREF to: 1000bd3c (UNCONDITIONAL_JUMP)  ; LAB_1000bd3c
    PUSH EDI                            ; 1000bd36
        ;   Label: LAB_1000bd36
    CALL ESI                            ; 1000bd37
    ADD ESP,0x4                         ; 1000bd39
    CMP EDI,0x8                         ; 1000bd3c
        ;   Label: LAB_1000bd3c
    JZ 0x1000bd4b                       ; 1000bd3f
        ;   XREF to: 1000bd4b (CONDITIONAL_JUMP)  ; LAB_1000bd4b
    CMP EDI,0xb                         ; 1000bd41
    JZ 0x1000bd4b                       ; 1000bd44
        ;   XREF to: 1000bd4b (CONDITIONAL_JUMP)  ; LAB_1000bd4b
    CMP EDI,0x4                         ; 1000bd46
    JNZ 0x1000bd5e                      ; 1000bd49
        ;   XREF to: 1000bd5e (CONDITIONAL_JUMP)  ; LAB_1000bd5e
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000bd4b
        ;   Label: LAB_1000bd4b
    CMP EDI,0x8                         ; 1000bd4f
    MOV dword ptr [EBP + 0x54],EAX      ; 1000bd52
    JNZ 0x1000bd5e                      ; 1000bd55
        ;   XREF to: 1000bd5e (CONDITIONAL_JUMP)  ; LAB_1000bd5e
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000bd57
    MOV dword ptr [EBP + 0x58],EAX      ; 1000bd5b
    XOR EAX,EAX                         ; 1000bd5e
        ;   Label: LAB_1000bd5e
    POP EBP                             ; 1000bd60
    POP EDI                             ; 1000bd61
    POP ESI                             ; 1000bd62
    POP EBX                             ; 1000bd63
    ADD ESP,0xc                         ; 1000bd64
    RET                                 ; 1000bd67

