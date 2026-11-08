; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00448b60(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0044f750 at 0044f947
;   FUN_00450020 at 00450082
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448b60
        ;   Label: FUN_00448b60
    PUSH ESI                            ; 00448b61
    PUSH EDI                            ; 00448b62
    PUSH EBP                            ; 00448b63
    MOV EBX,dword ptr [ESP + 0x14]      ; 00448b64
    MOV EAX,dword ptr [ESP + 0x18]      ; 00448b68
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00448b6c
    SHL EAX,0x10                        ; 00448b70
    ADD EAX,EDX                         ; 00448b73
    MOV EDX,0x100                       ; 00448b75
    IMUL EDX                            ; 00448b7a
    SHRD EAX,EDX,0x10                   ; 00448b7c
    MOV EDX,dword ptr [EBX + 0x100c]    ; 00448b80
    MOV ECX,EAX                         ; 00448b86
    IMUL EDX                            ; 00448b88
    SHRD EAX,EDX,0x10                   ; 00448b8a
    MOV ESI,EAX                         ; 00448b8e
    MOV EDX,dword ptr [EBX + 0x1010]    ; 00448b90
    MOV dword ptr [EBX + 0x1000],EAX    ; 00448b96
    NEG ESI                             ; 00448b9c
    MOV EAX,ECX                         ; 00448b9e
    MOV dword ptr [EBX + 0x1000],ESI    ; 00448ba0
    IMUL EDX                            ; 00448ba6
    SHRD EAX,EDX,0x10                   ; 00448ba8
    MOV EDI,EAX                         ; 00448bac
    MOV EDX,dword ptr [EBX + 0x1014]    ; 00448bae
    MOV dword ptr [EBX + 0x1004],EAX    ; 00448bb4
    NEG EDI                             ; 00448bba
    MOV EAX,ECX                         ; 00448bbc
    MOV dword ptr [EBX + 0x1004],EDI    ; 00448bbe
    IMUL EDX                            ; 00448bc4
    SHRD EAX,EDX,0x10                   ; 00448bc6
    MOV EBP,EAX                         ; 00448bca
    MOV dword ptr [EBX + 0x1008],EAX    ; 00448bcc
    NEG EBP                             ; 00448bd2
    MOV dword ptr [EBX + 0x1008],EBP    ; 00448bd4
    POP EBP                             ; 00448bda
    POP EDI                             ; 00448bdb
    POP ESI                             ; 00448bdc
    POP EBX                             ; 00448bdd
    RET                                 ; 00448bde

