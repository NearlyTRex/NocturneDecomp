; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_font_cpp_FUN_004ab35e(CBitFont *param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int param_8)
;
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004ab35e
        ;   Label: engine_font.cpp_FUN_004ab35e
    PUSH EBX                            ; 004ab360
    PUSH ESI                            ; 004ab361
    PUSH EBP                            ; 004ab362
    SUB ESP,0x20                        ; 004ab363
    MOV EBP,dword ptr [ESP + 0x34]      ; 004ab366
    MOV ESI,dword ptr [ESP + 0x38]      ; 004ab36a
    MOV EBX,dword ptr [ESP + 0x40]      ; 004ab36e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ab372
    IMUL EAX,EBX                        ; 004ab376
    PUSH EAX                            ; 004ab379
    PUSH 0x0                            ; 004ab37a
    PUSH ESI                            ; 004ab37c
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004ab37d
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004ab382
    TEST EBP,EBP                        ; 004ab385
    JZ 0x004ab3cc                       ; 004ab387
        ;   XREF to: 004ab3cc (CONDITIONAL_JUMP)  ; LAB_004ab3cc
    PUSH EDI                            ; 004ab389
    XOR EDX,EDX                         ; 004ab38a
    MOV ECX,dword ptr [ESP + 0x40]      ; 004ab38c
    MOV dword ptr [ESP + 0x1c],EDX      ; 004ab390
    TEST ECX,ECX                        ; 004ab394
    JLE 0x004ab46e                      ; 004ab396
        ;   XREF to: 004ab46e (CONDITIONAL_JUMP)  ; LAB_004ab46e
    LEA EAX,[EBX + -0x1]                ; 004ab39c
    MOV dword ptr [ESP + 0x10],EBX      ; 004ab39f
    MOV dword ptr [ESP + 0xc],EAX       ; 004ab3a3
    IMUL EAX,EBX,0x0                    ; 004ab3a7
    ADD EAX,ESI                         ; 004ab3aa
    MOV dword ptr [ESP + 0x14],EAX      ; 004ab3ac
    MOV AL,byte ptr [EBP]               ; 004ab3b0
        ;   Label: LAB_004ab3b0
    INC AL                              ; 004ab3b3
    AND EAX,0xff                        ; 004ab3b5
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004ab3ba
    JZ 0x004ab3d5                       ; 004ab3c1
        ;   XREF to: 004ab3d5 (CONDITIONAL_JUMP)  ; LAB_004ab3d5
    CMP byte ptr [EBP],0xa              ; 004ab3c3
    JZ 0x004ab3d5                       ; 004ab3c7
        ;   XREF to: 004ab3d5 (CONDITIONAL_JUMP)  ; LAB_004ab3d5
    INC EBP                             ; 004ab3c9
    JMP 0x004ab3b0                      ; 004ab3ca
        ;   XREF to: 004ab3b0 (UNCONDITIONAL_JUMP)  ; LAB_004ab3b0
    XOR EAX,EAX                         ; 004ab3cc
        ;   Label: LAB_004ab3cc
    ADD ESP,0x20                        ; 004ab3ce
    POP EBP                             ; 004ab3d1
    POP ESI                             ; 004ab3d2
    POP EBX                             ; 004ab3d3
    RET                                 ; 004ab3d4
    CMP byte ptr [EBP],0x0              ; 004ab3d5
        ;   Label: LAB_004ab3d5
    JZ 0x004ab46e                       ; 004ab3d9
        ;   XREF to: 004ab46e (CONDITIONAL_JUMP)  ; LAB_004ab46e
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ab3df
    MOV ESI,0xffffffff                  ; 004ab3e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ab3e8
    XOR EBX,EBX                         ; 004ab3ec
    MOV dword ptr [ESP + 0x4],EAX       ; 004ab3ee
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ab3f2
    MOV dword ptr [ESP + 0x18],ESI      ; 004ab3f6
    ADD EDI,EAX                         ; 004ab3fa
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ab3fc
    MOV ESI,EBP                         ; 004ab400
    INC EAX                             ; 004ab402
    MOV dword ptr [ESP + 0x14],EDI      ; 004ab403
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ab407
    XOR EAX,EAX                         ; 004ab40b
        ;   Label: LAB_004ab40b
    MOV AL,byte ptr [ESI]               ; 004ab40d
    MOV dword ptr [ESP + 0x20],EAX      ; 004ab40f
    CMP EAX,0xa                         ; 004ab413
    JNZ 0x004ab47a                      ; 004ab416
        ;   XREF to: 004ab47a (CONDITIONAL_JUMP)  ; LAB_004ab47a
    MOV EDX,EBX                         ; 004ab418
        ;   Label: LAB_004ab418
    TEST EBX,EBX                        ; 004ab41a
    JLE 0x004ab438                      ; 004ab41c
        ;   XREF to: 004ab438 (CONDITIONAL_JUMP)  ; LAB_004ab438
    LEA EAX,[EBX + EBP*0x1]             ; 004ab41e
    MOV CL,byte ptr [EAX + -0x1]        ; 004ab421
        ;   Label: LAB_004ab421
    INC CL                              ; 004ab424
    MOVZX ESI,CL                        ; 004ab426
    TEST byte ptr [ESI + 0x61ed94],0x2  ; 004ab429
    JZ 0x004ab438                       ; 004ab430
        ;   XREF to: 004ab438 (CONDITIONAL_JUMP)  ; LAB_004ab438
    DEC EDX                             ; 004ab432
    DEC EAX                             ; 004ab433
    TEST EDX,EDX                        ; 004ab434
    JG 0x004ab421                       ; 004ab436
        ;   XREF to: 004ab421 (CONDITIONAL_JUMP)  ; LAB_004ab421
    MOV EDI,dword ptr [ESP + 0x4]       ; 004ab438
        ;   Label: LAB_004ab438
    MOV ECX,EDX                         ; 004ab43c
    MOV ESI,EBP                         ; 004ab43e
    ADD EDX,EDI                         ; 004ab440
    PUSH EDI                            ; 004ab442
    MOV EAX,ECX                         ; 004ab443
    SHR ECX,0x2                         ; 004ab445
    MOVSD.REP ES:EDI,ESI                ; 004ab448
    MOV CL,AL                           ; 004ab44a
    AND CL,0x3                          ; 004ab44c
    MOVSB.REP ES:EDI,ESI                ; 004ab44f
    POP EDI                             ; 004ab451
    LEA EAX,[EBX + EBP*0x1]             ; 004ab452
    MOV byte ptr [EDX],0x0              ; 004ab455
    CMP byte ptr [EAX],0xa              ; 004ab458
    JNZ 0x004ab45e                      ; 004ab45b
        ;   XREF to: 004ab45e (CONDITIONAL_JUMP)  ; LAB_004ab45e
    INC EBX                             ; 004ab45d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ab45e
        ;   Label: LAB_004ab45e
    ADD EBP,EBX                         ; 004ab462
    CMP EAX,dword ptr [ESP + 0x40]      ; 004ab464
    JL 0x004ab3b0                       ; 004ab468
        ;   XREF to: 004ab3b0 (CONDITIONAL_JUMP)  ; LAB_004ab3b0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ab46e
        ;   Label: LAB_004ab46e
    POP EDI                             ; 004ab472
    ADD ESP,0x20                        ; 004ab473
    POP EBP                             ; 004ab476
    POP ESI                             ; 004ab477
    POP EBX                             ; 004ab478
    RET                                 ; 004ab479
    TEST EAX,EAX                        ; 004ab47a
        ;   Label: LAB_004ab47a
    JZ 0x004ab418                       ; 004ab47c
        ;   XREF to: 004ab418 (CONDITIONAL_JUMP)  ; LAB_004ab418
    MOV AL,byte ptr [ESP + 0x20]        ; 004ab47e
    INC AL                              ; 004ab482
    AND EAX,0xff                        ; 004ab484
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004ab489
    JZ 0x004ab496                       ; 004ab490
        ;   XREF to: 004ab496 (CONDITIONAL_JUMP)  ; LAB_004ab496
    MOV dword ptr [ESP + 0x18],EBX      ; 004ab492
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ab496
        ;   Label: LAB_004ab496
    XOR EDI,EDI                         ; 004ab49a
    CMP EBX,EAX                         ; 004ab49c
    JGE 0x004ab4e7                      ; 004ab49e
        ;   XREF to: 004ab4e7 (CONDITIONAL_JUMP)  ; LAB_004ab4e7
    XOR CH,CH                           ; 004ab4a0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004ab4a2
    MOV byte ptr [EBX + 0x1cafe40],CH   ; 004ab4a6
    CMP EDX,0x1                         ; 004ab4ac
    JLE 0x004ab4fc                      ; 004ab4af
        ;   XREF to: 004ab4fc (CONDITIONAL_JUMP)  ; LAB_004ab4fc
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ab4b1
        ;   Label: LAB_004ab4b1
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004ab4b5
    MOV EAX,dword ptr [EAX + 0x3668]    ; 004ab4b9
    IMUL EAX,EDX                        ; 004ab4bf
    PUSH 0x1cafe40                      ; 004ab4c2
    MOV ECX,dword ptr [ESP + 0x38]      ; 004ab4c7
    PUSH ECX                            ; 004ab4cb
    MOV dword ptr [ESP + 0x10],EAX      ; 004ab4cc
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004ab4d0
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004ab4d5
    ADD EAX,dword ptr [ESP + 0x8]       ; 004ab4d8
    CMP EAX,dword ptr [ESP + 0x48]      ; 004ab4dc
        ;   Label: LAB_004ab4dc
    JG 0x004ab4e7                       ; 004ab4e0
        ;   XREF to: 004ab4e7 (CONDITIONAL_JUMP)  ; LAB_004ab4e7
    MOV EDI,0x1                         ; 004ab4e2
    MOV AL,byte ptr [ESP + 0x20]        ; 004ab4e7
        ;   Label: LAB_004ab4e7
    MOV byte ptr [EBX + 0x1cafe40],AL   ; 004ab4eb
    TEST EDI,EDI                        ; 004ab4f1
    JZ 0x004ab517                       ; 004ab4f3
        ;   XREF to: 004ab517 (CONDITIONAL_JUMP)  ; LAB_004ab517
    INC EBX                             ; 004ab4f5
    INC ESI                             ; 004ab4f6
    JMP 0x004ab40b                      ; 004ab4f7
        ;   XREF to: 004ab40b (UNCONDITIONAL_JUMP)  ; LAB_004ab40b
    CMP dword ptr [ESP + 0x50],0x0      ; 004ab4fc
        ;   Label: LAB_004ab4fc
    JNZ 0x004ab4b1                      ; 004ab501
        ;   XREF to: 004ab4b1 (CONDITIONAL_JUMP)  ; LAB_004ab4b1
    PUSH 0x1cafe40                      ; 004ab503
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ab508
    PUSH EAX                            ; 004ab50c
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004ab50d
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004ab512
    JMP 0x004ab4dc                      ; 004ab515
        ;   XREF to: 004ab4dc (UNCONDITIONAL_JUMP)  ; LAB_004ab4dc
    MOV ESI,dword ptr [ESP + 0x18]      ; 004ab517
        ;   Label: LAB_004ab517
    TEST ESI,ESI                        ; 004ab51b
    JL 0x004ab418                       ; 004ab51d
        ;   XREF to: 004ab418 (CONDITIONAL_JUMP)  ; LAB_004ab418
    MOV EBX,ESI                         ; 004ab523
    JMP 0x004ab418                      ; 004ab525
        ;   XREF to: 004ab418 (UNCONDITIONAL_JUMP)  ; LAB_004ab418

