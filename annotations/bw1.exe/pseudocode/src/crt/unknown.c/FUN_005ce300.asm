; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * crt_unknown_c_FUN_005ce300(char *param_1,undefined4 *param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ce48c at 005ce49e
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005ce4a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce300
        ;   Label: crt_unknown.c_FUN_005ce300
    PUSH ESI                            ; 005ce301
    PUSH EDI                            ; 005ce302
    PUSH EBP                            ; 005ce303
    SUB ESP,0xc                         ; 005ce304
    MOV EDI,dword ptr [ESP + 0x28]      ; 005ce307
    MOV EDX,dword ptr [ESP + 0x24]      ; 005ce30b
    TEST EDX,EDX                        ; 005ce30f
    JZ 0x005ce319                       ; 005ce311
        ;   XREF to: 005ce319 (CONDITIONAL_JUMP)  ; LAB_005ce319
    MOV EAX,dword ptr [ESP + 0x20]      ; 005ce313
    MOV dword ptr [EDX],EAX             ; 005ce317
    MOV EBX,dword ptr [ESP + 0x20]      ; 005ce319
        ;   Label: LAB_005ce319
    MOV AL,byte ptr [EBX]               ; 005ce31d
        ;   Label: LAB_005ce31d
    INC AL                              ; 005ce31f
    AND EAX,0xff                        ; 005ce321
    TEST byte ptr [EAX + 0x626114],0x2  ; 005ce326
    JZ 0x005ce332                       ; 005ce32d
        ;   XREF to: 005ce332 (CONDITIONAL_JUMP)  ; LAB_005ce332
    INC EBX                             ; 005ce32f
    JMP 0x005ce31d                      ; 005ce330
        ;   XREF to: 005ce31d (UNCONDITIONAL_JUMP)  ; LAB_005ce31d
    MOV AL,byte ptr [EBX]               ; 005ce332
        ;   Label: LAB_005ce332
    MOV byte ptr [ESP + 0x8],AL         ; 005ce334
    CMP AL,0x2b                         ; 005ce338
    JZ 0x005ce340                       ; 005ce33a
        ;   XREF to: 005ce340 (CONDITIONAL_JUMP)  ; LAB_005ce340
    CMP AL,0x2d                         ; 005ce33c
    JNZ 0x005ce341                      ; 005ce33e
        ;   XREF to: 005ce341 (CONDITIONAL_JUMP)  ; LAB_005ce341
    INC EBX                             ; 005ce340
        ;   Label: LAB_005ce340
    TEST EDI,EDI                        ; 005ce341
        ;   Label: LAB_005ce341
    JNZ 0x005ce36f                      ; 005ce343
        ;   XREF to: 005ce36f (CONDITIONAL_JUMP)  ; LAB_005ce36f
    CMP byte ptr [EBX],0x30             ; 005ce345
    JNZ 0x005ce35c                      ; 005ce348
        ;   XREF to: 005ce35c (CONDITIONAL_JUMP)  ; LAB_005ce35c
    MOV AL,byte ptr [EBX + 0x1]         ; 005ce34a
    CMP AL,0x78                         ; 005ce34d
    JZ 0x005ce355                       ; 005ce34f
        ;   XREF to: 005ce355 (CONDITIONAL_JUMP)  ; LAB_005ce355
    CMP AL,0x58                         ; 005ce351
    JNZ 0x005ce35c                      ; 005ce353
        ;   XREF to: 005ce35c (CONDITIONAL_JUMP)  ; LAB_005ce35c
    MOV EDI,0x10                        ; 005ce355
        ;   Label: LAB_005ce355
    JMP 0x005ce38f                      ; 005ce35a
        ;   XREF to: 005ce38f (UNCONDITIONAL_JUMP)  ; LAB_005ce38f
    CMP byte ptr [EBX],0x30             ; 005ce35c
        ;   Label: LAB_005ce35c
    JNZ 0x005ce368                      ; 005ce35f
        ;   XREF to: 005ce368 (CONDITIONAL_JUMP)  ; LAB_005ce368
    MOV EDI,0x8                         ; 005ce361
    JMP 0x005ce3a4                      ; 005ce366
        ;   XREF to: 005ce3a4 (UNCONDITIONAL_JUMP)  ; LAB_005ce3a4
    MOV EDI,0xa                         ; 005ce368
        ;   Label: LAB_005ce368
    JMP 0x005ce3a4                      ; 005ce36d
        ;   XREF to: 005ce3a4 (UNCONDITIONAL_JUMP)  ; LAB_005ce3a4
    CMP EDI,0x2                         ; 005ce36f
        ;   Label: LAB_005ce36f
    JL 0x005ce379                       ; 005ce372
        ;   XREF to: 005ce379 (CONDITIONAL_JUMP)  ; LAB_005ce379
    CMP EDI,0x24                        ; 005ce374
    JLE 0x005ce38a                      ; 005ce377
        ;   XREF to: 005ce38a (CONDITIONAL_JUMP)  ; LAB_005ce38a
    PUSH 0xd                            ; 005ce379
        ;   Label: LAB_005ce379
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005ce37b
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005ce380
    XOR EAX,EAX                         ; 005ce383
    JMP 0x005ce466                      ; 005ce385
        ;   XREF to: 005ce466 (UNCONDITIONAL_JUMP)  ; LAB_005ce466
    CMP EDI,0x10                        ; 005ce38a
        ;   Label: LAB_005ce38a
    JNZ 0x005ce3a4                      ; 005ce38d
        ;   XREF to: 005ce3a4 (CONDITIONAL_JUMP)  ; LAB_005ce3a4
    CMP byte ptr [EBX],0x30             ; 005ce38f
        ;   Label: LAB_005ce38f
    JNZ 0x005ce3a4                      ; 005ce392
        ;   XREF to: 005ce3a4 (CONDITIONAL_JUMP)  ; LAB_005ce3a4
    MOV CL,byte ptr [EBX + 0x1]         ; 005ce394
    CMP CL,0x78                         ; 005ce397
    JZ 0x005ce3a1                       ; 005ce39a
        ;   XREF to: 005ce3a1 (CONDITIONAL_JUMP)  ; LAB_005ce3a1
    CMP CL,0x58                         ; 005ce39c
    JNZ 0x005ce3a4                      ; 005ce39f
        ;   XREF to: 005ce3a4 (CONDITIONAL_JUMP)  ; LAB_005ce3a4
    ADD EBX,0x2                         ; 005ce3a1
        ;   Label: LAB_005ce3a1
    MOV dword ptr [ESP],EBX             ; 005ce3a4
        ;   Label: LAB_005ce3a4
    LEA EBP,[EDI*0x4 + 0x0]             ; 005ce3a7
    XOR AL,AL                           ; 005ce3ae
    XOR ESI,ESI                         ; 005ce3b0
    MOV byte ptr [ESP + 0x4],AL         ; 005ce3b2
    XOR EAX,EAX                         ; 005ce3b6
        ;   Label: LAB_005ce3b6
    MOV AL,byte ptr [EBX]               ; 005ce3b8
    PUSH EAX                            ; 005ce3ba
    CALL crt_unknown.c_FUN_005ce4a8     ; 005ce3bb
        ;   XREF to: 005ce4a8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ce4a8()
    ADD ESP,0x4                         ; 005ce3c0
    MOV EDX,EAX                         ; 005ce3c3
    CMP EAX,EDI                         ; 005ce3c5
    JGE 0x005ce3e9                      ; 005ce3c7
        ;   XREF to: 005ce3e9 (CONDITIONAL_JUMP)  ; LAB_005ce3e9
    CMP ESI,dword ptr [EBP + 0x626b74]  ; 005ce3c9
    JBE 0x005ce3d6                      ; 005ce3cf
        ;   XREF to: 005ce3d6 (CONDITIONAL_JUMP)  ; LAB_005ce3d6
    MOV byte ptr [ESP + 0x4],0x1        ; 005ce3d1
    MOV EAX,ESI                         ; 005ce3d6
        ;   Label: LAB_005ce3d6
    IMUL ESI,EDI                        ; 005ce3d8
    ADD ESI,EDX                         ; 005ce3db
    CMP ESI,EAX                         ; 005ce3dd
    JNC 0x005ce3e6                      ; 005ce3df
        ;   XREF to: 005ce3e6 (CONDITIONAL_JUMP)  ; LAB_005ce3e6
    MOV byte ptr [ESP + 0x4],0x1        ; 005ce3e1
    INC EBX                             ; 005ce3e6
        ;   Label: LAB_005ce3e6
    JMP 0x005ce3b6                      ; 005ce3e7
        ;   XREF to: 005ce3b6 (UNCONDITIONAL_JUMP)  ; LAB_005ce3b6
    CMP EBX,dword ptr [ESP]             ; 005ce3e9
        ;   Label: LAB_005ce3e9
    JNZ 0x005ce3f2                      ; 005ce3ec
        ;   XREF to: 005ce3f2 (CONDITIONAL_JUMP)  ; LAB_005ce3f2
    MOV EBX,dword ptr [ESP + 0x20]      ; 005ce3ee
    MOV EBP,dword ptr [ESP + 0x24]      ; 005ce3f2
        ;   Label: LAB_005ce3f2
    TEST EBP,EBP                        ; 005ce3f6
    JZ 0x005ce3fd                       ; 005ce3f8
        ;   XREF to: 005ce3fd (CONDITIONAL_JUMP)  ; LAB_005ce3fd
    MOV dword ptr [EBP],EBX             ; 005ce3fa
    CMP dword ptr [ESP + 0x2c],0x1      ; 005ce3fd
        ;   Label: LAB_005ce3fd
    JNZ 0x005ce415                      ; 005ce402
        ;   XREF to: 005ce415 (CONDITIONAL_JUMP)  ; LAB_005ce415
    CMP ESI,0x80000000                  ; 005ce404
    JC 0x005ce415                       ; 005ce40a
        ;   XREF to: 005ce415 (CONDITIONAL_JUMP)  ; LAB_005ce415
    JNZ 0x005ce41c                      ; 005ce40c
        ;   XREF to: 005ce41c (CONDITIONAL_JUMP)  ; LAB_005ce41c
    CMP byte ptr [ESP + 0x8],0x2d       ; 005ce40e
    JNZ 0x005ce41c                      ; 005ce413
        ;   XREF to: 005ce41c (CONDITIONAL_JUMP)  ; LAB_005ce41c
    CMP byte ptr [ESP + 0x4],0x0        ; 005ce415
        ;   Label: LAB_005ce415
    JZ 0x005ce45b                       ; 005ce41a
        ;   XREF to: 005ce45b (CONDITIONAL_JUMP)  ; LAB_005ce45b
    PUSH 0xe                            ; 005ce41c
        ;   Label: LAB_005ce41c
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005ce41e
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005ce423
    CMP dword ptr [ESP + 0x2c],0x0      ; 005ce426
    JNZ 0x005ce43a                      ; 005ce42b
        ;   XREF to: 005ce43a (CONDITIONAL_JUMP)  ; LAB_005ce43a
    MOV EAX,0xffffffff                  ; 005ce42d
    ADD ESP,0xc                         ; 005ce432
    POP EBP                             ; 005ce435
    POP EDI                             ; 005ce436
    POP ESI                             ; 005ce437
    POP EBX                             ; 005ce438
    RET                                 ; 005ce439
    CMP byte ptr [ESP + 0x8],0x2d       ; 005ce43a
        ;   Label: LAB_005ce43a
    JNZ 0x005ce44e                      ; 005ce43f
        ;   XREF to: 005ce44e (CONDITIONAL_JUMP)  ; LAB_005ce44e
    MOV EAX,0x80000000                  ; 005ce441
    ADD ESP,0xc                         ; 005ce446
    POP EBP                             ; 005ce449
    POP EDI                             ; 005ce44a
    POP ESI                             ; 005ce44b
    POP EBX                             ; 005ce44c
    RET                                 ; 005ce44d
    MOV EAX,0x7fffffff                  ; 005ce44e
        ;   Label: LAB_005ce44e
    ADD ESP,0xc                         ; 005ce453
    POP EBP                             ; 005ce456
    POP EDI                             ; 005ce457
    POP ESI                             ; 005ce458
    POP EBX                             ; 005ce459
    RET                                 ; 005ce45a
    CMP byte ptr [ESP + 0x8],0x2d       ; 005ce45b
        ;   Label: LAB_005ce45b
    JNZ 0x005ce464                      ; 005ce460
        ;   XREF to: 005ce464 (CONDITIONAL_JUMP)  ; LAB_005ce464
    NEG ESI                             ; 005ce462
    MOV EAX,ESI                         ; 005ce464
        ;   Label: LAB_005ce464
    ADD ESP,0xc                         ; 005ce466
        ;   Label: LAB_005ce466
    POP EBP                             ; 005ce469
    POP EDI                             ; 005ce46a
    POP ESI                             ; 005ce46b
    POP EBX                             ; 005ce46c
    RET                                 ; 005ce46d

