; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_matchClassExpression_FUN_0040c490(CDemonActorType *type_ptr,char **parse_pos)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; char * *         Stack[0x8]:4   parse_pos
;
; XREF[2]:
;   core_actor.cpp_matchClassTerm_FUN_0040c370 at 0040c3cf
;   core_actor.cpp_matchesClassName_FUN_0040c5b0 at 0040c5ba
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; Called Functions:
;   core_actor.cpp_matchClassTerm_FUN_0040c370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c490
        ;   Label: core_actor.cpp_matchClassExpression_FUN_0040c490
    PUSH ESI                            ; 0040c491
    PUSH EDI                            ; 0040c492
    PUSH EBP                            ; 0040c493
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c494
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040c498
    XOR EDI,EDI                         ; 0040c49c
    MOV BH,0x2                          ; 0040c49e
    MOV EDX,ESI                         ; 0040c4a0
        ;   Label: LAB_0040c4a0
    MOV EAX,dword ptr [EDX]             ; 0040c4a2
        ;   Label: LAB_0040c4a2
    MOV BL,byte ptr [EAX]               ; 0040c4a4
    XOR ECX,ECX                         ; 0040c4a6
    INC BL                              ; 0040c4a8
    MOV CL,BL                           ; 0040c4aa
    TEST byte ptr [ECX + 0x626114],BH   ; 0040c4ac | DAT_00626114
    JNZ 0x0040c4e8                      ; 0040c4b2
        ;   XREF to: 0040c4e8 (CONDITIONAL_JUMP)  ; LAB_0040c4e8
    MOV EAX,dword ptr [ESI]             ; 0040c4b4
    MOV CL,byte ptr [EAX]               ; 0040c4b6
    TEST CL,CL                          ; 0040c4b8
    JZ 0x0040c4ed                       ; 0040c4ba
        ;   XREF to: 0040c4ed (CONDITIONAL_JUMP)  ; LAB_0040c4ed
    CMP CL,0x29                         ; 0040c4bc
    JZ 0x0040c4ed                       ; 0040c4bf
        ;   XREF to: 0040c4ed (CONDITIONAL_JUMP)  ; LAB_0040c4ed
    CMP CL,0x7c                         ; 0040c4c1
    JNZ 0x0040c4fe                      ; 0040c4c4
        ;   XREF to: 0040c4fe (CONDITIONAL_JUMP)  ; LAB_0040c4fe
    INC EAX                             ; 0040c4c6
    MOV dword ptr [ESI],EAX             ; 0040c4c7
    CMP byte ptr [EAX],0x7c             ; 0040c4c9
    JNZ 0x0040c4d1                      ; 0040c4cc
        ;   XREF to: 0040c4d1 (CONDITIONAL_JUMP)  ; LAB_0040c4d1
    INC EAX                             ; 0040c4ce
    MOV dword ptr [ESI],EAX             ; 0040c4cf
    PUSH ESI                            ; 0040c4d1
        ;   Label: LAB_0040c4d1
    PUSH EBP                            ; 0040c4d2
    CALL core_actor.cpp_matchClassTerm_FUN_0040c370 ; 0040c4d3
        ;   XREF to: 0040c370 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040c370(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c4d8
    TEST EAX,EAX                        ; 0040c4db
    JL 0x0040c4f4                       ; 0040c4dd
        ;   XREF to: 0040c4f4 (CONDITIONAL_JUMP)  ; LAB_0040c4f4
    JLE 0x0040c4a0                      ; 0040c4df
        ;   XREF to: 0040c4a0 (CONDITIONAL_JUMP)  ; LAB_0040c4a0
    MOV EDI,0x1                         ; 0040c4e1
    JMP 0x0040c4a0                      ; 0040c4e6
        ;   XREF to: 0040c4a0 (UNCONDITIONAL_JUMP)  ; LAB_0040c4a0
    INC EAX                             ; 0040c4e8
        ;   Label: LAB_0040c4e8
    MOV dword ptr [EDX],EAX             ; 0040c4e9
    JMP 0x0040c4a2                      ; 0040c4eb
        ;   XREF to: 0040c4a2 (UNCONDITIONAL_JUMP)  ; LAB_0040c4a2
    MOV EAX,EDI                         ; 0040c4ed
        ;   Label: LAB_0040c4ed
    POP EBP                             ; 0040c4ef
    POP EDI                             ; 0040c4f0
    POP ESI                             ; 0040c4f1
    POP EBX                             ; 0040c4f2
    RET                                 ; 0040c4f3
    MOV EAX,0xffffffff                  ; 0040c4f4
        ;   Label: LAB_0040c4f4
    POP EBP                             ; 0040c4f9
    POP EDI                             ; 0040c4fa
    POP ESI                             ; 0040c4fb
    POP EBX                             ; 0040c4fc
    RET                                 ; 0040c4fd
    CMP CL,0x26                         ; 0040c4fe
        ;   Label: LAB_0040c4fe
    JNZ 0x0040c524                      ; 0040c501
        ;   XREF to: 0040c524 (CONDITIONAL_JUMP)  ; LAB_0040c524
    INC EAX                             ; 0040c503
    MOV dword ptr [ESI],EAX             ; 0040c504
    CMP CL,byte ptr [EAX]               ; 0040c506
    JNZ 0x0040c50d                      ; 0040c508
        ;   XREF to: 0040c50d (CONDITIONAL_JUMP)  ; LAB_0040c50d
    INC EAX                             ; 0040c50a
    MOV dword ptr [ESI],EAX             ; 0040c50b
    PUSH ESI                            ; 0040c50d
        ;   Label: LAB_0040c50d
    PUSH EBP                            ; 0040c50e
    CALL core_actor.cpp_matchClassTerm_FUN_0040c370 ; 0040c50f
        ;   XREF to: 0040c370 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040c370(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c514
    TEST EAX,EAX                        ; 0040c517
    JL 0x0040c4f4                       ; 0040c519
        ;   XREF to: 0040c4f4 (CONDITIONAL_JUMP)  ; LAB_0040c4f4
    JNZ 0x0040c4a0                      ; 0040c51b
        ;   XREF to: 0040c4a0 (CONDITIONAL_JUMP)  ; LAB_0040c4a0
    XOR EDI,EDI                         ; 0040c51d
    JMP 0x0040c4a0                      ; 0040c51f
        ;   XREF to: 0040c4a0 (UNCONDITIONAL_JUMP)  ; LAB_0040c4a0
    PUSH ESI                            ; 0040c524
        ;   Label: LAB_0040c524
    PUSH EBP                            ; 0040c525
    CALL core_actor.cpp_matchClassTerm_FUN_0040c370 ; 0040c526
        ;   XREF to: 0040c370 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040c370(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c52b
    TEST EAX,EAX                        ; 0040c52e
    JL 0x0040c4f4                       ; 0040c530
        ;   XREF to: 0040c4f4 (CONDITIONAL_JUMP)  ; LAB_0040c4f4
    JLE 0x0040c4a0                      ; 0040c532
        ;   XREF to: 0040c4a0 (CONDITIONAL_JUMP)  ; LAB_0040c4a0
    MOV EDI,0x1                         ; 0040c538
    JMP 0x0040c4a0                      ; 0040c53d
        ;   XREF to: 0040c4a0 (UNCONDITIONAL_JUMP)  ; LAB_0040c4a0

