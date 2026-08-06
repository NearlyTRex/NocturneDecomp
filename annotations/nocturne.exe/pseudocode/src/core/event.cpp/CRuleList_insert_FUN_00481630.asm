; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CRuleList_insert_FUN_00481630(CRuleList *this_ptr,int index,char *condition,char *event)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; char *           Stack[0xc]:4   condition
; char *           Stack[0x10]:4   event
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00580edb
;   TerminatedCString s_CRuleList_insert_invalid_00580eed
;   TerminatedCString s_core_event_cpp_00580f0f
;   TerminatedCString s_CRuleList_insert_list_fu_00580f21
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481630
        ;   Label: core_event.cpp_CRuleList_insert_FUN_00481630
    PUSH ESI                            ; 00481631
    PUSH EDI                            ; 00481632
    PUSH EBP                            ; 00481633
    SUB ESP,0x8                         ; 00481634
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00481637
    MOV ESI,dword ptr [ESP + 0x20]      ; 0048163b
    TEST ESI,ESI                        ; 0048163f
    JL 0x00481647                       ; 00481641
        ;   XREF to: 00481647 (CONDITIONAL_JUMP)  ; LAB_00481647
    CMP ESI,dword ptr [EBX]             ; 00481643
    JLE 0x0048166a                      ; 00481645
        ;   XREF to: 0048166a (CONDITIONAL_JUMP)  ; LAB_0048166a
    MOV ECX,0x580edb                    ; 00481647 | = "..\\core\\event.cpp"
        ;   Label: LAB_00481647
    MOV EDI,0xcd9                       ; 0048164c
    PUSH 0x580eed                       ; 00481651 | = "CRuleList::insert - invalid index"
    MOV dword ptr [0x01cc4800],ECX      ; 00481656 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 0048165c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00481662
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00481667
    CMP dword ptr [EBX],0x5             ; 0048166a
        ;   Label: LAB_0048166a
    JGE 0x00481744                      ; 0048166d
        ;   XREF to: 00481744 (CONDITIONAL_JUMP)  ; LAB_00481744
    MOV EDX,dword ptr [EBX]             ; 00481673
        ;   Label: LAB_00481673
    SUB EDX,ESI                         ; 00481675
    LEA EAX,[EDX*0x4 + 0x0]             ; 00481677
    SUB EAX,EDX                         ; 0048167e
    SHL EAX,0x3                         ; 00481680
    ADD EAX,EDX                         ; 00481683
    SHL EAX,0x2                         ; 00481685
    PUSH EAX                            ; 00481688
    LEA EAX,[ESI*0x4 + 0x0]             ; 00481689
    SUB EAX,ESI                         ; 00481690
    SHL EAX,0x3                         ; 00481692
    ADD EAX,ESI                         ; 00481695
    LEA EBP,[EBX + 0x4]                 ; 00481697
    SHL EAX,0x2                         ; 0048169a
    LEA EDX,[ESI + 0x1]                 ; 0048169d
    MOV dword ptr [ESP + 0x4],EAX       ; 004816a0
    LEA EDI,[EAX + EBP*0x1]             ; 004816a4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004816a7
    SUB EAX,EDX                         ; 004816ae
    SHL EAX,0x3                         ; 004816b0
    ADD EAX,EDX                         ; 004816b3
    SHL EAX,0x2                         ; 004816b5
    PUSH EDI                            ; 004816b8
    ADD EBP,EAX                         ; 004816b9
    PUSH EBP                            ; 004816bb
    MOV dword ptr [ESP + 0x10],EAX      ; 004816bc
    CALL crt_string.c_memmove_FUN_00566170 ; 004816c0
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [EBX]             ; 004816c5
    SUB EDX,ESI                         ; 004816c7
    LEA EAX,[EDX*0x4 + 0x0]             ; 004816c9
    SUB EAX,EDX                         ; 004816d0
    SHL EAX,0x3                         ; 004816d2
    ADD EAX,EDX                         ; 004816d5
    ADD ESP,0xc                         ; 004816d7
    SHL EAX,0x2                         ; 004816da
    MOV EBP,dword ptr [ESP]             ; 004816dd
    PUSH EAX                            ; 004816e0
    LEA EAX,[EBX + 0x1f8]               ; 004816e1
    ADD EBP,EAX                         ; 004816e7
    MOV ESI,dword ptr [ESP + 0x8]       ; 004816e9
    PUSH EBP                            ; 004816ed
    ADD EAX,ESI                         ; 004816ee
    PUSH EAX                            ; 004816f0
    CALL crt_string.c_memmove_FUN_00566170 ; 004816f1
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX]             ; 004816f6
    ADD ESP,0xc                         ; 004816f8
    INC EAX                             ; 004816fb
    MOV ESI,dword ptr [ESP + 0x24]      ; 004816fc
    MOV dword ptr [EBX],EAX             ; 00481700
    PUSH EDI                            ; 00481702
    MOV AL,byte ptr [ESI]               ; 00481703
        ;   Label: LAB_00481703
    MOV byte ptr [EDI],AL               ; 00481705
    CMP AL,0x0                          ; 00481707
    JZ 0x0048171b                       ; 00481709
        ;   XREF to: 0048171b (CONDITIONAL_JUMP)  ; LAB_0048171b
    MOV AL,byte ptr [ESI + 0x1]         ; 0048170b
    ADD ESI,0x2                         ; 0048170e
    MOV byte ptr [EDI + 0x1],AL         ; 00481711
    ADD EDI,0x2                         ; 00481714
    CMP AL,0x0                          ; 00481717
    JNZ 0x00481703                      ; 00481719
        ;   XREF to: 00481703 (CONDITIONAL_JUMP)  ; LAB_00481703
    POP EDI                             ; 0048171b
        ;   Label: LAB_0048171b
    MOV ESI,dword ptr [ESP + 0x28]      ; 0048171c
    MOV EDI,EBP                         ; 00481720
    PUSH EDI                            ; 00481722
    MOV AL,byte ptr [ESI]               ; 00481723
        ;   Label: LAB_00481723
    MOV byte ptr [EDI],AL               ; 00481725
    CMP AL,0x0                          ; 00481727
    JZ 0x0048173b                       ; 00481729
        ;   XREF to: 0048173b (CONDITIONAL_JUMP)  ; LAB_0048173b
    MOV AL,byte ptr [ESI + 0x1]         ; 0048172b
    ADD ESI,0x2                         ; 0048172e
    MOV byte ptr [EDI + 0x1],AL         ; 00481731
    ADD EDI,0x2                         ; 00481734
    CMP AL,0x0                          ; 00481737
    JNZ 0x00481723                      ; 00481739
        ;   XREF to: 00481723 (CONDITIONAL_JUMP)  ; LAB_00481723
    POP EDI                             ; 0048173b
        ;   Label: LAB_0048173b
    ADD ESP,0x8                         ; 0048173c
    POP EBP                             ; 0048173f
    POP EDI                             ; 00481740
    POP ESI                             ; 00481741
    POP EBX                             ; 00481742
    RET                                 ; 00481743
    MOV EAX,0x580f0f                    ; 00481744 | = "..\\core\\event.cpp"
        ;   Label: LAB_00481744
    MOV EDX,0xcda                       ; 00481749
    PUSH 0x580f21                       ; 0048174e | = "CRuleList::insert - list full"
    MOV [0x01cc4800],EAX                ; 00481753 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00481758 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0048175e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00481763
    JMP 0x00481673                      ; 00481766
        ;   XREF to: 00481673 (UNCONDITIONAL_JUMP)  ; LAB_00481673

