; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d1a0(int *param_1,float *param_2,int *param_3)
;
; Local Variables:
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
; undefined8       Stack[-0x2c]:8  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_004a0480 at 004a0517
;   FUN_00534890 at 00534bc9
;   FUN_0059b960 at 0059c0a5
;
; Referenced Globals:
;   undefined4 DAT_005d798b
;   undefined4 DAT_005d7993
;   undefined4 DAT_005d799b
;   undefined4 DAT_005d79a3
;   undefined4 DAT_005d79a7
;   undefined4 DAT_00603b28
;   undefined4 DAT_01ed78c8
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02cfd904
;   undefined4 DAT_02cfd908
;   undefined4 DAT_02d0c208
;   undefined4 DAT_02d0c20c
;   undefined4 DAT_02d0c210
;   undefined4 DAT_02d11fc8
;   undefined4 DAT_02d11fcc
;   ... and 4 more
;
; Called Functions:
;   FUN_0040ce40
;   FUN_0053ccc0
;   FUN_0053ebe0
;   FUN_0053ec70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d1a0
        ;   Label: FUN_0057d1a0
    PUSH ESI                            ; 0057d1a1
    PUSH EDI                            ; 0057d1a2
    PUSH EBP                            ; 0057d1a3
    MOV EBP,ESP                         ; 0057d1a4
    SUB ESP,0x48                        ; 0057d1a6
    AND ESP,0xfffffff8                  ; 0057d1a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057d1ac
    MOV EDX,dword ptr [EBP + 0x18]      ; 0057d1af
    ADD EAX,0x8                         ; 0057d1b2
    CMP EAX,EDX                         ; 0057d1b5
    JNZ 0x0057d403                      ; 0057d1b7
        ;   XREF to: 0057d403 (CONDITIONAL_JUMP)  ; LAB_0057d403
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057d1bd
        ;   Label: LAB_0057d1bd
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0057d1c0
    ADD EAX,0x14                        ; 0057d1c3
    CMP EAX,ECX                         ; 0057d1c6
    JZ 0x0057d1dc                       ; 0057d1c8
        ;   XREF to: 0057d1dc (CONDITIONAL_JUMP)  ; LAB_0057d1dc
    MOV EDX,ECX                         ; 0057d1ca
    MOV ECX,dword ptr [EDX]             ; 0057d1cc
    MOV dword ptr [EAX],ECX             ; 0057d1ce
    MOV ECX,dword ptr [EDX + 0x4]       ; 0057d1d0
    MOV dword ptr [EAX + 0x4],ECX       ; 0057d1d3
    MOV ECX,dword ptr [EDX + 0x8]       ; 0057d1d6
    MOV dword ptr [EAX + 0x8],ECX       ; 0057d1d9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057d1dc
        ;   Label: LAB_0057d1dc
    CMP dword ptr [EAX],0x0             ; 0057d1df
    JZ 0x0057d3fc                       ; 0057d1e2
        ;   XREF to: 0057d3fc (CONDITIONAL_JUMP)  ; LAB_0057d3fc
    XOR ESI,ESI                         ; 0057d1e8
    MOV EDI,dword ptr [EAX + 0x38]      ; 0057d1ea
    MOV dword ptr [ESP + 0x38],ESI      ; 0057d1ed
    TEST EDI,EDI                        ; 0057d1f1
    JLE 0x0057d3eb                      ; 0057d1f3
        ;   XREF to: 0057d3eb (CONDITIONAL_JUMP)  ; LAB_0057d3eb
    MOV EBX,0x2d0c208                   ; 0057d1f9
    MOV EDI,0x2d17d88                   ; 0057d1fe
    MOV dword ptr [ESP + 0x3c],ESI      ; 0057d203
    MOV ESI,0x2d11fc8                   ; 0057d207
    PUSH 0x42480000                     ; 0057d20c
        ;   Label: LAB_0057d20c
    PUSH 0x40a00000                     ; 0057d211
    CALL FUN_0040ce40                   ; 0057d216
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057d21b
    FLD float ptr [ESP + 0x4c]          ; 0057d21f
    ADD ESP,0x8                         ; 0057d223
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057d226
    FSTP float ptr [ESP + 0x40]         ; 0057d229
    FLD float ptr [EAX + 0x4]           ; 0057d22d
    FLD ST0                             ; 0057d230
    FADD double ptr [0x005d7993]        ; 0057d232 | DAT_005d7993
    SUB ESP,0x4                         ; 0057d238
    FSTP float ptr [ESP]                ; 0057d23b
    FADD double ptr [0x005d799b]        ; 0057d23e | DAT_005d799b
    SUB ESP,0x4                         ; 0057d244
    FSTP float ptr [ESP]                ; 0057d247
    CALL FUN_0040ce40                   ; 0057d24a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057d24f
    FLD float ptr [ESP + 0x4c]          ; 0057d253
    ADD ESP,0x8                         ; 0057d257
    FLD ST0                             ; 0057d25a
    FSIN                                ; 0057d25c
    FXCH                                ; 0057d25e
    FCOS                                ; 0057d260
    FLD float ptr [ESP + 0x40]          ; 0057d262
    FXCH ST2                            ; 0057d266
    FMUL ST2                            ; 0057d268
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057d26a
    FADD float ptr [EAX]                ; 0057d26d
    FXCH                                ; 0057d26f
    FMULP ST2                           ; 0057d271
    FSTP float ptr [ESP]                ; 0057d273
    MOV EAX,dword ptr [EAX + 0x4]       ; 0057d276
    MOV dword ptr [ESP + 0x4],EAX       ; 0057d279
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057d27d
    LEA EDX,[ESP + 0xc]                 ; 0057d280
    FADD float ptr [EAX + 0x8]          ; 0057d284
    MOV EAX,ESP                         ; 0057d287
    FSTP float ptr [ESP + 0x8]          ; 0057d289
    CMP EDX,EAX                         ; 0057d28d
    JZ 0x0057d2a8                       ; 0057d28f
        ;   XREF to: 0057d2a8 (CONDITIONAL_JUMP)  ; LAB_0057d2a8
    MOV EAX,dword ptr [ESP]             ; 0057d291
    MOV dword ptr [ESP + 0xc],EAX       ; 0057d294
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d298
    MOV dword ptr [ESP + 0x10],EAX      ; 0057d29c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057d2a0
    MOV dword ptr [ESP + 0x14],EAX      ; 0057d2a4
    LEA EAX,[ESP + 0x18]                ; 0057d2a8
        ;   Label: LAB_0057d2a8
    MOV EDX,ESP                         ; 0057d2ac
    CMP EAX,EDX                         ; 0057d2ae
    JZ 0x0057d2c9                       ; 0057d2b0
        ;   XREF to: 0057d2c9 (CONDITIONAL_JUMP)  ; LAB_0057d2c9
    MOV EAX,dword ptr [ESP]             ; 0057d2b2
    MOV dword ptr [ESP + 0x18],EAX      ; 0057d2b5
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d2b9
    MOV dword ptr [ESP + 0x1c],EAX      ; 0057d2bd
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057d2c1
    MOV dword ptr [ESP + 0x20],EAX      ; 0057d2c5
    FLD float ptr [ESP + 0x10]          ; 0057d2c9
        ;   Label: LAB_0057d2c9
    MOV EAX,[0x00603b28]                ; 0057d2cd | DAT_00603b28
    FLD float ptr [ESP + 0x1c]          ; 0057d2d2
    PUSH EAX                            ; 0057d2d6 | DAT_01ed78c8
    FXCH                                ; 0057d2d7
    FADD float ptr [0x005d79a3]         ; 0057d2d9 | DAT_005d79a3
    FXCH                                ; 0057d2df
    FADD float ptr [0x005d79a7]         ; 0057d2e1 | DAT_005d79a7
    FXCH                                ; 0057d2e7
    FSTP float ptr [ESP + 0x14]         ; 0057d2e9
    FSTP float ptr [ESP + 0x20]         ; 0057d2ed
    CALL FUN_0053ebe0                   ; 0057d2f1
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ebe0()
    ADD ESP,0x4                         ; 0057d2f6
    MOV EDX,dword ptr [0x00603b28]      ; 0057d2f9 | DAT_00603b28
    PUSH EDX                            ; 0057d2ff | DAT_01ed78c8
    CALL FUN_0053ec70                   ; 0057d300
        ;   XREF to: 0053ec70 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec70()
    ADD ESP,0x4                         ; 0057d305
    LEA EAX,[ESP + 0x18]                ; 0057d308
    PUSH EAX                            ; 0057d30c
    LEA EAX,[ESP + 0x10]                ; 0057d30d
    PUSH EAX                            ; 0057d311
    MOV ECX,dword ptr [0x00603b28]      ; 0057d312 | DAT_00603b28
    PUSH ECX                            ; 0057d318 | DAT_01ed78c8
    CALL FUN_0053ccc0                   ; 0057d319
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ccc0()
    MOV dword ptr [ESP + 0x50],EAX      ; 0057d31e
    FLD float ptr [ESP + 0x50]          ; 0057d322
    ADD ESP,0xc                         ; 0057d326
    FLD float ptr [ESP + 0x1c]          ; 0057d329
    FSUB float ptr [ESP + 0x10]         ; 0057d32d
    FMULP                               ; 0057d331
    PUSH 0x3f800000                     ; 0057d333
    MOV EAX,dword ptr [ESP + 0x40]      ; 0057d338
    FADD float ptr [ESP + 0x14]         ; 0057d33c
    PUSH 0x3dcccccd                     ; 0057d340
    FST float ptr [EAX + 0x2d1db48]     ; 0057d345
    FSTP double ptr [ESP + 0x34]        ; 0057d34b
    CALL FUN_0040ce40                   ; 0057d34f
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057d354
    FLD float ptr [ESP + 0x4c]          ; 0057d358
    FMUL double ptr [0x005d798b]        ; 0057d35c | DAT_005d798b
    ADD ESP,0x8                         ; 0057d362
    FADD double ptr [ESP + 0x2c]        ; 0057d365
    MOV EAX,ESP                         ; 0057d369
    FSTP float ptr [ESP + 0x4]          ; 0057d36b
    CMP EBX,EAX                         ; 0057d36f
    JZ 0x0057d386                       ; 0057d371
        ;   XREF to: 0057d386 (CONDITIONAL_JUMP)  ; LAB_0057d386
    MOV EAX,dword ptr [ESP]             ; 0057d373
    MOV dword ptr [EBX],EAX             ; 0057d376 | DAT_02d0c208
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d378
    MOV dword ptr [EBX + 0x4],EAX       ; 0057d37c | DAT_02d0c20c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057d37f
    MOV dword ptr [EBX + 0x8],EAX       ; 0057d383 | DAT_02d0c210
    MOV EAX,ESP                         ; 0057d386
        ;   Label: LAB_0057d386
    CMP ESI,EAX                         ; 0057d388
    JZ 0x0057d39f                       ; 0057d38a
        ;   XREF to: 0057d39f (CONDITIONAL_JUMP)  ; LAB_0057d39f
    MOV EAX,dword ptr [ESP]             ; 0057d38c
    MOV dword ptr [ESI],EAX             ; 0057d38f | DAT_02d11fc8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d391
    MOV dword ptr [ESI + 0x4],EAX       ; 0057d395 | DAT_02d11fcc
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057d398
    MOV dword ptr [ESI + 0x8],EAX       ; 0057d39c | DAT_02d11fd0
    CMP EDI,0x2cfd900                   ; 0057d39f
        ;   Label: LAB_0057d39f
    JZ 0x0057d3be                       ; 0057d3a5
        ;   XREF to: 0057d3be (CONDITIONAL_JUMP)  ; LAB_0057d3be
    MOV EAX,[0x02cfd900]                ; 0057d3a7 | DAT_02cfd900
    MOV dword ptr [EDI],EAX             ; 0057d3ac | DAT_02d17d88
    MOV EAX,[0x02cfd904]                ; 0057d3ae | DAT_02cfd904
    MOV dword ptr [EDI + 0x4],EAX       ; 0057d3b3 | DAT_02d17d8c
    MOV EAX,[0x02cfd908]                ; 0057d3b6 | DAT_02cfd908
    MOV dword ptr [EDI + 0x8],EAX       ; 0057d3bb | DAT_02d17d90
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0057d3be
        ;   Label: LAB_0057d3be
    MOV EDX,dword ptr [ESP + 0x38]      ; 0057d3c2
    ADD EAX,0x4                         ; 0057d3c6
    INC EDX                             ; 0057d3c9
    MOV dword ptr [ESP + 0x3c],EAX      ; 0057d3ca
    MOV dword ptr [ESP + 0x38],EDX      ; 0057d3ce
    MOV EAX,EDX                         ; 0057d3d2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057d3d4
    ADD EBX,0xc                         ; 0057d3d7
    ADD ESI,0xc                         ; 0057d3da
    MOV ECX,dword ptr [EDX + 0x38]      ; 0057d3dd
    ADD EDI,0xc                         ; 0057d3e0
    CMP EAX,ECX                         ; 0057d3e3
    JL 0x0057d20c                       ; 0057d3e5
        ;   XREF to: 0057d20c (CONDITIONAL_JUMP)  ; LAB_0057d20c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057d3eb
        ;   Label: LAB_0057d3eb
    MOV dword ptr [EAX + 0x28],0x0      ; 0057d3ee
    MOV dword ptr [EAX + 0x24],0x0      ; 0057d3f5
    MOV ESP,EBP                         ; 0057d3fc
        ;   Label: LAB_0057d3fc
    POP EBP                             ; 0057d3fe
    POP EDI                             ; 0057d3ff
    POP ESI                             ; 0057d400
    POP EBX                             ; 0057d401
    RET                                 ; 0057d402
    MOV ECX,dword ptr [EDX]             ; 0057d403
        ;   Label: LAB_0057d403
    MOV dword ptr [EAX],ECX             ; 0057d405
    MOV ECX,dword ptr [EDX + 0x4]       ; 0057d407
    MOV dword ptr [EAX + 0x4],ECX       ; 0057d40a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0057d40d
    MOV dword ptr [EAX + 0x8],ECX       ; 0057d410
    JMP 0x0057d1bd                      ; 0057d413
        ;   XREF to: 0057d1bd (UNCONDITIONAL_JUMP)  ; LAB_0057d1bd

