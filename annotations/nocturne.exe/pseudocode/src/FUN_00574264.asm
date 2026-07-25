; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00574264(short *param_1)
;
;
; XREF[3]:
;   FUN_00573930 at 00573aec
;   FUN_005740b0 at 005741d4
;   FUN_00574680 at 005746ca
;
; Referenced Globals:
;   undefined4 DAT_02de54a0
;   undefined4 DAT_02de54a8
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   crt_memory.c_memset_FUN_00563cc0
;   crt_memory.c_realloc_FUN_00564a70
;   crt_string.c_memmove_FUN_00566170
;   FUN_00571410
;   FUN_00574404
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574264
        ;   Label: FUN_00574264
    PUSH ESI                            ; 00574265
    PUSH EDI                            ; 00574266
    PUSH EBP                            ; 00574267
    SUB ESP,0x8                         ; 00574268
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0057426b
    TEST EDX,EDX                        ; 0057426f
    JNZ 0x0057427d                      ; 00574271
        ;   XREF to: 0057427d (CONDITIONAL_JUMP)  ; LAB_0057427d
    MOV EAX,0xffffffff                  ; 00574273
    JMP 0x005743fa                      ; 00574278
        ;   XREF to: 005743fa (UNCONDITIONAL_JUMP)  ; LAB_005743fa
    CMP word ptr [EDX],0x0              ; 0057427d
        ;   Label: LAB_0057427d
    JZ 0x005742a5                       ; 00574281
        ;   XREF to: 005742a5 (CONDITIONAL_JUMP)  ; LAB_005742a5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00574283
    MOV BX,word ptr [EAX + 0x2]         ; 00574287
    ADD EAX,0x2                         ; 0057428b
    TEST BX,BX                          ; 0057428e
    JZ 0x005742a5                       ; 00574291
        ;   XREF to: 005742a5 (CONDITIONAL_JUMP)  ; LAB_005742a5
    CMP word ptr [EAX],0x3d             ; 00574293
        ;   Label: LAB_00574293
    JZ 0x005742a5                       ; 00574297
        ;   XREF to: 005742a5 (CONDITIONAL_JUMP)  ; LAB_005742a5
    MOV CX,word ptr [EAX + 0x2]         ; 00574299
    ADD EAX,0x2                         ; 0057429d
    TEST CX,CX                          ; 005742a0
    JNZ 0x00574293                      ; 005742a3
        ;   XREF to: 00574293 (CONDITIONAL_JUMP)  ; LAB_00574293
    CMP word ptr [EAX],0x0              ; 005742a5
        ;   Label: LAB_005742a5
    JNZ 0x005742b8                      ; 005742a9
        ;   XREF to: 005742b8 (CONDITIONAL_JUMP)  ; LAB_005742b8
    MOV EAX,0xffffffff                  ; 005742ab
    ADD ESP,0x8                         ; 005742b0
    POP EBP                             ; 005742b3
    POP EDI                             ; 005742b4
    POP ESI                             ; 005742b5
    POP EBX                             ; 005742b6
    RET                                 ; 005742b7
    CMP word ptr [EAX + 0x2],0x0        ; 005742b8
        ;   Label: LAB_005742b8
    SETZ AL                             ; 005742bd
    MOV EBX,dword ptr [0x02de54a8]      ; 005742c0 | DAT_02de54a8
    MOVZX ESI,AL                        ; 005742c6
    TEST EBX,EBX                        ; 005742c9
    JNZ 0x0057430a                      ; 005742cb
        ;   XREF to: 0057430a (CONDITIONAL_JUMP)  ; LAB_0057430a
    TEST ESI,ESI                        ; 005742cd
    JNZ 0x005743f8                      ; 005742cf
        ;   XREF to: 005743f8 (CONDITIONAL_JUMP)  ; LAB_005743f8
    PUSH 0x9                            ; 005742d5
    CALL crt_memory.c_malloc_FUN_005635b0 ; 005742d7
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 005742dc
    MOV EBX,EAX                         ; 005742df
    TEST EAX,EAX                        ; 005742e1
    JNZ 0x005742f2                      ; 005742e3
        ;   XREF to: 005742f2 (CONDITIONAL_JUMP)  ; LAB_005742f2
    MOV EAX,0xffffffff                  ; 005742e5
    ADD ESP,0x8                         ; 005742ea
    POP EBP                             ; 005742ed
    POP EDI                             ; 005742ee
    POP ESI                             ; 005742ef
    POP EBX                             ; 005742f0
    RET                                 ; 005742f1
    MOV [0x02de54a8],EAX                ; 005742f2 | DAT_02de54a8
        ;   Label: LAB_005742f2
    ADD EAX,0x8                         ; 005742f7
    MOV dword ptr [EAX + -0x8],ESI      ; 005742fa
    MOV dword ptr [EAX + -0x4],ESI      ; 005742fd
    MOV [0x02de54a0],EAX                ; 00574300 | DAT_02de54a0
    JMP 0x005743e0                      ; 00574305
        ;   XREF to: 005743e0 (UNCONDITIONAL_JUMP)  ; LAB_005743e0
    PUSH ESI                            ; 0057430a
        ;   Label: LAB_0057430a
    MOV ECX,dword ptr [ESP + 0x20]      ; 0057430b
    PUSH ECX                            ; 0057430f
    CALL FUN_00574404                   ; 00574310
        ;   XREF to: 00574404 (UNCONDITIONAL_CALL)  ; undefined FUN_00574404()
    ADD ESP,0x8                         ; 00574315
    TEST ESI,ESI                        ; 00574318
    JNZ 0x005743f8                      ; 0057431a
        ;   XREF to: 005743f8 (CONDITIONAL_JUMP)  ; LAB_005743f8
    TEST EAX,EAX                        ; 00574320
    JG 0x005743dd                       ; 00574322
        ;   XREF to: 005743dd (CONDITIONAL_JUMP)  ; LAB_005743dd
    NEG EAX                             ; 00574328
    MOV ESI,EAX                         ; 0057432a
    INC EAX                             ; 0057432c
    MOV dword ptr [ESP + 0x4],EAX       ; 0057432d
    MOV EAX,ESI                         ; 00574331
    SHL EAX,0x2                         ; 00574333
    MOV dword ptr [ESP],EAX             ; 00574336
    LEA EBP,[EAX + 0x8]                 ; 00574339
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057433c
    MOV EDI,dword ptr [0x02de54a0]      ; 00574340 | DAT_02de54a0
    ADD EAX,EBP                         ; 00574346
    TEST EDI,EDI                        ; 00574348
    JNZ 0x00574397                      ; 0057434a
        ;   XREF to: 00574397 (CONDITIONAL_JUMP)  ; LAB_00574397
    PUSH EAX                            ; 0057434c
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0057434d
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    MOV EDI,EAX                         ; 00574352
    ADD ESP,0x4                         ; 00574354
    MOV EBX,EAX                         ; 00574357
    TEST EAX,EAX                        ; 00574359
    JNZ 0x0057436a                      ; 0057435b
        ;   XREF to: 0057436a (CONDITIONAL_JUMP)  ; LAB_0057436a
    MOV EAX,0xffffffff                  ; 0057435d
    ADD ESP,0x8                         ; 00574362
    POP EBP                             ; 00574365
    POP EDI                             ; 00574366
    POP ESI                             ; 00574367
    POP EBX                             ; 00574368
    RET                                 ; 00574369
    MOV ECX,dword ptr [ESP]             ; 0057436a
        ;   Label: LAB_0057436a
    PUSH ECX                            ; 0057436d
    MOV EAX,[0x02de54a8]                ; 0057436e | DAT_02de54a8
    PUSH EAX                            ; 00574373
    PUSH EDI                            ; 00574374
    CALL FUN_00571410                   ; 00574375
        ;   XREF to: 00571410 (UNCONDITIONAL_CALL)  ; undefined FUN_00571410()
    ADD ESP,0xc                         ; 0057437a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0057437d
    PUSH EDX                            ; 00574381
    PUSH 0x0                            ; 00574382
    ADD EDI,EBP                         ; 00574384
    PUSH EDI                            ; 00574386
    MOV dword ptr [0x02de54a0],EDI      ; 00574387 | DAT_02de54a0
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0057438d
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 00574392
    JMP 0x005743cd                      ; 00574395
        ;   XREF to: 005743cd (UNCONDITIONAL_JUMP)  ; LAB_005743cd
    PUSH EAX                            ; 00574397
        ;   Label: LAB_00574397
    PUSH EBX                            ; 00574398
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00574399
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    ADD ESP,0x8                         ; 0057439e
    MOV EBX,EAX                         ; 005743a1
    TEST EAX,EAX                        ; 005743a3
    JNZ 0x005743b4                      ; 005743a5
        ;   XREF to: 005743b4 (CONDITIONAL_JUMP)  ; LAB_005743b4
    MOV EAX,0xffffffff                  ; 005743a7
    ADD ESP,0x8                         ; 005743ac
    POP EBP                             ; 005743af
    POP EDI                             ; 005743b0
    POP ESI                             ; 005743b1
    POP EBX                             ; 005743b2
    RET                                 ; 005743b3
    PUSH ESI                            ; 005743b4
        ;   Label: LAB_005743b4
    MOV EDX,dword ptr [0x02de54a0]      ; 005743b5 | DAT_02de54a0
    PUSH EDX                            ; 005743bb
    ADD EBP,EAX                         ; 005743bc
    PUSH EBP                            ; 005743be
    CALL crt_string.c_memmove_FUN_00566170 ; 005743bf
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 005743c4
    MOV dword ptr [0x02de54a0],EBP      ; 005743c7 | DAT_02de54a0
    MOV dword ptr [EBX + ESI*0x4 + 0x4],0x0 ; 005743cd
        ;   Label: LAB_005743cd
    MOV dword ptr [0x02de54a8],EBX      ; 005743d5 | DAT_02de54a8
    JMP 0x005743e0                      ; 005743db
        ;   XREF to: 005743e0 (UNCONDITIONAL_JUMP)  ; LAB_005743e0
    LEA ESI,[EAX + -0x1]                ; 005743dd
        ;   Label: LAB_005743dd
    LEA EAX,[ESI*0x4 + 0x0]             ; 005743e0
        ;   Label: LAB_005743e0
    ADD EBX,EAX                         ; 005743e7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005743e9
    MOV dword ptr [EBX],EAX             ; 005743ed
    MOV EAX,[0x02de54a0]                ; 005743ef | DAT_02de54a0
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 005743f4
    XOR EAX,EAX                         ; 005743f8
        ;   Label: LAB_005743f8
    ADD ESP,0x8                         ; 005743fa
        ;   Label: LAB_005743fa
    POP EBP                             ; 005743fd
    POP EDI                             ; 005743fe
    POP ESI                             ; 005743ff
    POP EBX                             ; 00574400
    RET                                 ; 00574401

