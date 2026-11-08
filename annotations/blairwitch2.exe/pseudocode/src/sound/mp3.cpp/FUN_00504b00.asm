; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00504b00(undefined4 *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   FUN_00504ca0 at 00504cc4
;   FUN_00505170 at 0050518a
;   FUN_00505230 at 00505288
;   FUN_00505360 at 005053a4
;   FUN_00505410 at 00505477
;   FUN_005054a0 at 00505667
;   FUN_00505710 at 005057e4
;   FUN_00505810 at 00505a02
;   FUN_00506360 at 00506384
;   FUN_0050a280 at 0050a865
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005dff0c
;   TerminatedCString s_Cannot_read_or_write_mor_005dff1d
;   undefined4 DAT_00619250
;   undefined4 DAT_00619270
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b87c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504b00
        ;   Label: FUN_00504b00
    PUSH ESI                            ; 00504b01
    PUSH EDI                            ; 00504b02
    PUSH EBP                            ; 00504b03
    SUB ESP,0x4                         ; 00504b04
    MOV EDI,dword ptr [ESP + 0x18]      ; 00504b07
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00504b0b
    XOR EDX,EDX                         ; 00504b0f
    MOV EBP,EBX                         ; 00504b11
    MOV dword ptr [ESP],EDX             ; 00504b13
    CMP EBX,0x20                        ; 00504b16
    JG 0x00504b79                       ; 00504b19
        ;   XREF to: 00504b79 (CONDITIONAL_JUMP)  ; LAB_00504b79
    ADD dword ptr [EDI + 0xc],EBX       ; 00504b1b
        ;   Label: LAB_00504b1b
    TEST EBP,EBP                        ; 00504b1e
    JLE 0x00504b6e                      ; 00504b20
        ;   XREF to: 00504b6e (CONDITIONAL_JUMP)  ; LAB_00504b6e
    CMP dword ptr [EDI + 0x14],0x0      ; 00504b22
        ;   Label: LAB_00504b22
    JZ 0x00504ba8                       ; 00504b26
        ;   XREF to: 00504ba8 (CONDITIONAL_JUMP)  ; LAB_00504ba8
    MOV ECX,dword ptr [EDI + 0x14]      ; 00504b2c
        ;   Label: LAB_00504b2c
    CMP EBP,ECX                         ; 00504b2f
    JGE 0x00504c6c                      ; 00504b31
        ;   XREF to: 00504c6c (CONDITIONAL_JUMP)  ; LAB_00504c6c
    MOV EAX,EBP                         ; 00504b37
    MOV EDX,dword ptr [EDI + 0x4]       ; 00504b39
        ;   Label: LAB_00504b39
    ADD EDX,dword ptr [EDI + 0x10]      ; 00504b3c
    XOR EBX,EBX                         ; 00504b3f
    MOV BL,byte ptr [EDX]               ; 00504b41
    MOV EDX,dword ptr [EDI + 0x14]      ; 00504b43
    SUB EBP,EAX                         ; 00504b46
    MOV ESI,dword ptr [EDX*0x4 + 0x619250] ; 00504b48 | DAT_00619250 | DAT_00619270
    SUB EDX,EAX                         ; 00504b4f
    AND EBX,ESI                         ; 00504b51
    MOV CL,DL                           ; 00504b53
    MOV EAX,EBP                         ; 00504b55
    SAR EBX,CL                          ; 00504b57
    MOV CL,AL                           ; 00504b59
    MOV EBP,dword ptr [ESP]             ; 00504b5b
    SHL EBX,CL                          ; 00504b5e
    OR EBP,EBX                          ; 00504b60
    MOV dword ptr [EDI + 0x14],EDX      ; 00504b62
    MOV dword ptr [ESP],EBP             ; 00504b65
    MOV EBP,EAX                         ; 00504b68
    TEST EAX,EAX                        ; 00504b6a
    JG 0x00504b22                       ; 00504b6c
        ;   XREF to: 00504b22 (CONDITIONAL_JUMP)  ; LAB_00504b22
    MOV EAX,dword ptr [ESP]             ; 00504b6e
        ;   Label: LAB_00504b6e
    ADD ESP,0x4                         ; 00504b71
    POP EBP                             ; 00504b74
    POP EDI                             ; 00504b75
    POP ESI                             ; 00504b76
    POP EBX                             ; 00504b77
    RET                                 ; 00504b78
    PUSH 0x1d23558                      ; 00504b79
        ;   Label: LAB_00504b79
    PUSH 0x20                           ; 00504b7e
    MOV ECX,0x5dff0c                    ; 00504b80 | = "..\\sound\\mp3.cpp"
    MOV ESI,0x2ab                       ; 00504b85
    PUSH 0x5dff1d                       ; 00504b8a | = "Cannot read or write more than %d bit..."
    MOV dword ptr [0x01d046a0],ECX      ; 00504b8f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00504b95 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00504b9b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 00504ba0
    JMP 0x00504b1b                      ; 00504ba3
        ;   XREF to: 00504b1b (UNCONDITIONAL_JUMP)  ; LAB_00504b1b
    MOV EDX,dword ptr [EDI + 0x10]      ; 00504ba8
        ;   Label: LAB_00504ba8
    MOV dword ptr [EDI + 0x14],0x8      ; 00504bab
    DEC EDX                             ; 00504bb2
    MOV dword ptr [EDI + 0x10],EDX      ; 00504bb3
    CMP EDX,0x4                         ; 00504bb6
    JGE 0x00504bcd                      ; 00504bb9
        ;   XREF to: 00504bcd (CONDITIONAL_JUMP)  ; LAB_00504bcd
    CMP dword ptr [EDI + 0x18],0x0      ; 00504bbb
        ;   Label: LAB_00504bbb
    JZ 0x00504bd7                       ; 00504bbf
        ;   XREF to: 00504bd7 (CONDITIONAL_JUMP)  ; LAB_00504bd7
    MOV dword ptr [EDI + 0x1c],0x1      ; 00504bc1
    JMP 0x00504b2c                      ; 00504bc8
        ;   XREF to: 00504b2c (UNCONDITIONAL_JUMP)  ; LAB_00504b2c
    CMP EDX,dword ptr [EDI + 0x18]      ; 00504bcd
        ;   Label: LAB_00504bcd
    JL 0x00504bbb                       ; 00504bd0
        ;   XREF to: 00504bbb (CONDITIONAL_JUMP)  ; LAB_00504bbb
    JMP 0x00504b2c                      ; 00504bd2
        ;   XREF to: 00504b2c (UNCONDITIONAL_JUMP)  ; LAB_00504b2c
    MOV EBX,dword ptr [EDI + 0x10]      ; 00504bd7
        ;   Label: LAB_00504bd7
    TEST EBX,EBX                        ; 00504bda
    JL 0x00504bfa                       ; 00504bdc
        ;   XREF to: 00504bfa (CONDITIONAL_JUMP)  ; LAB_00504bfa
    MOV EAX,dword ptr [EDI + 0x8]       ; 00504bde
        ;   Label: LAB_00504bde
    MOV ECX,dword ptr [EDI + 0x10]      ; 00504be1
    DEC EAX                             ; 00504be4
    MOV ESI,dword ptr [EDI + 0x4]       ; 00504be5
    SUB EAX,ECX                         ; 00504be8
    LEA EDX,[ESI + EBX*0x1]             ; 00504bea
    ADD EAX,EBX                         ; 00504bed
    ADD ESI,EAX                         ; 00504bef
    MOV AL,byte ptr [EDX]               ; 00504bf1
    DEC EBX                             ; 00504bf3
    MOV byte ptr [ESI],AL               ; 00504bf4
    TEST EBX,EBX                        ; 00504bf6
    JGE 0x00504bde                      ; 00504bf8
        ;   XREF to: 00504bde (CONDITIONAL_JUMP)  ; LAB_00504bde
    MOV ESI,dword ptr [EDI + 0x8]       ; 00504bfa
        ;   Label: LAB_00504bfa
    MOV EAX,dword ptr [EDI + 0x10]      ; 00504bfd
    SUB ESI,0x2                         ; 00504c00
    SUB ESI,EAX                         ; 00504c03
    MOV EBX,EDI                         ; 00504c05
    TEST ESI,ESI                        ; 00504c07
    JL 0x00504c11                       ; 00504c09
        ;   XREF to: 00504c11 (CONDITIONAL_JUMP)  ; LAB_00504c11
    CMP dword ptr [EBX + 0x18],0x0      ; 00504c0b
        ;   Label: LAB_00504c0b
    JZ 0x00504c1d                       ; 00504c0f
        ;   XREF to: 00504c1d (CONDITIONAL_JUMP)  ; LAB_00504c1d
    MOV EAX,dword ptr [EDI + 0x8]       ; 00504c11
        ;   Label: LAB_00504c11
    DEC EAX                             ; 00504c14
    MOV dword ptr [EDI + 0x10],EAX      ; 00504c15
    JMP 0x00504b2c                      ; 00504c18
        ;   XREF to: 00504b2c (UNCONDITIONAL_JUMP)  ; LAB_00504b2c
    MOV ECX,dword ptr [EBX + 0x28]      ; 00504c1d
        ;   Label: LAB_00504c1d
    XOR EAX,EAX                         ; 00504c20
    TEST ECX,ECX                        ; 00504c22
    JLE 0x00504c3e                      ; 00504c24
        ;   XREF to: 00504c3e (CONDITIONAL_JUMP)  ; LAB_00504c3e
    MOV EAX,dword ptr [EBX]             ; 00504c26
    PUSH EAX                            ; 00504c28
    PUSH 0x1                            ; 00504c29
    MOV EDX,dword ptr [EBX + 0x4]       ; 00504c2b
    MOV EAX,ESI                         ; 00504c2e
    PUSH 0x1                            ; 00504c30
    ADD EAX,EDX                         ; 00504c32
    PUSH EAX                            ; 00504c34
    DEC ESI                             ; 00504c35
    CALL FUN_005b87c0                   ; 00504c36
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 00504c3b
    CMP EAX,0x1                         ; 00504c3e
        ;   Label: LAB_00504c3e
    JNZ 0x00504c56                      ; 00504c41
        ;   XREF to: 00504c56 (CONDITIONAL_JUMP)  ; LAB_00504c56
    SUB dword ptr [EBX + 0x28],EAX      ; 00504c43
    TEST ESI,ESI                        ; 00504c46
    JGE 0x00504c0b                      ; 00504c48
        ;   XREF to: 00504c0b (CONDITIONAL_JUMP)  ; LAB_00504c0b
    MOV EAX,dword ptr [EDI + 0x8]       ; 00504c4a
    DEC EAX                             ; 00504c4d
    MOV dword ptr [EDI + 0x10],EAX      ; 00504c4e
    JMP 0x00504b2c                      ; 00504c51
        ;   XREF to: 00504b2c (UNCONDITIONAL_JUMP)  ; LAB_00504b2c
    LEA EAX,[ESI + 0x1]                 ; 00504c56
        ;   Label: LAB_00504c56
    MOV dword ptr [EBX + 0x18],EAX      ; 00504c59
    TEST ESI,ESI                        ; 00504c5c
    JGE 0x00504c0b                      ; 00504c5e
        ;   XREF to: 00504c0b (CONDITIONAL_JUMP)  ; LAB_00504c0b
    MOV EAX,dword ptr [EDI + 0x8]       ; 00504c60
    DEC EAX                             ; 00504c63
    MOV dword ptr [EDI + 0x10],EAX      ; 00504c64
    JMP 0x00504b2c                      ; 00504c67
        ;   XREF to: 00504b2c (UNCONDITIONAL_JUMP)  ; LAB_00504b2c
    MOV EAX,ECX                         ; 00504c6c
        ;   Label: LAB_00504c6c
    JMP 0x00504b39                      ; 00504c6e
        ;   XREF to: 00504b39 (UNCONDITIONAL_JUMP)  ; LAB_00504b39

