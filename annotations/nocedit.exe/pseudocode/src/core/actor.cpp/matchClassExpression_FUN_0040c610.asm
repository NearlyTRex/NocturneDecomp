; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_matchClassExpression_FUN_0040c610(CDemonActorType *type_ptr,char **parse_pos)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; char * *         Stack[0x8]:4   parse_pos
;
; XREF[2]:
;   core_actor.cpp_matchClassTerm_FUN_0040c4f0 at 0040c54f
;   core_actor.cpp_matchesClassName_FUN_0040c740 at 0040c74a
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; Called Functions:
;   core_actor.cpp_matchClassTerm_FUN_0040c4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c610
        ;   Label: core_actor.cpp_matchClassExpression_FUN_0040c610
    PUSH ESI                            ; 0040c611
    PUSH EDI                            ; 0040c612
    PUSH EBP                            ; 0040c613
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c614
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040c618
    XOR EDI,EDI                         ; 0040c61c
    MOV BH,0x2                          ; 0040c61e
    MOV EDX,ESI                         ; 0040c620
        ;   Label: LAB_0040c620
    MOV EAX,dword ptr [EDX]             ; 0040c622
        ;   Label: LAB_0040c622
    MOV BL,byte ptr [EAX]               ; 0040c624
    XOR ECX,ECX                         ; 0040c626
    INC BL                              ; 0040c628
    MOV CL,BL                           ; 0040c62a
    TEST byte ptr [ECX + 0x6849c4],BH   ; 0040c62c | g_CharacterClassificationTable
    JNZ 0x0040c668                      ; 0040c632
        ;   XREF to: 0040c668 (CONDITIONAL_JUMP)  ; LAB_0040c668
    MOV EAX,dword ptr [ESI]             ; 0040c634
    MOV CL,byte ptr [EAX]               ; 0040c636
    TEST CL,CL                          ; 0040c638
    JZ 0x0040c66d                       ; 0040c63a
        ;   XREF to: 0040c66d (CONDITIONAL_JUMP)  ; LAB_0040c66d
    CMP CL,0x29                         ; 0040c63c
    JZ 0x0040c66d                       ; 0040c63f
        ;   XREF to: 0040c66d (CONDITIONAL_JUMP)  ; LAB_0040c66d
    CMP CL,0x7c                         ; 0040c641
    JNZ 0x0040c67e                      ; 0040c644
        ;   XREF to: 0040c67e (CONDITIONAL_JUMP)  ; LAB_0040c67e
    INC EAX                             ; 0040c646
    MOV dword ptr [ESI],EAX             ; 0040c647
    CMP byte ptr [EAX],0x7c             ; 0040c649
    JNZ 0x0040c651                      ; 0040c64c
        ;   XREF to: 0040c651 (CONDITIONAL_JUMP)  ; LAB_0040c651
    INC EAX                             ; 0040c64e
    MOV dword ptr [ESI],EAX             ; 0040c64f
    PUSH ESI                            ; 0040c651
        ;   Label: LAB_0040c651
    PUSH EBP                            ; 0040c652
    CALL core_actor.cpp_matchClassTerm_FUN_0040c4f0 ; 0040c653
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040c4f0(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c658
    TEST EAX,EAX                        ; 0040c65b
    JL 0x0040c674                       ; 0040c65d
        ;   XREF to: 0040c674 (CONDITIONAL_JUMP)  ; LAB_0040c674
    JLE 0x0040c620                      ; 0040c65f
        ;   XREF to: 0040c620 (CONDITIONAL_JUMP)  ; LAB_0040c620
    MOV EDI,0x1                         ; 0040c661
    JMP 0x0040c620                      ; 0040c666
        ;   XREF to: 0040c620 (UNCONDITIONAL_JUMP)  ; LAB_0040c620
    INC EAX                             ; 0040c668
        ;   Label: LAB_0040c668
    MOV dword ptr [EDX],EAX             ; 0040c669
    JMP 0x0040c622                      ; 0040c66b
        ;   XREF to: 0040c622 (UNCONDITIONAL_JUMP)  ; LAB_0040c622
    MOV EAX,EDI                         ; 0040c66d
        ;   Label: LAB_0040c66d
    POP EBP                             ; 0040c66f
    POP EDI                             ; 0040c670
    POP ESI                             ; 0040c671
    POP EBX                             ; 0040c672
    RET                                 ; 0040c673
    MOV EAX,0xffffffff                  ; 0040c674
        ;   Label: LAB_0040c674
    POP EBP                             ; 0040c679
    POP EDI                             ; 0040c67a
    POP ESI                             ; 0040c67b
    POP EBX                             ; 0040c67c
    RET                                 ; 0040c67d
    CMP CL,0x26                         ; 0040c67e
        ;   Label: LAB_0040c67e
    JNZ 0x0040c6a4                      ; 0040c681
        ;   XREF to: 0040c6a4 (CONDITIONAL_JUMP)  ; LAB_0040c6a4
    INC EAX                             ; 0040c683
    MOV dword ptr [ESI],EAX             ; 0040c684
    CMP CL,byte ptr [EAX]               ; 0040c686
    JNZ 0x0040c68d                      ; 0040c688
        ;   XREF to: 0040c68d (CONDITIONAL_JUMP)  ; LAB_0040c68d
    INC EAX                             ; 0040c68a
    MOV dword ptr [ESI],EAX             ; 0040c68b
    PUSH ESI                            ; 0040c68d
        ;   Label: LAB_0040c68d
    PUSH EBP                            ; 0040c68e
    CALL core_actor.cpp_matchClassTerm_FUN_0040c4f0 ; 0040c68f
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040c4f0(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c694
    TEST EAX,EAX                        ; 0040c697
    JL 0x0040c674                       ; 0040c699
        ;   XREF to: 0040c674 (CONDITIONAL_JUMP)  ; LAB_0040c674
    JNZ 0x0040c620                      ; 0040c69b
        ;   XREF to: 0040c620 (CONDITIONAL_JUMP)  ; LAB_0040c620
    XOR EDI,EDI                         ; 0040c69d
    JMP 0x0040c620                      ; 0040c69f
        ;   XREF to: 0040c620 (UNCONDITIONAL_JUMP)  ; LAB_0040c620
    PUSH ESI                            ; 0040c6a4
        ;   Label: LAB_0040c6a4
    PUSH EBP                            ; 0040c6a5
    CALL core_actor.cpp_matchClassTerm_FUN_0040c4f0 ; 0040c6a6
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040c4f0(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c6ab
    TEST EAX,EAX                        ; 0040c6ae
    JL 0x0040c674                       ; 0040c6b0
        ;   XREF to: 0040c674 (CONDITIONAL_JUMP)  ; LAB_0040c674
    JLE 0x0040c620                      ; 0040c6b2
        ;   XREF to: 0040c620 (CONDITIONAL_JUMP)  ; LAB_0040c620
    MOV EDI,0x1                         ; 0040c6b8
    JMP 0x0040c620                      ; 0040c6bd
        ;   XREF to: 0040c620 (UNCONDITIONAL_JUMP)  ; LAB_0040c620

