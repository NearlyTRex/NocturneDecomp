; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_FUN_0060b586(byte *param_1,undefined8 *param_2)
;
; Parameters:
; byte *           Stack[0x4]:4   param_1
; undefined8 *     Stack[0x8]:4   param_2
;
; XREF[1]:
;   crt_string.c_parseFloatString_FUN_00605b9b at 00605cfb
;
; Called Functions:
;   crt_unknown.c_FUN_0060b5e8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060b586
        ;   Label: crt_unknown.c_FUN_0060b586
    PUSH ESI                            ; 0060b587
    PUSH EDI                            ; 0060b588
    PUSH ECX                            ; 0060b589
    PUSH EBX                            ; 0060b58a
    PUSH EDX                            ; 0060b58b
    MOV ESI,EAX                         ; 0060b58c
    SUB EDX,EDX                         ; 0060b58e
    SUB ECX,ECX                         ; 0060b590
    SUB EBP,EBP                         ; 0060b592
    SUB EAX,EAX                         ; 0060b594
    MOV AL,byte ptr [ESI]               ; 0060b596
        ;   Label: LAB_0060b596
    CMP AL,0x0                          ; 0060b598
    JZ 0x0060b5cb                       ; 0060b59a
        ;   XREF to: 0060b5cb (CONDITIONAL_JUMP)  ; LAB_0060b5cb
    MOV EDI,EDX                         ; 0060b59c
    MOV EBX,ECX                         ; 0060b59e
    MOV EAX,EBP                         ; 0060b5a0
    ADD EBP,EBP                         ; 0060b5a2
    ADC ECX,ECX                         ; 0060b5a4
    ADC EDX,EDX                         ; 0060b5a6
    ADD EBP,EBP                         ; 0060b5a8
    ADC ECX,ECX                         ; 0060b5aa
    ADC EDX,EDX                         ; 0060b5ac
    ADD EBP,EAX                         ; 0060b5ae
    ADC ECX,EBX                         ; 0060b5b0
    ADC EDX,EDI                         ; 0060b5b2
    ADD EBP,EBP                         ; 0060b5b4
    ADC ECX,ECX                         ; 0060b5b6
    ADC EDX,EDX                         ; 0060b5b8
    SUB EAX,EAX                         ; 0060b5ba
    MOV AL,byte ptr [ESI]               ; 0060b5bc
    AND AL,0xf                          ; 0060b5be
    ADD EBP,EAX                         ; 0060b5c0
    ADC ECX,0x0                         ; 0060b5c2
    ADC EDX,0x0                         ; 0060b5c5
    INC ESI                             ; 0060b5c8
    JMP 0x0060b596                      ; 0060b5c9
        ;   XREF to: 0060b596 (UNCONDITIONAL_JUMP)  ; LAB_0060b596
    MOV EAX,ECX                         ; 0060b5cb
        ;   Label: LAB_0060b5cb
    MOV EDI,0x405e                      ; 0060b5cd
    CALL crt_unknown.c_FUN_0060b5e8     ; 0060b5d2
        ;   XREF to: 0060b5e8 (UNCONDITIONAL_CALL)  ; double crt_unknown.c_FUN_0060b5e8(uint param_1, uint param_2)
    POP EBP                             ; 0060b5d7
    MOV dword ptr [EBP + 0x4],EDX       ; 0060b5d8
    MOV dword ptr [EBP],EAX             ; 0060b5db
    MOV word ptr [EBP + 0x8],SI         ; 0060b5de
    POP EBX                             ; 0060b5e2
    POP ECX                             ; 0060b5e3
    POP EDI                             ; 0060b5e4
    POP ESI                             ; 0060b5e5
    POP EBP                             ; 0060b5e6
    RET                                 ; 0060b5e7

