; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004159e0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00415b60 at 00415bfe
;   FUN_00415cd0 at 00415d89
;   FUN_00415e10 at 00415e79
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_00469d00
;   FUN_0046b920
;   FUN_0046b960
;   FUN_0046bca0
;   FUN_0046ca00
;   FUN_00531e90
;   FUN_00532190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004159e0
        ;   Label: FUN_004159e0
    PUSH ESI                            ; 004159e1
    PUSH EDI                            ; 004159e2
    PUSH EBP                            ; 004159e3
    SUB ESP,0xc                         ; 004159e4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004159e7
    MOV EDX,dword ptr [ESI + 0x2d4]     ; 004159eb
    PUSH EDX                            ; 004159f1
    MOV ECX,dword ptr [ESI + 0x2d0]     ; 004159f2
    PUSH ECX                            ; 004159f8
    MOV EBX,dword ptr [0x0061b5a8]      ; 004159f9 | DAT_0061b5a8
    PUSH EBX                            ; 004159ff | DAT_01e661b8
    CALL FUN_00531e90                   ; 00415a00
        ;   XREF to: 00531e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531e90()
    ADD ESP,0xc                         ; 00415a05
    MOV EDI,dword ptr [ESI + 0x2d8]     ; 00415a08
    PUSH EDI                            ; 00415a0e
    PUSH 0x3                            ; 00415a0f
    MOV EBP,dword ptr [ESI + 0x2d4]     ; 00415a11
    PUSH EBP                            ; 00415a17
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00415a18
    PUSH EAX                            ; 00415a1e
    MOV EDX,dword ptr [ESI + 0x2dc]     ; 00415a1f
    PUSH EDX                            ; 00415a25
    MOV ECX,dword ptr [ESI + 0x2d0]     ; 00415a26
    PUSH ECX                            ; 00415a2c
    MOV EBX,dword ptr [0x0061b5a8]      ; 00415a2d | DAT_0061b5a8
    PUSH EBX                            ; 00415a33 | DAT_01e661b8
    CALL FUN_00532190                   ; 00415a34
        ;   XREF to: 00532190 (UNCONDITIONAL_CALL)  ; undefined FUN_00532190()
    MOV EDI,dword ptr [ESI + 0x2e8]     ; 00415a39
    ADD ESP,0x1c                        ; 00415a3f
    CMP EDI,0x1                         ; 00415a42
    JZ 0x00415a5a                       ; 00415a45
        ;   XREF to: 00415a5a (CONDITIONAL_JUMP)  ; LAB_00415a5a
    MOV EBP,dword ptr [0x0060b280]      ; 00415a47 | DAT_0060b280
    PUSH EBP                            ; 00415a4d | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00415a4e
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00415a53
    TEST EAX,EAX                        ; 00415a56
    JZ 0x00415abe                       ; 00415a58
        ;   XREF to: 00415abe (CONDITIONAL_JUMP)  ; LAB_00415abe
    MOV ECX,dword ptr [0x0060b280]      ; 00415a5a | DAT_0060b280
        ;   Label: LAB_00415a5a
    PUSH ECX                            ; 00415a60 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00415a61
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00415a66
    TEST EAX,EAX                        ; 00415a69
    JNZ 0x00415a83                      ; 00415a6b
        ;   XREF to: 00415a83 (CONDITIONAL_JUMP)  ; LAB_00415a83
    LEA EAX,[ESI + 0x2ec]               ; 00415a6d
    PUSH EAX                            ; 00415a73
    MOV EBX,dword ptr [0x0060b280]      ; 00415a74 | DAT_0060b280
    PUSH EBX                            ; 00415a7a | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 00415a7b
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 00415a80
    MOV EDI,dword ptr [ESP + 0x24]      ; 00415a83
        ;   Label: LAB_00415a83
    PUSH EDI                            ; 00415a87
    MOV EBP,dword ptr [ESI + 0x2dc]     ; 00415a88
    PUSH EBP                            ; 00415a8e
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00415a8f
    PUSH EAX                            ; 00415a95
    MOV EDX,dword ptr [0x0060b280]      ; 00415a96 | DAT_0060b280
    PUSH EDX                            ; 00415a9c | DAT_01ba5c50
    CALL FUN_0046bca0                   ; 00415a9d
        ;   XREF to: 0046bca0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046bca0()
    ADD ESP,0x10                        ; 00415aa2
    PUSH 0x1                            ; 00415aa5
        ;   Label: LAB_00415aa5
    MOV EBX,dword ptr [0x0060b280]      ; 00415aa7 | DAT_0060b280
    PUSH EBX                            ; 00415aad | DAT_01ba5c50
    CALL FUN_0046b920                   ; 00415aae
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b920()
    ADD ESP,0x8                         ; 00415ab3
    ADD ESP,0xc                         ; 00415ab6
    POP EBP                             ; 00415ab9
    POP EDI                             ; 00415aba
    POP ESI                             ; 00415abb
    POP EBX                             ; 00415abc
    RET                                 ; 00415abd
    MOV EAX,0xffffffff                  ; 00415abe
        ;   Label: LAB_00415abe
    MOV EDX,dword ptr [ESI + 0x2dc]     ; 00415ac3
    XOR EDI,EDI                         ; 00415ac9
    MOV dword ptr [ESP + 0x4],EAX       ; 00415acb
    TEST EDX,EDX                        ; 00415acf
    JLE 0x00415aa5                      ; 00415ad1
        ;   XREF to: 00415aa5 (CONDITIONAL_JUMP)  ; LAB_00415aa5
    LEA EAX,[ESI + 0x2ec]               ; 00415ad3
    MOV dword ptr [ESP + 0x8],EDI       ; 00415ad9
    XOR EBP,EBP                         ; 00415add
    MOV dword ptr [ESP],EAX             ; 00415adf
    MOV EAX,dword ptr [ESI + 0x2e4]     ; 00415ae2
        ;   Label: LAB_00415ae2
    MOV EBX,dword ptr [EAX + EBP*0x1]   ; 00415ae8
    CMP EBX,dword ptr [ESP + 0x4]       ; 00415aeb
    JZ 0x00415b16                       ; 00415aef
        ;   XREF to: 00415b16 (CONDITIONAL_JUMP)  ; LAB_00415b16
    LEA EAX,[EBX*0x4 + 0x0]             ; 00415af1
    SUB EAX,EBX                         ; 00415af8
    MOV EDX,dword ptr [ESP]             ; 00415afa
    SHL EAX,0x3                         ; 00415afd
    ADD EAX,EDX                         ; 00415b00
    PUSH EAX                            ; 00415b02
    MOV ECX,dword ptr [0x0060b280]      ; 00415b03 | DAT_0060b280
    PUSH ECX                            ; 00415b09 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 00415b0a
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 00415b0f
    MOV dword ptr [ESP + 0x4],EBX       ; 00415b12
    MOV ECX,dword ptr [ESP + 0x24]      ; 00415b16
        ;   Label: LAB_00415b16
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415b1a
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00415b1e
    PUSH ECX                            ; 00415b24
    ADD EAX,EBX                         ; 00415b25
    PUSH EAX                            ; 00415b27
    MOV EAX,[0x0060b280]                ; 00415b28 | DAT_0060b280
    PUSH EAX                            ; 00415b2d | DAT_01ba5c50
    ADD EBP,0x4                         ; 00415b2e
    INC EDI                             ; 00415b31
    CALL FUN_00469d00                   ; 00415b32
        ;   XREF to: 00469d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00469d00()
    ADD ESP,0xc                         ; 00415b37
    LEA EDX,[EBX + 0x3c]                ; 00415b3a
    MOV ECX,dword ptr [ESI + 0x2dc]     ; 00415b3d
    MOV dword ptr [ESP + 0x8],EDX       ; 00415b43
    CMP EDI,ECX                         ; 00415b47
    JGE 0x00415aa5                      ; 00415b49
        ;   XREF to: 00415aa5 (CONDITIONAL_JUMP)  ; LAB_00415aa5
    JMP 0x00415ae2                      ; 00415b4f
        ;   XREF to: 00415ae2 (UNCONDITIONAL_JUMP)  ; LAB_00415ae2

