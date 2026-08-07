; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_matchClassExpression_FUN_0040d720(CDemonActorType *type_ptr,char **parse_pos)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; char * *         Stack[0x8]:4   parse_pos
;
; XREF[2]:
;   core_actor.cpp_matchClassTerm_FUN_0040d600 at 0040d65f
;   core_actor.cpp_matchesClassName_FUN_0040d840 at 0040d84a
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; Called Functions:
;   core_actor.cpp_matchClassTerm_FUN_0040d600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d720
        ;   Label: core_actor.cpp_matchClassExpression_FUN_0040d720
    PUSH ESI                            ; 0040d721
    PUSH EDI                            ; 0040d722
    PUSH EBP                            ; 0040d723
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040d724
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040d728
    XOR EDI,EDI                         ; 0040d72c
    MOV BH,0x2                          ; 0040d72e
    MOV EDX,ESI                         ; 0040d730
        ;   Label: LAB_0040d730
    MOV EAX,dword ptr [EDX]             ; 0040d732
        ;   Label: LAB_0040d732
    MOV BL,byte ptr [EAX]               ; 0040d734
    XOR ECX,ECX                         ; 0040d736
    INC BL                              ; 0040d738
    MOV CL,BL                           ; 0040d73a
    TEST byte ptr [ECX + 0x5c168c],BH   ; 0040d73c | g_CharacterClassificationTable
    JNZ 0x0040d778                      ; 0040d742
        ;   XREF to: 0040d778 (CONDITIONAL_JUMP)  ; LAB_0040d778
    MOV EAX,dword ptr [ESI]             ; 0040d744
    MOV CL,byte ptr [EAX]               ; 0040d746
    TEST CL,CL                          ; 0040d748
    JZ 0x0040d77d                       ; 0040d74a
        ;   XREF to: 0040d77d (CONDITIONAL_JUMP)  ; LAB_0040d77d
    CMP CL,0x29                         ; 0040d74c
    JZ 0x0040d77d                       ; 0040d74f
        ;   XREF to: 0040d77d (CONDITIONAL_JUMP)  ; LAB_0040d77d
    CMP CL,0x7c                         ; 0040d751
    JNZ 0x0040d78e                      ; 0040d754
        ;   XREF to: 0040d78e (CONDITIONAL_JUMP)  ; LAB_0040d78e
    INC EAX                             ; 0040d756
    MOV dword ptr [ESI],EAX             ; 0040d757
    CMP byte ptr [EAX],0x7c             ; 0040d759
    JNZ 0x0040d761                      ; 0040d75c
        ;   XREF to: 0040d761 (CONDITIONAL_JUMP)  ; LAB_0040d761
    INC EAX                             ; 0040d75e
    MOV dword ptr [ESI],EAX             ; 0040d75f
    PUSH ESI                            ; 0040d761
        ;   Label: LAB_0040d761
    PUSH EBP                            ; 0040d762
    CALL core_actor.cpp_matchClassTerm_FUN_0040d600 ; 0040d763
        ;   XREF to: 0040d600 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040d600(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040d768
    TEST EAX,EAX                        ; 0040d76b
    JL 0x0040d784                       ; 0040d76d
        ;   XREF to: 0040d784 (CONDITIONAL_JUMP)  ; LAB_0040d784
    JLE 0x0040d730                      ; 0040d76f
        ;   XREF to: 0040d730 (CONDITIONAL_JUMP)  ; LAB_0040d730
    MOV EDI,0x1                         ; 0040d771
    JMP 0x0040d730                      ; 0040d776
        ;   XREF to: 0040d730 (UNCONDITIONAL_JUMP)  ; LAB_0040d730
    INC EAX                             ; 0040d778
        ;   Label: LAB_0040d778
    MOV dword ptr [EDX],EAX             ; 0040d779
    JMP 0x0040d732                      ; 0040d77b
        ;   XREF to: 0040d732 (UNCONDITIONAL_JUMP)  ; LAB_0040d732
    MOV EAX,EDI                         ; 0040d77d
        ;   Label: LAB_0040d77d
    POP EBP                             ; 0040d77f
    POP EDI                             ; 0040d780
    POP ESI                             ; 0040d781
    POP EBX                             ; 0040d782
    RET                                 ; 0040d783
    MOV EAX,0xffffffff                  ; 0040d784
        ;   Label: LAB_0040d784
    POP EBP                             ; 0040d789
    POP EDI                             ; 0040d78a
    POP ESI                             ; 0040d78b
    POP EBX                             ; 0040d78c
    RET                                 ; 0040d78d
    CMP CL,0x26                         ; 0040d78e
        ;   Label: LAB_0040d78e
    JNZ 0x0040d7b4                      ; 0040d791
        ;   XREF to: 0040d7b4 (CONDITIONAL_JUMP)  ; LAB_0040d7b4
    INC EAX                             ; 0040d793
    MOV dword ptr [ESI],EAX             ; 0040d794
    CMP CL,byte ptr [EAX]               ; 0040d796
    JNZ 0x0040d79d                      ; 0040d798
        ;   XREF to: 0040d79d (CONDITIONAL_JUMP)  ; LAB_0040d79d
    INC EAX                             ; 0040d79a
    MOV dword ptr [ESI],EAX             ; 0040d79b
    PUSH ESI                            ; 0040d79d
        ;   Label: LAB_0040d79d
    PUSH EBP                            ; 0040d79e
    CALL core_actor.cpp_matchClassTerm_FUN_0040d600 ; 0040d79f
        ;   XREF to: 0040d600 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040d600(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040d7a4
    TEST EAX,EAX                        ; 0040d7a7
    JL 0x0040d784                       ; 0040d7a9
        ;   XREF to: 0040d784 (CONDITIONAL_JUMP)  ; LAB_0040d784
    JNZ 0x0040d730                      ; 0040d7ab
        ;   XREF to: 0040d730 (CONDITIONAL_JUMP)  ; LAB_0040d730
    XOR EDI,EDI                         ; 0040d7ad
    JMP 0x0040d730                      ; 0040d7af
        ;   XREF to: 0040d730 (UNCONDITIONAL_JUMP)  ; LAB_0040d730
    PUSH ESI                            ; 0040d7b4
        ;   Label: LAB_0040d7b4
    PUSH EBP                            ; 0040d7b5
    CALL core_actor.cpp_matchClassTerm_FUN_0040d600 ; 0040d7b6
        ;   XREF to: 0040d600 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassTerm_FUN_0040d600(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040d7bb
    TEST EAX,EAX                        ; 0040d7be
    JL 0x0040d784                       ; 0040d7c0
        ;   XREF to: 0040d784 (CONDITIONAL_JUMP)  ; LAB_0040d784
    JLE 0x0040d730                      ; 0040d7c2
        ;   XREF to: 0040d730 (CONDITIONAL_JUMP)  ; LAB_0040d730
    MOV EDI,0x1                         ; 0040d7c8
    JMP 0x0040d730                      ; 0040d7cd
        ;   XREF to: 0040d730 (UNCONDITIONAL_JUMP)  ; LAB_0040d730

