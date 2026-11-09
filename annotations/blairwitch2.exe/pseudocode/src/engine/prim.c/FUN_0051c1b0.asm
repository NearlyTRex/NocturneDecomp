; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_prim_c_FUN_0051c1b0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01e61648
;   undefined4 DAT_01e61b4c
;   undefined4 DAT_01e61b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c1b0
        ;   Label: engine_prim.c_FUN_0051c1b0
    PUSH ESI                            ; 0051c1b1
    PUSH EDI                            ; 0051c1b2
    PUSH EBP                            ; 0051c1b3
    SUB ESP,0x4                         ; 0051c1b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0051c1b7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0051c1bb
    MOV EDI,dword ptr [EBP + 0x14]      ; 0051c1bf
    MOV EBX,dword ptr [ESI + 0x14]      ; 0051c1c2
    SAR EDI,0x10                        ; 0051c1c5
    SAR EBX,0x10                        ; 0051c1c8
    CMP EBX,EDI                         ; 0051c1cb
    JZ 0x0051c354                       ; 0051c1cd
        ;   XREF to: 0051c354 (CONDITIONAL_JUMP)  ; LAB_0051c354
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051c1d3
    CMP EDX,dword ptr [ESI + 0x14]      ; 0051c1d6
    JGE 0x0051c1e7                      ; 0051c1d9
        ;   XREF to: 0051c1e7 (CONDITIONAL_JUMP)  ; LAB_0051c1e7
    MOV EAX,ESI                         ; 0051c1db
    MOV ESI,EBP                         ; 0051c1dd
    MOV EBP,EAX                         ; 0051c1df
    MOV EAX,EBX                         ; 0051c1e1
    MOV EBX,EDI                         ; 0051c1e3
    MOV EDI,EAX                         ; 0051c1e5
    MOV EAX,[0x01e61648]                ; 0051c1e7 | DAT_01e61648
        ;   Label: LAB_0051c1e7
    LEA ECX,[EAX*0x4 + 0x0]             ; 0051c1ec
    ADD ECX,EAX                         ; 0051c1f3
    SHL ECX,0x4                         ; 0051c1f5
    ADD ECX,0x1e6164c                   ; 0051c1f8
    MOV dword ptr [ECX],EBX             ; 0051c1fe
    MOV EAX,[0x01e61b4c]                ; 0051c200 | DAT_01e61b4c
    MOV dword ptr [ECX + 0x4],EDI       ; 0051c205
    CMP EBX,EAX                         ; 0051c208
    JGE 0x0051c212                      ; 0051c20a
        ;   XREF to: 0051c212 (CONDITIONAL_JUMP)  ; LAB_0051c212
    MOV dword ptr [0x01e61b4c],EBX      ; 0051c20c | DAT_01e61b4c
    CMP EDI,dword ptr [0x01e61b50]      ; 0051c212 | DAT_01e61b50
        ;   Label: LAB_0051c212
    JLE 0x0051c220                      ; 0051c218
        ;   XREF to: 0051c220 (CONDITIONAL_JUMP)  ; LAB_0051c220
    MOV dword ptr [0x01e61b50],EDI      ; 0051c21a | DAT_01e61b50
    MOV EDI,dword ptr [ESI + 0x14]      ; 0051c220
        ;   Label: LAB_0051c220
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051c223
    SUB EBX,EDI                         ; 0051c226
    CMP EBX,0x10000                     ; 0051c228
    JNC 0x0051c35c                      ; 0051c22e
        ;   XREF to: 0051c35c (CONDITIONAL_JUMP)  ; LAB_0051c35c
    XOR EBX,EBX                         ; 0051c234
    MOV EAX,dword ptr [EBP + 0x10]      ; 0051c236
        ;   Label: LAB_0051c236
    MOV EDX,dword ptr [ESI + 0x10]      ; 0051c239
    MOV EDI,dword ptr [ESI + 0x14]      ; 0051c23c
    SUB EAX,EDX                         ; 0051c23f
    AND EDI,0xffff                      ; 0051c241
    MOV EDX,EAX                         ; 0051c247
    MOV EAX,EBX                         ; 0051c249
    XOR DI,0xffff                       ; 0051c24b
    IMUL EDX                            ; 0051c24f
    SHRD EAX,EDX,0x10                   ; 0051c251
    MOV EDX,EAX                         ; 0051c255
    MOV dword ptr [ECX + 0xc],EAX       ; 0051c257
    MOV EAX,EDI                         ; 0051c25a
    IMUL EDX                            ; 0051c25c
    SHRD EAX,EDX,0x10                   ; 0051c25e
    MOV dword ptr [ESP],EAX             ; 0051c262
    MOV EDX,dword ptr [ESP]             ; 0051c265
    MOV EAX,dword ptr [ESI + 0x10]      ; 0051c268
    ADD EAX,EDX                         ; 0051c26b
    MOV dword ptr [ECX + 0x8],EAX       ; 0051c26d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051c270
    MOV EDX,dword ptr [ESI + 0x18]      ; 0051c273
    SUB EAX,EDX                         ; 0051c276
    MOV EDX,EAX                         ; 0051c278
    MOV EAX,EBX                         ; 0051c27a
    IMUL EDX                            ; 0051c27c
    SHRD EAX,EDX,0x10                   ; 0051c27e
    MOV EDX,EAX                         ; 0051c282
    MOV dword ptr [ECX + 0x1c],EAX      ; 0051c284
    MOV EAX,EDI                         ; 0051c287
    IMUL EDX                            ; 0051c289
    SHRD EAX,EDX,0x10                   ; 0051c28b
    MOV dword ptr [ESP],EAX             ; 0051c28f
    MOV EDX,dword ptr [ESP]             ; 0051c292
    MOV EAX,dword ptr [ESI + 0x18]      ; 0051c295
    ADD EAX,EDX                         ; 0051c298
    MOV dword ptr [ECX + 0x18],EAX      ; 0051c29a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051c29d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0051c2a0
    SUB EAX,EDX                         ; 0051c2a3
    MOV EDX,EAX                         ; 0051c2a5
    MOV EAX,EBX                         ; 0051c2a7
    IMUL EDX                            ; 0051c2a9
    SHRD EAX,EDX,0x10                   ; 0051c2ab
    MOV EDX,EAX                         ; 0051c2af
    MOV dword ptr [ECX + 0x24],EAX      ; 0051c2b1
    MOV EAX,EDI                         ; 0051c2b4
    IMUL EDX                            ; 0051c2b6
    SHRD EAX,EDX,0x10                   ; 0051c2b8
    MOV dword ptr [ESP],EAX             ; 0051c2bc
    MOV EDX,dword ptr [ESP]             ; 0051c2bf
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0051c2c2
    ADD EAX,EDX                         ; 0051c2c5
    MOV dword ptr [ECX + 0x20],EAX      ; 0051c2c7
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051c2ca
    MOV EDX,dword ptr [ESI + 0x20]      ; 0051c2cd
    SUB EAX,EDX                         ; 0051c2d0
    MOV EDX,EAX                         ; 0051c2d2
    MOV EAX,EBX                         ; 0051c2d4
    IMUL EDX                            ; 0051c2d6
    SHRD EAX,EDX,0x10                   ; 0051c2d8
    MOV EDX,EAX                         ; 0051c2dc
    MOV dword ptr [ECX + 0x14],EAX      ; 0051c2de
    MOV EAX,EDI                         ; 0051c2e1
    IMUL EDX                            ; 0051c2e3
    SHRD EAX,EDX,0x10                   ; 0051c2e5
    MOV dword ptr [ESP],EAX             ; 0051c2e9
    MOV EDX,dword ptr [ESP]             ; 0051c2ec
    MOV EAX,dword ptr [ESI + 0x20]      ; 0051c2ef
    ADD EAX,EDX                         ; 0051c2f2
    MOV dword ptr [ECX + 0x10],EAX      ; 0051c2f4
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0051c2f7
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0051c2fa
    SUB EAX,EDX                         ; 0051c2fd
    MOV EDX,EAX                         ; 0051c2ff
    MOV EAX,EBX                         ; 0051c301
    IMUL EDX                            ; 0051c303
    SHRD EAX,EDX,0x10                   ; 0051c305
    MOV EDX,EAX                         ; 0051c309
    MOV dword ptr [ECX + 0x34],EAX      ; 0051c30b
    MOV EAX,EDI                         ; 0051c30e
    IMUL EDX                            ; 0051c310
    SHRD EAX,EDX,0x10                   ; 0051c312
    MOV dword ptr [ESP],EAX             ; 0051c316
    MOV EDX,dword ptr [ESP]             ; 0051c319
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0051c31c
    ADD EAX,EDX                         ; 0051c31f
    MOV dword ptr [ECX + 0x30],EAX      ; 0051c321
    MOV EDX,dword ptr [EBP + 0x8]       ; 0051c324
    SUB EDX,dword ptr [ESI + 0x8]       ; 0051c327
    MOV EAX,EBX                         ; 0051c32a
    IMUL EDX                            ; 0051c32c
    SHRD EAX,EDX,0x10                   ; 0051c32e
    MOV EDX,EAX                         ; 0051c332
    MOV dword ptr [ECX + 0x2c],EAX      ; 0051c334
    MOV EAX,EDI                         ; 0051c337
    IMUL EDX                            ; 0051c339
    SHRD EAX,EDX,0x10                   ; 0051c33b
    MOV EDX,dword ptr [0x01e61648]      ; 0051c33f | DAT_01e61648
    MOV EBX,dword ptr [ESI + 0x8]       ; 0051c345
    INC EDX                             ; 0051c348
    ADD EBX,EAX                         ; 0051c349
    MOV dword ptr [0x01e61648],EDX      ; 0051c34b | DAT_01e61648
    MOV dword ptr [ECX + 0x28],EBX      ; 0051c351
    ADD ESP,0x4                         ; 0051c354
        ;   Label: LAB_0051c354
    POP EBP                             ; 0051c357
    POP EDI                             ; 0051c358
    POP ESI                             ; 0051c359
    POP EBX                             ; 0051c35a
    RET                                 ; 0051c35b
    MOV EAX,0xffffffff                  ; 0051c35c
        ;   Label: LAB_0051c35c
    XOR EDX,EDX                         ; 0051c361
    DIV EBX                             ; 0051c363
    MOV EBX,EAX                         ; 0051c365
    JMP 0x0051c236                      ; 0051c367
        ;   XREF to: 0051c236 (UNCONDITIONAL_JUMP)  ; LAB_0051c236

