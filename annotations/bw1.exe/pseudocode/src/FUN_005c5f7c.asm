; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c5f7c(int param_1,int *param_2,int param_3,int param_4)
;
; Local Variables:
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
;
; XREF[1]:
;   FUN_005c5450 at 005c55df
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; Called Functions:
;   FUN_005c5430
;   FUN_005c543c
;   FUN_005c63e8
;   FUN_005c6418
;   FUN_005cb7e8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5f7c
        ;   Label: FUN_005c5f7c
    PUSH ESI                            ; 005c5f7d
    PUSH EDI                            ; 005c5f7e
    PUSH ES                             ; 005c5f7f
    PUSH EBP                            ; 005c5f80
    SUB ESP,0x28                        ; 005c5f81
    MOV EDI,dword ptr [ESP + 0x48]      ; 005c5f84
    XOR EDX,EDX                         ; 005c5f88
    XOR EBP,EBP                         ; 005c5f8a
    MOV dword ptr [ESP],EDX             ; 005c5f8c
    MOV dword ptr [ESP + 0x4],EDX       ; 005c5f8f
    MOV dword ptr [ESP + 0x24],EDX      ; 005c5f93
    MOV dword ptr [ESP + 0x20],EDX      ; 005c5f97
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c5f9b
        ;   Label: LAB_005c5f9b
    PUSH EAX                            ; 005c5f9f
    CALL FUN_005c5430                   ; 005c5fa0
        ;   XREF to: 005c5430 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5430()
    ADD ESP,0x4                         ; 005c5fa5
    MOV dword ptr [ESP + 0x18],EAX      ; 005c5fa8
    MOV BL,byte ptr [ESP + 0x18]        ; 005c5fac
    INC BL                              ; 005c5fb0
    AND EBX,0xff                        ; 005c5fb2
    TEST byte ptr [EBX + 0x626114],0x2  ; 005c5fb8 | DAT_00626114
    JZ 0x005c5fc7                       ; 005c5fbf
        ;   XREF to: 005c5fc7 (CONDITIONAL_JUMP)  ; LAB_005c5fc7
    INC dword ptr [ESP + 0x20]          ; 005c5fc1
    JMP 0x005c5f9b                      ; 005c5fc5
        ;   XREF to: 005c5f9b (UNCONDITIONAL_JUMP)  ; LAB_005c5f9b
    MOV EDX,dword ptr [ESP + 0x40]      ; 005c5fc7
        ;   Label: LAB_005c5fc7
    TEST byte ptr [EDX + 0x10],0x2      ; 005c5fcb
    JNZ 0x005c6298                      ; 005c5fcf
        ;   XREF to: 005c6298 (CONDITIONAL_JUMP)  ; LAB_005c6298
    MOV EBX,dword ptr [EDX + 0xc]       ; 005c5fd5
    LEA ESI,[EBX + -0x1]                ; 005c5fd8
    MOV dword ptr [EDX + 0xc],ESI       ; 005c5fdb
    TEST EBX,EBX                        ; 005c5fde
    JZ 0x005c6286                       ; 005c5fe0
        ;   XREF to: 005c6286 (CONDITIONAL_JUMP)  ; LAB_005c6286
    MOV EBX,0x2b                        ; 005c5fe6
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005c5feb
    MOV dword ptr [ESP + 0x1c],EBX      ; 005c5fef
    TEST ECX,ECX                        ; 005c5ff3
    JZ 0x005c602b                       ; 005c5ff5
        ;   XREF to: 005c602b (CONDITIONAL_JUMP)  ; LAB_005c602b
    CMP EAX,EBX                         ; 005c5ff7
    JZ 0x005c6000                       ; 005c5ff9
        ;   XREF to: 005c6000 (CONDITIONAL_JUMP)  ; LAB_005c6000
    CMP EAX,0x2d                        ; 005c5ffb
    JNZ 0x005c602b                      ; 005c5ffe
        ;   XREF to: 005c602b (CONDITIONAL_JUMP)  ; LAB_005c602b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c6000
        ;   Label: LAB_005c6000
    MOV dword ptr [ESP + 0x1c],EAX      ; 005c6004
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c6008
    MOV ESI,dword ptr [ESP + 0x40]      ; 005c600c
    INC EAX                             ; 005c6010
    PUSH ESI                            ; 005c6011
    MOV dword ptr [ESP + 0x24],EAX      ; 005c6012
    CALL FUN_005c6418                   ; 005c6016
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c601b
    MOV dword ptr [ESP + 0x18],EAX      ; 005c601e
    CMP EAX,-0x1                        ; 005c6022
    JZ 0x005c6298                       ; 005c6025
        ;   XREF to: 005c6298 (CONDITIONAL_JUMP)  ; LAB_005c6298
    TEST EDI,EDI                        ; 005c602b
        ;   Label: LAB_005c602b
    JNZ 0x005c60a2                      ; 005c602d
        ;   XREF to: 005c60a2 (CONDITIONAL_JUMP)  ; LAB_005c60a2
    CMP dword ptr [ESP + 0x18],0x30     ; 005c6033
    JNZ 0x005c609b                      ; 005c6038
        ;   XREF to: 005c609b (CONDITIONAL_JUMP)  ; LAB_005c609b
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c603a
    PUSH EAX                            ; 005c603e
    CALL FUN_005c6418                   ; 005c603f
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c6044
    MOV EBP,0x1                         ; 005c6047
    MOV dword ptr [ESP + 0x18],EAX      ; 005c604c
    CMP EAX,-0x1                        ; 005c6050
    JZ 0x005c6298                       ; 005c6053
        ;   XREF to: 005c6298 (CONDITIONAL_JUMP)  ; LAB_005c6298
    CMP EAX,0x78                        ; 005c6059
    JZ 0x005c6063                       ; 005c605c
        ;   XREF to: 005c6063 (CONDITIONAL_JUMP)  ; LAB_005c6063
    CMP EAX,0x58                        ; 005c605e
    JNZ 0x005c6094                      ; 005c6061
        ;   XREF to: 005c6094 (CONDITIONAL_JUMP)  ; LAB_005c6094
    MOV EDX,dword ptr [ESP + 0x40]      ; 005c6063
        ;   Label: LAB_005c6063
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c6067
    PUSH EDX                            ; 005c606b
    ADD EBX,0x2                         ; 005c606c
    CALL FUN_005c6418                   ; 005c606f
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    MOV dword ptr [ESP + 0x24],EBX      ; 005c6074
    ADD ESP,0x4                         ; 005c6078
    XOR EBP,EBP                         ; 005c607b
    MOV dword ptr [ESP + 0x18],EAX      ; 005c607d
    CMP EAX,-0x1                        ; 005c6081
    JZ 0x005c6298                       ; 005c6084
        ;   XREF to: 005c6298 (CONDITIONAL_JUMP)  ; LAB_005c6298
    MOV EDI,0x10                        ; 005c608a
    JMP 0x005c60fe                      ; 005c608f
        ;   XREF to: 005c60fe (UNCONDITIONAL_JUMP)  ; LAB_005c60fe
    MOV EDI,0x8                         ; 005c6094
        ;   Label: LAB_005c6094
    JMP 0x005c60fe                      ; 005c6099
        ;   XREF to: 005c60fe (UNCONDITIONAL_JUMP)  ; LAB_005c60fe
    MOV EDI,0xa                         ; 005c609b
        ;   Label: LAB_005c609b
    JMP 0x005c60fe                      ; 005c60a0
        ;   XREF to: 005c60fe (UNCONDITIONAL_JUMP)  ; LAB_005c60fe
    CMP EDI,0x10                        ; 005c60a2
        ;   Label: LAB_005c60a2
    JNZ 0x005c60fe                      ; 005c60a5
        ;   XREF to: 005c60fe (CONDITIONAL_JUMP)  ; LAB_005c60fe
    CMP dword ptr [ESP + 0x18],0x30     ; 005c60a7
    JNZ 0x005c60fe                      ; 005c60ac
        ;   XREF to: 005c60fe (CONDITIONAL_JUMP)  ; LAB_005c60fe
    MOV EBX,dword ptr [ESP + 0x40]      ; 005c60ae
    PUSH EBX                            ; 005c60b2
    CALL FUN_005c6418                   ; 005c60b3
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c60b8
    MOV EBP,0x1                         ; 005c60bb
    MOV dword ptr [ESP + 0x18],EAX      ; 005c60c0
    CMP EAX,-0x1                        ; 005c60c4
    JZ 0x005c6298                       ; 005c60c7
        ;   XREF to: 005c6298 (CONDITIONAL_JUMP)  ; LAB_005c6298
    CMP EAX,0x78                        ; 005c60cd
    JZ 0x005c60d7                       ; 005c60d0
        ;   XREF to: 005c60d7 (CONDITIONAL_JUMP)  ; LAB_005c60d7
    CMP EAX,0x58                        ; 005c60d2
    JNZ 0x005c60fe                      ; 005c60d5
        ;   XREF to: 005c60fe (CONDITIONAL_JUMP)  ; LAB_005c60fe
    MOV ECX,dword ptr [ESP + 0x40]      ; 005c60d7
        ;   Label: LAB_005c60d7
    MOV ESI,dword ptr [ESP + 0x20]      ; 005c60db
    PUSH ECX                            ; 005c60df
    ADD ESI,0x2                         ; 005c60e0
    CALL FUN_005c6418                   ; 005c60e3
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    MOV dword ptr [ESP + 0x24],ESI      ; 005c60e8
    ADD ESP,0x4                         ; 005c60ec
    XOR EBP,EBP                         ; 005c60ef
    MOV dword ptr [ESP + 0x18],EAX      ; 005c60f1
    CMP EAX,-0x1                        ; 005c60f5
    JZ 0x005c6298                       ; 005c60f8
        ;   XREF to: 005c6298 (CONDITIONAL_JUMP)  ; LAB_005c6298
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c60fe
        ;   Label: LAB_005c60fe
    TEST byte ptr [EAX + 0x10],0x40     ; 005c6102
    JZ 0x005c620d                       ; 005c6106
        ;   XREF to: 005c620d (CONDITIONAL_JUMP)  ; LAB_005c620d
    XOR ECX,ECX                         ; 005c610c
    MOV dword ptr [ESP + 0x10],EDI      ; 005c610e
    MOV dword ptr [ESP + 0x14],ECX      ; 005c6112
    MOV ECX,dword ptr [ESP + 0x18]      ; 005c6116
        ;   Label: LAB_005c6116
    PUSH ECX                            ; 005c611a
    CALL FUN_005c63e8                   ; 005c611b
        ;   XREF to: 005c63e8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c63e8()
    ADD ESP,0x4                         ; 005c6120
    CMP EAX,EDI                         ; 005c6123
    JGE 0x005c6185                      ; 005c6125
        ;   XREF to: 005c6185 (CONDITIONAL_JUMP)  ; LAB_005c6185
    LEA EBX,[ESP + 0x10]                ; 005c6127
    MOV dword ptr [ESP + 0x8],EAX       ; 005c612b
    XOR ESI,ESI                         ; 005c612f
    MOV EAX,ESP                         ; 005c6131
    MOV dword ptr [ESP + 0xc],ESI       ; 005c6133
    MOV ESI,ESP                         ; 005c6137
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c6139
    MOV EAX,dword ptr [EAX]             ; 005c613c
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c613e
    MOV EBX,dword ptr [EBX]             ; 005c6141
    CALL FUN_005cb7e8                   ; 005c6143
        ;   XREF to: 005cb7e8 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb7e8()
    MOV dword ptr [ESI + 0x4],EDX       ; 005c6148
    MOV dword ptr [ESI],EAX             ; 005c614b
    MOV ESI,ESP                         ; 005c614d
    LEA EBX,[ESP + 0x8]                 ; 005c614f
    MOV EAX,ESP                         ; 005c6153
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c6155
    MOV EAX,dword ptr [EAX]             ; 005c6158
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c615a
    MOV EBX,dword ptr [EBX]             ; 005c615d
    ADD EAX,EBX                         ; 005c615f
    ADC EDX,ECX                         ; 005c6161
    MOV dword ptr [ESI + 0x4],EDX       ; 005c6163
    MOV dword ptr [ESI],EAX             ; 005c6166
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c6168
    PUSH EAX                            ; 005c616c
    CALL FUN_005c6418                   ; 005c616d
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c6172
    INC EBP                             ; 005c6175
    MOV dword ptr [ESP + 0x18],EAX      ; 005c6176
    CMP EAX,-0x1                        ; 005c617a
    JZ 0x005c6298                       ; 005c617d
        ;   XREF to: 005c6298 (CONDITIONAL_JUMP)  ; LAB_005c6298
    JMP 0x005c6116                      ; 005c6183
        ;   XREF to: 005c6116 (UNCONDITIONAL_JUMP)  ; LAB_005c6116
    CMP dword ptr [ESP + 0x18],0x3a     ; 005c6185
        ;   Label: LAB_005c6185
    JNZ 0x005c6286                      ; 005c618a
        ;   XREF to: 005c6286 (CONDITIONAL_JUMP)  ; LAB_005c6286
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c6190
    TEST byte ptr [EAX + 0x10],0x80     ; 005c6194
    JZ 0x005c6286                       ; 005c6198
        ;   XREF to: 005c6286 (CONDITIONAL_JUMP)  ; LAB_005c6286
    MOV EBX,dword ptr [ESP + 0x40]      ; 005c619e
        ;   Label: LAB_005c619e
    PUSH EBX                            ; 005c61a2
    CALL FUN_005c6418                   ; 005c61a3
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c61a8
    INC EBP                             ; 005c61ab
    MOV dword ptr [ESP + 0x18],EAX      ; 005c61ac
    CMP EAX,-0x1                        ; 005c61b0
    JZ 0x005c6298                       ; 005c61b3
        ;   XREF to: 005c6298 (CONDITIONAL_JUMP)  ; LAB_005c6298
    PUSH EAX                            ; 005c61b9
    CALL FUN_005c63e8                   ; 005c61ba
        ;   XREF to: 005c63e8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c63e8()
    ADD ESP,0x4                         ; 005c61bf
    CMP EAX,EDI                         ; 005c61c2
    JGE 0x005c6286                      ; 005c61c4
        ;   XREF to: 005c6286 (CONDITIONAL_JUMP)  ; LAB_005c6286
    MOV ESI,ESP                         ; 005c61ca
    LEA EBX,[ESP + 0x10]                ; 005c61cc
    MOV dword ptr [ESP + 0x8],EAX       ; 005c61d0
    XOR ECX,ECX                         ; 005c61d4
    MOV EAX,ESP                         ; 005c61d6
    MOV dword ptr [ESP + 0xc],ECX       ; 005c61d8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c61dc
    MOV EAX,dword ptr [EAX]             ; 005c61df
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c61e1
    MOV EBX,dword ptr [EBX]             ; 005c61e4
    CALL FUN_005cb7e8                   ; 005c61e6
        ;   XREF to: 005cb7e8 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb7e8()
    MOV dword ptr [ESI + 0x4],EDX       ; 005c61eb
    MOV dword ptr [ESI],EAX             ; 005c61ee
    MOV ESI,ESP                         ; 005c61f0
    LEA EBX,[ESP + 0x8]                 ; 005c61f2
    MOV EAX,ESP                         ; 005c61f6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c61f8
    MOV EAX,dword ptr [EAX]             ; 005c61fb
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c61fd
    MOV EBX,dword ptr [EBX]             ; 005c6200
    ADD EAX,EBX                         ; 005c6202
    ADC EDX,ECX                         ; 005c6204
    MOV dword ptr [ESI + 0x4],EDX       ; 005c6206
    MOV dword ptr [ESI],EAX             ; 005c6209
    JMP 0x005c619e                      ; 005c620b
        ;   XREF to: 005c619e (UNCONDITIONAL_JUMP)  ; LAB_005c619e
    MOV ESI,dword ptr [ESP + 0x18]      ; 005c620d
        ;   Label: LAB_005c620d
    PUSH ESI                            ; 005c6211
    CALL FUN_005c63e8                   ; 005c6212
        ;   XREF to: 005c63e8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c63e8()
    ADD ESP,0x4                         ; 005c6217
    CMP EAX,EDI                         ; 005c621a
    JGE 0x005c6244                      ; 005c621c
        ;   XREF to: 005c6244 (CONDITIONAL_JUMP)  ; LAB_005c6244
    MOV EBX,dword ptr [ESP + 0x24]      ; 005c621e
    IMUL EBX,EDI                        ; 005c6222
    ADD EBX,EAX                         ; 005c6225
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c6227
    PUSH EAX                            ; 005c622b
    MOV dword ptr [ESP + 0x28],EBX      ; 005c622c
    CALL FUN_005c6418                   ; 005c6230
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c6235
    INC EBP                             ; 005c6238
    MOV dword ptr [ESP + 0x18],EAX      ; 005c6239
    CMP EAX,-0x1                        ; 005c623d
    JZ 0x005c6298                       ; 005c6240
        ;   XREF to: 005c6298 (CONDITIONAL_JUMP)  ; LAB_005c6298
    JMP 0x005c620d                      ; 005c6242
        ;   XREF to: 005c620d (UNCONDITIONAL_JUMP)  ; LAB_005c620d
    CMP ESI,0x3a                        ; 005c6244
        ;   Label: LAB_005c6244
    JNZ 0x005c6286                      ; 005c6247
        ;   XREF to: 005c6286 (CONDITIONAL_JUMP)  ; LAB_005c6286
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c6249
    TEST byte ptr [EAX + 0x10],0x80     ; 005c624d
    JZ 0x005c6286                       ; 005c6251
        ;   XREF to: 005c6286 (CONDITIONAL_JUMP)  ; LAB_005c6286
    MOV EBX,dword ptr [ESP + 0x40]      ; 005c6253
        ;   Label: LAB_005c6253
    PUSH EBX                            ; 005c6257
    CALL FUN_005c6418                   ; 005c6258
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c625d
    INC EBP                             ; 005c6260
    MOV dword ptr [ESP + 0x18],EAX      ; 005c6261
    CMP EAX,-0x1                        ; 005c6265
    JZ 0x005c6298                       ; 005c6268
        ;   XREF to: 005c6298 (CONDITIONAL_JUMP)  ; LAB_005c6298
    PUSH EAX                            ; 005c626a
    CALL FUN_005c63e8                   ; 005c626b
        ;   XREF to: 005c63e8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c63e8()
    ADD ESP,0x4                         ; 005c6270
    CMP EAX,EDI                         ; 005c6273
    JGE 0x005c6286                      ; 005c6275
        ;   XREF to: 005c6286 (CONDITIONAL_JUMP)  ; LAB_005c6286
    MOV EBX,dword ptr [ESP + 0x24]      ; 005c6277
    IMUL EBX,EDI                        ; 005c627b
    ADD EBX,EAX                         ; 005c627e
    MOV dword ptr [ESP + 0x24],EBX      ; 005c6280
    JMP 0x005c6253                      ; 005c6284
        ;   XREF to: 005c6253 (UNCONDITIONAL_JUMP)  ; LAB_005c6253
    MOV ESI,dword ptr [ESP + 0x40]      ; 005c6286
        ;   Label: LAB_005c6286
    PUSH ESI                            ; 005c628a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005c628b
    PUSH EDI                            ; 005c628f
    CALL FUN_005c543c                   ; 005c6290
        ;   XREF to: 005c543c (UNCONDITIONAL_CALL)  ; undefined FUN_005c543c()
    ADD ESP,0x8                         ; 005c6295
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c6298
        ;   Label: LAB_005c6298
    TEST byte ptr [EAX + 0x10],0x40     ; 005c629c
    JZ 0x005c634c                       ; 005c62a0
        ;   XREF to: 005c634c (CONDITIONAL_JUMP)  ; LAB_005c634c
    CMP dword ptr [ESP + 0x1c],0x2d     ; 005c62a6
    JNZ 0x005c62d4                      ; 005c62ab
        ;   XREF to: 005c62d4 (CONDITIONAL_JUMP)  ; LAB_005c62d4
    MOV EDX,dword ptr [ESP]             ; 005c62ad
    MOV EBX,dword ptr [ESP + 0x4]       ; 005c62b0
    NOT EDX                             ; 005c62b4
    NOT EBX                             ; 005c62b6
    MOV dword ptr [ESP],EDX             ; 005c62b8
    LEA ECX,[EDX + 0x1]                 ; 005c62bb
    MOV dword ptr [ESP + 0x4],EBX       ; 005c62be
    MOV dword ptr [ESP],ECX             ; 005c62c2
    TEST ECX,ECX                        ; 005c62c5
    JNZ 0x005c62ce                      ; 005c62c7
        ;   XREF to: 005c62ce (CONDITIONAL_JUMP)  ; LAB_005c62ce
    LEA EAX,[EBX + 0x1]                 ; 005c62c9
    JMP 0x005c62d0                      ; 005c62cc
        ;   XREF to: 005c62d0 (UNCONDITIONAL_JUMP)  ; LAB_005c62d0
    MOV EAX,EBX                         ; 005c62ce
        ;   Label: LAB_005c62ce
    MOV dword ptr [ESP + 0x4],EAX       ; 005c62d0
        ;   Label: LAB_005c62d0
    TEST EBP,EBP                        ; 005c62d4
        ;   Label: LAB_005c62d4
    JLE 0x005c63da                      ; 005c62d6
        ;   XREF to: 005c63da (CONDITIONAL_JUMP)  ; LAB_005c63da
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c62dc
    MOV EDI,dword ptr [ESP + 0x20]      ; 005c62e0
    MOV DL,byte ptr [EAX + 0x10]        ; 005c62e4
    ADD EBP,EDI                         ; 005c62e7
    TEST DL,0x1                         ; 005c62e9
    JZ 0x005c63da                       ; 005c62ec
        ;   XREF to: 005c63da (CONDITIONAL_JUMP)  ; LAB_005c63da
    TEST DL,0x4                         ; 005c62f2
    JZ 0x005c630b                       ; 005c62f5
        ;   XREF to: 005c630b (CONDITIONAL_JUMP)  ; LAB_005c630b
    MOV EAX,dword ptr [ESP + 0x44]      ; 005c62f7
    MOV ECX,dword ptr [EAX]             ; 005c62fb
    ADD ECX,0x8                         ; 005c62fd
    MOV dword ptr [EAX],ECX             ; 005c6300
    MOV AX,word ptr [ECX + -0x4]        ; 005c6302
    MOV EDI,dword ptr [ECX + -0x8]      ; 005c6306
    JMP 0x005c633b                      ; 005c6309
        ;   XREF to: 005c633b (UNCONDITIONAL_JUMP)  ; LAB_005c633b
    TEST DL,0x8                         ; 005c630b
        ;   Label: LAB_005c630b
    JZ 0x005c632b                       ; 005c630e
        ;   XREF to: 005c632b (CONDITIONAL_JUMP)  ; LAB_005c632b
    MOV EAX,dword ptr [ESP + 0x44]      ; 005c6310
    MOV EBX,dword ptr [EAX]             ; 005c6314
    ADD EBX,0x4                         ; 005c6316
    MOV dword ptr [EAX],EBX             ; 005c6319
    MOV AX,DS                           ; 005c631b
    MOV EDI,dword ptr [EBX + -0x4]      ; 005c631d
    MOV ESI,ESP                         ; 005c6320
    MOV ES,AX                           ; 005c6322
    MOVSD ES:EDI,ESI                    ; 005c6324
    MOVSD ES:EDI,ESI                    ; 005c6325
    JMP 0x005c63da                      ; 005c6326
        ;   XREF to: 005c63da (UNCONDITIONAL_JUMP)  ; LAB_005c63da
    MOV EAX,dword ptr [ESP + 0x44]      ; 005c632b
        ;   Label: LAB_005c632b
    MOV EDX,dword ptr [EAX]             ; 005c632f
    ADD EDX,0x4                         ; 005c6331
    MOV dword ptr [EAX],EDX             ; 005c6334
    MOV AX,DS                           ; 005c6336
    MOV EDI,dword ptr [EDX + -0x4]      ; 005c6338
    MOV ESI,ESP                         ; 005c633b
        ;   Label: LAB_005c633b
    MOV ES,AX                           ; 005c633d
    MOVSD ES:EDI,ESI                    ; 005c633f
    MOVSD ES:EDI,ESI                    ; 005c6340
    MOV EAX,EBP                         ; 005c6341
    ADD ESP,0x28                        ; 005c6343
    POP EBP                             ; 005c6346
    POP ES                              ; 005c6347
    POP EDI                             ; 005c6348
    POP ESI                             ; 005c6349
    POP EBX                             ; 005c634a
    RET                                 ; 005c634b
    CMP dword ptr [ESP + 0x1c],0x2d     ; 005c634c
        ;   Label: LAB_005c634c
    JNZ 0x005c6357                      ; 005c6351
        ;   XREF to: 005c6357 (CONDITIONAL_JUMP)  ; LAB_005c6357
    NEG dword ptr [ESP + 0x24]          ; 005c6353
    TEST EBP,EBP                        ; 005c6357
        ;   Label: LAB_005c6357
    JLE 0x005c63da                      ; 005c6359
        ;   XREF to: 005c63da (CONDITIONAL_JUMP)  ; LAB_005c63da
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c635f
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c6363
    MOV DH,byte ptr [EAX + 0x10]        ; 005c6367
    ADD EBP,EBX                         ; 005c636a
    TEST DH,0x1                         ; 005c636c
    JZ 0x005c63da                       ; 005c636f
        ;   XREF to: 005c63da (CONDITIONAL_JUMP)  ; LAB_005c63da
    TEST DH,0x4                         ; 005c6371
    JZ 0x005c6386                       ; 005c6374
        ;   XREF to: 005c6386 (CONDITIONAL_JUMP)  ; LAB_005c6386
    MOV EAX,dword ptr [ESP + 0x44]      ; 005c6376
    MOV EDI,dword ptr [EAX]             ; 005c637a
    ADD EDI,0x8                         ; 005c637c
    MOV dword ptr [EAX],EDI             ; 005c637f
    LES EAX,[EDI + -0x8]                ; 005c6381
    JMP 0x005c63b1                      ; 005c6384
        ;   XREF to: 005c63b1 (UNCONDITIONAL_JUMP)  ; LAB_005c63b1
    TEST DH,0x8                         ; 005c6386
        ;   Label: LAB_005c6386
    JZ 0x005c639f                       ; 005c6389
        ;   XREF to: 005c639f (CONDITIONAL_JUMP)  ; LAB_005c639f
    MOV EAX,dword ptr [ESP + 0x44]      ; 005c638b
    MOV ESI,dword ptr [EAX]             ; 005c638f
    ADD ESI,0x4                         ; 005c6391
    MOV BX,DS                           ; 005c6394
    MOV dword ptr [EAX],ESI             ; 005c6396
    MOV ES,BX                           ; 005c6398
    MOV EAX,dword ptr [ESI + -0x4]      ; 005c639a
    JMP 0x005c63b1                      ; 005c639d
        ;   XREF to: 005c63b1 (UNCONDITIONAL_JUMP)  ; LAB_005c63b1
    MOV EAX,dword ptr [ESP + 0x44]      ; 005c639f
        ;   Label: LAB_005c639f
    MOV ECX,dword ptr [EAX]             ; 005c63a3
    ADD ECX,0x4                         ; 005c63a5
    MOV BX,DS                           ; 005c63a8
    MOV dword ptr [EAX],ECX             ; 005c63aa
    MOV ES,BX                           ; 005c63ac
    MOV EAX,dword ptr [ECX + -0x4]      ; 005c63ae
    MOV EDX,dword ptr [ESP + 0x40]      ; 005c63b1
        ;   Label: LAB_005c63b1
    MOV CL,byte ptr [EDX + 0x10]        ; 005c63b5
    TEST CL,0x10                        ; 005c63b8
    JZ 0x005c63d0                       ; 005c63bb
        ;   XREF to: 005c63d0 (CONDITIONAL_JUMP)  ; LAB_005c63d0
    MOV EBX,dword ptr [ESP + 0x24]      ; 005c63bd
    MOV word ptr ES:[EAX],BX            ; 005c63c1
    MOV EAX,EBP                         ; 005c63c5
    ADD ESP,0x28                        ; 005c63c7
    POP EBP                             ; 005c63ca
    POP ES                              ; 005c63cb
    POP EDI                             ; 005c63cc
    POP ESI                             ; 005c63cd
    POP EBX                             ; 005c63ce
    RET                                 ; 005c63cf
    TEST CL,0x20                        ; 005c63d0
        ;   Label: LAB_005c63d0
    MOV EBX,dword ptr [ESP + 0x24]      ; 005c63d3
    MOV dword ptr ES:[EAX],EBX          ; 005c63d7
    MOV EAX,EBP                         ; 005c63da
        ;   Label: LAB_005c63da
    ADD ESP,0x28                        ; 005c63dc
    POP EBP                             ; 005c63df
    POP ES                              ; 005c63e0
    POP EDI                             ; 005c63e1
    POP ESI                             ; 005c63e2
    POP EBX                             ; 005c63e3
    RET                                 ; 005c63e4

