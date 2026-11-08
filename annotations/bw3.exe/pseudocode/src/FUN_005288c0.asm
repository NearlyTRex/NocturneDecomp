; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005288c0(int *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00528970 at 0052897c
;   FUN_00529a70 at 0052b8be
;
; Referenced Globals:
;   TerminatedCString s_No_opening_parenthesis_005cdbe6
;   TerminatedCString s_Argument_too_long_005cdbfd
;   TerminatedCString s_Can_t_find_closing_paren_005cdc0f
;
; Called Functions:
;   FUN_00528830
;   FUN_005288a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005288c0
        ;   Label: FUN_005288c0
    PUSH ESI                            ; 005288c1
    PUSH EDI                            ; 005288c2
    PUSH EBP                            ; 005288c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005288c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005288c8
    MOV EDX,dword ptr [EBX]             ; 005288cc
    PUSH EDX                            ; 005288ce
    CALL FUN_005288a0                   ; 005288cf
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005288a0()
    MOV dword ptr [EBX],EAX             ; 005288d4
    MOV DL,byte ptr [EAX]               ; 005288d6
    ADD ESP,0x4                         ; 005288d8
    CMP DL,0x28                         ; 005288db
    JNZ 0x0052891b                      ; 005288de
        ;   XREF to: 0052891b (CONDITIONAL_JUMP)  ; LAB_0052891b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005288e0
    XOR EAX,EAX                         ; 005288e4
    XOR EDX,EDX                         ; 005288e6
    TEST ECX,ECX                        ; 005288e8
    JLE 0x00528911                      ; 005288ea
        ;   XREF to: 00528911 (CONDITIONAL_JUMP)  ; LAB_00528911
    MOV EDI,dword ptr [EBX]             ; 005288ec
        ;   Label: LAB_005288ec
    INC EDI                             ; 005288ee
    MOV dword ptr [EBX],EDI             ; 005288ef
    MOV CL,byte ptr [EDI]               ; 005288f1
    MOV ESI,EDI                         ; 005288f3
    TEST CL,CL                          ; 005288f5
    JZ 0x00528925                       ; 005288f7
        ;   XREF to: 00528925 (CONDITIONAL_JUMP)  ; LAB_00528925
    CMP CL,0x28                         ; 005288f9
    JNZ 0x0052892f                      ; 005288fc
        ;   XREF to: 0052892f (CONDITIONAL_JUMP)  ; LAB_0052892f
    INC EAX                             ; 005288fe
    MOV ESI,dword ptr [EBX]             ; 005288ff
        ;   Label: LAB_005288ff
    MOV EDI,EDX                         ; 00528901
    INC EDX                             ; 00528903
    MOV CL,byte ptr [ESI]               ; 00528904
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00528906
    MOV byte ptr [EDI + EBP*0x1],CL     ; 0052890a
    CMP EDX,ESI                         ; 0052890d
    JL 0x005288ec                       ; 0052890f
        ;   XREF to: 005288ec (CONDITIONAL_JUMP)  ; LAB_005288ec
    MOV EAX,0x5cdbfd                    ; 00528911 | = "Argument too long"
        ;   Label: LAB_00528911
    POP EBP                             ; 00528916
    POP EDI                             ; 00528917
    POP ESI                             ; 00528918
    POP EBX                             ; 00528919
    RET                                 ; 0052891a
    MOV EAX,0x5cdbe6                    ; 0052891b | = "No opening parenthesis"
        ;   Label: LAB_0052891b
    POP EBP                             ; 00528920
    POP EDI                             ; 00528921
    POP ESI                             ; 00528922
    POP EBX                             ; 00528923
    RET                                 ; 00528924
    MOV EAX,0x5cdc0f                    ; 00528925 | = "Can't find closing parenthesis"
        ;   Label: LAB_00528925
    POP EBP                             ; 0052892a
    POP EDI                             ; 0052892b
    POP ESI                             ; 0052892c
    POP EBX                             ; 0052892d
    RET                                 ; 0052892e
    CMP CL,0x29                         ; 0052892f
        ;   Label: LAB_0052892f
    JNZ 0x005288ff                      ; 00528932
        ;   XREF to: 005288ff (CONDITIONAL_JUMP)  ; LAB_005288ff
    TEST EAX,EAX                        ; 00528934
    JZ 0x0052893b                       ; 00528936
        ;   XREF to: 0052893b (CONDITIONAL_JUMP)  ; LAB_0052893b
    DEC EAX                             ; 00528938
    JMP 0x005288ff                      ; 00528939
        ;   XREF to: 005288ff (UNCONDITIONAL_JUMP)  ; LAB_005288ff
    LEA ESI,[EDI + 0x1]                 ; 0052893b
        ;   Label: LAB_0052893b
    MOV dword ptr [EBX],ESI             ; 0052893e
    PUSH EBP                            ; 00528940
    MOV byte ptr [EDX + EBP*0x1],0x0    ; 00528941
    CALL FUN_00528830                   ; 00528945
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; undefined FUN_00528830()
    ADD ESP,0x4                         ; 0052894a
    MOV EBP,dword ptr [EBX]             ; 0052894d
    PUSH EBP                            ; 0052894f
    CALL FUN_005288a0                   ; 00528950
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005288a0()
    ADD ESP,0x4                         ; 00528955
    MOV dword ptr [EBX],EAX             ; 00528958
    XOR EAX,EAX                         ; 0052895a
    POP EBP                             ; 0052895c
    POP EDI                             ; 0052895d
    POP ESI                             ; 0052895e
    POP EBX                             ; 0052895f
    RET                                 ; 00528960

