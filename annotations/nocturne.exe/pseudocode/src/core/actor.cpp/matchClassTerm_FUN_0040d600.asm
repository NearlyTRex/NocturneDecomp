; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_matchClassTerm_FUN_0040d600(CDemonActorType *type_ptr,char **parse_pos)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; char * *         Stack[0x8]:4   parse_pos
;
; XREF[1]:
;   core_actor.cpp_matchClassExpression_FUN_0040d720 at 0040d763
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; Called Functions:
;   core_actor.cpp_checkNameHash_FUN_0040d810
;   core_actor.cpp_matchClassExpression_FUN_0040d720
;   crt_ctype.c_tolower_FUN_00564860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d600
        ;   Label: core_actor.cpp_matchClassTerm_FUN_0040d600
    PUSH ESI                            ; 0040d601
    PUSH EDI                            ; 0040d602
    PUSH EBP                            ; 0040d603
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040d604
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040d608
    MOV ESI,EBX                         ; 0040d60c
    MOV EAX,dword ptr [ESI]             ; 0040d60e
        ;   Label: LAB_0040d60e
    MOV DL,byte ptr [EAX]               ; 0040d610
    INC DL                              ; 0040d612
    AND EDX,0xff                        ; 0040d614
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0040d61a | DAT_005c168c
    JNZ 0x0040d655                      ; 0040d621
        ;   XREF to: 0040d655 (CONDITIONAL_JUMP)  ; LAB_0040d655
    MOV EDI,dword ptr [EBX]             ; 0040d623
    MOV CH,byte ptr [EDI]               ; 0040d625
    CMP CH,0x28                         ; 0040d627
    JZ 0x0040d65a                       ; 0040d62a
        ;   XREF to: 0040d65a (CONDITIONAL_JUMP)  ; LAB_0040d65a
    CMP CH,0x21                         ; 0040d62c
    JNZ 0x0040d6a4                      ; 0040d62f
        ;   XREF to: 0040d6a4 (CONDITIONAL_JUMP)  ; LAB_0040d6a4
    PUSH EBX                            ; 0040d635
    INC EDI                             ; 0040d636
    PUSH EBP                            ; 0040d637
    MOV dword ptr [EBX],EDI             ; 0040d638
    CALL core_actor.cpp_matchClassTerm_FUN_0040d600 ; 0040d63a
        ;   XREF to: 0040d600 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040d600(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040d63f
    MOV EDI,EAX                         ; 0040d642
    TEST EAX,EAX                        ; 0040d644
    JL 0x0040d64e                       ; 0040d646
        ;   XREF to: 0040d64e (CONDITIONAL_JUMP)  ; LAB_0040d64e
    SETZ AL                             ; 0040d648
    MOVZX EDI,AL                        ; 0040d64b
    MOV EAX,EDI                         ; 0040d64e
        ;   Label: LAB_0040d64e
    POP EBP                             ; 0040d650
    POP EDI                             ; 0040d651
    POP ESI                             ; 0040d652
    POP EBX                             ; 0040d653
    RET                                 ; 0040d654
    INC EAX                             ; 0040d655
        ;   Label: LAB_0040d655
    MOV dword ptr [ESI],EAX             ; 0040d656
    JMP 0x0040d60e                      ; 0040d658
        ;   XREF to: 0040d60e (UNCONDITIONAL_JUMP)  ; LAB_0040d60e
    PUSH EBX                            ; 0040d65a
        ;   Label: LAB_0040d65a
    INC EDI                             ; 0040d65b
    PUSH EBP                            ; 0040d65c
    MOV dword ptr [EBX],EDI             ; 0040d65d
    CALL core_actor.cpp_matchClassExpression_FUN_0040d720 ; 0040d65f
        ;   XREF to: 0040d720 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassExpression_FUN_0040d720(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040d664
    MOV EDI,EAX                         ; 0040d667
    TEST EAX,EAX                        ; 0040d669
    JL 0x0040d689                       ; 0040d66b
        ;   XREF to: 0040d689 (CONDITIONAL_JUMP)  ; LAB_0040d689
    MOV ESI,EBX                         ; 0040d66d
    MOV EAX,dword ptr [ESI]             ; 0040d66f
        ;   Label: LAB_0040d66f
    MOV DL,byte ptr [EAX]               ; 0040d671
    INC DL                              ; 0040d673
    AND EDX,0xff                        ; 0040d675
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0040d67b | DAT_005c168c
    JZ 0x0040d693                       ; 0040d682
        ;   XREF to: 0040d693 (CONDITIONAL_JUMP)  ; LAB_0040d693
    INC EAX                             ; 0040d684
    MOV dword ptr [ESI],EAX             ; 0040d685
    JMP 0x0040d66f                      ; 0040d687
        ;   XREF to: 0040d66f (UNCONDITIONAL_JUMP)  ; LAB_0040d66f
    MOV EAX,0xffffffff                  ; 0040d689
        ;   Label: LAB_0040d689
    POP EBP                             ; 0040d68e
    POP EDI                             ; 0040d68f
    POP ESI                             ; 0040d690
    POP EBX                             ; 0040d691
    RET                                 ; 0040d692
    MOV EAX,dword ptr [EBX]             ; 0040d693
        ;   Label: LAB_0040d693
    CMP byte ptr [EAX],0x29             ; 0040d695
    JNZ 0x0040d689                      ; 0040d698
        ;   XREF to: 0040d689 (CONDITIONAL_JUMP)  ; LAB_0040d689
    INC EAX                             ; 0040d69a
    MOV dword ptr [EBX],EAX             ; 0040d69b
    MOV EAX,EDI                         ; 0040d69d
    POP EBP                             ; 0040d69f
    POP EDI                             ; 0040d6a0
    POP ESI                             ; 0040d6a1
    POP EBX                             ; 0040d6a2
    RET                                 ; 0040d6a3
    MOV AL,CH                           ; 0040d6a4
        ;   Label: LAB_0040d6a4
    INC AL                              ; 0040d6a6
    AND EAX,0xff                        ; 0040d6a8
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 0040d6ad | DAT_005c168c
    JZ 0x0040d70a                       ; 0040d6b4
        ;   XREF to: 0040d70a (CONDITIONAL_JUMP)  ; LAB_0040d70a
    XOR ESI,ESI                         ; 0040d6b6
    MOV EAX,dword ptr [EBX]             ; 0040d6b8
        ;   Label: LAB_0040d6b8
    MOV AL,byte ptr [EAX]               ; 0040d6ba
    AND EAX,0xff                        ; 0040d6bc
    PUSH EAX                            ; 0040d6c1
    CALL crt_ctype.c_tolower_FUN_00564860 ; 0040d6c2
        ;   XREF to: 00564860 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_00564860(int character)
    MOV EDX,ESI                         ; 0040d6c7
    SHL EDX,0x7                         ; 0040d6c9
    SHR ESI,0x19                        ; 0040d6cc
    ADD ESI,EDX                         ; 0040d6cf
    MOV EDX,EAX                         ; 0040d6d1
    SHL EDX,0x11                        ; 0040d6d3
    ADD EDX,ESI                         ; 0040d6d6
    ADD EAX,EDX                         ; 0040d6d8
    MOV EDX,dword ptr [EBX]             ; 0040d6da
    INC EDX                             ; 0040d6dc
    MOV dword ptr [EBX],EDX             ; 0040d6dd
    ADD ESP,0x4                         ; 0040d6df
    MOV DL,byte ptr [EDX]               ; 0040d6e2
    MOV ESI,EAX                         ; 0040d6e4
    INC DL                              ; 0040d6e6
    AND EDX,0xff                        ; 0040d6e8
    TEST byte ptr [EDX + 0x5c168c],0xe0 ; 0040d6ee | DAT_005c168c
    JNZ 0x0040d6b8                      ; 0040d6f5
        ;   XREF to: 0040d6b8 (CONDITIONAL_JUMP)  ; LAB_0040d6b8
    PUSH EAX                            ; 0040d6f7
    PUSH EBP                            ; 0040d6f8
    CALL core_actor.cpp_checkNameHash_FUN_0040d810 ; 0040d6f9
        ;   XREF to: 0040d810 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_checkNameHash_FUN_0040d810(CDemonActorType * type_ptr, uint name_hash)
    ADD ESP,0x8                         ; 0040d6fe
    MOV EDI,EAX                         ; 0040d701
    MOV EAX,EDI                         ; 0040d703
    POP EBP                             ; 0040d705
    POP EDI                             ; 0040d706
    POP ESI                             ; 0040d707
    POP EBX                             ; 0040d708
    RET                                 ; 0040d709
    MOV EDI,0xffffffff                  ; 0040d70a
        ;   Label: LAB_0040d70a
    MOV EAX,EDI                         ; 0040d70f
    POP EBP                             ; 0040d711
    POP EDI                             ; 0040d712
    POP ESI                             ; 0040d713
    POP EBX                             ; 0040d714
    RET                                 ; 0040d715

