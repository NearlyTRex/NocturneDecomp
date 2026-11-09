; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateLogicalExpr_FUN_004a97b0(CEventList *this_ptr,char *expression,int *parse_position)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
; int *            Stack[0xc]:4   parse_position
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a718f
;   core_event.cpp_CEventList_evaluateExpression_FUN_004a6d10 at 004a6d2f
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a97b0
        ;   Label: core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004a97b0
    PUSH ESI                            ; 004a97b1
    PUSH EDI                            ; 004a97b2
    PUSH EBP                            ; 004a97b3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004a97b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a97b8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a97bc
    PUSH EBX                            ; 004a97c0
    PUSH ESI                            ; 004a97c1
    PUSH EBP                            ; 004a97c2
    CALL core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 ; 004a97c3
        ;   XREF to: 004a70d0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 004a97c8
    MOV EDI,EAX                         ; 004a97cb
    TEST EAX,EAX                        ; 004a97cd
    JL 0x004a714d                       ; 004a97cf
        ;   XREF to: 004a714d (CONDITIONAL_JUMP)  ; LAB_004a714d
    MOV EAX,dword ptr [EBX]             ; 004a97d5
        ;   Label: LAB_004a97d5
    ADD EAX,ESI                         ; 004a97d7
    MOV DL,byte ptr [EAX]               ; 004a97d9
    TEST DL,DL                          ; 004a97db
    JZ 0x004a9863                       ; 004a97dd
        ;   XREF to: 004a9863 (CONDITIONAL_JUMP)  ; LAB_004a9863
    CMP DL,0x7c                         ; 004a97e3
    JZ 0x004a9825                       ; 004a97e6
        ;   XREF to: 004a9825 (CONDITIONAL_JUMP)  ; LAB_004a9825
    CMP DL,0x26                         ; 004a97e8
    JNZ 0x004a9863                      ; 004a97eb
        ;   XREF to: 004a9863 (CONDITIONAL_JUMP)  ; LAB_004a9863
    MOV EDX,dword ptr [EBX]             ; 004a97f1
    INC EDX                             ; 004a97f3
    MOV EAX,EDX                         ; 004a97f4
    MOV dword ptr [EBX],EDX             ; 004a97f6
    CMP byte ptr [ESI + EAX*0x1],0x26   ; 004a97f8
    JNZ 0x004a9803                      ; 004a97fc
        ;   XREF to: 004a9803 (CONDITIONAL_JUMP)  ; LAB_004a9803
    LEA ECX,[EDX + 0x1]                 ; 004a97fe
    MOV dword ptr [EBX],ECX             ; 004a9801
    PUSH EBX                            ; 004a9803
        ;   Label: LAB_004a9803
    PUSH ESI                            ; 004a9804
    PUSH EBP                            ; 004a9805
    CALL core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 ; 004a9806
        ;   XREF to: 004a70d0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 004a980b
    TEST EAX,EAX                        ; 004a980e
    JL 0x004a714d                       ; 004a9810
        ;   XREF to: 004a714d (CONDITIONAL_JUMP)  ; LAB_004a714d
    TEST EDI,EDI                        ; 004a9816
    JZ 0x004a985c                       ; 004a9818
        ;   XREF to: 004a985c (CONDITIONAL_JUMP)  ; LAB_004a985c
    TEST EAX,EAX                        ; 004a981a
    JZ 0x004a985c                       ; 004a981c
        ;   XREF to: 004a985c (CONDITIONAL_JUMP)  ; LAB_004a985c
    MOV EDI,0x1                         ; 004a981e
    JMP 0x004a97d5                      ; 004a9823
        ;   XREF to: 004a97d5 (UNCONDITIONAL_JUMP)  ; LAB_004a97d5
    MOV EAX,dword ptr [EBX]             ; 004a9825
        ;   Label: LAB_004a9825
    INC EAX                             ; 004a9827
    MOV dword ptr [EBX],EAX             ; 004a9828
    CMP byte ptr [ESI + EAX*0x1],0x7c   ; 004a982a
    JNZ 0x004a9835                      ; 004a982e
        ;   XREF to: 004a9835 (CONDITIONAL_JUMP)  ; LAB_004a9835
    LEA EDX,[EAX + 0x1]                 ; 004a9830
    MOV dword ptr [EBX],EDX             ; 004a9833
    PUSH EBX                            ; 004a9835
        ;   Label: LAB_004a9835
    PUSH ESI                            ; 004a9836
    PUSH EBP                            ; 004a9837
    CALL core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 ; 004a9838
        ;   XREF to: 004a70d0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 004a983d
    TEST EAX,EAX                        ; 004a9840
    JL 0x004a714d                       ; 004a9842
        ;   XREF to: 004a714d (CONDITIONAL_JUMP)  ; LAB_004a714d
    TEST EDI,EDI                        ; 004a9848
    JZ 0x004a9853                       ; 004a984a
        ;   XREF to: 004a9853 (CONDITIONAL_JUMP)  ; LAB_004a9853
    MOV EDI,0x1                         ; 004a984c
        ;   Label: LAB_004a984c
    JMP 0x004a97d5                      ; 004a9851
        ;   XREF to: 004a97d5 (UNCONDITIONAL_JUMP)  ; LAB_004a97d5
    TEST EAX,EAX                        ; 004a9853
        ;   Label: LAB_004a9853
    JNZ 0x004a984c                      ; 004a9855
        ;   XREF to: 004a984c (CONDITIONAL_JUMP)  ; LAB_004a984c
    JMP 0x004a97d5                      ; 004a9857
        ;   XREF to: 004a97d5 (UNCONDITIONAL_JUMP)  ; LAB_004a97d5
    XOR EDI,EDI                         ; 004a985c
        ;   Label: LAB_004a985c
    JMP 0x004a97d5                      ; 004a985e
        ;   XREF to: 004a97d5 (UNCONDITIONAL_JUMP)  ; LAB_004a97d5
    MOV EAX,EDI                         ; 004a9863
        ;   Label: LAB_004a9863
    POP EBP                             ; 004a9865
    POP EDI                             ; 004a9866
    POP ESI                             ; 004a9867
    POP EBX                             ; 004a9868
    RET                                 ; 004a9869

