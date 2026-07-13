; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056fe65(int param_1,char *param_2,int param_3,char *param_4)
;
;
; XREF[2]:
;   FUN_0056b405 at 0056b43a
;   FUN_00570248 at 00570266
;
; Called Functions:
;   FUN_00571df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fe65
        ;   Label: FUN_0056fe65
    PUSH ESI                            ; 0056fe66
    PUSH EDI                            ; 0056fe67
    PUSH EBP                            ; 0056fe68
    MOV EBX,dword ptr [ESP + 0x14]      ; 0056fe69
    MOV EDX,dword ptr [ESP + 0x18]      ; 0056fe6d
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056fe71
    MOV EBP,dword ptr [ESP + 0x20]      ; 0056fe75
    MOV dword ptr [EBX + 0x2c],0x0      ; 0056fe79
    MOV dword ptr [EBX + 0x30],0x0      ; 0056fe80
    MOV dword ptr [EBX + 0x34],0x20     ; 0056fe87
    MOV AH,byte ptr [EBX + 0x3c]        ; 0056fe8e
    MOV dword ptr [EBX + 0x38],0x0      ; 0056fe91
    AND AH,0xf8                         ; 0056fe98
    MOV byte ptr [EBX + 0x3c],AH        ; 0056fe9b
    TEST EDX,EDX                        ; 0056fe9e
    JZ 0x0056fedd                       ; 0056fea0
        ;   XREF to: 0056fedd (CONDITIONAL_JUMP)  ; LAB_0056fedd
    MOV ESI,EDX                         ; 0056fea2
    TEST ECX,ECX                        ; 0056fea4
    JLE 0x0056fee6                      ; 0056fea6
        ;   XREF to: 0056fee6 (CONDITIONAL_JUMP)  ; LAB_0056fee6
    LEA EDI,[EDX + ECX*0x1]             ; 0056fea8
        ;   Label: LAB_0056fea8
    PUSH 0x0                            ; 0056feab
        ;   Label: LAB_0056feab
    PUSH EDI                            ; 0056fead
    PUSH ESI                            ; 0056feae
    PUSH EBX                            ; 0056feaf
    CALL FUN_00571df8                   ; 0056feb0
        ;   XREF to: 00571df8 (UNCONDITIONAL_CALL)  ; undefined FUN_00571df8()
    ADD ESP,0x10                        ; 0056feb5
    TEST EBP,EBP                        ; 0056feb8
    JNZ 0x0056ff07                      ; 0056feba
        ;   XREF to: 0056ff07 (CONDITIONAL_JUMP)  ; LAB_0056ff07
    XOR EBP,EBP                         ; 0056febc
        ;   Label: LAB_0056febc
    XOR EAX,EAX                         ; 0056febe
    XOR EDX,EDX                         ; 0056fec0
    MOV dword ptr [EBX + 0xc],ESI       ; 0056fec2
        ;   Label: LAB_0056fec2
    MOV dword ptr [EBX + 0x14],ESI      ; 0056fec5
    MOV dword ptr [EBX + 0x10],EDI      ; 0056fec8
    MOV dword ptr [EBX + 0x18],EAX      ; 0056fecb
    MOV dword ptr [EBX + 0x20],EAX      ; 0056fece
    MOV dword ptr [EBX + 0x1c],EDX      ; 0056fed1
    CMP EBP,EAX                         ; 0056fed4
    JA 0x0056ff1b                       ; 0056fed6
        ;   XREF to: 0056ff1b (CONDITIONAL_JUMP)  ; LAB_0056ff1b
    POP EBP                             ; 0056fed8
    POP EDI                             ; 0056fed9
    POP ESI                             ; 0056feda
    POP EBX                             ; 0056fedb
    RET                                 ; 0056fedc
    OR byte ptr [EBX + 0x3c],0x2        ; 0056fedd
        ;   Label: LAB_0056fedd
    POP EBP                             ; 0056fee1
    POP EDI                             ; 0056fee2
    POP ESI                             ; 0056fee3
    POP EBX                             ; 0056fee4
    RET                                 ; 0056fee5
    JZ 0x0056fef9                       ; 0056fee6
        ;   XREF to: 0056fef9 (CONDITIONAL_JUMP)  ; LAB_0056fef9
        ;   Label: LAB_0056fee6
    MOV CL,byte ptr [EBX + 0x3c]        ; 0056fee8
    OR CL,0x4                           ; 0056feeb
    LEA EDI,[EDX + 0x200]               ; 0056feee
    MOV byte ptr [EBX + 0x3c],CL        ; 0056fef4
    JMP 0x0056feab                      ; 0056fef7
        ;   XREF to: 0056feab (UNCONDITIONAL_JUMP)  ; LAB_0056feab
    MOV EDI,EDX                         ; 0056fef9
        ;   Label: LAB_0056fef9
    SUB ECX,ECX                         ; 0056fefb
    DEC ECX                             ; 0056fefd
    XOR EAX,EAX                         ; 0056fefe
    SCASB.REPNE ES:EDI                  ; 0056ff00
    NOT ECX                             ; 0056ff02
    DEC ECX                             ; 0056ff04
    JMP 0x0056fea8                      ; 0056ff05
        ;   XREF to: 0056fea8 (UNCONDITIONAL_JUMP)  ; LAB_0056fea8
    CMP EBP,ESI                         ; 0056ff07
        ;   Label: LAB_0056ff07
    JC 0x0056febc                       ; 0056ff09
        ;   XREF to: 0056febc (CONDITIONAL_JUMP)  ; LAB_0056febc
    CMP EBP,EDI                         ; 0056ff0b
    JC 0x0056ff15                       ; 0056ff0d
        ;   XREF to: 0056ff15 (CONDITIONAL_JUMP)  ; LAB_0056ff15
    TEST byte ptr [EBX + 0x3c],0x4      ; 0056ff0f
    JZ 0x0056febc                       ; 0056ff13
        ;   XREF to: 0056febc (CONDITIONAL_JUMP)  ; LAB_0056febc
    MOV EAX,ESI                         ; 0056ff15
        ;   Label: LAB_0056ff15
    MOV EDX,EDI                         ; 0056ff17
    JMP 0x0056fec2                      ; 0056ff19
        ;   XREF to: 0056fec2 (UNCONDITIONAL_JUMP)  ; LAB_0056fec2
    MOV EDX,dword ptr [EBX + 0x20]      ; 0056ff1b
        ;   Label: LAB_0056ff1b
    SUB EBP,EAX                         ; 0056ff1e
    ADD EDX,EBP                         ; 0056ff20
    MOV dword ptr [EBX + 0x20],EDX      ; 0056ff22
    POP EBP                             ; 0056ff25
    POP EDI                             ; 0056ff26
    POP ESI                             ; 0056ff27
    POP EBX                             ; 0056ff28
    RET                                 ; 0056ff29

