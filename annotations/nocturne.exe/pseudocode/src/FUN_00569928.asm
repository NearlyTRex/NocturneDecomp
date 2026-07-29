; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00569928(byte *param_1,int *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x1b]:1  local_1b
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00569040 at 0056927b
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; Called Functions:
;   crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0
;   crt_stdlib.c_i64toa_FUN_0056f3e0
;   crt_stdlib.c_utoa_FUN_0056f4f0
;   FUN_0056963c
;   FUN_0056966c
;   FUN_005696e8
;   FUN_0056974c
;   FUN_00569850
;   FUN_0056986c
;   FUN_00569f8c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569928
        ;   Label: FUN_00569928
    PUSH ESI                            ; 00569929
    PUSH EDI                            ; 0056992a
    PUSH ES                             ; 0056992b
    PUSH EBP                            ; 0056992c
    SUB ESP,0x10                        ; 0056992d
    MOV ESI,dword ptr [ESP + 0x28]      ; 00569930
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00569934
    MOV EBX,dword ptr [ESP + 0x30]      ; 00569938
    MOV dword ptr [EBX + 0x20],0x0      ; 0056993c
    MOV dword ptr [EBX + 0x24],0x0      ; 00569943
    MOV dword ptr [EBX + 0x28],0x0      ; 0056994a
    MOV dword ptr [EBX + 0x2c],0x0      ; 00569951
    MOV word ptr [ESP + 0xc],DS         ; 00569958
    MOV dword ptr [EBX + 0x30],0x0      ; 0056995c
    MOV EDI,ESI                         ; 00569963
    MOV AL,byte ptr [EBX + 0x15]        ; 00569965
    MOV dword ptr [EBX + 0x34],0x0      ; 00569968
    CMP AL,0x69                         ; 0056996f
    JC 0x00569991                       ; 00569971
        ;   XREF to: 00569991 (CONDITIONAL_JUMP)  ; LAB_00569991
    JBE 0x005699fe                      ; 00569973
        ;   XREF to: 005699fe (CONDITIONAL_JUMP)  ; LAB_005699fe
    CMP AL,0x75                         ; 00569979
    JC 0x00569988                       ; 0056997b
        ;   XREF to: 00569988 (CONDITIONAL_JUMP)  ; LAB_00569988
    JBE 0x005699a4                      ; 0056997d
        ;   XREF to: 005699a4 (CONDITIONAL_JUMP)  ; LAB_005699a4
    CMP AL,0x78                         ; 0056997f
    JZ 0x005699a4                       ; 00569981
        ;   XREF to: 005699a4 (CONDITIONAL_JUMP)  ; LAB_005699a4
    JMP 0x00569ac5                      ; 00569983
        ;   XREF to: 00569ac5 (UNCONDITIONAL_JUMP)  ; LAB_00569ac5
    CMP AL,0x6f                         ; 00569988
        ;   Label: LAB_00569988
    JZ 0x005699a4                       ; 0056998a
        ;   XREF to: 005699a4 (CONDITIONAL_JUMP)  ; LAB_005699a4
    JMP 0x00569ac5                      ; 0056998c
        ;   XREF to: 00569ac5 (UNCONDITIONAL_JUMP)  ; LAB_00569ac5
    CMP AL,0x58                         ; 00569991
        ;   Label: LAB_00569991
    JC 0x00569ac5                       ; 00569993
        ;   XREF to: 00569ac5 (CONDITIONAL_JUMP)  ; LAB_00569ac5
    JBE 0x005699a4                      ; 00569999
        ;   XREF to: 005699a4 (CONDITIONAL_JUMP)  ; LAB_005699a4
    CMP AL,0x64                         ; 0056999b
    JZ 0x005699fe                       ; 0056999d
        ;   XREF to: 005699fe (CONDITIONAL_JUMP)  ; LAB_005699fe
    JMP 0x00569ac5                      ; 0056999f
        ;   XREF to: 00569ac5 (UNCONDITIONAL_JUMP)  ; LAB_00569ac5
    TEST byte ptr [EBX + 0x1f],0x1      ; 005699a4
        ;   Label: LAB_005699a4
    JZ 0x005699ca                       ; 005699a8
        ;   XREF to: 005699ca (CONDITIONAL_JUMP)  ; LAB_005699ca
    MOV EBP,dword ptr [EDX]             ; 005699aa
    ADD EBP,0x4                         ; 005699ac
    MOV dword ptr [EDX],EBP             ; 005699af
    MOV EAX,dword ptr [EBP + -0x4]      ; 005699b1
    MOV dword ptr [ESP],EAX             ; 005699b4
    MOV EAX,dword ptr [EDX]             ; 005699b7
    ADD EAX,0x4                         ; 005699b9
    MOV dword ptr [EDX],EAX             ; 005699bc
    MOV EAX,dword ptr [EAX + -0x4]      ; 005699be
    MOV dword ptr [ESP + 0x4],EAX       ; 005699c1
    JMP 0x00569ac5                      ; 005699c5
        ;   XREF to: 00569ac5 (UNCONDITIONAL_JUMP)  ; LAB_00569ac5
    TEST byte ptr [EBX + 0x1e],0x20     ; 005699ca
        ;   Label: LAB_005699ca
    JZ 0x005699df                       ; 005699ce
        ;   XREF to: 005699df (CONDITIONAL_JUMP)  ; LAB_005699df
    MOV ECX,dword ptr [EDX]             ; 005699d0
    ADD ECX,0x4                         ; 005699d2
    MOV dword ptr [EDX],ECX             ; 005699d5
    MOV ECX,dword ptr [ECX + -0x4]      ; 005699d7
    JMP 0x00569ac5                      ; 005699da
        ;   XREF to: 00569ac5 (UNCONDITIONAL_JUMP)  ; LAB_00569ac5
    MOV EAX,dword ptr [EDX]             ; 005699df
        ;   Label: LAB_005699df
    ADD EAX,0x4                         ; 005699e1
    MOV dword ptr [EDX],EAX             ; 005699e4
    MOV ECX,dword ptr [EAX + -0x4]      ; 005699e6
    TEST byte ptr [EBX + 0x1e],0x10     ; 005699e9
    JZ 0x00569ac5                       ; 005699ed
        ;   XREF to: 00569ac5 (CONDITIONAL_JUMP)  ; LAB_00569ac5
    AND ECX,0xffff                      ; 005699f3
    JMP 0x00569ac5                      ; 005699f9
        ;   XREF to: 00569ac5 (UNCONDITIONAL_JUMP)  ; LAB_00569ac5
    TEST byte ptr [EBX + 0x1f],0x1      ; 005699fe
        ;   Label: LAB_005699fe
    JZ 0x00569a21                       ; 00569a02
        ;   XREF to: 00569a21 (CONDITIONAL_JUMP)  ; LAB_00569a21
    MOV EAX,dword ptr [EDX]             ; 00569a04
    ADD EAX,0x4                         ; 00569a06
    MOV dword ptr [EDX],EAX             ; 00569a09
    MOV EAX,dword ptr [EAX + -0x4]      ; 00569a0b
    MOV dword ptr [ESP],EAX             ; 00569a0e
    MOV EBP,dword ptr [EDX]             ; 00569a11
    ADD EBP,0x4                         ; 00569a13
    MOV dword ptr [EDX],EBP             ; 00569a16
    MOV EAX,dword ptr [EBP + -0x4]      ; 00569a18
    MOV dword ptr [ESP + 0x4],EAX       ; 00569a1b
    JMP 0x00569a47                      ; 00569a1f
        ;   XREF to: 00569a47 (UNCONDITIONAL_JUMP)  ; LAB_00569a47
    TEST byte ptr [EBX + 0x1e],0x20     ; 00569a21
        ;   Label: LAB_00569a21
    JZ 0x00569a33                       ; 00569a25
        ;   XREF to: 00569a33 (CONDITIONAL_JUMP)  ; LAB_00569a33
    MOV EBP,dword ptr [EDX]             ; 00569a27
    ADD EBP,0x4                         ; 00569a29
    MOV dword ptr [EDX],EBP             ; 00569a2c
    MOV ECX,dword ptr [EBP + -0x4]      ; 00569a2e
    JMP 0x00569a47                      ; 00569a31
        ;   XREF to: 00569a47 (UNCONDITIONAL_JUMP)  ; LAB_00569a47
    MOV ECX,dword ptr [EDX]             ; 00569a33
        ;   Label: LAB_00569a33
    ADD ECX,0x4                         ; 00569a35
    MOV dword ptr [EDX],ECX             ; 00569a38
    MOV AL,byte ptr [EBX + 0x1e]        ; 00569a3a
    MOV ECX,dword ptr [ECX + -0x4]      ; 00569a3d
    TEST AL,0x10                        ; 00569a40
    JZ 0x00569a47                       ; 00569a42
        ;   XREF to: 00569a47 (CONDITIONAL_JUMP)  ; LAB_00569a47
    MOVSX ECX,CX                        ; 00569a44
    XOR EAX,EAX                         ; 00569a47
        ;   Label: LAB_00569a47
    TEST byte ptr [EBX + 0x1f],0x1      ; 00569a49
    JZ 0x00569a58                       ; 00569a4d
        ;   XREF to: 00569a58 (CONDITIONAL_JUMP)  ; LAB_00569a58
    TEST byte ptr [ESP + 0x7],0x80      ; 00569a4f
    JZ 0x00569a5c                       ; 00569a54
        ;   XREF to: 00569a5c (CONDITIONAL_JUMP)  ; LAB_00569a5c
    JMP 0x00569a60                      ; 00569a56
        ;   XREF to: 00569a60 (UNCONDITIONAL_JUMP)  ; LAB_00569a60
    TEST ECX,ECX                        ; 00569a58
        ;   Label: LAB_00569a58
    JL 0x00569a60                       ; 00569a5a
        ;   XREF to: 00569a60 (CONDITIONAL_JUMP)  ; LAB_00569a60
    TEST EAX,EAX                        ; 00569a5c
        ;   Label: LAB_00569a5c
    JZ 0x00569a9c                       ; 00569a5e
        ;   XREF to: 00569a9c (CONDITIONAL_JUMP)  ; LAB_00569a9c
    MOV EAX,dword ptr [EBX + 0x20]      ; 00569a60
        ;   Label: LAB_00569a60
    LEA EBP,[EAX + 0x1]                 ; 00569a63
    MOV dword ptr [EBX + 0x20],EBP      ; 00569a66
    MOV byte ptr [ESI + EAX*0x1],0x2d   ; 00569a69
    TEST byte ptr [EBX + 0x1f],0x1      ; 00569a6d
    JZ 0x00569a98                       ; 00569a71
        ;   XREF to: 00569a98 (CONDITIONAL_JUMP)  ; LAB_00569a98
    MOV EAX,dword ptr [ESP]             ; 00569a73
    MOV EBP,dword ptr [ESP + 0x4]       ; 00569a76
    NOT EAX                             ; 00569a7a
    NOT EBP                             ; 00569a7c
    MOV dword ptr [ESP],EAX             ; 00569a7e
    MOV dword ptr [ESP + 0x4],EBP       ; 00569a81
    INC EAX                             ; 00569a85
    MOV dword ptr [ESP],EAX             ; 00569a86
    JNZ 0x00569a90                      ; 00569a89
        ;   XREF to: 00569a90 (CONDITIONAL_JUMP)  ; LAB_00569a90
    LEA EAX,[EBP + 0x1]                 ; 00569a8b
    JMP 0x00569a92                      ; 00569a8e
        ;   XREF to: 00569a92 (UNCONDITIONAL_JUMP)  ; LAB_00569a92
    MOV EAX,EBP                         ; 00569a90
        ;   Label: LAB_00569a90
    MOV dword ptr [ESP + 0x4],EAX       ; 00569a92
        ;   Label: LAB_00569a92
    JMP 0x00569ac5                      ; 00569a96
        ;   XREF to: 00569ac5 (UNCONDITIONAL_JUMP)  ; LAB_00569ac5
    NEG ECX                             ; 00569a98
        ;   Label: LAB_00569a98
    JMP 0x00569ac5                      ; 00569a9a
        ;   XREF to: 00569ac5 (UNCONDITIONAL_JUMP)  ; LAB_00569ac5
    MOV AH,byte ptr [EBX + 0x1e]        ; 00569a9c
        ;   Label: LAB_00569a9c
    TEST AH,0x4                         ; 00569a9f
    JZ 0x00569ab3                       ; 00569aa2
        ;   XREF to: 00569ab3 (CONDITIONAL_JUMP)  ; LAB_00569ab3
    MOV EAX,dword ptr [EBX + 0x20]      ; 00569aa4
    LEA EBP,[EAX + 0x1]                 ; 00569aa7
    MOV dword ptr [EBX + 0x20],EBP      ; 00569aaa
    MOV byte ptr [ESI + EAX*0x1],0x2b   ; 00569aad
    JMP 0x00569ac5                      ; 00569ab1
        ;   XREF to: 00569ac5 (UNCONDITIONAL_JUMP)  ; LAB_00569ac5
    TEST AH,0x2                         ; 00569ab3
        ;   Label: LAB_00569ab3
    JZ 0x00569ac5                       ; 00569ab6
        ;   XREF to: 00569ac5 (CONDITIONAL_JUMP)  ; LAB_00569ac5
    MOV EAX,dword ptr [EBX + 0x20]      ; 00569ab8
    LEA EBP,[EAX + 0x1]                 ; 00569abb
    MOV dword ptr [EBX + 0x20],EBP      ; 00569abe
    MOV byte ptr [ESI + EAX*0x1],0x20   ; 00569ac1
    MOV AL,byte ptr [EBX + 0x15]        ; 00569ac5
        ;   Label: LAB_00569ac5
    MOV EBP,0xa                         ; 00569ac8
    CMP AL,0x64                         ; 00569acd
    JC 0x00569b32                       ; 00569acf
        ;   XREF to: 00569b32 (CONDITIONAL_JUMP)  ; LAB_00569b32
    JBE 0x00569d17                      ; 00569ad1
        ;   XREF to: 00569d17 (CONDITIONAL_JUMP)  ; LAB_00569d17
    CMP AL,0x6f                         ; 00569ad7
    JC 0x00569b13                       ; 00569ad9
        ;   XREF to: 00569b13 (CONDITIONAL_JUMP)  ; LAB_00569b13
    JBE 0x00569cf7                      ; 00569adb
        ;   XREF to: 00569cf7 (CONDITIONAL_JUMP)  ; LAB_00569cf7
    CMP AL,0x73                         ; 00569ae1
    JC 0x00569b06                       ; 00569ae3
        ;   XREF to: 00569b06 (CONDITIONAL_JUMP)  ; LAB_00569b06
    JBE 0x00569be3                      ; 00569ae5
        ;   XREF to: 00569be3 (CONDITIONAL_JUMP)  ; LAB_00569be3
    CMP AL,0x75                         ; 00569aeb
    JC 0x00569f6a                       ; 00569aed
        ;   XREF to: 00569f6a (CONDITIONAL_JUMP)  ; LAB_00569f6a
    JBE 0x00569d17                      ; 00569af3
        ;   XREF to: 00569d17 (CONDITIONAL_JUMP)  ; LAB_00569d17
    CMP AL,0x78                         ; 00569af9
    JZ 0x00569cb5                       ; 00569afb
        ;   XREF to: 00569cb5 (CONDITIONAL_JUMP)  ; LAB_00569cb5
    JMP 0x00569f6a                      ; 00569b01
        ;   XREF to: 00569f6a (UNCONDITIONAL_JUMP)  ; LAB_00569f6a
    CMP AL,0x70                         ; 00569b06
        ;   Label: LAB_00569b06
    JZ 0x00569df2                       ; 00569b08
        ;   XREF to: 00569df2 (CONDITIONAL_JUMP)  ; LAB_00569df2
    JMP 0x00569f6a                      ; 00569b0e
        ;   XREF to: 00569f6a (UNCONDITIONAL_JUMP)  ; LAB_00569f6a
    CMP AL,0x66                         ; 00569b13
        ;   Label: LAB_00569b13
    JC 0x00569bb9                       ; 00569b15
        ;   XREF to: 00569bb9 (CONDITIONAL_JUMP)  ; LAB_00569bb9
    JBE 0x00569b83                      ; 00569b1b
        ;   XREF to: 00569b83 (CONDITIONAL_JUMP)  ; LAB_00569b83
    CMP AL,0x67                         ; 00569b1d
    JBE 0x00569bb9                      ; 00569b1f
        ;   XREF to: 00569bb9 (CONDITIONAL_JUMP)  ; LAB_00569bb9
    CMP AL,0x69                         ; 00569b25
    JZ 0x00569d17                       ; 00569b27
        ;   XREF to: 00569d17 (CONDITIONAL_JUMP)  ; LAB_00569d17
    JMP 0x00569f6a                      ; 00569b2d
        ;   XREF to: 00569f6a (UNCONDITIONAL_JUMP)  ; LAB_00569f6a
    CMP AL,0x47                         ; 00569b32
        ;   Label: LAB_00569b32
    JC 0x00569b6e                       ; 00569b34
        ;   XREF to: 00569b6e (CONDITIONAL_JUMP)  ; LAB_00569b6e
    JBE 0x00569bb9                      ; 00569b36
        ;   XREF to: 00569bb9 (CONDITIONAL_JUMP)  ; LAB_00569bb9
    CMP AL,0x53                         ; 00569b3c
    JC 0x00569b61                       ; 00569b3e
        ;   XREF to: 00569b61 (CONDITIONAL_JUMP)  ; LAB_00569b61
    JBE 0x00569be3                      ; 00569b40
        ;   XREF to: 00569be3 (CONDITIONAL_JUMP)  ; LAB_00569be3
    CMP AL,0x58                         ; 00569b46
    JC 0x00569f6a                       ; 00569b48
        ;   XREF to: 00569f6a (CONDITIONAL_JUMP)  ; LAB_00569f6a
    JBE 0x00569cb5                      ; 00569b4e
        ;   XREF to: 00569cb5 (CONDITIONAL_JUMP)  ; LAB_00569cb5
    CMP AL,0x63                         ; 00569b54
    JZ 0x00569e8a                       ; 00569b56
        ;   XREF to: 00569e8a (CONDITIONAL_JUMP)  ; LAB_00569e8a
    JMP 0x00569f6a                      ; 00569b5c
        ;   XREF to: 00569f6a (UNCONDITIONAL_JUMP)  ; LAB_00569f6a
    CMP AL,0x50                         ; 00569b61
        ;   Label: LAB_00569b61
    JZ 0x00569df2                       ; 00569b63
        ;   XREF to: 00569df2 (CONDITIONAL_JUMP)  ; LAB_00569df2
    JMP 0x00569f6a                      ; 00569b69
        ;   XREF to: 00569f6a (UNCONDITIONAL_JUMP)  ; LAB_00569f6a
    CMP AL,0x45                         ; 00569b6e
        ;   Label: LAB_00569b6e
    JC 0x00569b76                       ; 00569b70
        ;   XREF to: 00569b76 (CONDITIONAL_JUMP)  ; LAB_00569b76
    JBE 0x00569bb9                      ; 00569b72
        ;   XREF to: 00569bb9 (CONDITIONAL_JUMP)  ; LAB_00569bb9
    JMP 0x00569b83                      ; 00569b74
        ;   XREF to: 00569b83 (UNCONDITIONAL_JUMP)  ; LAB_00569b83
    CMP AL,0x43                         ; 00569b76
        ;   Label: LAB_00569b76
    JZ 0x00569f21                       ; 00569b78
        ;   XREF to: 00569f21 (CONDITIONAL_JUMP)  ; LAB_00569f21
    JMP 0x00569f6a                      ; 00569b7e
        ;   XREF to: 00569f6a (UNCONDITIONAL_JUMP)  ; LAB_00569f6a
    TEST byte ptr [EBX + 0x1e],0x10     ; 00569b83
        ;   Label: LAB_00569b83
    JZ 0x00569bb9                       ; 00569b87
        ;   XREF to: 00569bb9 (CONDITIONAL_JUMP)  ; LAB_00569bb9
    MOV EBP,dword ptr [EDX]             ; 00569b89
    ADD EBP,0x4                         ; 00569b8b
    MOV dword ptr [EDX],EBP             ; 00569b8e
    PUSH EBX                            ; 00569b90
    MOV ECX,dword ptr [EBP + -0x4]      ; 00569b91
    PUSH ECX                            ; 00569b94
    PUSH ESI                            ; 00569b95
    CALL FUN_0056974c                   ; 00569b96
        ;   XREF to: 0056974c (UNCONDITIONAL_CALL)  ; undefined FUN_0056974c()
    ADD ESP,0xc                         ; 00569b9b
    MOV AX,DS                           ; 00569b9e
    PUSH -0x1                           ; 00569ba0
    AND EAX,0xffff                      ; 00569ba2
    PUSH EAX                            ; 00569ba7
    PUSH ESI                            ; 00569ba8
    CALL FUN_0056963c                   ; 00569ba9
        ;   XREF to: 0056963c (UNCONDITIONAL_CALL)  ; undefined FUN_0056963c()
    ADD ESP,0xc                         ; 00569bae
    MOV dword ptr [EBX + 0x28],EAX      ; 00569bb1
    JMP 0x00569f7d                      ; 00569bb4
        ;   XREF to: 00569f7d (UNCONDITIONAL_JUMP)  ; LAB_00569f7d
    PUSH EBX                            ; 00569bb9
        ;   Label: LAB_00569bb9
    PUSH EDX                            ; 00569bba
    PUSH ESI                            ; 00569bbb
    CALL FUN_00569850                   ; 00569bbc
        ;   XREF to: 00569850 (UNCONDITIONAL_CALL)  ; undefined FUN_00569850()
    ADD ESP,0xc                         ; 00569bc1
    PUSH EBX                            ; 00569bc4
    CALL FUN_0056986c                   ; 00569bc5
        ;   XREF to: 0056986c (UNCONDITIONAL_CALL)  ; undefined FUN_0056986c()
    ADD ESP,0x4                         ; 00569bca
    LEA EDI,[ESI + 0x1]                 ; 00569bcd
    MOV word ptr [ESP + 0xc],DS         ; 00569bd0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00569bd4
    MOV EAX,EDI                         ; 00569bd8
    ADD ESP,0x10                        ; 00569bda
    POP EBP                             ; 00569bdd
    POP ES                              ; 00569bde
    POP EDI                             ; 00569bdf
    POP ESI                             ; 00569be0
    POP EBX                             ; 00569be1
    RET                                 ; 00569be2
    MOV byte ptr [ESI],0x0              ; 00569be3
        ;   Label: LAB_00569be3
    MOV CH,byte ptr [EBX + 0x1e]        ; 00569be6
    TEST CH,0x80                        ; 00569be9
    JZ 0x00569c0d                       ; 00569bec
        ;   XREF to: 00569c0d (CONDITIONAL_JUMP)  ; LAB_00569c0d
    MOV ESI,dword ptr [EDX]             ; 00569bee
    ADD ESI,0x8                         ; 00569bf0
    MOV dword ptr [EDX],ESI             ; 00569bf3
    MOV EDX,dword ptr [ESI + -0x8]      ; 00569bf5
    MOV AX,word ptr [ESI + -0x4]        ; 00569bf8
    TEST EDX,EDX                        ; 00569bfc
    JNZ 0x00569c05                      ; 00569bfe
        ;   XREF to: 00569c05 (CONDITIONAL_JUMP)  ; LAB_00569c05
    TEST AX,AX                          ; 00569c00
    JZ 0x00569c36                       ; 00569c03
        ;   XREF to: 00569c36 (CONDITIONAL_JUMP)  ; LAB_00569c36
    MOV dword ptr [ESP + 0xc],EAX       ; 00569c05
        ;   Label: LAB_00569c05
    MOV EDI,EDX                         ; 00569c09
    JMP 0x00569c36                      ; 00569c0b
        ;   XREF to: 00569c36 (UNCONDITIONAL_JUMP)  ; LAB_00569c36
    TEST CH,0x40                        ; 00569c0d
        ;   Label: LAB_00569c0d
    JZ 0x00569c22                       ; 00569c10
        ;   XREF to: 00569c22 (CONDITIONAL_JUMP)  ; LAB_00569c22
    MOV ECX,dword ptr [EDX]             ; 00569c12
    ADD ECX,0x4                         ; 00569c14
    MOV dword ptr [EDX],ECX             ; 00569c17
    MOV EAX,dword ptr [ECX + -0x4]      ; 00569c19
    TEST EAX,EAX                        ; 00569c1c
    JZ 0x00569c36                       ; 00569c1e
        ;   XREF to: 00569c36 (CONDITIONAL_JUMP)  ; LAB_00569c36
    JMP 0x00569c30                      ; 00569c20
        ;   XREF to: 00569c30 (UNCONDITIONAL_JUMP)  ; LAB_00569c30
    MOV EAX,dword ptr [EDX]             ; 00569c22
        ;   Label: LAB_00569c22
    ADD EAX,0x4                         ; 00569c24
    MOV dword ptr [EDX],EAX             ; 00569c27
    MOV EAX,dword ptr [EAX + -0x4]      ; 00569c29
    TEST EAX,EAX                        ; 00569c2c
    JZ 0x00569c36                       ; 00569c2e
        ;   XREF to: 00569c36 (CONDITIONAL_JUMP)  ; LAB_00569c36
    MOV word ptr [ESP + 0xc],DS         ; 00569c30
        ;   Label: LAB_00569c30
    MOV EDI,EAX                         ; 00569c34
    CMP byte ptr [EBX + 0x15],0x53      ; 00569c36
        ;   Label: LAB_00569c36
    JNZ 0x00569c5e                      ; 00569c3a
        ;   XREF to: 00569c5e (CONDITIONAL_JUMP)  ; LAB_00569c5e
    TEST byte ptr [EBX + 0x1e],0x10     ; 00569c3c
    JZ 0x00569c4a                       ; 00569c40
        ;   XREF to: 00569c4a (CONDITIONAL_JUMP)  ; LAB_00569c4a
    MOV ECX,dword ptr [EBX + 0x8]       ; 00569c42
    XOR EAX,EAX                         ; 00569c45
    PUSH ECX                            ; 00569c47
    JMP 0x00569c7e                      ; 00569c48
        ;   XREF to: 00569c7e (UNCONDITIONAL_JUMP)  ; LAB_00569c7e
    MOV EDX,dword ptr [EBX + 0x8]       ; 00569c4a
        ;   Label: LAB_00569c4a
    XOR EAX,EAX                         ; 00569c4d
    PUSH EDX                            ; 00569c4f
    MOV AX,word ptr [ESP + 0x10]        ; 00569c50
    PUSH EAX                            ; 00569c55
    PUSH EDI                            ; 00569c56
    CALL FUN_0056966c                   ; 00569c57
        ;   XREF to: 0056966c (UNCONDITIONAL_CALL)  ; undefined FUN_0056966c()
    JMP 0x00569c8a                      ; 00569c5c
        ;   XREF to: 00569c8a (UNCONDITIONAL_JUMP)  ; LAB_00569c8a
    TEST byte ptr [EBX + 0x1e],0x20     ; 00569c5e
        ;   Label: LAB_00569c5e
    JZ 0x00569c78                       ; 00569c62
        ;   XREF to: 00569c78 (CONDITIONAL_JUMP)  ; LAB_00569c78
    MOV EAX,dword ptr [EBX + 0x8]       ; 00569c64
    PUSH EAX                            ; 00569c67
    XOR EAX,EAX                         ; 00569c68
    MOV AX,word ptr [ESP + 0x10]        ; 00569c6a
    PUSH EAX                            ; 00569c6f
    PUSH EDI                            ; 00569c70
    CALL FUN_0056966c                   ; 00569c71
        ;   XREF to: 0056966c (UNCONDITIONAL_CALL)  ; undefined FUN_0056966c()
    JMP 0x00569c8a                      ; 00569c76
        ;   XREF to: 00569c8a (UNCONDITIONAL_JUMP)  ; LAB_00569c8a
    MOV EBP,dword ptr [EBX + 0x8]       ; 00569c78
        ;   Label: LAB_00569c78
    XOR EAX,EAX                         ; 00569c7b
    PUSH EBP                            ; 00569c7d
    MOV AX,word ptr [ESP + 0x10]        ; 00569c7e
        ;   Label: LAB_00569c7e
    PUSH EAX                            ; 00569c83
    PUSH EDI                            ; 00569c84
    CALL FUN_0056963c                   ; 00569c85
        ;   XREF to: 0056963c (UNCONDITIONAL_CALL)  ; undefined FUN_0056963c()
    ADD ESP,0xc                         ; 00569c8a
        ;   Label: LAB_00569c8a
    MOV ESI,dword ptr [EBX + 0x8]       ; 00569c8d
    MOV dword ptr [EBX + 0x28],EAX      ; 00569c90
    TEST ESI,ESI                        ; 00569c93
    JL 0x00569f7d                       ; 00569c95
        ;   XREF to: 00569f7d (CONDITIONAL_JUMP)  ; LAB_00569f7d
    CMP EAX,ESI                         ; 00569c9b
    JLE 0x00569f7d                      ; 00569c9d
        ;   XREF to: 00569f7d (CONDITIONAL_JUMP)  ; LAB_00569f7d
    MOV dword ptr [EBX + 0x28],ESI      ; 00569ca3
    MOV EDX,dword ptr [ESP + 0xc]       ; 00569ca6
    MOV EAX,EDI                         ; 00569caa
    ADD ESP,0x10                        ; 00569cac
    POP EBP                             ; 00569caf
    POP ES                              ; 00569cb0
    POP EDI                             ; 00569cb1
    POP ESI                             ; 00569cb2
    POP EBX                             ; 00569cb3
    RET                                 ; 00569cb4
    TEST byte ptr [EBX + 0x1e],0x1      ; 00569cb5
        ;   Label: LAB_00569cb5
    JZ 0x00569cf2                       ; 00569cb9
        ;   XREF to: 00569cf2 (CONDITIONAL_JUMP)  ; LAB_00569cf2
    TEST byte ptr [EBX + 0x1f],0x1      ; 00569cbb
    JZ 0x00569cd0                       ; 00569cbf
        ;   XREF to: 00569cd0 (CONDITIONAL_JUMP)  ; LAB_00569cd0
    CMP dword ptr [ESP],0x0             ; 00569cc1
    JNZ 0x00569cd4                      ; 00569cc5
        ;   XREF to: 00569cd4 (CONDITIONAL_JUMP)  ; LAB_00569cd4
    CMP dword ptr [ESP + 0x4],0x0       ; 00569cc7
    JZ 0x00569cf2                       ; 00569ccc
        ;   XREF to: 00569cf2 (CONDITIONAL_JUMP)  ; LAB_00569cf2
    JMP 0x00569cd4                      ; 00569cce
        ;   XREF to: 00569cd4 (UNCONDITIONAL_JUMP)  ; LAB_00569cd4
    TEST ECX,ECX                        ; 00569cd0
        ;   Label: LAB_00569cd0
    JZ 0x00569cf2                       ; 00569cd2
        ;   XREF to: 00569cf2 (CONDITIONAL_JUMP)  ; LAB_00569cf2
    MOV EAX,dword ptr [EBX + 0x20]      ; 00569cd4
        ;   Label: LAB_00569cd4
    LEA EDX,[EAX + 0x1]                 ; 00569cd7
    MOV dword ptr [EBX + 0x20],EDX      ; 00569cda
    MOV byte ptr [ESI + EAX*0x1],0x30   ; 00569cdd
    MOV EAX,dword ptr [EBX + 0x20]      ; 00569ce1
    LEA EDX,[EAX + 0x1]                 ; 00569ce4
    MOV dword ptr [EBX + 0x20],EDX      ; 00569ce7
    LEA EDX,[ESI + EAX*0x1]             ; 00569cea
    MOV AL,byte ptr [EBX + 0x15]        ; 00569ced
    MOV byte ptr [EDX],AL               ; 00569cf0
    MOV EBP,0x10                        ; 00569cf2
        ;   Label: LAB_00569cf2
    CMP byte ptr [EBX + 0x15],0x6f      ; 00569cf7
        ;   Label: LAB_00569cf7
    JNZ 0x00569d17                      ; 00569cfb
        ;   XREF to: 00569d17 (CONDITIONAL_JUMP)  ; LAB_00569d17
    MOV AH,byte ptr [EBX + 0x1e]        ; 00569cfd
    MOV EBP,0x8                         ; 00569d00
    TEST AH,0x1                         ; 00569d05
    JZ 0x00569d17                       ; 00569d08
        ;   XREF to: 00569d17 (CONDITIONAL_JUMP)  ; LAB_00569d17
    MOV EAX,dword ptr [EBX + 0x20]      ; 00569d0a
    LEA EDX,[EAX + 0x1]                 ; 00569d0d
    MOV dword ptr [EBX + 0x20],EDX      ; 00569d10
    MOV byte ptr [ESI + EAX*0x1],0x30   ; 00569d13
    MOV EAX,dword ptr [EBX + 0x20]      ; 00569d17
        ;   Label: LAB_00569d17
    MOV word ptr [ESP + 0xc],DS         ; 00569d1a
    ADD EAX,ESI                         ; 00569d1e
    MOV DL,byte ptr [EBX + 0x1f]        ; 00569d20
    MOV EDI,EAX                         ; 00569d23
    TEST DL,0x1                         ; 00569d25
    JZ 0x00569d73                       ; 00569d28
        ;   XREF to: 00569d73 (CONDITIONAL_JUMP)  ; LAB_00569d73
    CMP dword ptr [EBX + 0x8],0x0       ; 00569d2a
    JNZ 0x00569d4c                      ; 00569d2e
        ;   XREF to: 00569d4c (CONDITIONAL_JUMP)  ; LAB_00569d4c
    CMP dword ptr [ESP],0x0             ; 00569d30
    JNZ 0x00569d4c                      ; 00569d34
        ;   XREF to: 00569d4c (CONDITIONAL_JUMP)  ; LAB_00569d4c
    CMP dword ptr [ESP + 0x4],0x0       ; 00569d36
    JNZ 0x00569d4c                      ; 00569d3b
        ;   XREF to: 00569d4c (CONDITIONAL_JUMP)  ; LAB_00569d4c
    MOV ES,word ptr [ESP + 0xc]         ; 00569d3d
    MOV byte ptr ES:[EAX],0x0           ; 00569d41
    XOR EAX,EAX                         ; 00569d45
    JMP 0x00569dbd                      ; 00569d47
        ;   XREF to: 00569dbd (UNCONDITIONAL_JUMP)  ; LAB_00569dbd
    MOV EAX,dword ptr [EBX + 0x20]      ; 00569d4c
        ;   Label: LAB_00569d4c
    PUSH EBP                            ; 00569d4f
    ADD EAX,ESI                         ; 00569d50
    PUSH EAX                            ; 00569d52
    LEA EAX,[ESP + 0x8]                 ; 00569d53
    PUSH EAX                            ; 00569d57
    CALL crt_stdlib.c_i64toa_FUN_0056f3e0 ; 00569d58
        ;   XREF to: 0056f3e0 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c_i64toa_FUN_0056f3e0(longlong * value, char * buffer, int base)
    MOV CL,byte ptr [EBX + 0x15]        ; 00569d5d
    ADD ESP,0xc                         ; 00569d60
    CMP CL,0x58                         ; 00569d63
    JNZ 0x00569daa                      ; 00569d66
        ;   XREF to: 00569daa (CONDITIONAL_JUMP)  ; LAB_00569daa
    PUSH ESI                            ; 00569d68
    CALL FUN_00569f8c                   ; 00569d69
        ;   XREF to: 00569f8c (UNCONDITIONAL_CALL)  ; undefined FUN_00569f8c()
    ADD ESP,0x4                         ; 00569d6e
    JMP 0x00569daa                      ; 00569d71
        ;   XREF to: 00569daa (UNCONDITIONAL_JUMP)  ; LAB_00569daa
    CMP dword ptr [EBX + 0x8],0x0       ; 00569d73
        ;   Label: LAB_00569d73
    JNZ 0x00569d89                      ; 00569d77
        ;   XREF to: 00569d89 (CONDITIONAL_JUMP)  ; LAB_00569d89
    TEST ECX,ECX                        ; 00569d79
    JNZ 0x00569d89                      ; 00569d7b
        ;   XREF to: 00569d89 (CONDITIONAL_JUMP)  ; LAB_00569d89
    MOV ES,word ptr [ESP + 0xc]         ; 00569d7d
    MOV byte ptr ES:[EAX],0x0           ; 00569d81
    XOR EAX,EAX                         ; 00569d85
    JMP 0x00569dbd                      ; 00569d87
        ;   XREF to: 00569dbd (UNCONDITIONAL_JUMP)  ; LAB_00569dbd
    MOV EAX,dword ptr [EBX + 0x20]      ; 00569d89
        ;   Label: LAB_00569d89
    PUSH EBP                            ; 00569d8c
    ADD EAX,ESI                         ; 00569d8d
    PUSH EAX                            ; 00569d8f
    PUSH ECX                            ; 00569d90
    CALL crt_stdlib.c_utoa_FUN_0056f4f0 ; 00569d91
        ;   XREF to: 0056f4f0 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c_utoa_FUN_0056f4f0(uint value, char * buffer, int base)
    MOV DH,byte ptr [EBX + 0x15]        ; 00569d96
    ADD ESP,0xc                         ; 00569d99
    CMP DH,0x58                         ; 00569d9c
    JNZ 0x00569daa                      ; 00569d9f
        ;   XREF to: 00569daa (CONDITIONAL_JUMP)  ; LAB_00569daa
    PUSH ESI                            ; 00569da1
    CALL FUN_00569f8c                   ; 00569da2
        ;   XREF to: 00569f8c (UNCONDITIONAL_CALL)  ; undefined FUN_00569f8c()
    ADD ESP,0x4                         ; 00569da7
    XOR EAX,EAX                         ; 00569daa
        ;   Label: LAB_00569daa
    PUSH -0x1                           ; 00569dac
    MOV AX,word ptr [ESP + 0x10]        ; 00569dae
    PUSH EAX                            ; 00569db3
    PUSH EDI                            ; 00569db4
    CALL FUN_0056963c                   ; 00569db5
        ;   XREF to: 0056963c (UNCONDITIONAL_CALL)  ; undefined FUN_0056963c()
    ADD ESP,0xc                         ; 00569dba
    MOV EDX,EAX                         ; 00569dbd
        ;   Label: LAB_00569dbd
    MOV ESI,dword ptr [EBX + 0x8]       ; 00569dbf
    MOV dword ptr [EBX + 0x28],EAX      ; 00569dc2
    CMP EAX,ESI                         ; 00569dc5
    JGE 0x00569dd0                      ; 00569dc7
        ;   XREF to: 00569dd0 (CONDITIONAL_JUMP)  ; LAB_00569dd0
    MOV EAX,ESI                         ; 00569dc9
    SUB EAX,EDX                         ; 00569dcb
    MOV dword ptr [EBX + 0x24],EAX      ; 00569dcd
    CMP dword ptr [EBX + 0x8],-0x1      ; 00569dd0
        ;   Label: LAB_00569dd0
    JNZ 0x00569f7d                      ; 00569dd4
        ;   XREF to: 00569f7d (CONDITIONAL_JUMP)  ; LAB_00569f7d
    PUSH EBX                            ; 00569dda
    CALL FUN_0056986c                   ; 00569ddb
        ;   XREF to: 0056986c (UNCONDITIONAL_CALL)  ; undefined FUN_0056986c()
    ADD ESP,0x4                         ; 00569de0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00569de3
    MOV EAX,EDI                         ; 00569de7
    ADD ESP,0x10                        ; 00569de9
    POP EBP                             ; 00569dec
    POP ES                              ; 00569ded
    POP EDI                             ; 00569dee
    POP ESI                             ; 00569def
    POP EBX                             ; 00569df0
    RET                                 ; 00569df1
    CMP dword ptr [EBX + 0x4],0x0       ; 00569df2
        ;   Label: LAB_00569df2
    JNZ 0x00569e0e                      ; 00569df6
        ;   XREF to: 00569e0e (CONDITIONAL_JUMP)  ; LAB_00569e0e
    TEST byte ptr [EBX + 0x1e],0x80     ; 00569df8
    JZ 0x00569e07                       ; 00569dfc
        ;   XREF to: 00569e07 (CONDITIONAL_JUMP)  ; LAB_00569e07
    MOV dword ptr [EBX + 0x4],0xd       ; 00569dfe
    JMP 0x00569e0e                      ; 00569e05
        ;   XREF to: 00569e0e (UNCONDITIONAL_JUMP)  ; LAB_00569e0e
    MOV dword ptr [EBX + 0x4],0x8       ; 00569e07
        ;   Label: LAB_00569e07
    AND byte ptr [EBX + 0x1e],0xf9      ; 00569e0e
        ;   Label: LAB_00569e0e
    MOV ECX,dword ptr [EDX]             ; 00569e12
    ADD ECX,0x4                         ; 00569e14
    MOV dword ptr [EDX],ECX             ; 00569e17
    MOV EAX,ECX                         ; 00569e19
    MOV EBP,dword ptr [ECX + -0x4]      ; 00569e1b
    TEST byte ptr [EBX + 0x1e],0x80     ; 00569e1e
    JZ 0x00569e4a                       ; 00569e22
        ;   XREF to: 00569e4a (CONDITIONAL_JUMP)  ; LAB_00569e4a
    ADD EAX,0x4                         ; 00569e24
    MOV dword ptr [EDX],EAX             ; 00569e27
    PUSH 0x4                            ; 00569e29
    MOV EAX,dword ptr [EAX + -0x4]      ; 00569e2b
    PUSH ESI                            ; 00569e2e
    AND EAX,0xffff                      ; 00569e2f
    PUSH EAX                            ; 00569e34
    CALL FUN_005696e8                   ; 00569e35
        ;   XREF to: 005696e8 (UNCONDITIONAL_CALL)  ; undefined FUN_005696e8()
    ADD ESP,0xc                         ; 00569e3a
    PUSH 0x8                            ; 00569e3d
    LEA EAX,[ESI + 0x5]                 ; 00569e3f
    PUSH EAX                            ; 00569e42
    PUSH EBP                            ; 00569e43
    MOV byte ptr [ESI + 0x4],0x3a       ; 00569e44
    JMP 0x00569e4e                      ; 00569e48
        ;   XREF to: 00569e4e (UNCONDITIONAL_JUMP)  ; LAB_00569e4e
    PUSH 0x8                            ; 00569e4a
        ;   Label: LAB_00569e4a
    PUSH ESI                            ; 00569e4c
    PUSH EBP                            ; 00569e4d
    CALL FUN_005696e8                   ; 00569e4e
        ;   XREF to: 005696e8 (UNCONDITIONAL_CALL)  ; undefined FUN_005696e8()
        ;   Label: LAB_00569e4e
    ADD ESP,0xc                         ; 00569e53
    CMP byte ptr [EBX + 0x15],0x50      ; 00569e56
    JNZ 0x00569e65                      ; 00569e5a
        ;   XREF to: 00569e65 (CONDITIONAL_JUMP)  ; LAB_00569e65
    PUSH ESI                            ; 00569e5c
    CALL FUN_00569f8c                   ; 00569e5d
        ;   XREF to: 00569f8c (UNCONDITIONAL_CALL)  ; undefined FUN_00569f8c()
    ADD ESP,0x4                         ; 00569e62
    XOR EAX,EAX                         ; 00569e65
        ;   Label: LAB_00569e65
    PUSH -0x1                           ; 00569e67
    MOV AX,word ptr [ESP + 0x10]        ; 00569e69
    PUSH EAX                            ; 00569e6e
    PUSH EDI                            ; 00569e6f
    CALL FUN_0056963c                   ; 00569e70
        ;   XREF to: 0056963c (UNCONDITIONAL_CALL)  ; undefined FUN_0056963c()
    ADD ESP,0xc                         ; 00569e75
    MOV dword ptr [EBX + 0x20],EAX      ; 00569e78
    MOV EDX,dword ptr [ESP + 0xc]       ; 00569e7b
    MOV EAX,EDI                         ; 00569e7f
    ADD ESP,0x10                        ; 00569e81
    POP EBP                             ; 00569e84
    POP ES                              ; 00569e85
    POP EDI                             ; 00569e86
    POP ESI                             ; 00569e87
    POP EBX                             ; 00569e88
    RET                                 ; 00569e89
    MOV AH,byte ptr [EBX + 0x1e]        ; 00569e8a
        ;   Label: LAB_00569e8a
    MOV dword ptr [EBX + 0x20],0x1      ; 00569e8d
    TEST AH,0x20                        ; 00569e94
    JZ 0x00569f06                       ; 00569e97
        ;   XREF to: 00569f06 (CONDITIONAL_JUMP)  ; LAB_00569f06
    MOV ECX,dword ptr [EDX]             ; 00569e99
    ADD ECX,0x4                         ; 00569e9b
    MOV dword ptr [EDX],ECX             ; 00569e9e
    MOV AX,word ptr [ECX + -0x4]        ; 00569ea0
    AND EAX,0xffff                      ; 00569ea4
    PUSH EAX                            ; 00569ea9
    LEA EAX,[ESP + 0xc]                 ; 00569eaa
    PUSH EAX                            ; 00569eae
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0 ; 00569eaf
        ;   XREF to: 0056f3a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0(wchar_t wide_char, char * output_buffer)
    ADD ESP,0x8                         ; 00569eb4
    CMP EAX,-0x1                        ; 00569eb7
    JZ 0x00569f7d                       ; 00569eba
        ;   XREF to: 00569f7d (CONDITIONAL_JUMP)  ; LAB_00569f7d
    MOV AL,byte ptr [ESP + 0x8]         ; 00569ec0
    MOV EBP,dword ptr [0x02de5c30]      ; 00569ec4 | DAT_02de5c30
    MOV byte ptr [ESI],AL               ; 00569eca
    TEST EBP,EBP                        ; 00569ecc
    JZ 0x00569f7d                       ; 00569ece
        ;   XREF to: 00569f7d (CONDITIONAL_JUMP)  ; LAB_00569f7d
    XOR EAX,EAX                         ; 00569ed4
    MOV AL,byte ptr [ESP + 0x8]         ; 00569ed6
    MOV AL,byte ptr [EAX + 0x2de5c41]   ; 00569eda
    AND AL,0x1                          ; 00569ee0
    AND EAX,0xff                        ; 00569ee2
    JZ 0x00569f7d                       ; 00569ee7
        ;   XREF to: 00569f7d (CONDITIONAL_JUMP)  ; LAB_00569f7d
    MOV AL,byte ptr [ESP + 0x9]         ; 00569eed
    MOV byte ptr [ESI + 0x1],AL         ; 00569ef1
    INC dword ptr [EBX + 0x20]          ; 00569ef4
    MOV EDX,dword ptr [ESP + 0xc]       ; 00569ef7
    MOV EAX,EDI                         ; 00569efb
    ADD ESP,0x10                        ; 00569efd
    POP EBP                             ; 00569f00
    POP ES                              ; 00569f01
    POP EDI                             ; 00569f02
    POP ESI                             ; 00569f03
    POP EBX                             ; 00569f04
    RET                                 ; 00569f05
    MOV EBX,dword ptr [EDX]             ; 00569f06
        ;   Label: LAB_00569f06
    ADD EBX,0x4                         ; 00569f08
    MOV dword ptr [EDX],EBX             ; 00569f0b
    MOV AL,byte ptr [EBX + -0x4]        ; 00569f0d
    MOV byte ptr [ESI],AL               ; 00569f10
    MOV EDX,dword ptr [ESP + 0xc]       ; 00569f12
    MOV EAX,EDI                         ; 00569f16
    ADD ESP,0x10                        ; 00569f18
    POP EBP                             ; 00569f1b
    POP ES                              ; 00569f1c
    POP EDI                             ; 00569f1d
    POP ESI                             ; 00569f1e
    POP EBX                             ; 00569f1f
    RET                                 ; 00569f20
    MOV EAX,dword ptr [EDX]             ; 00569f21
        ;   Label: LAB_00569f21
    ADD EAX,0x4                         ; 00569f23
    MOV dword ptr [EDX],EAX             ; 00569f26
    MOV AX,word ptr [EAX + -0x4]        ; 00569f28
    AND EAX,0xffff                      ; 00569f2c
    PUSH EAX                            ; 00569f31
    PUSH ESI                            ; 00569f32
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0 ; 00569f33
        ;   XREF to: 0056f3a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0(wchar_t wide_char, char * output_buffer)
    ADD ESP,0x8                         ; 00569f38
    MOV EDX,EAX                         ; 00569f3b
    CMP EAX,-0x1                        ; 00569f3d
    JZ 0x00569f54                       ; 00569f40
        ;   XREF to: 00569f54 (CONDITIONAL_JUMP)  ; LAB_00569f54
    MOV dword ptr [EBX + 0x20],EAX      ; 00569f42
    MOV EDX,dword ptr [ESP + 0xc]       ; 00569f45
    MOV EAX,EDI                         ; 00569f49
    ADD ESP,0x10                        ; 00569f4b
    POP EBP                             ; 00569f4e
    POP ES                              ; 00569f4f
    POP EDI                             ; 00569f50
    POP ESI                             ; 00569f51
    POP EBX                             ; 00569f52
    RET                                 ; 00569f53
    MOV dword ptr [EBX + 0x20],0x0      ; 00569f54
        ;   Label: LAB_00569f54
    MOV EDX,dword ptr [ESP + 0xc]       ; 00569f5b
    MOV EAX,EDI                         ; 00569f5f
    ADD ESP,0x10                        ; 00569f61
    POP EBP                             ; 00569f64
    POP ES                              ; 00569f65
    POP EDI                             ; 00569f66
    POP ESI                             ; 00569f67
    POP EBX                             ; 00569f68
    RET                                 ; 00569f69
    MOV dword ptr [EBX + 0x4],0x0       ; 00569f6a
        ;   Label: LAB_00569f6a
    MOV AL,byte ptr [EBX + 0x15]        ; 00569f71
    MOV byte ptr [ESI],AL               ; 00569f74
    MOV dword ptr [EBX + 0x20],0x1      ; 00569f76
    MOV EDX,dword ptr [ESP + 0xc]       ; 00569f7d
        ;   Label: LAB_00569f7d
    MOV EAX,EDI                         ; 00569f81
    ADD ESP,0x10                        ; 00569f83
    POP EBP                             ; 00569f86
    POP ES                              ; 00569f87
    POP EDI                             ; 00569f88
    POP ESI                             ; 00569f89
    POP EBX                             ; 00569f8a
    RET                                 ; 00569f8b

