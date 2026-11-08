; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cfaf0(undefined4 param_1)
;
;
; Referenced Globals:
;   void* switchdataD_004cfab8 = 004cfb01
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfaf0
        ;   Label: FUN_004cfaf0
    DEC EAX                             ; 004cfaf4
    CMP EAX,0xc                         ; 004cfaf5
    JA 0x004cfb43                       ; 004cfaf8
        ;   XREF to: 004cfb43 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4cfab8]  ; 004cfafa | caseD_1 | caseD_5 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5                         ; 004cfb01
        ;   Label: caseD_1
    RET                                 ; 004cfb06
    MOV EAX,0xf8                        ; 004cfb07
        ;   Label: caseD_2
    RET                                 ; 004cfb0c
    MOV EAX,0x2                         ; 004cfb0d
        ;   Label: caseD_3
    RET                                 ; 004cfb12
    MOV EAX,0xfa                        ; 004cfb13
        ;   Label: caseD_4
    RET                                 ; 004cfb18
    MOV EAX,0x4                         ; 004cfb19
        ;   Label: caseD_6
    RET                                 ; 004cfb1e
    MOV EAX,0x3                         ; 004cfb1f
        ;   Label: caseD_7
    RET                                 ; 004cfb24
    MOV EAX,0x6                         ; 004cfb25
        ;   Label: caseD_8
    RET                                 ; 004cfb2a
    MOV EAX,0x1                         ; 004cfb2b
        ;   Label: caseD_9
    RET                                 ; 004cfb30
    MOV EAX,0xf9                        ; 004cfb31
        ;   Label: caseD_a
    RET                                 ; 004cfb36
    MOV EAX,0xfc                        ; 004cfb37
        ;   Label: caseD_c
    RET                                 ; 004cfb3c
    MOV EAX,0x7                         ; 004cfb3d
        ;   Label: caseD_d
    RET                                 ; 004cfb42
    MOV EAX,0xfd                        ; 004cfb43
        ;   Label: default
    RET                                 ; 004cfb48

