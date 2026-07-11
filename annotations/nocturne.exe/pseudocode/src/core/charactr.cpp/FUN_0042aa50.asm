; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042aa50(int param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004fcd90 at 004fcf03
;   FUN_0053f310 at 0053f644
;
; Referenced Globals:
;   string s_..\\core\\charactr.cpp_0057a410
;   string s_CCharacter::chooseNextLayerActio_0057a425
;   undefined4 DAT_0057a462
;   undefined4 DAT_0057a46a
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042aa50
        ;   Label: FUN_0042aa50
    PUSH ESI                            ; 0042aa51
    PUSH EDI                            ; 0042aa52
    PUSH EBP                            ; 0042aa53
    MOV EBP,ESP                         ; 0042aa54
    SUB ESP,0x18                        ; 0042aa56
    AND ESP,0xfffffff8                  ; 0042aa59
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042aa5c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042aa5f
    MOV EDX,dword ptr [EBX + 0x2a84]    ; 0042aa62
    TEST EDX,EDX                        ; 0042aa68
    JL 0x0042aa74                       ; 0042aa6a
        ;   XREF to: 0042aa74 (CONDITIONAL_JUMP)  ; LAB_0042aa74
    CMP EDX,dword ptr [EBX + 0x2620]    ; 0042aa6c
    JL 0x0042aa96                       ; 0042aa72
        ;   XREF to: 0042aa96 (CONDITIONAL_JUMP)  ; LAB_0042aa96
    MOV EDI,0x57a410                    ; 0042aa74 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_0042aa74
    MOV EAX,0xfb4                       ; 0042aa79
    PUSH 0x57a425                       ; 0042aa7e | = "CCharacter::chooseNextLayerAction - i..."
    MOV dword ptr [0x01cc4800],EDI      ; 0042aa83 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0042aa89 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0042aa8e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042aa93
    FLD float ptr [EBX + 0x2a88]        ; 0042aa96
        ;   Label: LAB_0042aa96
    FST double ptr [ESP]                ; 0042aa9c
    FCOMP double ptr [0x0057a462]       ; 0042aa9f | DAT_0057a462
    FNSTSW AX                           ; 0042aaa5
    SAHF                                ; 0042aaa7
    JNC 0x0042ab1d                      ; 0042aaa8
        ;   XREF to: 0042ab1d (CONDITIONAL_JUMP)  ; LAB_0042ab1d
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 0042aaae
    SHL EAX,0x3                         ; 0042aab4
    MOV EDX,EAX                         ; 0042aab7
    SHL EAX,0x3                         ; 0042aab9
    SUB EAX,EDX                         ; 0042aabc
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2624] ; 0042aabe
    MOV dword ptr [ESP + 0x8],EAX       ; 0042aac5
        ;   Label: LAB_0042aac5
    CMP ESI,dword ptr [ESP + 0x8]       ; 0042aac9
    JZ 0x0042ab16                       ; 0042aacd
        ;   XREF to: 0042ab16 (CONDITIONAL_JUMP)  ; LAB_0042ab16
    MOV ECX,0x4479c000                  ; 0042aacf
    MOV EDI,dword ptr [EBX + 0x2620]    ; 0042aad4
    MOV dword ptr [ESP + 0x14],ECX      ; 0042aada
    XOR ECX,ECX                         ; 0042aade
    TEST EDI,EDI                        ; 0042aae0
    JLE 0x0042ab16                      ; 0042aae2
        ;   XREF to: 0042ab16 (CONDITIONAL_JUMP)  ; LAB_0042ab16
    SHL ESI,0x2                         ; 0042aae4
    LEA EDX,[EBX + 0x2624]              ; 0042aae7
    MOV EDI,dword ptr [EDX + 0x28]      ; 0042aaed
        ;   Label: LAB_0042aaed
    MOV EAX,EDX                         ; 0042aaf0
    TEST EDI,EDI                        ; 0042aaf2
    JL 0x0042aafe                       ; 0042aaf4
        ;   XREF to: 0042aafe (CONDITIONAL_JUMP)  ; LAB_0042aafe
    MOV EDI,dword ptr [EDX]             ; 0042aaf6
    CMP EDI,dword ptr [ESP + 0x8]       ; 0042aaf8
    JZ 0x0042ab44                       ; 0042aafc
        ;   XREF to: 0042ab44 (CONDITIONAL_JUMP)  ; LAB_0042ab44
    CMP dword ptr [EAX + 0x28],0x0      ; 0042aafe
        ;   Label: LAB_0042aafe
    JLE 0x0042ab7b                      ; 0042ab02
        ;   XREF to: 0042ab7b (CONDITIONAL_JUMP)  ; LAB_0042ab7b
    INC ECX                             ; 0042ab08
        ;   Label: LAB_0042ab08
    MOV EAX,dword ptr [EBX + 0x2620]    ; 0042ab09
    ADD EDX,0x38                        ; 0042ab0f
    CMP ECX,EAX                         ; 0042ab12
    JL 0x0042aaed                       ; 0042ab14
        ;   XREF to: 0042aaed (CONDITIONAL_JUMP)  ; LAB_0042aaed
    MOV ESP,EBP                         ; 0042ab16
        ;   Label: LAB_0042ab16
    POP EBP                             ; 0042ab18
    POP EDI                             ; 0042ab19
    POP ESI                             ; 0042ab1a
    POP EBX                             ; 0042ab1b
    RET                                 ; 0042ab1c
    FLD double ptr [ESP]                ; 0042ab1d
        ;   Label: LAB_0042ab1d
    FCOMP double ptr [0x0057a46a]       ; 0042ab20 | DAT_0057a46a
    FNSTSW AX                           ; 0042ab26
    SAHF                                ; 0042ab28
    JBE 0x0042ab16                      ; 0042ab29
        ;   XREF to: 0042ab16 (CONDITIONAL_JUMP)  ; LAB_0042ab16
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 0042ab2b
    SHL EAX,0x3                         ; 0042ab31
    MOV EDX,EAX                         ; 0042ab34
    SHL EAX,0x3                         ; 0042ab36
    SUB EAX,EDX                         ; 0042ab39
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2628] ; 0042ab3b
    JMP 0x0042aac5                      ; 0042ab42
        ;   XREF to: 0042aac5 (UNCONDITIONAL_JUMP)  ; LAB_0042aac5
    IMUL EAX,dword ptr [EDX + 0x4],0x50 ; 0042ab44
        ;   Label: LAB_0042ab44
    ADD EAX,EBX                         ; 0042ab48
    FLD float ptr [EDX + 0x34]          ; 0042ab4a
    FADD float ptr [ESI + EAX*0x1 + 0xb64c] ; 0042ab4d
    FST float ptr [ESP + 0xc]           ; 0042ab54
    FCOMP float ptr [ESP + 0x14]        ; 0042ab58
    FNSTSW AX                           ; 0042ab5c
    SAHF                                ; 0042ab5e
    JNC 0x0042ab08                      ; 0042ab5f
        ;   XREF to: 0042ab08 (CONDITIONAL_JUMP)  ; LAB_0042ab08
    MOV dword ptr [EBX + 0x2a88],0x0    ; 0042ab61
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042ab6b
    MOV dword ptr [EBX + 0x2a84],ECX    ; 0042ab6f
    MOV dword ptr [ESP + 0x14],EAX      ; 0042ab75
    JMP 0x0042ab08                      ; 0042ab79
        ;   XREF to: 0042ab08 (UNCONDITIONAL_JUMP)  ; LAB_0042ab08
    MOV EDI,dword ptr [EAX + 0x4]       ; 0042ab7b
        ;   Label: LAB_0042ab7b
    CMP EDI,dword ptr [ESP + 0x8]       ; 0042ab7e
    JNZ 0x0042ab08                      ; 0042ab82
        ;   XREF to: 0042ab08 (CONDITIONAL_JUMP)  ; LAB_0042ab08
    IMUL EDI,dword ptr [EAX],0x50       ; 0042ab84
    ADD EDI,EBX                         ; 0042ab87
    ADD EDI,ESI                         ; 0042ab89
    FLD float ptr [EAX + 0x34]          ; 0042ab8b
    FADD float ptr [EDI + 0xb64c]       ; 0042ab8e
    FST float ptr [ESP + 0x10]          ; 0042ab94
    FCOMP float ptr [ESP + 0x14]        ; 0042ab98
    FNSTSW AX                           ; 0042ab9c
    SAHF                                ; 0042ab9e
    JNC 0x0042ab08                      ; 0042ab9f
        ;   XREF to: 0042ab08 (CONDITIONAL_JUMP)  ; LAB_0042ab08
    MOV dword ptr [EBX + 0x2a88],0x3f800000 ; 0042aba5
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042abaf
    MOV dword ptr [EBX + 0x2a84],ECX    ; 0042abb3
    MOV dword ptr [ESP + 0x14],EAX      ; 0042abb9
    JMP 0x0042ab08                      ; 0042abbd
        ;   XREF to: 0042ab08 (UNCONDITIONAL_JUMP)  ; LAB_0042ab08

