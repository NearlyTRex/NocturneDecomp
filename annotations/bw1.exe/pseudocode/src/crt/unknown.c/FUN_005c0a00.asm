; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c0a00(int *param_1)
;
;
; XREF[4]:
;   crt_unknown.c_FUN_005c09f0 at 005c09f5
;   crt_unknown.c_FUN_005c10e8 at 005c110b
;   crt_unknown.c_FUN_005c68f8 at 005c6996
;   crt_unknown.c_FUN_005c7018 at 005c71c0
;
; Referenced Globals:
;   undefined4 DAT_00626220
;   undefined4 DAT_00626224
;   undefined4 DAT_00626228
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626618 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626620 = 005c50d4
;   undefined4 DAT_02c9f040
;   undefined4 DAT_02c9f690
;
; Called Functions:
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c6750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0a00
        ;   Label: crt_unknown.c_FUN_005c0a00
    PUSH ESI                            ; 005c0a01
    PUSH EDI                            ; 005c0a02
    MOV EDI,dword ptr [ESP + 0x10]      ; 005c0a03
    TEST EDI,EDI                        ; 005c0a07
    JZ 0x005c0b02                       ; 005c0a09
        ;   XREF to: 005c0b02 (CONDITIONAL_JUMP)  ; LAB_005c0b02
    CALL dword ptr [0x00626618]         ; 005c0a0f | PTR_crt_unknown.c_FUN_005c50d4_00626618
    MOV ESI,dword ptr [0x02c9f040]      ; 005c0a15 | DAT_02c9f040
    TEST ESI,ESI                        ; 005c0a1b
    JZ 0x005c0a5f                       ; 005c0a1d
        ;   XREF to: 005c0a5f (CONDITIONAL_JUMP)  ; LAB_005c0a5f
    CMP ESI,EDI                         ; 005c0a1f
    JA 0x005c0a2f                       ; 005c0a21
        ;   XREF to: 005c0a2f (CONDITIONAL_JUMP)  ; LAB_005c0a2f
    MOV EAX,dword ptr [ESI]             ; 005c0a23
    ADD EAX,ESI                         ; 005c0a25
    CMP EAX,EDI                         ; 005c0a27
    JA 0x005c0abc                       ; 005c0a29
        ;   XREF to: 005c0abc (CONDITIONAL_JUMP)  ; LAB_005c0abc
    MOV EDX,ESI                         ; 005c0a2f
        ;   Label: LAB_005c0a2f
    MOV ESI,dword ptr [ESI + 0x4]       ; 005c0a31
    TEST ESI,ESI                        ; 005c0a34
    JZ 0x005c0a48                       ; 005c0a36
        ;   XREF to: 005c0a48 (CONDITIONAL_JUMP)  ; LAB_005c0a48
    CMP ESI,EDI                         ; 005c0a38
    JA 0x005c0a48                       ; 005c0a3a
        ;   XREF to: 005c0a48 (CONDITIONAL_JUMP)  ; LAB_005c0a48
    MOV EAX,dword ptr [ESI]             ; 005c0a3c
    ADD EAX,ESI                         ; 005c0a3e
    CMP EAX,EDI                         ; 005c0a40
    JA 0x005c0abc                       ; 005c0a42
        ;   XREF to: 005c0abc (CONDITIONAL_JUMP)  ; LAB_005c0abc
    MOV ESI,dword ptr [EDX + 0x8]       ; 005c0a48
        ;   Label: LAB_005c0a48
    TEST ESI,ESI                        ; 005c0a4b
    JZ 0x005c0a5f                       ; 005c0a4d
        ;   XREF to: 005c0a5f (CONDITIONAL_JUMP)  ; LAB_005c0a5f
    CMP ESI,EDI                         ; 005c0a4f
    JA 0x005c0a5f                       ; 005c0a51
        ;   XREF to: 005c0a5f (CONDITIONAL_JUMP)  ; LAB_005c0a5f
    MOV EAX,dword ptr [ESI]             ; 005c0a53
    ADD EAX,ESI                         ; 005c0a55
    CMP EAX,EDI                         ; 005c0a57
    JA 0x005c0abc                       ; 005c0a59
        ;   XREF to: 005c0abc (CONDITIONAL_JUMP)  ; LAB_005c0abc
    MOV ESI,dword ptr [0x00626224]      ; 005c0a5f | DAT_00626224
        ;   Label: LAB_005c0a5f
    TEST ESI,ESI                        ; 005c0a65
    JZ 0x005c0a9d                       ; 005c0a67
        ;   XREF to: 005c0a9d (CONDITIONAL_JUMP)  ; LAB_005c0a9d
    CMP ESI,EDI                         ; 005c0a69
    JA 0x005c0a75                       ; 005c0a6b
        ;   XREF to: 005c0a75 (CONDITIONAL_JUMP)  ; LAB_005c0a75
    MOV EAX,dword ptr [ESI]             ; 005c0a6d
    ADD EAX,ESI                         ; 005c0a6f
    CMP EAX,EDI                         ; 005c0a71
    JA 0x005c0abc                       ; 005c0a73
        ;   XREF to: 005c0abc (CONDITIONAL_JUMP)  ; LAB_005c0abc
    MOV EDX,ESI                         ; 005c0a75
        ;   Label: LAB_005c0a75
    MOV ESI,dword ptr [ESI + 0x4]       ; 005c0a77
    TEST ESI,ESI                        ; 005c0a7a
    JZ 0x005c0a8a                       ; 005c0a7c
        ;   XREF to: 005c0a8a (CONDITIONAL_JUMP)  ; LAB_005c0a8a
    CMP ESI,EDI                         ; 005c0a7e
    JA 0x005c0a8a                       ; 005c0a80
        ;   XREF to: 005c0a8a (CONDITIONAL_JUMP)  ; LAB_005c0a8a
    MOV EAX,dword ptr [ESI]             ; 005c0a82
    ADD EAX,ESI                         ; 005c0a84
    CMP EAX,EDI                         ; 005c0a86
    JA 0x005c0abc                       ; 005c0a88
        ;   XREF to: 005c0abc (CONDITIONAL_JUMP)  ; LAB_005c0abc
    MOV ESI,dword ptr [EDX + 0x8]       ; 005c0a8a
        ;   Label: LAB_005c0a8a
    TEST ESI,ESI                        ; 005c0a8d
    JZ 0x005c0a9d                       ; 005c0a8f
        ;   XREF to: 005c0a9d (CONDITIONAL_JUMP)  ; LAB_005c0a9d
    CMP ESI,EDI                         ; 005c0a91
    JA 0x005c0a9d                       ; 005c0a93
        ;   XREF to: 005c0a9d (CONDITIONAL_JUMP)  ; LAB_005c0a9d
    MOV EAX,dword ptr [ESI]             ; 005c0a95
    ADD EAX,ESI                         ; 005c0a97
    CMP EAX,EDI                         ; 005c0a99
    JA 0x005c0abc                       ; 005c0a9b
        ;   XREF to: 005c0abc (CONDITIONAL_JUMP)  ; LAB_005c0abc
    MOV ESI,dword ptr [0x00626220]      ; 005c0a9d | DAT_00626220
        ;   Label: LAB_005c0a9d
    TEST ESI,ESI                        ; 005c0aa3
    JZ 0x005c0afc                       ; 005c0aa5
        ;   XREF to: 005c0afc (CONDITIONAL_JUMP)  ; LAB_005c0afc
    CMP ESI,EDI                         ; 005c0aa7
        ;   Label: LAB_005c0aa7
    JA 0x005c0ab3                       ; 005c0aa9
        ;   XREF to: 005c0ab3 (CONDITIONAL_JUMP)  ; LAB_005c0ab3
    MOV EAX,dword ptr [ESI]             ; 005c0aab
    ADD EAX,ESI                         ; 005c0aad
    CMP EAX,EDI                         ; 005c0aaf
    JA 0x005c0abc                       ; 005c0ab1
        ;   XREF to: 005c0abc (CONDITIONAL_JUMP)  ; LAB_005c0abc
    MOV ESI,dword ptr [ESI + 0x8]       ; 005c0ab3
        ;   Label: LAB_005c0ab3
    TEST ESI,ESI                        ; 005c0ab6
    JNZ 0x005c0aa7                      ; 005c0ab8
        ;   XREF to: 005c0aa7 (CONDITIONAL_JUMP)  ; LAB_005c0aa7
    JMP 0x005c0afc                      ; 005c0aba
        ;   XREF to: 005c0afc (UNCONDITIONAL_JUMP)  ; LAB_005c0afc
    MOV EAX,0x626220                    ; 005c0abc | DAT_00626220
        ;   Label: LAB_005c0abc
    MOV DX,DS                           ; 005c0ac1
    AND EDX,0xffff                      ; 005c0ac3
    MOV EBX,ESI                         ; 005c0ac9
    MOV EAX,EDI                         ; 005c0acb
    CALL crt_unknown.c_FUN_005c6750     ; 005c0acd
        ;   XREF to: 005c6750 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6750()
    MOV EDX,dword ptr [0x00626224]      ; 005c0ad2 | DAT_00626224
    MOV dword ptr [0x02c9f040],ESI      ; 005c0ad8 | DAT_02c9f040
    CMP ESI,EDX                         ; 005c0ade
    JNC 0x005c0af4                      ; 005c0ae0
        ;   XREF to: 005c0af4 (CONDITIONAL_JUMP)  ; LAB_005c0af4
    MOV EBX,dword ptr [0x00626228]      ; 005c0ae2 | DAT_00626228
    MOV EAX,dword ptr [ESI + 0x14]      ; 005c0ae8
    CMP EAX,EBX                         ; 005c0aeb
    JBE 0x005c0af4                      ; 005c0aed
        ;   XREF to: 005c0af4 (CONDITIONAL_JUMP)  ; LAB_005c0af4
    MOV [0x00626228],EAX                ; 005c0aef | DAT_00626228
    XOR AH,AH                           ; 005c0af4
        ;   Label: LAB_005c0af4
    MOV byte ptr [0x02c9f690],AH        ; 005c0af6 | DAT_02c9f690
    CALL dword ptr [0x00626620]         ; 005c0afc | PTR_crt_unknown.c_FUN_005c50d4_00626620
        ;   Label: LAB_005c0afc
    POP EDI                             ; 005c0b02
        ;   Label: LAB_005c0b02
    POP ESI                             ; 005c0b03
    POP EBX                             ; 005c0b04
    RET                                 ; 005c0b05

