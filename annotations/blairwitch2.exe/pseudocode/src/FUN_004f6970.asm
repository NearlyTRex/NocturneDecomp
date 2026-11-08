; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6970(void)
;
;
; XREF[2]:
;   FUN_004f6870 at 004f68d3
;   FUN_004f6d00 at 004f6de0
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01d09b7c
;   undefined4 DAT_01d0d2e8
;   undefined4 DAT_01d0d2ec
;   undefined4 DAT_01d0d2f0
;   undefined4 DAT_0264bca0
;
; Called Functions:
;   FUN_004f7280
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004f6970
        ;   Label: FUN_004f6970
    PUSH EBP                            ; 004f6971
    MOV EDI,dword ptr [0x01d0d2e8]      ; 004f6972 | DAT_01d0d2e8
    MOV EDX,dword ptr [0x01d0d2f0]      ; 004f6978 | DAT_01d0d2f0
    CMP EDX,0x3                         ; 004f697e
    JL 0x004f69f0                       ; 004f6981
        ;   XREF to: 004f69f0 (CONDITIONAL_JUMP)  ; LAB_004f69f0
    MOV ECX,dword ptr [0x01d0d2ec]      ; 004f6987 | DAT_01d0d2ec
    CMP ECX,0x3                         ; 004f698d
    JL 0x004f69f0                       ; 004f6990
        ;   XREF to: 004f69f0 (CONDITIONAL_JUMP)  ; LAB_004f69f0
    PUSH ESI                            ; 004f6992
    PUSH EBX                            ; 004f6993
    CMP dword ptr [0x0264bca0],0x0      ; 004f6994 | DAT_0264bca0
    JZ 0x004f69f9                       ; 004f699b
        ;   XREF to: 004f69f9 (CONDITIONAL_JUMP)  ; LAB_004f69f9
    CMP dword ptr [0x01c37788],0x0      ; 004f699d | DAT_01c37788
    JZ 0x004f69f9                       ; 004f69a4
        ;   XREF to: 004f69f9 (CONDITIONAL_JUMP)  ; LAB_004f69f9
    MOV EAX,[0x01c38b54]                ; 004f69a6 | DAT_01c38b54
    MOV EBX,0x3                         ; 004f69ab
    PUSH EAX                            ; 004f69b0
    MOV EAX,EDX                         ; 004f69b1
    SAR EDX,0x1f                        ; 004f69b3
    IDIV EBX                            ; 004f69b6
    PUSH EAX                            ; 004f69b8
    MOV EDX,EDI                         ; 004f69b9
    PUSH 0x1d0d2f4                      ; 004f69bb
    MOV EAX,[0x01d09b7c]                ; 004f69c0 | DAT_01d09b7c
    SHL EDX,0x6                         ; 004f69c5
    PUSH ECX                            ; 004f69c8
    ADD EAX,EDX                         ; 004f69c9
    PUSH EAX                            ; 004f69cb
    CALL dword ptr [0x0264bca0]         ; 004f69cc | DAT_0264bca0
    MOV EDI,dword ptr [0x01d0d2e8]      ; 004f69d2 | DAT_01d0d2e8
    ADD ESP,0x14                        ; 004f69d8
    LEA EAX,[EAX]                       ; 004f69db
    MOV ECX,ECX                         ; 004f69de
    XOR EBX,EBX                         ; 004f69e0
        ;   Label: LAB_004f69e0
    MOV dword ptr [0x01d0d2f0],EBX      ; 004f69e2 | DAT_01d0d2f0
    MOV dword ptr [0x01d0d2ec],EBX      ; 004f69e8 | DAT_01d0d2ec
    POP EBX                             ; 004f69ee
    POP ESI                             ; 004f69ef
    MOV dword ptr [0x01d0d2e8],EDI      ; 004f69f0 | DAT_01d0d2e8
        ;   Label: LAB_004f69f0
    POP EBP                             ; 004f69f6
    POP EDI                             ; 004f69f7
    RET                                 ; 004f69f8
    MOV EBP,dword ptr [0x01d0d2f0]      ; 004f69f9 | DAT_01d0d2f0
        ;   Label: LAB_004f69f9
    XOR ESI,ESI                         ; 004f69ff
    TEST EBP,EBP                        ; 004f6a01
    JLE 0x004f69e0                      ; 004f6a03
        ;   XREF to: 004f69e0 (CONDITIONAL_JUMP)  ; LAB_004f69e0
    XOR EBX,EBX                         ; 004f6a05
    XOR EAX,EAX                         ; 004f6a07
        ;   Label: LAB_004f6a07
    MOV AX,word ptr [EBX + 0x1d0d2f8]   ; 004f6a09
    LEA EDX,[EAX + EDI*0x1]             ; 004f6a10
    MOV EAX,[0x01d09b7c]                ; 004f6a13 | DAT_01d09b7c
    SHL EDX,0x6                         ; 004f6a18
    ADD EDX,EAX                         ; 004f6a1b
    PUSH EDX                            ; 004f6a1d
    XOR EDX,EDX                         ; 004f6a1e
    MOV DX,word ptr [EBX + 0x1d0d2f6]   ; 004f6a20
    ADD EDX,EDI                         ; 004f6a27
    SHL EDX,0x6                         ; 004f6a29
    ADD EDX,EAX                         ; 004f6a2c
    PUSH EDX                            ; 004f6a2e
    XOR EDX,EDX                         ; 004f6a2f
    MOV DX,word ptr [EBX + 0x1d0d2f4]   ; 004f6a31
    ADD EDX,EDI                         ; 004f6a38
    SHL EDX,0x6                         ; 004f6a3a
    ADD EAX,EDX                         ; 004f6a3d
    MOV dword ptr [0x01d0d2e8],EDI      ; 004f6a3f | DAT_01d0d2e8
    PUSH EAX                            ; 004f6a45
    ADD EBX,0x6                         ; 004f6a46
    ADD ESI,0x3                         ; 004f6a49
    CALL FUN_004f7280                   ; 004f6a4c
        ;   XREF to: 004f7280 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7280()
    MOV EDI,dword ptr [0x01d0d2e8]      ; 004f6a51 | DAT_01d0d2e8
    MOV ECX,dword ptr [0x01d0d2f0]      ; 004f6a57 | DAT_01d0d2f0
    ADD ESP,0xc                         ; 004f6a5d
    CMP ESI,ECX                         ; 004f6a60
    JL 0x004f6a07                       ; 004f6a62
        ;   XREF to: 004f6a07 (CONDITIONAL_JUMP)  ; LAB_004f6a07
    JMP 0x004f69e0                      ; 004f6a64
        ;   XREF to: 004f69e0 (UNCONDITIONAL_JUMP)  ; LAB_004f69e0

