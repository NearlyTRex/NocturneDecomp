; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005c7f80(uint param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_005c8094 at 005c8227
;
; Referenced Globals:
;   void* PTR_CloseHandle_005d051c = 001d0c5a
;   void* PTR_CreateFileA_005d0528 = 001d0c8c
;   void* PTR_GetFileType_005d05a8 = 001d0ede
;   void* PTR_GetLastError_005d05b0 = 001d0f00
;   undefined4 DAT_005fabb8
;   TerminatedCString s_conin_005fabbc
;   undefined4 DAT_005fabc4
;   undefined2 DAT_006265e1
;
; Called Functions:
;   CloseHandle
;   CreateFileA
;   FUN_005c04e0
;   FUN_005c0f80
;   GetFileType
;   GetLastError
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7f80
        ;   Label: FUN_005c7f80
    PUSH ESI                            ; 005c7f81
    PUSH EDI                            ; 005c7f82
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c7f83
    MOV DX,word ptr [0x006265e1]        ; 005c7f87 | DAT_006265e1
    XOR EBX,EBX                         ; 005c7f8e
    CMP DX,0x8000                       ; 005c7f90
    JNC 0x005c7f9e                      ; 005c7f95
        ;   XREF to: 005c7f9e (CONDITIONAL_JUMP)  ; LAB_005c7f9e
    MOV EAX,0x20                        ; 005c7f97
    JMP 0x005c7fa3                      ; 005c7f9c
        ;   XREF to: 005c7fa3 (UNCONDITIONAL_JUMP)  ; LAB_005c7fa3
    MOV EAX,0x40                        ; 005c7f9e
        ;   Label: LAB_005c7f9e
    TEST dword ptr [ESP + 0x10],EAX     ; 005c7fa3
        ;   Label: LAB_005c7fa3
    JZ 0x005c8027                       ; 005c7fa7
        ;   XREF to: 005c8027 (CONDITIONAL_JUMP)  ; LAB_005c8027
    PUSH 0x5fabb8                       ; 005c7fad | DAT_005fabb8
    PUSH ESI                            ; 005c7fb2
    CALL FUN_005c04e0                   ; 005c7fb3
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005c7fb8
    TEST EAX,EAX                        ; 005c7fbb
    JNZ 0x005c7fc6                      ; 005c7fbd
        ;   XREF to: 005c7fc6 (CONDITIONAL_JUMP)  ; LAB_005c7fc6
    MOV EAX,0x5fabbc                    ; 005c7fbf | = "conin$"
    JMP 0x005c7fc8                      ; 005c7fc4
        ;   XREF to: 005c7fc8 (UNCONDITIONAL_JUMP)  ; LAB_005c7fc8
    MOV EAX,ESI                         ; 005c7fc6
        ;   Label: LAB_005c7fc6
    PUSH 0x0                            ; 005c7fc8
        ;   Label: LAB_005c7fc8
    PUSH 0x0                            ; 005c7fca
    PUSH 0x3                            ; 005c7fcc
    PUSH 0x0                            ; 005c7fce
    PUSH 0x0                            ; 005c7fd0
    PUSH 0x0                            ; 005c7fd2
    PUSH EAX                            ; 005c7fd4 | = "conin$"
    CALL dword ptr CS:[0x5d0528]        ; 005c7fd5 | PTR_CreateFileA_005d0528
    MOV EDI,EAX                         ; 005c7fdc
    CMP EAX,-0x1                        ; 005c7fde
    JZ 0x005c800b                       ; 005c7fe1
        ;   XREF to: 005c800b (CONDITIONAL_JUMP)  ; LAB_005c800b
    PUSH EAX                            ; 005c7fe3
    CALL dword ptr CS:[0x5d05a8]        ; 005c7fe4 | PTR_GetFileType_005d05a8
    CMP EAX,0x2                         ; 005c7feb
    JNZ 0x005c7ff7                      ; 005c7fee
        ;   XREF to: 005c7ff7 (CONDITIONAL_JUMP)  ; LAB_005c7ff7
    MOV EBX,0x2000                      ; 005c7ff0
    JMP 0x005c8001                      ; 005c7ff5
        ;   XREF to: 005c8001 (UNCONDITIONAL_JUMP)  ; LAB_005c8001
    CMP EAX,0x3                         ; 005c7ff7
        ;   Label: LAB_005c7ff7
    JNZ 0x005c8001                      ; 005c7ffa
        ;   XREF to: 005c8001 (CONDITIONAL_JUMP)  ; LAB_005c8001
    MOV EBX,0x1000                      ; 005c7ffc
    PUSH EDI                            ; 005c8001
        ;   Label: LAB_005c8001
    CALL dword ptr CS:[0x5d051c]        ; 005c8002 | PTR_CloseHandle_005d051c
    JMP 0x005c8027                      ; 005c8009
        ;   XREF to: 005c8027 (UNCONDITIONAL_JUMP)  ; LAB_005c8027
    CMP word ptr [0x006265e1],0x8000    ; 005c800b | DAT_006265e1
        ;   Label: LAB_005c800b
    JNC 0x005c8022                      ; 005c8014
        ;   XREF to: 005c8022 (CONDITIONAL_JUMP)  ; LAB_005c8022
    CALL dword ptr CS:[0x5d05b0]        ; 005c8016 | PTR_GetLastError_005d05b0
    CMP EAX,0x5                         ; 005c801d
    JNZ 0x005c8027                      ; 005c8020
        ;   XREF to: 005c8027 (CONDITIONAL_JUMP)  ; LAB_005c8027
    MOV EBX,0x2000                      ; 005c8022
        ;   Label: LAB_005c8022
    TEST byte ptr [ESP + 0x10],0x10     ; 005c8027
        ;   Label: LAB_005c8027
    JZ 0x005c803a                       ; 005c802c
        ;   XREF to: 005c803a (CONDITIONAL_JUMP)  ; LAB_005c803a
    AND BX,0xfb6                        ; 005c802e
    OR BX,0x4049                        ; 005c8033
    JMP 0x005c807b                      ; 005c8038
        ;   XREF to: 005c807b (UNCONDITIONAL_JUMP)  ; LAB_005c807b
    TEST BH,0x20                        ; 005c803a
        ;   Label: LAB_005c803a
    JNZ 0x005c807b                      ; 005c803d
        ;   XREF to: 005c807b (CONDITIONAL_JUMP)  ; LAB_005c807b
    TEST BH,0x10                        ; 005c803f
    JNZ 0x005c807b                      ; 005c8042
        ;   XREF to: 005c807b (CONDITIONAL_JUMP)  ; LAB_005c807b
    MOV DL,0x2e                         ; 005c8044
    OR BH,0x80                          ; 005c8046
    MOV AL,byte ptr [ESI]               ; 005c8049
        ;   Label: LAB_005c8049
    CMP AL,DL                           ; 005c804b
    JZ 0x005c8061                       ; 005c804d
        ;   XREF to: 005c8061 (CONDITIONAL_JUMP)  ; LAB_005c8061
    CMP AL,0x0                          ; 005c804f
    JZ 0x005c805f                       ; 005c8051
        ;   XREF to: 005c805f (CONDITIONAL_JUMP)  ; LAB_005c805f
    INC ESI                             ; 005c8053
    MOV AL,byte ptr [ESI]               ; 005c8054
    CMP AL,DL                           ; 005c8056
    JZ 0x005c8061                       ; 005c8058
        ;   XREF to: 005c8061 (CONDITIONAL_JUMP)  ; LAB_005c8061
    INC ESI                             ; 005c805a
    CMP AL,0x0                          ; 005c805b
    JNZ 0x005c8049                      ; 005c805d
        ;   XREF to: 005c8049 (CONDITIONAL_JUMP)  ; LAB_005c8049
    SUB ESI,ESI                         ; 005c805f
        ;   Label: LAB_005c805f
    TEST ESI,ESI                        ; 005c8061
        ;   Label: LAB_005c8061
    JZ 0x005c807b                       ; 005c8063
        ;   XREF to: 005c807b (CONDITIONAL_JUMP)  ; LAB_005c807b
    PUSH 0x5fabc4                       ; 005c8065 | DAT_005fabc4
    INC ESI                             ; 005c806a
    PUSH ESI                            ; 005c806b
    CALL FUN_005c0f80                   ; 005c806c
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 005c8071
    TEST EAX,EAX                        ; 005c8074
    JNZ 0x005c807b                      ; 005c8076
        ;   XREF to: 005c807b (CONDITIONAL_JUMP)  ; LAB_005c807b
    OR BL,0x49                          ; 005c8078
    MOV DL,byte ptr [ESP + 0x10]        ; 005c807b
        ;   Label: LAB_005c807b
    OR BX,0x124                         ; 005c807f
    TEST DL,0x1                         ; 005c8084
    JNZ 0x005c808c                      ; 005c8087
        ;   XREF to: 005c808c (CONDITIONAL_JUMP)  ; LAB_005c808c
    OR BL,0x92                          ; 005c8089
    MOV EAX,EBX                         ; 005c808c
        ;   Label: LAB_005c808c
    POP EDI                             ; 005c808e
    POP ESI                             ; 005c808f
    POP EBX                             ; 005c8090
    RET                                 ; 005c8091

