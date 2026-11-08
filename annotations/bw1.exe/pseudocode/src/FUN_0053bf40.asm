; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053bf40(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0053cb50 at 0053cc36
;   FUN_0053cf50 at 0053cf8e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bf40
        ;   Label: FUN_0053bf40
    PUSH ESI                            ; 0053bf41
    PUSH EDI                            ; 0053bf42
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053bf43
    MOV EDX,dword ptr [ESP + 0x18]      ; 0053bf47
    MOV ECX,dword ptr [ESP + 0x14]      ; 0053bf4b
    LEA EAX,[ECX*0x4 + 0x0]             ; 0053bf4f
    ADD EAX,ECX                         ; 0053bf56
    LEA ESI,[EBX + 0x4]                 ; 0053bf58
    SHL EAX,0x2                         ; 0053bf5b
    MOV ECX,dword ptr [EBX + 0x414]     ; 0053bf5e
    LEA EDI,[EDX + 0x100]               ; 0053bf64
    ADD ECX,EAX                         ; 0053bf6a
    PUSH EDI                            ; 0053bf6c
    MOV AL,byte ptr [ESI]               ; 0053bf6d
        ;   Label: LAB_0053bf6d
    MOV byte ptr [EDI],AL               ; 0053bf6f
    CMP AL,0x0                          ; 0053bf71
    JZ 0x0053bf85                       ; 0053bf73
        ;   XREF to: 0053bf85 (CONDITIONAL_JUMP)  ; LAB_0053bf85
    MOV AL,byte ptr [ESI + 0x1]         ; 0053bf75
    ADD ESI,0x2                         ; 0053bf78
    MOV byte ptr [EDI + 0x1],AL         ; 0053bf7b
    ADD EDI,0x2                         ; 0053bf7e
    CMP AL,0x0                          ; 0053bf81
    JNZ 0x0053bf6d                      ; 0053bf83
        ;   XREF to: 0053bf6d (CONDITIONAL_JUMP)  ; LAB_0053bf6d
    POP EDI                             ; 0053bf85
        ;   Label: LAB_0053bf85
    MOV EAX,dword ptr [ECX + 0x8]       ; 0053bf86
    MOV dword ptr [EDX + 0x200],EAX     ; 0053bf89
    MOV EAX,dword ptr [ECX + 0x4]       ; 0053bf8f
    MOV dword ptr [EDX + 0x204],EAX     ; 0053bf92
    MOV EAX,dword ptr [ECX + 0xc]       ; 0053bf98
    MOV dword ptr [EDX + 0x20c],EAX     ; 0053bf9b
    MOV EAX,dword ptr [EBX + 0x104]     ; 0053bfa1
    MOV dword ptr [EDX + 0x208],0x1     ; 0053bfa7
    MOV dword ptr [EDX + 0x210],EAX     ; 0053bfb1
    POP EDI                             ; 0053bfb7
    POP ESI                             ; 0053bfb8
    POP EBX                             ; 0053bfb9
    RET                                 ; 0053bfba

