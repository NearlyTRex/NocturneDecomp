; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00507b50(int *param_1)
;
;
; XREF[3]:
;   FUN_004b8100 at 004b891e
;   FUN_00507b30 at 00507b46
;   FUN_00559f80 at 0055aaef
;
; Referenced Globals:
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00507b50
        ;   Label: FUN_00507b50
    PUSH EDI                            ; 00507b51
    PUSH EBP                            ; 00507b52
    MOV ESI,dword ptr [ESP + 0x10]      ; 00507b53
    MOV EBP,dword ptr [ESI + 0x4]       ; 00507b57
    MOV ECX,dword ptr [ESI + 0x8]       ; 00507b5a
    MOV EDI,dword ptr [ESI]             ; 00507b5d
    TEST ECX,ECX                        ; 00507b5f
    JLE 0x00507be3                      ; 00507b61
        ;   XREF to: 00507be3 (CONDITIONAL_JUMP)  ; LAB_00507be3
    XOR EAX,EAX                         ; 00507b67
    CMP EDI,ECX                         ; 00507b69
    JLE 0x00507b72                      ; 00507b6b
        ;   XREF to: 00507b72 (CONDITIONAL_JUMP)  ; LAB_00507b72
    MOV EAX,0x1                         ; 00507b6d
    MOV EDX,ECX                         ; 00507b72
        ;   Label: LAB_00507b72
    NEG EDX                             ; 00507b74
    CMP EDI,EDX                         ; 00507b76
    JGE 0x00507b7c                      ; 00507b78
        ;   XREF to: 00507b7c (CONDITIONAL_JUMP)  ; LAB_00507b7c
    OR AL,0x2                           ; 00507b7a
    CMP EBP,ECX                         ; 00507b7c
        ;   Label: LAB_00507b7c
    JLE 0x00507b82                      ; 00507b7e
        ;   XREF to: 00507b82 (CONDITIONAL_JUMP)  ; LAB_00507b82
    OR AL,0x4                           ; 00507b80
    MOV EDX,ECX                         ; 00507b82
        ;   Label: LAB_00507b82
    NEG EDX                             ; 00507b84
    CMP EBP,EDX                         ; 00507b86
    JGE 0x00507b8c                      ; 00507b88
        ;   XREF to: 00507b8c (CONDITIONAL_JUMP)  ; LAB_00507b8c
    OR AL,0x8                           ; 00507b8a
    TEST EAX,EAX                        ; 00507b8c
        ;   Label: LAB_00507b8c
    JZ 0x00507b9c                       ; 00507b8e
        ;   XREF to: 00507b9c (CONDITIONAL_JUMP)  ; LAB_00507b9c
    OR EAX,0x80000000                   ; 00507b90
    MOV dword ptr [ESI + 0x10],EAX      ; 00507b95
    POP EBP                             ; 00507b98
    POP EDI                             ; 00507b99
    POP ESI                             ; 00507b9a
    RET                                 ; 00507b9b
    PUSH EBX                            ; 00507b9c
        ;   Label: LAB_00507b9c
    MOV EAX,0x7fffffff                  ; 00507b9d
    MOV EDX,EAX                         ; 00507ba2
    SAR EDX,0x1f                        ; 00507ba4
    IDIV ECX                            ; 00507ba7
    MOV EBX,ECX                         ; 00507ba9
    MOV EDX,dword ptr [0x01c4eff8]      ; 00507bab | DAT_01c4eff8
    MOV dword ptr [ESI + 0xc],EAX       ; 00507bb1
    MOV EAX,EDI                         ; 00507bb4
    IMUL EDX                            ; 00507bb6
    IDIV EBX                            ; 00507bb8
    MOV EDX,dword ptr [0x01c4f000]      ; 00507bba | DAT_01c4f000
    MOV EBX,ECX                         ; 00507bc0
    ADD EAX,EDX                         ; 00507bc2
    MOV EDX,dword ptr [0x01c4effc]      ; 00507bc4 | DAT_01c4effc
    MOV dword ptr [ESI + 0x10],EAX      ; 00507bca
    MOV EAX,EBP                         ; 00507bcd
    IMUL EDX                            ; 00507bcf
    IDIV EBX                            ; 00507bd1
    MOV EDX,dword ptr [0x01c4f004]      ; 00507bd3 | DAT_01c4f004
    ADD EAX,EDX                         ; 00507bd9
    MOV dword ptr [ESI + 0x14],EAX      ; 00507bdb
    POP EBX                             ; 00507bde
    POP EBP                             ; 00507bdf
    POP EDI                             ; 00507be0
    POP ESI                             ; 00507be1
    RET                                 ; 00507be2
    MOV dword ptr [ESI + 0x10],0x80000010 ; 00507be3
        ;   Label: LAB_00507be3
    POP EBP                             ; 00507bea
    POP EDI                             ; 00507beb
    POP ESI                             ; 00507bec
    RET                                 ; 00507bed

