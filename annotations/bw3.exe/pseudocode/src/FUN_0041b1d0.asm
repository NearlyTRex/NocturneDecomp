; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041b1d0(float *param_1,float *param_2,float *param_3,float param_4)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0041ae00 at 0041b025
;
; Referenced Globals:
;   undefined4 DAT_005b7371
;   undefined4 DAT_005b7379
;
; Called Functions:
;   FUN_0045b550
;   FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b1d0
        ;   Label: FUN_0041b1d0
    PUSH ESI                            ; 0041b1d1
    PUSH EDI                            ; 0041b1d2
    PUSH EBP                            ; 0041b1d3
    SUB ESP,0x3c                        ; 0041b1d4
    MOV EBP,dword ptr [ESP + 0x50]      ; 0041b1d7
    MOV EAX,dword ptr [ESP + 0x54]      ; 0041b1db
    MOV EBX,dword ptr [ESP + 0x58]      ; 0041b1df
    CMP EBP,EAX                         ; 0041b1e3
    JNZ 0x0041b3e2                      ; 0041b1e5
        ;   XREF to: 0041b3e2 (CONDITIONAL_JUMP)  ; LAB_0041b3e2
    LEA EAX,[EBP + 0xc]                 ; 0041b1eb
        ;   Label: LAB_0041b1eb
    CMP EAX,EBX                         ; 0041b1ee
    JZ 0x0041b202                       ; 0041b1f0
        ;   XREF to: 0041b202 (CONDITIONAL_JUMP)  ; LAB_0041b202
    MOV EDX,dword ptr [EBX]             ; 0041b1f2
    MOV dword ptr [EAX],EDX             ; 0041b1f4
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041b1f6
    MOV dword ptr [EAX + 0x4],EDX       ; 0041b1f9
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041b1fc
    MOV dword ptr [EAX + 0x8],EDX       ; 0041b1ff
    LEA EAX,[EBP + 0xc]                 ; 0041b202
        ;   Label: LAB_0041b202
    PUSH EAX                            ; 0041b205
    LEA EBX,[EBP + 0x18]                ; 0041b206
    PUSH EBX                            ; 0041b209
    CALL FUN_0045b550                   ; 0041b20a
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b550()
    FLD float ptr [EBP + 0xa8]          ; 0041b20f
    FMUL ST0                            ; 0041b215
    FLD float ptr [EBP + 0xa4]          ; 0041b217
    FMUL ST0                            ; 0041b21d
    FLD float ptr [EBP + 0xa4]          ; 0041b21f
    ADD ESP,0x8                         ; 0041b225
    FMUL float ptr [EBP + 0xa4]         ; 0041b228
    FLD float ptr [ESP + 0x5c]          ; 0041b22e
    FMUL double ptr [0x005b7371]        ; 0041b232 | DAT_005b7371
    FLD float ptr [EBP + 0xac]          ; 0041b238
    FMUL ST0                            ; 0041b23e
    FLD float ptr [EBP + 0xac]          ; 0041b240
    FMUL ST0                            ; 0041b246
    FLD float ptr [EBP + 0xa8]          ; 0041b248
    FMUL ST0                            ; 0041b24e
    FXCH ST2                            ; 0041b250
    FADDP ST6,ST0                       ; 0041b252
    FXCH ST2                            ; 0041b254
    FST float ptr [EBP + 0x94]          ; 0041b256
    FLD double ptr [0x005b7379]         ; 0041b25c | DAT_005b7379
    FXCH                                ; 0041b262
    FMUL ST1                            ; 0041b264
    FXCH ST3                            ; 0041b266
    FADDP ST5,ST0                       ; 0041b268
    FXCH                                ; 0041b26a
    FADDP ST3,ST0                       ; 0041b26c
    FLD float ptr [EBP + 0x94]          ; 0041b26e
    FMUL ST1                            ; 0041b274
    FLD float ptr [EBP + 0x94]          ; 0041b276
    FMULP ST2                           ; 0041b27c
    FXCH ST2                            ; 0041b27e
    FMULP ST5                           ; 0041b280
    FXCH                                ; 0041b282
    FMULP ST3                           ; 0041b284
    FMULP                               ; 0041b286
    LEA EAX,[EBP + 0x64]                ; 0041b288
    FXCH ST2                            ; 0041b28b
    FSTP float ptr [EBP + 0x98]         ; 0041b28d
    FSTP float ptr [EBP + 0x9c]         ; 0041b293
    FSTP float ptr [EBP + 0xa0]         ; 0041b299
    MOV dword ptr [EAX + 0x8],0x0       ; 0041b29f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041b2a6
    MOV dword ptr [EAX + 0x4],EDX       ; 0041b2a9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041b2ac
    MOV dword ptr [EAX],EDX             ; 0041b2af
    LEA EAX,[EBP + 0x88]                ; 0041b2b1
    MOV dword ptr [EAX + 0x8],0x0       ; 0041b2b7
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041b2be
    MOV dword ptr [EAX + 0x4],EDX       ; 0041b2c1
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041b2c4
    MOV dword ptr [EAX],EDX             ; 0041b2c7
    LEA EAX,[EBP + 0x4c]                ; 0041b2c9
    MOV dword ptr [EAX + 0x8],0x0       ; 0041b2cc
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041b2d3
    MOV dword ptr [EAX + 0x4],EDX       ; 0041b2d6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041b2d9
    MOV dword ptr [EAX],EDX             ; 0041b2dc
    LEA EAX,[EBP + 0x70]                ; 0041b2de
    MOV dword ptr [EAX + 0x8],0x0       ; 0041b2e1
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041b2e8
    MOV dword ptr [EAX + 0x4],EDX       ; 0041b2eb
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041b2ee
    MOV dword ptr [EAX],EDX             ; 0041b2f1
    LEA EAX,[EBP + 0x58]                ; 0041b2f3
    MOV dword ptr [EAX + 0x8],0x0       ; 0041b2f6
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041b2fd
    MOV dword ptr [EAX + 0x4],EDX       ; 0041b300
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041b303
    MOV dword ptr [EAX],EDX             ; 0041b306
    LEA EAX,[EBP + 0x7c]                ; 0041b308
    MOV dword ptr [EAX + 0x8],0x0       ; 0041b30b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041b312
    MOV dword ptr [EAX + 0x4],EDX       ; 0041b315
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041b318
    MOV dword ptr [EAX],EDX             ; 0041b31b
    LEA EAX,[EBP + 0x40]                ; 0041b31d
    MOV dword ptr [EAX + 0x8],0x0       ; 0041b320
    XOR EDX,EDX                         ; 0041b327
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041b329
    MOV dword ptr [EAX + 0x4],ECX       ; 0041b32c
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041b32f
    MOV dword ptr [EAX],ECX             ; 0041b332
    MOV ECX,dword ptr [EBP + 0xb0]      ; 0041b334
    MOV dword ptr [ESP + 0x38],EDX      ; 0041b33a
    TEST ECX,ECX                        ; 0041b33e
    JLE 0x0041b3d0                      ; 0041b340
        ;   XREF to: 0041b3d0 (CONDITIONAL_JUMP)  ; LAB_0041b3d0
    LEA EAX,[EBP + 0xb4]                ; 0041b346
    MOV dword ptr [ESP + 0x34],EBX      ; 0041b34c
    LEA EBX,[EBP + 0xc0]                ; 0041b350
    MOV dword ptr [ESP + 0x30],EAX      ; 0041b356
    IMUL EAX,dword ptr [ESP + 0x38],0x34 ; 0041b35a
        ;   Label: LAB_0041b35a
    ADD EAX,dword ptr [ESP + 0x30]      ; 0041b35f
    PUSH EAX                            ; 0041b363
    MOV ESI,dword ptr [ESP + 0x38]      ; 0041b364
    PUSH ESI                            ; 0041b368
    LEA ESI,[ESP + 0x2c]                ; 0041b369
    LEA EDI,[ESP + 0x20]                ; 0041b36d
    CALL FUN_0045b800                   ; 0041b371
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x2c]                ; 0041b376
    ADD ESP,0x8                         ; 0041b37a
    MOVSD ES:EDI,ESI                    ; 0041b37d
    MOVSD ES:EDI,ESI                    ; 0041b37e
    MOVSD ES:EDI,ESI                    ; 0041b37f
    MOV EAX,ESP                         ; 0041b380
    FLD float ptr [EBP]                 ; 0041b382
    FLD float ptr [EBP + 0x4]           ; 0041b385
    FLD float ptr [EBP + 0x8]           ; 0041b388
    MOV EDI,ESP                         ; 0041b38b
    LEA ESI,[ESP + 0xc]                 ; 0041b38d
    FXCH ST2                            ; 0041b391
    FADD float ptr [ESP + 0x18]         ; 0041b393
    FXCH                                ; 0041b397
    FADD float ptr [ESP + 0x1c]         ; 0041b399
    FXCH ST2                            ; 0041b39d
    FADD float ptr [ESP + 0x20]         ; 0041b39f
    FXCH                                ; 0041b3a3
    FSTP float ptr [ESP + 0xc]          ; 0041b3a5
    FXCH                                ; 0041b3a9
    FSTP float ptr [ESP + 0x10]         ; 0041b3ab
    FSTP float ptr [ESP + 0x14]         ; 0041b3af
    MOVSD ES:EDI,ESI                    ; 0041b3b3
    MOVSD ES:EDI,ESI                    ; 0041b3b4
    MOVSD ES:EDI,ESI                    ; 0041b3b5
    CMP EBX,EAX                         ; 0041b3b6
    JNZ 0x0041b3f8                      ; 0041b3b8
        ;   XREF to: 0041b3f8 (CONDITIONAL_JUMP)  ; LAB_0041b3f8
    MOV ESI,dword ptr [ESP + 0x38]      ; 0041b3ba
        ;   Label: LAB_0041b3ba
    ADD EBX,0x34                        ; 0041b3be
    INC ESI                             ; 0041b3c1
    MOV EDI,dword ptr [EBP + 0xb0]      ; 0041b3c2
    MOV dword ptr [ESP + 0x38],ESI      ; 0041b3c8
    CMP ESI,EDI                         ; 0041b3cc
    JL 0x0041b35a                       ; 0041b3ce
        ;   XREF to: 0041b35a (CONDITIONAL_JUMP)  ; LAB_0041b35a
    MOV dword ptr [EBP + 0x254],0x1     ; 0041b3d0
        ;   Label: LAB_0041b3d0
    ADD ESP,0x3c                        ; 0041b3da
    POP EBP                             ; 0041b3dd
    POP EDI                             ; 0041b3de
    POP ESI                             ; 0041b3df
    POP EBX                             ; 0041b3e0
    RET                                 ; 0041b3e1
    MOV EDX,dword ptr [EAX]             ; 0041b3e2
        ;   Label: LAB_0041b3e2
    MOV dword ptr [EBP],EDX             ; 0041b3e4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041b3e7
    MOV dword ptr [EBP + 0x4],EDX       ; 0041b3ea
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041b3ed
    MOV dword ptr [EBP + 0x8],EDX       ; 0041b3f0
    JMP 0x0041b1eb                      ; 0041b3f3
        ;   XREF to: 0041b1eb (UNCONDITIONAL_JUMP)  ; LAB_0041b1eb
    MOV EAX,dword ptr [ESP]             ; 0041b3f8
        ;   Label: LAB_0041b3f8
    MOV dword ptr [EBX],EAX             ; 0041b3fb
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b3fd
    MOV dword ptr [EBX + 0x4],EAX       ; 0041b401
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041b404
    MOV dword ptr [EBX + 0x8],EAX       ; 0041b408
    JMP 0x0041b3ba                      ; 0041b40b
        ;   XREF to: 0041b3ba (UNCONDITIONAL_JUMP)  ; LAB_0041b3ba

