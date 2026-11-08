; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050fd30(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0050fce0 at 0050fd04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050fd30
        ;   Label: FUN_0050fd30
    PUSH ESI                            ; 0050fd31
    PUSH EDI                            ; 0050fd32
    SUB ESP,0x4                         ; 0050fd33
    MOV ECX,dword ptr [ESP + 0x14]      ; 0050fd36
    MOV ESI,dword ptr [ESP + 0x18]      ; 0050fd3a
    MOV EDX,dword ptr [ECX + 0x20]      ; 0050fd3e
    MOV EAX,dword ptr [ECX + 0x14]      ; 0050fd41
    MOV ECX,dword ptr [ECX + 0x1c]      ; 0050fd44
    MOV EDI,dword ptr [EDX]             ; 0050fd47
    MOV EDX,dword ptr [EDX + ECX*0x4]   ; 0050fd49
    ADD EDX,EAX                         ; 0050fd4c
    ADD EDI,EAX                         ; 0050fd4e
    MOV dword ptr [ESP],EDX             ; 0050fd50
    CMP EDI,EDX                         ; 0050fd53
    JNC 0x0050fd84                      ; 0050fd55
        ;   XREF to: 0050fd84 (CONDITIONAL_JUMP)  ; LAB_0050fd84
    XOR EBX,EBX                         ; 0050fd57
        ;   Label: LAB_0050fd57
    MOV BX,word ptr [EDI + 0x2]         ; 0050fd59
    LEA EDX,[EBX + 0x3]                 ; 0050fd5d
    LEA EAX,[EDI + 0x4]                 ; 0050fd60
    AND DL,0xfc                         ; 0050fd63
    LEA EDI,[EAX + EDX*0x1]             ; 0050fd66
    XOR EDX,EDX                         ; 0050fd69
    TEST EBX,EBX                        ; 0050fd6b
    JLE 0x0050fd7f                      ; 0050fd6d
        ;   XREF to: 0050fd7f (CONDITIONAL_JUMP)  ; LAB_0050fd7f
    XOR ECX,ECX                         ; 0050fd6f
        ;   Label: LAB_0050fd6f
    MOV CL,byte ptr [EAX]               ; 0050fd71
    INC EAX                             ; 0050fd73
    MOV CL,byte ptr [ECX + ESI*0x1]     ; 0050fd74
    INC EDX                             ; 0050fd77
    MOV byte ptr [EAX + -0x1],CL        ; 0050fd78
    CMP EDX,EBX                         ; 0050fd7b
    JL 0x0050fd6f                       ; 0050fd7d
        ;   XREF to: 0050fd6f (CONDITIONAL_JUMP)  ; LAB_0050fd6f
    CMP EDI,dword ptr [ESP]             ; 0050fd7f
        ;   Label: LAB_0050fd7f
    JC 0x0050fd57                       ; 0050fd82
        ;   XREF to: 0050fd57 (CONDITIONAL_JUMP)  ; LAB_0050fd57
    ADD ESP,0x4                         ; 0050fd84
        ;   Label: LAB_0050fd84
    POP EDI                             ; 0050fd87
    POP ESI                             ; 0050fd88
    POP EBX                             ; 0050fd89
    RET                                 ; 0050fd8a

