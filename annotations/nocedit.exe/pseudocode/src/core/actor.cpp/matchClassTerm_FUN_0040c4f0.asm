; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_actor_cpp_matchClassTerm_FUN_0040c4f0(CDemonActorType *type_ptr,char **parse_pos)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; char * *         Stack[0x8]:4   parse_pos
;
; XREF[1]:
;   core_actor.cpp_matchClassExpression_FUN_0040c610 at 0040c6a6
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   core_actor.cpp_checkNameHash_FUN_0040c700
;   core_actor.cpp_matchClassExpression_FUN_0040c610
;   crt_ctype.c_tolower_FUN_005feb30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c4f0
        ;   Label: core_actor.cpp_matchClassTerm_FUN_0040c4f0
    PUSH ESI                            ; 0040c4f1
    PUSH EDI                            ; 0040c4f2
    PUSH EBP                            ; 0040c4f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c4f4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040c4f8
    MOV ESI,EBX                         ; 0040c4fc
    MOV EAX,dword ptr [ESI]             ; 0040c4fe
        ;   Label: LAB_0040c4fe
    MOV DL,byte ptr [EAX]               ; 0040c500
    INC DL                              ; 0040c502
    AND EDX,0xff                        ; 0040c504
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 0040c50a | g_CharacterClassificationTable
    JNZ 0x0040c545                      ; 0040c511
        ;   XREF to: 0040c545 (CONDITIONAL_JUMP)  ; LAB_0040c545
    MOV EDI,dword ptr [EBX]             ; 0040c513
    MOV CH,byte ptr [EDI]               ; 0040c515
    CMP CH,0x28                         ; 0040c517
    JZ 0x0040c54a                       ; 0040c51a
        ;   XREF to: 0040c54a (CONDITIONAL_JUMP)  ; LAB_0040c54a
    CMP CH,0x21                         ; 0040c51c
    JNZ 0x0040c594                      ; 0040c51f
        ;   XREF to: 0040c594 (CONDITIONAL_JUMP)  ; LAB_0040c594
    PUSH EBX                            ; 0040c525
    INC EDI                             ; 0040c526
    PUSH EBP                            ; 0040c527
    MOV dword ptr [EBX],EDI             ; 0040c528
    CALL core_actor.cpp_matchClassTerm_FUN_0040c4f0 ; 0040c52a
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040c4f0(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c52f
    MOV EDI,EAX                         ; 0040c532
    TEST EAX,EAX                        ; 0040c534
    JL 0x0040c53e                       ; 0040c536
        ;   XREF to: 0040c53e (CONDITIONAL_JUMP)  ; LAB_0040c53e
    SETZ AL                             ; 0040c538
    MOVZX EDI,AL                        ; 0040c53b
    MOV EAX,EDI                         ; 0040c53e
        ;   Label: LAB_0040c53e
    POP EBP                             ; 0040c540
    POP EDI                             ; 0040c541
    POP ESI                             ; 0040c542
    POP EBX                             ; 0040c543
    RET                                 ; 0040c544
    INC EAX                             ; 0040c545
        ;   Label: LAB_0040c545
    MOV dword ptr [ESI],EAX             ; 0040c546
    JMP 0x0040c4fe                      ; 0040c548
        ;   XREF to: 0040c4fe (UNCONDITIONAL_JUMP)  ; LAB_0040c4fe
    PUSH EBX                            ; 0040c54a
        ;   Label: LAB_0040c54a
    INC EDI                             ; 0040c54b
    PUSH EBP                            ; 0040c54c
    MOV dword ptr [EBX],EDI             ; 0040c54d
    CALL core_actor.cpp_matchClassExpression_FUN_0040c610 ; 0040c54f
        ;   XREF to: 0040c610 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassExpression_FUN_0040c610(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c554
    MOV EDI,EAX                         ; 0040c557
    TEST EAX,EAX                        ; 0040c559
    JL 0x0040c579                       ; 0040c55b
        ;   XREF to: 0040c579 (CONDITIONAL_JUMP)  ; LAB_0040c579
    MOV ESI,EBX                         ; 0040c55d
    MOV EAX,dword ptr [ESI]             ; 0040c55f
        ;   Label: LAB_0040c55f
    MOV DL,byte ptr [EAX]               ; 0040c561
    INC DL                              ; 0040c563
    AND EDX,0xff                        ; 0040c565
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 0040c56b | g_CharacterClassificationTable
    JZ 0x0040c583                       ; 0040c572
        ;   XREF to: 0040c583 (CONDITIONAL_JUMP)  ; LAB_0040c583
    INC EAX                             ; 0040c574
    MOV dword ptr [ESI],EAX             ; 0040c575
    JMP 0x0040c55f                      ; 0040c577
        ;   XREF to: 0040c55f (UNCONDITIONAL_JUMP)  ; LAB_0040c55f
    MOV EAX,0xffffffff                  ; 0040c579
        ;   Label: LAB_0040c579
    POP EBP                             ; 0040c57e
    POP EDI                             ; 0040c57f
    POP ESI                             ; 0040c580
    POP EBX                             ; 0040c581
    RET                                 ; 0040c582
    MOV EAX,dword ptr [EBX]             ; 0040c583
        ;   Label: LAB_0040c583
    CMP byte ptr [EAX],0x29             ; 0040c585
    JNZ 0x0040c579                      ; 0040c588
        ;   XREF to: 0040c579 (CONDITIONAL_JUMP)  ; LAB_0040c579
    INC EAX                             ; 0040c58a
    MOV dword ptr [EBX],EAX             ; 0040c58b
    MOV EAX,EDI                         ; 0040c58d
    POP EBP                             ; 0040c58f
    POP EDI                             ; 0040c590
    POP ESI                             ; 0040c591
    POP EBX                             ; 0040c592
    RET                                 ; 0040c593
    MOV AL,CH                           ; 0040c594
        ;   Label: LAB_0040c594
    INC AL                              ; 0040c596
    AND EAX,0xff                        ; 0040c598
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 0040c59d | g_CharacterClassificationTable
    JZ 0x0040c5fa                       ; 0040c5a4
        ;   XREF to: 0040c5fa (CONDITIONAL_JUMP)  ; LAB_0040c5fa
    XOR ESI,ESI                         ; 0040c5a6
    MOV EAX,dword ptr [EBX]             ; 0040c5a8
        ;   Label: LAB_0040c5a8
    MOV AL,byte ptr [EAX]               ; 0040c5aa
    AND EAX,0xff                        ; 0040c5ac
    PUSH EAX                            ; 0040c5b1
    CALL crt_ctype.c_tolower_FUN_005feb30 ; 0040c5b2
        ;   XREF to: 005feb30 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005feb30(int character)
    MOV EDX,ESI                         ; 0040c5b7
    SHL EDX,0x7                         ; 0040c5b9
    SHR ESI,0x19                        ; 0040c5bc
    ADD ESI,EDX                         ; 0040c5bf
    MOV EDX,EAX                         ; 0040c5c1
    SHL EDX,0x11                        ; 0040c5c3
    ADD EDX,ESI                         ; 0040c5c6
    ADD EAX,EDX                         ; 0040c5c8
    MOV EDX,dword ptr [EBX]             ; 0040c5ca
    INC EDX                             ; 0040c5cc
    MOV dword ptr [EBX],EDX             ; 0040c5cd
    ADD ESP,0x4                         ; 0040c5cf
    MOV DL,byte ptr [EDX]               ; 0040c5d2
    MOV ESI,EAX                         ; 0040c5d4
    INC DL                              ; 0040c5d6
    AND EDX,0xff                        ; 0040c5d8
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 0040c5de | g_CharacterClassificationTable
    JNZ 0x0040c5a8                      ; 0040c5e5
        ;   XREF to: 0040c5a8 (CONDITIONAL_JUMP)  ; LAB_0040c5a8
    PUSH EAX                            ; 0040c5e7
    PUSH EBP                            ; 0040c5e8
    CALL core_actor.cpp_checkNameHash_FUN_0040c700 ; 0040c5e9
        ;   XREF to: 0040c700 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_checkNameHash_FUN_0040c700(CDemonActorType * type_ptr, uint name_hash)
    ADD ESP,0x8                         ; 0040c5ee
    MOV EDI,EAX                         ; 0040c5f1
    MOV EAX,EDI                         ; 0040c5f3
    POP EBP                             ; 0040c5f5
    POP EDI                             ; 0040c5f6
    POP ESI                             ; 0040c5f7
    POP EBX                             ; 0040c5f8
    RET                                 ; 0040c5f9
    MOV EDI,0xffffffff                  ; 0040c5fa
        ;   Label: LAB_0040c5fa
    MOV EAX,EDI                         ; 0040c5ff
    POP EBP                             ; 0040c601
    POP EDI                             ; 0040c602
    POP ESI                             ; 0040c603
    POP EBX                             ; 0040c604
    RET                                 ; 0040c605

