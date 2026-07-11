; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00570ad0(undefined4 param_1,uint *param_2,uint param_3)
;
;
; XREF[1]:
;   FUN_0056cd9b at 0056cdfb
;
; Called Functions:
;   FUN_0056b934
;   FUN_0056c864
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570ad0
        ;   Label: FUN_00570ad0
    PUSH ESI                            ; 00570ad1
    SUB ESP,0x48                        ; 00570ad2
    MOV ECX,dword ptr [ESP + 0x58]      ; 00570ad5
    MOV EAX,dword ptr [ECX]             ; 00570ad9
    MOV EDX,EAX                         ; 00570adb
    AND EDX,0x3                         ; 00570add
    CMP EDX,0x3                         ; 00570ae0
    JNZ 0x00570aec                      ; 00570ae3
        ;   XREF to: 00570aec (CONDITIONAL_JUMP)  ; LAB_00570aec
    MOV EBX,0x22                        ; 00570ae5
    JMP 0x00570b07                      ; 00570aea
        ;   XREF to: 00570b07 (UNCONDITIONAL_JUMP)  ; LAB_00570b07
    TEST AL,0x1                         ; 00570aec
        ;   Label: LAB_00570aec
    JZ 0x00570af4                       ; 00570aee
        ;   XREF to: 00570af4 (CONDITIONAL_JUMP)  ; LAB_00570af4
    XOR EBX,EBX                         ; 00570af0
    JMP 0x00570b07                      ; 00570af2
        ;   XREF to: 00570b07 (UNCONDITIONAL_JUMP)  ; LAB_00570b07
    TEST AL,0x2                         ; 00570af4
        ;   Label: LAB_00570af4
    JNZ 0x00570b02                      ; 00570af6
        ;   XREF to: 00570b02 (CONDITIONAL_JUMP)  ; LAB_00570b02
    MOV EAX,0xffffffff                  ; 00570af8
    JMP 0x00570bbc                      ; 00570afd
        ;   XREF to: 00570bbc (UNCONDITIONAL_JUMP)  ; LAB_00570bbc
    MOV EBX,0x21                        ; 00570b02
        ;   Label: LAB_00570b02
    TEST AL,0x8                         ; 00570b07
        ;   Label: LAB_00570b07
    JZ 0x00570b0e                       ; 00570b09
        ;   XREF to: 00570b0e (CONDITIONAL_JUMP)  ; LAB_00570b0e
    OR BL,0x10                          ; 00570b0b
    TEST AL,0x10                        ; 00570b0e
        ;   Label: LAB_00570b0e
    JZ 0x00570b15                       ; 00570b10
        ;   XREF to: 00570b15 (CONDITIONAL_JUMP)  ; LAB_00570b15
    OR BL,0x40                          ; 00570b12
    TEST AL,0x20                        ; 00570b15
        ;   Label: LAB_00570b15
    JZ 0x00570b1c                       ; 00570b17
        ;   XREF to: 00570b1c (CONDITIONAL_JUMP)  ; LAB_00570b1c
    AND BL,0xdf                         ; 00570b19
    TEST AH,0x1                         ; 00570b1c
        ;   Label: LAB_00570b1c
    JZ 0x00570b26                       ; 00570b1f
        ;   XREF to: 00570b26 (CONDITIONAL_JUMP)  ; LAB_00570b26
    OR BH,0x2                           ; 00570b21
    JMP 0x00570b30                      ; 00570b24
        ;   XREF to: 00570b30 (UNCONDITIONAL_JUMP)  ; LAB_00570b30
    MOV DL,byte ptr [ECX]               ; 00570b26
        ;   Label: LAB_00570b26
    OR DL,0x80                          ; 00570b28
    OR BH,0x1                           ; 00570b2b
    MOV byte ptr [ECX],DL               ; 00570b2e
    TEST AL,0x40                        ; 00570b30
        ;   Label: LAB_00570b30
    JZ 0x00570b5c                       ; 00570b32
        ;   XREF to: 00570b5c (CONDITIONAL_JUMP)  ; LAB_00570b5c
    MOV EAX,EBX                         ; 00570b34
    OR AL,0x20                          ; 00570b36
    TEST EAX,EAX                        ; 00570b38
    JZ 0x00570b5c                       ; 00570b3a
        ;   XREF to: 00570b5c (CONDITIONAL_JUMP)  ; LAB_00570b5c
    MOV EAX,ESP                         ; 00570b3c
    PUSH EAX                            ; 00570b3e
    MOV EDX,dword ptr [ESP + 0x58]      ; 00570b3f
    PUSH EDX                            ; 00570b43
    CALL FUN_0056c864                   ; 00570b44
        ;   XREF to: 0056c864 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c864()
    ADD ESP,0x8                         ; 00570b49
    CMP EAX,-0x1                        ; 00570b4c
    JZ 0x00570b5c                       ; 00570b4f
        ;   XREF to: 00570b5c (CONDITIONAL_JUMP)  ; LAB_00570b5c
    MOV EAX,0xffffffff                  ; 00570b51
    ADD ESP,0x48                        ; 00570b56
    POP ESI                             ; 00570b59
    POP EBX                             ; 00570b5a
    RET                                 ; 00570b5b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00570b5c
        ;   Label: LAB_00570b5c
    AND EAX,0x7000                      ; 00570b60
    XOR EDX,EDX                         ; 00570b65
    CMP EAX,0x2000                      ; 00570b67
    JC 0x00570b82                       ; 00570b6c
        ;   XREF to: 00570b82 (CONDITIONAL_JUMP)  ; LAB_00570b82
    JBE 0x00570b90                      ; 00570b6e
        ;   XREF to: 00570b90 (CONDITIONAL_JUMP)  ; LAB_00570b90
    CMP EAX,0x3000                      ; 00570b70
    JC 0x00570ba3                       ; 00570b75
        ;   XREF to: 00570ba3 (CONDITIONAL_JUMP)  ; LAB_00570ba3
    JBE 0x00570b97                      ; 00570b77
        ;   XREF to: 00570b97 (CONDITIONAL_JUMP)  ; LAB_00570b97
    CMP EAX,0x4000                      ; 00570b79
    JZ 0x00570b9e                       ; 00570b7e
        ;   XREF to: 00570b9e (CONDITIONAL_JUMP)  ; LAB_00570b9e
    JMP 0x00570ba3                      ; 00570b80
        ;   XREF to: 00570ba3 (UNCONDITIONAL_JUMP)  ; LAB_00570ba3
    CMP EAX,0x1000                      ; 00570b82
        ;   Label: LAB_00570b82
    JNZ 0x00570ba3                      ; 00570b87
        ;   XREF to: 00570ba3 (CONDITIONAL_JUMP)  ; LAB_00570ba3
    MOV EDX,0x20                        ; 00570b89
    JMP 0x00570ba3                      ; 00570b8e
        ;   XREF to: 00570ba3 (UNCONDITIONAL_JUMP)  ; LAB_00570ba3
    MOV EDX,0x30                        ; 00570b90
        ;   Label: LAB_00570b90
    JMP 0x00570ba3                      ; 00570b95
        ;   XREF to: 00570ba3 (UNCONDITIONAL_JUMP)  ; LAB_00570ba3
    MOV EDX,0x40                        ; 00570b97
        ;   Label: LAB_00570b97
    JMP 0x00570ba3                      ; 00570b9c
        ;   XREF to: 00570ba3 (UNCONDITIONAL_JUMP)  ; LAB_00570ba3
    MOV EDX,0x10                        ; 00570b9e
        ;   Label: LAB_00570b9e
    AND byte ptr [ESP + 0x5d],0x8f      ; 00570ba3
        ;   Label: LAB_00570ba3
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00570ba8
    PUSH ECX                            ; 00570bac
    PUSH EDX                            ; 00570bad
    PUSH EBX                            ; 00570bae
    MOV ESI,dword ptr [ESP + 0x60]      ; 00570baf
    PUSH ESI                            ; 00570bb3
    CALL FUN_0056b934                   ; 00570bb4
        ;   XREF to: 0056b934 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b934()
    ADD ESP,0x10                        ; 00570bb9
    ADD ESP,0x48                        ; 00570bbc
        ;   Label: LAB_00570bbc
    POP ESI                             ; 00570bbf
    POP EBX                             ; 00570bc0
    RET                                 ; 00570bc1

