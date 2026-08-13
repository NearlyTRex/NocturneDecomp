; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_None_FUN_00571b2c(byte *param_1,undefined8 *param_2)
;
; Parameters:
; byte *           Stack[0x4]:4   param_1
; undefined8 *     Stack[0x8]:4   param_2
;
; XREF[1]:
;   crt_string.c_parseFloatString_FUN_0056f690 at 0056f7f0
;
; Called Functions:
;   crt_unknown.c_FUN_00571b8e
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00571b2c
        ;   Label: crt_unknown.c_None_FUN_00571b2c
    PUSH ESI                            ; 00571b2d
    PUSH EDI                            ; 00571b2e
    PUSH ECX                            ; 00571b2f
    PUSH EBX                            ; 00571b30
    PUSH EDX                            ; 00571b31
    MOV ESI,EAX                         ; 00571b32
    SUB EDX,EDX                         ; 00571b34
    SUB ECX,ECX                         ; 00571b36
    SUB EBP,EBP                         ; 00571b38
    SUB EAX,EAX                         ; 00571b3a
    MOV AL,byte ptr [ESI]               ; 00571b3c
        ;   Label: LAB_00571b3c
    CMP AL,0x0                          ; 00571b3e
    JZ 0x00571b71                       ; 00571b40
        ;   XREF to: 00571b71 (CONDITIONAL_JUMP)  ; LAB_00571b71
    MOV EDI,EDX                         ; 00571b42
    MOV EBX,ECX                         ; 00571b44
    MOV EAX,EBP                         ; 00571b46
    ADD EBP,EBP                         ; 00571b48
    ADC ECX,ECX                         ; 00571b4a
    ADC EDX,EDX                         ; 00571b4c
    ADD EBP,EBP                         ; 00571b4e
    ADC ECX,ECX                         ; 00571b50
    ADC EDX,EDX                         ; 00571b52
    ADD EBP,EAX                         ; 00571b54
    ADC ECX,EBX                         ; 00571b56
    ADC EDX,EDI                         ; 00571b58
    ADD EBP,EBP                         ; 00571b5a
    ADC ECX,ECX                         ; 00571b5c
    ADC EDX,EDX                         ; 00571b5e
    SUB EAX,EAX                         ; 00571b60
    MOV AL,byte ptr [ESI]               ; 00571b62
    AND AL,0xf                          ; 00571b64
    ADD EBP,EAX                         ; 00571b66
    ADC ECX,0x0                         ; 00571b68
    ADC EDX,0x0                         ; 00571b6b
    INC ESI                             ; 00571b6e
    JMP 0x00571b3c                      ; 00571b6f
        ;   XREF to: 00571b3c (UNCONDITIONAL_JUMP)  ; LAB_00571b3c
    MOV EAX,ECX                         ; 00571b71
        ;   Label: LAB_00571b71
    MOV EDI,0x405e                      ; 00571b73
    CALL crt_unknown.c_FUN_00571b8e     ; 00571b78
        ;   XREF to: 00571b8e (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00571b8e()
    POP EBP                             ; 00571b7d
    MOV dword ptr [EBP + 0x4],EDX       ; 00571b7e
    MOV dword ptr [EBP],EAX             ; 00571b81
    MOV word ptr [EBP + 0x8],SI         ; 00571b84
    POP EBX                             ; 00571b88
    POP ECX                             ; 00571b89
    POP EDI                             ; 00571b8a
    POP ESI                             ; 00571b8b
    POP EBP                             ; 00571b8c
    RET                                 ; 00571b8d

