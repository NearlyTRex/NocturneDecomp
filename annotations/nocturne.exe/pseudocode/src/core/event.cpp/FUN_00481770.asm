; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481770(int *param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00580f3f
;   TerminatedCString s_CRuleList_remove_invalid_00580f51
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_string.c_memmove_FUN_00566170
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481770
        ;   Label: FUN_00481770
    PUSH ESI                            ; 00481771
    PUSH EDI                            ; 00481772
    PUSH EBP                            ; 00481773
    MOV EBX,dword ptr [ESP + 0x14]      ; 00481774
    MOV ESI,dword ptr [ESP + 0x18]      ; 00481778
    TEST ESI,ESI                        ; 0048177c
    JL 0x0048180d                       ; 0048177e
        ;   XREF to: 0048180d (CONDITIONAL_JUMP)  ; LAB_0048180d
    CMP ESI,dword ptr [EBX]             ; 00481784
    JGE 0x0048180d                      ; 00481786
        ;   XREF to: 0048180d (CONDITIONAL_JUMP)  ; LAB_0048180d
    MOV EBP,dword ptr [EBX]             ; 0048178c
        ;   Label: LAB_0048178c
    DEC EBP                             ; 0048178e
    MOV EDX,EBP                         ; 0048178f
    SUB EDX,ESI                         ; 00481791
    LEA EAX,[EDX*0x4 + 0x0]             ; 00481793
    SUB EAX,EDX                         ; 0048179a
    LEA ECX,[EBX + 0x4]                 ; 0048179c
    SHL EAX,0x3                         ; 0048179f
    MOV dword ptr [EBX],EBP             ; 004817a2
    ADD EAX,EDX                         ; 004817a4
    LEA EDX,[ESI + 0x1]                 ; 004817a6
    SHL EAX,0x2                         ; 004817a9
    LEA EDI,[EDX*0x4 + 0x0]             ; 004817ac
    PUSH EAX                            ; 004817b3
    SUB EDI,EDX                         ; 004817b4
    LEA EBP,[ESI*0x4 + 0x0]             ; 004817b6
    SHL EDI,0x3                         ; 004817bd
    SUB EBP,ESI                         ; 004817c0
    ADD EDI,EDX                         ; 004817c2
    SHL EBP,0x3                         ; 004817c4
    SHL EDI,0x2                         ; 004817c7
    ADD EBP,ESI                         ; 004817ca
    LEA EAX,[ECX + EDI*0x1]             ; 004817cc
    SHL EBP,0x2                         ; 004817cf
    PUSH EAX                            ; 004817d2
    ADD ECX,EBP                         ; 004817d3
    PUSH ECX                            ; 004817d5
    CALL crt_string.c_memmove_FUN_00566170 ; 004817d6
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    MOV EDX,dword ptr [EBX]             ; 004817db
    SUB EDX,ESI                         ; 004817dd
    LEA EAX,[EDX*0x4 + 0x0]             ; 004817df
    SUB EAX,EDX                         ; 004817e6
    SHL EAX,0x3                         ; 004817e8
    ADD EAX,EDX                         ; 004817eb
    ADD ESP,0xc                         ; 004817ed
    SHL EAX,0x2                         ; 004817f0
    ADD EBX,0x1f8                       ; 004817f3
    PUSH EAX                            ; 004817f9
    ADD EDI,EBX                         ; 004817fa
    PUSH EDI                            ; 004817fc
    ADD EBX,EBP                         ; 004817fd
    PUSH EBX                            ; 004817ff
    CALL crt_string.c_memmove_FUN_00566170 ; 00481800
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 00481805
    POP EBP                             ; 00481808
    POP EDI                             ; 00481809
    POP ESI                             ; 0048180a
    POP EBX                             ; 0048180b
    RET                                 ; 0048180c
    MOV ECX,0x580f3f                    ; 0048180d | = "..\\core\\event.cpp"
        ;   Label: LAB_0048180d
    MOV EDI,0xcef                       ; 00481812
    PUSH 0x580f51                       ; 00481817 | = "CRuleList::remove - invalid index"
    MOV dword ptr [0x01cc4800],ECX      ; 0048181c | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00481822 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00481828
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0048182d
    JMP 0x0048178c                      ; 00481830
        ;   XREF to: 0048178c (UNCONDITIONAL_JUMP)  ; LAB_0048178c

