; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00484b50(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00483970 at 00483ae6
;
; Referenced Globals:
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484b50
        ;   Label: FUN_00484b50
    PUSH ESI                            ; 00484b51
    PUSH EDI                            ; 00484b52
    PUSH EBP                            ; 00484b53
    MOV ECX,dword ptr [ESP + 0x14]      ; 00484b54
    MOV EBX,dword ptr [ESP + 0x18]      ; 00484b58
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00484b5c
    MOV ESI,dword ptr [0x01c6b5a8]      ; 00484b60 | DAT_01c6b5a8
    MOV EDI,dword ptr [0x01c6b5ac]      ; 00484b66 | DAT_01c6b5ac
    SUB EBX,ESI                         ; 00484b6c
    SUB EDX,EDI                         ; 00484b6e
    TEST EBX,EBX                        ; 00484b70
    JL 0x00484bc1                       ; 00484b72
        ;   XREF to: 00484bc1 (CONDITIONAL_JUMP)  ; LAB_00484bc1
    TEST EDX,EDX                        ; 00484b74
    JL 0x00484bc1                       ; 00484b76
        ;   XREF to: 00484bc1 (CONDITIONAL_JUMP)  ; LAB_00484bc1
    MOV EAX,EDX                         ; 00484b78
    MOV EBP,dword ptr [ECX + 0x18c]     ; 00484b7a
    SAR EDX,0x1f                        ; 00484b80
    IDIV EBP                            ; 00484b83
    MOV ESI,EAX                         ; 00484b85
    MOV EDX,EBX                         ; 00484b87
    MOV EAX,EBX                         ; 00484b89
    SAR EDX,0x1f                        ; 00484b8b
    IDIV dword ptr [ECX + 0x1a4]        ; 00484b8e
    TEST ESI,ESI                        ; 00484b94
    JL 0x00484bc1                       ; 00484b96
        ;   XREF to: 00484bc1 (CONDITIONAL_JUMP)  ; LAB_00484bc1
    MOV EDI,dword ptr [ECX + 0x1a0]     ; 00484b98
    CMP ESI,EDI                         ; 00484b9e
    JGE 0x00484bc1                      ; 00484ba0
        ;   XREF to: 00484bc1 (CONDITIONAL_JUMP)  ; LAB_00484bc1
    TEST EAX,EAX                        ; 00484ba2
    JL 0x00484bc1                       ; 00484ba4
        ;   XREF to: 00484bc1 (CONDITIONAL_JUMP)  ; LAB_00484bc1
    CMP EAX,dword ptr [ECX + 0x1a8]     ; 00484ba6
    JGE 0x00484bc1                      ; 00484bac
        ;   XREF to: 00484bc1 (CONDITIONAL_JUMP)  ; LAB_00484bc1
    IMUL EAX,EDI                        ; 00484bae
    ADD EAX,dword ptr [ECX + 0x198]     ; 00484bb1
    ADD EAX,ESI                         ; 00484bb7
    TEST EAX,EAX                        ; 00484bb9
    JL 0x00484bc1                       ; 00484bbb
        ;   XREF to: 00484bc1 (CONDITIONAL_JUMP)  ; LAB_00484bc1
    CMP EAX,dword ptr [ECX]             ; 00484bbd
    JL 0x00484bc6                       ; 00484bbf
        ;   XREF to: 00484bc6 (CONDITIONAL_JUMP)  ; LAB_00484bc6
    MOV EAX,0xffffffff                  ; 00484bc1
        ;   Label: LAB_00484bc1
    POP EBP                             ; 00484bc6
        ;   Label: LAB_00484bc6
    POP EDI                             ; 00484bc7
    POP ESI                             ; 00484bc8
    POP EBX                             ; 00484bc9
    RET                                 ; 00484bca

