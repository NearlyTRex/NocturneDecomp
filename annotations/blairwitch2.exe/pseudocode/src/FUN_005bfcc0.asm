; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005bfcc0(uint param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_005bfdd4 at 005bff67
;
; Referenced Globals:
;   void* PTR_CloseHandle_005c850c = 001c8c32
;   void* PTR_CreateFileA_005c8518 = 001c8c64
;   void* PTR_GetFileType_005c8598 = 001c8eb6
;   void* PTR_GetLastError_005c85a0 = 001c8ed8
;   undefined4 DAT_005f1a10
;   TerminatedCString s_conin_005f1a14
;   undefined4 DAT_005f1a1c
;   undefined2 DAT_0061f289
;
; Called Functions:
;   CloseHandle
;   CreateFileA
;   FUN_005b8130
;   FUN_005b8c30
;   GetFileType
;   GetLastError
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfcc0
        ;   Label: FUN_005bfcc0
    PUSH ESI                            ; 005bfcc1
    PUSH EDI                            ; 005bfcc2
    MOV ESI,dword ptr [ESP + 0x14]      ; 005bfcc3
    MOV DX,word ptr [0x0061f289]        ; 005bfcc7 | DAT_0061f289
    XOR EBX,EBX                         ; 005bfcce
    CMP DX,0x8000                       ; 005bfcd0
    JNC 0x005bfcde                      ; 005bfcd5
        ;   XREF to: 005bfcde (CONDITIONAL_JUMP)  ; LAB_005bfcde
    MOV EAX,0x20                        ; 005bfcd7
    JMP 0x005bfce3                      ; 005bfcdc
        ;   XREF to: 005bfce3 (UNCONDITIONAL_JUMP)  ; LAB_005bfce3
    MOV EAX,0x40                        ; 005bfcde
        ;   Label: LAB_005bfcde
    TEST dword ptr [ESP + 0x10],EAX     ; 005bfce3
        ;   Label: LAB_005bfce3
    JZ 0x005bfd67                       ; 005bfce7
        ;   XREF to: 005bfd67 (CONDITIONAL_JUMP)  ; LAB_005bfd67
    PUSH 0x5f1a10                       ; 005bfced | DAT_005f1a10
    PUSH ESI                            ; 005bfcf2
    CALL FUN_005b8130                   ; 005bfcf3
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 005bfcf8
    TEST EAX,EAX                        ; 005bfcfb
    JNZ 0x005bfd06                      ; 005bfcfd
        ;   XREF to: 005bfd06 (CONDITIONAL_JUMP)  ; LAB_005bfd06
    MOV EAX,0x5f1a14                    ; 005bfcff | = "conin$"
    JMP 0x005bfd08                      ; 005bfd04
        ;   XREF to: 005bfd08 (UNCONDITIONAL_JUMP)  ; LAB_005bfd08
    MOV EAX,ESI                         ; 005bfd06
        ;   Label: LAB_005bfd06
    PUSH 0x0                            ; 005bfd08
        ;   Label: LAB_005bfd08
    PUSH 0x0                            ; 005bfd0a
    PUSH 0x3                            ; 005bfd0c
    PUSH 0x0                            ; 005bfd0e
    PUSH 0x0                            ; 005bfd10
    PUSH 0x0                            ; 005bfd12
    PUSH EAX                            ; 005bfd14 | = "conin$"
    CALL dword ptr CS:[0x5c8518]        ; 005bfd15 | PTR_CreateFileA_005c8518
    MOV EDI,EAX                         ; 005bfd1c
    CMP EAX,-0x1                        ; 005bfd1e
    JZ 0x005bfd4b                       ; 005bfd21
        ;   XREF to: 005bfd4b (CONDITIONAL_JUMP)  ; LAB_005bfd4b
    PUSH EAX                            ; 005bfd23
    CALL dword ptr CS:[0x5c8598]        ; 005bfd24 | PTR_GetFileType_005c8598
    CMP EAX,0x2                         ; 005bfd2b
    JNZ 0x005bfd37                      ; 005bfd2e
        ;   XREF to: 005bfd37 (CONDITIONAL_JUMP)  ; LAB_005bfd37
    MOV EBX,0x2000                      ; 005bfd30
    JMP 0x005bfd41                      ; 005bfd35
        ;   XREF to: 005bfd41 (UNCONDITIONAL_JUMP)  ; LAB_005bfd41
    CMP EAX,0x3                         ; 005bfd37
        ;   Label: LAB_005bfd37
    JNZ 0x005bfd41                      ; 005bfd3a
        ;   XREF to: 005bfd41 (CONDITIONAL_JUMP)  ; LAB_005bfd41
    MOV EBX,0x1000                      ; 005bfd3c
    PUSH EDI                            ; 005bfd41
        ;   Label: LAB_005bfd41
    CALL dword ptr CS:[0x5c850c]        ; 005bfd42 | PTR_CloseHandle_005c850c
    JMP 0x005bfd67                      ; 005bfd49
        ;   XREF to: 005bfd67 (UNCONDITIONAL_JUMP)  ; LAB_005bfd67
    CMP word ptr [0x0061f289],0x8000    ; 005bfd4b | DAT_0061f289
        ;   Label: LAB_005bfd4b
    JNC 0x005bfd62                      ; 005bfd54
        ;   XREF to: 005bfd62 (CONDITIONAL_JUMP)  ; LAB_005bfd62
    CALL dword ptr CS:[0x5c85a0]        ; 005bfd56 | PTR_GetLastError_005c85a0
    CMP EAX,0x5                         ; 005bfd5d
    JNZ 0x005bfd67                      ; 005bfd60
        ;   XREF to: 005bfd67 (CONDITIONAL_JUMP)  ; LAB_005bfd67
    MOV EBX,0x2000                      ; 005bfd62
        ;   Label: LAB_005bfd62
    TEST byte ptr [ESP + 0x10],0x10     ; 005bfd67
        ;   Label: LAB_005bfd67
    JZ 0x005bfd7a                       ; 005bfd6c
        ;   XREF to: 005bfd7a (CONDITIONAL_JUMP)  ; LAB_005bfd7a
    AND BX,0xfb6                        ; 005bfd6e
    OR BX,0x4049                        ; 005bfd73
    JMP 0x005bfdbb                      ; 005bfd78
        ;   XREF to: 005bfdbb (UNCONDITIONAL_JUMP)  ; LAB_005bfdbb
    TEST BH,0x20                        ; 005bfd7a
        ;   Label: LAB_005bfd7a
    JNZ 0x005bfdbb                      ; 005bfd7d
        ;   XREF to: 005bfdbb (CONDITIONAL_JUMP)  ; LAB_005bfdbb
    TEST BH,0x10                        ; 005bfd7f
    JNZ 0x005bfdbb                      ; 005bfd82
        ;   XREF to: 005bfdbb (CONDITIONAL_JUMP)  ; LAB_005bfdbb
    MOV DL,0x2e                         ; 005bfd84
    OR BH,0x80                          ; 005bfd86
    MOV AL,byte ptr [ESI]               ; 005bfd89
        ;   Label: LAB_005bfd89
    CMP AL,DL                           ; 005bfd8b
    JZ 0x005bfda1                       ; 005bfd8d
        ;   XREF to: 005bfda1 (CONDITIONAL_JUMP)  ; LAB_005bfda1
    CMP AL,0x0                          ; 005bfd8f
    JZ 0x005bfd9f                       ; 005bfd91
        ;   XREF to: 005bfd9f (CONDITIONAL_JUMP)  ; LAB_005bfd9f
    INC ESI                             ; 005bfd93
    MOV AL,byte ptr [ESI]               ; 005bfd94
    CMP AL,DL                           ; 005bfd96
    JZ 0x005bfda1                       ; 005bfd98
        ;   XREF to: 005bfda1 (CONDITIONAL_JUMP)  ; LAB_005bfda1
    INC ESI                             ; 005bfd9a
    CMP AL,0x0                          ; 005bfd9b
    JNZ 0x005bfd89                      ; 005bfd9d
        ;   XREF to: 005bfd89 (CONDITIONAL_JUMP)  ; LAB_005bfd89
    SUB ESI,ESI                         ; 005bfd9f
        ;   Label: LAB_005bfd9f
    TEST ESI,ESI                        ; 005bfda1
        ;   Label: LAB_005bfda1
    JZ 0x005bfdbb                       ; 005bfda3
        ;   XREF to: 005bfdbb (CONDITIONAL_JUMP)  ; LAB_005bfdbb
    PUSH 0x5f1a1c                       ; 005bfda5 | DAT_005f1a1c
    INC ESI                             ; 005bfdaa
    PUSH ESI                            ; 005bfdab
    CALL FUN_005b8c30                   ; 005bfdac
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 005bfdb1
    TEST EAX,EAX                        ; 005bfdb4
    JNZ 0x005bfdbb                      ; 005bfdb6
        ;   XREF to: 005bfdbb (CONDITIONAL_JUMP)  ; LAB_005bfdbb
    OR BL,0x49                          ; 005bfdb8
    MOV DL,byte ptr [ESP + 0x10]        ; 005bfdbb
        ;   Label: LAB_005bfdbb
    OR BX,0x124                         ; 005bfdbf
    TEST DL,0x1                         ; 005bfdc4
    JNZ 0x005bfdcc                      ; 005bfdc7
        ;   XREF to: 005bfdcc (CONDITIONAL_JUMP)  ; LAB_005bfdcc
    OR BL,0x92                          ; 005bfdc9
    MOV EAX,EBX                         ; 005bfdcc
        ;   Label: LAB_005bfdcc
    POP EDI                             ; 005bfdce
    POP ESI                             ; 005bfdcf
    POP EBX                             ; 005bfdd0
    RET                                 ; 005bfdd1

