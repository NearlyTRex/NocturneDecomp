; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004770c0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00538160 at 00538165
;
; Called Functions:
;   FUN_00472af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004770c0
        ;   Label: FUN_004770c0
    PUSH ESI                            ; 004770c1
    PUSH EDI                            ; 004770c2
    PUSH EBP                            ; 004770c3
    SUB ESP,0x8                         ; 004770c4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004770c7
    XOR EDX,EDX                         ; 004770cb
    MOV ECX,dword ptr [EBP + 0x40]      ; 004770cd
    MOV dword ptr [ESP],EDX             ; 004770d0
    TEST ECX,ECX                        ; 004770d3
    JLE 0x00477129                      ; 004770d5
        ;   XREF to: 00477129 (CONDITIONAL_JUMP)  ; LAB_00477129
    XOR EDI,EDI                         ; 004770d7
        ;   Label: LAB_004770d7
    MOV EAX,dword ptr [EBP + 0x44]      ; 004770d9
    MOV dword ptr [ESP + 0x4],EDI       ; 004770dc
    TEST EAX,EAX                        ; 004770e0
    JLE 0x0047711b                      ; 004770e2
        ;   XREF to: 0047711b (CONDITIONAL_JUMP)  ; LAB_0047711b
    MOV ESI,dword ptr [EBP + 0x48]      ; 004770e4
        ;   Label: LAB_004770e4
    XOR EBX,EBX                         ; 004770e7
    TEST ESI,ESI                        ; 004770e9
    JLE 0x0047710b                      ; 004770eb
        ;   XREF to: 0047710b (CONDITIONAL_JUMP)  ; LAB_0047710b
    PUSH EBX                            ; 004770ed
        ;   Label: LAB_004770ed
    MOV EAX,dword ptr [ESP + 0x8]       ; 004770ee
    PUSH EAX                            ; 004770f2
    MOV EDX,dword ptr [ESP + 0x8]       ; 004770f3
    PUSH EDX                            ; 004770f7
    PUSH EBP                            ; 004770f8
    CALL FUN_00472af0                   ; 004770f9
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00472af0()
    ADD ESP,0x10                        ; 004770fe
    TEST EAX,EAX                        ; 00477101
    JNZ 0x00477131                      ; 00477103
        ;   XREF to: 00477131 (CONDITIONAL_JUMP)  ; LAB_00477131
    INC EBX                             ; 00477105
        ;   Label: LAB_00477105
    CMP EBX,dword ptr [EBP + 0x48]      ; 00477106
    JL 0x004770ed                       ; 00477109
        ;   XREF to: 004770ed (CONDITIONAL_JUMP)  ; LAB_004770ed
    MOV EDX,dword ptr [ESP + 0x4]       ; 0047710b
        ;   Label: LAB_0047710b
    INC EDX                             ; 0047710f
    MOV ECX,dword ptr [EBP + 0x44]      ; 00477110
    MOV dword ptr [ESP + 0x4],EDX       ; 00477113
    CMP EDX,ECX                         ; 00477117
    JL 0x004770e4                       ; 00477119
        ;   XREF to: 004770e4 (CONDITIONAL_JUMP)  ; LAB_004770e4
    MOV EBX,dword ptr [ESP]             ; 0047711b
        ;   Label: LAB_0047711b
    INC EBX                             ; 0047711e
    MOV ESI,dword ptr [EBP + 0x40]      ; 0047711f
    MOV dword ptr [ESP],EBX             ; 00477122
    CMP EBX,ESI                         ; 00477125
    JL 0x004770d7                       ; 00477127
        ;   XREF to: 004770d7 (CONDITIONAL_JUMP)  ; LAB_004770d7
    ADD ESP,0x8                         ; 00477129
        ;   Label: LAB_00477129
    POP EBP                             ; 0047712c
    POP EDI                             ; 0047712d
    POP ESI                             ; 0047712e
    POP EBX                             ; 0047712f
    RET                                 ; 00477130
    MOV ECX,dword ptr [EAX]             ; 00477131
        ;   Label: LAB_00477131
    TEST ECX,ECX                        ; 00477133
    JZ 0x00477105                       ; 00477135
        ;   XREF to: 00477105 (CONDITIONAL_JUMP)  ; LAB_00477105
    MOV ESI,dword ptr [EAX + 0x4]       ; 00477137
    TEST ESI,ESI                        ; 0047713a
    JZ 0x00477105                       ; 0047713c
        ;   XREF to: 00477105 (CONDITIONAL_JUMP)  ; LAB_00477105
    MOV EDI,ECX                         ; 0047713e
    MOV ECX,0x40                        ; 00477140
    PUSH EDI                            ; 00477145
    MOV EAX,ECX                         ; 00477146
    SHR ECX,0x2                         ; 00477148
    MOVSD.REP ES:EDI,ESI                ; 0047714b
    MOV CL,AL                           ; 0047714d
    AND CL,0x3                          ; 0047714f
    MOVSB.REP ES:EDI,ESI                ; 00477152
    POP EDI                             ; 00477154
    JMP 0x00477105                      ; 00477155
        ;   XREF to: 00477105 (UNCONDITIONAL_JUMP)  ; LAB_00477105

