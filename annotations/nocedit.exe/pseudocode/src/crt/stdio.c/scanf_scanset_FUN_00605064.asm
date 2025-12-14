; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_scanf_scanset_FUN_00605064(scanf_state_t * state, va_list_t * args, char * * format_ptr)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
; va_list_t *      Stack[0x8]:4   args
; char * *         Stack[0xc]:4   format_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_stdio.c_doscan_FUN_00604950 at 00604b64
;
; Referenced Globals:
;   undefined4 DAT_00685030
;
; Called Functions:
;   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
;   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
;   crt_unknown.c_FUN_0060501c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00605064
        ;   Label: crt_stdio.c_scanf_scanset_FUN_00605064
    PUSH ESI                            ; 00605065
    PUSH EDI                            ; 00605066
    PUSH ES                             ; 00605067
    PUSH EBP                            ; 00605068
    SUB ESP,0x2c                        ; 00605069
    MOV EBX,dword ptr [ESP + 0x44]      ; 0060506c
    MOV EDI,dword ptr [ESP + 0x48]      ; 00605070
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00605074
    MOV EAX,dword ptr [EBP]             ; 00605078
    CMP byte ptr [EAX],0x5e             ; 0060507b
    SETZ DL                             ; 0060507e
    AND EDX,0xff                        ; 00605081
    MOV dword ptr [ESP + 0x24],EDX      ; 00605087
    JZ 0x00605091                       ; 0060508b
        ;   XREF to: 00605091 (CONDITIONAL_JUMP)  ; LAB_00605091
    INC EAX                             ; 0060508d
    MOV dword ptr [EBP],EAX             ; 0060508e
    MOV EAX,ESP                         ; 00605091
        ;   Label: LAB_00605091
    PUSH EAX                            ; 00605093
    MOV EDX,dword ptr [EBP]             ; 00605094
    PUSH EDX                            ; 00605097
    CALL crt_unknown.c_FUN_0060501c     ; 00605098
        ;   XREF to: 0060501c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060501c()
    MOV dword ptr [EBP],EAX             ; 0060509d
    MOV CL,byte ptr [EBX + 0x10]        ; 006050a0
    ADD ESP,0x8                         ; 006050a3
    TEST CL,0x1                         ; 006050a6
    JZ 0x006050df                       ; 006050a9
        ;   XREF to: 006050df (CONDITIONAL_JUMP)  ; LAB_006050df
    TEST CL,0x4                         ; 006050ab
    JZ 0x006050bc                       ; 006050ae
        ;   XREF to: 006050bc (CONDITIONAL_JUMP)  ; LAB_006050bc
    MOV EBP,dword ptr [EDI]             ; 006050b0
    ADD EBP,0x8                         ; 006050b2
    MOV dword ptr [EDI],EBP             ; 006050b5
    LES ESI,[EBP + -0x8]                ; 006050b7
    JMP 0x006050df                      ; 006050ba
        ;   XREF to: 006050df (UNCONDITIONAL_JUMP)  ; LAB_006050df
    TEST CL,0x8                         ; 006050bc
        ;   Label: LAB_006050bc
    JZ 0x006050d1                       ; 006050bf
        ;   XREF to: 006050d1 (CONDITIONAL_JUMP)  ; LAB_006050d1
    MOV ESI,dword ptr [EDI]             ; 006050c1
    ADD ESI,0x4                         ; 006050c3
    MOV AX,DS                           ; 006050c6
    MOV dword ptr [EDI],ESI             ; 006050c8
    MOV ES,AX                           ; 006050ca
    MOV ESI,dword ptr [ESI + -0x4]      ; 006050cc
    JMP 0x006050df                      ; 006050cf
        ;   XREF to: 006050df (UNCONDITIONAL_JUMP)  ; LAB_006050df
    MOV ECX,dword ptr [EDI]             ; 006050d1
        ;   Label: LAB_006050d1
    ADD ECX,0x4                         ; 006050d3
    MOV AX,DS                           ; 006050d6
    MOV dword ptr [EDI],ECX             ; 006050d8
    MOV ES,AX                           ; 006050da
    MOV ESI,dword ptr [ECX + -0x4]      ; 006050dc
    MOV EDI,dword ptr [EBX + 0xc]       ; 006050df
        ;   Label: LAB_006050df
    XOR EBP,EBP                         ; 006050e2
    TEST EDI,EDI                        ; 006050e4
    JBE 0x0060515e                      ; 006050e6
        ;   XREF to: 0060515e (CONDITIONAL_JUMP)  ; LAB_0060515e
    PUSH EBX                            ; 006050ec
        ;   Label: LAB_006050ec
    CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930 ; 006050ed
        ;   XREF to: 00604930 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
    ADD ESP,0x4                         ; 006050f2
    MOV DL,byte ptr [EBX + 0x10]        ; 006050f5
    MOV dword ptr [ESP + 0x28],EAX      ; 006050f8
    TEST DL,0x2                         ; 006050fc
    JNZ 0x0060515e                      ; 006050ff
        ;   XREF to: 0060515e (CONDITIONAL_JUMP)  ; LAB_0060515e
    MOV EDX,EAX                         ; 00605101
    SAR EDX,0x3                         ; 00605103
    MOV DL,byte ptr [ESP + EDX*0x1]     ; 00605106
    AND EDX,0xff                        ; 00605109
    MOV dword ptr [ESP + 0x20],EDX      ; 0060510f
    MOV EDX,EAX                         ; 00605113
    AND EDX,0x7                         ; 00605115
    MOV DL,byte ptr [EDX + 0x685030]    ; 00605118 | DAT_00685030
    MOV ECX,dword ptr [ESP + 0x20]      ; 0060511e
    AND EDX,0xff                        ; 00605122
    TEST EDX,ECX                        ; 00605128
    SETZ DL                             ; 0060512a
    MOV ECX,dword ptr [ESP + 0x24]      ; 0060512d
    AND EDX,0xff                        ; 00605131
    CMP EDX,ECX                         ; 00605137
    JZ 0x00605147                       ; 00605139
        ;   XREF to: 00605147 (CONDITIONAL_JUMP)  ; LAB_00605147
    PUSH EBX                            ; 0060513b
    PUSH EAX                            ; 0060513c
    CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c ; 0060513d
        ;   XREF to: 0060493c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c(int character, scanf_state_t * state)
    ADD ESP,0x8                         ; 00605142
    JMP 0x0060515e                      ; 00605145
        ;   XREF to: 0060515e (UNCONDITIONAL_JUMP)  ; LAB_0060515e
    INC EBP                             ; 00605147
        ;   Label: LAB_00605147
    MOV DH,byte ptr [EBX + 0x10]        ; 00605148
    DEC EDI                             ; 0060514b
    TEST DH,0x1                         ; 0060514c
    JZ 0x0060515a                       ; 0060514f
        ;   XREF to: 0060515a (CONDITIONAL_JUMP)  ; LAB_0060515a
    INC ESI                             ; 00605151
    MOV AL,byte ptr [ESP + 0x28]        ; 00605152
    MOV byte ptr ES:[ESI + -0x1],AL     ; 00605156
    TEST EDI,EDI                        ; 0060515a
        ;   Label: LAB_0060515a
    JA 0x006050ec                       ; 0060515c
        ;   XREF to: 006050ec (CONDITIONAL_JUMP)  ; LAB_006050ec
    TEST byte ptr [EBX + 0x10],0x1      ; 0060515e
        ;   Label: LAB_0060515e
    JZ 0x0060516c                       ; 00605162
        ;   XREF to: 0060516c (CONDITIONAL_JUMP)  ; LAB_0060516c
    TEST EBP,EBP                        ; 00605164
    JLE 0x0060516c                      ; 00605166
        ;   XREF to: 0060516c (CONDITIONAL_JUMP)  ; LAB_0060516c
    MOV byte ptr ES:[ESI],0x0           ; 00605168
    MOV EAX,EBP                         ; 0060516c
        ;   Label: LAB_0060516c
    ADD ESP,0x2c                        ; 0060516e
    POP EBP                             ; 00605171
    POP ES                              ; 00605172
    POP EDI                             ; 00605173
    POP ESI                             ; 00605174
    POP EBX                             ; 00605175
    RET                                 ; 00605176

