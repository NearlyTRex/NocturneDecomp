; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054afb0(int param_1,float *param_2,undefined4 param_3,int param_4,int *param_5,byte *param_6,int *param_7)
;
; Local Variables:
; undefined        Stack[-0x100]:1  local_100
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
;   FUN_0054f7f0 at 0054f834
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1eda
;   TerminatedCString s_CDeformableModel_shatter_005d1eef
;   undefined4 DAT_005db0f0
;   undefined4 DAT_005e4760
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_027222a0
;   undefined4 DAT_027222a4
;   undefined4 DAT_027222a8
;   undefined4 DAT_027222ac
;   undefined4 DAT_027222b0
;   undefined4 DAT_027222b4
;   undefined4 DAT_0272af40
;
; Called Functions:
;   FUN_0045b550
;   FUN_0045b800
;   FUN_004a2780
;   FUN_004e4330
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054afb0
        ;   Label: FUN_0054afb0
    PUSH ESI                            ; 0054afb1
    PUSH EDI                            ; 0054afb2
    PUSH EBP                            ; 0054afb3
    SUB ESP,0xf0                        ; 0054afb4
    MOV ECX,dword ptr [ESP + 0x10c]     ; 0054afba
    PUSH ECX                            ; 0054afc1
    LEA EAX,[ESP + 0x4]                 ; 0054afc2
    MOV EDX,0xffff                      ; 0054afc6
    PUSH EAX                            ; 0054afcb
    MOV dword ptr [ESP + 0xec],EDX      ; 0054afcc
    CALL FUN_0045b550                   ; 0054afd3
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b550()
    MOV AH,byte ptr [0x0272af40]        ; 0054afd8 | DAT_0272af40
    ADD ESP,0x8                         ; 0054afde
    TEST AH,0x1                         ; 0054afe1
    JZ 0x0054b44d                       ; 0054afe4
        ;   XREF to: 0054b44d (CONDITIONAL_JUMP)  ; LAB_0054b44d
    MOV EAX,dword ptr [ESP + 0x110]     ; 0054afea
        ;   Label: LAB_0054afea
    MOV EBX,dword ptr [ESP + 0x104]     ; 0054aff1
    SHL EAX,0x2                         ; 0054aff8
    ADD EAX,EBX                         ; 0054affb
    CMP dword ptr [EAX + 0x2c],0xbb8    ; 0054affd
    JLE 0x0054b029                      ; 0054b004
        ;   XREF to: 0054b029 (CONDITIONAL_JUMP)  ; LAB_0054b029
    MOV EDI,0x5d1eda                    ; 0054b006 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x75e                       ; 0054b00b
    PUSH 0x5d1eef                       ; 0054b010 | = "CDeformableModel::shatter - too many ..."
    MOV dword ptr [0x01d71de0],EDI      ; 0054b015 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0054b01b | DAT_01d71de4
    CALL FUN_004e4330                   ; 0054b021
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0054b026
    XOR EAX,EAX                         ; 0054b029
        ;   Label: LAB_0054b029
    MOV dword ptr [ESP + 0xb8],EAX      ; 0054b02b
    MOV EAX,dword ptr [ESP + 0x110]     ; 0054b032
    MOV EDX,dword ptr [ESP + 0x104]     ; 0054b039
    SHL EAX,0x2                         ; 0054b040
    MOV EBP,0x27222a0                   ; 0054b043
    ADD EDX,EAX                         ; 0054b048
    MOV EAX,dword ptr [ESP + 0x114]     ; 0054b04a
    MOV dword ptr [ESP + 0x9c],EDX      ; 0054b051
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0054b058
    MOV dword ptr [ESP + 0xb4],EAX      ; 0054b05b
    TEST EDX,EDX                        ; 0054b062
    JLE 0x0054b148                      ; 0054b064
        ;   XREF to: 0054b148 (CONDITIONAL_JUMP)  ; LAB_0054b148
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0054b06a
        ;   Label: LAB_0054b06a
    MOV EBX,EBP                         ; 0054b071
    FILD dword ptr [EAX]                ; 0054b073
    FMUL float ptr [0x005e4760]         ; 0054b075 | DAT_005e4760
    FSTP float ptr [EBX]                ; 0054b07b | DAT_027222a0 | DAT_027222ac
    FILD dword ptr [EAX + 0x4]          ; 0054b07d
    FMUL float ptr [0x005e4760]         ; 0054b080 | DAT_005e4760
    FSTP float ptr [EBX + 0x4]          ; 0054b086 | DAT_027222a4 | DAT_027222b0
    FILD dword ptr [EAX + 0x8]          ; 0054b089
    FMUL float ptr [0x005e4760]         ; 0054b08c | DAT_005e4760
    FSTP float ptr [EBX + 0x8]          ; 0054b092 | DAT_027222a8 | DAT_027222b4
    PUSH EBP                            ; 0054b095 | DAT_027222a0 | DAT_027222ac
    LEA EAX,[ESP + 0x4]                 ; 0054b096
    PUSH EAX                            ; 0054b09a
    LEA ESI,[ESP + 0x78]                ; 0054b09b
    LEA EDI,[ESP + 0x60]                ; 0054b09f
    CALL FUN_0045b800                   ; 0054b0a3
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    ADD ESP,0x8                         ; 0054b0a8
    LEA ESI,[ESP + 0x70]                ; 0054b0ab
    MOV EAX,dword ptr [ESP + 0x108]     ; 0054b0af
    MOVSD ES:EDI,ESI                    ; 0054b0b6
    MOVSD ES:EDI,ESI                    ; 0054b0b7
    MOVSD ES:EDI,ESI                    ; 0054b0b8
    FLD float ptr [EAX + 0x4]           ; 0054b0b9
    FLD float ptr [EAX + 0x8]           ; 0054b0bc
    FLD float ptr [EAX]                 ; 0054b0bf
    LEA EDI,[ESP + 0x64]                ; 0054b0c1
    LEA ESI,[ESP + 0x88]                ; 0054b0c5
    LEA EAX,[ESP + 0x64]                ; 0054b0cc
    FADD float ptr [ESP + 0x58]         ; 0054b0d0
    FXCH ST2                            ; 0054b0d4
    FADD float ptr [ESP + 0x5c]         ; 0054b0d6
    FXCH                                ; 0054b0da
    FADD float ptr [ESP + 0x60]         ; 0054b0dc
    FXCH ST2                            ; 0054b0e0
    FSTP float ptr [ESP + 0x88]         ; 0054b0e2
    FSTP float ptr [ESP + 0x8c]         ; 0054b0e9
    FSTP float ptr [ESP + 0x90]         ; 0054b0f0
    MOVSD ES:EDI,ESI                    ; 0054b0f7
    MOVSD ES:EDI,ESI                    ; 0054b0f8
    MOVSD ES:EDI,ESI                    ; 0054b0f9
    CMP EBP,EAX                         ; 0054b0fa
    JZ 0x0054b113                       ; 0054b0fc
        ;   XREF to: 0054b113 (CONDITIONAL_JUMP)  ; LAB_0054b113
    MOV EAX,dword ptr [ESP + 0x64]      ; 0054b0fe
    MOV dword ptr [EBP],EAX             ; 0054b102 | DAT_027222a0
    MOV EAX,dword ptr [ESP + 0x68]      ; 0054b105
    MOV dword ptr [EBP + 0x4],EAX       ; 0054b109 | DAT_027222a4
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0054b10c
    MOV dword ptr [EBP + 0x8],EAX       ; 0054b110 | DAT_027222a8
    MOV ECX,dword ptr [ESP + 0xb4]      ; 0054b113
        ;   Label: LAB_0054b113
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0054b11a
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0054b121
    ADD EBP,0xc                         ; 0054b128
    ADD ECX,0xc                         ; 0054b12b
    INC EBX                             ; 0054b12e
    MOV ESI,dword ptr [EDX + 0x2c]      ; 0054b12f
    MOV dword ptr [ESP + 0xb4],ECX      ; 0054b132
    MOV dword ptr [ESP + 0xb8],EBX      ; 0054b139
    CMP EBX,ESI                         ; 0054b140
    JL 0x0054b06a                       ; 0054b142
        ;   XREF to: 0054b06a (CONDITIONAL_JUMP)  ; LAB_0054b06a
    PUSH 0x5db0f0                       ; 0054b148 | DAT_005db0f0
        ;   Label: LAB_0054b148
    PUSH 0x3                            ; 0054b14d
    LEA EAX,[ESP + 0x30]                ; 0054b14f
    PUSH EAX                            ; 0054b153
    CALL FUN_005a30d7                   ; 0054b154
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 0054b159
    MOV EDX,dword ptr [ESP + 0x104]     ; 0054b15c
    XOR EAX,EAX                         ; 0054b163
    MOV EBP,dword ptr [EDX + 0xc00]     ; 0054b165
    MOV dword ptr [ESP + 0xbc],EAX      ; 0054b16b
    TEST EBP,EBP                        ; 0054b172
    JLE 0x0054b356                      ; 0054b174
        ;   XREF to: 0054b356 (CONDITIONAL_JUMP)  ; LAB_0054b356
    MOV EDX,dword ptr [ESP + 0x110]     ; 0054b17a
    MOV ECX,dword ptr [ESP + 0x104]     ; 0054b181
    SHL EDX,0x2                         ; 0054b188
    ADD ECX,EDX                         ; 0054b18b
    MOV dword ptr [ESP + 0xd0],ECX      ; 0054b18d
    MOV dword ptr [ESP + 0xc8],ECX      ; 0054b194
    MOV ECX,dword ptr [ESP + 0x104]     ; 0054b19b
    ADD ECX,0xc0                        ; 0054b1a2
    MOV EBX,dword ptr [ESP + 0x104]     ; 0054b1a8
    MOV dword ptr [ESP + 0x98],ECX      ; 0054b1af
    MOV ECX,dword ptr [ESP + 0x118]     ; 0054b1b6
    ADD EDX,EBX                         ; 0054b1bd
    MOV dword ptr [ESP + 0xa0],ECX      ; 0054b1bf
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0054b1c6
    MOV dword ptr [ESP + 0xac],EDX      ; 0054b1cd
    MOV dword ptr [ESP + 0xb0],ECX      ; 0054b1d4
    MOV EDX,dword ptr [ESP + 0xac]      ; 0054b1db
        ;   Label: LAB_0054b1db
    MOV EDX,dword ptr [EDX + 0xc24]     ; 0054b1e2
    ADD EDX,EAX                         ; 0054b1e8
    MOV dword ptr [ESP + 0xc0],EDX      ; 0054b1ea
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0054b1f1
    IMUL EDX,dword ptr [EDX],0x240      ; 0054b1f8
    MOV ECX,dword ptr [ESP + 0x98]      ; 0054b1fe
    ADD ECX,EDX                         ; 0054b205
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0054b207
    MOV BL,byte ptr [EDX]               ; 0054b20e
    MOV dword ptr [ESP + 0xd4],ECX      ; 0054b210
    TEST BL,0x1                         ; 0054b217
    JZ 0x0054b2f8                       ; 0054b21a
        ;   XREF to: 0054b2f8 (CONDITIONAL_JUMP)  ; LAB_0054b2f8
    CMP EAX,dword ptr [ESP + 0xc0]      ; 0054b220
    JGE 0x0054b2f8                      ; 0054b227
        ;   XREF to: 0054b2f8 (CONDITIONAL_JUMP)  ; LAB_0054b2f8
    IMUL EDI,EAX,0x12                   ; 0054b22d
    LEA ESI,[EAX*0x4 + 0x0]             ; 0054b230
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0054b237
    SHL EAX,0x2                         ; 0054b23e
    MOV dword ptr [ESP + 0xe0],EAX      ; 0054b241
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0054b248
        ;   Label: LAB_0054b248
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0054b24f
    LEA ECX,[EAX + EDI*0x1]             ; 0054b252
    XOR EDX,EDX                         ; 0054b255
    LEA EAX,[ESP + 0x28]                ; 0054b257
    XOR EBX,EBX                         ; 0054b25b
        ;   Label: LAB_0054b25b
    MOV BX,word ptr [ECX]               ; 0054b25d
    IMUL EBX,EBX,0xc                    ; 0054b260
    ADD EBX,0x27222a0                   ; 0054b263
    CMP EAX,EBX                         ; 0054b269
    JZ 0x0054b27d                       ; 0054b26b
        ;   XREF to: 0054b27d (CONDITIONAL_JUMP)  ; LAB_0054b27d
    MOV EBP,dword ptr [EBX]             ; 0054b26d | DAT_027222a0
    MOV dword ptr [EAX],EBP             ; 0054b26f
    MOV EBP,dword ptr [EBX + 0x4]       ; 0054b271 | DAT_027222a4
    MOV dword ptr [EAX + 0x4],EBP       ; 0054b274
    MOV EBP,dword ptr [EBX + 0x8]       ; 0054b277 | DAT_027222a8
    MOV dword ptr [EAX + 0x8],EBP       ; 0054b27a
    XOR EBX,EBX                         ; 0054b27d
        ;   Label: LAB_0054b27d
    MOV BX,word ptr [ECX + 0x6]         ; 0054b27f
    ADD EAX,0xc                         ; 0054b283
    MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX ; 0054b286
    XOR EBX,EBX                         ; 0054b28a
    ADD EDX,0x4                         ; 0054b28c
    MOV BX,word ptr [ECX + 0xc]         ; 0054b28f
    ADD ECX,0x2                         ; 0054b293
    MOV dword ptr [ESP + EDX*0x1 + 0x78],EBX ; 0054b296
    CMP EDX,0xc                         ; 0054b29a
    JNZ 0x0054b25b                      ; 0054b29d
        ;   XREF to: 0054b25b (CONDITIONAL_JUMP)  ; LAB_0054b25b
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0054b29f
    MOV EAX,dword ptr [EAX + 0x90]      ; 0054b2a6
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0054b2ac
    MOV EBP,dword ptr [ESP + 0xe4]      ; 0054b2b0
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0054b2b7
    PUSH EBP                            ; 0054b2be
    ADD EAX,ECX                         ; 0054b2bf
    PUSH EAX                            ; 0054b2c1
    LEA EAX,[ESP + 0x84]                ; 0054b2c2
    PUSH EAX                            ; 0054b2c9
    LEA EAX,[ESP + 0x58]                ; 0054b2ca
    PUSH EAX                            ; 0054b2ce
    LEA EAX,[ESP + 0x38]                ; 0054b2cf
    PUSH EAX                            ; 0054b2d3
    MOV EBX,dword ptr [0x005fc5a0]      ; 0054b2d4 | DAT_005fc5a0
    PUSH EBX                            ; 0054b2da
    CALL FUN_004a2780                   ; 0054b2db
        ;   XREF to: 004a2780 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2780()
    ADD ESP,0x18                        ; 0054b2e0
    ADD ESI,0x4                         ; 0054b2e3
    MOV EBP,dword ptr [ESP + 0xe0]      ; 0054b2e6
    ADD EDI,0x12                        ; 0054b2ed
    CMP ESI,EBP                         ; 0054b2f0
    JL 0x0054b248                       ; 0054b2f2
        ;   XREF to: 0054b248 (CONDITIONAL_JUMP)  ; LAB_0054b248
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0054b2f8
        ;   Label: LAB_0054b2f8
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0054b2ff
    MOV ECX,dword ptr [ESP + 0xb0]      ; 0054b306
    MOV EBX,dword ptr [ESP + 0xac]      ; 0054b30d
    MOV ESI,dword ptr [ESP + 0xbc]      ; 0054b314
    ADD EDX,0x4                         ; 0054b31b
    ADD ECX,0x4                         ; 0054b31e
    ADD EBX,0x60                        ; 0054b321
    INC ESI                             ; 0054b324
    MOV dword ptr [ESP + 0xb0],ECX      ; 0054b325
    MOV ECX,dword ptr [ESP + 0x104]     ; 0054b32c
    MOV dword ptr [ESP + 0xa0],EDX      ; 0054b333
    MOV dword ptr [ESP + 0xac],EBX      ; 0054b33a
    MOV EDI,dword ptr [ECX + 0xc00]     ; 0054b341
    MOV dword ptr [ESP + 0xbc],ESI      ; 0054b347
    CMP ESI,EDI                         ; 0054b34e
    JL 0x0054b1db                       ; 0054b350
        ;   XREF to: 0054b1db (CONDITIONAL_JUMP)  ; LAB_0054b1db
    MOV EDX,dword ptr [ESP + 0x104]     ; 0054b356
        ;   Label: LAB_0054b356
    XOR EBP,EBP                         ; 0054b35d
    MOV ECX,dword ptr [EDX + 0xc00]     ; 0054b35f
    MOV dword ptr [ESP + 0xc4],EBP      ; 0054b365
    TEST ECX,ECX                        ; 0054b36c
    JLE 0x0054b442                      ; 0054b36e
        ;   XREF to: 0054b442 (CONDITIONAL_JUMP)  ; LAB_0054b442
    MOV EDX,dword ptr [ESP + 0x110]     ; 0054b374
    MOV ECX,dword ptr [ESP + 0x104]     ; 0054b37b
    SHL EDX,0x2                         ; 0054b382
    ADD ECX,EDX                         ; 0054b385
    MOV dword ptr [ESP + 0xcc],ECX      ; 0054b387
    MOV dword ptr [ESP + 0xe8],ECX      ; 0054b38e
    MOV ECX,dword ptr [ESP + 0x104]     ; 0054b395
    MOV EDI,dword ptr [ESP + 0x104]     ; 0054b39c
    ADD ECX,0xc0                        ; 0054b3a3
    ADD EDX,EDI                         ; 0054b3a9
    MOV dword ptr [ESP + 0x94],ECX      ; 0054b3ab
    MOV ECX,dword ptr [ESP + 0x118]     ; 0054b3b2
    MOV dword ptr [ESP + 0xa4],EDX      ; 0054b3b9
    MOV dword ptr [ESP + 0xa8],ECX      ; 0054b3c0
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0054b3c7
        ;   Label: LAB_0054b3c7
    MOV EDX,dword ptr [EDX + 0xc38]     ; 0054b3ce
    ADD EDX,EAX                         ; 0054b3d4
    MOV ECX,dword ptr [ESP + 0xa8]      ; 0054b3d6
    MOV dword ptr [ESP + 0xdc],EDX      ; 0054b3dd
    MOV EDX,dword ptr [ESP + 0xc4]      ; 0054b3e4
    MOV BH,byte ptr [ECX]               ; 0054b3eb
    SHL EDX,0x2                         ; 0054b3ed
    TEST BH,0x1                         ; 0054b3f0
    JNZ 0x0054b474                      ; 0054b3f3
        ;   XREF to: 0054b474 (CONDITIONAL_JUMP)  ; LAB_0054b474
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0054b3f9
        ;   Label: LAB_0054b3f9
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0054b400
    MOV ECX,dword ptr [ESP + 0xa4]      ; 0054b407
    MOV EBX,dword ptr [ESP + 0xc4]      ; 0054b40e
    ADD ECX,0x60                        ; 0054b415
    ADD EDX,0x4                         ; 0054b418
    MOV dword ptr [ESP + 0xa4],ECX      ; 0054b41b
    MOV ECX,dword ptr [ESP + 0x104]     ; 0054b422
    INC EBX                             ; 0054b429
    MOV dword ptr [ESP + 0xa8],EDX      ; 0054b42a
    MOV ESI,dword ptr [ECX + 0xc00]     ; 0054b431
    MOV dword ptr [ESP + 0xc4],EBX      ; 0054b437
    CMP EBX,ESI                         ; 0054b43e
    JL 0x0054b3c7                       ; 0054b440
        ;   XREF to: 0054b3c7 (CONDITIONAL_JUMP)  ; LAB_0054b3c7
    ADD ESP,0xf0                        ; 0054b442
        ;   Label: LAB_0054b442
    POP EBP                             ; 0054b448
    POP EDI                             ; 0054b449
    POP ESI                             ; 0054b44a
    POP EBX                             ; 0054b44b
    RET                                 ; 0054b44c
    PUSH 0x5db0f0                       ; 0054b44d | DAT_005db0f0
        ;   Label: LAB_0054b44d
    MOV DL,AH                           ; 0054b452
    PUSH 0xbb8                          ; 0054b454
    OR DL,0x1                           ; 0054b459
    PUSH 0x27222a0                      ; 0054b45c | DAT_027222a0
    MOV byte ptr [0x0272af40],DL        ; 0054b461 | DAT_0272af40
    CALL FUN_005a30d7                   ; 0054b467
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 0054b46c
    JMP 0x0054afea                      ; 0054b46f
        ;   XREF to: 0054afea (UNCONDITIONAL_JUMP)  ; LAB_0054afea
    ADD EDX,dword ptr [ESP + 0x11c]     ; 0054b474
        ;   Label: LAB_0054b474
    IMUL EDX,dword ptr [EDX],0x240      ; 0054b47b
    MOV ECX,dword ptr [ESP + 0x94]      ; 0054b481
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0054b488
    ADD ECX,EDX                         ; 0054b48f
    MOV ESI,EAX                         ; 0054b491
    MOV dword ptr [ESP + 0xd8],ECX      ; 0054b493
    CMP EAX,EBX                         ; 0054b49a
    JGE 0x0054b3f9                      ; 0054b49c
        ;   XREF to: 0054b3f9 (CONDITIONAL_JUMP)  ; LAB_0054b3f9
    IMUL EDI,EAX,0x12                   ; 0054b4a2
    SHL EAX,0x2                         ; 0054b4a5
    MOV dword ptr [ESP + 0xec],EAX      ; 0054b4a8
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0054b4af
        ;   Label: LAB_0054b4af
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0054b4b6
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0054b4b9
    LEA ECX,[EAX + EDI*0x1]             ; 0054b4c0
    MOV EBX,dword ptr [EDX + 0x54]      ; 0054b4c3
    MOV EAX,ESI                         ; 0054b4c6
    MOV EDX,dword ptr [EDX + 0xa4]      ; 0054b4c8
    SUB EAX,EBX                         ; 0054b4ce
    MOV EAX,dword ptr [EDX + EAX*0x4]   ; 0054b4d0
    MOV EBP,dword ptr [ESP + 0x118]     ; 0054b4d3
    SHL EAX,0x2                         ; 0054b4da
    ADD EAX,EBP                         ; 0054b4dd
    TEST byte ptr [EAX],0x1             ; 0054b4df
    JNZ 0x0054b582                      ; 0054b4e2
        ;   XREF to: 0054b582 (CONDITIONAL_JUMP)  ; LAB_0054b582
    LEA EAX,[ESP + 0x28]                ; 0054b4e8
    XOR EDX,EDX                         ; 0054b4ec
    XOR EBX,EBX                         ; 0054b4ee
        ;   Label: LAB_0054b4ee
    MOV BX,word ptr [ECX]               ; 0054b4f0
    IMUL EBX,EBX,0xc                    ; 0054b4f3
    ADD EBX,0x27222a0                   ; 0054b4f6
    CMP EAX,EBX                         ; 0054b4fc
    JZ 0x0054b510                       ; 0054b4fe
        ;   XREF to: 0054b510 (CONDITIONAL_JUMP)  ; LAB_0054b510
    MOV EBP,dword ptr [EBX]             ; 0054b500 | DAT_027222a0
    MOV dword ptr [EAX],EBP             ; 0054b502
    MOV EBP,dword ptr [EBX + 0x4]       ; 0054b504 | DAT_027222a4
    MOV dword ptr [EAX + 0x4],EBP       ; 0054b507
    MOV EBP,dword ptr [EBX + 0x8]       ; 0054b50a | DAT_027222a8
    MOV dword ptr [EAX + 0x8],EBP       ; 0054b50d
    XOR EBX,EBX                         ; 0054b510
        ;   Label: LAB_0054b510
    MOV BX,word ptr [ECX + 0x6]         ; 0054b512
    SHL EBX,0x8                         ; 0054b516
    MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX ; 0054b519
    XOR EBX,EBX                         ; 0054b51d
    ADD EAX,0xc                         ; 0054b51f
    MOV BX,word ptr [ECX + 0xc]         ; 0054b522
    ADD EDX,0x4                         ; 0054b526
    SHL EBX,0x8                         ; 0054b529
    ADD ECX,0x2                         ; 0054b52c
    MOV dword ptr [ESP + EDX*0x1 + 0x78],EBX ; 0054b52f
    CMP EDX,0xc                         ; 0054b533
    JNZ 0x0054b4ee                      ; 0054b536
        ;   XREF to: 0054b4ee (CONDITIONAL_JUMP)  ; LAB_0054b4ee
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0054b538
    PUSH EAX                            ; 0054b53f
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0054b540
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0054b547
    MOV EAX,dword ptr [EAX + 0x90]      ; 0054b54e
    ADD EAX,EDX                         ; 0054b554
    IMUL EAX,dword ptr [EAX],0x48       ; 0054b556
    ADD EAX,dword ptr [ESP + 0xdc]      ; 0054b559
    PUSH EAX                            ; 0054b560
    LEA EAX,[ESP + 0x84]                ; 0054b561
    PUSH EAX                            ; 0054b568
    LEA EAX,[ESP + 0x58]                ; 0054b569
    PUSH EAX                            ; 0054b56d
    LEA EAX,[ESP + 0x38]                ; 0054b56e
    PUSH EAX                            ; 0054b572
    MOV EBP,dword ptr [0x005fc5a0]      ; 0054b573 | DAT_005fc5a0
    PUSH EBP                            ; 0054b579
    CALL FUN_004a2780                   ; 0054b57a
        ;   XREF to: 004a2780 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2780()
    ADD ESP,0x18                        ; 0054b57f
    MOV EBP,dword ptr [ESP + 0xec]      ; 0054b582
        ;   Label: LAB_0054b582
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0054b589
    ADD EDI,0x12                        ; 0054b590
    ADD EBP,0x4                         ; 0054b593
    INC ESI                             ; 0054b596
    MOV dword ptr [ESP + 0xec],EBP      ; 0054b597
    CMP ESI,EAX                         ; 0054b59e
    JGE 0x0054b3f9                      ; 0054b5a0
        ;   XREF to: 0054b3f9 (CONDITIONAL_JUMP)  ; LAB_0054b3f9
    JMP 0x0054b4af                      ; 0054b5a6
        ;   XREF to: 0054b4af (UNCONDITIONAL_JUMP)  ; LAB_0054b4af

