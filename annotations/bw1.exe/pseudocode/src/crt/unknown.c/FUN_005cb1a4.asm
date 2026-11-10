; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cb1a4(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cb5a8 at 005cb5e6
;
; Referenced Globals:
;   void* PTR_WriteFile_005d068c = 001d1308
;   TerminatedCString s_The_instruction_at_0x000_005facbc
;   TerminatedCString s_The_instruction_at_0x000_005fad10
;   TerminatedCString s_The_instruction_at_0x000_005fad64
;   TerminatedCString s_The_instruction_at_0x000_005fadb8
;   TerminatedCString s_The_instruction_at_0x000_005fae0c
;   TerminatedCString s_The_instruction_at_0x000_005fae60
;   TerminatedCString s_The_instruction_at_0x000_005faeac
;   TerminatedCString s_The_instruction_at_0x000_005faefc
;   TerminatedCString s_The_instruction_at_0x000_005faf54
;   TerminatedCString s_at_0x00000000_The_memory_005faf88
;   TerminatedCString s_read_005fafb0
;   TerminatedCString s_written_005fafb8
;   TerminatedCString s_A_privileged_instruction_005fafc4
;   TerminatedCString s_An_illegal_instruction_w_005fb004
;   ... and 5 more
;
; Called Functions:
;   crt_unknown.c_FUN_005cb110
;   crt_unknown.c_FUN_005cb148
;   crt_unknown.c_FUN_005cd0cc
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb1a4
        ;   Label: crt_unknown.c_FUN_005cb1a4
    PUSH ESI                            ; 005cb1a5
    PUSH EDI                            ; 005cb1a6
    PUSH EBP                            ; 005cb1a7
    SUB ESP,0x104                       ; 005cb1a8
    MOV EDI,dword ptr [ESP + 0x118]     ; 005cb1ae
    MOV EBX,dword ptr [EDI]             ; 005cb1b5
    MOV EDI,dword ptr [EDI + 0x4]       ; 005cb1b7
    CALL crt_unknown.c_FUN_005cb110     ; 005cb1ba
        ;   XREF to: 005cb110 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb110()
    TEST EAX,EAX                        ; 005cb1bf
    JNZ 0x005cb1cd                      ; 005cb1c1
        ;   XREF to: 005cb1cd (CONDITIONAL_JUMP)  ; LAB_005cb1cd
    CALL crt_unknown.c_FUN_005cd0cc     ; 005cb1c3
        ;   XREF to: 005cd0cc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd0cc()
    CMP EAX,-0x1                        ; 005cb1c8
    JNZ 0x005cb1d4                      ; 005cb1cb
        ;   XREF to: 005cb1d4 (CONDITIONAL_JUMP)  ; LAB_005cb1d4
    XOR EAX,EAX                         ; 005cb1cd
        ;   Label: LAB_005cb1cd
    JMP 0x005cb3ae                      ; 005cb1cf
        ;   XREF to: 005cb3ae (UNCONDITIONAL_JUMP)  ; LAB_005cb3ae
    XOR AH,AH                           ; 005cb1d4
        ;   Label: LAB_005cb1d4
    MOV byte ptr [ESP],AH               ; 005cb1d6
    MOV EAX,dword ptr [EBX]             ; 005cb1d9
    CMP EAX,0xc0000090                  ; 005cb1db
    JC 0x005cb22f                       ; 005cb1e0
        ;   XREF to: 005cb22f (CONDITIONAL_JUMP)  ; LAB_005cb22f
    JBE 0x005cb2ca                      ; 005cb1e2
        ;   XREF to: 005cb2ca (CONDITIONAL_JUMP)  ; LAB_005cb2ca
    CMP EAX,0xc0000093                  ; 005cb1e8
    JC 0x005cb222                       ; 005cb1ed
        ;   XREF to: 005cb222 (CONDITIONAL_JUMP)  ; LAB_005cb222
    JBE 0x005cb2bc                      ; 005cb1ef
        ;   XREF to: 005cb2bc (CONDITIONAL_JUMP)  ; LAB_005cb2bc
    CMP EAX,0xc0000096                  ; 005cb1f5
    JC 0x005cb212                       ; 005cb1fa
        ;   XREF to: 005cb212 (CONDITIONAL_JUMP)  ; LAB_005cb212
    JBE 0x005cb31e                      ; 005cb1fc
        ;   XREF to: 005cb31e (CONDITIONAL_JUMP)  ; LAB_005cb31e
    CMP EAX,0xc00000fd                  ; 005cb202
    JZ 0x005cb33f                       ; 005cb207
        ;   XREF to: 005cb33f (CONDITIONAL_JUMP)  ; LAB_005cb33f
    JMP 0x005cb34a                      ; 005cb20d
        ;   XREF to: 005cb34a (UNCONDITIONAL_JUMP)  ; LAB_005cb34a
    CMP EAX,0xc0000094                  ; 005cb212
        ;   Label: LAB_005cb212
    JZ 0x005cb334                       ; 005cb217
        ;   XREF to: 005cb334 (CONDITIONAL_JUMP)  ; LAB_005cb334
    JMP 0x005cb34a                      ; 005cb21d
        ;   XREF to: 005cb34a (UNCONDITIONAL_JUMP)  ; LAB_005cb34a
    CMP EAX,0xc0000091                  ; 005cb222
        ;   Label: LAB_005cb222
    JBE 0x005cb2ae                      ; 005cb227
        ;   XREF to: 005cb2ae (CONDITIONAL_JUMP)  ; LAB_005cb2ae
    JMP 0x005cb262                      ; 005cb22d
        ;   XREF to: 005cb262 (UNCONDITIONAL_JUMP)  ; LAB_005cb262
    CMP EAX,0xc000008d                  ; 005cb22f
        ;   Label: LAB_005cb22f
    JC 0x005cb241                       ; 005cb234
        ;   XREF to: 005cb241 (CONDITIONAL_JUMP)  ; LAB_005cb241
    JBE 0x005cb284                      ; 005cb236
        ;   XREF to: 005cb284 (CONDITIONAL_JUMP)  ; LAB_005cb284
    CMP EAX,0xc000008e                  ; 005cb238
    JBE 0x005cb292                      ; 005cb23d
        ;   XREF to: 005cb292 (CONDITIONAL_JUMP)  ; LAB_005cb292
    JMP 0x005cb2a0                      ; 005cb23f
        ;   XREF to: 005cb2a0 (UNCONDITIONAL_JUMP)  ; LAB_005cb2a0
    CMP EAX,0xc0000005                  ; 005cb241
        ;   Label: LAB_005cb241
    JC 0x005cb34a                       ; 005cb246
        ;   XREF to: 005cb34a (CONDITIONAL_JUMP)  ; LAB_005cb34a
    JBE 0x005cb2d8                      ; 005cb24c
        ;   XREF to: 005cb2d8 (CONDITIONAL_JUMP)  ; LAB_005cb2d8
    CMP EAX,0xc000001d                  ; 005cb252
    JZ 0x005cb329                       ; 005cb257
        ;   XREF to: 005cb329 (CONDITIONAL_JUMP)  ; LAB_005cb329
    JMP 0x005cb34a                      ; 005cb25d
        ;   XREF to: 005cb34a (UNCONDITIONAL_JUMP)  ; LAB_005cb34a
    TEST byte ptr [EDI + 0x21],0x2      ; 005cb262
        ;   Label: LAB_005cb262
    JZ 0x005cb276                       ; 005cb266
        ;   XREF to: 005cb276 (CONDITIONAL_JUMP)  ; LAB_005cb276
    MOV EAX,dword ptr [EBX + 0xc]       ; 005cb268
    PUSH EAX                            ; 005cb26b
    PUSH 0x5facbc                       ; 005cb26c | = "The instruction at 0x00000000 caused ..."
    JMP 0x005cb368                      ; 005cb271
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV EBP,dword ptr [EBX + 0xc]       ; 005cb276
        ;   Label: LAB_005cb276
    PUSH EBP                            ; 005cb279
    PUSH 0x5fad10                       ; 005cb27a | = "The instruction at 0x00000000 caused ..."
    JMP 0x005cb368                      ; 005cb27f
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV EBP,dword ptr [EBX + 0xc]       ; 005cb284
        ;   Label: LAB_005cb284
    PUSH EBP                            ; 005cb287
    PUSH 0x5fad64                       ; 005cb288 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005cb368                      ; 005cb28d
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV EDI,dword ptr [EBX + 0xc]       ; 005cb292
        ;   Label: LAB_005cb292
    PUSH EDI                            ; 005cb295
    PUSH 0x5fadb8                       ; 005cb296 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005cb368                      ; 005cb29b
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV ESI,dword ptr [EBX + 0xc]       ; 005cb2a0
        ;   Label: LAB_005cb2a0
    PUSH ESI                            ; 005cb2a3
    PUSH 0x5fae0c                       ; 005cb2a4 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005cb368                      ; 005cb2a9
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV EDX,dword ptr [EBX + 0xc]       ; 005cb2ae
        ;   Label: LAB_005cb2ae
    PUSH EDX                            ; 005cb2b1
    PUSH 0x5fae60                       ; 005cb2b2 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005cb368                      ; 005cb2b7
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV EDI,dword ptr [EBX + 0xc]       ; 005cb2bc
        ;   Label: LAB_005cb2bc
    PUSH EDI                            ; 005cb2bf
    PUSH 0x5faeac                       ; 005cb2c0 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005cb368                      ; 005cb2c5
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV ECX,dword ptr [EBX + 0xc]       ; 005cb2ca
        ;   Label: LAB_005cb2ca
    PUSH ECX                            ; 005cb2cd
    PUSH 0x5faefc                       ; 005cb2ce | = "The instruction at 0x00000000 caused ..."
    JMP 0x005cb368                      ; 005cb2d3
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV EDX,dword ptr [EBX + 0xc]       ; 005cb2d8
        ;   Label: LAB_005cb2d8
    PUSH EDX                            ; 005cb2db
    PUSH 0x5faf54                       ; 005cb2dc | = "The instruction at 0x00000000 referen..."
    LEA EAX,[ESP + 0x8]                 ; 005cb2e1
    PUSH EAX                            ; 005cb2e5
    CALL crt_unknown.c_FUN_005cb148     ; 005cb2e6
        ;   XREF to: 005cb148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb148()
    ADD ESP,0xc                         ; 005cb2eb
    MOV ECX,dword ptr [EBX + 0x18]      ; 005cb2ee
    PUSH ECX                            ; 005cb2f1
    PUSH 0x5faf88                       ; 005cb2f2 | = "at 0x00000000.\nThe memory could not be "
    LEA EAX,[ESP + 0x8]                 ; 005cb2f7
    PUSH EAX                            ; 005cb2fb
    CALL crt_unknown.c_FUN_005cb148     ; 005cb2fc
        ;   XREF to: 005cb148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb148()
    MOV ESI,dword ptr [EBX + 0x14]      ; 005cb301
    ADD ESP,0xc                         ; 005cb304
    TEST ESI,ESI                        ; 005cb307
    JNZ 0x005cb314                      ; 005cb309
        ;   XREF to: 005cb314 (CONDITIONAL_JUMP)  ; LAB_005cb314
    PUSH ESI                            ; 005cb30b
    MOV EAX,0x5fafb0                    ; 005cb30c | = "read.\n"
    PUSH EAX                            ; 005cb311 | = "read.\n"
    JMP 0x005cb368                      ; 005cb312
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    PUSH 0x0                            ; 005cb314
        ;   Label: LAB_005cb314
    MOV EAX,0x5fafb8                    ; 005cb316 | = "written.\n"
    PUSH EAX                            ; 005cb31b | = "written.\n"
    JMP 0x005cb368                      ; 005cb31c
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV ECX,dword ptr [EBX + 0xc]       ; 005cb31e
        ;   Label: LAB_005cb31e
    PUSH ECX                            ; 005cb321
    PUSH 0x5fafc4                       ; 005cb322 | = "A privileged instruction was executed..."
    JMP 0x005cb368                      ; 005cb327
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV EAX,dword ptr [EBX + 0xc]       ; 005cb329
        ;   Label: LAB_005cb329
    PUSH EAX                            ; 005cb32c
    PUSH 0x5fb004                       ; 005cb32d | = "An illegal instruction was executed a..."
    JMP 0x005cb368                      ; 005cb332
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV ESI,dword ptr [EBX + 0xc]       ; 005cb334
        ;   Label: LAB_005cb334
    PUSH ESI                            ; 005cb337
    PUSH 0x5fb040                       ; 005cb338 | = "An integer divide by zero was encount..."
    JMP 0x005cb368                      ; 005cb33d
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV EDX,dword ptr [EBX + 0xc]       ; 005cb33f
        ;   Label: LAB_005cb33f
    PUSH EDX                            ; 005cb342
    PUSH 0x5fb084                       ; 005cb343 | = "A stack overflow was encountered at a..."
    JMP 0x005cb368                      ; 005cb348
        ;   XREF to: 005cb368 (UNCONDITIONAL_JUMP)  ; LAB_005cb368
    MOV EDI,dword ptr [EBX]             ; 005cb34a
        ;   Label: LAB_005cb34a
    PUSH EDI                            ; 005cb34c
    PUSH 0x5fb0c0                       ; 005cb34d | = "The program encountered exception 0x0..."
    LEA EAX,[ESP + 0x8]                 ; 005cb352
    PUSH EAX                            ; 005cb356
    CALL crt_unknown.c_FUN_005cb148     ; 005cb357
        ;   XREF to: 005cb148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb148()
    ADD ESP,0xc                         ; 005cb35c
    MOV EBP,dword ptr [EBX + 0xc]       ; 005cb35f
    PUSH EBP                            ; 005cb362
    PUSH 0x5fb0f4                       ; 005cb363 | = "address 0x00000000 and\ncannot contin..."
    LEA EAX,[ESP + 0x8]                 ; 005cb368
        ;   Label: LAB_005cb368
    PUSH EAX                            ; 005cb36c
    CALL crt_unknown.c_FUN_005cb148     ; 005cb36d
        ;   XREF to: 005cb148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb148()
    ADD ESP,0xc                         ; 005cb372
    PUSH 0x0                            ; 005cb375
    LEA EAX,[ESP + 0x104]               ; 005cb377
    PUSH EAX                            ; 005cb37e
    LEA EDI,[ESP + 0x8]                 ; 005cb37f
    PUSH ES                             ; 005cb383
    MOV AX,DS                           ; 005cb384
    MOV ES,AX                           ; 005cb386
    SUB ECX,ECX                         ; 005cb388
    DEC ECX                             ; 005cb38a
    XOR EAX,EAX                         ; 005cb38b
    SCASB.REPNE ES:EDI                  ; 005cb38d
    NOT ECX                             ; 005cb38f
    DEC ECX                             ; 005cb391
    POP ES                              ; 005cb392
    PUSH ECX                            ; 005cb393
    LEA EAX,[ESP + 0xc]                 ; 005cb394
    PUSH EAX                            ; 005cb398
    MOV EAX,[0x00626838]                ; 005cb399 | DAT_00626838
    MOV EDX,dword ptr [EAX + 0x8]       ; 005cb39e
    PUSH EDX                            ; 005cb3a1
    CALL dword ptr CS:[0x5d068c]        ; 005cb3a2 | PTR_WriteFile_005d068c
    MOV EAX,0x1                         ; 005cb3a9
    ADD ESP,0x104                       ; 005cb3ae
        ;   Label: LAB_005cb3ae
    POP EBP                             ; 005cb3b4
    POP EDI                             ; 005cb3b5
    POP ESI                             ; 005cb3b6
    POP EBX                             ; 005cb3b7
    RET 0x4                             ; 005cb3b8

