; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_matchClassTerm_FUN_0040c660(CDemonActorType *param_1,int *param_2)
;
;
; XREF[1]:
;   core_actor.cpp_matchClassExpression_FUN_0040c780 at 0040c7c3
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   core_actor.cpp_FUN_0040c870
;   core_actor.cpp_matchClassExpression_FUN_0040c780
;   crt_ctype.c_tolower_FUN_005b8470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c660
        ;   Label: core_actor.cpp_matchClassTerm_FUN_0040c660
    PUSH ESI                            ; 0040c661
    PUSH EDI                            ; 0040c662
    PUSH EBP                            ; 0040c663
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c664
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040c668
    MOV ESI,EBX                         ; 0040c66c
    MOV EAX,dword ptr [ESI]             ; 0040c66e
        ;   Label: LAB_0040c66e
    MOV DL,byte ptr [EAX]               ; 0040c670
    INC DL                              ; 0040c672
    AND EDX,0xff                        ; 0040c674
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0040c67a | DAT_0061ed94
    JNZ 0x0040c6b5                      ; 0040c681
        ;   XREF to: 0040c6b5 (CONDITIONAL_JUMP)  ; LAB_0040c6b5
    MOV EDI,dword ptr [EBX]             ; 0040c683
    MOV CH,byte ptr [EDI]               ; 0040c685
    CMP CH,0x28                         ; 0040c687
    JZ 0x0040c6ba                       ; 0040c68a
        ;   XREF to: 0040c6ba (CONDITIONAL_JUMP)  ; LAB_0040c6ba
    CMP CH,0x21                         ; 0040c68c
    JNZ 0x0040c704                      ; 0040c68f
        ;   XREF to: 0040c704 (CONDITIONAL_JUMP)  ; LAB_0040c704
    PUSH EBX                            ; 0040c695
    INC EDI                             ; 0040c696
    PUSH EBP                            ; 0040c697
    MOV dword ptr [EBX],EDI             ; 0040c698
    CALL core_actor.cpp_matchClassTerm_FUN_0040c660 ; 0040c69a
        ;   XREF to: 0040c660 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_matchClassTerm_FUN_0040c660()
    ADD ESP,0x8                         ; 0040c69f
    MOV EDI,EAX                         ; 0040c6a2
    TEST EAX,EAX                        ; 0040c6a4
    JL 0x0040c6ae                       ; 0040c6a6
        ;   XREF to: 0040c6ae (CONDITIONAL_JUMP)  ; LAB_0040c6ae
    SETZ AL                             ; 0040c6a8
    MOVZX EDI,AL                        ; 0040c6ab
    MOV EAX,EDI                         ; 0040c6ae
        ;   Label: LAB_0040c6ae
    POP EBP                             ; 0040c6b0
    POP EDI                             ; 0040c6b1
    POP ESI                             ; 0040c6b2
    POP EBX                             ; 0040c6b3
    RET                                 ; 0040c6b4
    INC EAX                             ; 0040c6b5
        ;   Label: LAB_0040c6b5
    MOV dword ptr [ESI],EAX             ; 0040c6b6
    JMP 0x0040c66e                      ; 0040c6b8
        ;   XREF to: 0040c66e (UNCONDITIONAL_JUMP)  ; LAB_0040c66e
    PUSH EBX                            ; 0040c6ba
        ;   Label: LAB_0040c6ba
    INC EDI                             ; 0040c6bb
    PUSH EBP                            ; 0040c6bc
    MOV dword ptr [EBX],EDI             ; 0040c6bd
    CALL core_actor.cpp_matchClassExpression_FUN_0040c780 ; 0040c6bf
        ;   XREF to: 0040c780 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_matchClassExpression_FUN_0040c780()
    ADD ESP,0x8                         ; 0040c6c4
    MOV EDI,EAX                         ; 0040c6c7
    TEST EAX,EAX                        ; 0040c6c9
    JL 0x0040c6e9                       ; 0040c6cb
        ;   XREF to: 0040c6e9 (CONDITIONAL_JUMP)  ; LAB_0040c6e9
    MOV ESI,EBX                         ; 0040c6cd
    MOV EAX,dword ptr [ESI]             ; 0040c6cf
        ;   Label: LAB_0040c6cf
    MOV DL,byte ptr [EAX]               ; 0040c6d1
    INC DL                              ; 0040c6d3
    AND EDX,0xff                        ; 0040c6d5
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0040c6db | DAT_0061ed94
    JZ 0x0040c6f3                       ; 0040c6e2
        ;   XREF to: 0040c6f3 (CONDITIONAL_JUMP)  ; LAB_0040c6f3
    INC EAX                             ; 0040c6e4
    MOV dword ptr [ESI],EAX             ; 0040c6e5
    JMP 0x0040c6cf                      ; 0040c6e7
        ;   XREF to: 0040c6cf (UNCONDITIONAL_JUMP)  ; LAB_0040c6cf
    MOV EAX,0xffffffff                  ; 0040c6e9
        ;   Label: LAB_0040c6e9
    POP EBP                             ; 0040c6ee
    POP EDI                             ; 0040c6ef
    POP ESI                             ; 0040c6f0
    POP EBX                             ; 0040c6f1
    RET                                 ; 0040c6f2
    MOV EAX,dword ptr [EBX]             ; 0040c6f3
        ;   Label: LAB_0040c6f3
    CMP byte ptr [EAX],0x29             ; 0040c6f5
    JNZ 0x0040c6e9                      ; 0040c6f8
        ;   XREF to: 0040c6e9 (CONDITIONAL_JUMP)  ; LAB_0040c6e9
    INC EAX                             ; 0040c6fa
    MOV dword ptr [EBX],EAX             ; 0040c6fb
    MOV EAX,EDI                         ; 0040c6fd
    POP EBP                             ; 0040c6ff
    POP EDI                             ; 0040c700
    POP ESI                             ; 0040c701
    POP EBX                             ; 0040c702
    RET                                 ; 0040c703
    MOV AL,CH                           ; 0040c704
        ;   Label: LAB_0040c704
    INC AL                              ; 0040c706
    AND EAX,0xff                        ; 0040c708
    TEST byte ptr [EAX + 0x61ed94],0xe0 ; 0040c70d | DAT_0061ed94
    JZ 0x0040c76a                       ; 0040c714
        ;   XREF to: 0040c76a (CONDITIONAL_JUMP)  ; LAB_0040c76a
    XOR ESI,ESI                         ; 0040c716
    MOV EAX,dword ptr [EBX]             ; 0040c718
        ;   Label: LAB_0040c718
    MOV AL,byte ptr [EAX]               ; 0040c71a
    AND EAX,0xff                        ; 0040c71c
    PUSH EAX                            ; 0040c721
    CALL crt_ctype.c_tolower_FUN_005b8470 ; 0040c722
        ;   XREF to: 005b8470 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005b8470(int character)
    MOV EDX,ESI                         ; 0040c727
    SHL EDX,0x7                         ; 0040c729
    SHR ESI,0x19                        ; 0040c72c
    ADD ESI,EDX                         ; 0040c72f
    MOV EDX,EAX                         ; 0040c731
    SHL EDX,0x11                        ; 0040c733
    ADD EDX,ESI                         ; 0040c736
    ADD EAX,EDX                         ; 0040c738
    MOV EDX,dword ptr [EBX]             ; 0040c73a
    INC EDX                             ; 0040c73c
    MOV dword ptr [EBX],EDX             ; 0040c73d
    ADD ESP,0x4                         ; 0040c73f
    MOV DL,byte ptr [EDX]               ; 0040c742
    MOV ESI,EAX                         ; 0040c744
    INC DL                              ; 0040c746
    AND EDX,0xff                        ; 0040c748
    TEST byte ptr [EDX + 0x61ed94],0xe0 ; 0040c74e | DAT_0061ed94
    JNZ 0x0040c718                      ; 0040c755
        ;   XREF to: 0040c718 (CONDITIONAL_JUMP)  ; LAB_0040c718
    PUSH EAX                            ; 0040c757
    PUSH EBP                            ; 0040c758
    CALL core_actor.cpp_FUN_0040c870    ; 0040c759
        ;   XREF to: 0040c870 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c870(CDemonActorType * type_ptr, uint name_hash)
    ADD ESP,0x8                         ; 0040c75e
    MOV EDI,EAX                         ; 0040c761
    MOV EAX,EDI                         ; 0040c763
    POP EBP                             ; 0040c765
    POP EDI                             ; 0040c766
    POP ESI                             ; 0040c767
    POP EBX                             ; 0040c768
    RET                                 ; 0040c769
    MOV EDI,0xffffffff                  ; 0040c76a
        ;   Label: LAB_0040c76a
    MOV EAX,EDI                         ; 0040c76f
    POP EBP                             ; 0040c771
    POP EDI                             ; 0040c772
    POP ESI                             ; 0040c773
    POP EBX                             ; 0040c774
    RET                                 ; 0040c775

