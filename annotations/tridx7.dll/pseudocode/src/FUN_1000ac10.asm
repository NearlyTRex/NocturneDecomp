; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_1000ac10(int param_1,char *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_LC_CTYPE_10012734
;   TerminatedCString s_LC_COLLATE_10012740
;   undefined4 s_C_COLLATE_10012740+1
;   undefined4 DAT_10012754
;   undefined4 DAT_10012758
;   undefined1 DAT_10017788
;   undefined1 DAT_10017789
;   undefined1 DAT_1001778a
;   undefined1 DAT_1001778b
;   undefined4 DAT_10017794
;   undefined1* PTR_s_LC_COLLATE_1001779c = 10012740
;   undefined1* PTR_DAT_100177a0 = 10017788
;   undefined1* PTR_s_LC_CTYPE_100177a8 = 10012734
;   undefined1* PTR_s_LC_TIME_100177cc = 10012714
;   undefined1* PTR_DAT_100177d0 = 10017788
;   ... and 3 more
;
; Called Functions:
;   __lock
;   _strncpy
;   FUN_10005a10
;   FUN_10005b30
;   FUN_1000aee0
;   FUN_1000b060
;   FUN_1000b150
;   FUN_1000e290
;   FUN_1000e2d0
;   FUN_1000e310
;   Sleep
;
; *****************************************************************************

section .text

    SUB ESP,0x90                        ; 1000ac10
        ;   Label: FUN_1000ac10
    PUSH EBX                            ; 1000ac16
    PUSH ESI                            ; 1000ac17
    MOV EBX,dword ptr [ESP + 0x9c]      ; 1000ac18
    PUSH EDI                            ; 1000ac1f
    PUSH EBP                            ; 1000ac20
    TEST EBX,EBX                        ; 1000ac21
    JL 0x1000aec6                       ; 1000ac23
        ;   XREF to: 1000aec6 (CONDITIONAL_JUMP)  ; LAB_1000aec6
    CMP EBX,0x5                         ; 1000ac29
    JG 0x1000aec6                       ; 1000ac2c
        ;   XREF to: 1000aec6 (CONDITIONAL_JUMP)  ; LAB_1000aec6
    PUSH 0x13                           ; 1000ac32
    CALL __lock                         ; 1000ac34
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 1000ac39
    INC dword ptr [0x10240854]          ; 1000ac3c | DAT_10240854
    CMP dword ptr [0x10240858],0x0      ; 1000ac42 | DAT_10240858
    JZ 0x1000ac5f                       ; 1000ac49
        ;   XREF to: 1000ac5f (CONDITIONAL_JUMP)  ; LAB_1000ac5f
    MOV ESI,dword ptr [0x10242254]      ; 1000ac4b | PTR_Sleep_10242254
    XOR EDI,EDI                         ; 1000ac51
    PUSH 0x1                            ; 1000ac53
        ;   Label: LAB_1000ac53
    CALL ESI                            ; 1000ac55 | void Sleep(DWORD dwMilliseconds)
    CMP dword ptr [0x10240858],EDI      ; 1000ac57 | DAT_10240858
    JNZ 0x1000ac53                      ; 1000ac5d
        ;   XREF to: 1000ac53 (CONDITIONAL_JUMP)  ; LAB_1000ac53
    TEST EBX,EBX                        ; 1000ac5f
        ;   Label: LAB_1000ac5f
    JZ 0x1000ac8c                       ; 1000ac61
        ;   XREF to: 1000ac8c (CONDITIONAL_JUMP)  ; LAB_1000ac8c
    MOV ESI,dword ptr [ESP + 0xa8]      ; 1000ac63
    TEST ESI,ESI                        ; 1000ac6a
    JZ 0x1000ac7d                       ; 1000ac6c
        ;   XREF to: 1000ac7d (CONDITIONAL_JUMP)  ; LAB_1000ac7d
    PUSH ESI                            ; 1000ac6e
    PUSH EBX                            ; 1000ac6f
    CALL FUN_1000aee0                   ; 1000ac70
        ;   XREF to: 1000aee0 (UNCONDITIONAL_CALL)  ; undefined FUN_1000aee0()
    ADD ESP,0x8                         ; 1000ac75
    JMP 0x1000aea7                      ; 1000ac78
        ;   XREF to: 1000aea7 (UNCONDITIONAL_JUMP)  ; LAB_1000aea7
    LEA EAX,[EBX + EBX*0x2]             ; 1000ac7d
        ;   Label: LAB_1000ac7d
    MOV ESI,dword ptr [EAX*0x4 + 0x10017794] ; 1000ac80 | DAT_10017794
    JMP 0x1000aea9                      ; 1000ac87
        ;   XREF to: 1000aea9 (UNCONDITIONAL_JUMP)  ; LAB_1000aea9
    MOV EDI,0x1                         ; 1000ac8c
        ;   Label: LAB_1000ac8c
    MOV ESI,dword ptr [ESP + 0xa8]      ; 1000ac91
    MOV dword ptr [ESP + 0x14],0x0      ; 1000ac98
    TEST ESI,ESI                        ; 1000aca0
    JZ 0x1000aea2                       ; 1000aca2
        ;   XREF to: 1000aea2 (CONDITIONAL_JUMP)  ; LAB_1000aea2
    CMP byte ptr [ESI],0x4c             ; 1000aca8
    JNZ 0x1000adf1                      ; 1000acab
        ;   XREF to: 1000adf1 (CONDITIONAL_JUMP)  ; LAB_1000adf1
    CMP byte ptr [ESI + 0x1],0x43       ; 1000acb1
    JNZ 0x1000adf1                      ; 1000acb5
        ;   XREF to: 1000adf1 (CONDITIONAL_JUMP)  ; LAB_1000adf1
    CMP byte ptr [ESI + 0x2],0x5f       ; 1000acbb
    JNZ 0x1000adf1                      ; 1000acbf
        ;   XREF to: 1000adf1 (CONDITIONAL_JUMP)  ; LAB_1000adf1
    PUSH 0x10012758                     ; 1000acc5 | DAT_10012758
        ;   Label: LAB_1000acc5
    PUSH ESI                            ; 1000acca
    CALL FUN_1000e310                   ; 1000accb
        ;   XREF to: 1000e310 (UNCONDITIONAL_CALL)  ; undefined FUN_1000e310()
    MOV dword ptr [ESP + 0x18],EAX      ; 1000acd0
    ADD ESP,0x8                         ; 1000acd4
    TEST EAX,EAX                        ; 1000acd7
    JZ 0x1000add4                       ; 1000acd9
        ;   XREF to: 1000add4 (CONDITIONAL_JUMP)  ; LAB_1000add4
    MOV EBX,EAX                         ; 1000acdf
    SUB EBX,ESI                         ; 1000ace1
    JZ 0x1000add4                       ; 1000ace3
        ;   XREF to: 1000add4 (CONDITIONAL_JUMP)  ; LAB_1000add4
    CMP byte ptr [EAX],0x3b             ; 1000ace9
    JZ 0x1000add4                       ; 1000acec
        ;   XREF to: 1000add4 (CONDITIONAL_JUMP)  ; LAB_1000add4
    MOV dword ptr [ESP + 0x18],0x1      ; 1000acf2
    MOV EBP,0x1001779c                  ; 1000acfa | PTR_s_LC_COLLATE_1001779c
    PUSH EBX                            ; 1000acff
        ;   Label: LAB_1000acff
    MOV EAX,dword ptr [EBP]             ; 1000ad00 | PTR_s_LC_COLLATE_1001779c | PTR_s_LC_CTYPE_100177a8
    PUSH ESI                            ; 1000ad03
    PUSH EAX                            ; 1000ad04 | = "LC_COLLATE" | s_LC_CTYPE_10012734
    CALL FUN_1000e2d0                   ; 1000ad05
        ;   XREF to: 1000e2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_1000e2d0()
    ADD ESP,0xc                         ; 1000ad0a
    TEST EAX,EAX                        ; 1000ad0d
    JNZ 0x1000ad24                      ; 1000ad0f
        ;   XREF to: 1000ad24 (CONDITIONAL_JUMP)  ; LAB_1000ad24
    MOV EDI,dword ptr [EBP]             ; 1000ad11 | PTR_s_LC_COLLATE_1001779c
    MOV ECX,0xffffffff                  ; 1000ad14
    SUB EAX,EAX                         ; 1000ad19
    SCASB.REPNE ES:EDI                  ; 1000ad1b | = "LC_COLLATE" | s_C_COLLATE_10012740+1
    NOT ECX                             ; 1000ad1d
    DEC ECX                             ; 1000ad1f
    CMP ECX,EBX                         ; 1000ad20
    JZ 0x1000ad33                       ; 1000ad22
        ;   XREF to: 1000ad33 (CONDITIONAL_JUMP)  ; LAB_1000ad33
    ADD EBP,0xc                         ; 1000ad24
        ;   Label: LAB_1000ad24
    INC dword ptr [ESP + 0x18]          ; 1000ad27
    CMP EBP,0x100177cc                  ; 1000ad2b | PTR_s_LC_TIME_100177cc
    JBE 0x1000acff                      ; 1000ad31
        ;   XREF to: 1000acff (CONDITIONAL_JUMP)  ; LAB_1000acff
    INC dword ptr [ESP + 0x10]          ; 1000ad33
        ;   Label: LAB_1000ad33
    PUSH 0x10012754                     ; 1000ad37 | DAT_10012754
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000ad3c
    PUSH EAX                            ; 1000ad40
    CALL FUN_1000e290                   ; 1000ad41
        ;   XREF to: 1000e290 (UNCONDITIONAL_CALL)  ; undefined FUN_1000e290()
    ADD ESP,0x8                         ; 1000ad46
    MOV ESI,EAX                         ; 1000ad49
    TEST ESI,ESI                        ; 1000ad4b
    JNZ 0x1000ad58                      ; 1000ad4d
        ;   XREF to: 1000ad58 (CONDITIONAL_JUMP)  ; LAB_1000ad58
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000ad4f
    CMP byte ptr [EAX],0x3b             ; 1000ad53
    JNZ 0x1000adb0                      ; 1000ad56
        ;   XREF to: 1000adb0 (CONDITIONAL_JUMP)  ; LAB_1000adb0
    CMP dword ptr [ESP + 0x18],0x5      ; 1000ad58
        ;   Label: LAB_1000ad58
    JG 0x1000ad91                       ; 1000ad5d
        ;   XREF to: 1000ad91 (CONDITIONAL_JUMP)  ; LAB_1000ad91
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000ad5f
    PUSH ESI                            ; 1000ad63
    LEA ECX,[ESP + 0x20]                ; 1000ad64
    PUSH EAX                            ; 1000ad68
    PUSH ECX                            ; 1000ad69
    CALL _strncpy                       ; 1000ad6a
        ;   XREF to: 1000a9f0 (UNCONDITIONAL_CALL)  ; char * _strncpy(char * _Dest, char * _Source, size_t _Count)
    LEA ECX,[ESP + 0x28]                ; 1000ad6f
    MOV EDX,dword ptr [ESP + 0x24]      ; 1000ad73
    MOV byte ptr [ESP + ESI*0x1 + 0x28],0x0 ; 1000ad77
    ADD ESP,0xc                         ; 1000ad7c
    PUSH ECX                            ; 1000ad7f
    PUSH EDX                            ; 1000ad80
    CALL FUN_1000aee0                   ; 1000ad81
        ;   XREF to: 1000aee0 (UNCONDITIONAL_CALL)  ; undefined FUN_1000aee0()
    ADD ESP,0x8                         ; 1000ad86
    TEST EAX,EAX                        ; 1000ad89
    JZ 0x1000ad91                       ; 1000ad8b
        ;   XREF to: 1000ad91 (CONDITIONAL_JUMP)  ; LAB_1000ad91
    INC dword ptr [ESP + 0x14]          ; 1000ad8d
    ADD ESI,dword ptr [ESP + 0x10]      ; 1000ad91
        ;   Label: LAB_1000ad91
    CMP byte ptr [ESI],0x0              ; 1000ad95
    JZ 0x1000ada4                       ; 1000ad98
        ;   XREF to: 1000ada4 (CONDITIONAL_JUMP)  ; LAB_1000ada4
    INC ESI                             ; 1000ad9a
    CMP byte ptr [ESI],0x0              ; 1000ad9b
    JNZ 0x1000acc5                      ; 1000ad9e
        ;   XREF to: 1000acc5 (CONDITIONAL_JUMP)  ; LAB_1000acc5
    CMP dword ptr [ESP + 0x14],0x0      ; 1000ada4
        ;   Label: LAB_1000ada4
    JZ 0x1000adcd                       ; 1000ada9
        ;   XREF to: 1000adcd (CONDITIONAL_JUMP)  ; LAB_1000adcd
    JMP 0x1000aea2                      ; 1000adab
        ;   XREF to: 1000aea2 (UNCONDITIONAL_JUMP)  ; LAB_1000aea2
    PUSH 0x13                           ; 1000adb0
        ;   Label: LAB_1000adb0
    CALL FUN_10005a10                   ; 1000adb2
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000adb7
    XOR EAX,EAX                         ; 1000adba
    DEC dword ptr [0x10240854]          ; 1000adbc | DAT_10240854
    POP EBP                             ; 1000adc2
    POP EDI                             ; 1000adc3
    POP ESI                             ; 1000adc4
    POP EBX                             ; 1000adc5
    ADD ESP,0x90                        ; 1000adc6
    RET                                 ; 1000adcc
    XOR ESI,ESI                         ; 1000adcd
        ;   Label: LAB_1000adcd
    JMP 0x1000aea9                      ; 1000adcf
        ;   XREF to: 1000aea9 (UNCONDITIONAL_JUMP)  ; LAB_1000aea9
    PUSH 0x13                           ; 1000add4
        ;   Label: LAB_1000add4
    CALL FUN_10005a10                   ; 1000add6
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000addb
    XOR EAX,EAX                         ; 1000adde
    DEC dword ptr [0x10240854]          ; 1000ade0 | DAT_10240854
    POP EBP                             ; 1000ade6
    POP EDI                             ; 1000ade7
    POP ESI                             ; 1000ade8
    POP EBX                             ; 1000ade9
    ADD ESP,0x90                        ; 1000adea
    RET                                 ; 1000adf0
    LEA EAX,[ESP + 0x1c]                ; 1000adf1
        ;   Label: LAB_1000adf1
    PUSH EBX                            ; 1000adf5
    PUSH 0x0                            ; 1000adf6
    PUSH 0x0                            ; 1000adf8
    PUSH EAX                            ; 1000adfa
    PUSH ESI                            ; 1000adfb
    CALL FUN_1000b150                   ; 1000adfc
        ;   XREF to: 1000b150 (UNCONDITIONAL_CALL)  ; undefined FUN_1000b150()
    ADD ESP,0x14                        ; 1000ae01
    MOV ESI,EAX                         ; 1000ae04
    TEST ESI,ESI                        ; 1000ae06
    JZ 0x1000aea9                       ; 1000ae08
        ;   XREF to: 1000aea9 (CONDITIONAL_JUMP)  ; LAB_1000aea9
    XOR ESI,ESI                         ; 1000ae0e
    MOV EBX,0x10017794                  ; 1000ae10 | DAT_10017794
    CMP EBX,0x10017794                  ; 1000ae15 | DAT_10017794
        ;   Label: LAB_1000ae15
    JZ 0x1000ae66                       ; 1000ae1b
        ;   XREF to: 1000ae66 (CONDITIONAL_JUMP)  ; LAB_1000ae66
    LEA ECX,[ESP + 0x1c]                ; 1000ae1d
    MOV EDX,dword ptr [EBX]             ; 1000ae21 | PTR_DAT_100177a0 | DAT_10017794
    MOV AL,byte ptr [ECX]               ; 1000ae23
        ;   Label: LAB_1000ae23
    CMP AL,byte ptr [EDX]               ; 1000ae25 | DAT_10017788 | DAT_1001778a
    JNZ 0x1000ae43                      ; 1000ae27
        ;   XREF to: 1000ae43 (CONDITIONAL_JUMP)  ; LAB_1000ae43
    OR AL,AL                            ; 1000ae29
    JZ 0x1000ae3f                       ; 1000ae2b
        ;   XREF to: 1000ae3f (CONDITIONAL_JUMP)  ; LAB_1000ae3f
    MOV AL,byte ptr [ECX + 0x1]         ; 1000ae2d
    CMP AL,byte ptr [EDX + 0x1]         ; 1000ae30 | DAT_10017789 | DAT_1001778b
    JNZ 0x1000ae43                      ; 1000ae33
        ;   XREF to: 1000ae43 (CONDITIONAL_JUMP)  ; LAB_1000ae43
    ADD ECX,0x2                         ; 1000ae35
    ADD EDX,0x2                         ; 1000ae38
    OR AL,AL                            ; 1000ae3b
    JNZ 0x1000ae23                      ; 1000ae3d
        ;   XREF to: 1000ae23 (CONDITIONAL_JUMP)  ; LAB_1000ae23
    XOR EAX,EAX                         ; 1000ae3f
        ;   Label: LAB_1000ae3f
    JMP 0x1000ae48                      ; 1000ae41
        ;   XREF to: 1000ae48 (UNCONDITIONAL_JUMP)  ; LAB_1000ae48
    SBB EAX,EAX                         ; 1000ae43
        ;   Label: LAB_1000ae43
    SBB EAX,-0x1                        ; 1000ae45
    TEST EAX,EAX                        ; 1000ae48
        ;   Label: LAB_1000ae48
    JZ 0x1000ae62                       ; 1000ae4a
        ;   XREF to: 1000ae62 (CONDITIONAL_JUMP)  ; LAB_1000ae62
    LEA EAX,[ESP + 0x1c]                ; 1000ae4c
    PUSH EAX                            ; 1000ae50
    PUSH ESI                            ; 1000ae51
    CALL FUN_1000aee0                   ; 1000ae52
        ;   XREF to: 1000aee0 (UNCONDITIONAL_CALL)  ; undefined FUN_1000aee0()
    ADD ESP,0x8                         ; 1000ae57
    TEST EAX,EAX                        ; 1000ae5a
    JNZ 0x1000ae62                      ; 1000ae5c
        ;   XREF to: 1000ae62 (CONDITIONAL_JUMP)  ; LAB_1000ae62
    XOR EDI,EDI                         ; 1000ae5e
    JMP 0x1000ae66                      ; 1000ae60
        ;   XREF to: 1000ae66 (UNCONDITIONAL_JUMP)  ; LAB_1000ae66
    INC dword ptr [ESP + 0x14]          ; 1000ae62
        ;   Label: LAB_1000ae62
    ADD EBX,0xc                         ; 1000ae66
        ;   Label: LAB_1000ae66
    INC ESI                             ; 1000ae69
    CMP EBX,0x100177d0                  ; 1000ae6a | PTR_DAT_100177d0
    JBE 0x1000ae15                      ; 1000ae70
        ;   XREF to: 1000ae15 (CONDITIONAL_JUMP)  ; LAB_1000ae15
    TEST EDI,EDI                        ; 1000ae72
    JZ 0x1000ae97                       ; 1000ae74
        ;   XREF to: 1000ae97 (CONDITIONAL_JUMP)  ; LAB_1000ae97
    CALL FUN_1000b060                   ; 1000ae76
        ;   XREF to: 1000b060 (UNCONDITIONAL_CALL)  ; undefined FUN_1000b060()
    MOV ESI,EAX                         ; 1000ae7b
    MOV EAX,[0x10017794]                ; 1000ae7d | DAT_10017794
    PUSH EAX                            ; 1000ae82
    CALL FUN_10005b30                   ; 1000ae83
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    MOV dword ptr [0x10017794],0x0      ; 1000ae88 | DAT_10017794
    ADD ESP,0x4                         ; 1000ae92
    JMP 0x1000aea9                      ; 1000ae95
        ;   XREF to: 1000aea9 (UNCONDITIONAL_JUMP)  ; LAB_1000aea9
    CMP dword ptr [ESP + 0x14],0x0      ; 1000ae97
        ;   Label: LAB_1000ae97
    JNZ 0x1000aea2                      ; 1000ae9c
        ;   XREF to: 1000aea2 (CONDITIONAL_JUMP)  ; LAB_1000aea2
    XOR ESI,ESI                         ; 1000ae9e
    JMP 0x1000aea9                      ; 1000aea0
        ;   XREF to: 1000aea9 (UNCONDITIONAL_JUMP)  ; LAB_1000aea9
    CALL FUN_1000b060                   ; 1000aea2
        ;   XREF to: 1000b060 (UNCONDITIONAL_CALL)  ; undefined FUN_1000b060()
        ;   Label: LAB_1000aea2
    MOV ESI,EAX                         ; 1000aea7
        ;   Label: LAB_1000aea7
    PUSH 0x13                           ; 1000aea9
        ;   Label: LAB_1000aea9
    CALL FUN_10005a10                   ; 1000aeab
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000aeb0
    MOV EAX,ESI                         ; 1000aeb3
    DEC dword ptr [0x10240854]          ; 1000aeb5 | DAT_10240854
    POP EBP                             ; 1000aebb
    POP EDI                             ; 1000aebc
    POP ESI                             ; 1000aebd
    POP EBX                             ; 1000aebe
    ADD ESP,0x90                        ; 1000aebf
    RET                                 ; 1000aec5
    XOR EAX,EAX                         ; 1000aec6
        ;   Label: LAB_1000aec6
    POP EBP                             ; 1000aec8
    POP EDI                             ; 1000aec9
    POP ESI                             ; 1000aeca
    POP EBX                             ; 1000aecb
    ADD ESP,0x90                        ; 1000aecc
    RET                                 ; 1000aed2

