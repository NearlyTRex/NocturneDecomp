; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e8020(int *param_1,uint param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0059f3e0 at 0059f432
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8020
        ;   Label: FUN_004e8020
    PUSH ESI                            ; 004e8021
    PUSH EDI                            ; 004e8022
    PUSH EBP                            ; 004e8023
    SUB ESP,0x14                        ; 004e8024
    MOV ECX,dword ptr [ESP + 0x28]      ; 004e8027
    MOV ESI,dword ptr [ESP + 0x30]      ; 004e802b
    MOV EBX,dword ptr [ECX + 0x1c]      ; 004e802f
    SHL EBX,0x8                         ; 004e8032
    LEA EAX,[EBX + -0x1]                ; 004e8035
    MOV EDX,0x10000                     ; 004e8038
    AND EAX,ESI                         ; 004e803d
    IMUL EDX                            ; 004e803f
    IDIV EBX                            ; 004e8041
    MOV EBX,dword ptr [ECX + 0x1c]      ; 004e8043
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e8046
    SHL EBX,0x8                         ; 004e804a
    MOV EDI,EAX                         ; 004e804d
    LEA EAX,[EBX + -0x1]                ; 004e804f
    AND EAX,EDX                         ; 004e8052
    MOV EDX,0x10000                     ; 004e8054
    IMUL EDX                            ; 004e8059
    IDIV EBX                            ; 004e805b
    MOV EBX,EAX                         ; 004e805d
    MOV EBP,dword ptr [ECX + 0x1c]      ; 004e805f
    XOR EDX,EDX                         ; 004e8062
    SHL EBP,0x8                         ; 004e8064
    MOV EAX,ESI                         ; 004e8067
    DIV EBP                             ; 004e8069
    MOV ESI,dword ptr [ECX + 0x8]       ; 004e806b
    AND ESI,EAX                         ; 004e806e
    XOR EDX,EDX                         ; 004e8070
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e8072
    DIV EBP                             ; 004e8076
    MOV EDX,ESI                         ; 004e8078
    MOV EBP,dword ptr [ECX + 0xc]       ; 004e807a
    AND EDX,0x1                         ; 004e807d
    AND EAX,EBP                         ; 004e8080
    MOV dword ptr [ESP + 0xc],EDX       ; 004e8082
    MOV EDX,EAX                         ; 004e8086
    AND EDX,0x1                         ; 004e8088
    MOV dword ptr [ESP + 0x8],EDX       ; 004e808b
    LEA EDX,[EAX + 0x1]                 ; 004e808f
    MOV EBP,dword ptr [ESP + 0xc]       ; 004e8092
    MOV dword ptr [ESP + 0x10],EDX      ; 004e8096
    LEA EDX,[ESI + 0x1]                 ; 004e809a
    CMP EBP,dword ptr [ESP + 0x8]       ; 004e809d
    JNZ 0x004e819b                      ; 004e80a1
        ;   XREF to: 004e819b (CONDITIONAL_JUMP)  ; LAB_004e819b
    CMP EDI,EBX                         ; 004e80a7
    JLE 0x004e8122                      ; 004e80a9
        ;   XREF to: 004e8122 (CONDITIONAL_JUMP)  ; LAB_004e8122
    MOV EBP,dword ptr [ECX]             ; 004e80ab
    IMUL EBP,EAX                        ; 004e80ad
    MOV EAX,dword ptr [ECX + 0x24]      ; 004e80b0
    ADD ESI,EBP                         ; 004e80b3
    MOV dword ptr [ESP + 0x8],EBP       ; 004e80b5
    MOVSX ESI,word ptr [EAX + ESI*0x4]  ; 004e80b9
    MOV EBP,dword ptr [ECX + 0x20]      ; 004e80bd
    IMUL EBP,ESI                        ; 004e80c0
    MOV dword ptr [ESP],EBP             ; 004e80c3
    MOV ESI,dword ptr [ECX + 0x8]       ; 004e80c6
    MOV EBP,dword ptr [ESP + 0x8]       ; 004e80c9
    AND ESI,EDX                         ; 004e80cd
    ADD ESI,EBP                         ; 004e80cf
    MOVSX ESI,word ptr [EAX + ESI*0x4]  ; 004e80d1
    IMUL ESI,dword ptr [ECX + 0x20]     ; 004e80d5
    MOV EBP,dword ptr [ESP + 0x10]      ; 004e80d9
    AND EBP,dword ptr [ECX + 0xc]       ; 004e80dd
    IMUL EBP,dword ptr [ECX]            ; 004e80e0
    MOV dword ptr [ESP + 0x8],EBP       ; 004e80e3
    AND EDX,dword ptr [ECX + 0xc]       ; 004e80e7
    ADD EDX,dword ptr [ESP + 0x8]       ; 004e80ea
    MOV ECX,dword ptr [ECX + 0x20]      ; 004e80ee
    MOVSX EAX,word ptr [EAX + EDX*0x4]  ; 004e80f1
    IMUL ECX,EAX                        ; 004e80f5
    MOV EDX,ESI                         ; 004e80f8
    MOV EAX,dword ptr [ESP]             ; 004e80fa
    SUB ECX,ESI                         ; 004e80fd
    SUB EDX,EAX                         ; 004e80ff
    MOV EAX,EDI                         ; 004e8101
    MOV ESI,dword ptr [ESP]             ; 004e8103
    IMUL EDX                            ; 004e8106
    SHRD EAX,EDX,0x10                   ; 004e8108
    MOV EDX,ECX                         ; 004e810c
    ADD ESI,EAX                         ; 004e810e
    MOV EAX,EBX                         ; 004e8110
    IMUL EDX                            ; 004e8112
    SHRD EAX,EDX,0x10                   ; 004e8114
    ADD EAX,ESI                         ; 004e8118
    ADD ESP,0x14                        ; 004e811a
    POP EBP                             ; 004e811d
    POP EDI                             ; 004e811e
    POP ESI                             ; 004e811f
    POP EBX                             ; 004e8120
    RET                                 ; 004e8121
    IMUL EAX,dword ptr [ECX]            ; 004e8122
        ;   Label: LAB_004e8122
    ADD EAX,ESI                         ; 004e8125
    MOV EBP,dword ptr [ECX + 0x24]      ; 004e8127
    SHL EAX,0x2                         ; 004e812a
    ADD EAX,EBP                         ; 004e812d
    MOVSX EAX,word ptr [EAX]            ; 004e812f
    MOV dword ptr [ESP + 0xc],EBP       ; 004e8132
    MOV EBP,EAX                         ; 004e8136
    IMUL EBP,dword ptr [ECX + 0x20]     ; 004e8138
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e813c
    AND EAX,dword ptr [ECX + 0xc]       ; 004e8140
    IMUL EAX,dword ptr [ECX]            ; 004e8143
    MOV dword ptr [ESP + 0x8],EAX       ; 004e8146
    AND EDX,dword ptr [ECX + 0x8]       ; 004e814a
    ADD EDX,dword ptr [ESP + 0x8]       ; 004e814d
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e8151
    SHL EDX,0x2                         ; 004e8155
    ADD EDX,EAX                         ; 004e8158
    MOVSX EDX,word ptr [EDX]            ; 004e815a
    IMUL EDX,dword ptr [ECX + 0x20]     ; 004e815d
    ADD ESI,dword ptr [ESP + 0x8]       ; 004e8161
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e8165
    ADD EAX,dword ptr [ESP + 0xc]       ; 004e816c
    MOV ECX,dword ptr [ECX + 0x20]      ; 004e8170
    MOVSX EAX,word ptr [EAX]            ; 004e8173
    IMUL ECX,EAX                        ; 004e8176
    MOV EAX,EDI                         ; 004e8179
    SUB EDX,ECX                         ; 004e817b
    SUB ECX,EBP                         ; 004e817d
    IMUL EDX                            ; 004e817f
    SHRD EAX,EDX,0x10                   ; 004e8181
    MOV EDX,ECX                         ; 004e8185
    ADD EBP,EAX                         ; 004e8187
    MOV EAX,EBX                         ; 004e8189
    IMUL EDX                            ; 004e818b
    SHRD EAX,EDX,0x10                   ; 004e818d
    ADD EAX,EBP                         ; 004e8191
    ADD ESP,0x14                        ; 004e8193
    POP EBP                             ; 004e8196
    POP EDI                             ; 004e8197
    POP ESI                             ; 004e8198
    POP EBX                             ; 004e8199
    RET                                 ; 004e819a
    MOV EBP,0x10000                     ; 004e819b
        ;   Label: LAB_004e819b
    SUB EBP,EDI                         ; 004e81a0
    MOV EDI,EBP                         ; 004e81a2
    CMP EBP,EBX                         ; 004e81a4
    JLE 0x004e8222                      ; 004e81a6
        ;   XREF to: 004e8222 (CONDITIONAL_JUMP)  ; LAB_004e8222
    MOV EBP,dword ptr [ECX]             ; 004e81a8
    IMUL EBP,EAX                        ; 004e81aa
    MOV dword ptr [ESP + 0xc],EBP       ; 004e81ad
    LEA EAX,[ESI + EBP*0x1]             ; 004e81b1
    SHL EAX,0x2                         ; 004e81b4
    MOV EBP,dword ptr [ECX + 0x24]      ; 004e81b7
    ADD EAX,EBP                         ; 004e81ba
    MOV dword ptr [ESP + 0x8],EBP       ; 004e81bc
    MOVSX EAX,word ptr [EAX]            ; 004e81c0
    IMUL EAX,dword ptr [ECX + 0x20]     ; 004e81c3
    AND EDX,dword ptr [ECX + 0x8]       ; 004e81c7
    ADD EDX,dword ptr [ESP + 0xc]       ; 004e81ca
    MOV EBP,dword ptr [ESP + 0x8]       ; 004e81ce
    SHL EDX,0x2                         ; 004e81d2
    ADD EDX,EBP                         ; 004e81d5
    MOVSX EDX,word ptr [EDX]            ; 004e81d7
    MOV EBP,dword ptr [ECX + 0x20]      ; 004e81da
    IMUL EBP,EDX                        ; 004e81dd
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e81e0
    AND EDX,dword ptr [ECX + 0xc]       ; 004e81e4
    IMUL EDX,dword ptr [ECX]            ; 004e81e7
    ADD ESI,EDX                         ; 004e81ea
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e81ec
    SHL ESI,0x2                         ; 004e81f0
    ADD ESI,EDX                         ; 004e81f3
    MOV ECX,dword ptr [ECX + 0x20]      ; 004e81f5
    MOVSX ESI,word ptr [ESI]            ; 004e81f8
    IMUL ECX,ESI                        ; 004e81fb
    MOV EDX,EAX                         ; 004e81fe
    SUB EDX,EBP                         ; 004e8200
    SUB ECX,EAX                         ; 004e8202
    MOV EAX,EDI                         ; 004e8204
    IMUL EDX                            ; 004e8206
    SHRD EAX,EDX,0x10                   ; 004e8208
    MOV EDX,ECX                         ; 004e820c
    ADD EBP,EAX                         ; 004e820e
    MOV EAX,EBX                         ; 004e8210
    IMUL EDX                            ; 004e8212
    SHRD EAX,EDX,0x10                   ; 004e8214
    ADD EAX,EBP                         ; 004e8218
    ADD ESP,0x14                        ; 004e821a
    POP EBP                             ; 004e821d
    POP EDI                             ; 004e821e
    POP ESI                             ; 004e821f
    POP EBX                             ; 004e8220
    RET                                 ; 004e8221
    MOV EBP,dword ptr [ECX + 0x8]       ; 004e8222
        ;   Label: LAB_004e8222
    AND EBP,EDX                         ; 004e8225
    IMUL EAX,dword ptr [ECX]            ; 004e8227
    ADD EAX,EBP                         ; 004e822a
    LEA EDX,[EAX*0x4 + 0x0]             ; 004e822c
    MOV EAX,dword ptr [ECX + 0x24]      ; 004e8233
    MOV dword ptr [ESP + 0x8],EBP       ; 004e8236
    MOV EBP,dword ptr [ECX + 0x20]      ; 004e823a
    MOVSX EDX,word ptr [EDX + EAX*0x1]  ; 004e823d
    IMUL EBP,EDX                        ; 004e8241
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e8244
    MOV dword ptr [ESP + 0x4],EBP       ; 004e8248
    AND EDX,dword ptr [ECX + 0xc]       ; 004e824c
    MOV EBP,dword ptr [ECX]             ; 004e824f
    IMUL EBP,EDX                        ; 004e8251
    MOV dword ptr [ESP + 0xc],EBP       ; 004e8254
    MOV EDX,EBP                         ; 004e8258
    ADD EDX,dword ptr [ESP + 0x8]       ; 004e825a
    MOVSX EDX,word ptr [EAX + EDX*0x4]  ; 004e825e
    MOV EBP,dword ptr [ECX + 0x20]      ; 004e8262
    IMUL EBP,EDX                        ; 004e8265
    ADD ESI,dword ptr [ESP + 0xc]       ; 004e8268
    MOVSX EAX,word ptr [EAX + ESI*0x4]  ; 004e826c
    MOV EDX,EAX                         ; 004e8270
    IMUL EDX,dword ptr [ECX + 0x20]     ; 004e8272
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e8276
    SUB EDX,EBP                         ; 004e827a
    SUB EBP,EAX                         ; 004e827c
    MOV EAX,EDI                         ; 004e827e
    MOV ECX,dword ptr [ESP + 0x4]       ; 004e8280
    IMUL EDX                            ; 004e8284
    SHRD EAX,EDX,0x10                   ; 004e8286
    MOV EDX,EBP                         ; 004e828a
    ADD ECX,EAX                         ; 004e828c
    MOV EAX,EBX                         ; 004e828e
    IMUL EDX                            ; 004e8290
    SHRD EAX,EDX,0x10                   ; 004e8292
    ADD EAX,ECX                         ; 004e8296
    ADD ESP,0x14                        ; 004e8298
    POP EBP                             ; 004e829b
    POP EDI                             ; 004e829c
    POP ESI                             ; 004e829d
    POP EBX                             ; 004e829e
    RET                                 ; 004e829f

