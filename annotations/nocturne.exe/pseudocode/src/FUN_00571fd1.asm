; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00571fd1(int param_1,int param_2)
;
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; Called Functions:
;   FUN_00566170
;   FUN_005689c0
;   FUN_0056bc10
;   FUN_0057301c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571fd1
        ;   Label: FUN_00571fd1
    PUSH ESI                            ; 00571fd2
    PUSH EDI                            ; 00571fd3
    PUSH EBP                            ; 00571fd4
    MOV EBP,ESP                         ; 00571fd5
    SUB ESP,0x4                         ; 00571fd7
    MOV EBX,dword ptr [EBP + 0x14]      ; 00571fda
    MOV EAX,dword ptr [EBX + 0x10]      ; 00571fdd
    SUB EAX,dword ptr [EBX + 0x14]      ; 00571fe0
    TEST EAX,EAX                        ; 00571fe3
    JG 0x0057201b                       ; 00571fe5
        ;   XREF to: 0057201b (CONDITIONAL_JUMP)  ; LAB_0057201b
    MOV dword ptr [EBX + 0xc],0x0       ; 00571fe7
    MOV dword ptr [EBX + 0x14],0x0      ; 00571fee
    MOV dword ptr [EBX + 0x10],0x0      ; 00571ff5
    MOV EAX,dword ptr [EBX + 0x4]       ; 00571ffc
        ;   Label: LAB_00571ffc
    TEST EAX,EAX                        ; 00571fff
    JNZ 0x00572107                      ; 00572001
        ;   XREF to: 00572107 (CONDITIONAL_JUMP)  ; LAB_00572107
    JZ 0x0057202f                       ; 00572007
        ;   XREF to: 0057202f (CONDITIONAL_JUMP)  ; LAB_0057202f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00572009
        ;   Label: LAB_00572009
    TEST EAX,EAX                        ; 0057200c
    JNZ 0x00572074                      ; 0057200e
        ;   XREF to: 00572074 (CONDITIONAL_JUMP)  ; LAB_00572074
    CMP dword ptr [EBP + 0x18],-0x1     ; 00572010
    JNZ 0x0057204b                      ; 00572014
        ;   XREF to: 0057204b (CONDITIONAL_JUMP)  ; LAB_0057204b
    JMP 0x00572100                      ; 00572016
        ;   XREF to: 00572100 (UNCONDITIONAL_JUMP)  ; LAB_00572100
    PUSH EBX                            ; 0057201b
        ;   Label: LAB_0057201b
    MOV EAX,dword ptr [EBX + 0x28]      ; 0057201c
    CALL dword ptr [EAX + 0x20]         ; 0057201f
    ADD ESP,0x4                         ; 00572022
    CMP EAX,-0x1                        ; 00572025
    JNZ 0x00571ffc                      ; 00572028
        ;   XREF to: 00571ffc (CONDITIONAL_JUMP)  ; LAB_00571ffc
    JMP 0x00572100                      ; 0057202a
        ;   XREF to: 00572100 (UNCONDITIONAL_JUMP)  ; LAB_00572100
    MOV EAX,dword ptr [EBX + 0x24]      ; 0057202f
        ;   Label: LAB_0057202f
    AND EAX,0x1                         ; 00572032
    JNZ 0x00572009                      ; 00572035
        ;   XREF to: 00572009 (CONDITIONAL_JUMP)  ; LAB_00572009
    PUSH EBX                            ; 00572037
    MOV EAX,dword ptr [EBX + 0x28]      ; 00572038
    CALL dword ptr [EAX + 0x28]         ; 0057203b
    ADD ESP,0x4                         ; 0057203e
    CMP EAX,-0x1                        ; 00572041
    JNZ 0x00572009                      ; 00572044
        ;   XREF to: 00572009 (CONDITIONAL_JUMP)  ; LAB_00572009
    JMP 0x00572100                      ; 00572046
        ;   XREF to: 00572100 (UNCONDITIONAL_JUMP)  ; LAB_00572100
    MOV AL,byte ptr [EBP + 0x18]        ; 0057204b
        ;   Label: LAB_0057204b
    PUSH 0x1                            ; 0057204e
    MOV byte ptr [EBP + -0x4],AL        ; 00572050
    LEA EAX,[EBP + -0x4]                ; 00572053
    PUSH EAX                            ; 00572056
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00572057
    PUSH EAX                            ; 0057205a
    CALL FUN_0057301c                   ; 0057205b
        ;   XREF to: 0057301c (UNCONDITIONAL_CALL)  ; undefined FUN_0057301c()
    ADD ESP,0xc                         ; 00572060
    CMP EAX,0x1                         ; 00572063
    SETZ AL                             ; 00572066
    AND EAX,0xff                        ; 00572069
    DEC EAX                             ; 0057206e
    JMP 0x00572100                      ; 0057206f
        ;   XREF to: 00572100 (UNCONDITIONAL_JUMP)  ; LAB_00572100
    MOV dword ptr [EBX + 0x18],EAX      ; 00572074
        ;   Label: LAB_00572074
    MOV EDX,dword ptr [EBX + 0x8]       ; 00572077
    MOV dword ptr [EBX + 0x20],EAX      ; 0057207a
    MOV dword ptr [EBX + 0x1c],EDX      ; 0057207d
    TEST byte ptr [EBX + 0x30],0x8      ; 00572080
        ;   Label: LAB_00572080
    JNZ 0x0057211a                      ; 00572084
        ;   XREF to: 0057211a (CONDITIONAL_JUMP)  ; LAB_0057211a
    CMP dword ptr [EBP + 0x18],-0x1     ; 0057208a
        ;   Label: LAB_0057208a
    JNZ 0x00572146                      ; 0057208e
        ;   XREF to: 00572146 (CONDITIONAL_JUMP)  ; LAB_00572146
    MOV EAX,dword ptr [EBX + 0x20]      ; 00572094
        ;   Label: LAB_00572094
    MOV ESI,dword ptr [EBX + 0x18]      ; 00572097
    SUB EAX,ESI                         ; 0057209a
    MOV ESI,EAX                         ; 0057209c
    TEST ESI,ESI                        ; 0057209e
        ;   Label: LAB_0057209e
    JBE 0x005720d1                      ; 005720a0
        ;   XREF to: 005720d1 (CONDITIONAL_JUMP)  ; LAB_005720d1
    CMP ESI,0x7fffffff                  ; 005720a2
    JBE 0x0057216d                      ; 005720a8
        ;   XREF to: 0057216d (CONDITIONAL_JUMP)  ; LAB_0057216d
    MOV EAX,0x7fffffff                  ; 005720ae
    PUSH EAX                            ; 005720b3
        ;   Label: LAB_005720b3
    MOV EAX,dword ptr [EBX + 0x18]      ; 005720b4
    PUSH EAX                            ; 005720b7
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005720b8
    PUSH EAX                            ; 005720bb
    CALL FUN_0057301c                   ; 005720bc
        ;   XREF to: 0057301c (UNCONDITIONAL_CALL)  ; undefined FUN_0057301c()
    ADD ESP,0xc                         ; 005720c1
    CMP EAX,-0x1                        ; 005720c4
    JZ 0x00572100                       ; 005720c7
        ;   XREF to: 00572100 (CONDITIONAL_JUMP)  ; LAB_00572100
    TEST EAX,EAX                        ; 005720c9
    JNZ 0x00572174                      ; 005720cb
        ;   XREF to: 00572174 (CONDITIONAL_JUMP)  ; LAB_00572174
    CMP dword ptr [EBP + 0x18],-0x1     ; 005720d1
        ;   Label: LAB_005720d1
    JZ 0x005720e9                       ; 005720d5
        ;   XREF to: 005720e9 (CONDITIONAL_JUMP)  ; LAB_005720e9
    MOV EAX,dword ptr [EBX + 0x20]      ; 005720d7
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005720da
    CMP EAX,EDX                         ; 005720dd
    JNC 0x005720fb                      ; 005720df
        ;   XREF to: 005720fb (CONDITIONAL_JUMP)  ; LAB_005720fb
    MOV DL,byte ptr [EBP + 0x18]        ; 005720e1
    MOV byte ptr [EAX],DL               ; 005720e4
    INC dword ptr [EBX + 0x20]          ; 005720e6
    TEST byte ptr [EBX + 0x30],0x8      ; 005720e9
        ;   Label: LAB_005720e9
    JNZ 0x005721b4                      ; 005720ed
        ;   XREF to: 005721b4 (CONDITIONAL_JUMP)  ; LAB_005721b4
    TEST ESI,ESI                        ; 005720f3
        ;   Label: LAB_005720f3
    JZ 0x005721d0                       ; 005720f5
        ;   XREF to: 005721d0 (CONDITIONAL_JUMP)  ; LAB_005721d0
    MOV EAX,0xffffffff                  ; 005720fb
        ;   Label: LAB_005720fb
    MOV ESP,EBP                         ; 00572100
        ;   Label: LAB_00572100
    POP EBP                             ; 00572102
    POP EDI                             ; 00572103
    POP ESI                             ; 00572104
    POP EBX                             ; 00572105
    RET                                 ; 00572106
    MOV EDX,dword ptr [EBX + 0x20]      ; 00572107
        ;   Label: LAB_00572107
    MOV ESI,dword ptr [EBX + 0x18]      ; 0057210a
    CMP EDX,ESI                         ; 0057210d
    JA 0x00572080                       ; 0057210f
        ;   XREF to: 00572080 (CONDITIONAL_JUMP)  ; LAB_00572080
    JMP 0x00572074                      ; 00572115
        ;   XREF to: 00572074 (UNCONDITIONAL_JUMP)  ; LAB_00572074
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0057211a
        ;   Label: LAB_0057211a
    PUSH EAX                            ; 0057211d
    CALL FUN_0056bc10                   ; 0057211e
        ;   XREF to: 0056bc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056bc10()
    ADD ESP,0x4                         ; 00572123
    MOV EDI,EAX                         ; 00572126
    TEST EAX,EAX                        ; 00572128
    JL 0x005720fb                       ; 0057212a
        ;   XREF to: 005720fb (CONDITIONAL_JUMP)  ; LAB_005720fb
    PUSH 0x2                            ; 0057212c
    PUSH 0x0                            ; 0057212e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00572130
    PUSH EAX                            ; 00572133
    CALL FUN_005689c0                   ; 00572134
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005689c0()
    ADD ESP,0xc                         ; 00572139
    TEST EAX,EAX                        ; 0057213c
    JGE 0x0057208a                      ; 0057213e
        ;   XREF to: 0057208a (CONDITIONAL_JUMP)  ; LAB_0057208a
    JMP 0x005720fb                      ; 00572144
        ;   XREF to: 005720fb (UNCONDITIONAL_JUMP)  ; LAB_005720fb
    MOV EAX,dword ptr [EBX + 0x20]      ; 00572146
        ;   Label: LAB_00572146
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00572149
    CMP EAX,EDX                         ; 0057214c
    JNC 0x00572094                      ; 0057214e
        ;   XREF to: 00572094 (CONDITIONAL_JUMP)  ; LAB_00572094
    MOV DL,byte ptr [EBP + 0x18]        ; 00572154
    MOV byte ptr [EAX],DL               ; 00572157
    MOV ESI,dword ptr [EBX + 0x20]      ; 00572159
    MOV EAX,0xffffffff                  ; 0057215c
    INC ESI                             ; 00572161
    MOV dword ptr [EBP + 0x18],EAX      ; 00572162
    MOV dword ptr [EBX + 0x20],ESI      ; 00572165
    JMP 0x00572094                      ; 00572168
        ;   XREF to: 00572094 (UNCONDITIONAL_JUMP)  ; LAB_00572094
    MOV EAX,ESI                         ; 0057216d
        ;   Label: LAB_0057216d
    JMP 0x005720b3                      ; 0057216f
        ;   XREF to: 005720b3 (UNCONDITIONAL_JUMP)  ; LAB_005720b3
    SUB ESI,EAX                         ; 00572174
        ;   Label: LAB_00572174
    TEST ESI,ESI                        ; 00572176
    JA 0x0057218b                       ; 00572178
        ;   XREF to: 0057218b (CONDITIONAL_JUMP)  ; LAB_0057218b
    MOV EAX,dword ptr [EBX + 0x18]      ; 0057217a
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0057217d
    MOV dword ptr [EBX + 0x20],EAX      ; 00572180
    MOV dword ptr [EBX + 0x1c],EDX      ; 00572183
    JMP 0x0057209e                      ; 00572186
        ;   XREF to: 0057209e (UNCONDITIONAL_JUMP)  ; LAB_0057209e
    MOV EDX,dword ptr [EBX + 0x18]      ; 0057218b
        ;   Label: LAB_0057218b
    PUSH ESI                            ; 0057218e
    ADD EAX,EDX                         ; 0057218f
    PUSH EAX                            ; 00572191
    PUSH EDX                            ; 00572192
    CALL FUN_00566170                   ; 00572193
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined FUN_00566170()
    MOV EAX,dword ptr [EBX + 0x18]      ; 00572198
    MOV dword ptr [EBX + 0x20],EAX      ; 0057219b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0057219e
    MOV ECX,dword ptr [EBX + 0x20]      ; 005721a1
    MOV dword ptr [EBX + 0x1c],EDX      ; 005721a4
    ADD ECX,ESI                         ; 005721a7
    ADD ESP,0xc                         ; 005721a9
    MOV dword ptr [EBX + 0x20],ECX      ; 005721ac
    JMP 0x0057209e                      ; 005721af
        ;   XREF to: 0057209e (UNCONDITIONAL_JUMP)  ; LAB_0057209e
    PUSH 0x0                            ; 005721b4
        ;   Label: LAB_005721b4
    PUSH EDI                            ; 005721b6
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005721b7
    PUSH EAX                            ; 005721ba
    CALL FUN_005689c0                   ; 005721bb
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005689c0()
    ADD ESP,0xc                         ; 005721c0
    TEST EAX,EAX                        ; 005721c3
    JGE 0x005720f3                      ; 005721c5
        ;   XREF to: 005720f3 (CONDITIONAL_JUMP)  ; LAB_005720f3
    JMP 0x005720fb                      ; 005721cb
        ;   XREF to: 005720fb (UNCONDITIONAL_JUMP)  ; LAB_005720fb
    XOR EAX,EAX                         ; 005721d0
        ;   Label: LAB_005721d0
    JMP 0x00572100                      ; 005721d2
        ;   XREF to: 00572100 (UNCONDITIONAL_JUMP)  ; LAB_00572100

