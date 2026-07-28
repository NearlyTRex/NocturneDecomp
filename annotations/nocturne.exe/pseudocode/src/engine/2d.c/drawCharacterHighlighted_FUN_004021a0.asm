; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_drawCharacterHighlighted_FUN_004021a0(int char_code,int x_pos,int y_pos)
;
; Parameters:
; int              Stack[0x4]:4   char_code
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   engine_2d.c_FUN_00402710 at 00402747
;
; Referenced Globals:
;   undefined4 DAT_005a4b80
;   undefined4 DAT_005a4b81
;   undefined4 DAT_005a4b82
;   undefined4 DAT_005a4b83
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01bff91e
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004021a0
        ;   Label: engine_2d.c_drawCharacterHighlighted_FUN_004021a0
    PUSH EDI                            ; 004021a1
    PUSH EBP                            ; 004021a2
    SUB ESP,0x8                         ; 004021a3
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004021a6
    MOV EDI,dword ptr [ESP + 0x20]      ; 004021aa
    MOV EDX,dword ptr [ESP + 0x18]      ; 004021ae
    SUB EDX,0x20                        ; 004021b2
    LEA EAX,[EDX*0x8 + 0x0]             ; 004021b5
    ADD EAX,EDX                         ; 004021bc
    SHL EAX,0x4                         ; 004021be
    ADD EAX,EDX                         ; 004021c1
    ADD EAX,0x5a4b80                    ; 004021c3 | DAT_005a4b80
    MOV EDX,dword ptr [0x01c00c58]      ; 004021c8 | DAT_01c00c58
    MOVZX ESI,byte ptr [EAX]            ; 004021ce | DAT_005a4b80
    CMP EBP,EDX                         ; 004021d1
    JL 0x00402257                       ; 004021d3
        ;   XREF to: 00402257 (CONDITIONAL_JUMP)  ; LAB_00402257
    CMP EDI,dword ptr [0x01c00c5c]      ; 004021d9 | DAT_01c00c5c
    JL 0x00402257                       ; 004021df
        ;   XREF to: 00402257 (CONDITIONAL_JUMP)  ; LAB_00402257
    MOV EDX,dword ptr [0x01c00c60]      ; 004021e5 | DAT_01c00c60
    INC EDX                             ; 004021eb
    SUB EDX,ESI                         ; 004021ec
    CMP EBP,EDX                         ; 004021ee
    JG 0x00402257                       ; 004021f0
        ;   XREF to: 00402257 (CONDITIONAL_JUMP)  ; LAB_00402257
    MOV EDX,dword ptr [0x01c00c64]      ; 004021f2 | DAT_01c00c64
    SUB EDX,0xa                         ; 004021f8
    CMP EDI,EDX                         ; 004021fb
    JG 0x00402257                       ; 004021fd
        ;   XREF to: 00402257 (CONDITIONAL_JUMP)  ; LAB_00402257
    PUSH EBX                            ; 004021ff
    MOV EBX,dword ptr [0x005b7624]      ; 00402200 | DAT_005b7624
    SHL EDI,0x2                         ; 00402206
    INC EAX                             ; 00402209
    LEA EDX,[EDI + 0x2c]                ; 0040220a
    CMP EBX,0x8                         ; 0040220d
    JZ 0x0040225b                       ; 00402210
        ;   XREF to: 0040225b (CONDITIONAL_JUMP)  ; LAB_0040225b
    MOV dword ptr [ESP + 0x4],EDX       ; 00402212
    ADD EBP,EBP                         ; 00402216
    MOV EDX,dword ptr [EDI + 0x1bd2fa0] ; 00402218 | DAT_01bd2fa0 | DAT_01bd2fa4
        ;   Label: LAB_00402218
    XOR ECX,ECX                         ; 0040221e
    ADD EDX,EBP                         ; 00402220
    TEST ESI,ESI                        ; 00402222
    JLE 0x0040223f                      ; 00402224
        ;   XREF to: 0040223f (CONDITIONAL_JUMP)  ; LAB_0040223f
    MOV BL,byte ptr [EAX]               ; 00402226 | DAT_005a4b81 | DAT_005a4b82 | DAT_005a4b83
        ;   Label: LAB_00402226
    TEST BL,BL                          ; 00402228
    JZ 0x00402236                       ; 0040222a
        ;   XREF to: 00402236 (CONDITIONAL_JUMP)  ; LAB_00402236
    MOV BX,word ptr [0x01bff91e]        ; 0040222c | DAT_01bff91e
    MOV word ptr [EDX],BX               ; 00402233
    INC EAX                             ; 00402236
        ;   Label: LAB_00402236
    INC ECX                             ; 00402237
    ADD EDX,0x2                         ; 00402238
    CMP ECX,ESI                         ; 0040223b
    JL 0x00402226                       ; 0040223d
        ;   XREF to: 00402226 (CONDITIONAL_JUMP)  ; LAB_00402226
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040223f
        ;   Label: LAB_0040223f
    ADD EDI,0x4                         ; 00402243
    CMP EDI,EDX                         ; 00402246
    JNZ 0x00402218                      ; 00402248
        ;   XREF to: 00402218 (CONDITIONAL_JUMP)  ; LAB_00402218
    LEA EDX,[ESI + 0x1]                 ; 0040224a
        ;   Label: LAB_0040224a
    POP EBX                             ; 0040224d
    MOV EAX,EDX                         ; 0040224e
        ;   Label: LAB_0040224e
    ADD ESP,0x8                         ; 00402250
    POP EBP                             ; 00402253
    POP EDI                             ; 00402254
    POP ESI                             ; 00402255
    RET                                 ; 00402256
    XOR EDX,EDX                         ; 00402257
        ;   Label: LAB_00402257
    JMP 0x0040224e                      ; 00402259
        ;   XREF to: 0040224e (UNCONDITIONAL_JUMP)  ; LAB_0040224e
    MOV BH,0xff                         ; 0040225b
        ;   Label: LAB_0040225b
    MOV dword ptr [ESP + 0x8],EDX       ; 0040225d
    MOV ECX,dword ptr [EDI + 0x1bd2fa0] ; 00402261 | DAT_01bd2fa0 | DAT_01bd2fa4
        ;   Label: LAB_00402261
    XOR EDX,EDX                         ; 00402267
    ADD ECX,EBP                         ; 00402269
    TEST ESI,ESI                        ; 0040226b
    JLE 0x0040227e                      ; 0040226d
        ;   XREF to: 0040227e (CONDITIONAL_JUMP)  ; LAB_0040227e
    MOV BL,byte ptr [EAX]               ; 0040226f | DAT_005a4b81 | DAT_005a4b82 | DAT_005a4b83
        ;   Label: LAB_0040226f
    TEST BL,BL                          ; 00402271
    JZ 0x00402277                       ; 00402273
        ;   XREF to: 00402277 (CONDITIONAL_JUMP)  ; LAB_00402277
    MOV byte ptr [ECX],BH               ; 00402275
    INC EAX                             ; 00402277
        ;   Label: LAB_00402277
    INC EDX                             ; 00402278
    INC ECX                             ; 00402279
    CMP EDX,ESI                         ; 0040227a
    JL 0x0040226f                       ; 0040227c
        ;   XREF to: 0040226f (CONDITIONAL_JUMP)  ; LAB_0040226f
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040227e
        ;   Label: LAB_0040227e
    ADD EDI,0x4                         ; 00402282
    CMP EDI,ECX                         ; 00402285
    JZ 0x0040224a                       ; 00402287
        ;   XREF to: 0040224a (CONDITIONAL_JUMP)  ; LAB_0040224a
    JMP 0x00402261                      ; 00402289
        ;   XREF to: 00402261 (UNCONDITIONAL_JUMP)  ; LAB_00402261

