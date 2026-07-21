; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_console_cpp_CConsole_writeChar_FUN_0043ad30(int param_1,char param_2)
;
;
; XREF[1]:
;   engine_console.cpp_CConsole_printf_FUN_0043ac60 at 0043acc3
;
; Called Functions:
;   engine_console.cpp_CConsole_scrollUp_FUN_0043ae40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ad30
        ;   Label: engine_console.cpp_CConsole_writeChar_FUN_0043ad30
    PUSH EDI                            ; 0043ad31
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043ad32
    MOV BL,byte ptr [ESP + 0x10]        ; 0043ad36
    CMP BL,0xa                          ; 0043ad3a
    JZ 0x0043ada3                       ; 0043ad3d
        ;   XREF to: 0043ada3 (CONDITIONAL_JUMP)  ; LAB_0043ada3
    TEST BL,BL                          ; 0043ad3f
    JZ 0x0043add7                       ; 0043ad41
        ;   XREF to: 0043add7 (CONDITIONAL_JUMP)  ; LAB_0043add7
    MOV ECX,dword ptr [EAX + 0xfa8]     ; 0043ad47
    LEA EDX,[ECX*0x4 + 0x0]             ; 0043ad4d
    ADD EDX,ECX                         ; 0043ad54
    SHL EDX,0x4                         ; 0043ad56
    MOV ECX,dword ptr [EAX + 0xfa4]     ; 0043ad59
    ADD EDX,EAX                         ; 0043ad5f
    ADD EDX,ECX                         ; 0043ad61
    MOV byte ptr [EDX + 0x4],BL         ; 0043ad63
    MOV EBX,dword ptr [EAX + 0xfa4]     ; 0043ad66
    MOV EDX,dword ptr [EAX + 0xfac]     ; 0043ad6c
    INC EBX                             ; 0043ad72
    DEC EDX                             ; 0043ad73
    MOV dword ptr [EAX + 0xfa4],EBX     ; 0043ad74
    CMP EDX,EBX                         ; 0043ad7a
    JGE 0x0043ada0                      ; 0043ad7c
        ;   XREF to: 0043ada0 (CONDITIONAL_JUMP)  ; LAB_0043ada0
    MOV EDI,dword ptr [EAX + 0xfa8]     ; 0043ad7e
    MOV EDX,dword ptr [EAX + 0xfb0]     ; 0043ad84
    MOV dword ptr [EAX + 0xfa4],0x0     ; 0043ad8a
    INC EDI                             ; 0043ad94
    DEC EDX                             ; 0043ad95
    MOV dword ptr [EAX + 0xfa8],EDI     ; 0043ad96
    CMP EDX,EDI                         ; 0043ad9c
    JL 0x0043adc5                       ; 0043ad9e
        ;   XREF to: 0043adc5 (CONDITIONAL_JUMP)  ; LAB_0043adc5
    POP EDI                             ; 0043ada0
        ;   Label: LAB_0043ada0
    POP EBX                             ; 0043ada1
    RET                                 ; 0043ada2
    MOV EBX,dword ptr [EAX + 0xfa8]     ; 0043ada3
        ;   Label: LAB_0043ada3
    MOV EDX,dword ptr [EAX + 0xfb0]     ; 0043ada9
    MOV dword ptr [EAX + 0xfa4],0x0     ; 0043adaf
    INC EBX                             ; 0043adb9
    DEC EDX                             ; 0043adba
    MOV dword ptr [EAX + 0xfa8],EBX     ; 0043adbb
    CMP EDX,EBX                         ; 0043adc1
    JGE 0x0043ada0                      ; 0043adc3
        ;   XREF to: 0043ada0 (CONDITIONAL_JUMP)  ; LAB_0043ada0
    PUSH EAX                            ; 0043adc5
        ;   Label: LAB_0043adc5
    MOV dword ptr [EAX + 0xfa8],EDX     ; 0043adc6
    CALL engine_console.cpp_CConsole_scrollUp_FUN_0043ae40 ; 0043adcc
        ;   XREF to: 0043ae40 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_scrollUp_FUN_0043ae40()
    ADD ESP,0x4                         ; 0043add1
    POP EDI                             ; 0043add4
    POP EBX                             ; 0043add5
    RET                                 ; 0043add6
    MOV ECX,dword ptr [EAX + 0xfa8]     ; 0043add7
        ;   Label: LAB_0043add7
    LEA EDX,[ECX*0x4 + 0x0]             ; 0043addd
    ADD EDX,ECX                         ; 0043ade4
    SHL EDX,0x4                         ; 0043ade6
    MOV ECX,dword ptr [EAX + 0xfa4]     ; 0043ade9
    ADD EDX,EAX                         ; 0043adef
    ADD EDX,ECX                         ; 0043adf1
    MOV byte ptr [EDX + 0x4],BL         ; 0043adf3
    POP EDI                             ; 0043adf6
    POP EBX                             ; 0043adf7
    RET                                 ; 0043adf8

