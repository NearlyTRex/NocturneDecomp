; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00463e30(int param_1,undefined4 *param_2,int param_3,uint param_4,uint param_5)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   FUN_00422f90 at 00423027
;   FUN_004232c0 at 004236e2
;   FUN_00462590 at 0046262e
;   FUN_00465da0 at 00465de6
;   FUN_00500d20 at 00500e5a
;   FUN_00502480 at 005025ba
;   FUN_0055d1a0 at 0055d2a1
;   FUN_0055d360 at 0055d3b8
;   FUN_0055d3f0 at 0055d42e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463e30
        ;   Label: FUN_00463e30
    PUSH ESI                            ; 00463e31
    PUSH EDI                            ; 00463e32
    PUSH EBP                            ; 00463e33
    SUB ESP,0x30                        ; 00463e34
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00463e37
    MOV EDX,dword ptr [ESP + 0x50]      ; 00463e3b
    MOV ECX,dword ptr [ESP + 0x54]      ; 00463e3f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00463e43
    MOV ESI,dword ptr [ESP + 0x44]      ; 00463e47
    MOV EAX,dword ptr [EAX + 0x48]      ; 00463e4b
    MOV dword ptr [ESI + 0x1c54],EAX    ; 00463e4e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00463e54
    MOV EAX,dword ptr [EAX]             ; 00463e58
    MOV dword ptr [ESI + 0x1c58],EAX    ; 00463e5a
    MOV EAX,dword ptr [ESP + 0x48]      ; 00463e60
    MOV EAX,dword ptr [EAX + 0x4]       ; 00463e64
    MOV dword ptr [ESI + 0x1c5c],EAX    ; 00463e67
    MOV EAX,dword ptr [ESI + 0x1c58]    ; 00463e6d
    MOV dword ptr [ESI + 0x1c60],0x0    ; 00463e73
    CMP EAX,0x1                         ; 00463e7d
    JLE 0x00463ea0                      ; 00463e80
        ;   XREF to: 00463ea0 (CONDITIONAL_JUMP)  ; LAB_00463ea0
    MOV ESI,dword ptr [ESP + 0x44]      ; 00463e82
    MOV EDI,dword ptr [ESI + 0x1c60]    ; 00463e86
        ;   Label: LAB_00463e86
    INC EDI                             ; 00463e8c
    SAR EAX,0x1                         ; 00463e8d
    MOV dword ptr [ESI + 0x1c60],EDI    ; 00463e8f
    CMP EAX,0x1                         ; 00463e95
    JG 0x00463e86                       ; 00463e98
        ;   XREF to: 00463e86 (CONDITIONAL_JUMP)  ; LAB_00463e86
    LEA EAX,[EAX]                       ; 00463e9a
    MOV EAX,dword ptr [ESP + 0x44]      ; 00463ea0
        ;   Label: LAB_00463ea0
    MOV ESI,dword ptr [ESP + 0x44]      ; 00463ea4
    MOV EAX,dword ptr [EAX + 0x1c60]    ; 00463ea8
    MOV dword ptr [ESI + 0x1cc8],0x8    ; 00463eae
    MOV dword ptr [ESI + 0x1c64],EAX    ; 00463eb8
    MOV EAX,dword ptr [ESI + 0x1cc0]    ; 00463ebe
    MOV dword ptr [ESI + 0x1ccc],0x8    ; 00463ec4
    CMP EAX,0x1                         ; 00463ece
    JLE 0x00463f00                      ; 00463ed1
        ;   XREF to: 00463f00 (CONDITIONAL_JUMP)  ; LAB_00463f00
    MOV ESI,dword ptr [ESP + 0x44]      ; 00463ed3
    MOV EBP,dword ptr [ESI + 0x1cc8]    ; 00463ed7
        ;   Label: LAB_00463ed7
    MOV EDI,dword ptr [ESI + 0x1ccc]    ; 00463edd
    INC EBP                             ; 00463ee3
    INC EDI                             ; 00463ee4
    MOV dword ptr [ESI + 0x1cc8],EBP    ; 00463ee5
    SAR EAX,0x1                         ; 00463eeb
    MOV dword ptr [ESI + 0x1ccc],EDI    ; 00463eed
    CMP EAX,0x1                         ; 00463ef3
    JG 0x00463ed7                       ; 00463ef6
        ;   XREF to: 00463ed7 (CONDITIONAL_JUMP)  ; LAB_00463ed7
    LEA EAX,[EAX]                       ; 00463ef8
    MOV EDX,EDX                         ; 00463efe
    MOV EAX,dword ptr [ESP + 0x44]      ; 00463f00
        ;   Label: LAB_00463f00
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 00463f04
    CMP EAX,0x100                       ; 00463f0a
    JGE 0x00463f40                      ; 00463f0f
        ;   XREF to: 00463f40 (CONDITIONAL_JUMP)  ; LAB_00463f40
    MOV ESI,dword ptr [ESP + 0x44]      ; 00463f11
    MOV EBP,dword ptr [ESI + 0x1cc8]    ; 00463f15
        ;   Label: LAB_00463f15
    MOV EDI,dword ptr [ESI + 0x1ccc]    ; 00463f1b
    INC EBP                             ; 00463f21
    INC EDI                             ; 00463f22
    MOV dword ptr [ESI + 0x1cc8],EBP    ; 00463f23
    ADD EAX,EAX                         ; 00463f29
    MOV dword ptr [ESI + 0x1ccc],EDI    ; 00463f2b
    CMP EAX,0x100                       ; 00463f31
    JL 0x00463f15                       ; 00463f36
        ;   XREF to: 00463f15 (CONDITIONAL_JUMP)  ; LAB_00463f15
    LEA EAX,[EAX]                       ; 00463f38
    MOV EDX,EDX                         ; 00463f3e
    MOV EAX,dword ptr [ESP + 0x44]      ; 00463f40
        ;   Label: LAB_00463f40
    MOV ESI,dword ptr [EAX + 0x1ccc]    ; 00463f44
    MOV EBP,dword ptr [EAX + 0x1cc8]    ; 00463f4a
    SUB ESI,EBX                         ; 00463f50
    SUB EBP,EBX                         ; 00463f52
    MOV dword ptr [EAX + 0x1ccc],ESI    ; 00463f54
    MOV dword ptr [EAX + 0x1cc8],EBP    ; 00463f5a
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 00463f60
    MOV EBX,dword ptr [ESP + 0x44]      ; 00463f66
    DEC EAX                             ; 00463f6a
    MOV EDI,dword ptr [EBX + 0x1c6c]    ; 00463f6b
    MOV dword ptr [EBX + 0x1c68],EAX    ; 00463f71
    TEST EDI,EDI                        ; 00463f77
    JZ 0x00464117                       ; 00463f79
        ;   XREF to: 00464117 (CONDITIONAL_JUMP)  ; LAB_00464117
    MOV EAX,EDX                         ; 00463f7f
    MOV dword ptr [ESP + 0xc],EDI       ; 00463f81
    XOR EBP,EBP                         ; 00463f85
    SAR EAX,0x8                         ; 00463f87
    AND EDX,0xff                        ; 00463f8a
    MOV dword ptr [ESP + 0x10],EBP      ; 00463f90
    MOV dword ptr [ESP + 0x1c],EAX      ; 00463f94
    MOV dword ptr [ESP + 0x24],EDX      ; 00463f98
    MOV EAX,ECX                         ; 00463f9c
    MOV EDX,dword ptr [EBX + 0x1c5c]    ; 00463f9e
    SAR EAX,0x8                         ; 00463fa4
    AND ECX,0xff                        ; 00463fa7
    MOV dword ptr [ESP + 0x4],EAX       ; 00463fad
    MOV dword ptr [ESP + 0x18],ECX      ; 00463fb1
    TEST EDX,EDX                        ; 00463fb5
    JLE 0x00464103                      ; 00463fb7
        ;   XREF to: 00464103 (CONDITIONAL_JUMP)  ; LAB_00464103
    MOV EAX,0xff                        ; 00463fbd
    MOV EBP,dword ptr [ESP + 0x24]      ; 00463fc2
    SUB EAX,EBP                         ; 00463fc6
    MOV dword ptr [ESP + 0x20],EAX      ; 00463fc8
    MOV EAX,0xff                        ; 00463fcc
    SUB EAX,ECX                         ; 00463fd1
    MOV dword ptr [ESP + 0x14],EAX      ; 00463fd3
    MOV EAX,dword ptr [ESP + 0x4]       ; 00463fd7
    INC EAX                             ; 00463fdb
    MOV dword ptr [ESP + 0x8],EAX       ; 00463fdc
    MOV EAX,dword ptr [ESP + 0x44]      ; 00463fe0
        ;   Label: LAB_00463fe0
    MOV ECX,dword ptr [ESP + 0x10]      ; 00463fe4
    MOV EBX,dword ptr [ESP + 0x4]       ; 00463fe8
    MOV EDX,dword ptr [ESP + 0x44]      ; 00463fec
    MOV EAX,dword ptr [EAX + 0x1c5c]    ; 00463ff0
    ADD ECX,EBX                         ; 00463ff6
    DEC EAX                             ; 00463ff8
    MOV ESI,dword ptr [EDX + 0x1c58]    ; 00463ff9
    AND ECX,EAX                         ; 00463fff
    IMUL ECX,ESI                        ; 00464001
    MOV EDX,dword ptr [EDX + 0x1c54]    ; 00464004
    MOV EDI,dword ptr [ESP + 0x8]       ; 0046400a
    LEA EBX,[EDX + ECX*0x1]             ; 0046400e
    MOV ECX,dword ptr [ESP + 0x44]      ; 00464011
    AND EAX,EDI                         ; 00464015
    MOV EBP,dword ptr [ECX + 0x1c58]    ; 00464017
    IMUL EAX,EBP                        ; 0046401d
    ADD EDX,EAX                         ; 00464020
    MOV dword ptr [ESP + 0x2c],EBX      ; 00464022
    MOV dword ptr [ESP + 0x28],EDX      ; 00464026
    XOR EAX,EAX                         ; 0046402a
    TEST EBP,EBP                        ; 0046402c
    JLE 0x004640cb                      ; 0046402e
        ;   XREF to: 004640cb (CONDITIONAL_JUMP)  ; LAB_004640cb
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00464034
    MOV ECX,dword ptr [ESP + 0xc]       ; 00464038
    INC EBX                             ; 0046403c
    MOV EDX,dword ptr [ESP + 0x44]      ; 0046403d
        ;   Label: LAB_0046403d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00464041
    MOV EDX,dword ptr [EDX + 0x1c58]    ; 00464045
    ADD EDI,EAX                         ; 0046404b
    DEC EDX                             ; 0046404d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0046404e
    AND EDI,EDX                         ; 00464052
    MOV EBP,dword ptr [ESP + 0x20]      ; 00464054
    MOVZX ESI,byte ptr [EDI + ESI*0x1]  ; 00464058
    IMUL EBP,ESI                        ; 0046405c
    MOV ESI,EBX                         ; 0046405f
    AND ESI,EDX                         ; 00464061
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00464063
    MOV dword ptr [ESP],EBP             ; 00464067
    MOV DL,byte ptr [EDX + ESI*0x1]     ; 0046406a
    MOV EBP,dword ptr [ESP + 0x24]      ; 0046406d
    AND EDX,0xff                        ; 00464071
    IMUL EDX,EBP                        ; 00464077
    ADD EDX,dword ptr [ESP]             ; 0046407a
    ADD EDI,dword ptr [ESP + 0x28]      ; 0046407d
    MOV EBP,dword ptr [ESP + 0x20]      ; 00464081
    MOVZX EDI,byte ptr [EDI]            ; 00464085
    IMUL EDI,EBP                        ; 00464088
    ADD ESI,dword ptr [ESP + 0x28]      ; 0046408b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0046408f
    MOVZX ESI,byte ptr [ESI]            ; 00464093
    IMUL ESI,EBP                        ; 00464096
    ADD ESI,EDI                         ; 00464099
    MOV EDI,dword ptr [ESP + 0x14]      ; 0046409b
    IMUL EDI,EDX                        ; 0046409f
    MOV EDX,dword ptr [ESP + 0x18]      ; 004640a2
    IMUL EDX,ESI                        ; 004640a6
    ADD EDX,EDI                         ; 004640a9
    SHR EDX,0x10                        ; 004640ab
    MOV dword ptr [ESP],EDX             ; 004640ae
    MOV DL,byte ptr [ESP]               ; 004640b1
    MOV byte ptr [ECX],DL               ; 004640b4
    MOV EDX,dword ptr [ESP + 0x44]      ; 004640b6
    INC ECX                             ; 004640ba
    INC EAX                             ; 004640bb
    MOV ESI,dword ptr [EDX + 0x1c58]    ; 004640bc
    INC EBX                             ; 004640c2
    CMP EAX,ESI                         ; 004640c3
    JL 0x0046403d                       ; 004640c5
        ;   XREF to: 0046403d (CONDITIONAL_JUMP)  ; LAB_0046403d
    MOV EAX,dword ptr [ESP + 0x44]      ; 004640cb
        ;   Label: LAB_004640cb
    MOV ECX,dword ptr [ESP + 0xc]       ; 004640cf
    MOV EBX,dword ptr [ESP + 0x8]       ; 004640d3
    MOV ESI,dword ptr [ESP + 0x10]      ; 004640d7
    MOV EDX,dword ptr [ESP + 0x44]      ; 004640db
    INC EBX                             ; 004640df
    INC ESI                             ; 004640e0
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 004640e1
    MOV EDI,dword ptr [EDX + 0x1c5c]    ; 004640e7
    MOV dword ptr [ESP + 0x8],EBX       ; 004640ed
    ADD ECX,EAX                         ; 004640f1
    MOV dword ptr [ESP + 0x10],ESI      ; 004640f3
    MOV dword ptr [ESP + 0xc],ECX       ; 004640f7
    CMP ESI,EDI                         ; 004640fb
    JL 0x00463fe0                       ; 004640fd
        ;   XREF to: 00463fe0 (CONDITIONAL_JUMP)  ; LAB_00463fe0
    MOV EAX,dword ptr [ESP + 0x44]      ; 00464103
        ;   Label: LAB_00464103
    MOV EDX,dword ptr [ESP + 0x44]      ; 00464107
    MOV EAX,dword ptr [EAX + 0x1c6c]    ; 0046410b
    MOV dword ptr [EDX + 0x1c54],EAX    ; 00464111
    MOV ESI,dword ptr [ESP + 0x48]      ; 00464117
        ;   Label: LAB_00464117
    MOV EDI,dword ptr [ESP + 0x44]      ; 0046411b
    ADD ESI,0x8                         ; 0046411f
    ADD EDI,0x1c74                      ; 00464122
    PUSH EDI                            ; 00464128
    MOV AL,byte ptr [ESI]               ; 00464129
        ;   Label: LAB_00464129
    MOV byte ptr [EDI],AL               ; 0046412b
    CMP AL,0x0                          ; 0046412d
    JZ 0x00464141                       ; 0046412f
        ;   XREF to: 00464141 (CONDITIONAL_JUMP)  ; LAB_00464141
    MOV AL,byte ptr [ESI + 0x1]         ; 00464131
    ADD ESI,0x2                         ; 00464134
    MOV byte ptr [EDI + 0x1],AL         ; 00464137
    ADD EDI,0x2                         ; 0046413a
    CMP AL,0x0                          ; 0046413d
    JNZ 0x00464129                      ; 0046413f
        ;   XREF to: 00464129 (CONDITIONAL_JUMP)  ; LAB_00464129
    POP EDI                             ; 00464141
        ;   Label: LAB_00464141
    ADD ESP,0x30                        ; 00464142
    POP EBP                             ; 00464145
    POP EDI                             ; 00464146
    POP ESI                             ; 00464147
    POP EBX                             ; 00464148
    RET                                 ; 00464149

