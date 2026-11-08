; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ab0c8(uint param_1)
;
;
; XREF[5]:
;   FUN_0044d610 at 0044d68e
;   FUN_00451d90 at 00451e13
;   FUN_00455100 at 0045513a
;   FUN_00455150 at 0045518a
;   FUN_00462770 at 004627b9
;
; Referenced Globals:
;   void* switchdataD_0061bee4 = 004ab0eb
;   undefined4 DAT_0061bf24
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ab0c8
        ;   Label: FUN_004ab0c8
    PUSH EBX                            ; 004ab0cc
    SUB EAX,0x8                         ; 004ab0cd
    JBE 0x004ab0fb                      ; 004ab0d0
        ;   XREF to: 004ab0fb (CONDITIONAL_JUMP)  ; LAB_004ab0fb
    MOV EBX,ECX                         ; 004ab0d2
    NEG EBX                             ; 004ab0d4
    AND EBX,0x7                         ; 004ab0d6
    ADD ECX,EBX                         ; 004ab0d9
    ADD EDX,EBX                         ; 004ab0db
    SUB EAX,EBX                         ; 004ab0dd
    JMP dword ptr [EBX*0x4 + 0x61bee4]  ; 004ab0df | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    FISTP qword ptr [ECX + -0x8]        ; 004ab0e8
        ;   Label: LAB_004ab0e8
    FILD qword ptr [EDX]                ; 004ab0eb
        ;   Label: caseD_0
    ADD ECX,0x8                         ; 004ab0ed
    ADD EDX,0x8                         ; 004ab0f0
    SUB EAX,0x8                         ; 004ab0f3
    JA 0x004ab0e8                       ; 004ab0f6
        ;   XREF to: 004ab0e8 (CONDITIONAL_JUMP)  ; LAB_004ab0e8
    FISTP qword ptr [ECX + -0x8]        ; 004ab0f8
    POP EBX                             ; 004ab0fb
        ;   Label: LAB_004ab0fb
    JMP dword ptr [EAX*0x4 + 0x61bf24]  ; 004ab0fc | DAT_0061bf24
    MOV BL,byte ptr [EDX + -0x7]        ; 004ab104
        ;   Label: caseD_7
    MOV byte ptr [ECX + -0x7],BL        ; 004ab107
    MOV BX,word ptr [EDX + -0x6]        ; 004ab10a
        ;   Label: caseD_6
    MOV word ptr [ECX + -0x6],BX        ; 004ab10e
    MOV EBX,dword ptr [EDX + -0x4]      ; 004ab112
        ;   Label: caseD_4
    MOV dword ptr [ECX + -0x4],EBX      ; 004ab115
    JA 0x004ab0eb                       ; 004ab118
        ;   XREF to: 004ab0eb (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004ab11a
    JMP dword ptr [EAX*0x4 + 0x61bf24]  ; 004ab11b | DAT_0061bf24
    MOV BL,byte ptr [EDX + -0x5]        ; 004ab124
        ;   Label: caseD_5
    MOV byte ptr [ECX + -0x5],BL        ; 004ab127
    MOV EBX,dword ptr [EDX + -0x4]      ; 004ab12a
    MOV dword ptr [ECX + -0x4],EBX      ; 004ab12d
    JA 0x004ab0eb                       ; 004ab130
        ;   XREF to: 004ab0eb (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004ab132
    JMP dword ptr [EAX*0x4 + 0x61bf24]  ; 004ab133 | DAT_0061bf24
    MOV BL,byte ptr [EDX + -0x3]        ; 004ab13c
        ;   Label: caseD_3
    MOV byte ptr [ECX + -0x3],BL        ; 004ab13f
    MOV BX,word ptr [EDX + -0x2]        ; 004ab142
        ;   Label: caseD_2
    MOV word ptr [ECX + -0x2],BX        ; 004ab146
    JA 0x004ab0eb                       ; 004ab14a
        ;   XREF to: 004ab0eb (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004ab14c
    JMP dword ptr [EAX*0x4 + 0x61bf24]  ; 004ab14d | DAT_0061bf24
    MOV BL,byte ptr [EDX + -0x1]        ; 004ab154
        ;   Label: caseD_1
    MOV byte ptr [ECX + -0x1],BL        ; 004ab157
    JA 0x004ab0eb                       ; 004ab15a
        ;   XREF to: 004ab0eb (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004ab15c
    JMP dword ptr [EAX*0x4 + 0x61bf24]  ; 004ab15d | DAT_0061bf24

