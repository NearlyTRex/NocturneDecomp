; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045ff30(int param_1,int param_2,int param_3,int param_4)
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
; XREF[1]:
;   FUN_00536990 at 00536c47
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;
; Called Functions:
;   FUN_00560d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ff30
        ;   Label: FUN_0045ff30
    PUSH ESI                            ; 0045ff31
    PUSH EDI                            ; 0045ff32
    PUSH EBP                            ; 0045ff33
    SUB ESP,0x30                        ; 0045ff34
    MOV EDI,dword ptr [ESP + 0x48]      ; 0045ff37
    MOV EBP,dword ptr [ESP + 0x50]      ; 0045ff3b
    CALL FUN_00560d70                   ; 0045ff3f
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00560d70()
    CMP dword ptr [0x005fba20],0x20     ; 0045ff44 | DAT_005fba20
    JNZ 0x004600cd                      ; 0045ff4b
        ;   XREF to: 004600cd (CONDITIONAL_JUMP)  ; LAB_004600cd
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045ff51
    XOR ESI,ESI                         ; 0045ff55
    MOV EDX,dword ptr [EAX + 0x1cc4]    ; 0045ff57
    MOV dword ptr [ESP + 0x18],ESI      ; 0045ff5d
    TEST EDX,EDX                        ; 0045ff61
    JLE 0x0045ffa7                      ; 0045ff63
        ;   XREF to: 0045ffa7 (CONDITIONAL_JUMP)  ; LAB_0045ffa7
    SHL EDI,0x2                         ; 0045ff65
    MOV dword ptr [ESP + 0x10],EDI      ; 0045ff68
    CMP dword ptr [0x005fba1c],0xf0     ; 0045ff6c | DAT_005fba1c
        ;   Label: LAB_0045ff6c
    JLE 0x0045ffaf                      ; 0045ff76
        ;   XREF to: 0045ffaf (CONDITIONAL_JUMP)  ; LAB_0045ffaf
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045ff78
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0045ff7c
    ADD EAX,EAX                         ; 0045ff80
    ADD EAX,EDX                         ; 0045ff82
    TEST EAX,EAX                        ; 0045ff84
        ;   Label: LAB_0045ff84
    JL 0x0045ff90                       ; 0045ff86
        ;   XREF to: 0045ff90 (CONDITIONAL_JUMP)  ; LAB_0045ff90
    CMP EAX,dword ptr [0x005fba1c]      ; 0045ff88 | DAT_005fba1c
    JL 0x0045ffb9                       ; 0045ff8e
        ;   XREF to: 0045ffb9 (CONDITIONAL_JUMP)  ; LAB_0045ffb9
    MOV ECX,dword ptr [ESP + 0x18]      ; 0045ff90
        ;   Label: LAB_0045ff90
    MOV EDX,dword ptr [ESP + 0x44]      ; 0045ff94
    INC ECX                             ; 0045ff98
    MOV EBX,dword ptr [EDX + 0x1cc4]    ; 0045ff99
    MOV dword ptr [ESP + 0x18],ECX      ; 0045ff9f
    CMP ECX,EBX                         ; 0045ffa3
    JL 0x0045ff6c                       ; 0045ffa5
        ;   XREF to: 0045ff6c (CONDITIONAL_JUMP)  ; LAB_0045ff6c
    ADD ESP,0x30                        ; 0045ffa7
        ;   Label: LAB_0045ffa7
    POP EBP                             ; 0045ffaa
    POP EDI                             ; 0045ffab
    POP ESI                             ; 0045ffac
    POP EBX                             ; 0045ffad
    RET                                 ; 0045ffae
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045ffaf
        ;   Label: LAB_0045ffaf
    ADD EAX,dword ptr [ESP + 0x4c]      ; 0045ffb3
    JMP 0x0045ff84                      ; 0045ffb7
        ;   XREF to: 0045ff84 (UNCONDITIONAL_JUMP)  ; LAB_0045ff84
    MOV ESI,dword ptr [EAX*0x4 + 0x1c5faec] ; 0045ffb9 | DAT_01c5faec
        ;   Label: LAB_0045ffb9
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045ffc0
    MOV ECX,dword ptr [ESP + 0x18]      ; 0045ffc4
    IMUL ECX,dword ptr [EAX + 0x1cc0]   ; 0045ffc8
    XOR EDX,EDX                         ; 0045ffcf
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045ffd1
    MOV dword ptr [ESP + 0x1c],EDX      ; 0045ffd5
    MOV EDX,dword ptr [ESP + 0x44]      ; 0045ffd9
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 0045ffdd
    ADD ECX,ECX                         ; 0045ffe3
    ADD ESI,EBX                         ; 0045ffe5
    ADD EAX,ECX                         ; 0045ffe7
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 0045ffe9
    XOR EDI,EDI                         ; 0045ffef
    TEST ECX,ECX                        ; 0045fff1
    JLE 0x0045ff90                      ; 0045fff3
        ;   XREF to: 0045ff90 (CONDITIONAL_JUMP)  ; LAB_0045ff90
    XOR EBX,EBX                         ; 0045fff5
        ;   Label: LAB_0045fff5
    MOV BX,word ptr [EAX]               ; 0045fff7
    TEST EBX,EBX                        ; 0045fffa
    JZ 0x0046008c                       ; 0045fffc
        ;   XREF to: 0046008c (CONDITIONAL_JUMP)  ; LAB_0046008c
    SHR EBX,0x6                         ; 00460002
    CMP EBX,0x7f                        ; 00460005
    JBE 0x0046000f                      ; 00460008
        ;   XREF to: 0046000f (CONDITIONAL_JUMP)  ; LAB_0046000f
    MOV EBX,0x7f                        ; 0046000a
    XOR BL,0x7f                         ; 0046000f
        ;   Label: LAB_0046000f
    TEST EBP,EBP                        ; 00460012
    JLE 0x00460025                      ; 00460014
        ;   XREF to: 00460025 (CONDITIONAL_JUMP)  ; LAB_00460025
    ADD EBX,EBP                         ; 00460016
    CMP EBX,0xff                        ; 00460018
    JBE 0x00460025                      ; 0046001e
        ;   XREF to: 00460025 (CONDITIONAL_JUMP)  ; LAB_00460025
    MOV EBX,0xff                        ; 00460020
    ADD EBX,dword ptr [ESP + 0x1c]      ; 00460025
        ;   Label: LAB_00460025
    SHR EBX,0x1                         ; 00460029
    MOV dword ptr [ESP + 0x1c],EBX      ; 0046002b
    LEA ECX,[EBX + EBX*0x1]             ; 0046002f
    ADD ECX,EBX                         ; 00460032
    ADD ECX,0x96                        ; 00460034
    SAR ECX,0x1                         ; 0046003a
    MOV dword ptr [ESP + 0x24],ECX      ; 0046003c
    MOV ECX,dword ptr [0x005fba20]      ; 00460040 | DAT_005fba20
    SHR EBX,0x1                         ; 00460046
    CMP ECX,0x20                        ; 00460048
    JNZ 0x004600b6                      ; 0046004b
        ;   XREF to: 004600b6 (CONDITIONAL_JUMP)  ; LAB_004600b6
    MOV EDX,dword ptr [ESP + 0x24]      ; 0046004d
    MOV CL,byte ptr [0x01c6af74]        ; 00460051 | DAT_01c6af74
    SHL EDX,CL                          ; 00460057
    MOV CL,byte ptr [0x01c6af80]        ; 00460059 | DAT_01c6af80
    MOV dword ptr [ESP],EDX             ; 0046005f
    MOV EDX,EBX                         ; 00460062
    SHL EDX,CL                          ; 00460064
    MOV ECX,EDX                         ; 00460066
    MOV EDX,dword ptr [ESP]             ; 00460068
    OR EDX,ECX                          ; 0046006b
    MOV CL,byte ptr [0x01c6af8c]        ; 0046006d | DAT_01c6af8c
    SHL EBX,CL                          ; 00460073
    MOV ECX,EBX                         ; 00460075
    OR ECX,EDX                          ; 00460077
    MOV EDX,dword ptr [0x005fba18]      ; 00460079 | DAT_005fba18
        ;   Label: LAB_00460079
    MOV dword ptr [ESI],ECX             ; 0046007f
    CMP EDX,0x140                       ; 00460081
    JLE 0x0046008c                      ; 00460087
        ;   XREF to: 0046008c (CONDITIONAL_JUMP)  ; LAB_0046008c
    MOV dword ptr [ESI + 0x4],ECX       ; 00460089
    MOV ECX,dword ptr [0x005fba18]      ; 0046008c | DAT_005fba18
        ;   Label: LAB_0046008c
    ADD EAX,0x2                         ; 00460092
    CMP ECX,0x140                       ; 00460095
    JLE 0x004600c8                      ; 0046009b
        ;   XREF to: 004600c8 (CONDITIONAL_JUMP)  ; LAB_004600c8
    ADD ESI,0x8                         ; 0046009d
    MOV EDX,dword ptr [ESP + 0x44]      ; 004600a0
        ;   Label: LAB_004600a0
    INC EDI                             ; 004600a4
    CMP EDI,dword ptr [EDX + 0x1cc0]    ; 004600a5
    JGE 0x0045ff90                      ; 004600ab
        ;   XREF to: 0045ff90 (CONDITIONAL_JUMP)  ; LAB_0045ff90
    JMP 0x0045fff5                      ; 004600b1
        ;   XREF to: 0045fff5 (UNCONDITIONAL_JUMP)  ; LAB_0045fff5
    MOV EDX,EBX                         ; 004600b6
        ;   Label: LAB_004600b6
    MOV ECX,dword ptr [ESP + 0x24]      ; 004600b8
    SHL EDX,0x8                         ; 004600bc
    SHL ECX,0x10                        ; 004600bf
    OR ECX,EDX                          ; 004600c2
    OR ECX,EBX                          ; 004600c4
    JMP 0x00460079                      ; 004600c6
        ;   XREF to: 00460079 (UNCONDITIONAL_JUMP)  ; LAB_00460079
    ADD ESI,0x4                         ; 004600c8
        ;   Label: LAB_004600c8
    JMP 0x004600a0                      ; 004600cb
        ;   XREF to: 004600a0 (UNCONDITIONAL_JUMP)  ; LAB_004600a0
    MOV EAX,dword ptr [ESP + 0x44]      ; 004600cd
        ;   Label: LAB_004600cd
    XOR ECX,ECX                         ; 004600d1
    MOV EBX,dword ptr [EAX + 0x1cc4]    ; 004600d3
    MOV dword ptr [ESP + 0x14],ECX      ; 004600d9
    TEST EBX,EBX                        ; 004600dd
    JLE 0x0045ffa7                      ; 004600df
        ;   XREF to: 0045ffa7 (CONDITIONAL_JUMP)  ; LAB_0045ffa7
    ADD EDI,EDI                         ; 004600e5
    MOV dword ptr [ESP + 0xc],EDI       ; 004600e7
    CMP dword ptr [0x005fba1c],0xf0     ; 004600eb | DAT_005fba1c
        ;   Label: LAB_004600eb
    JLE 0x0046012c                      ; 004600f5
        ;   XREF to: 0046012c (CONDITIONAL_JUMP)  ; LAB_0046012c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004600f7
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004600fb
    ADD EAX,EAX                         ; 004600ff
    ADD EAX,EDX                         ; 00460101
    TEST EAX,EAX                        ; 00460103
        ;   Label: LAB_00460103
    JL 0x0046010f                       ; 00460105
        ;   XREF to: 0046010f (CONDITIONAL_JUMP)  ; LAB_0046010f
    CMP EAX,dword ptr [0x005fba1c]      ; 00460107 | DAT_005fba1c
    JL 0x00460136                       ; 0046010d
        ;   XREF to: 00460136 (CONDITIONAL_JUMP)  ; LAB_00460136
    MOV ECX,dword ptr [ESP + 0x14]      ; 0046010f
        ;   Label: LAB_0046010f
    MOV EDX,dword ptr [ESP + 0x44]      ; 00460113
    INC ECX                             ; 00460117
    MOV EBX,dword ptr [EDX + 0x1cc4]    ; 00460118
    MOV dword ptr [ESP + 0x14],ECX      ; 0046011e
    CMP ECX,EBX                         ; 00460122
    JGE 0x0045ffa7                      ; 00460124
        ;   XREF to: 0045ffa7 (CONDITIONAL_JUMP)  ; LAB_0045ffa7
    JMP 0x004600eb                      ; 0046012a
        ;   XREF to: 004600eb (UNCONDITIONAL_JUMP)  ; LAB_004600eb
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046012c
        ;   Label: LAB_0046012c
    ADD EAX,dword ptr [ESP + 0x4c]      ; 00460130
    JMP 0x00460103                      ; 00460134
        ;   XREF to: 00460103 (UNCONDITIONAL_JUMP)  ; LAB_00460103
    MOV EDX,dword ptr [ESP + 0x44]      ; 00460136
        ;   Label: LAB_00460136
    MOV ESI,dword ptr [EAX*0x4 + 0x1c5faec] ; 0046013a | DAT_01c5faec
    MOV EAX,dword ptr [ESP + 0x14]      ; 00460141
    MOV EDI,dword ptr [EDX + 0x1cc0]    ; 00460145
    IMUL EAX,EDI                        ; 0046014b
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046014e
    MOV ECX,dword ptr [EDX + 0x2f94]    ; 00460152
    ADD EAX,EAX                         ; 00460158
    ADD ESI,EBX                         ; 0046015a
    ADD ECX,EAX                         ; 0046015c
    XOR EAX,EAX                         ; 0046015e
    MOV dword ptr [ESP + 0x28],ECX      ; 00460160
    MOV dword ptr [ESP + 0x20],EAX      ; 00460164
    MOV dword ptr [ESP + 0x2c],EAX      ; 00460168
    TEST EDI,EDI                        ; 0046016c
    JLE 0x0046010f                      ; 0046016e
        ;   XREF to: 0046010f (CONDITIONAL_JUMP)  ; LAB_0046010f
    MOV EAX,dword ptr [ESP + 0x28]      ; 00460170
        ;   Label: LAB_00460170
    XOR EBX,EBX                         ; 00460174
    MOV BX,word ptr [EAX]               ; 00460176
    TEST EBX,EBX                        ; 00460179
    JZ 0x0046022a                       ; 0046017b
        ;   XREF to: 0046022a (CONDITIONAL_JUMP)  ; LAB_0046022a
    SHR EBX,0x6                         ; 00460181
    CMP EBX,0x7f                        ; 00460184
    JBE 0x0046018e                      ; 00460187
        ;   XREF to: 0046018e (CONDITIONAL_JUMP)  ; LAB_0046018e
    MOV EBX,0x7f                        ; 00460189
    XOR BL,0x7f                         ; 0046018e
        ;   Label: LAB_0046018e
    TEST EBP,EBP                        ; 00460191
    JLE 0x004601a4                      ; 00460193
        ;   XREF to: 004601a4 (CONDITIONAL_JUMP)  ; LAB_004601a4
    ADD EBX,EBP                         ; 00460195
    CMP EBX,0xff                        ; 00460197
    JBE 0x004601a4                      ; 0046019d
        ;   XREF to: 004601a4 (CONDITIONAL_JUMP)  ; LAB_004601a4
    MOV EBX,0xff                        ; 0046019f
    ADD EBX,dword ptr [ESP + 0x20]      ; 004601a4
        ;   Label: LAB_004601a4
    SHR EBX,0x1                         ; 004601a8
    MOV dword ptr [ESP + 0x20],EBX      ; 004601aa
    LEA ECX,[EBX + EBX*0x1]             ; 004601ae
    ADD ECX,EBX                         ; 004601b1
    MOV EDI,dword ptr [0x01c6af78]      ; 004601b3 | DAT_01c6af78
    SHR ECX,0x2                         ; 004601b9
    XOR EDX,EDX                         ; 004601bc
    MOV EAX,ECX                         ; 004601be
    DIV EDI                             ; 004601c0
    MOV dword ptr [ESP + 0x4],ECX       ; 004601c2
    MOV dword ptr [ESP + 0x8],ECX       ; 004601c6
    MOV dword ptr [ESP + 0x4],EAX       ; 004601ca
    XOR EDX,EDX                         ; 004601ce
    MOV EAX,ECX                         ; 004601d0
    MOV ECX,dword ptr [0x01c6af84]      ; 004601d2 | DAT_01c6af84
    DIV ECX                             ; 004601d8
    MOV dword ptr [ESP + 0x8],EAX       ; 004601da
    XOR EDX,EDX                         ; 004601de
    MOV EAX,EBX                         ; 004601e0
    DIV dword ptr [0x01c6af90]          ; 004601e2 | DAT_01c6af90
    MOV CL,byte ptr [0x01c6af74]        ; 004601e8 | DAT_01c6af74
    MOV EDI,EAX                         ; 004601ee
    MOV EAX,dword ptr [ESP + 0x4]       ; 004601f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004601f4
    SHL EAX,CL                          ; 004601f8
    MOV CL,byte ptr [0x01c6af80]        ; 004601fa | DAT_01c6af80
    SHL EBX,CL                          ; 00460200
    MOV CL,byte ptr [0x01c6af8c]        ; 00460202 | DAT_01c6af8c
    OR EBX,EAX                          ; 00460208
    MOV EAX,EDI                         ; 0046020a
    SHL EAX,CL                          ; 0046020c
    MOV EDI,dword ptr [0x005fba18]      ; 0046020e | DAT_005fba18
    OR EAX,EBX                          ; 00460214
    XOR EBX,EBX                         ; 00460216
    MOV word ptr [ESI],AX               ; 00460218
    MOV BX,AX                           ; 0046021b
    CMP EDI,0x140                       ; 0046021e
    JLE 0x0046022a                      ; 00460224
        ;   XREF to: 0046022a (CONDITIONAL_JUMP)  ; LAB_0046022a
    MOV word ptr [ESI + 0x2],AX         ; 00460226
    MOV EAX,dword ptr [ESP + 0x28]      ; 0046022a
        ;   Label: LAB_0046022a
    ADD EAX,0x2                         ; 0046022e
    MOV EDX,dword ptr [0x005fba18]      ; 00460231 | DAT_005fba18
    MOV dword ptr [ESP + 0x28],EAX      ; 00460237
    CMP EDX,0x140                       ; 0046023b
    JLE 0x00460266                      ; 00460241
        ;   XREF to: 00460266 (CONDITIONAL_JUMP)  ; LAB_00460266
    ADD ESI,0x4                         ; 00460243
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00460246
        ;   Label: LAB_00460246
    MOV EDX,dword ptr [ESP + 0x44]      ; 0046024a
    INC EBX                             ; 0046024e
    MOV EDI,dword ptr [EDX + 0x1cc0]    ; 0046024f
    MOV dword ptr [ESP + 0x2c],EBX      ; 00460255
    CMP EBX,EDI                         ; 00460259
    JGE 0x0046010f                      ; 0046025b
        ;   XREF to: 0046010f (CONDITIONAL_JUMP)  ; LAB_0046010f
    JMP 0x00460170                      ; 00460261
        ;   XREF to: 00460170 (UNCONDITIONAL_JUMP)  ; LAB_00460170
    ADD ESI,0x2                         ; 00460266
        ;   Label: LAB_00460266
    JMP 0x00460246                      ; 00460269
        ;   XREF to: 00460246 (UNCONDITIONAL_JUMP)  ; LAB_00460246

