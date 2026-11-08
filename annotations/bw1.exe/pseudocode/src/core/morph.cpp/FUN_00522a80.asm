; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00522a80(int param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_005226e0 at 00522797
;   FUN_005228c0 at 00522989
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005ea846
;   TerminatedCString s_CMorphModel_findOrAddTex_005ea858
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005bfb70
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522a80
        ;   Label: FUN_00522a80
    PUSH ESI                            ; 00522a81
    PUSH EDI                            ; 00522a82
    PUSH EBP                            ; 00522a83
    MOV EBX,dword ptr [ESP + 0x14]      ; 00522a84
    MOV EBP,dword ptr [ESP + 0x18]      ; 00522a88
    MOV EDX,dword ptr [EBX + 0x64]      ; 00522a8c
    XOR ESI,ESI                         ; 00522a8f
    TEST EDX,EDX                        ; 00522a91
    JLE 0x00522ab5                      ; 00522a93
        ;   XREF to: 00522ab5 (CONDITIONAL_JUMP)  ; LAB_00522ab5
    LEA EDI,[EBX + 0x70]                ; 00522a95
    PUSH EBP                            ; 00522a98
        ;   Label: LAB_00522a98
    PUSH EDI                            ; 00522a99
    CALL FUN_005c04e0                   ; 00522a9a
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00522a9f
    TEST EAX,EAX                        ; 00522aa2
    JZ 0x00522b3c                       ; 00522aa4
        ;   XREF to: 00522b3c (CONDITIONAL_JUMP)  ; LAB_00522b3c
    INC ESI                             ; 00522aaa
    MOV ECX,dword ptr [EBX + 0x64]      ; 00522aab
    ADD EDI,0x48                        ; 00522aae
    CMP ESI,ECX                         ; 00522ab1
    JL 0x00522a98                       ; 00522ab3
        ;   XREF to: 00522a98 (CONDITIONAL_JUMP)  ; LAB_00522a98
    CMP dword ptr [EBX + 0x64],0x14     ; 00522ab5
        ;   Label: LAB_00522ab5
    JL 0x00522add                       ; 00522ab9
        ;   XREF to: 00522add (CONDITIONAL_JUMP)  ; LAB_00522add
    MOV EDI,0x5ea846                    ; 00522abb | = "..\\core\\morph.cpp"
    MOV EAX,0x1d0                       ; 00522ac0
    PUSH 0x5ea858                       ; 00522ac5 | = "CMorphModel::findOrAddTexture - too m..."
    MOV dword ptr [0x01d1d400],EDI      ; 00522aca | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00522ad0 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00522ad5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00522ada
    MOV ESI,dword ptr [EBX + 0x64]      ; 00522add
        ;   Label: LAB_00522add
    LEA EAX,[ESI*0x8 + 0x0]             ; 00522ae0
    PUSH 0x48                           ; 00522ae7
    ADD EAX,ESI                         ; 00522ae9
    LEA EDI,[EBX + 0x68]                ; 00522aeb
    SHL EAX,0x3                         ; 00522aee
    PUSH 0x0                            ; 00522af1
    ADD EAX,EDI                         ; 00522af3
    PUSH EAX                            ; 00522af5
    CALL FUN_005bfb70                   ; 00522af6
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV ESI,dword ptr [EBX + 0x64]      ; 00522afb
    LEA EAX,[ESI*0x8 + 0x0]             ; 00522afe
    ADD EAX,ESI                         ; 00522b05
    SHL EAX,0x3                         ; 00522b07
    ADD ESP,0xc                         ; 00522b0a
    ADD EDI,EAX                         ; 00522b0d
    MOV ESI,EBP                         ; 00522b0f
    ADD EDI,0x8                         ; 00522b11
    PUSH EDI                            ; 00522b14
    MOV AL,byte ptr [ESI]               ; 00522b15
        ;   Label: LAB_00522b15
    MOV byte ptr [EDI],AL               ; 00522b17
    CMP AL,0x0                          ; 00522b19
    JZ 0x00522b2d                       ; 00522b1b
        ;   XREF to: 00522b2d (CONDITIONAL_JUMP)  ; LAB_00522b2d
    MOV AL,byte ptr [ESI + 0x1]         ; 00522b1d
    ADD ESI,0x2                         ; 00522b20
    MOV byte ptr [EDI + 0x1],AL         ; 00522b23
    ADD EDI,0x2                         ; 00522b26
    CMP AL,0x0                          ; 00522b29
    JNZ 0x00522b15                      ; 00522b2b
        ;   XREF to: 00522b15 (CONDITIONAL_JUMP)  ; LAB_00522b15
    POP EDI                             ; 00522b2d
        ;   Label: LAB_00522b2d
    MOV EAX,dword ptr [EBX + 0x64]      ; 00522b2e
    LEA ESI,[EAX + 0x1]                 ; 00522b31
    MOV dword ptr [EBX + 0x64],ESI      ; 00522b34
    POP EBP                             ; 00522b37
    POP EDI                             ; 00522b38
    POP ESI                             ; 00522b39
    POP EBX                             ; 00522b3a
    RET                                 ; 00522b3b
    MOV EAX,ESI                         ; 00522b3c
        ;   Label: LAB_00522b3c
    POP EBP                             ; 00522b3e
    POP EDI                             ; 00522b3f
    POP ESI                             ; 00522b40
    POP EBX                             ; 00522b41
    RET                                 ; 00522b42

