; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_flipEdgeArrayHorizontally_FUN_00430210(ushort *param_1,int param_2,short param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430210
        ;   Label: cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_00430210
    PUSH ESI                            ; 00430211
    PUSH EDI                            ; 00430212
    PUSH EBP                            ; 00430213
    SUB ESP,0x1c                        ; 00430214
    MOV EBP,dword ptr [ESP + 0x34]      ; 00430217
    XOR ECX,ECX                         ; 0043021b
    TEST EBP,EBP                        ; 0043021d
    JLE 0x004302f4                      ; 0043021f
        ;   XREF to: 004302f4 (CONDITIONAL_JUMP)  ; LAB_004302f4
    MOV EAX,dword ptr [ESP + 0x30]      ; 00430225
    MOV SI,word ptr [EAX + 0x2]         ; 00430229
        ;   Label: LAB_00430229
    MOVSX ESI,SI                        ; 0043022d
    MOV dword ptr [ESP + 0x4],ESI       ; 00430230
    MOV SI,word ptr [EAX + 0x4]         ; 00430234
    MOVSX ESI,SI                        ; 00430238
    MOV EDI,dword ptr [ESP + 0x38]      ; 0043023b
    MOV dword ptr [ESP],ESI             ; 0043023f
    MOV DX,word ptr [EAX]               ; 00430242
    SUB EDI,dword ptr [ESP]             ; 00430245
    MOVSX EBX,DX                        ; 00430248
    MOV dword ptr [ESP + 0xc],EDI       ; 0043024b
    MOV EDI,dword ptr [ESP + 0x38]      ; 0043024f
    SUB EDI,EBX                         ; 00430253
    MOV SI,word ptr [EAX + 0x6]         ; 00430255
    MOV dword ptr [ESP + 0x8],EDI       ; 00430259
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043025d
    ADD ESI,ESI                         ; 00430261
    DEC EDI                             ; 00430263
    SAR SI,0x1                          ; 00430264
    MOV dword ptr [ESP + 0x18],EDI      ; 00430267
    MOV EDI,dword ptr [ESP + 0x8]       ; 0043026b
    MOVSX ESI,SI                        ; 0043026f
    DEC EDI                             ; 00430272
    MOV dword ptr [ESP + 0x14],ESI      ; 00430273
    MOV dword ptr [ESP + 0x10],EDI      ; 00430277
    MOV EDI,dword ptr [ESP]             ; 0043027b
    MOV ESI,dword ptr [ESP + 0x4]       ; 0043027e
    CMP EBX,EDI                         ; 00430282
    JG 0x004302fc                       ; 00430284
        ;   XREF to: 004302fc (CONDITIONAL_JUMP)  ; LAB_004302fc
    MOV DI,word ptr [EAX + 0x2]         ; 00430286
    AND EDX,0xffff0000                  ; 0043028a
    AND EDI,0xffff0000                  ; 00430290
    MOV word ptr [EAX],DX               ; 00430296
    MOV EDX,dword ptr [ESP + 0x14]      ; 00430299
    MOV BX,word ptr [EAX]               ; 0043029d
    MOV word ptr [EAX + 0x2],DI         ; 004302a0
    OR EBX,EDX                          ; 004302a4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004302a6
    MOV word ptr [EAX],BX               ; 004302aa
    MOV EBX,EDI                         ; 004302ad
    MOV DI,word ptr [EAX + 0x4]         ; 004302af
    OR EBX,EDX                          ; 004302b3
    AND EDI,0xffff0000                  ; 004302b5
    MOV word ptr [EAX + 0x2],BX         ; 004302bb
    MOV EDX,EDI                         ; 004302bf
    MOV BX,word ptr [EAX + 0x6]         ; 004302c1
    MOV word ptr [EAX + 0x4],DI         ; 004302c5
    OR EDX,ESI                          ; 004302c9
    AND EBX,0xffff8000                  ; 004302cb
    MOV word ptr [EAX + 0x4],DX         ; 004302d1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004302d5
    MOV ESI,EBX                         ; 004302d9
    AND DH,0x7f                         ; 004302db
    MOV word ptr [EAX + 0x6],BX         ; 004302de
    OR ESI,EDX                          ; 004302e2
    MOV word ptr [EAX + 0x6],SI         ; 004302e4
    INC ECX                             ; 004302e8
    ADD EAX,0x8                         ; 004302e9
    CMP ECX,EBP                         ; 004302ec
    JL 0x00430229                       ; 004302ee
        ;   XREF to: 00430229 (CONDITIONAL_JUMP)  ; LAB_00430229
    ADD ESP,0x1c                        ; 004302f4
        ;   Label: LAB_004302f4
    POP EBP                             ; 004302f7
    POP EDI                             ; 004302f8
    POP ESI                             ; 004302f9
    POP EBX                             ; 004302fa
    RET                                 ; 004302fb
    AND EDX,0xffff0000                  ; 004302fc
        ;   Label: LAB_004302fc
    MOV BX,word ptr [EAX + 0x2]         ; 00430302
    MOV EDI,EDX                         ; 00430306
    AND EBX,0xffff0000                  ; 00430308
    MOV word ptr [EAX],DX               ; 0043030e
    OR EDI,ESI                          ; 00430311
    MOV word ptr [EAX + 0x2],BX         ; 00430313
    MOV EDX,dword ptr [ESP + 0x10]      ; 00430317
    MOV word ptr [EAX],DI               ; 0043031b
    MOV ESI,EBX                         ; 0043031e
    MOV DI,word ptr [EAX + 0x4]         ; 00430320
    OR ESI,EDX                          ; 00430324
    MOV EDX,dword ptr [ESP + 0x14]      ; 00430326
    AND EDI,0xffff0000                  ; 0043032a
    MOV word ptr [EAX + 0x2],SI         ; 00430330
    MOV EBX,EDI                         ; 00430334
    MOV SI,word ptr [EAX + 0x6]         ; 00430336
    MOV word ptr [EAX + 0x4],DI         ; 0043033a
    AND ESI,0xffff8000                  ; 0043033e
    OR EBX,EDX                          ; 00430344
    MOV EDX,dword ptr [ESP + 0x18]      ; 00430346
    MOV EDI,ESI                         ; 0043034a
    MOV word ptr [EAX + 0x4],BX         ; 0043034c
    AND DH,0x7f                         ; 00430350
    MOV word ptr [EAX + 0x6],SI         ; 00430353
    OR EDI,EDX                          ; 00430357
    MOV word ptr [EAX + 0x6],DI         ; 00430359
    INC ECX                             ; 0043035d
    ADD EAX,0x8                         ; 0043035e
    CMP ECX,EBP                         ; 00430361
    JL 0x00430229                       ; 00430363
        ;   XREF to: 00430229 (CONDITIONAL_JUMP)  ; LAB_00430229
    ADD ESP,0x1c                        ; 00430369
    POP EBP                             ; 0043036c
    POP EDI                             ; 0043036d
    POP ESI                             ; 0043036e
    POP EBX                             ; 0043036f
    RET                                 ; 00430370

