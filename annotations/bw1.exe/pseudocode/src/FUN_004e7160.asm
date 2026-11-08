; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e7160(undefined4 param_1)
;
;
; Referenced Globals:
;   void* switchdataD_004e7128 = 004e7171
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e7160
        ;   Label: FUN_004e7160
    DEC EAX                             ; 004e7164
    CMP EAX,0xc                         ; 004e7165
    JA 0x004e71b3                       ; 004e7168
        ;   XREF to: 004e71b3 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4e7128]  ; 004e716a | caseD_1 | caseD_5 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5                         ; 004e7171
        ;   Label: caseD_1
    RET                                 ; 004e7176
    MOV EAX,0xf8                        ; 004e7177
        ;   Label: caseD_2
    RET                                 ; 004e717c
    MOV EAX,0x2                         ; 004e717d
        ;   Label: caseD_3
    RET                                 ; 004e7182
    MOV EAX,0xfa                        ; 004e7183
        ;   Label: caseD_4
    RET                                 ; 004e7188
    MOV EAX,0x4                         ; 004e7189
        ;   Label: caseD_6
    RET                                 ; 004e718e
    MOV EAX,0x3                         ; 004e718f
        ;   Label: caseD_7
    RET                                 ; 004e7194
    MOV EAX,0x6                         ; 004e7195
        ;   Label: caseD_8
    RET                                 ; 004e719a
    MOV EAX,0x1                         ; 004e719b
        ;   Label: caseD_9
    RET                                 ; 004e71a0
    MOV EAX,0xf9                        ; 004e71a1
        ;   Label: caseD_a
    RET                                 ; 004e71a6
    MOV EAX,0xfc                        ; 004e71a7
        ;   Label: caseD_c
    RET                                 ; 004e71ac
    MOV EAX,0x7                         ; 004e71ad
        ;   Label: caseD_d
    RET                                 ; 004e71b2
    MOV EAX,0xfd                        ; 004e71b3
        ;   Label: default
    RET                                 ; 004e71b8

