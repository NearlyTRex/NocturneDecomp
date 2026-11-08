; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * FUN_005bd84c(byte *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005bd894 at 005bd8c8
;
; Referenced Globals:
;   undefined4 DAT_0061f2f0
;
; Called Functions:
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd84c
        ;   Label: FUN_005bd84c
    PUSH ESI                            ; 005bd84d
    MOV EBX,dword ptr [ESP + 0xc]       ; 005bd84e
    MOV ESI,dword ptr [ESP + 0x10]      ; 005bd852
    PUSH 0x20                           ; 005bd856
    PUSH 0x0                            ; 005bd858
    PUSH ESI                            ; 005bd85a
    INC EBX                             ; 005bd85b
    CALL FUN_005b77c0                   ; 005bd85c
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    XOR EAX,EAX                         ; 005bd861
    MOV AL,byte ptr [EBX + -0x1]        ; 005bd863
    ADD ESP,0xc                         ; 005bd866
    TEST EAX,EAX                        ; 005bd869
    JZ 0x005bd88c                       ; 005bd86b
        ;   XREF to: 005bd88c (CONDITIONAL_JUMP)  ; LAB_005bd88c
    MOV EDX,EAX                         ; 005bd86d
        ;   Label: LAB_005bd86d
    AND EAX,0x7                         ; 005bd86f
    SAR EDX,0x3                         ; 005bd872
    MOV AL,byte ptr [EAX + 0x61f2f0]    ; 005bd875 | DAT_0061f2f0
    OR byte ptr [EDX + ESI*0x1],AL      ; 005bd87b
    XOR EAX,EAX                         ; 005bd87e
    MOV AL,byte ptr [EBX]               ; 005bd880
    TEST EAX,EAX                        ; 005bd882
    JZ 0x005bd88c                       ; 005bd884
        ;   XREF to: 005bd88c (CONDITIONAL_JUMP)  ; LAB_005bd88c
    INC EBX                             ; 005bd886
    CMP EAX,0x5d                        ; 005bd887
    JNZ 0x005bd86d                      ; 005bd88a
        ;   XREF to: 005bd86d (CONDITIONAL_JUMP)  ; LAB_005bd86d
    MOV EAX,EBX                         ; 005bd88c
        ;   Label: LAB_005bd88c
    POP ESI                             ; 005bd88e
    POP EBX                             ; 005bd88f
    RET                                 ; 005bd890

