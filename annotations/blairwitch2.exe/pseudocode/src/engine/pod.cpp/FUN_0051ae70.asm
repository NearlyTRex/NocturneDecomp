; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_0051ae70(int param_1,int param_2)
;
;
; XREF[1]:
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_0051ba20 at 0051bb73
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

    PUSH EBX                            ; 0051ae70
        ;   Label: engine_pod.cpp_FUN_0051ae70
    PUSH EDI                            ; 0051ae71
    PUSH EBP                            ; 0051ae72
    SUB ESP,0x108                       ; 0051ae73
    MOV EBP,dword ptr [ESP + 0x118]     ; 0051ae79
    MOV EBX,ESI                         ; 0051ae80
    MOV EDX,dword ptr [ESP + 0x11c]     ; 0051ae82
    TEST EDX,EDX                        ; 0051ae89
    JL 0x0051ae95                       ; 0051ae8b
        ;   XREF to: 0051ae95 (CONDITIONAL_JUMP)  ; LAB_0051ae95
    CMP EDX,dword ptr [EBP + 0x424]     ; 0051ae8d
    JL 0x0051aeb8                       ; 0051ae93
        ;   XREF to: 0051aeb8 (CONDITIONAL_JUMP)  ; LAB_0051aeb8
    MOV ESI,0x5e263c                    ; 0051ae95
        ;   Label: LAB_0051ae95
    MOV EDI,0x37c                       ; 0051ae9a
    PUSH 0x5e264e                       ; 0051ae9f
    MOV dword ptr [0x01d046a0],ESI      ; 0051aea4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0051aeaa | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051aeb0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051aeb5
    PUSH 0x5e268f                       ; 0051aeb8
        ;   Label: LAB_0051aeb8
    LEA EDI,[EBP + 0x4]                 ; 0051aebd
    PUSH EDI                            ; 0051aec0
    CALL crt_stdio.c_fopen_FUN_005b910c ; 0051aec1
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 0051aec6
    MOV ESI,EAX                         ; 0051aec9
    TEST EAX,EAX                        ; 0051aecb
    JNZ 0x0051aef2                      ; 0051aecd
        ;   XREF to: 0051aef2 (CONDITIONAL_JUMP)  ; LAB_0051aef2
    PUSH EDI                            ; 0051aecf
    MOV EAX,0x5e2692                    ; 0051aed0
    MOV EDX,0x381                       ; 0051aed5
    PUSH 0x5e26a4                       ; 0051aeda
    MOV [0x01d046a0],EAX                ; 0051aedf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0051aee4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051aeea
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0051aeef
    MOV EDX,dword ptr [ESP + 0x11c]     ; 0051aef2
        ;   Label: LAB_0051aef2
    MOV EAX,EDX                         ; 0051aef9
    SHL EAX,0x5                         ; 0051aefb
    ADD EAX,EDX                         ; 0051aefe
    MOV ECX,dword ptr [EBP + 0x428]     ; 0051af00
    SHL EAX,0x3                         ; 0051af06
    PUSH 0x0                            ; 0051af09
    ADD EAX,ECX                         ; 0051af0b
    PUSH EAX                            ; 0051af0d
    PUSH ESI                            ; 0051af0e
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0051af0f
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 0051af14
    PUSH ESI                            ; 0051af17
    PUSH 0x1                            ; 0051af18
    PUSH 0x108                          ; 0051af1a
    LEA EAX,[ESP + 0xc]                 ; 0051af1f
    PUSH EAX                            ; 0051af23
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051af24
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    MOV AH,byte ptr [ESI + 0xc]         ; 0051af29
    ADD ESP,0x10                        ; 0051af2c
    TEST AH,0x20                        ; 0051af2f
    JNZ 0x0051af56                      ; 0051af32
        ;   XREF to: 0051af56 (CONDITIONAL_JUMP)  ; LAB_0051af56
    PUSH ESI                            ; 0051af34
        ;   Label: LAB_0051af34
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0051af35
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    MOV EDI,EBX                         ; 0051af3a
    MOV ECX,0x42                        ; 0051af3c
    LEA ESI,[ESP + 0x4]                 ; 0051af41
    ADD ESP,0x4                         ; 0051af45
    MOVSD.REP ES:EDI,ESI                ; 0051af48
    MOV EAX,EBX                         ; 0051af4a
    ADD ESP,0x108                       ; 0051af4c
    POP EBP                             ; 0051af52
    POP EDI                             ; 0051af53
    POP EBX                             ; 0051af54
    RET                                 ; 0051af55
    ADD EBP,0x4                         ; 0051af56
        ;   Label: LAB_0051af56
    PUSH EBP                            ; 0051af59
    MOV EDI,0x5e26d2                    ; 0051af5a
    MOV EAX,0x392                       ; 0051af5f
    PUSH 0x5e26e4                       ; 0051af64
    MOV dword ptr [0x01d046a0],EDI      ; 0051af69 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0051af6f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051af74
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0051af79
    JMP 0x0051af34                      ; 0051af7c
        ;   XREF to: 0051af34 (UNCONDITIONAL_JUMP)  ; LAB_0051af34

