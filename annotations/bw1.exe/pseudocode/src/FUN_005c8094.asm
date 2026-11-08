; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c8094(LPCSTR param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x368]:4  local_368
; undefined        Stack[-0x364]:1  local_364
; undefined        Stack[-0x35c]:1  local_35c
; undefined        Stack[-0x354]:1  local_354
; undefined4       Stack[-0x348]:4  local_348
; undefined        Stack[-0x33c]:1  local_33c
; undefined        Stack[-0x228]:1  local_228
; undefined1       Stack[-0x227]:1  local_227
; undefined1       Stack[-0x226]:1  local_226
; undefined1       Stack[-0x225]:1  local_225
; undefined        Stack[-0x124]:1  local_124
; undefined2       Stack[-0x20]:2  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined2       Stack[-0x14]:2  local_14
;
; XREF[2]:
;   FUN_005cc3e0 at 005cc454
;   thunk_FUN_005c8094 at 005c1da8
;
; Referenced Globals:
;   void* PTR_FindClose_005d0554 = 001d0d5e
;   void* PTR_FindFirstFileA_005d0558 = 001d0d6a
;   undefined4 DAT_005fabc8
;   undefined4 DAT_00626114
;
; Called Functions:
;   FindClose
;   FindFirstFileA
;   FUN_005bfb70
;   FUN_005c0820
;   FUN_005c20d0
;   FUN_005c2500
;   FUN_005c26c0
;   FUN_005c6450
;   FUN_005c7f80
;   FUN_005c862c
;   FUN_005c90c0
;   FUN_005c91d0
;   FUN_005cc170
;   FUN_005cc1c0
;   FUN_005cc2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8094
        ;   Label: FUN_005c8094
    PUSH ESI                            ; 005c8095
    PUSH EDI                            ; 005c8096
    PUSH EBP                            ; 005c8097
    SUB ESP,0x358                       ; 005c8098
    MOV ESI,dword ptr [ESP + 0x36c]     ; 005c809e
    MOV EBX,dword ptr [ESP + 0x370]     ; 005c80a5
    MOV AH,byte ptr [ESI]               ; 005c80ac
    XOR EBP,EBP                         ; 005c80ae
    TEST AH,AH                          ; 005c80b0
    JZ 0x005c80c6                       ; 005c80b2
        ;   XREF to: 005c80c6 (CONDITIONAL_JUMP)  ; LAB_005c80c6
    PUSH 0x5fabc8                       ; 005c80b4 | DAT_005fabc8
    PUSH ESI                            ; 005c80b9
    CALL FUN_005cc170                   ; 005c80ba
        ;   XREF to: 005cc170 (UNCONDITIONAL_CALL)  ; undefined FUN_005cc170()
    ADD ESP,0x8                         ; 005c80bf
    TEST EAX,EAX                        ; 005c80c2
    JZ 0x005c80da                       ; 005c80c4
        ;   XREF to: 005c80da (CONDITIONAL_JUMP)  ; LAB_005c80da
    PUSH 0x1                            ; 005c80c6
        ;   Label: LAB_005c80c6
    CALL FUN_005c6450                   ; 005c80c8
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    MOV EAX,0xffffffff                  ; 005c80cd
    ADD ESP,0x4                         ; 005c80d2
    JMP 0x005c8385                      ; 005c80d5
        ;   XREF to: 005c8385 (UNCONDITIONAL_JUMP)  ; LAB_005c8385
    PUSH 0x104                          ; 005c80da
        ;   Label: LAB_005c80da
    LEA EAX,[ESP + 0x248]               ; 005c80df
    PUSH EAX                            ; 005c80e6
    CALL FUN_005c91d0                   ; 005c80e7
        ;   XREF to: 005c91d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c91d0()
    ADD ESP,0x8                         ; 005c80ec
    PUSH 0x104                          ; 005c80ef
    PUSH ESI                            ; 005c80f4
    LEA EAX,[ESP + 0x148]               ; 005c80f5
    PUSH EAX                            ; 005c80fc
    CALL FUN_005c2500                   ; 005c80fd
        ;   XREF to: 005c2500 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2500()
    ADD ESP,0xc                         ; 005c8102
    TEST EAX,EAX                        ; 005c8105
    JZ 0x005c8143                       ; 005c8107
        ;   XREF to: 005c8143 (CONDITIONAL_JUMP)  ; LAB_005c8143
    MOV AL,byte ptr [ESP + 0x140]       ; 005c8109
    INC AL                              ; 005c8110
    AND EAX,0xff                        ; 005c8112
    TEST byte ptr [EAX + 0x626114],0xc0 ; 005c8117 | DAT_00626114
    JZ 0x005c8143                       ; 005c811e
        ;   XREF to: 005c8143 (CONDITIONAL_JUMP)  ; LAB_005c8143
    CMP byte ptr [ESP + 0x141],0x3a     ; 005c8120
    JNZ 0x005c8143                      ; 005c8128
        ;   XREF to: 005c8143 (CONDITIONAL_JUMP)  ; LAB_005c8143
    CMP byte ptr [ESP + 0x142],0x5c     ; 005c812a
    JNZ 0x005c8143                      ; 005c8132
        ;   XREF to: 005c8143 (CONDITIONAL_JUMP)  ; LAB_005c8143
    CMP byte ptr [ESP + 0x143],0x0      ; 005c8134
    JNZ 0x005c8143                      ; 005c813c
        ;   XREF to: 005c8143 (CONDITIONAL_JUMP)  ; LAB_005c8143
    MOV EBP,0x1                         ; 005c813e
    PUSH ESI                            ; 005c8143
        ;   Label: LAB_005c8143
    MOV EDI,ESI                         ; 005c8144
    CALL FUN_005c90c0                   ; 005c8146
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c90c0()
    MOV DL,byte ptr [EAX]               ; 005c814b
    ADD ESP,0x4                         ; 005c814d
    CMP DL,0x3a                         ; 005c8150
    JNZ 0x005c8158                      ; 005c8153
        ;   XREF to: 005c8158 (CONDITIONAL_JUMP)  ; LAB_005c8158
    LEA EDI,[ESI + 0x2]                 ; 005c8155
    MOV DH,byte ptr [EDI]               ; 005c8158
        ;   Label: LAB_005c8158
    CMP DH,0x5c                         ; 005c815a
    JZ 0x005c8164                       ; 005c815d
        ;   XREF to: 005c8164 (CONDITIONAL_JUMP)  ; LAB_005c8164
    CMP DH,0x2f                         ; 005c815f
    JNZ 0x005c816a                      ; 005c8162
        ;   XREF to: 005c816a (CONDITIONAL_JUMP)  ; LAB_005c816a
    CMP byte ptr [EDI + 0x1],0x0        ; 005c8164
        ;   Label: LAB_005c8164
    JZ 0x005c816e                       ; 005c8168
        ;   XREF to: 005c816e (CONDITIONAL_JUMP)  ; LAB_005c816e
    TEST EBP,EBP                        ; 005c816a
        ;   Label: LAB_005c816a
    JZ 0x005c81b9                       ; 005c816c
        ;   XREF to: 005c81b9 (CONDITIONAL_JUMP)  ; LAB_005c81b9
    PUSH ESI                            ; 005c816e
        ;   Label: LAB_005c816e
    CALL FUN_005c26c0                   ; 005c816f
        ;   XREF to: 005c26c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c26c0()
    ADD ESP,0x4                         ; 005c8174
    TEST EAX,EAX                        ; 005c8177
    JZ 0x005c818b                       ; 005c8179
        ;   XREF to: 005c818b (CONDITIONAL_JUMP)  ; LAB_005c818b
    MOV EAX,0xffffffff                  ; 005c817b
    ADD ESP,0x358                       ; 005c8180
    POP EBP                             ; 005c8186
    POP EDI                             ; 005c8187
    POP ESI                             ; 005c8188
    POP EBX                             ; 005c8189
    RET                                 ; 005c818a
    LEA EAX,[ESP + 0x244]               ; 005c818b
        ;   Label: LAB_005c818b
    PUSH EAX                            ; 005c8192
    CALL FUN_005c26c0                   ; 005c8193
        ;   XREF to: 005c26c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c26c0()
    ADD ESP,0x4                         ; 005c8198
    PUSH 0x13e                          ; 005c819b
    PUSH 0x0                            ; 005c81a0
    LEA EAX,[ESP + 0x8]                 ; 005c81a2
    PUSH EAX                            ; 005c81a6
    CALL FUN_005bfb70                   ; 005c81a7
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV EDX,0x10                        ; 005c81ac
    ADD ESP,0xc                         ; 005c81b1
    MOV dword ptr [ESP],EDX             ; 005c81b4
    JMP 0x005c81e1                      ; 005c81b7
        ;   XREF to: 005c81e1 (UNCONDITIONAL_JUMP)  ; LAB_005c81e1
    MOV EAX,ESP                         ; 005c81b9
        ;   Label: LAB_005c81b9
    PUSH EAX                            ; 005c81bb
    PUSH ESI                            ; 005c81bc
    CALL dword ptr CS:[0x5d0558]        ; 005c81bd | PTR_FindFirstFileA_005d0558
    CMP EAX,-0x1                        ; 005c81c4
    JNZ 0x005c81d9                      ; 005c81c7
        ;   XREF to: 005c81d9 (CONDITIONAL_JUMP)  ; LAB_005c81d9
    CALL FUN_005c862c                   ; 005c81c9
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined FUN_005c862c()
    ADD ESP,0x358                       ; 005c81ce
    POP EBP                             ; 005c81d4
    POP EDI                             ; 005c81d5
    POP ESI                             ; 005c81d6
    POP EBX                             ; 005c81d7
    RET                                 ; 005c81d8
    PUSH EAX                            ; 005c81d9
        ;   Label: LAB_005c81d9
    CALL dword ptr CS:[0x5d0554]        ; 005c81da | PTR_FindClose_005d0554
    PUSH ESI                            ; 005c81e1
        ;   Label: LAB_005c81e1
    CALL FUN_005c90c0                   ; 005c81e2
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c90c0()
    MOV DL,byte ptr [EAX]               ; 005c81e7
    ADD ESP,0x4                         ; 005c81e9
    CMP DL,0x3a                         ; 005c81ec
    JNZ 0x005c81f7                      ; 005c81ef
        ;   XREF to: 005c81f7 (CONDITIONAL_JUMP)  ; LAB_005c81f7
    XOR EAX,EAX                         ; 005c81f1
    MOV AL,byte ptr [ESI]               ; 005c81f3
    JMP 0x005c8200                      ; 005c81f5
        ;   XREF to: 005c8200 (UNCONDITIONAL_JUMP)  ; LAB_005c8200
    XOR EAX,EAX                         ; 005c81f7
        ;   Label: LAB_005c81f7
    MOV AL,byte ptr [ESP + 0x244]       ; 005c81f9
    PUSH EAX                            ; 005c8200
        ;   Label: LAB_005c8200
    CALL FUN_005c0820                   ; 005c8201
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0820()
    SUB EAX,0x61                        ; 005c8206
    ADD ESP,0x4                         ; 005c8209
    MOV dword ptr [EBX],EAX             ; 005c820c
    MOV ECX,dword ptr [EBX]             ; 005c820e
    DEC ECX                             ; 005c8210
    MOV dword ptr [EBX],ECX             ; 005c8211
    MOV dword ptr [EBX + 0x12],ECX      ; 005c8213
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c8216
    MOV dword ptr [EBX + 0x16],EAX      ; 005c821a
    LEA EAX,[ESP + 0x2c]                ; 005c821d
    PUSH EAX                            ; 005c8221
    MOV ESI,dword ptr [ESP + 0x4]       ; 005c8222
    PUSH ESI                            ; 005c8226
    CALL FUN_005c7f80                   ; 005c8227
        ;   XREF to: 005c7f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c7f80()
    ADD ESP,0x8                         ; 005c822c
    MOV word ptr [EBX + 0x8],AX         ; 005c822f
    LEA EAX,[ESP + 0x354]               ; 005c8233
    PUSH EAX                            ; 005c823a
    LEA EAX,[ESP + 0x34c]               ; 005c823b
    PUSH EAX                            ; 005c8242
    LEA EAX,[ESP + 0x1c]                ; 005c8243
    PUSH EAX                            ; 005c8247
    CALL FUN_005cc1c0                   ; 005c8248
        ;   XREF to: 005cc1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cc1c0()
    ADD ESP,0xc                         ; 005c824d
    XOR EAX,EAX                         ; 005c8250
    MOV AX,word ptr [ESP + 0x354]       ; 005c8252
    PUSH EAX                            ; 005c825a
    XOR EAX,EAX                         ; 005c825b
    MOV AX,word ptr [ESP + 0x34c]       ; 005c825d
    PUSH EAX                            ; 005c8265
    CALL FUN_005cc2b0                   ; 005c8266
        ;   XREF to: 005cc2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cc2b0()
    ADD ESP,0x8                         ; 005c826b
    MOV dword ptr [EBX + 0x1e],EAX      ; 005c826e
    LEA EAX,[ESP + 0x34c]               ; 005c8271
    PUSH EAX                            ; 005c8278
    LEA EAX,[ESP + 0x354]               ; 005c8279
    PUSH EAX                            ; 005c8280
    LEA EAX,[ESP + 0xc]                 ; 005c8281
    PUSH EAX                            ; 005c8285
    CALL FUN_005cc1c0                   ; 005c8286
        ;   XREF to: 005cc1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cc1c0()
    ADD ESP,0xc                         ; 005c828b
    MOV EAX,dword ptr [ESP + 0x350]     ; 005c828e
    CMP AX,word ptr [ESP + 0x348]       ; 005c8295
    JNZ 0x005c82b5                      ; 005c829d
        ;   XREF to: 005c82b5 (CONDITIONAL_JUMP)  ; LAB_005c82b5
    MOV EAX,dword ptr [ESP + 0x34c]     ; 005c829f
    CMP AX,word ptr [ESP + 0x354]       ; 005c82a6
    JNZ 0x005c82b5                      ; 005c82ae
        ;   XREF to: 005c82b5 (CONDITIONAL_JUMP)  ; LAB_005c82b5
    MOV EAX,dword ptr [EBX + 0x1e]      ; 005c82b0
    JMP 0x005c82d3                      ; 005c82b3
        ;   XREF to: 005c82d3 (UNCONDITIONAL_JUMP)  ; LAB_005c82d3
    XOR EAX,EAX                         ; 005c82b5
        ;   Label: LAB_005c82b5
    MOV AX,word ptr [ESP + 0x34c]       ; 005c82b7
    PUSH EAX                            ; 005c82bf
    XOR EAX,EAX                         ; 005c82c0
    MOV AX,word ptr [ESP + 0x354]       ; 005c82c2
    PUSH EAX                            ; 005c82ca
    CALL FUN_005cc2b0                   ; 005c82cb
        ;   XREF to: 005cc2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cc2b0()
    ADD ESP,0x8                         ; 005c82d0
    MOV dword ptr [EBX + 0x22],EAX      ; 005c82d3
        ;   Label: LAB_005c82d3
    LEA EAX,[ESP + 0x34c]               ; 005c82d6
    PUSH EAX                            ; 005c82dd
    LEA EAX,[ESP + 0x354]               ; 005c82de
    PUSH EAX                            ; 005c82e5
    LEA EAX,[ESP + 0x14]                ; 005c82e6
    PUSH EAX                            ; 005c82ea
    CALL FUN_005cc1c0                   ; 005c82eb
        ;   XREF to: 005cc1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cc1c0()
    ADD ESP,0xc                         ; 005c82f0
    MOV EAX,dword ptr [ESP + 0x350]     ; 005c82f3
    CMP AX,word ptr [ESP + 0x348]       ; 005c82fa
    JNZ 0x005c831a                      ; 005c8302
        ;   XREF to: 005c831a (CONDITIONAL_JUMP)  ; LAB_005c831a
    MOV EAX,dword ptr [ESP + 0x34c]     ; 005c8304
    CMP AX,word ptr [ESP + 0x354]       ; 005c830b
    JNZ 0x005c831a                      ; 005c8313
        ;   XREF to: 005c831a (CONDITIONAL_JUMP)  ; LAB_005c831a
    MOV EAX,dword ptr [EBX + 0x1e]      ; 005c8315
    JMP 0x005c8338                      ; 005c8318
        ;   XREF to: 005c8338 (UNCONDITIONAL_JUMP)  ; LAB_005c8338
    XOR EAX,EAX                         ; 005c831a
        ;   Label: LAB_005c831a
    MOV AX,word ptr [ESP + 0x34c]       ; 005c831c
    PUSH EAX                            ; 005c8324
    XOR EAX,EAX                         ; 005c8325
    MOV AX,word ptr [ESP + 0x354]       ; 005c8327
    PUSH EAX                            ; 005c832f
    CALL FUN_005cc2b0                   ; 005c8330
        ;   XREF to: 005cc2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cc2b0()
    ADD ESP,0x8                         ; 005c8335
    MOV dword ptr [EBX + 0x1a],EAX      ; 005c8338
        ;   Label: LAB_005c8338
    MOV word ptr [EBX + 0x10],0x0       ; 005c833b
    MOV AX,word ptr [EBX + 0x10]        ; 005c8341
    MOV word ptr [EBX + 0xa],0x1        ; 005c8345
    CWDE                                ; 005c834b
    MOV dword ptr [EBX + 0xc],EAX       ; 005c834c
    MOV dword ptr [EBX + 0x4],EAX       ; 005c834f
    ADD EBX,0x39                        ; 005c8352
    MOV EAX,dword ptr [ESP]             ; 005c8355
    MOV dword ptr [EBX + -0xb],0x0      ; 005c8358
    PUSH 0xd                            ; 005c835f
    MOV dword ptr [EBX + -0xf],EAX      ; 005c8361
    LEA EAX,[ESP + 0x30]                ; 005c8364
    MOV dword ptr [EBX + -0x7],0x0      ; 005c8368
    PUSH EAX                            ; 005c836f
    MOV word ptr [EBX + -0x3],0x0       ; 005c8370
    PUSH EBX                            ; 005c8376
    MOV byte ptr [EBX + -0x1],0x0       ; 005c8377
    CALL FUN_005c20d0                   ; 005c837b
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c20d0()
    ADD ESP,0xc                         ; 005c8380
    XOR EAX,EAX                         ; 005c8383
    ADD ESP,0x358                       ; 005c8385
        ;   Label: LAB_005c8385
    POP EBP                             ; 005c838b
    POP EDI                             ; 005c838c
    POP ESI                             ; 005c838d
    POP EBX                             ; 005c838e
    RET                                 ; 005c838f

