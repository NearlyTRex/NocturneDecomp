; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045bc20(uint param_1,uint param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0045c730 at 0045c7c8
;   FUN_0045d110 at 0045d176
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d720
;   undefined4 DAT_01b4d730
;   undefined4 DAT_01b4d734
;   undefined4 DAT_01bd2fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bc20
        ;   Label: FUN_0045bc20
    PUSH ESI                            ; 0045bc21
    PUSH EDI                            ; 0045bc22
    MOV EDI,dword ptr [0x01b4d730]      ; 0045bc23 | DAT_01b4d730
    MOV ESI,dword ptr [ESP + 0x14]      ; 0045bc29
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045bc2d
    MOV EDX,dword ptr [0x005b7624]      ; 0045bc31 | DAT_005b7624
    SHL EBX,0x2                         ; 0045bc37
    CMP EDX,0x8                         ; 0045bc3a
    JNZ 0x0045bc7a                      ; 0045bc3d
        ;   XREF to: 0045bc7a (CONDITIONAL_JUMP)  ; LAB_0045bc7a
    MOV ECX,dword ptr [EBX + 0x1bd2fa0] ; 0045bc3f | DAT_01bd2fa0
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045bc45
    MOV EDX,EBX                         ; 0045bc49
    ADD ECX,EBX                         ; 0045bc4b
    CMP ESI,EBX                         ; 0045bc4d
    JL 0x0045bc70                       ; 0045bc4f
        ;   XREF to: 0045bc70 (CONDITIONAL_JUMP)  ; LAB_0045bc70
    XOR EAX,EAX                         ; 0045bc51
        ;   Label: LAB_0045bc51
    MOV AL,byte ptr [ECX]               ; 0045bc53
    INC ECX                             ; 0045bc55
    MOV AL,byte ptr [EAX + 0x1bf5d20]   ; 0045bc56
    INC EDX                             ; 0045bc5c
    MOV byte ptr [ECX + -0x1],AL        ; 0045bc5d
    CMP EDX,ESI                         ; 0045bc60
    JLE 0x0045bc51                      ; 0045bc62
        ;   XREF to: 0045bc51 (CONDITIONAL_JUMP)  ; LAB_0045bc51
    LEA EAX,[EAX]                       ; 0045bc64
    LEA EDX,[EDX]                       ; 0045bc6a
    MOV dword ptr [0x01b4d730],EDI      ; 0045bc70 | DAT_01b4d730
        ;   Label: LAB_0045bc70
    POP EDI                             ; 0045bc76
    POP ESI                             ; 0045bc77
    POP EBX                             ; 0045bc78
    RET                                 ; 0045bc79
    CMP EDX,0x10                        ; 0045bc7a
        ;   Label: LAB_0045bc7a
    JNZ 0x0045bcfe                      ; 0045bc7d
        ;   XREF to: 0045bcfe (CONDITIONAL_JUMP)  ; LAB_0045bcfe
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045bc83
    MOV EDX,dword ptr [EBX + 0x1bd2fa0] ; 0045bc87 | DAT_01bd2fa0
    ADD EAX,EAX                         ; 0045bc8d
    ADD EAX,EDX                         ; 0045bc8f
    MOV DL,byte ptr [ESP + 0x10]        ; 0045bc91
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045bc95
    TEST DL,0x1                         ; 0045bc99
    JZ 0x0045bcb5                       ; 0045bc9c
        ;   XREF to: 0045bcb5 (CONDITIONAL_JUMP)  ; LAB_0045bcb5
    XOR EDX,EDX                         ; 0045bc9e
    MOV CL,byte ptr [0x01b4d720]        ; 0045bca0 | DAT_01b4d720
    MOV DX,word ptr [EAX]               ; 0045bca6
    SHR EDX,CL                          ; 0045bca9
    ADD EAX,0x2                         ; 0045bcab
    AND EDX,EDI                         ; 0045bcae
    INC EBX                             ; 0045bcb0
    MOV word ptr [EAX + -0x2],DX        ; 0045bcb1
    CMP EBX,ESI                         ; 0045bcb5
        ;   Label: LAB_0045bcb5
    JGE 0x0045bce0                      ; 0045bcb7
        ;   XREF to: 0045bce0 (CONDITIONAL_JUMP)  ; LAB_0045bce0
    MOV CL,byte ptr [0x01b4d720]        ; 0045bcb9 | DAT_01b4d720
        ;   Label: LAB_0045bcb9
    MOV EDX,dword ptr [EAX]             ; 0045bcbf
    SHR EDX,CL                          ; 0045bcc1
    MOV ECX,dword ptr [0x01b4d734]      ; 0045bcc3 | DAT_01b4d734
    ADD EAX,0x4                         ; 0045bcc9
    AND EDX,ECX                         ; 0045bccc
    ADD EBX,0x2                         ; 0045bcce
    MOV dword ptr [EAX + -0x4],EDX      ; 0045bcd1
    CMP EBX,ESI                         ; 0045bcd4
    JL 0x0045bcb9                       ; 0045bcd6
        ;   XREF to: 0045bcb9 (CONDITIONAL_JUMP)  ; LAB_0045bcb9
    LEA EAX,[EAX]                       ; 0045bcd8
    MOV EDX,EDX                         ; 0045bcde
    JNZ 0x0045bc70                      ; 0045bce0
        ;   XREF to: 0045bc70 (CONDITIONAL_JUMP)  ; LAB_0045bc70
        ;   Label: LAB_0045bce0
    XOR EDX,EDX                         ; 0045bce2
    MOV CL,byte ptr [0x01b4d720]        ; 0045bce4 | DAT_01b4d720
    MOV DX,word ptr [EAX]               ; 0045bcea
    SHR EDX,CL                          ; 0045bced
    AND EDX,EDI                         ; 0045bcef
    MOV word ptr [EAX],DX               ; 0045bcf1
    MOV dword ptr [0x01b4d730],EDI      ; 0045bcf4 | DAT_01b4d730
    POP EDI                             ; 0045bcfa
    POP ESI                             ; 0045bcfb
    POP EBX                             ; 0045bcfc
    RET                                 ; 0045bcfd
    CMP EDX,0x20                        ; 0045bcfe
        ;   Label: LAB_0045bcfe
    JNZ 0x0045bc70                      ; 0045bd01
        ;   XREF to: 0045bc70 (CONDITIONAL_JUMP)  ; LAB_0045bc70
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045bd07
    MOV EDX,dword ptr [EBX + 0x1bd2fa0] ; 0045bd0b | DAT_01bd2fa0
    SHL EAX,0x2                         ; 0045bd11
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045bd14
    ADD EAX,EDX                         ; 0045bd18
    CMP ESI,EBX                         ; 0045bd1a
    JL 0x0045bc70                       ; 0045bd1c
        ;   XREF to: 0045bc70 (CONDITIONAL_JUMP)  ; LAB_0045bc70
    MOV CL,byte ptr [0x01b4d720]        ; 0045bd22 | DAT_01b4d720
        ;   Label: LAB_0045bd22
    MOV EDX,dword ptr [EAX]             ; 0045bd28
    SHR EDX,CL                          ; 0045bd2a
    ADD EAX,0x4                         ; 0045bd2c
    AND EDX,EDI                         ; 0045bd2f
    INC EBX                             ; 0045bd31
    MOV dword ptr [EAX + -0x4],EDX      ; 0045bd32
    CMP EBX,ESI                         ; 0045bd35
    JLE 0x0045bd22                      ; 0045bd37
        ;   XREF to: 0045bd22 (CONDITIONAL_JUMP)  ; LAB_0045bd22
    MOV dword ptr [0x01b4d730],EDI      ; 0045bd39 | DAT_01b4d730
    POP EDI                             ; 0045bd3f
    POP ESI                             ; 0045bd40
    POP EBX                             ; 0045bd41
    RET                                 ; 0045bd42

