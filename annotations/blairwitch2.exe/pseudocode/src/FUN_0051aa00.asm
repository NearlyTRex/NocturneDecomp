; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051aa00(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0051b5d0 at 0051b6b6
;   FUN_0051b9d0 at 0051ba0e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051aa00
        ;   Label: FUN_0051aa00
    PUSH ESI                            ; 0051aa01
    PUSH EDI                            ; 0051aa02
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051aa03
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051aa07
    MOV ECX,dword ptr [ESP + 0x14]      ; 0051aa0b
    LEA EAX,[ECX*0x4 + 0x0]             ; 0051aa0f
    ADD EAX,ECX                         ; 0051aa16
    LEA ESI,[EBX + 0x4]                 ; 0051aa18
    SHL EAX,0x2                         ; 0051aa1b
    MOV ECX,dword ptr [EBX + 0x414]     ; 0051aa1e
    LEA EDI,[EDX + 0x100]               ; 0051aa24
    ADD ECX,EAX                         ; 0051aa2a
    PUSH EDI                            ; 0051aa2c
    MOV AL,byte ptr [ESI]               ; 0051aa2d
        ;   Label: LAB_0051aa2d
    MOV byte ptr [EDI],AL               ; 0051aa2f
    CMP AL,0x0                          ; 0051aa31
    JZ 0x0051aa45                       ; 0051aa33
        ;   XREF to: 0051aa45 (CONDITIONAL_JUMP)  ; LAB_0051aa45
    MOV AL,byte ptr [ESI + 0x1]         ; 0051aa35
    ADD ESI,0x2                         ; 0051aa38
    MOV byte ptr [EDI + 0x1],AL         ; 0051aa3b
    ADD EDI,0x2                         ; 0051aa3e
    CMP AL,0x0                          ; 0051aa41
    JNZ 0x0051aa2d                      ; 0051aa43
        ;   XREF to: 0051aa2d (CONDITIONAL_JUMP)  ; LAB_0051aa2d
    POP EDI                             ; 0051aa45
        ;   Label: LAB_0051aa45
    MOV EAX,dword ptr [ECX + 0x8]       ; 0051aa46
    MOV dword ptr [EDX + 0x200],EAX     ; 0051aa49
    MOV EAX,dword ptr [ECX + 0x4]       ; 0051aa4f
    MOV dword ptr [EDX + 0x204],EAX     ; 0051aa52
    MOV EAX,dword ptr [ECX + 0xc]       ; 0051aa58
    MOV dword ptr [EDX + 0x20c],EAX     ; 0051aa5b
    MOV EAX,dword ptr [EBX + 0x104]     ; 0051aa61
    MOV dword ptr [EDX + 0x208],0x1     ; 0051aa67
    MOV dword ptr [EDX + 0x210],EAX     ; 0051aa71
    POP EDI                             ; 0051aa77
    POP ESI                             ; 0051aa78
    POP EBX                             ; 0051aa79
    RET                                 ; 0051aa7a

