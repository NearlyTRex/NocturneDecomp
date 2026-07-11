; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056afe8(short param_1,int *param_2,uint param_3,uint *param_4)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0056b1a4 at 0056b1c8
;
; Referenced Globals:
;   undefined4 DAT_005c1680
;   undefined4 DAT_02de5461
;
; Called Functions:
;   FUN_005638e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056afe8
        ;   Label: FUN_0056afe8
    PUSH ESI                            ; 0056afe9
    PUSH EDI                            ; 0056afea
    PUSH EBP                            ; 0056afeb
    SUB ESP,0xc                         ; 0056afec
    MOV ESI,dword ptr [ESP + 0x24]      ; 0056afef
    MOV EDX,dword ptr [ESP + 0x28]      ; 0056aff3
    LEA EAX,[EDX + 0xb]                 ; 0056aff7
    AND AL,0xf8                         ; 0056affa
    CMP EAX,EDX                         ; 0056affc
    JNC 0x0056b007                      ; 0056affe
        ;   XREF to: 0056b007 (CONDITIONAL_JUMP)  ; LAB_0056b007
    MOV EAX,0xffffffff                  ; 0056b000
    JMP 0x0056b011                      ; 0056b005
        ;   XREF to: 0056b011 (UNCONDITIONAL_JUMP)  ; LAB_0056b011
    CMP EAX,0x10                        ; 0056b007
        ;   Label: LAB_0056b007
    JNC 0x0056b011                      ; 0056b00a
        ;   XREF to: 0056b011 (CONDITIONAL_JUMP)  ; LAB_0056b011
    MOV EAX,0x10                        ; 0056b00c
    LEA EDX,[ESI + -0x4]                ; 0056b011
        ;   Label: LAB_0056b011
    MOV dword ptr [ESP],EDX             ; 0056b014
    MOV EDX,dword ptr [EDX]             ; 0056b017
    AND DL,0xfe                         ; 0056b019
    CMP EAX,EDX                         ; 0056b01c
    JBE 0x0056b139                      ; 0056b01e
        ;   XREF to: 0056b139 (CONDITIONAL_JUMP)  ; LAB_0056b139
    MOV EBP,dword ptr [ESP]             ; 0056b024
    SUB EAX,EDX                         ; 0056b027
    ADD EBP,EDX                         ; 0056b029
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0056b02b
    MOV dword ptr [EDX],EAX             ; 0056b02f
    MOV EDI,dword ptr [EBP]             ; 0056b031
        ;   Label: LAB_0056b031
    CMP EDI,-0x1                        ; 0056b034
    JNZ 0x0056b043                      ; 0056b037
        ;   XREF to: 0056b043 (CONDITIONAL_JUMP)  ; LAB_0056b043
    MOV EAX,0x2                         ; 0056b039
    JMP 0x0056b19a                      ; 0056b03e
        ;   XREF to: 0056b19a (UNCONDITIONAL_JUMP)  ; LAB_0056b19a
    TEST DI,0x1                         ; 0056b043
        ;   Label: LAB_0056b043
    JNZ 0x0056b12c                      ; 0056b048
        ;   XREF to: 0056b12c (CONDITIONAL_JUMP)  ; LAB_0056b12c
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056b04e
    MOV dword ptr [ESP + 0x4],EAX       ; 0056b051
    MOV EAX,dword ptr [EBP + 0x4]       ; 0056b055
    MOV DX,DS                           ; 0056b058
    MOV dword ptr [ESP + 0x8],EAX       ; 0056b05a
    MOV EAX,0x5c1680                    ; 0056b05e | DAT_005c1680
    CMP DX,word ptr [ESP + 0x20]        ; 0056b063
    JNZ 0x0056b08b                      ; 0056b068
        ;   XREF to: 0056b08b (CONDITIONAL_JUMP)  ; LAB_0056b08b
    MOV EBX,dword ptr [0x005c1680]      ; 0056b06a | DAT_005c1680
    CMP dword ptr [EBX + 0x8],0x0       ; 0056b070
    JZ 0x0056b08b                       ; 0056b074
        ;   XREF to: 0056b08b (CONDITIONAL_JUMP)  ; LAB_0056b08b
    CMP EBX,ESI                         ; 0056b076
        ;   Label: LAB_0056b076
    JA 0x0056b082                       ; 0056b078
        ;   XREF to: 0056b082 (CONDITIONAL_JUMP)  ; LAB_0056b082
    MOV EAX,dword ptr [EBX]             ; 0056b07a
    ADD EAX,EBX                         ; 0056b07c
    CMP EAX,ESI                         ; 0056b07e
    JA 0x0056b08b                       ; 0056b080
        ;   XREF to: 0056b08b (CONDITIONAL_JUMP)  ; LAB_0056b08b
    MOV EBX,dword ptr [EBX + 0x8]       ; 0056b082
        ;   Label: LAB_0056b082
    CMP dword ptr [EBX + 0x8],0x0       ; 0056b085
    JNZ 0x0056b076                      ; 0056b089
        ;   XREF to: 0056b076 (CONDITIONAL_JUMP)  ; LAB_0056b076
    MOV EAX,dword ptr [EBX + 0xc]       ; 0056b08b
        ;   Label: LAB_0056b08b
    CMP EBP,EAX                         ; 0056b08e
    JNZ 0x0056b098                      ; 0056b090
        ;   XREF to: 0056b098 (CONDITIONAL_JUMP)  ; LAB_0056b098
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b092
    MOV dword ptr [EBX + 0xc],EAX       ; 0056b095
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0056b098
        ;   Label: LAB_0056b098
    CMP EDI,dword ptr [EAX]             ; 0056b09c
    JC 0x0056b0af                       ; 0056b09e
        ;   XREF to: 0056b0af (CONDITIONAL_JUMP)  ; LAB_0056b0af
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0056b0a0
    MOV EAX,EDI                         ; 0056b0a4
    MOV ECX,dword ptr [EDX]             ; 0056b0a6
    SUB EAX,ECX                         ; 0056b0a8
    CMP EAX,0x10                        ; 0056b0aa
    JNC 0x0056b0e6                      ; 0056b0ad
        ;   XREF to: 0056b0e6 (CONDITIONAL_JUMP)  ; LAB_0056b0e6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056b0af
        ;   Label: LAB_0056b0af
    MOV EDX,dword ptr [ESP + 0x4]       ; 0056b0b3
    MOV dword ptr [EAX + 0x8],EDX       ; 0056b0b7
    MOV EAX,EDX                         ; 0056b0ba
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056b0bc
    MOV dword ptr [EAX + 0x4],EDX       ; 0056b0c0
    MOV EAX,dword ptr [ESP]             ; 0056b0c3
    ADD dword ptr [EAX],EDI             ; 0056b0c6
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0056b0c8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0056b0cb
    DEC ECX                             ; 0056b0cf
    XOR DL,DL                           ; 0056b0d0
    MOV dword ptr [EBX + 0x1c],ECX      ; 0056b0d2
    MOV byte ptr [0x02de5461],DL        ; 0056b0d5 | DAT_02de5461
    MOV EDX,dword ptr [EAX]             ; 0056b0db
    CMP EDI,EDX                         ; 0056b0dd
    JC 0x0056b11f                       ; 0056b0df
        ;   XREF to: 0056b11f (CONDITIONAL_JUMP)  ; LAB_0056b11f
    JMP 0x0056b198                      ; 0056b0e1
        ;   XREF to: 0056b198 (UNCONDITIONAL_JUMP)  ; LAB_0056b198
    ADD EBP,ECX                         ; 0056b0e6
        ;   Label: LAB_0056b0e6
    MOV dword ptr [EBP],EAX             ; 0056b0e8
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056b0eb
    MOV dword ptr [EBP + 0x4],EAX       ; 0056b0ef
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b0f2
    MOV dword ptr [EBP + 0x8],EAX       ; 0056b0f6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056b0f9
    MOV dword ptr [EAX + 0x8],EBP       ; 0056b0fd
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b100
    MOV dword ptr [EAX + 0x4],EBP       ; 0056b104
    MOV EAX,dword ptr [EDX]             ; 0056b107
    MOV EDX,dword ptr [ESP]             ; 0056b109
    MOV EDI,dword ptr [EDX]             ; 0056b10c
    ADD EDI,EAX                         ; 0056b10e
    XOR AH,AH                           ; 0056b110
    MOV dword ptr [EDX],EDI             ; 0056b112
    MOV byte ptr [0x02de5461],AH        ; 0056b114 | DAT_02de5461
    JMP 0x0056b198                      ; 0056b11a
        ;   XREF to: 0056b198 (UNCONDITIONAL_JUMP)  ; LAB_0056b198
    MOV ECX,EDX                         ; 0056b11f
        ;   Label: LAB_0056b11f
    SUB ECX,EDI                         ; 0056b121
    ADD EBP,EDI                         ; 0056b123
    MOV dword ptr [EAX],ECX             ; 0056b125
    JMP 0x0056b031                      ; 0056b127
        ;   XREF to: 0056b031 (UNCONDITIONAL_JUMP)  ; LAB_0056b031
    MOV EAX,0x1                         ; 0056b12c
        ;   Label: LAB_0056b12c
    ADD ESP,0xc                         ; 0056b131
    POP EBP                             ; 0056b134
    POP EDI                             ; 0056b135
    POP ESI                             ; 0056b136
    POP EBX                             ; 0056b137
    RET                                 ; 0056b138
    SUB EDX,EAX                         ; 0056b139
        ;   Label: LAB_0056b139
    CMP EDX,0x10                        ; 0056b13b
    JC 0x0056b198                       ; 0056b13e
        ;   XREF to: 0056b198 (CONDITIONAL_JUMP)  ; LAB_0056b198
    MOV EBP,dword ptr [ESP]             ; 0056b140
    MOV EDI,EAX                         ; 0056b143
    OR DL,0x1                           ; 0056b145
    OR DI,0x1                           ; 0056b148
    LEA ECX,[EAX + EBP*0x1]             ; 0056b14c
    MOV dword ptr [EBP],EDI             ; 0056b14f
    MOV EAX,0x5c1680                    ; 0056b152 | DAT_005c1680
    MOV dword ptr [ECX],EDX             ; 0056b157
    MOV DX,DS                           ; 0056b159
    MOV dword ptr [ESP],ECX             ; 0056b15b
    CMP DX,word ptr [ESP + 0x20]        ; 0056b15e
    JNZ 0x0056b186                      ; 0056b163
        ;   XREF to: 0056b186 (CONDITIONAL_JUMP)  ; LAB_0056b186
    MOV EBX,dword ptr [0x005c1680]      ; 0056b165 | DAT_005c1680
    CMP dword ptr [EBX + 0x8],0x0       ; 0056b16b
    JZ 0x0056b186                       ; 0056b16f
        ;   XREF to: 0056b186 (CONDITIONAL_JUMP)  ; LAB_0056b186
    CMP EBX,ESI                         ; 0056b171
        ;   Label: LAB_0056b171
    JA 0x0056b17d                       ; 0056b173
        ;   XREF to: 0056b17d (CONDITIONAL_JUMP)  ; LAB_0056b17d
    MOV EAX,dword ptr [EBX]             ; 0056b175
    ADD EAX,EBX                         ; 0056b177
    CMP EAX,ESI                         ; 0056b179
    JA 0x0056b186                       ; 0056b17b
        ;   XREF to: 0056b186 (CONDITIONAL_JUMP)  ; LAB_0056b186
    MOV EBX,dword ptr [EBX + 0x8]       ; 0056b17d
        ;   Label: LAB_0056b17d
    CMP dword ptr [EBX + 0x8],0x0       ; 0056b180
    JNZ 0x0056b171                      ; 0056b184
        ;   XREF to: 0056b171 (CONDITIONAL_JUMP)  ; LAB_0056b171
    INC dword ptr [EBX + 0x18]          ; 0056b186
        ;   Label: LAB_0056b186
    MOV EAX,dword ptr [ESP]             ; 0056b189
    ADD EAX,0x4                         ; 0056b18c
    PUSH EAX                            ; 0056b18f
    CALL FUN_005638e0                   ; 0056b190
        ;   XREF to: 005638e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638e0()
    ADD ESP,0x4                         ; 0056b195
    XOR EAX,EAX                         ; 0056b198
        ;   Label: LAB_0056b198
    ADD ESP,0xc                         ; 0056b19a
        ;   Label: LAB_0056b19a
    POP EBP                             ; 0056b19d
    POP EDI                             ; 0056b19e
    POP ESI                             ; 0056b19f
    POP EBX                             ; 0056b1a0
    RET                                 ; 0056b1a1

