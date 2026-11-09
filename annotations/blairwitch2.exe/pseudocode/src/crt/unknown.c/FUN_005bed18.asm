; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005bed18(short param_1,int *param_2,uint param_3,uint *param_4)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005beed4 at 005beef8
;
; Referenced Globals:
;   undefined4 DAT_0061eea0
;   undefined4 DAT_026807a1
;
; Called Functions:
;   crt_unknown.c_FUN_005b86b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bed18
        ;   Label: crt_unknown.c_FUN_005bed18
    PUSH ESI                            ; 005bed19
    PUSH EDI                            ; 005bed1a
    PUSH EBP                            ; 005bed1b
    SUB ESP,0xc                         ; 005bed1c
    MOV ESI,dword ptr [ESP + 0x24]      ; 005bed1f
    MOV EDX,dword ptr [ESP + 0x28]      ; 005bed23
    LEA EAX,[EDX + 0xb]                 ; 005bed27
    AND AL,0xf8                         ; 005bed2a
    CMP EAX,EDX                         ; 005bed2c
    JNC 0x005bed37                      ; 005bed2e
        ;   XREF to: 005bed37 (CONDITIONAL_JUMP)  ; LAB_005bed37
    MOV EAX,0xffffffff                  ; 005bed30
    JMP 0x005bed41                      ; 005bed35
        ;   XREF to: 005bed41 (UNCONDITIONAL_JUMP)  ; LAB_005bed41
    CMP EAX,0x10                        ; 005bed37
        ;   Label: LAB_005bed37
    JNC 0x005bed41                      ; 005bed3a
        ;   XREF to: 005bed41 (CONDITIONAL_JUMP)  ; LAB_005bed41
    MOV EAX,0x10                        ; 005bed3c
    LEA EDX,[ESI + -0x4]                ; 005bed41
        ;   Label: LAB_005bed41
    MOV dword ptr [ESP],EDX             ; 005bed44
    MOV EDX,dword ptr [EDX]             ; 005bed47
    AND DL,0xfe                         ; 005bed49
    CMP EAX,EDX                         ; 005bed4c
    JBE 0x005bee69                      ; 005bed4e
        ;   XREF to: 005bee69 (CONDITIONAL_JUMP)  ; LAB_005bee69
    MOV EBP,dword ptr [ESP]             ; 005bed54
    SUB EAX,EDX                         ; 005bed57
    ADD EBP,EDX                         ; 005bed59
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005bed5b
    MOV dword ptr [EDX],EAX             ; 005bed5f
    MOV EDI,dword ptr [EBP]             ; 005bed61
        ;   Label: LAB_005bed61
    CMP EDI,-0x1                        ; 005bed64
    JNZ 0x005bed73                      ; 005bed67
        ;   XREF to: 005bed73 (CONDITIONAL_JUMP)  ; LAB_005bed73
    MOV EAX,0x2                         ; 005bed69
    JMP 0x005beeca                      ; 005bed6e
        ;   XREF to: 005beeca (UNCONDITIONAL_JUMP)  ; LAB_005beeca
    TEST DI,0x1                         ; 005bed73
        ;   Label: LAB_005bed73
    JNZ 0x005bee5c                      ; 005bed78
        ;   XREF to: 005bee5c (CONDITIONAL_JUMP)  ; LAB_005bee5c
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bed7e
    MOV dword ptr [ESP + 0x4],EAX       ; 005bed81
    MOV EAX,dword ptr [EBP + 0x4]       ; 005bed85
    MOV DX,DS                           ; 005bed88
    MOV dword ptr [ESP + 0x8],EAX       ; 005bed8a
    MOV EAX,0x61eea0                    ; 005bed8e | DAT_0061eea0
    CMP DX,word ptr [ESP + 0x20]        ; 005bed93
    JNZ 0x005bedbb                      ; 005bed98
        ;   XREF to: 005bedbb (CONDITIONAL_JUMP)  ; LAB_005bedbb
    MOV EBX,dword ptr [0x0061eea0]      ; 005bed9a | DAT_0061eea0
    CMP dword ptr [EBX + 0x8],0x0       ; 005beda0
    JZ 0x005bedbb                       ; 005beda4
        ;   XREF to: 005bedbb (CONDITIONAL_JUMP)  ; LAB_005bedbb
    CMP EBX,ESI                         ; 005beda6
        ;   Label: LAB_005beda6
    JA 0x005bedb2                       ; 005beda8
        ;   XREF to: 005bedb2 (CONDITIONAL_JUMP)  ; LAB_005bedb2
    MOV EAX,dword ptr [EBX]             ; 005bedaa
    ADD EAX,EBX                         ; 005bedac
    CMP EAX,ESI                         ; 005bedae
    JA 0x005bedbb                       ; 005bedb0
        ;   XREF to: 005bedbb (CONDITIONAL_JUMP)  ; LAB_005bedbb
    MOV EBX,dword ptr [EBX + 0x8]       ; 005bedb2
        ;   Label: LAB_005bedb2
    CMP dword ptr [EBX + 0x8],0x0       ; 005bedb5
    JNZ 0x005beda6                      ; 005bedb9
        ;   XREF to: 005beda6 (CONDITIONAL_JUMP)  ; LAB_005beda6
    MOV EAX,dword ptr [EBX + 0xc]       ; 005bedbb
        ;   Label: LAB_005bedbb
    CMP EBP,EAX                         ; 005bedbe
    JNZ 0x005bedc8                      ; 005bedc0
        ;   XREF to: 005bedc8 (CONDITIONAL_JUMP)  ; LAB_005bedc8
    MOV EAX,dword ptr [EAX + 0x4]       ; 005bedc2
    MOV dword ptr [EBX + 0xc],EAX       ; 005bedc5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005bedc8
        ;   Label: LAB_005bedc8
    CMP EDI,dword ptr [EAX]             ; 005bedcc
    JC 0x005beddf                       ; 005bedce
        ;   XREF to: 005beddf (CONDITIONAL_JUMP)  ; LAB_005beddf
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005bedd0
    MOV EAX,EDI                         ; 005bedd4
    MOV ECX,dword ptr [EDX]             ; 005bedd6
    SUB EAX,ECX                         ; 005bedd8
    CMP EAX,0x10                        ; 005bedda
    JNC 0x005bee16                      ; 005beddd
        ;   XREF to: 005bee16 (CONDITIONAL_JUMP)  ; LAB_005bee16
    MOV EAX,dword ptr [ESP + 0x8]       ; 005beddf
        ;   Label: LAB_005beddf
    MOV EDX,dword ptr [ESP + 0x4]       ; 005bede3
    MOV dword ptr [EAX + 0x8],EDX       ; 005bede7
    MOV EAX,EDX                         ; 005bedea
    MOV EDX,dword ptr [ESP + 0x8]       ; 005bedec
    MOV dword ptr [EAX + 0x4],EDX       ; 005bedf0
    MOV EAX,dword ptr [ESP]             ; 005bedf3
    ADD dword ptr [EAX],EDI             ; 005bedf6
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005bedf8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005bedfb
    DEC ECX                             ; 005bedff
    XOR DL,DL                           ; 005bee00
    MOV dword ptr [EBX + 0x1c],ECX      ; 005bee02
    MOV byte ptr [0x026807a1],DL        ; 005bee05 | DAT_026807a1
    MOV EDX,dword ptr [EAX]             ; 005bee0b
    CMP EDI,EDX                         ; 005bee0d
    JC 0x005bee4f                       ; 005bee0f
        ;   XREF to: 005bee4f (CONDITIONAL_JUMP)  ; LAB_005bee4f
    JMP 0x005beec8                      ; 005bee11
        ;   XREF to: 005beec8 (UNCONDITIONAL_JUMP)  ; LAB_005beec8
    ADD EBP,ECX                         ; 005bee16
        ;   Label: LAB_005bee16
    MOV dword ptr [EBP],EAX             ; 005bee18
    MOV EAX,dword ptr [ESP + 0x8]       ; 005bee1b
    MOV dword ptr [EBP + 0x4],EAX       ; 005bee1f
    MOV EAX,dword ptr [ESP + 0x4]       ; 005bee22
    MOV dword ptr [EBP + 0x8],EAX       ; 005bee26
    MOV EAX,dword ptr [ESP + 0x8]       ; 005bee29
    MOV dword ptr [EAX + 0x8],EBP       ; 005bee2d
    MOV EAX,dword ptr [ESP + 0x4]       ; 005bee30
    MOV dword ptr [EAX + 0x4],EBP       ; 005bee34
    MOV EAX,dword ptr [EDX]             ; 005bee37
    MOV EDX,dword ptr [ESP]             ; 005bee39
    MOV EDI,dword ptr [EDX]             ; 005bee3c
    ADD EDI,EAX                         ; 005bee3e
    XOR AH,AH                           ; 005bee40
    MOV dword ptr [EDX],EDI             ; 005bee42
    MOV byte ptr [0x026807a1],AH        ; 005bee44 | DAT_026807a1
    JMP 0x005beec8                      ; 005bee4a
        ;   XREF to: 005beec8 (UNCONDITIONAL_JUMP)  ; LAB_005beec8
    MOV ECX,EDX                         ; 005bee4f
        ;   Label: LAB_005bee4f
    SUB ECX,EDI                         ; 005bee51
    ADD EBP,EDI                         ; 005bee53
    MOV dword ptr [EAX],ECX             ; 005bee55
    JMP 0x005bed61                      ; 005bee57
        ;   XREF to: 005bed61 (UNCONDITIONAL_JUMP)  ; LAB_005bed61
    MOV EAX,0x1                         ; 005bee5c
        ;   Label: LAB_005bee5c
    ADD ESP,0xc                         ; 005bee61
    POP EBP                             ; 005bee64
    POP EDI                             ; 005bee65
    POP ESI                             ; 005bee66
    POP EBX                             ; 005bee67
    RET                                 ; 005bee68
    SUB EDX,EAX                         ; 005bee69
        ;   Label: LAB_005bee69
    CMP EDX,0x10                        ; 005bee6b
    JC 0x005beec8                       ; 005bee6e
        ;   XREF to: 005beec8 (CONDITIONAL_JUMP)  ; LAB_005beec8
    MOV EBP,dword ptr [ESP]             ; 005bee70
    MOV EDI,EAX                         ; 005bee73
    OR DL,0x1                           ; 005bee75
    OR DI,0x1                           ; 005bee78
    LEA ECX,[EAX + EBP*0x1]             ; 005bee7c
    MOV dword ptr [EBP],EDI             ; 005bee7f
    MOV EAX,0x61eea0                    ; 005bee82 | DAT_0061eea0
    MOV dword ptr [ECX],EDX             ; 005bee87
    MOV DX,DS                           ; 005bee89
    MOV dword ptr [ESP],ECX             ; 005bee8b
    CMP DX,word ptr [ESP + 0x20]        ; 005bee8e
    JNZ 0x005beeb6                      ; 005bee93
        ;   XREF to: 005beeb6 (CONDITIONAL_JUMP)  ; LAB_005beeb6
    MOV EBX,dword ptr [0x0061eea0]      ; 005bee95 | DAT_0061eea0
    CMP dword ptr [EBX + 0x8],0x0       ; 005bee9b
    JZ 0x005beeb6                       ; 005bee9f
        ;   XREF to: 005beeb6 (CONDITIONAL_JUMP)  ; LAB_005beeb6
    CMP EBX,ESI                         ; 005beea1
        ;   Label: LAB_005beea1
    JA 0x005beead                       ; 005beea3
        ;   XREF to: 005beead (CONDITIONAL_JUMP)  ; LAB_005beead
    MOV EAX,dword ptr [EBX]             ; 005beea5
    ADD EAX,EBX                         ; 005beea7
    CMP EAX,ESI                         ; 005beea9
    JA 0x005beeb6                       ; 005beeab
        ;   XREF to: 005beeb6 (CONDITIONAL_JUMP)  ; LAB_005beeb6
    MOV EBX,dword ptr [EBX + 0x8]       ; 005beead
        ;   Label: LAB_005beead
    CMP dword ptr [EBX + 0x8],0x0       ; 005beeb0
    JNZ 0x005beea1                      ; 005beeb4
        ;   XREF to: 005beea1 (CONDITIONAL_JUMP)  ; LAB_005beea1
    INC dword ptr [EBX + 0x18]          ; 005beeb6
        ;   Label: LAB_005beeb6
    MOV EAX,dword ptr [ESP]             ; 005beeb9
    ADD EAX,0x4                         ; 005beebc
    PUSH EAX                            ; 005beebf
    CALL crt_unknown.c_FUN_005b86b0     ; 005beec0
        ;   XREF to: 005b86b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86b0()
    ADD ESP,0x4                         ; 005beec5
    XOR EAX,EAX                         ; 005beec8
        ;   Label: LAB_005beec8
    ADD ESP,0xc                         ; 005beeca
        ;   Label: LAB_005beeca
    POP EBP                             ; 005beecd
    POP EDI                             ; 005beece
    POP ESI                             ; 005beecf
    POP EBX                             ; 005beed0
    RET                                 ; 005beed1

