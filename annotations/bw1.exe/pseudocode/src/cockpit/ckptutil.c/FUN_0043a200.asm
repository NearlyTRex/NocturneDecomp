; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0043a200(undefined4 *param_1,int param_2,uint param_3,uint param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c08d0
;   crt_unknown.c_FUN_005c09f0
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a200
        ;   Label: cockpit_ckptutil.c_FUN_0043a200
    PUSH ESI                            ; 0043a201
    PUSH EDI                            ; 0043a202
    PUSH EBP                            ; 0043a203
    SUB ESP,0x68                        ; 0043a204
    MOV EBP,dword ptr [ESP + 0x88]      ; 0043a207
    MOV EAX,dword ptr [ESP + 0x80]      ; 0043a20e
    IMUL EAX,EBP                        ; 0043a215
    MOV EBX,dword ptr [ESP + 0x80]      ; 0043a218
    IMUL EBX,dword ptr [ESP + 0x84]     ; 0043a21f
    IMUL EBX,EBP                        ; 0043a227
    PUSH EBX                            ; 0043a22a
    MOV dword ptr [ESP + 0x64],EAX      ; 0043a22b
    CALL crt_unknown.c_FUN_005c08d0     ; 0043a22f
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0043a234
    MOV dword ptr [ESP + 0x54],EAX      ; 0043a237
    TEST EAX,EAX                        ; 0043a23b
    JZ 0x0043a2ec                       ; 0043a23d
        ;   XREF to: 0043a2ec (CONDITIONAL_JUMP)  ; LAB_0043a2ec
    CMP EBP,0x1                         ; 0043a243
        ;   Label: LAB_0043a243
    JNZ 0x0043a325                      ; 0043a246
        ;   XREF to: 0043a325 (CONDITIONAL_JUMP)  ; LAB_0043a325
    MOV EAX,dword ptr [ESP + 0x84]      ; 0043a24c
    XOR ESI,ESI                         ; 0043a253
    TEST EAX,EAX                        ; 0043a255
    JBE 0x0043a2ad                      ; 0043a257
        ;   XREF to: 0043a2ad (CONDITIONAL_JUMP)  ; LAB_0043a2ad
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043a259
    MOV dword ptr [ESP + 0x50],EAX      ; 0043a25d
    IMUL EDI,EAX,0x0                    ; 0043a261
    MOV EAX,dword ptr [ESP + 0x84]      ; 0043a264
        ;   Label: LAB_0043a264
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0043a26b
    MOV EBX,dword ptr [ESP + 0x54]      ; 0043a26f
    SUB EAX,ESI                         ; 0043a273
    MOV ECX,dword ptr [ESP + 0x60]      ; 0043a275
    DEC EAX                             ; 0043a279
    ADD EDX,EDI                         ; 0043a27a
    ADD EBX,EAX                         ; 0043a27c
    XOR EAX,EAX                         ; 0043a27e
    TEST ECX,ECX                        ; 0043a280
    JBE 0x0043a29b                      ; 0043a282
        ;   XREF to: 0043a29b (CONDITIONAL_JUMP)  ; LAB_0043a29b
    MOV CL,byte ptr [EDX]               ; 0043a284
        ;   Label: LAB_0043a284
    MOV byte ptr [EBX],CL               ; 0043a286
    MOV ECX,dword ptr [ESP + 0x84]      ; 0043a288
    INC EAX                             ; 0043a28f
    ADD EBX,ECX                         ; 0043a290
    MOV ECX,dword ptr [ESP + 0x60]      ; 0043a292
    INC EDX                             ; 0043a296
    CMP EAX,ECX                         ; 0043a297
    JC 0x0043a284                       ; 0043a299
        ;   XREF to: 0043a284 (CONDITIONAL_JUMP)  ; LAB_0043a284
    MOV EBX,dword ptr [ESP + 0x50]      ; 0043a29b
        ;   Label: LAB_0043a29b
    MOV EAX,dword ptr [ESP + 0x84]      ; 0043a29f
    INC ESI                             ; 0043a2a6
    ADD EDI,EBX                         ; 0043a2a7
    CMP ESI,EAX                         ; 0043a2a9
    JC 0x0043a264                       ; 0043a2ab
        ;   XREF to: 0043a264 (CONDITIONAL_JUMP)  ; LAB_0043a264
    MOV ECX,dword ptr [ESP + 0x80]      ; 0043a2ad
        ;   Label: LAB_0043a2ad
    IMUL ECX,dword ptr [ESP + 0x84]     ; 0043a2b4
    IMUL ECX,EBP                        ; 0043a2bc
    MOV ESI,dword ptr [ESP + 0x54]      ; 0043a2bf
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0043a2c3
    PUSH EDI                            ; 0043a2c7
    MOV EAX,ECX                         ; 0043a2c8
    SHR ECX,0x2                         ; 0043a2ca
    MOVSD.REP ES:EDI,ESI                ; 0043a2cd
    MOV CL,AL                           ; 0043a2cf
    AND CL,0x3                          ; 0043a2d1
    MOVSB.REP ES:EDI,ESI                ; 0043a2d4
    POP EDI                             ; 0043a2d6
    MOV ESI,dword ptr [ESP + 0x54]      ; 0043a2d7
    PUSH ESI                            ; 0043a2db
    CALL crt_unknown.c_FUN_005c09f0     ; 0043a2dc
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0043a2e1
    ADD ESP,0x68                        ; 0043a2e4
    POP EBP                             ; 0043a2e7
    POP EDI                             ; 0043a2e8
    POP ESI                             ; 0043a2e9
    POP EBX                             ; 0043a2ea
    RET                                 ; 0043a2eb
    PUSH EBX                            ; 0043a2ec
        ;   Label: LAB_0043a2ec
    PUSH 0x5d6484                       ; 0043a2ed
    LEA EAX,[ESP + 0x8]                 ; 0043a2f2
    PUSH EAX                            ; 0043a2f6
    MOV EBX,0x801                       ; 0043a2f7
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0043a2fc
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0043a301
    MOV EAX,ESP                         ; 0043a304
    MOV ECX,0x5d64be                    ; 0043a306
    PUSH EAX                            ; 0043a30b
    MOV dword ptr [0x01d1d404],EBX      ; 0043a30c | DAT_01d1d404
    MOV dword ptr [0x01d1d400],ECX      ; 0043a312 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 0043a318
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043a31d
    JMP 0x0043a243                      ; 0043a320
        ;   XREF to: 0043a243 (UNCONDITIONAL_JUMP)  ; LAB_0043a243
    XOR ESI,ESI                         ; 0043a325
        ;   Label: LAB_0043a325
    MOV EDI,dword ptr [ESP + 0x84]      ; 0043a327
    MOV dword ptr [ESP + 0x58],ESI      ; 0043a32e
    TEST EDI,EDI                        ; 0043a332
    JBE 0x0043a2ad                      ; 0043a334
        ;   XREF to: 0043a2ad (CONDITIONAL_JUMP)  ; LAB_0043a2ad
    MOV EAX,EDI                         ; 0043a33a
    IMUL EAX,EBP                        ; 0043a33c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043a33f
    MOV EDX,dword ptr [ESP + 0x58]      ; 0043a343
        ;   Label: LAB_0043a343
    IMUL EDX,dword ptr [ESP + 0x60]     ; 0043a347
    MOV EAX,dword ptr [ESP + 0x84]      ; 0043a34c
    SUB EAX,dword ptr [ESP + 0x58]      ; 0043a353
    DEC EAX                             ; 0043a357
    IMUL EAX,EBP                        ; 0043a358
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0043a35b
    MOV EBX,dword ptr [ESP + 0x54]      ; 0043a35f
    MOV ECX,dword ptr [ESP + 0x60]      ; 0043a363
    ADD EBX,EAX                         ; 0043a367
    XOR EAX,EAX                         ; 0043a369
    ADD EDX,ESI                         ; 0043a36b
    MOV dword ptr [ESP + 0x64],EAX      ; 0043a36d
    TEST ECX,ECX                        ; 0043a371
    JBE 0x0043a3a4                      ; 0043a373
        ;   XREF to: 0043a3a4 (CONDITIONAL_JUMP)  ; LAB_0043a3a4
    MOV ECX,EBP                         ; 0043a375
        ;   Label: LAB_0043a375
    MOV ESI,EDX                         ; 0043a377
    MOV EDI,EBX                         ; 0043a379
    PUSH EDI                            ; 0043a37b
    MOV EAX,ECX                         ; 0043a37c
    SHR ECX,0x2                         ; 0043a37e
    MOVSD.REP ES:EDI,ESI                ; 0043a381
    MOV CL,AL                           ; 0043a383
    AND CL,0x3                          ; 0043a385
    MOVSB.REP ES:EDI,ESI                ; 0043a388
    POP EDI                             ; 0043a38a
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0043a38b
    MOV EDI,dword ptr [ESP + 0x64]      ; 0043a38f
    MOV ECX,dword ptr [ESP + 0x60]      ; 0043a393
    ADD EDX,EBP                         ; 0043a397
    INC EDI                             ; 0043a399
    ADD EBX,ESI                         ; 0043a39a
    MOV dword ptr [ESP + 0x64],EDI      ; 0043a39c
    CMP EDI,ECX                         ; 0043a3a0
    JC 0x0043a375                       ; 0043a3a2
        ;   XREF to: 0043a375 (CONDITIONAL_JUMP)  ; LAB_0043a375
    MOV EDX,dword ptr [ESP + 0x58]      ; 0043a3a4
        ;   Label: LAB_0043a3a4
    INC EDX                             ; 0043a3a8
    MOV ECX,dword ptr [ESP + 0x84]      ; 0043a3a9
    MOV dword ptr [ESP + 0x58],EDX      ; 0043a3b0
    CMP EDX,ECX                         ; 0043a3b4
    JNC 0x0043a2ad                      ; 0043a3b6
        ;   XREF to: 0043a2ad (CONDITIONAL_JUMP)  ; LAB_0043a2ad
    JMP 0x0043a343                      ; 0043a3bc
        ;   XREF to: 0043a343 (UNCONDITIONAL_JUMP)  ; LAB_0043a343

