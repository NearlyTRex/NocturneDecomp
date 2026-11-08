; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042c0d0(int param_1,undefined4 param_2,undefined4 *param_3,float param_4)
;
;
; XREF[1]:
;   FUN_004d43e0 at 004d43fd
;
; Called Functions:
;   FUN_0042abb0
;   FUN_00431ce0
;   FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c0d0
        ;   Label: FUN_0042c0d0
    PUSH ESI                            ; 0042c0d1
    SUB ESP,0x3c                        ; 0042c0d2
    MOV EBX,dword ptr [ESP + 0x48]      ; 0042c0d5
    MOV ESI,dword ptr [ESP + 0x50]      ; 0042c0d9
    PUSH EBX                            ; 0042c0dd
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042c0de
    CALL dword ptr [EAX + 0x10c]        ; 0042c0e4
    ADD ESP,0x4                         ; 0042c0ea
    TEST EAX,EAX                        ; 0042c0ed
    JLE 0x0042c0f7                      ; 0042c0ef
        ;   XREF to: 0042c0f7 (CONDITIONAL_JUMP)  ; LAB_0042c0f7
    ADD ESP,0x3c                        ; 0042c0f1
    POP ESI                             ; 0042c0f4
    POP EBX                             ; 0042c0f5
    RET                                 ; 0042c0f6
    MOV EDX,dword ptr [EBX + 0xbc64]    ; 0042c0f7
        ;   Label: LAB_0042c0f7
    PUSH EDX                            ; 0042c0fd
    CALL FUN_00556be0                   ; 0042c0fe
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 0042c103
    MOV EAX,ESP                         ; 0042c106
    PUSH EAX                            ; 0042c108
    CALL FUN_0042abb0                   ; 0042c109
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 0042c10e
    MOV ECX,0x461c3c00                  ; 0042c111
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042c116
    MOV dword ptr [ESP + 0x4],ECX       ; 0042c11a
    MOV dword ptr [ESP + 0x30],EAX      ; 0042c11e
    TEST ESI,ESI                        ; 0042c122
    JZ 0x0042c142                       ; 0042c124
        ;   XREF to: 0042c142 (CONDITIONAL_JUMP)  ; LAB_0042c142
    LEA EAX,[ESP + 0xc]                 ; 0042c126
    CMP EAX,ESI                         ; 0042c12a
    JZ 0x0042c142                       ; 0042c12c
        ;   XREF to: 0042c142 (CONDITIONAL_JUMP)  ; LAB_0042c142
    MOV EAX,dword ptr [ESI]             ; 0042c12e
    MOV dword ptr [ESP + 0xc],EAX       ; 0042c130
    MOV EAX,dword ptr [ESI + 0x4]       ; 0042c134
    MOV dword ptr [ESP + 0x10],EAX      ; 0042c137
    MOV EAX,dword ptr [ESI + 0x8]       ; 0042c13b
    MOV dword ptr [ESP + 0x14],EAX      ; 0042c13e
    FLD float ptr [ESP + 0x54]          ; 0042c142
        ;   Label: LAB_0042c142
    FLDZ                                ; 0042c146
    FCOMPP                              ; 0042c148
    FNSTSW AX                           ; 0042c14a
    SAHF                                ; 0042c14c
    JA 0x0042c157                       ; 0042c14d
        ;   XREF to: 0042c157 (CONDITIONAL_JUMP)  ; LAB_0042c157
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042c14f
    MOV dword ptr [ESP + 0x18],EAX      ; 0042c153
    MOV ESI,ESP                         ; 0042c157
        ;   Label: LAB_0042c157
    PUSH ESI                            ; 0042c159
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042c15a
    PUSH EBX                            ; 0042c160
    CALL dword ptr [EAX + 0x108]        ; 0042c161
    ADD ESP,0x8                         ; 0042c167
    PUSH EBX                            ; 0042c16a
    CALL FUN_00431ce0                   ; 0042c16b
        ;   XREF to: 00431ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00431ce0()
    ADD ESP,0x4                         ; 0042c170
    ADD ESP,0x3c                        ; 0042c173
    POP ESI                             ; 0042c176
    POP EBX                             ; 0042c177
    RET                                 ; 0042c178

