; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b2a80(int param_1,byte *param_2)
;
;
; XREF[27]:
;   FUN_0047bf80 at 0047c000
;   FUN_0047c8e0 at 0047c963
;   FUN_0047d230 at 0047d45b
;   FUN_0047e470 at 0047e695
;   FUN_0047ed50 at 0047ee25
;   FUN_0047f3e0 at 0047f4a1
;   FUN_0047fa80 at 0047fdf2
;   FUN_00483c00 at 00483cc6
;   FUN_00486120 at 00486169
;   FUN_004864f0 at 00486556
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2a80
        ;   Label: FUN_004b2a80
    PUSH ESI                            ; 004b2a81
    PUSH EDI                            ; 004b2a82
    PUSH EBP                            ; 004b2a83
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b2a84
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b2a88
    MOV EDX,dword ptr [EBX + 0x4210]    ; 004b2a8c
    XOR EDI,EDI                         ; 004b2a92
    TEST EDX,EDX                        ; 004b2a94
    JZ 0x004b2ae6                       ; 004b2a96
        ;   XREF to: 004b2ae6 (CONDITIONAL_JUMP)  ; LAB_004b2ae6
    MOV ECX,ESI                         ; 004b2a98
    MOV DL,0xa                          ; 004b2a9a
        ;   Label: LAB_004b2a9a
    MOV ESI,ECX                         ; 004b2a9c
    MOV AL,byte ptr [ESI]               ; 004b2a9e
        ;   Label: LAB_004b2a9e
    CMP AL,DL                           ; 004b2aa0
    JZ 0x004b2ab6                       ; 004b2aa2
        ;   XREF to: 004b2ab6 (CONDITIONAL_JUMP)  ; LAB_004b2ab6
    CMP AL,0x0                          ; 004b2aa4
    JZ 0x004b2ab4                       ; 004b2aa6
        ;   XREF to: 004b2ab4 (CONDITIONAL_JUMP)  ; LAB_004b2ab4
    INC ESI                             ; 004b2aa8
    MOV AL,byte ptr [ESI]               ; 004b2aa9
    CMP AL,DL                           ; 004b2aab
    JZ 0x004b2ab6                       ; 004b2aad
        ;   XREF to: 004b2ab6 (CONDITIONAL_JUMP)  ; LAB_004b2ab6
    INC ESI                             ; 004b2aaf
    CMP AL,0x0                          ; 004b2ab0
    JNZ 0x004b2a9e                      ; 004b2ab2
        ;   XREF to: 004b2a9e (CONDITIONAL_JUMP)  ; LAB_004b2a9e
    SUB ESI,ESI                         ; 004b2ab4
        ;   Label: LAB_004b2ab4
    MOV EBP,ESI                         ; 004b2ab6
        ;   Label: LAB_004b2ab6
    TEST ESI,ESI                        ; 004b2ab8
    JZ 0x004b2abf                       ; 004b2aba
        ;   XREF to: 004b2abf (CONDITIONAL_JUMP)  ; LAB_004b2abf
    MOV byte ptr [ESI],0x0              ; 004b2abc
    PUSH ECX                            ; 004b2abf
        ;   Label: LAB_004b2abf
    MOV EAX,dword ptr [EBX + 0x4214]    ; 004b2ac0
    PUSH EAX                            ; 004b2ac6
    MOV EDX,dword ptr [EAX + 0x6a44]    ; 004b2ac7
    CALL dword ptr [EDX + 0x8]          ; 004b2acd
    ADD ESP,0x8                         ; 004b2ad0
    CMP EAX,EDI                         ; 004b2ad3
    JLE 0x004b2ad9                      ; 004b2ad5
        ;   XREF to: 004b2ad9 (CONDITIONAL_JUMP)  ; LAB_004b2ad9
    MOV EDI,EAX                         ; 004b2ad7
    TEST EBP,EBP                        ; 004b2ad9
        ;   Label: LAB_004b2ad9
    JZ 0x004b2b1f                       ; 004b2adb
        ;   XREF to: 004b2b1f (CONDITIONAL_JUMP)  ; LAB_004b2b1f
    LEA ECX,[EBP + 0x1]                 ; 004b2add
    MOV byte ptr [EBP],0xa              ; 004b2ae0
    JMP 0x004b2a9a                      ; 004b2ae4
        ;   XREF to: 004b2a9a (UNCONDITIONAL_JUMP)  ; LAB_004b2a9a
    XOR ECX,ECX                         ; 004b2ae6
        ;   Label: LAB_004b2ae6
    CMP CL,byte ptr [ESI]               ; 004b2ae8
        ;   Label: LAB_004b2ae8
    JZ 0x004b2b1f                       ; 004b2aea
        ;   XREF to: 004b2b1f (CONDITIONAL_JUMP)  ; LAB_004b2b1f
    MOV EDX,ECX                         ; 004b2aec
    XOR EAX,EAX                         ; 004b2aee
        ;   Label: LAB_004b2aee
    MOV AL,byte ptr [ESI]               ; 004b2af0
    INC ESI                             ; 004b2af2
    CMP EAX,0xa                         ; 004b2af3
    JNZ 0x004b2b0a                      ; 004b2af6
        ;   XREF to: 004b2b0a (CONDITIONAL_JUMP)  ; LAB_004b2b0a
    TEST EDX,EDX                        ; 004b2af8
        ;   Label: LAB_004b2af8
    JLE 0x004b2b02                      ; 004b2afa
        ;   XREF to: 004b2b02 (CONDITIONAL_JUMP)  ; LAB_004b2b02
    SUB EDX,dword ptr [EBX + 0x41f4]    ; 004b2afc
    CMP EDX,EDI                         ; 004b2b02
        ;   Label: LAB_004b2b02
    JLE 0x004b2ae8                      ; 004b2b04
        ;   XREF to: 004b2ae8 (CONDITIONAL_JUMP)  ; LAB_004b2ae8
    MOV EDI,EDX                         ; 004b2b06
    JMP 0x004b2ae8                      ; 004b2b08
        ;   XREF to: 004b2ae8 (UNCONDITIONAL_JUMP)  ; LAB_004b2ae8
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x35e8] ; 004b2b0a
        ;   Label: LAB_004b2b0a
    ADD EAX,dword ptr [EBX + 0x41f4]    ; 004b2b11
    ADD EDX,EAX                         ; 004b2b17
    CMP CL,byte ptr [ESI]               ; 004b2b19
    JNZ 0x004b2aee                      ; 004b2b1b
        ;   XREF to: 004b2aee (CONDITIONAL_JUMP)  ; LAB_004b2aee
    JMP 0x004b2af8                      ; 004b2b1d
        ;   XREF to: 004b2af8 (UNCONDITIONAL_JUMP)  ; LAB_004b2af8
    MOV EAX,EDI                         ; 004b2b1f
        ;   Label: LAB_004b2b1f
    POP EBP                             ; 004b2b21
    POP EDI                             ; 004b2b22
    POP ESI                             ; 004b2b23
    POP EBX                             ; 004b2b24
    RET                                 ; 004b2b25

