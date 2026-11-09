; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_matchClassTerm_FUN_0040c5b0(CDemonActorType *param_1,int *param_2)
;
;
; XREF[1]:
;   core_actor.cpp_matchClassExpression_FUN_0040c6d0 at 0040c713
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; Called Functions:
;   core_actor.cpp_FUN_0040c7c0
;   core_actor.cpp_matchClassExpression_FUN_0040c6d0
;   crt_ctype.c_tolower_FUN_005a35a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c5b0
        ;   Label: core_actor.cpp_matchClassTerm_FUN_0040c5b0
    PUSH ESI                            ; 0040c5b1
    PUSH EDI                            ; 0040c5b2
    PUSH EBP                            ; 0040c5b3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c5b4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040c5b8
    MOV ESI,EBX                         ; 0040c5bc
    MOV EAX,dword ptr [ESI]             ; 0040c5be
        ;   Label: LAB_0040c5be
    MOV DL,byte ptr [EAX]               ; 0040c5c0
    INC DL                              ; 0040c5c2
    AND EDX,0xff                        ; 0040c5c4
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 0040c5ca | DAT_006074b8
    JNZ 0x0040c605                      ; 0040c5d1
        ;   XREF to: 0040c605 (CONDITIONAL_JUMP)  ; LAB_0040c605
    MOV EDI,dword ptr [EBX]             ; 0040c5d3
    MOV CH,byte ptr [EDI]               ; 0040c5d5
    CMP CH,0x28                         ; 0040c5d7
    JZ 0x0040c60a                       ; 0040c5da
        ;   XREF to: 0040c60a (CONDITIONAL_JUMP)  ; LAB_0040c60a
    CMP CH,0x21                         ; 0040c5dc
    JNZ 0x0040c654                      ; 0040c5df
        ;   XREF to: 0040c654 (CONDITIONAL_JUMP)  ; LAB_0040c654
    PUSH EBX                            ; 0040c5e5
    INC EDI                             ; 0040c5e6
    PUSH EBP                            ; 0040c5e7
    MOV dword ptr [EBX],EDI             ; 0040c5e8
    CALL core_actor.cpp_matchClassTerm_FUN_0040c5b0 ; 0040c5ea
        ;   XREF to: 0040c5b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_matchClassTerm_FUN_0040c5b0()
    ADD ESP,0x8                         ; 0040c5ef
    MOV EDI,EAX                         ; 0040c5f2
    TEST EAX,EAX                        ; 0040c5f4
    JL 0x0040c5fe                       ; 0040c5f6
        ;   XREF to: 0040c5fe (CONDITIONAL_JUMP)  ; LAB_0040c5fe
    SETZ AL                             ; 0040c5f8
    MOVZX EDI,AL                        ; 0040c5fb
    MOV EAX,EDI                         ; 0040c5fe
        ;   Label: LAB_0040c5fe
    POP EBP                             ; 0040c600
    POP EDI                             ; 0040c601
    POP ESI                             ; 0040c602
    POP EBX                             ; 0040c603
    RET                                 ; 0040c604
    INC EAX                             ; 0040c605
        ;   Label: LAB_0040c605
    MOV dword ptr [ESI],EAX             ; 0040c606
    JMP 0x0040c5be                      ; 0040c608
        ;   XREF to: 0040c5be (UNCONDITIONAL_JUMP)  ; LAB_0040c5be
    PUSH EBX                            ; 0040c60a
        ;   Label: LAB_0040c60a
    INC EDI                             ; 0040c60b
    PUSH EBP                            ; 0040c60c
    MOV dword ptr [EBX],EDI             ; 0040c60d
    CALL core_actor.cpp_matchClassExpression_FUN_0040c6d0 ; 0040c60f
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_matchClassExpression_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0040c614
    MOV EDI,EAX                         ; 0040c617
    TEST EAX,EAX                        ; 0040c619
    JL 0x0040c639                       ; 0040c61b
        ;   XREF to: 0040c639 (CONDITIONAL_JUMP)  ; LAB_0040c639
    MOV ESI,EBX                         ; 0040c61d
    MOV EAX,dword ptr [ESI]             ; 0040c61f
        ;   Label: LAB_0040c61f
    MOV DL,byte ptr [EAX]               ; 0040c621
    INC DL                              ; 0040c623
    AND EDX,0xff                        ; 0040c625
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 0040c62b | DAT_006074b8
    JZ 0x0040c643                       ; 0040c632
        ;   XREF to: 0040c643 (CONDITIONAL_JUMP)  ; LAB_0040c643
    INC EAX                             ; 0040c634
    MOV dword ptr [ESI],EAX             ; 0040c635
    JMP 0x0040c61f                      ; 0040c637
        ;   XREF to: 0040c61f (UNCONDITIONAL_JUMP)  ; LAB_0040c61f
    MOV EAX,0xffffffff                  ; 0040c639
        ;   Label: LAB_0040c639
    POP EBP                             ; 0040c63e
    POP EDI                             ; 0040c63f
    POP ESI                             ; 0040c640
    POP EBX                             ; 0040c641
    RET                                 ; 0040c642
    MOV EAX,dword ptr [EBX]             ; 0040c643
        ;   Label: LAB_0040c643
    CMP byte ptr [EAX],0x29             ; 0040c645
    JNZ 0x0040c639                      ; 0040c648
        ;   XREF to: 0040c639 (CONDITIONAL_JUMP)  ; LAB_0040c639
    INC EAX                             ; 0040c64a
    MOV dword ptr [EBX],EAX             ; 0040c64b
    MOV EAX,EDI                         ; 0040c64d
    POP EBP                             ; 0040c64f
    POP EDI                             ; 0040c650
    POP ESI                             ; 0040c651
    POP EBX                             ; 0040c652
    RET                                 ; 0040c653
    MOV AL,CH                           ; 0040c654
        ;   Label: LAB_0040c654
    INC AL                              ; 0040c656
    AND EAX,0xff                        ; 0040c658
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0040c65d | DAT_006074b8
    JZ 0x0040c6ba                       ; 0040c664
        ;   XREF to: 0040c6ba (CONDITIONAL_JUMP)  ; LAB_0040c6ba
    XOR ESI,ESI                         ; 0040c666
    MOV EAX,dword ptr [EBX]             ; 0040c668
        ;   Label: LAB_0040c668
    MOV AL,byte ptr [EAX]               ; 0040c66a
    AND EAX,0xff                        ; 0040c66c
    PUSH EAX                            ; 0040c671
    CALL crt_ctype.c_tolower_FUN_005a35a0 ; 0040c672
        ;   XREF to: 005a35a0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005a35a0(int character)
    MOV EDX,ESI                         ; 0040c677
    SHL EDX,0x7                         ; 0040c679
    SHR ESI,0x19                        ; 0040c67c
    ADD ESI,EDX                         ; 0040c67f
    MOV EDX,EAX                         ; 0040c681
    SHL EDX,0x11                        ; 0040c683
    ADD EDX,ESI                         ; 0040c686
    ADD EAX,EDX                         ; 0040c688
    MOV EDX,dword ptr [EBX]             ; 0040c68a
    INC EDX                             ; 0040c68c
    MOV dword ptr [EBX],EDX             ; 0040c68d
    ADD ESP,0x4                         ; 0040c68f
    MOV DL,byte ptr [EDX]               ; 0040c692
    MOV ESI,EAX                         ; 0040c694
    INC DL                              ; 0040c696
    AND EDX,0xff                        ; 0040c698
    TEST byte ptr [EDX + 0x6074b8],0xe0 ; 0040c69e | DAT_006074b8
    JNZ 0x0040c668                      ; 0040c6a5
        ;   XREF to: 0040c668 (CONDITIONAL_JUMP)  ; LAB_0040c668
    PUSH EAX                            ; 0040c6a7
    PUSH EBP                            ; 0040c6a8
    CALL core_actor.cpp_FUN_0040c7c0    ; 0040c6a9
        ;   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c7c0(CDemonActorType * type_ptr, uint name_hash)
    ADD ESP,0x8                         ; 0040c6ae
    MOV EDI,EAX                         ; 0040c6b1
    MOV EAX,EDI                         ; 0040c6b3
    POP EBP                             ; 0040c6b5
    POP EDI                             ; 0040c6b6
    POP ESI                             ; 0040c6b7
    POP EBX                             ; 0040c6b8
    RET                                 ; 0040c6b9
    MOV EDI,0xffffffff                  ; 0040c6ba
        ;   Label: LAB_0040c6ba
    MOV EAX,EDI                         ; 0040c6bf
    POP EBP                             ; 0040c6c1
    POP EDI                             ; 0040c6c2
    POP ESI                             ; 0040c6c3
    POP EBX                             ; 0040c6c4
    RET                                 ; 0040c6c5

