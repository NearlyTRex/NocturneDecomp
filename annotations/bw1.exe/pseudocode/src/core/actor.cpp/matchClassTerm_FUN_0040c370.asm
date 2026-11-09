; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_matchClassTerm_FUN_0040c370(CDemonActorType *param_1,int *param_2)
;
;
; XREF[1]:
;   core_actor.cpp_matchClassExpression_FUN_0040c490 at 0040c4d3
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; Called Functions:
;   core_actor.cpp_FUN_0040c580
;   core_actor.cpp_matchClassExpression_FUN_0040c490
;   crt_ctype.c_tolower_FUN_005c0820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c370
        ;   Label: core_actor.cpp_matchClassTerm_FUN_0040c370
    PUSH ESI                            ; 0040c371
    PUSH EDI                            ; 0040c372
    PUSH EBP                            ; 0040c373
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c374
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040c378
    MOV ESI,EBX                         ; 0040c37c
    MOV EAX,dword ptr [ESI]             ; 0040c37e
        ;   Label: LAB_0040c37e
    MOV DL,byte ptr [EAX]               ; 0040c380
    INC DL                              ; 0040c382
    AND EDX,0xff                        ; 0040c384
    TEST byte ptr [EDX + 0x626114],0x2  ; 0040c38a | DAT_00626114
    JNZ 0x0040c3c5                      ; 0040c391
        ;   XREF to: 0040c3c5 (CONDITIONAL_JUMP)  ; LAB_0040c3c5
    MOV EDI,dword ptr [EBX]             ; 0040c393
    MOV CH,byte ptr [EDI]               ; 0040c395
    CMP CH,0x28                         ; 0040c397
    JZ 0x0040c3ca                       ; 0040c39a
        ;   XREF to: 0040c3ca (CONDITIONAL_JUMP)  ; LAB_0040c3ca
    CMP CH,0x21                         ; 0040c39c
    JNZ 0x0040c414                      ; 0040c39f
        ;   XREF to: 0040c414 (CONDITIONAL_JUMP)  ; LAB_0040c414
    PUSH EBX                            ; 0040c3a5
    INC EDI                             ; 0040c3a6
    PUSH EBP                            ; 0040c3a7
    MOV dword ptr [EBX],EDI             ; 0040c3a8
    CALL core_actor.cpp_matchClassTerm_FUN_0040c370 ; 0040c3aa
        ;   XREF to: 0040c370 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_matchClassTerm_FUN_0040c370()
    ADD ESP,0x8                         ; 0040c3af
    MOV EDI,EAX                         ; 0040c3b2
    TEST EAX,EAX                        ; 0040c3b4
    JL 0x0040c3be                       ; 0040c3b6
        ;   XREF to: 0040c3be (CONDITIONAL_JUMP)  ; LAB_0040c3be
    SETZ AL                             ; 0040c3b8
    MOVZX EDI,AL                        ; 0040c3bb
    MOV EAX,EDI                         ; 0040c3be
        ;   Label: LAB_0040c3be
    POP EBP                             ; 0040c3c0
    POP EDI                             ; 0040c3c1
    POP ESI                             ; 0040c3c2
    POP EBX                             ; 0040c3c3
    RET                                 ; 0040c3c4
    INC EAX                             ; 0040c3c5
        ;   Label: LAB_0040c3c5
    MOV dword ptr [ESI],EAX             ; 0040c3c6
    JMP 0x0040c37e                      ; 0040c3c8
        ;   XREF to: 0040c37e (UNCONDITIONAL_JUMP)  ; LAB_0040c37e
    PUSH EBX                            ; 0040c3ca
        ;   Label: LAB_0040c3ca
    INC EDI                             ; 0040c3cb
    PUSH EBP                            ; 0040c3cc
    MOV dword ptr [EBX],EDI             ; 0040c3cd
    CALL core_actor.cpp_matchClassExpression_FUN_0040c490 ; 0040c3cf
        ;   XREF to: 0040c490 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_matchClassExpression_FUN_0040c490()
    ADD ESP,0x8                         ; 0040c3d4
    MOV EDI,EAX                         ; 0040c3d7
    TEST EAX,EAX                        ; 0040c3d9
    JL 0x0040c3f9                       ; 0040c3db
        ;   XREF to: 0040c3f9 (CONDITIONAL_JUMP)  ; LAB_0040c3f9
    MOV ESI,EBX                         ; 0040c3dd
    MOV EAX,dword ptr [ESI]             ; 0040c3df
        ;   Label: LAB_0040c3df
    MOV DL,byte ptr [EAX]               ; 0040c3e1
    INC DL                              ; 0040c3e3
    AND EDX,0xff                        ; 0040c3e5
    TEST byte ptr [EDX + 0x626114],0x2  ; 0040c3eb | DAT_00626114
    JZ 0x0040c403                       ; 0040c3f2
        ;   XREF to: 0040c403 (CONDITIONAL_JUMP)  ; LAB_0040c403
    INC EAX                             ; 0040c3f4
    MOV dword ptr [ESI],EAX             ; 0040c3f5
    JMP 0x0040c3df                      ; 0040c3f7
        ;   XREF to: 0040c3df (UNCONDITIONAL_JUMP)  ; LAB_0040c3df
    MOV EAX,0xffffffff                  ; 0040c3f9
        ;   Label: LAB_0040c3f9
    POP EBP                             ; 0040c3fe
    POP EDI                             ; 0040c3ff
    POP ESI                             ; 0040c400
    POP EBX                             ; 0040c401
    RET                                 ; 0040c402
    MOV EAX,dword ptr [EBX]             ; 0040c403
        ;   Label: LAB_0040c403
    CMP byte ptr [EAX],0x29             ; 0040c405
    JNZ 0x0040c3f9                      ; 0040c408
        ;   XREF to: 0040c3f9 (CONDITIONAL_JUMP)  ; LAB_0040c3f9
    INC EAX                             ; 0040c40a
    MOV dword ptr [EBX],EAX             ; 0040c40b
    MOV EAX,EDI                         ; 0040c40d
    POP EBP                             ; 0040c40f
    POP EDI                             ; 0040c410
    POP ESI                             ; 0040c411
    POP EBX                             ; 0040c412
    RET                                 ; 0040c413
    MOV AL,CH                           ; 0040c414
        ;   Label: LAB_0040c414
    INC AL                              ; 0040c416
    AND EAX,0xff                        ; 0040c418
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0040c41d | DAT_00626114
    JZ 0x0040c47a                       ; 0040c424
        ;   XREF to: 0040c47a (CONDITIONAL_JUMP)  ; LAB_0040c47a
    XOR ESI,ESI                         ; 0040c426
    MOV EAX,dword ptr [EBX]             ; 0040c428
        ;   Label: LAB_0040c428
    MOV AL,byte ptr [EAX]               ; 0040c42a
    AND EAX,0xff                        ; 0040c42c
    PUSH EAX                            ; 0040c431
    CALL crt_ctype.c_tolower_FUN_005c0820 ; 0040c432
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005c0820(int character)
    MOV EDX,ESI                         ; 0040c437
    SHL EDX,0x7                         ; 0040c439
    SHR ESI,0x19                        ; 0040c43c
    ADD ESI,EDX                         ; 0040c43f
    MOV EDX,EAX                         ; 0040c441
    SHL EDX,0x11                        ; 0040c443
    ADD EDX,ESI                         ; 0040c446
    ADD EAX,EDX                         ; 0040c448
    MOV EDX,dword ptr [EBX]             ; 0040c44a
    INC EDX                             ; 0040c44c
    MOV dword ptr [EBX],EDX             ; 0040c44d
    ADD ESP,0x4                         ; 0040c44f
    MOV DL,byte ptr [EDX]               ; 0040c452
    MOV ESI,EAX                         ; 0040c454
    INC DL                              ; 0040c456
    AND EDX,0xff                        ; 0040c458
    TEST byte ptr [EDX + 0x626114],0xe0 ; 0040c45e | DAT_00626114
    JNZ 0x0040c428                      ; 0040c465
        ;   XREF to: 0040c428 (CONDITIONAL_JUMP)  ; LAB_0040c428
    PUSH EAX                            ; 0040c467
    PUSH EBP                            ; 0040c468
    CALL core_actor.cpp_FUN_0040c580    ; 0040c469
        ;   XREF to: 0040c580 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c580(CDemonActorType * type_ptr, uint name_hash)
    ADD ESP,0x8                         ; 0040c46e
    MOV EDI,EAX                         ; 0040c471
    MOV EAX,EDI                         ; 0040c473
    POP EBP                             ; 0040c475
    POP EDI                             ; 0040c476
    POP ESI                             ; 0040c477
    POP EBX                             ; 0040c478
    RET                                 ; 0040c479
    MOV EDI,0xffffffff                  ; 0040c47a
        ;   Label: LAB_0040c47a
    MOV EAX,EDI                         ; 0040c47f
    POP EBP                             ; 0040c481
    POP EDI                             ; 0040c482
    POP ESI                             ; 0040c483
    POP EBX                             ; 0040c484
    RET                                 ; 0040c485

