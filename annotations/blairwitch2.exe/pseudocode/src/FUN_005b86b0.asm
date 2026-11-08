; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b86b0(int *param_1)
;
;
; XREF[4]:
;   FUN_005b86a0 at 005b86a5
;   FUN_005b8cf8 at 005b8d1b
;   FUN_005be628 at 005be6c6
;   FUN_005bed18 at 005beec0
;
; Referenced Globals:
;   undefined4 DAT_0061eea0
;   undefined4 DAT_0061eea4
;   undefined4 DAT_0061eea8
;   void* PTR_FUN_0061f2c0 = 005bce04
;   void* PTR_FUN_0061f2c8 = 005bce04
;   undefined4 DAT_02680150
;   undefined4 DAT_026807a0
;
; Called Functions:
;   FUN_005bce04
;   FUN_005be480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b86b0
        ;   Label: FUN_005b86b0
    PUSH ESI                            ; 005b86b1
    PUSH EDI                            ; 005b86b2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005b86b3
    TEST EDI,EDI                        ; 005b86b7
    JZ 0x005b87b2                       ; 005b86b9
        ;   XREF to: 005b87b2 (CONDITIONAL_JUMP)  ; LAB_005b87b2
    CALL dword ptr [0x0061f2c0]         ; 005b86bf | PTR_FUN_0061f2c0
    MOV ESI,dword ptr [0x02680150]      ; 005b86c5 | DAT_02680150
    TEST ESI,ESI                        ; 005b86cb
    JZ 0x005b870f                       ; 005b86cd
        ;   XREF to: 005b870f (CONDITIONAL_JUMP)  ; LAB_005b870f
    CMP ESI,EDI                         ; 005b86cf
    JA 0x005b86df                       ; 005b86d1
        ;   XREF to: 005b86df (CONDITIONAL_JUMP)  ; LAB_005b86df
    MOV EAX,dword ptr [ESI]             ; 005b86d3
    ADD EAX,ESI                         ; 005b86d5
    CMP EAX,EDI                         ; 005b86d7
    JA 0x005b876c                       ; 005b86d9
        ;   XREF to: 005b876c (CONDITIONAL_JUMP)  ; LAB_005b876c
    MOV EDX,ESI                         ; 005b86df
        ;   Label: LAB_005b86df
    MOV ESI,dword ptr [ESI + 0x4]       ; 005b86e1
    TEST ESI,ESI                        ; 005b86e4
    JZ 0x005b86f8                       ; 005b86e6
        ;   XREF to: 005b86f8 (CONDITIONAL_JUMP)  ; LAB_005b86f8
    CMP ESI,EDI                         ; 005b86e8
    JA 0x005b86f8                       ; 005b86ea
        ;   XREF to: 005b86f8 (CONDITIONAL_JUMP)  ; LAB_005b86f8
    MOV EAX,dword ptr [ESI]             ; 005b86ec
    ADD EAX,ESI                         ; 005b86ee
    CMP EAX,EDI                         ; 005b86f0
    JA 0x005b876c                       ; 005b86f2
        ;   XREF to: 005b876c (CONDITIONAL_JUMP)  ; LAB_005b876c
    MOV ESI,dword ptr [EDX + 0x8]       ; 005b86f8
        ;   Label: LAB_005b86f8
    TEST ESI,ESI                        ; 005b86fb
    JZ 0x005b870f                       ; 005b86fd
        ;   XREF to: 005b870f (CONDITIONAL_JUMP)  ; LAB_005b870f
    CMP ESI,EDI                         ; 005b86ff
    JA 0x005b870f                       ; 005b8701
        ;   XREF to: 005b870f (CONDITIONAL_JUMP)  ; LAB_005b870f
    MOV EAX,dword ptr [ESI]             ; 005b8703
    ADD EAX,ESI                         ; 005b8705
    CMP EAX,EDI                         ; 005b8707
    JA 0x005b876c                       ; 005b8709
        ;   XREF to: 005b876c (CONDITIONAL_JUMP)  ; LAB_005b876c
    MOV ESI,dword ptr [0x0061eea4]      ; 005b870f | DAT_0061eea4
        ;   Label: LAB_005b870f
    TEST ESI,ESI                        ; 005b8715
    JZ 0x005b874d                       ; 005b8717
        ;   XREF to: 005b874d (CONDITIONAL_JUMP)  ; LAB_005b874d
    CMP ESI,EDI                         ; 005b8719
    JA 0x005b8725                       ; 005b871b
        ;   XREF to: 005b8725 (CONDITIONAL_JUMP)  ; LAB_005b8725
    MOV EAX,dword ptr [ESI]             ; 005b871d
    ADD EAX,ESI                         ; 005b871f
    CMP EAX,EDI                         ; 005b8721
    JA 0x005b876c                       ; 005b8723
        ;   XREF to: 005b876c (CONDITIONAL_JUMP)  ; LAB_005b876c
    MOV EDX,ESI                         ; 005b8725
        ;   Label: LAB_005b8725
    MOV ESI,dword ptr [ESI + 0x4]       ; 005b8727
    TEST ESI,ESI                        ; 005b872a
    JZ 0x005b873a                       ; 005b872c
        ;   XREF to: 005b873a (CONDITIONAL_JUMP)  ; LAB_005b873a
    CMP ESI,EDI                         ; 005b872e
    JA 0x005b873a                       ; 005b8730
        ;   XREF to: 005b873a (CONDITIONAL_JUMP)  ; LAB_005b873a
    MOV EAX,dword ptr [ESI]             ; 005b8732
    ADD EAX,ESI                         ; 005b8734
    CMP EAX,EDI                         ; 005b8736
    JA 0x005b876c                       ; 005b8738
        ;   XREF to: 005b876c (CONDITIONAL_JUMP)  ; LAB_005b876c
    MOV ESI,dword ptr [EDX + 0x8]       ; 005b873a
        ;   Label: LAB_005b873a
    TEST ESI,ESI                        ; 005b873d
    JZ 0x005b874d                       ; 005b873f
        ;   XREF to: 005b874d (CONDITIONAL_JUMP)  ; LAB_005b874d
    CMP ESI,EDI                         ; 005b8741
    JA 0x005b874d                       ; 005b8743
        ;   XREF to: 005b874d (CONDITIONAL_JUMP)  ; LAB_005b874d
    MOV EAX,dword ptr [ESI]             ; 005b8745
    ADD EAX,ESI                         ; 005b8747
    CMP EAX,EDI                         ; 005b8749
    JA 0x005b876c                       ; 005b874b
        ;   XREF to: 005b876c (CONDITIONAL_JUMP)  ; LAB_005b876c
    MOV ESI,dword ptr [0x0061eea0]      ; 005b874d | DAT_0061eea0
        ;   Label: LAB_005b874d
    TEST ESI,ESI                        ; 005b8753
    JZ 0x005b87ac                       ; 005b8755
        ;   XREF to: 005b87ac (CONDITIONAL_JUMP)  ; LAB_005b87ac
    CMP ESI,EDI                         ; 005b8757
        ;   Label: LAB_005b8757
    JA 0x005b8763                       ; 005b8759
        ;   XREF to: 005b8763 (CONDITIONAL_JUMP)  ; LAB_005b8763
    MOV EAX,dword ptr [ESI]             ; 005b875b
    ADD EAX,ESI                         ; 005b875d
    CMP EAX,EDI                         ; 005b875f
    JA 0x005b876c                       ; 005b8761
        ;   XREF to: 005b876c (CONDITIONAL_JUMP)  ; LAB_005b876c
    MOV ESI,dword ptr [ESI + 0x8]       ; 005b8763
        ;   Label: LAB_005b8763
    TEST ESI,ESI                        ; 005b8766
    JNZ 0x005b8757                      ; 005b8768
        ;   XREF to: 005b8757 (CONDITIONAL_JUMP)  ; LAB_005b8757
    JMP 0x005b87ac                      ; 005b876a
        ;   XREF to: 005b87ac (UNCONDITIONAL_JUMP)  ; LAB_005b87ac
    MOV EAX,0x61eea0                    ; 005b876c | DAT_0061eea0
        ;   Label: LAB_005b876c
    MOV DX,DS                           ; 005b8771
    AND EDX,0xffff                      ; 005b8773
    MOV EBX,ESI                         ; 005b8779
    MOV EAX,EDI                         ; 005b877b
    CALL FUN_005be480                   ; 005b877d
        ;   XREF to: 005be480 (UNCONDITIONAL_CALL)  ; undefined FUN_005be480()
    MOV EDX,dword ptr [0x0061eea4]      ; 005b8782 | DAT_0061eea4
    MOV dword ptr [0x02680150],ESI      ; 005b8788 | DAT_02680150
    CMP ESI,EDX                         ; 005b878e
    JNC 0x005b87a4                      ; 005b8790
        ;   XREF to: 005b87a4 (CONDITIONAL_JUMP)  ; LAB_005b87a4
    MOV EBX,dword ptr [0x0061eea8]      ; 005b8792 | DAT_0061eea8
    MOV EAX,dword ptr [ESI + 0x14]      ; 005b8798
    CMP EAX,EBX                         ; 005b879b
    JBE 0x005b87a4                      ; 005b879d
        ;   XREF to: 005b87a4 (CONDITIONAL_JUMP)  ; LAB_005b87a4
    MOV [0x0061eea8],EAX                ; 005b879f | DAT_0061eea8
    XOR AH,AH                           ; 005b87a4
        ;   Label: LAB_005b87a4
    MOV byte ptr [0x026807a0],AH        ; 005b87a6 | DAT_026807a0
    CALL dword ptr [0x0061f2c8]         ; 005b87ac | PTR_FUN_0061f2c8
        ;   Label: LAB_005b87ac
    POP EDI                             ; 005b87b2
        ;   Label: LAB_005b87b2
    POP ESI                             ; 005b87b3
    POP EBX                             ; 005b87b4
    RET                                 ; 005b87b5

