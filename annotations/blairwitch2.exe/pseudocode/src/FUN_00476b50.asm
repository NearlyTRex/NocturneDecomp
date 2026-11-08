; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00476b50(int param_1,uint *param_2)
;
;
; XREF[1]:
;   FUN_00510ef0 at 00511039
;
; Referenced Globals:
;   undefined4 DAT_00613888
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476b50
        ;   Label: FUN_00476b50
    PUSH ESI                            ; 00476b51
    PUSH EDI                            ; 00476b52
    PUSH EBP                            ; 00476b53
    MOV EBX,dword ptr [ESP + 0x14]      ; 00476b54
    MOV ECX,dword ptr [ESP + 0x18]      ; 00476b58
    MOV EDX,dword ptr [ECX]             ; 00476b5c
    TEST EDX,EDX                        ; 00476b5e
    JL 0x00476bf9                       ; 00476b60
        ;   XREF to: 00476bf9 (CONDITIONAL_JUMP)  ; LAB_00476bf9
    CMP dword ptr [ECX + 0x4],0x0       ; 00476b66
    JL 0x00476bf9                       ; 00476b6a
        ;   XREF to: 00476bf9 (CONDITIONAL_JUMP)  ; LAB_00476bf9
    CMP dword ptr [ECX + 0x8],0x0       ; 00476b70
    JL 0x00476bf9                       ; 00476b74
        ;   XREF to: 00476bf9 (CONDITIONAL_JUMP)  ; LAB_00476bf9
    MOV EAX,EDX                         ; 00476b7a
    SAR EDX,0x1f                        ; 00476b7c
    SHL EDX,0x3                         ; 00476b7f
    SBB EAX,EDX                         ; 00476b82
    SAR EAX,0x3                         ; 00476b84
    MOV EBP,dword ptr [EBX + 0x40]      ; 00476b87
    MOV ESI,EAX                         ; 00476b8a
    CMP EAX,EBP                         ; 00476b8c
    JGE 0x00476bf9                      ; 00476b8e
        ;   XREF to: 00476bf9 (CONDITIONAL_JUMP)  ; LAB_00476bf9
    MOV EAX,dword ptr [ECX + 0x4]       ; 00476b90
    MOV EDX,EAX                         ; 00476b93
    SAR EDX,0x1f                        ; 00476b95
    SHL EDX,0x3                         ; 00476b98
    SBB EAX,EDX                         ; 00476b9b
    SAR EAX,0x3                         ; 00476b9d
    MOV EDI,EAX                         ; 00476ba0
    CMP EDI,dword ptr [EBX + 0x44]      ; 00476ba2
    JGE 0x00476bf9                      ; 00476ba5
        ;   XREF to: 00476bf9 (CONDITIONAL_JUMP)  ; LAB_00476bf9
    MOV EAX,dword ptr [ECX + 0x8]       ; 00476ba7
    MOV EDX,EAX                         ; 00476baa
    SAR EDX,0x1f                        ; 00476bac
    SHL EDX,0x3                         ; 00476baf
    SBB EAX,EDX                         ; 00476bb2
    SAR EAX,0x3                         ; 00476bb4
    MOV EDX,dword ptr [EBX + 0x48]      ; 00476bb7
    CMP EAX,EDX                         ; 00476bba
    JGE 0x00476bf9                      ; 00476bbc
        ;   XREF to: 00476bf9 (CONDITIONAL_JUMP)  ; LAB_00476bf9
    IMUL EDI,EDX                        ; 00476bbe
    IMUL ESI,dword ptr [EBX + 0x44]     ; 00476bc1
    IMUL ESI,EDX                        ; 00476bc5
    ADD EAX,EDI                         ; 00476bc8
    ADD ESI,EAX                         ; 00476bca
    LEA EAX,[ESI*0x4 + 0x0]             ; 00476bcc
    SUB EAX,ESI                         ; 00476bd3
    SHL EAX,0x2                         ; 00476bd5
    ADD EAX,ESI                         ; 00476bd8
    MOV EBX,dword ptr [EBX + 0x50]      ; 00476bda
    SHL EAX,0x2                         ; 00476bdd
    MOV ESI,dword ptr [ECX]             ; 00476be0
    ADD EAX,EBX                         ; 00476be2
    AND ESI,0x7                         ; 00476be4
    MOV EBX,dword ptr [ECX + 0x4]       ; 00476be7
    MOV EDX,dword ptr [EAX]             ; 00476bea
    MOV ECX,dword ptr [ECX + 0x8]       ; 00476bec
    AND EBX,0x7                         ; 00476bef
    AND ECX,0x7                         ; 00476bf2
    TEST EDX,EDX                        ; 00476bf5
    JNZ 0x00476c00                      ; 00476bf7
        ;   XREF to: 00476c00 (CONDITIONAL_JUMP)  ; LAB_00476c00
    XOR EAX,EAX                         ; 00476bf9
        ;   Label: LAB_00476bf9
    POP EBP                             ; 00476bfb
    POP EDI                             ; 00476bfc
    POP ESI                             ; 00476bfd
    POP EBX                             ; 00476bfe
    RET                                 ; 00476bff
    SHL ECX,0x3                         ; 00476c00
        ;   Label: LAB_00476c00
    MOV EAX,EDX                         ; 00476c03
    ADD ECX,EBX                         ; 00476c05
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 00476c07
    XOR EAX,EDX                         ; 00476c0a
    AND ECX,0xff                        ; 00476c0c
    MOV AL,byte ptr [ESI + 0x613888]    ; 00476c12 | DAT_00613888
    TEST ECX,EAX                        ; 00476c18
    SETNZ AL                            ; 00476c1a
    AND EAX,0xff                        ; 00476c1d
    POP EBP                             ; 00476c22
    POP EDI                             ; 00476c23
    POP ESI                             ; 00476c24
    POP EBX                             ; 00476c25
    RET                                 ; 00476c26

