; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_matchClassExpression_FUN_0040c6d0(CDemonActorType *type_ptr,char **parse_pos)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; char * *         Stack[0x8]:4   parse_pos
;
; XREF[2]:
;   core_actor.cpp_matchClassTerm_FUN_0040c5b0 at 0040c60f
;   core_actor.cpp_matchesClassName_FUN_0040c7f0 at 0040c7fa
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; Called Functions:
;   core_actor.cpp_matchClassTerm_FUN_0040c5b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c6d0
        ;   Label: core_actor.cpp_matchClassExpression_FUN_0040c6d0
    PUSH ESI                            ; 0040c6d1
    PUSH EDI                            ; 0040c6d2
    PUSH EBP                            ; 0040c6d3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c6d4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040c6d8
    XOR EDI,EDI                         ; 0040c6dc
    MOV BH,0x2                          ; 0040c6de
    MOV EDX,ESI                         ; 0040c6e0
        ;   Label: LAB_0040c6e0
    MOV EAX,dword ptr [EDX]             ; 0040c6e2
        ;   Label: LAB_0040c6e2
    MOV BL,byte ptr [EAX]               ; 0040c6e4
    XOR ECX,ECX                         ; 0040c6e6
    INC BL                              ; 0040c6e8
    MOV CL,BL                           ; 0040c6ea
    TEST byte ptr [ECX + 0x6074b8],BH   ; 0040c6ec | DAT_006074b8
    JNZ 0x0040c728                      ; 0040c6f2
        ;   XREF to: 0040c728 (CONDITIONAL_JUMP)  ; LAB_0040c728
    MOV EAX,dword ptr [ESI]             ; 0040c6f4
    MOV CL,byte ptr [EAX]               ; 0040c6f6
    TEST CL,CL                          ; 0040c6f8
    JZ 0x0040c72d                       ; 0040c6fa
        ;   XREF to: 0040c72d (CONDITIONAL_JUMP)  ; LAB_0040c72d
    CMP CL,0x29                         ; 0040c6fc
    JZ 0x0040c72d                       ; 0040c6ff
        ;   XREF to: 0040c72d (CONDITIONAL_JUMP)  ; LAB_0040c72d
    CMP CL,0x7c                         ; 0040c701
    JNZ 0x0040c73e                      ; 0040c704
        ;   XREF to: 0040c73e (CONDITIONAL_JUMP)  ; LAB_0040c73e
    INC EAX                             ; 0040c706
    MOV dword ptr [ESI],EAX             ; 0040c707
    CMP byte ptr [EAX],0x7c             ; 0040c709
    JNZ 0x0040c711                      ; 0040c70c
        ;   XREF to: 0040c711 (CONDITIONAL_JUMP)  ; LAB_0040c711
    INC EAX                             ; 0040c70e
    MOV dword ptr [ESI],EAX             ; 0040c70f
    PUSH ESI                            ; 0040c711
        ;   Label: LAB_0040c711
    PUSH EBP                            ; 0040c712
    CALL core_actor.cpp_matchClassTerm_FUN_0040c5b0 ; 0040c713
        ;   XREF to: 0040c5b0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040c5b0(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c718
    TEST EAX,EAX                        ; 0040c71b
    JL 0x0040c734                       ; 0040c71d
        ;   XREF to: 0040c734 (CONDITIONAL_JUMP)  ; LAB_0040c734
    JLE 0x0040c6e0                      ; 0040c71f
        ;   XREF to: 0040c6e0 (CONDITIONAL_JUMP)  ; LAB_0040c6e0
    MOV EDI,0x1                         ; 0040c721
    JMP 0x0040c6e0                      ; 0040c726
        ;   XREF to: 0040c6e0 (UNCONDITIONAL_JUMP)  ; LAB_0040c6e0
    INC EAX                             ; 0040c728
        ;   Label: LAB_0040c728
    MOV dword ptr [EDX],EAX             ; 0040c729
    JMP 0x0040c6e2                      ; 0040c72b
        ;   XREF to: 0040c6e2 (UNCONDITIONAL_JUMP)  ; LAB_0040c6e2
    MOV EAX,EDI                         ; 0040c72d
        ;   Label: LAB_0040c72d
    POP EBP                             ; 0040c72f
    POP EDI                             ; 0040c730
    POP ESI                             ; 0040c731
    POP EBX                             ; 0040c732
    RET                                 ; 0040c733
    MOV EAX,0xffffffff                  ; 0040c734
        ;   Label: LAB_0040c734
    POP EBP                             ; 0040c739
    POP EDI                             ; 0040c73a
    POP ESI                             ; 0040c73b
    POP EBX                             ; 0040c73c
    RET                                 ; 0040c73d
    CMP CL,0x26                         ; 0040c73e
        ;   Label: LAB_0040c73e
    JNZ 0x0040c764                      ; 0040c741
        ;   XREF to: 0040c764 (CONDITIONAL_JUMP)  ; LAB_0040c764
    INC EAX                             ; 0040c743
    MOV dword ptr [ESI],EAX             ; 0040c744
    CMP CL,byte ptr [EAX]               ; 0040c746
    JNZ 0x0040c74d                      ; 0040c748
        ;   XREF to: 0040c74d (CONDITIONAL_JUMP)  ; LAB_0040c74d
    INC EAX                             ; 0040c74a
    MOV dword ptr [ESI],EAX             ; 0040c74b
    PUSH ESI                            ; 0040c74d
        ;   Label: LAB_0040c74d
    PUSH EBP                            ; 0040c74e
    CALL core_actor.cpp_matchClassTerm_FUN_0040c5b0 ; 0040c74f
        ;   XREF to: 0040c5b0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040c5b0(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c754
    TEST EAX,EAX                        ; 0040c757
    JL 0x0040c734                       ; 0040c759
        ;   XREF to: 0040c734 (CONDITIONAL_JUMP)  ; LAB_0040c734
    JNZ 0x0040c6e0                      ; 0040c75b
        ;   XREF to: 0040c6e0 (CONDITIONAL_JUMP)  ; LAB_0040c6e0
    XOR EDI,EDI                         ; 0040c75d
    JMP 0x0040c6e0                      ; 0040c75f
        ;   XREF to: 0040c6e0 (UNCONDITIONAL_JUMP)  ; LAB_0040c6e0
    PUSH ESI                            ; 0040c764
        ;   Label: LAB_0040c764
    PUSH EBP                            ; 0040c765
    CALL core_actor.cpp_matchClassTerm_FUN_0040c5b0 ; 0040c766
        ;   XREF to: 0040c5b0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040c5b0(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c76b
    TEST EAX,EAX                        ; 0040c76e
    JL 0x0040c734                       ; 0040c770
        ;   XREF to: 0040c734 (CONDITIONAL_JUMP)  ; LAB_0040c734
    JLE 0x0040c6e0                      ; 0040c772
        ;   XREF to: 0040c6e0 (CONDITIONAL_JUMP)  ; LAB_0040c6e0
    MOV EDI,0x1                         ; 0040c778
    JMP 0x0040c6e0                      ; 0040c77d
        ;   XREF to: 0040c6e0 (UNCONDITIONAL_JUMP)  ; LAB_0040c6e0

