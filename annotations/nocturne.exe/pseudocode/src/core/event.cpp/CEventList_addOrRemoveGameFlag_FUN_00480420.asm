; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00480420(int param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047b7db
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00580a5f
;   TerminatedCString s_Too_many_game_flags_00580a71
;   TerminatedCString s_core_event_cpp_00580a86
;   TerminatedCString s_Event_name_s_too_long_00580a98
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_event.cpp_CEventList_findGameFlag_FUN_00480860
;   core_main.c_FUN_004c8440
;   crt_string.c_memmove_FUN_00566170
;   crt_string.c_strupr_FUN_00566ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480420
        ;   Label: core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_00480420
    PUSH ESI                            ; 00480421
    PUSH EBP                            ; 00480422
    MOV EBX,dword ptr [ESP + 0x10]      ; 00480423
    MOV ESI,dword ptr [ESP + 0x14]      ; 00480427
    TEST ESI,ESI                        ; 0048042b
    JZ 0x00480434                       ; 0048042d
        ;   XREF to: 00480434 (CONDITIONAL_JUMP)  ; LAB_00480434
    CMP byte ptr [ESI],0x0              ; 0048042f
    JNZ 0x00480438                      ; 00480432
        ;   XREF to: 00480438 (CONDITIONAL_JUMP)  ; LAB_00480438
    POP EBP                             ; 00480434
        ;   Label: LAB_00480434
    POP ESI                             ; 00480435
    POP EBX                             ; 00480436
    RET                                 ; 00480437
    PUSH ESI                            ; 00480438
        ;   Label: LAB_00480438
    PUSH EBX                            ; 00480439
    CALL core_event.cpp_CEventList_findGameFlag_FUN_00480860 ; 0048043a
        ;   XREF to: 00480860 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_findGameFlag_FUN_00480860()
    ADD ESP,0x8                         ; 0048043f
    CMP dword ptr [ESP + 0x18],0x0      ; 00480442
    JZ 0x0048050c                       ; 00480447
        ;   XREF to: 0048050c (CONDITIONAL_JUMP)  ; LAB_0048050c
    TEST EAX,EAX                        ; 0048044d
    JGE 0x00480434                      ; 0048044f
        ;   XREF to: 00480434 (CONDITIONAL_JUMP)  ; LAB_00480434
    CMP dword ptr [EBX + 0x1908],0xa    ; 00480451
    JGE 0x004804e5                      ; 00480458
        ;   XREF to: 004804e5 (CONDITIONAL_JUMP)  ; LAB_004804e5
    PUSH EDI                            ; 0048045e
        ;   Label: LAB_0048045e
    MOV EDI,ESI                         ; 0048045f
    SUB ECX,ECX                         ; 00480461
    DEC ECX                             ; 00480463
    XOR EAX,EAX                         ; 00480464
    SCASB.REPNE ES:EDI                  ; 00480466
    NOT ECX                             ; 00480468
    DEC ECX                             ; 0048046a
    CMP ECX,0x20                        ; 0048046b
    JC 0x00480494                       ; 0048046e
        ;   XREF to: 00480494 (CONDITIONAL_JUMP)  ; LAB_00480494
    PUSH ESI                            ; 00480470
    MOV EDX,0x580a86                    ; 00480471 | = "..\\core\\event.cpp"
    MOV ECX,0xa3d                       ; 00480476
    PUSH 0x580a98                       ; 0048047b | = "Event name %s too long!"
    MOV dword ptr [0x01cc4800],EDX      ; 00480480 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00480486 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0048048c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00480491
    MOV EDI,dword ptr [EBX + 0x1908]    ; 00480494
        ;   Label: LAB_00480494
    LEA EDX,[EBX + 0x190c]              ; 0048049a
    SHL EDI,0x5                         ; 004804a0
    ADD EDI,EDX                         ; 004804a3
    PUSH EDI                            ; 004804a5
    MOV AL,byte ptr [ESI]               ; 004804a6
        ;   Label: LAB_004804a6
    MOV byte ptr [EDI],AL               ; 004804a8
    CMP AL,0x0                          ; 004804aa
    JZ 0x004804be                       ; 004804ac
        ;   XREF to: 004804be (CONDITIONAL_JUMP)  ; LAB_004804be
    MOV AL,byte ptr [ESI + 0x1]         ; 004804ae
    ADD ESI,0x2                         ; 004804b1
    MOV byte ptr [EDI + 0x1],AL         ; 004804b4
    ADD EDI,0x2                         ; 004804b7
    CMP AL,0x0                          ; 004804ba
    JNZ 0x004804a6                      ; 004804bc
        ;   XREF to: 004804a6 (CONDITIONAL_JUMP)  ; LAB_004804a6
    POP EDI                             ; 004804be
        ;   Label: LAB_004804be
    MOV EAX,dword ptr [EBX + 0x1908]    ; 004804bf
    SHL EAX,0x5                         ; 004804c5
    ADD EDX,EAX                         ; 004804c8
    PUSH EDX                            ; 004804ca
    CALL crt_string.c_strupr_FUN_00566ad0 ; 004804cb
        ;   XREF to: 00566ad0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_strupr_FUN_00566ad0()
    MOV ESI,dword ptr [EBX + 0x1908]    ; 004804d0
    INC ESI                             ; 004804d6
    ADD ESP,0x4                         ; 004804d7
    MOV dword ptr [EBX + 0x1908],ESI    ; 004804da
    POP EDI                             ; 004804e0
    POP EBP                             ; 004804e1
    POP ESI                             ; 004804e2
    POP EBX                             ; 004804e3
    RET                                 ; 004804e4
    MOV EBP,0x580a5f                    ; 004804e5 | = "..\\core\\event.cpp"
        ;   Label: LAB_004804e5
    MOV EAX,0xa37                       ; 004804ea
    PUSH 0x580a71                       ; 004804ef | = "Too many game flags!"
    MOV dword ptr [0x01cc4800],EBP      ; 004804f4 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004804fa | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004804ff
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00480504
    JMP 0x0048045e                      ; 00480507
        ;   XREF to: 0048045e (UNCONDITIONAL_JUMP)  ; LAB_0048045e
    TEST EAX,EAX                        ; 0048050c
        ;   Label: LAB_0048050c
    JL 0x00480434                       ; 0048050e
        ;   XREF to: 00480434 (CONDITIONAL_JUMP)  ; LAB_00480434
    MOV ECX,dword ptr [EBX + 0x1908]    ; 00480514
    DEC ECX                             ; 0048051a
    MOV EDX,ECX                         ; 0048051b
    SUB EDX,EAX                         ; 0048051d
    ADD EBX,0x190c                      ; 0048051f
    SHL EDX,0x5                         ; 00480525
    SHL EAX,0x5                         ; 00480528
    PUSH EDX                            ; 0048052b
    LEA EDX,[EAX + 0x20]                ; 0048052c
    ADD EDX,EBX                         ; 0048052f
    PUSH EDX                            ; 00480531
    ADD EAX,EBX                         ; 00480532
    PUSH EAX                            ; 00480534
    MOV dword ptr [EBX + -0x4],ECX      ; 00480535
    CALL crt_string.c_memmove_FUN_00566170 ; 00480538
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0048053d
    POP EBP                             ; 00480540
    POP ESI                             ; 00480541
    POP EBX                             ; 00480542
    RET                                 ; 00480543

