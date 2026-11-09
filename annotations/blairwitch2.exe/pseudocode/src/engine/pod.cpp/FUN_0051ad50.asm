; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_0051ad50(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_stdio.c_fseek_FUN_005b929c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ad50
        ;   Label: engine_pod.cpp_FUN_0051ad50
    PUSH EDI                            ; 0051ad51
    PUSH EBP                            ; 0051ad52
    SUB ESP,0x138                       ; 0051ad53
    MOV EBP,dword ptr [ESP + 0x148]     ; 0051ad59
    MOV EBX,ESI                         ; 0051ad60
    MOV EDX,dword ptr [ESP + 0x14c]     ; 0051ad62
    TEST EDX,EDX                        ; 0051ad69
    JL 0x0051ad75                       ; 0051ad6b
        ;   XREF to: 0051ad75 (CONDITIONAL_JUMP)  ; LAB_0051ad75
    CMP EDX,dword ptr [EBP + 0x41c]     ; 0051ad6d
    JL 0x0051ad98                       ; 0051ad73
        ;   XREF to: 0051ad98 (CONDITIONAL_JUMP)  ; LAB_0051ad98
    MOV ESI,0x5e2572                    ; 0051ad75
        ;   Label: LAB_0051ad75
    MOV EDI,0x34f                       ; 0051ad7a
    PUSH 0x5e2584                       ; 0051ad7f
    MOV dword ptr [0x01d046a0],ESI      ; 0051ad84 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0051ad8a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051ad90
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051ad95
    PUSH 0x5e25c0                       ; 0051ad98
        ;   Label: LAB_0051ad98
    LEA EDI,[EBP + 0x4]                 ; 0051ad9d
    PUSH EDI                            ; 0051ada0
    CALL crt_stdio.c_fopen_FUN_005b910c ; 0051ada1
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 0051ada6
    MOV ESI,EAX                         ; 0051ada9
    TEST EAX,EAX                        ; 0051adab
    JNZ 0x0051add2                      ; 0051adad
        ;   XREF to: 0051add2 (CONDITIONAL_JUMP)  ; LAB_0051add2
    PUSH EDI                            ; 0051adaf
    MOV EAX,0x5e25c3                    ; 0051adb0
    MOV EDX,0x354                       ; 0051adb5
    PUSH 0x5e25d5                       ; 0051adba
    MOV [0x01d046a0],EAX                ; 0051adbf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0051adc4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051adca
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0051adcf
    MOV EDX,dword ptr [ESP + 0x14c]     ; 0051add2
        ;   Label: LAB_0051add2
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051add9
    ADD EAX,EDX                         ; 0051ade0
    SHL EAX,0x3                         ; 0051ade2
    SUB EAX,EDX                         ; 0051ade5
    MOV ECX,dword ptr [EBP + 0x420]     ; 0051ade7
    SHL EAX,0x3                         ; 0051aded
    PUSH 0x0                            ; 0051adf0
    ADD EAX,ECX                         ; 0051adf2
    PUSH EAX                            ; 0051adf4
    PUSH ESI                            ; 0051adf5
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0051adf6
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 0051adfb
    PUSH ESI                            ; 0051adfe
    PUSH 0x1                            ; 0051adff
    PUSH 0x138                          ; 0051ae01
    LEA EAX,[ESP + 0xc]                 ; 0051ae06
    PUSH EAX                            ; 0051ae0a
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051ae0b
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    MOV AH,byte ptr [ESI + 0xc]         ; 0051ae10
    ADD ESP,0x10                        ; 0051ae13
    TEST AH,0x20                        ; 0051ae16
    JNZ 0x0051ae3d                      ; 0051ae19
        ;   XREF to: 0051ae3d (CONDITIONAL_JUMP)  ; LAB_0051ae3d
    PUSH ESI                            ; 0051ae1b
        ;   Label: LAB_0051ae1b
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0051ae1c
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    MOV EDI,EBX                         ; 0051ae21
    MOV ECX,0x4e                        ; 0051ae23
    LEA ESI,[ESP + 0x4]                 ; 0051ae28
    ADD ESP,0x4                         ; 0051ae2c
    MOVSD.REP ES:EDI,ESI                ; 0051ae2f
    MOV EAX,EBX                         ; 0051ae31
    ADD ESP,0x138                       ; 0051ae33
    POP EBP                             ; 0051ae39
    POP EDI                             ; 0051ae3a
    POP EBX                             ; 0051ae3b
    RET                                 ; 0051ae3c
    ADD EBP,0x4                         ; 0051ae3d
        ;   Label: LAB_0051ae3d
    PUSH EBP                            ; 0051ae40
    MOV EDI,0x5e25fe                    ; 0051ae41
    MOV EAX,0x369                       ; 0051ae46
    PUSH 0x5e2610                       ; 0051ae4b
    MOV dword ptr [0x01d046a0],EDI      ; 0051ae50 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0051ae56 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051ae5b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0051ae60
    JMP 0x0051ae1b                      ; 0051ae63
        ;   XREF to: 0051ae1b (UNCONDITIONAL_JUMP)  ; LAB_0051ae1b

