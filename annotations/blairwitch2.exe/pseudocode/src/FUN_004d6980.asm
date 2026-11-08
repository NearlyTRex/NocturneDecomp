; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d6980(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004d6958 = 004d71ad
;   TerminatedCString s_ghoul_eat_wav_005daa78
;   TerminatedCString s_s_confused_while_walking_005daa88
;   TerminatedCString s_imp_jump_wav_005daab2
;   TerminatedCString s_imp_laugh_wav_005daac0
;   TerminatedCString s_imp_laugh_wav_005daacf
;   undefined4 DAT_005daae1
;   undefined4 DAT_005daae9
;   undefined4 DAT_005daaf1
;   undefined4 DAT_005daaf9
;   undefined4 DAT_005dab01
;   undefined4 DAT_005dab09
;   undefined4 DAT_005dab11
;   undefined4 DAT_005f8d5c
;   undefined4 DAT_005f8d68
;   ... and 11 more
;
; Called Functions:
;   FUN_00408d70
;   FUN_0040c8f0
;   FUN_0040cf60
;   FUN_0040d060
;   FUN_0040d0c0
;   FUN_004222d0
;   FUN_00423000
;   FUN_00423a10
;   FUN_00423a60
;   FUN_00424430
;   FUN_00424470
;   FUN_004244b0
;   FUN_004287f0
;   FUN_00429e90
;   FUN_0042aa00
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6980
        ;   Label: FUN_004d6980
    PUSH ESI                            ; 004d6981
    PUSH EDI                            ; 004d6982
    PUSH EBP                            ; 004d6983
    MOV EBP,ESP                         ; 004d6984
    SUB ESP,0x270                       ; 004d6986
    SUB EBP,0x7a                        ; 004d698c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004d698f
    PUSH dword ptr [EBP + 0x92]         ; 004d6995
    PUSH EBX                            ; 004d699b
    CALL FUN_004244b0                   ; 004d699c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 004d69a1
    TEST EAX,EAX                        ; 004d69a4
    JZ 0x004d6f35                       ; 004d69a6
        ;   XREF to: 004d6f35 (CONDITIONAL_JUMP)  ; LAB_004d6f35
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 004d69ac
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 004d69b2
    JZ 0x004d6a25                       ; 004d69ba
        ;   XREF to: 004d6a25 (CONDITIONAL_JUMP)  ; LAB_004d6a25
    LEA EAX,[EBX + 0x2508]              ; 004d69bc
        ;   Label: LAB_004d69bc
    MOV dword ptr [EAX + 0x8],0x0       ; 004d69c2
    FLD float ptr [EBP + 0x92]          ; 004d69c9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d69cf
    MOV dword ptr [EAX + 0x4],EDX       ; 004d69d2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d69d5
    MOV dword ptr [EAX],EDX             ; 004d69d8
    FMUL float ptr [EBX + 0x10a60]      ; 004d69da
    LEA EAX,[EBX + 0x2b4]               ; 004d69e0
    FSTP float ptr [EBP + 0x4e]         ; 004d69e6
    MOV dword ptr [EBP + 0x6e],EAX      ; 004d69e9
    FLD float ptr [EBP + 0x4e]          ; 004d69ec
        ;   Label: LAB_004d69ec
    FLDZ                                ; 004d69ef
    FCOMPP                              ; 004d69f1
    FNSTSW AX                           ; 004d69f3
    SAHF                                ; 004d69f5
    JNC 0x004d6d23                      ; 004d69f6
        ;   XREF to: 004d6d23 (CONDITIONAL_JUMP)  ; LAB_004d6d23
    LEA EAX,[EBP + 0x4e]                ; 004d69fc
    PUSH EAX                            ; 004d69ff
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004d6a00
    PUSH EAX                            ; 004d6a03
    CALL FUN_005030c0                   ; 004d6a04
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    ADD ESP,0x8                         ; 004d6a09
    MOV ESI,EAX                         ; 004d6a0c
    CMP EAX,0x29a                       ; 004d6a0e
    JNC 0x004d6d03                      ; 004d6a13
        ;   XREF to: 004d6d03 (CONDITIONAL_JUMP)  ; LAB_004d6d03
    PUSH ESI                            ; 004d6a19
    PUSH EBX                            ; 004d6a1a
    CALL FUN_0042aa00                   ; 004d6a1b
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 004d6a20
    JMP 0x004d69ec                      ; 004d6a23
        ;   XREF to: 004d69ec (UNCONDITIONAL_JUMP)  ; LAB_004d69ec
    PUSH EBX                            ; 004d6a25
        ;   Label: LAB_004d6a25
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d6a26
    CALL dword ptr [EAX + 0x114]        ; 004d6a2c
    ADD ESP,0x4                         ; 004d6a32
    TEST EAX,EAX                        ; 004d6a35
    JNZ 0x004d69bc                      ; 004d6a37
        ;   XREF to: 004d69bc (CONDITIONAL_JUMP)  ; LAB_004d69bc
    PUSH 0x1                            ; 004d6a39
    PUSH 0x6                            ; 004d6a3b
    LEA EAX,[EBX + 0x2b4]               ; 004d6a3d
    PUSH EAX                            ; 004d6a43
    CALL FUN_00503620                   ; 004d6a44
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d6a49
    JMP 0x004d69bc                      ; 004d6a4c
        ;   XREF to: 004d69bc (UNCONDITIONAL_JUMP)  ; LAB_004d69bc
    MOV ESI,0x1                         ; 004d6a51
        ;   Label: LAB_004d6a51
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 004d6a56
    MOV dword ptr [EBP + 0x72],ESI      ; 004d6a5c
    TEST EDI,EDI                        ; 004d6a5f
    JNZ 0x004d6a78                      ; 004d6a61
        ;   XREF to: 004d6a78 (CONDITIONAL_JUMP)  ; LAB_004d6a78
    PUSH 0x1                            ; 004d6a63
        ;   Label: LAB_004d6a63
    PUSH 0x0                            ; 004d6a65
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004d6a67
    PUSH EAX                            ; 004d6a6a
    CALL FUN_00503620                   ; 004d6a6b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d6a70
    JMP 0x004d69ec                      ; 004d6a73
        ;   XREF to: 004d69ec (UNCONDITIONAL_JUMP)  ; LAB_004d69ec
    TEST ESI,ESI                        ; 004d6a78
        ;   Label: LAB_004d6a78
    JZ 0x004d6a90                       ; 004d6a7a
        ;   XREF to: 004d6a90 (CONDITIONAL_JUMP)  ; LAB_004d6a90
    PUSH EDI                            ; 004d6a7c
    MOV ESI,dword ptr [EDI + 0x2b0]     ; 004d6a7d
    CALL dword ptr [ESI + 0x114]        ; 004d6a83
    ADD ESP,0x4                         ; 004d6a89
    TEST EAX,EAX                        ; 004d6a8c
    JNZ 0x004d6a63                      ; 004d6a8e
        ;   XREF to: 004d6a63 (CONDITIONAL_JUMP)  ; LAB_004d6a63
    CMP dword ptr [EBP + 0x72],0x0      ; 004d6a90
        ;   Label: LAB_004d6a90
    JZ 0x004d6ab0                       ; 004d6a94
        ;   XREF to: 004d6ab0 (CONDITIONAL_JUMP)  ; LAB_004d6ab0
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d6a96
    PUSH EAX                            ; 004d6a9c
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004d6a9d
    CALL dword ptr [ESI + 0xfc]         ; 004d6aa3
    ADD ESP,0x4                         ; 004d6aa9
    TEST EAX,EAX                        ; 004d6aac
    JNZ 0x004d6a63                      ; 004d6aae
        ;   XREF to: 004d6a63 (CONDITIONAL_JUMP)  ; LAB_004d6a63
    CMP dword ptr [EBP + 0x72],0x0      ; 004d6ab0
        ;   Label: LAB_004d6ab0
    JZ 0x004d6ad3                       ; 004d6ab4
        ;   XREF to: 004d6ad3 (CONDITIONAL_JUMP)  ; LAB_004d6ad3
    PUSH 0x0                            ; 004d6ab6
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d6ab8
    PUSH EBX                            ; 004d6abe
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004d6abf
    PUSH EAX                            ; 004d6ac5
    CALL dword ptr [ESI + 0xf0]         ; 004d6ac6
    ADD ESP,0xc                         ; 004d6acc
    TEST EAX,EAX                        ; 004d6acf
    JZ 0x004d6a63                       ; 004d6ad1
        ;   XREF to: 004d6a63 (CONDITIONAL_JUMP)  ; LAB_004d6a63
    CMP dword ptr [EBP + 0x72],0x0      ; 004d6ad3
        ;   Label: LAB_004d6ad3
    JZ 0x004d6b5f                       ; 004d6ad7
        ;   XREF to: 004d6b5f (CONDITIONAL_JUMP)  ; LAB_004d6b5f
    MOV EAX,[0x005f8d5c]                ; 004d6add | DAT_005f8d5c
    MOV dword ptr [EBP + -0x6e],EAX     ; 004d6ae2
    LEA EAX,[EBP + -0x76]               ; 004d6ae5
    XOR EDI,EDI                         ; 004d6ae8
    PUSH EAX                            ; 004d6aea
    LEA ESI,[EBP + 0xffffff1e]          ; 004d6aeb
    MOV dword ptr [EBP + -0x76],EDI     ; 004d6af1
    PUSH EBX                            ; 004d6af4
    MOV dword ptr [EBP + -0x72],EDI     ; 004d6af5
    LEA EDI,[EBP + 0xffffff36]          ; 004d6af8
    CALL FUN_00408d70                   ; 004d6afe
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[EBP + 0xffffff1e]          ; 004d6b03
    MOVSD ES:EDI,ESI                    ; 004d6b09
    MOVSD ES:EDI,ESI                    ; 004d6b0a
    MOVSD ES:EDI,ESI                    ; 004d6b0b
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d6b0c
    FLD float ptr [EBP + 0xffffff36]    ; 004d6b12
    FSUB float ptr [EAX + 0x20]         ; 004d6b18
    FMUL ST0                            ; 004d6b1b
    FLD float ptr [EBP + 0xffffff3e]    ; 004d6b1d
    FSUB float ptr [EAX + 0x28]         ; 004d6b23
    FMUL ST0                            ; 004d6b26
    FADDP                               ; 004d6b28
    FSQRT                               ; 004d6b2a
    ADD ESP,0x8                         ; 004d6b2c
    FCOMP double ptr [0x005dab09]       ; 004d6b2f | DAT_005dab09
    FNSTSW AX                           ; 004d6b35
    SAHF                                ; 004d6b37
    JBE 0x004d6b3f                      ; 004d6b38
        ;   XREF to: 004d6b3f (CONDITIONAL_JUMP)  ; LAB_004d6b3f
    XOR EDX,EDX                         ; 004d6b3a
    MOV dword ptr [EBP + 0x72],EDX      ; 004d6b3c
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d6b3f
        ;   Label: LAB_004d6b3f
    FLD float ptr [EBP + 0xffffff3a]    ; 004d6b45
    FSUB float ptr [EAX + 0x24]         ; 004d6b4b
    FABS                                ; 004d6b4e
    FCOMP double ptr [0x005dab11]       ; 004d6b50 | DAT_005dab11
    FNSTSW AX                           ; 004d6b56
    SAHF                                ; 004d6b58
    JA 0x004d6a63                       ; 004d6b59
        ;   XREF to: 004d6a63 (CONDITIONAL_JUMP)  ; LAB_004d6a63
    CMP dword ptr [EBP + 0x72],0x0      ; 004d6b5f
        ;   Label: LAB_004d6b5f
    JZ 0x004d6b86                       ; 004d6b63
        ;   XREF to: 004d6b86 (CONDITIONAL_JUMP)  ; LAB_004d6b86
    PUSH 0x0                            ; 004d6b65
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d6b67
    PUSH EBX                            ; 004d6b6d
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004d6b6e
    PUSH EAX                            ; 004d6b74
    CALL dword ptr [ESI + 0xf4]         ; 004d6b75
    ADD ESP,0xc                         ; 004d6b7b
    TEST EAX,EAX                        ; 004d6b7e
    JZ 0x004d6a63                       ; 004d6b80
        ;   XREF to: 004d6a63 (CONDITIONAL_JUMP)  ; LAB_004d6a63
    CMP dword ptr [EBP + 0x72],0x0      ; 004d6b86
        ;   Label: LAB_004d6b86
    JZ 0x004d6a63                       ; 004d6b8a
        ;   XREF to: 004d6a63 (CONDITIONAL_JUMP)  ; LAB_004d6a63
    PUSH 0x1                            ; 004d6b90
    PUSH 0x9                            ; 004d6b92
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004d6b94
    PUSH EDI                            ; 004d6b97
    CALL FUN_00503620                   ; 004d6b98
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d6b9d
    JMP 0x004d69ec                      ; 004d6ba0
        ;   XREF to: 004d69ec (UNCONDITIONAL_JUMP)  ; LAB_004d69ec
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004d6ba5
        ;   Label: LAB_004d6ba5
    TEST EDX,EDX                        ; 004d6bab
    JNZ 0x004d6bc3                      ; 004d6bad
        ;   XREF to: 004d6bc3 (CONDITIONAL_JUMP)  ; LAB_004d6bc3
    PUSH 0x1                            ; 004d6baf
    PUSH EDX                            ; 004d6bb1
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004d6bb2
    PUSH ECX                            ; 004d6bb5
    CALL FUN_00503620                   ; 004d6bb6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d6bbb
    JMP 0x004d69ec                      ; 004d6bbe
        ;   XREF to: 004d69ec (UNCONDITIONAL_JUMP)  ; LAB_004d69ec
    MOV ECX,dword ptr [0x01cee138]      ; 004d6bc3 | DAT_01cee138
        ;   Label: LAB_004d6bc3
    PUSH ECX                            ; 004d6bc9
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004d6bca
    PUSH ESI                            ; 004d6bcd
    LEA ESI,[EBP + 0xffffff5a]          ; 004d6bce
    LEA EDI,[EBP + -0x46]               ; 004d6bd4
    CALL FUN_005469a0                   ; 004d6bd7
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    ADD ESP,0x8                         ; 004d6bdc
    LEA EAX,[EBP + -0x46]               ; 004d6bdf
    LEA ESI,[EBP + 0xffffff5a]          ; 004d6be2
    PUSH EAX                            ; 004d6be8
    MOVSD ES:EDI,ESI                    ; 004d6be9
    MOVSD ES:EDI,ESI                    ; 004d6bea
    MOVSD ES:EDI,ESI                    ; 004d6beb
    PUSH EBX                            ; 004d6bec
    LEA ESI,[EBP + 0xffffff72]          ; 004d6bed
    LEA EDI,[EBP + 0xfffffeee]          ; 004d6bf3
    CALL FUN_00408d70                   ; 004d6bf9
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[EBP + 0xffffff72]          ; 004d6bfe
    LEA EAX,[EBP + 0xfffffe46]          ; 004d6c04
    MOVSD ES:EDI,ESI                    ; 004d6c0a
    MOVSD ES:EDI,ESI                    ; 004d6c0b
    MOVSD ES:EDI,ESI                    ; 004d6c0c
    ADD ESP,0x8                         ; 004d6c0d
    LEA EDI,[EBP + 0xfffffed6]          ; 004d6c10
    LEA ESI,[EBP + 0xfffffeee]          ; 004d6c16
    PUSH EAX                            ; 004d6c1c
    MOVSD ES:EDI,ESI                    ; 004d6c1d
    MOVSD ES:EDI,ESI                    ; 004d6c1e
    MOVSD ES:EDI,ESI                    ; 004d6c1f
    CALL FUN_004222d0                   ; 004d6c20
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 004d6c25
    PUSH 0x41200000                     ; 004d6c28
    PUSH 0x40a00000                     ; 004d6c2d
    LEA ESI,[EBP + 0xfffffe46]          ; 004d6c32
    CALL FUN_0040cf60                   ; 004d6c38
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004d6c3d
    ADD ESP,0x8                         ; 004d6c40
    MOV dword ptr [EBP + 0xfffffe7a],EBX ; 004d6c43
    MOV dword ptr [EBP + 0xfffffe7e],EBX ; 004d6c49
    FLD float ptr [EBP + 0x76]          ; 004d6c4f
    PUSH ESI                            ; 004d6c52
    FSTP float ptr [EBP + 0xfffffe4a]   ; 004d6c53
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d6c59
    PUSH EAX                            ; 004d6c5f
    MOV EDI,dword ptr [EAX + 0x2b0]     ; 004d6c60
    CALL dword ptr [EDI + 0x110]        ; 004d6c66
    FLD float ptr [EBP + 0xfffffe4a]    ; 004d6c6c
    FMUL double ptr [0x005daaf9]        ; 004d6c72 | DAT_005daaf9
    ADD ESP,0x8                         ; 004d6c78
    FMUL double ptr [0x005dab01]        ; 004d6c7b | DAT_005dab01
    PUSH 0x0                            ; 004d6c81
    CALL FUN_005b7ff0                   ; 004d6c83
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EBP + 0x3e]        ; 004d6c88
    MOV EDI,dword ptr [EBP + 0x3e]      ; 004d6c8b
    PUSH EDI                            ; 004d6c8e
    PUSH 0x0                            ; 004d6c8f
    LEA EAX,[EBP + 0xfffffed6]          ; 004d6c91
    PUSH EAX                            ; 004d6c97
    MOV EAX,[0x006167e0]                ; 004d6c98 | DAT_006167e0
    PUSH EAX                            ; 004d6c9d
    CALL FUN_004c9850                   ; 004d6c9e
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9850()
    ADD ESP,0x14                        ; 004d6ca3
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d6ca6
    PUSH EAX                            ; 004d6cac
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004d6cad
    CALL dword ptr [ESI + 0x114]        ; 004d6cb3
    ADD ESP,0x4                         ; 004d6cb9
    TEST EAX,EAX                        ; 004d6cbc
    JLE 0x004d6ceb                      ; 004d6cbe
        ;   XREF to: 004d6ceb (CONDITIONAL_JUMP)  ; LAB_004d6ceb
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d6cc0
    PUSH EAX                            ; 004d6cc6
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004d6cc7
    CALL dword ptr [ESI + 0xf8]         ; 004d6ccd
    ADD ESP,0x4                         ; 004d6cd3
    PUSH 0x1                            ; 004d6cd6
    PUSH 0x0                            ; 004d6cd8
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004d6cda
    PUSH EDX                            ; 004d6cdd
    CALL FUN_00503620                   ; 004d6cde
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d6ce3
    JMP 0x004d69ec                      ; 004d6ce6
        ;   XREF to: 004d69ec (UNCONDITIONAL_JUMP)  ; LAB_004d69ec
    MOV EDI,0x5daa78                    ; 004d6ceb | = "ghoul-eat-?.wav"
        ;   Label: LAB_004d6ceb
    PUSH EDI                            ; 004d6cf0 | = "ghoul-eat-?.wav"
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 004d6cf1
    PUSH EBX                            ; 004d6cf7
    CALL dword ptr [ESI + 0x34]         ; 004d6cf8
    ADD ESP,0x8                         ; 004d6cfb
    JMP 0x004d69ec                      ; 004d6cfe
        ;   XREF to: 004d69ec (UNCONDITIONAL_JUMP)  ; LAB_004d69ec
    JBE 0x004d6a51                      ; 004d6d03
        ;   XREF to: 004d6a51 (CONDITIONAL_JUMP)  ; LAB_004d6a51
        ;   Label: LAB_004d6d03
    CMP EAX,0x29b                       ; 004d6d09
    JZ 0x004d6ba5                       ; 004d6d0e
        ;   XREF to: 004d6ba5 (CONDITIONAL_JUMP)  ; LAB_004d6ba5
    PUSH ESI                            ; 004d6d14
    PUSH EBX                            ; 004d6d15
    CALL FUN_0042aa00                   ; 004d6d16
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 004d6d1b
    JMP 0x004d69ec                      ; 004d6d1e
        ;   XREF to: 004d69ec (UNCONDITIONAL_JUMP)  ; LAB_004d69ec
    FLD float ptr [EBP + 0x92]          ; 004d6d23
        ;   Label: LAB_004d6d23
    FMUL float ptr [EBX + 0x10a60]      ; 004d6d29
    SUB ESP,0x4                         ; 004d6d2f
    MOV EAX,dword ptr [EBX + 0x2510]    ; 004d6d32
    MOV dword ptr [EBX + 0x2594],EAX    ; 004d6d38
    FSTP float ptr [ESP]                ; 004d6d3e
    PUSH EBX                            ; 004d6d41
    CALL FUN_0042b2a0                   ; 004d6d42
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b2a0()
    ADD ESP,0x8                         ; 004d6d47
    LEA EAX,[EBX + 0x2b4]               ; 004d6d4a
    PUSH EAX                            ; 004d6d50
    MOV dword ptr [EBP + 0x6a],EAX      ; 004d6d51
    CALL FUN_005035c0                   ; 004d6d54
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    ADD ESP,0x4                         ; 004d6d59
    PUSH dword ptr [EBP + 0x92]         ; 004d6d5c
    MOV ESI,dword ptr [EAX + 0x24]      ; 004d6d62
    PUSH EBX                            ; 004d6d65
    MOV dword ptr [EBP + 0x5e],ESI      ; 004d6d66
    CALL FUN_004287f0                   ; 004d6d69
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004287f0()
    ADD ESP,0x8                         ; 004d6d6e
    TEST EAX,EAX                        ; 004d6d71
    JZ 0x004d780f                       ; 004d6d73
        ;   XREF to: 004d780f (CONDITIONAL_JUMP)  ; LAB_004d780f
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 004d6d79
    CMP EAX,0x2                         ; 004d6d7f
    JNC 0x004d6f68                      ; 004d6d82
        ;   XREF to: 004d6f68 (CONDITIONAL_JUMP)  ; LAB_004d6f68
    CMP EAX,0x1                         ; 004d6d88
    JNZ 0x004d6f73                      ; 004d6d8b
        ;   XREF to: 004d6f73 (CONDITIONAL_JUMP)  ; LAB_004d6f73
    PUSH 0x1                            ; 004d6d91
        ;   Label: LAB_004d6d91
    PUSH 0x1                            ; 004d6d93
    LEA EAX,[EBX + 0x2b4]               ; 004d6d95
        ;   Label: LAB_004d6d95
    PUSH EAX                            ; 004d6d9b
    CALL FUN_00503620                   ; 004d6d9c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d6da1
        ;   Label: LAB_004d6da1
    LEA EAX,[EBX + 0x2508]              ; 004d6da4
    MOV dword ptr [EAX + 0x8],0x0       ; 004d6daa
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d6db1
    MOV dword ptr [EAX + 0x4],EDX       ; 004d6db4
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d6db7
    MOV dword ptr [EAX],EDX             ; 004d6dba
    FLD float ptr [EBX + 0x10a74]       ; 004d6dbc
        ;   Label: caseD_5
    FLDZ                                ; 004d6dc2
    FCOMPP                              ; 004d6dc4
    FNSTSW AX                           ; 004d6dc6
    SAHF                                ; 004d6dc8
    JNC 0x004d6ddd                      ; 004d6dc9
        ;   XREF to: 004d6ddd (CONDITIONAL_JUMP)  ; LAB_004d6ddd
    FLD float ptr [EBX + 0x10a74]       ; 004d6dcb
    FSUB float ptr [EBP + 0x92]         ; 004d6dd1
    FSTP float ptr [EBX + 0x10a74]      ; 004d6dd7
    PUSH EBX                            ; 004d6ddd
        ;   Label: LAB_004d6ddd
    CALL FUN_00424430                   ; 004d6dde
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; undefined FUN_00424430()
    ADD ESP,0x4                         ; 004d6de3
    TEST EAX,EAX                        ; 004d6de6
    JZ 0x004d6f0e                       ; 004d6de8
        ;   XREF to: 004d6f0e (CONDITIONAL_JUMP)  ; LAB_004d6f0e
    CMP dword ptr [EBP + 0x5e],0x9      ; 004d6dee
    JZ 0x004d6f0e                       ; 004d6df2
        ;   XREF to: 004d6f0e (CONDITIONAL_JUMP)  ; LAB_004d6f0e
    PUSH dword ptr [EBP + 0x92]         ; 004d6df8
    PUSH EBX                            ; 004d6dfe
    LEA ESI,[EBX + 0x2588]              ; 004d6dff
    CALL FUN_00423a10                   ; 004d6e05
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a10()
    FLD float ptr [ESI]                 ; 004d6e0a
    FMUL float ptr [EBP + 0x92]         ; 004d6e0c
    FLD float ptr [ESI + 0x4]           ; 004d6e12
    FMUL float ptr [EBP + 0x92]         ; 004d6e15
    FLD float ptr [ESI + 0x8]           ; 004d6e1b
    FMUL float ptr [EBP + 0x92]         ; 004d6e1e
    LEA EDI,[EBP + 0xffffff2a]          ; 004d6e24
    LEA ESI,[EBP + 0xffffff12]          ; 004d6e2a
    FXCH ST2                            ; 004d6e30
    FSTP float ptr [EBP + 0xffffff12]   ; 004d6e32
    FSTP float ptr [EBP + 0xffffff16]   ; 004d6e38
    FSTP float ptr [EBP + 0xffffff1a]   ; 004d6e3e
    MOVSD ES:EDI,ESI                    ; 004d6e44
    MOVSD ES:EDI,ESI                    ; 004d6e45
    MOVSD ES:EDI,ESI                    ; 004d6e46
    LEA EDX,[EBX + 0x257c]              ; 004d6e47
    FLD float ptr [EBP + 0xffffff2a]    ; 004d6e4d
    FLD float ptr [EBP + 0xffffff2e]    ; 004d6e53
    FLD float ptr [EBP + 0xffffff32]    ; 004d6e59
    LEA EDI,[EBP + 0xfffffea6]          ; 004d6e5f
    LEA ESI,[EBP + 0xfffffebe]          ; 004d6e65
    FXCH ST2                            ; 004d6e6b
    FADD float ptr [EDX]                ; 004d6e6d
    FXCH                                ; 004d6e6f
    FADD float ptr [EDX + 0x4]          ; 004d6e71
    FXCH ST2                            ; 004d6e74
    FADD float ptr [EDX + 0x8]          ; 004d6e76
    FXCH                                ; 004d6e79
    FSTP float ptr [EBP + 0xfffffebe]   ; 004d6e7b
    FXCH                                ; 004d6e81
    FSTP float ptr [EBP + 0xfffffec2]   ; 004d6e83
    FSTP float ptr [EBP + 0xfffffec6]   ; 004d6e89
    MOVSD ES:EDI,ESI                    ; 004d6e8f
    MOVSD ES:EDI,ESI                    ; 004d6e90
    MOVSD ES:EDI,ESI                    ; 004d6e91
    LEA EAX,[EBX + 0x2508]              ; 004d6e92
    FLD float ptr [EBP + 0xfffffea6]    ; 004d6e98
    FLD float ptr [EBP + 0xfffffeaa]    ; 004d6e9e
    FLD float ptr [EBP + 0xfffffeae]    ; 004d6ea4
    LEA EDI,[EBP + -0x52]               ; 004d6eaa
    LEA ESI,[EBP + 0xfffffe8e]          ; 004d6ead
    FXCH ST2                            ; 004d6eb3
    FADD float ptr [EAX]                ; 004d6eb5
    FXCH                                ; 004d6eb7
    FADD float ptr [EAX + 0x4]          ; 004d6eb9
    FXCH ST2                            ; 004d6ebc
    FADD float ptr [EAX + 0x8]          ; 004d6ebe
    FXCH                                ; 004d6ec1
    FSTP float ptr [EBP + 0xfffffe8e]   ; 004d6ec3
    FXCH                                ; 004d6ec9
    FSTP float ptr [EBP + 0xfffffe92]   ; 004d6ecb
    FSTP float ptr [EBP + 0xfffffe96]   ; 004d6ed1
    MOVSD ES:EDI,ESI                    ; 004d6ed7
    MOVSD ES:EDI,ESI                    ; 004d6ed8
    MOVSD ES:EDI,ESI                    ; 004d6ed9
    MOV dword ptr [EDX + 0x8],0x0       ; 004d6eda
    MOV ECX,dword ptr [EDX + 0x8]       ; 004d6ee1
    MOV dword ptr [EDX + 0x4],ECX       ; 004d6ee4
    MOV ECX,dword ptr [EDX + 0x4]       ; 004d6ee7
    MOV dword ptr [EDX],ECX             ; 004d6eea
    MOV dword ptr [EAX + 0x8],0x0       ; 004d6eec
    ADD ESP,0x8                         ; 004d6ef3
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d6ef6
    MOV dword ptr [EAX + 0x4],EDX       ; 004d6ef9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d6efc
    MOV dword ptr [EAX],EDX             ; 004d6eff
    LEA EAX,[EBP + -0x52]               ; 004d6f01
    PUSH EAX                            ; 004d6f04
    PUSH EBX                            ; 004d6f05
    CALL FUN_00423a60                   ; 004d6f06
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a60()
    ADD ESP,0x8                         ; 004d6f0b
    PUSH EBX                            ; 004d6f0e
        ;   Label: LAB_004d6f0e
    CALL FUN_00424470                   ; 004d6f0f
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; undefined FUN_00424470()
    ADD ESP,0x4                         ; 004d6f14
    LEA EAX,[EBX + 0x2b4]               ; 004d6f17
    PUSH EAX                            ; 004d6f1d
    CALL FUN_00544f00                   ; 004d6f1e
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 004d6f23
    PUSH dword ptr [EBP + 0x92]         ; 004d6f26
    PUSH EBX                            ; 004d6f2c
    CALL FUN_00429e90                   ; 004d6f2d
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    ADD ESP,0x8                         ; 004d6f32
    LEA ESP,[EBP + 0x7a]                ; 004d6f35
        ;   Label: LAB_004d6f35
    POP EBP                             ; 004d6f38
    POP EDI                             ; 004d6f39
    POP ESI                             ; 004d6f3a
    POP EBX                             ; 004d6f3b
    RET                                 ; 004d6f3c
    PUSH 0x1                            ; 004d6f3d
        ;   Label: LAB_004d6f3d
    PUSH 0x0                            ; 004d6f3f
    LEA EAX,[EBX + 0x2b4]               ; 004d6f41
    PUSH EAX                            ; 004d6f47
    CALL FUN_00503620                   ; 004d6f48
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d6f4d
    PUSH EBX                            ; 004d6f50
    MOV EAX,0x5daa88                    ; 004d6f51 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004d6f56 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00609ed0]      ; 004d6f57 | PTR_DAT_00609ed0
    PUSH EDI                            ; 004d6f5d | DAT_007c158c
    CALL FUN_00436710                   ; 004d6f5e
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    JMP 0x004d6da1                      ; 004d6f63
        ;   XREF to: 004d6da1 (UNCONDITIONAL_JUMP)  ; LAB_004d6da1
    JBE 0x004d6d91                      ; 004d6f68
        ;   XREF to: 004d6d91 (CONDITIONAL_JUMP)  ; LAB_004d6d91
        ;   Label: LAB_004d6f68
    CMP EAX,0x3                         ; 004d6f6e
    JZ 0x004d6f3d                       ; 004d6f71
        ;   XREF to: 004d6f3d (CONDITIONAL_JUMP)  ; LAB_004d6f3d
    PUSH 0x1                            ; 004d6f73
        ;   Label: LAB_004d6f73
    PUSH 0x0                            ; 004d6f75
    JMP 0x004d6d95                      ; 004d6f77
        ;   XREF to: 004d6d95 (UNCONDITIONAL_JUMP)  ; LAB_004d6d95
    CMP dword ptr [EBX + 0x10a64],0x0   ; 004d6f7c
        ;   Label: caseD_7
    JNZ 0x004d6dbc                      ; 004d6f83
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    CMP dword ptr [EBX + 0xdc],0x0      ; 004d6f89
    JNZ 0x004d6dbc                      ; 004d6f90
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    PUSH EAX                            ; 004d6f96
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004d6f97
    PUSH EAX                            ; 004d6f9a
    LEA ESI,[EBP + -0x16]               ; 004d6f9b
    LEA EDI,[EBP + 0xffffff4e]          ; 004d6f9e
    CALL FUN_005469a0                   ; 004d6fa4
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    ADD ESP,0x8                         ; 004d6fa9
    LEA EAX,[EBP + 0xffffff4e]          ; 004d6fac
    LEA ESI,[EBP + -0x16]               ; 004d6fb2
    PUSH EAX                            ; 004d6fb5
    MOVSD ES:EDI,ESI                    ; 004d6fb6
    MOVSD ES:EDI,ESI                    ; 004d6fb7
    MOVSD ES:EDI,ESI                    ; 004d6fb8
    PUSH EBX                            ; 004d6fb9
    LEA ESI,[EBP + 0x26]                ; 004d6fba
    CALL FUN_00408d70                   ; 004d6fbd
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 004d6fc2
    PUSH 0x0                            ; 004d6fc5
    LEA EAX,[EBP + -0x22]               ; 004d6fc7
    LEA EDI,[EBP + -0x22]               ; 004d6fca
    PUSH EAX                            ; 004d6fcd
    MOV EDX,dword ptr [0x006167e0]      ; 004d6fce | DAT_006167e0
    LEA ESI,[EBP + 0x26]                ; 004d6fd4
    PUSH EDX                            ; 004d6fd7
    MOVSD ES:EDI,ESI                    ; 004d6fd8
    MOVSD ES:EDI,ESI                    ; 004d6fd9
    MOVSD ES:EDI,ESI                    ; 004d6fda
    CALL FUN_004c9ad0                   ; 004d6fdb
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9ad0()
    ADD ESP,0xc                         ; 004d6fe0
    MOV dword ptr [EBX + 0x10a64],0x1   ; 004d6fe3
    JMP 0x004d6dbc                      ; 004d6fed
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004d6ff2
        ;   Label: caseD_9
    TEST ESI,ESI                        ; 004d6ff8
    JNZ 0x004d7011                      ; 004d6ffa
        ;   XREF to: 004d7011 (CONDITIONAL_JUMP)  ; LAB_004d7011
    PUSH 0x1                            ; 004d6ffc
    PUSH 0x5                            ; 004d6ffe
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004d7000
    PUSH ECX                            ; 004d7003
    CALL FUN_00503620                   ; 004d7004
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d7009
    JMP 0x004d6dbc                      ; 004d700c
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH ESI                            ; 004d7011
        ;   Label: LAB_004d7011
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 004d7012
    CALL dword ptr [EDX + 0x114]        ; 004d7018
    ADD ESP,0x4                         ; 004d701e
    TEST EAX,EAX                        ; 004d7021
    JNZ 0x004d7062                      ; 004d7023
        ;   XREF to: 004d7062 (CONDITIONAL_JUMP)  ; LAB_004d7062
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d7025
    MOV EDI,dword ptr [EAX + 0x276c]    ; 004d702b
    CMP EBX,EDI                         ; 004d7031
    JNZ 0x004d7077                      ; 004d7033
        ;   XREF to: 004d7077 (CONDITIONAL_JUMP)  ; LAB_004d7077
    FLD float ptr [EAX + 0x20]          ; 004d7035
    FLD double ptr [0x005daae1]         ; 004d7038 | DAT_005daae1
    FLD float ptr [EDI + 0x44]          ; 004d703e
    FMUL ST1                            ; 004d7041
    FSUBP ST2,ST0                       ; 004d7043
    MOV EAX,dword ptr [EDI + 0x10a78]   ; 004d7045
    FXCH                                ; 004d704b
    FSTP float ptr [EDI + 0x20]         ; 004d704d
    FLD float ptr [EAX + 0x28]          ; 004d7050
    FLD float ptr [EDI + 0x5c]          ; 004d7053
    FMULP ST2                           ; 004d7056
    FSUBRP                              ; 004d7058
    FSTP float ptr [EDI + 0x28]         ; 004d705a
    JMP 0x004d6dbc                      ; 004d705d
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d7062
        ;   Label: LAB_004d7062
    PUSH 0x5                            ; 004d7064
    MOV EDX,dword ptr [EBP + 0x6a]      ; 004d7066
    PUSH EDX                            ; 004d7069
    CALL FUN_00503620                   ; 004d706a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d706f
    JMP 0x004d6dbc                      ; 004d7072
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d7077
        ;   Label: LAB_004d7077
    PUSH 0x5                            ; 004d7079
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004d707b
    PUSH EAX                            ; 004d707e
    CALL FUN_00503620                   ; 004d707f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d7084
    JMP 0x004d6dbc                      ; 004d7087
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    LEA EAX,[EBP + 0xfffffe0a]          ; 004d708c
        ;   Label: caseD_4
    PUSH EAX                            ; 004d7092
    CALL FUN_004222d0                   ; 004d7093
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 004d7098
    PUSH 0x40a00000                     ; 004d709b
    PUSH 0x40400000                     ; 004d70a0
    CALL FUN_0040cf60                   ; 004d70a5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004d70aa
    ADD ESP,0x8                         ; 004d70ad
    LEA EAX,[EBP + 0xfffffe0a]          ; 004d70b0
    MOV EDX,dword ptr [0x01cee140]      ; 004d70b6 | DAT_01cee140
    PUSH EAX                            ; 004d70bc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d70bd
    LEA ESI,[EBP + 0xfffffefa]          ; 004d70c4
    SUB EAX,EDX                         ; 004d70ca
    MOV dword ptr [EBP + 0xfffffe3e],EBX ; 004d70cc
    MOV EDX,EAX                         ; 004d70d2
    MOV dword ptr [EBP + 0xfffffe42],EBX ; 004d70d4
    SHL EDX,0x4                         ; 004d70da
    LEA EAX,[EBX + 0x1134]              ; 004d70dd
    PUSH 0x3ecccccd                     ; 004d70e3
    ADD EAX,EDX                         ; 004d70e8
    LEA EDI,[EBP + 0xffffff06]          ; 004d70ea
    PUSH EAX                            ; 004d70f0
    FLD float ptr [EBP + 0x76]          ; 004d70f1
    PUSH 0x265370c                      ; 004d70f4 | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffe0e]   ; 004d70f9
    CALL FUN_00591530                   ; 004d70ff
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 004d7104
    LEA EAX,[EBP + 0xffffff06]          ; 004d7107
    LEA ESI,[EBP + 0xfffffefa]          ; 004d710d
    PUSH EAX                            ; 004d7113
    MOVSD ES:EDI,ESI                    ; 004d7114
    MOVSD ES:EDI,ESI                    ; 004d7115
    MOVSD ES:EDI,ESI                    ; 004d7116
    PUSH EBX                            ; 004d7117
    LEA ESI,[EBP + 0xffffff66]          ; 004d7118
    CALL FUN_00408d70                   ; 004d711e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 004d7123
    LEA EAX,[EBP + 0xfffffe82]          ; 004d7126
    PUSH EAX                            ; 004d712c
    LEA EDI,[EBP + 0xfffffe82]          ; 004d712d
    LEA ESI,[EBP + 0xffffff66]          ; 004d7133
    PUSH EBX                            ; 004d7139
    MOVSD ES:EDI,ESI                    ; 004d713a
    MOVSD ES:EDI,ESI                    ; 004d713b
    MOVSD ES:EDI,ESI                    ; 004d713c
    CALL FUN_00488110                   ; 004d713d
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; undefined FUN_00488110()
    ADD ESP,0x10                        ; 004d7142
    TEST EAX,EAX                        ; 004d7145
    JZ 0x004d6dbc                       ; 004d7147
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    XOR EDI,EDI                         ; 004d714d
    XOR ESI,ESI                         ; 004d714f
    MOV EAX,[0x0061b5a8]                ; 004d7151 | DAT_0061b5a8
        ;   Label: LAB_004d7151
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 004d7156 | DAT_01fb71a4
    JGE 0x004d6dbc                      ; 004d715c
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    MOV ECX,dword ptr [0x01cee1a0]      ; 004d7162 | DAT_01cee1a0
    PUSH ECX                            ; 004d7168
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 004d7169
    PUSH EDX                            ; 004d7170
    CALL FUN_0040c8f0                   ; 004d7171
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004d7176
    TEST EAX,EAX                        ; 004d7179
    JNZ 0x004d7183                      ; 004d717b
        ;   XREF to: 004d7183 (CONDITIONAL_JUMP)  ; LAB_004d7183
    INC ESI                             ; 004d717d
        ;   Label: LAB_004d717d
    ADD EDI,0x4                         ; 004d717e
    JMP 0x004d7151                      ; 004d7181
        ;   XREF to: 004d7151 (UNCONDITIONAL_JUMP)  ; LAB_004d7151
    CMP EAX,EBX                         ; 004d7183
        ;   Label: LAB_004d7183
    JZ 0x004d717d                       ; 004d7185
        ;   XREF to: 004d717d (CONDITIONAL_JUMP)  ; LAB_004d717d
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 004d7187
    CMP ECX,dword ptr [EAX + 0x10a78]   ; 004d718d
    JNZ 0x004d717d                      ; 004d7193
        ;   XREF to: 004d717d (CONDITIONAL_JUMP)  ; LAB_004d717d
    PUSH 0x1                            ; 004d7195
    PUSH 0x3                            ; 004d7197
    ADD EAX,0x2b4                       ; 004d7199
    PUSH EAX                            ; 004d719e
    CALL FUN_00503620                   ; 004d719f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d71a4
    INC ESI                             ; 004d71a7
    ADD EDI,0x4                         ; 004d71a8
    JMP 0x004d7151                      ; 004d71ab
        ;   XREF to: 004d7151 (UNCONDITIONAL_JUMP)  ; LAB_004d7151
    MOV EAX,[0x01cedef4]                ; 004d71ad | DAT_01cedef4
        ;   Label: caseD_0
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004d71b2
    PUSH EAX                            ; 004d71b9
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004d71ba
    CALL dword ptr [EDX + 0x114]        ; 004d71c0
    ADD ESP,0x4                         ; 004d71c6
    TEST EAX,EAX                        ; 004d71c9
    JZ 0x004d71fa                       ; 004d71cb
        ;   XREF to: 004d71fa (CONDITIONAL_JUMP)  ; LAB_004d71fa
    PUSH 0x3dcccccd                     ; 004d71cd
    CALL FUN_0040d060                   ; 004d71d2
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 004d71d7
    TEST EAX,EAX                        ; 004d71da
    JZ 0x004d6dbc                       ; 004d71dc
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d71e2
    PUSH 0x3                            ; 004d71e4
    LEA EAX,[EBX + 0x2b4]               ; 004d71e6
    PUSH EAX                            ; 004d71ec
    CALL FUN_00503620                   ; 004d71ed
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d71f2
    JMP 0x004d6dbc                      ; 004d71f5
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004d71fa
        ;   Label: LAB_004d71fa
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d7200
    PUSH EBX                            ; 004d7206
    CALL dword ptr [EAX + 0x150]        ; 004d7207
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 004d720d
    ADD ESP,0x8                         ; 004d7213
    TEST EDI,EDI                        ; 004d7216
    JZ 0x004d7345                       ; 004d7218
        ;   XREF to: 004d7345 (CONDITIONAL_JUMP)  ; LAB_004d7345
    MOV EDX,dword ptr [EDI + 0x276c]    ; 004d721e
    MOV EAX,EDI                         ; 004d7224
    TEST EDX,EDX                        ; 004d7226
    JNZ 0x004d72c6                      ; 004d7228
        ;   XREF to: 004d72c6 (CONDITIONAL_JUMP)  ; LAB_004d72c6
    FLD float ptr [EAX + 0x20]          ; 004d722e
    FLD float ptr [EAX + 0x24]          ; 004d7231
    FLD float ptr [EAX + 0x28]          ; 004d7234
    LEA EDX,[EBX + 0x20]                ; 004d7237
    LEA EDI,[EBP + 0x2]                 ; 004d723a
    LEA ESI,[EBP + -0x3a]               ; 004d723d
    FXCH ST2                            ; 004d7240
    FSUB float ptr [EDX]                ; 004d7242
    FXCH                                ; 004d7244
    FSUB float ptr [EDX + 0x4]          ; 004d7246
    FXCH ST2                            ; 004d7249
    FSUB float ptr [EDX + 0x8]          ; 004d724b
    FXCH                                ; 004d724e
    FSTP float ptr [EBP + -0x3a]        ; 004d7250
    FXCH                                ; 004d7253
    FSTP float ptr [EBP + -0x36]        ; 004d7255
    FSTP float ptr [EBP + -0x32]        ; 004d7258
    MOVSD ES:EDI,ESI                    ; 004d725b
    MOVSD ES:EDI,ESI                    ; 004d725c
    MOVSD ES:EDI,ESI                    ; 004d725d
    FLD float ptr [EBP + 0x6]           ; 004d725e
    FMUL ST0                            ; 004d7261
    FLD float ptr [EBP + 0x2]           ; 004d7263
    FMUL ST0                            ; 004d7266
    FADDP                               ; 004d7268
    FLD float ptr [EBP + 0xa]           ; 004d726a
    FMUL ST0                            ; 004d726d
    FADDP                               ; 004d726f
    FSQRT                               ; 004d7271
    FSTP float ptr [EBP + 0x46]         ; 004d7273
    MOV EAX,dword ptr [EBP + 0x46]      ; 004d7276
    FLD float ptr [EBP + 0x46]          ; 004d7279
    MOV dword ptr [EBP + 0x56],EAX      ; 004d727c
    FCOMP float ptr [0x005f8d5c]        ; 004d727f | DAT_005f8d5c
    FNSTSW AX                           ; 004d7285
    SAHF                                ; 004d7287
    JC 0x004d72db                       ; 004d7288
        ;   XREF to: 004d72db (CONDITIONAL_JUMP)  ; LAB_004d72db
    FLD float ptr [EBP + 0x56]          ; 004d728a
        ;   Label: LAB_004d728a
    FCOMP float ptr [EBX + 0x10a70]     ; 004d728d
    FNSTSW AX                           ; 004d7293
    SAHF                                ; 004d7295
    JNC 0x004d6dbc                      ; 004d7296
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    FLD float ptr [EBP + 0x56]          ; 004d729c
    LEA EDX,[EBX + 0x2b4]               ; 004d729f
    FCOMP float ptr [0x005f8d68]        ; 004d72a5 | DAT_005f8d68
    FNSTSW AX                           ; 004d72ab
    SAHF                                ; 004d72ad
    JNC 0x004d7333                      ; 004d72ae
        ;   XREF to: 004d7333 (CONDITIONAL_JUMP)  ; LAB_004d7333
    PUSH 0x1                            ; 004d72b4
    PUSH 0x1                            ; 004d72b6
    PUSH EDX                            ; 004d72b8
    CALL FUN_00503620                   ; 004d72b9
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d72be
    JMP 0x004d6dbc                      ; 004d72c1
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d72c6
        ;   Label: LAB_004d72c6
    PUSH 0x3                            ; 004d72c8
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004d72ca
    PUSH ESI                            ; 004d72cd
    CALL FUN_00503620                   ; 004d72ce
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d72d3
    JMP 0x004d6dbc                      ; 004d72d6
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    LEA EAX,[EBP + 0x2]                 ; 004d72db
        ;   Label: LAB_004d72db
    PUSH EAX                            ; 004d72de
    LEA ESI,[EBP + -0x5e]               ; 004d72df
    LEA EDI,[EBP + -0x6a]               ; 004d72e2
    CALL FUN_005838f0                   ; 004d72e5
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[EBP + -0x5e]               ; 004d72ea
    MOVSD ES:EDI,ESI                    ; 004d72ed
    MOVSD ES:EDI,ESI                    ; 004d72ee
    MOVSD ES:EDI,ESI                    ; 004d72ef
    ADD ESP,0x4                         ; 004d72f0
    FLD float ptr [EBP + -0x66]         ; 004d72f3
    FSUB float ptr [EBX + 0x34]         ; 004d72f6
    SUB ESP,0x4                         ; 004d72f9
    FSTP float ptr [ESP]                ; 004d72fc
    CALL FUN_0040d0c0                   ; 004d72ff
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004d7304
    FLD float ptr [EBP + 0x76]          ; 004d7307
    FABS                                ; 004d730a
    ADD ESP,0x4                         ; 004d730c
    FCOMP double ptr [0x005daaf1]       ; 004d730f | DAT_005daaf1
    FNSTSW AX                           ; 004d7315
    SAHF                                ; 004d7317
    JNC 0x004d728a                      ; 004d7318
        ;   XREF to: 004d728a (CONDITIONAL_JUMP)  ; LAB_004d728a
    PUSH 0x1                            ; 004d731e
    PUSH 0x4                            ; 004d7320
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004d7322
    PUSH ECX                            ; 004d7325
    CALL FUN_00503620                   ; 004d7326
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d732b
    JMP 0x004d728a                      ; 004d732e
        ;   XREF to: 004d728a (UNCONDITIONAL_JUMP)  ; LAB_004d728a
    PUSH 0x1                            ; 004d7333
        ;   Label: LAB_004d7333
    PUSH 0x2                            ; 004d7335
    PUSH EDX                            ; 004d7337
    CALL FUN_00503620                   ; 004d7338
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d733d
    JMP 0x004d6dbc                      ; 004d7340
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004d7345
        ;   Label: LAB_004d7345
    PUSH EBX                            ; 004d734b
    CALL FUN_00488970                   ; 004d734c
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; undefined FUN_00488970()
    ADD ESP,0x8                         ; 004d7351
    TEST EAX,EAX                        ; 004d7354
    JZ 0x004d6dbc                       ; 004d7356
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d735c
    PUSH 0x1                            ; 004d735e
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004d7360
    PUSH EAX                            ; 004d7363
    CALL FUN_00503620                   ; 004d7364
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d7369
    JMP 0x004d6dbc                      ; 004d736c
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004d7371
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d7377
    PUSH EBX                            ; 004d737d
    CALL dword ptr [EAX + 0x150]        ; 004d737e
    ADD ESP,0x8                         ; 004d7384
    LEA EAX,[EBX + 0x2b4]               ; 004d7387
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 004d738d
    MOV dword ptr [EBP + 0x66],EAX      ; 004d7393
    TEST EDI,EDI                        ; 004d7396
    JZ 0x004d73b6                       ; 004d7398
        ;   XREF to: 004d73b6 (CONDITIONAL_JUMP)  ; LAB_004d73b6
    MOV EDX,dword ptr [EDI + 0x276c]    ; 004d739a
    TEST EDX,EDX                        ; 004d73a0
    JZ 0x004d73f2                       ; 004d73a2
        ;   XREF to: 004d73f2 (CONDITIONAL_JUMP)  ; LAB_004d73f2
    PUSH 0x1                            ; 004d73a4
    PUSH 0x3                            ; 004d73a6
    PUSH EAX                            ; 004d73a8
    CALL FUN_00503620                   ; 004d73a9
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d73ae
    JMP 0x004d6dbc                      ; 004d73b1
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004d73b6
        ;   Label: LAB_004d73b6
    PUSH EBX                            ; 004d73bc
    CALL FUN_00488970                   ; 004d73bd
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; undefined FUN_00488970()
    ADD ESP,0x8                         ; 004d73c2
    TEST EAX,EAX                        ; 004d73c5
    JZ 0x004d73de                       ; 004d73c7
        ;   XREF to: 004d73de (CONDITIONAL_JUMP)  ; LAB_004d73de
    PUSH 0x1                            ; 004d73c9
    PUSH 0x1                            ; 004d73cb
    MOV ESI,dword ptr [EBP + 0x66]      ; 004d73cd
    PUSH ESI                            ; 004d73d0
    CALL FUN_00503620                   ; 004d73d1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d73d6
    JMP 0x004d6dbc                      ; 004d73d9
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d73de
        ;   Label: LAB_004d73de
    PUSH EDI                            ; 004d73e0
    MOV ECX,dword ptr [EBP + 0x66]      ; 004d73e1
    PUSH ECX                            ; 004d73e4
    CALL FUN_00503620                   ; 004d73e5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d73ea
    JMP 0x004d6dbc                      ; 004d73ed
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,[0x005f8d5c]                ; 004d73f2 | DAT_005f8d5c
        ;   Label: LAB_004d73f2
    MOV dword ptr [EBP + 0x5a],EAX      ; 004d73f7
    LEA EAX,[EBX + 0x2508]              ; 004d73fa
    PUSH 0x3e32b8c2                     ; 004d7400
    MOV dword ptr [EAX + 0x8],EDX       ; 004d7405
    PUSH 0x3f000000                     ; 004d7408
    MOV ECX,dword ptr [EAX + 0x8]       ; 004d740d
    MOV dword ptr [EAX + 0x4],ECX       ; 004d7410
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d7413
    MOV dword ptr [EAX],ECX             ; 004d7416
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004d7418
    MOV dword ptr [EBP + 0xfffffee2],EDX ; 004d741b
    MOV dword ptr [EBP + 0xfffffeea],EAX ; 004d7421
    LEA EAX,[EBP + 0xfffffee2]          ; 004d7427
    MOV dword ptr [EBP + 0xfffffee6],EDX ; 004d742d
    PUSH EAX                            ; 004d7433
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d7434
    PUSH EAX                            ; 004d743a
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004d743b
    CALL dword ptr [EDX + 0xcc]         ; 004d7441
    ADD ESP,0x4                         ; 004d7447
    PUSH EAX                            ; 004d744a
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d744b
    ADD EAX,0x20                        ; 004d7451
    PUSH EAX                            ; 004d7454
    PUSH EBX                            ; 004d7455
    CALL FUN_00423000                   ; 004d7456
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; undefined FUN_00423000()
    ADD ESP,0x18                        ; 004d745b
    TEST EAX,EAX                        ; 004d745e
    JL 0x004d6dbc                       ; 004d7460
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    LEA EDI,[EBP + 0xfffffeca]          ; 004d7466
    LEA EDX,[EBX + 0x20]                ; 004d746c
    LEA ESI,[EBP + 0xffffff7e]          ; 004d746f
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d7475
    FLD float ptr [EDX]                 ; 004d747b
    FLD float ptr [EDX + 0x4]           ; 004d747d
    FLD float ptr [EDX + 0x8]           ; 004d7480
    FXCH ST2                            ; 004d7483
    FSUB float ptr [EAX + 0x20]         ; 004d7485
    FXCH                                ; 004d7488
    FSUB float ptr [EAX + 0x24]         ; 004d748a
    FXCH ST2                            ; 004d748d
    FSUB float ptr [EAX + 0x28]         ; 004d748f
    FXCH                                ; 004d7492
    FSTP float ptr [EBP + 0xffffff7e]   ; 004d7494
    FXCH                                ; 004d749a
    FSTP float ptr [EBP + -0x7e]        ; 004d749c
    FSTP float ptr [EBP + -0x7a]        ; 004d749f
    MOVSD ES:EDI,ESI                    ; 004d74a2
    MOVSD ES:EDI,ESI                    ; 004d74a3
    MOVSD ES:EDI,ESI                    ; 004d74a4
    FLD float ptr [EBP + 0xfffffeca]    ; 004d74a5
    FMUL ST0                            ; 004d74ab
    FLD float ptr [EBP + 0xfffffed2]    ; 004d74ad
    FMUL ST0                            ; 004d74b3
    FADDP                               ; 004d74b5
    FSQRT                               ; 004d74b7
    XOR EDI,EDI                         ; 004d74b9
    MOV dword ptr [EBP + 0xfffffece],EDI ; 004d74bb
    FSTP float ptr [EBP + 0x4a]         ; 004d74c1
    MOV EAX,dword ptr [EBP + 0x4a]      ; 004d74c4
    FLD float ptr [EBP + 0x4a]          ; 004d74c7
    MOV dword ptr [EBP + 0x62],EAX      ; 004d74ca
    FCOMP float ptr [0x005f8d68]        ; 004d74cd | DAT_005f8d68
    FNSTSW AX                           ; 004d74d3
    SAHF                                ; 004d74d5
    JBE 0x004d74ef                      ; 004d74d6
        ;   XREF to: 004d74ef (CONDITIONAL_JUMP)  ; LAB_004d74ef
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004d74d8
    CMP EAX,0x1                         ; 004d74db
    JNZ 0x004d74ef                      ; 004d74de
        ;   XREF to: 004d74ef (CONDITIONAL_JUMP)  ; LAB_004d74ef
    PUSH EAX                            ; 004d74e0
    PUSH 0x2                            ; 004d74e1
    MOV EDX,dword ptr [EBP + 0x66]      ; 004d74e3
    PUSH EDX                            ; 004d74e6
    CALL FUN_00503620                   ; 004d74e7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d74ec
    FLD float ptr [EBP + 0x62]          ; 004d74ef
        ;   Label: LAB_004d74ef
    FCOMP float ptr [0x005f8d6c]        ; 004d74f2 | DAT_005f8d6c
    FNSTSW AX                           ; 004d74f8
    SAHF                                ; 004d74fa
    JNC 0x004d75f1                      ; 004d74fb
        ;   XREF to: 004d75f1 (CONDITIONAL_JUMP)  ; LAB_004d75f1
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d7501
    PUSH EAX                            ; 004d7507
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004d7508
    CALL dword ptr [EDX + 0xfc]         ; 004d750e
    ADD ESP,0x4                         ; 004d7514
    TEST EAX,EAX                        ; 004d7517
    JNZ 0x004d75f1                      ; 004d7519
        ;   XREF to: 004d75f1 (CONDITIONAL_JUMP)  ; LAB_004d75f1
    MOV EAX,dword ptr [EBX + 0x10b2c]   ; 004d751f
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 004d7525
    JZ 0x004d75f1                       ; 004d752d
        ;   XREF to: 004d75f1 (CONDITIONAL_JUMP)  ; LAB_004d75f1
    LEA EDI,[EBP + -0x2e]               ; 004d7533
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d7536
    LEA ESI,[EBP + 0xffffff42]          ; 004d753c
    LEA EDX,[EBX + 0x20]                ; 004d7542
    FLD float ptr [EAX + 0x24]          ; 004d7545
    FLD float ptr [EAX + 0x28]          ; 004d7548
    FLD float ptr [EAX + 0x20]          ; 004d754b
    LEA EAX,[EBP + -0x2e]               ; 004d754e
    FSUB float ptr [EDX]                ; 004d7551
    FXCH ST2                            ; 004d7553
    FSUB float ptr [EDX + 0x4]          ; 004d7555
    FXCH                                ; 004d7558
    FSUB float ptr [EDX + 0x8]          ; 004d755a
    FXCH ST2                            ; 004d755d
    FSTP float ptr [EBP + 0xffffff42]   ; 004d755f
    FSTP float ptr [EBP + 0xffffff46]   ; 004d7565
    FSTP float ptr [EBP + 0xffffff4a]   ; 004d756b
    MOVSD ES:EDI,ESI                    ; 004d7571
    MOVSD ES:EDI,ESI                    ; 004d7572
    MOVSD ES:EDI,ESI                    ; 004d7573
    PUSH EAX                            ; 004d7574
    LEA ESI,[EBP + -0xa]                ; 004d7575
    LEA EDI,[EBP + 0xfffffeb2]          ; 004d7578
    CALL FUN_005838f0                   ; 004d757e
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[EBP + -0xa]                ; 004d7583
    MOVSD ES:EDI,ESI                    ; 004d7586
    MOVSD ES:EDI,ESI                    ; 004d7587
    MOVSD ES:EDI,ESI                    ; 004d7588
    ADD ESP,0x4                         ; 004d7589
    FLD float ptr [EBP + 0xfffffeb6]    ; 004d758c
    FSUB float ptr [EBX + 0x34]         ; 004d7592
    SUB ESP,0x4                         ; 004d7595
    FSTP float ptr [ESP]                ; 004d7598
    CALL FUN_0040d0c0                   ; 004d759b
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004d75a0
    FLD float ptr [EBP + 0x76]          ; 004d75a3
    FABS                                ; 004d75a6
    ADD ESP,0x4                         ; 004d75a8
    FCOMP double ptr [0x005daaf1]       ; 004d75ab | DAT_005daaf1
    FNSTSW AX                           ; 004d75b1
    SAHF                                ; 004d75b3
    JNC 0x004d75f1                      ; 004d75b4
        ;   XREF to: 004d75f1 (CONDITIONAL_JUMP)  ; LAB_004d75f1
    PUSH 0x3dcccccd                     ; 004d75b6
    CALL FUN_0040d060                   ; 004d75bb
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 004d75c0
    TEST EAX,EAX                        ; 004d75c3
    JZ 0x004d75f1                       ; 004d75c5
        ;   XREF to: 004d75f1 (CONDITIONAL_JUMP)  ; LAB_004d75f1
    PUSH 0x1                            ; 004d75c7
    PUSH 0x8                            ; 004d75c9
    LEA EAX,[EBX + 0x2b4]               ; 004d75cb
    PUSH EAX                            ; 004d75d1
    CALL FUN_00503620                   ; 004d75d2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d75d7
    MOV ESI,dword ptr [EBX + 0x10af8]   ; 004d75da
    PUSH ESI                            ; 004d75e0
    CALL FUN_00550b70                   ; 004d75e1
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 004d75e6
    TEST EAX,EAX                        ; 004d75e9
    JZ 0x004d775a                       ; 004d75eb
        ;   XREF to: 004d775a (CONDITIONAL_JUMP)  ; LAB_004d775a
    FLD float ptr [EBP + 0x62]          ; 004d75f1
        ;   Label: LAB_004d75f1
    FCOMP float ptr [EBP + 0x5a]        ; 004d75f4
    FNSTSW AX                           ; 004d75f7
    SAHF                                ; 004d75f9
    JA 0x004d76a7                       ; 004d75fa
        ;   XREF to: 004d76a7 (CONDITIONAL_JUMP)  ; LAB_004d76a7
    FLD float ptr [EBX + 0x10a74]       ; 004d7600
    FLDZ                                ; 004d7606
    FCOMPP                              ; 004d7608
    FNSTSW AX                           ; 004d760a
    SAHF                                ; 004d760c
    JC 0x004d76a7                       ; 004d760d
        ;   XREF to: 004d76a7 (CONDITIONAL_JUMP)  ; LAB_004d76a7
    LEA EDI,[EBP + 0x32]                ; 004d7613
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d7616
    LEA ESI,[EBP + 0xe]                 ; 004d761c
    LEA EDX,[EBX + 0x20]                ; 004d761f
    FLD float ptr [EAX + 0x24]          ; 004d7622
    FLD float ptr [EAX + 0x28]          ; 004d7625
    FLD float ptr [EAX + 0x20]          ; 004d7628
    LEA EAX,[EBP + 0x32]                ; 004d762b
    FSUB float ptr [EDX]                ; 004d762e
    FXCH ST2                            ; 004d7630
    FSUB float ptr [EDX + 0x4]          ; 004d7632
    FXCH                                ; 004d7635
    FSUB float ptr [EDX + 0x8]          ; 004d7637
    FXCH ST2                            ; 004d763a
    FSTP float ptr [EBP + 0xe]          ; 004d763c
    FSTP float ptr [EBP + 0x12]         ; 004d763f
    FSTP float ptr [EBP + 0x16]         ; 004d7642
    MOVSD ES:EDI,ESI                    ; 004d7645
    MOVSD ES:EDI,ESI                    ; 004d7646
    MOVSD ES:EDI,ESI                    ; 004d7647
    PUSH EAX                            ; 004d7648
    LEA ESI,[EBP + 0xfffffe9a]          ; 004d7649
    LEA EDI,[EBP + 0x1a]                ; 004d764f
    CALL FUN_005838f0                   ; 004d7652
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[EBP + 0xfffffe9a]          ; 004d7657
    MOVSD ES:EDI,ESI                    ; 004d765d
    MOVSD ES:EDI,ESI                    ; 004d765e
    MOVSD ES:EDI,ESI                    ; 004d765f
    ADD ESP,0x4                         ; 004d7660
    FLD float ptr [EBP + 0x1e]          ; 004d7663
    FSUB float ptr [EBX + 0x34]         ; 004d7666
    SUB ESP,0x4                         ; 004d7669
    FSTP float ptr [ESP]                ; 004d766c
    CALL FUN_0040d0c0                   ; 004d766f
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004d7674
    FLD float ptr [EBP + 0x76]          ; 004d7677
    FABS                                ; 004d767a
    ADD ESP,0x4                         ; 004d767c
    FCOMP double ptr [0x005daaf1]       ; 004d767f | DAT_005daaf1
    FNSTSW AX                           ; 004d7685
    SAHF                                ; 004d7687
    JNC 0x004d76a7                      ; 004d7688
        ;   XREF to: 004d76a7 (CONDITIONAL_JUMP)  ; LAB_004d76a7
    PUSH 0x1                            ; 004d768a
    PUSH 0x4                            ; 004d768c
    LEA EAX,[EBX + 0x2b4]               ; 004d768e
    PUSH EAX                            ; 004d7694
    CALL FUN_00503620                   ; 004d7695
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d769a
    MOV dword ptr [EBX + 0x10a74],0x40800000 ; 004d769d
    FLD float ptr [EBP + 0x62]          ; 004d76a7
        ;   Label: LAB_004d76a7
    FCOMP float ptr [EBX + 0x10a70]     ; 004d76aa
    FNSTSW AX                           ; 004d76b0
    SAHF                                ; 004d76b2
    JBE 0x004d76c8                      ; 004d76b3
        ;   XREF to: 004d76c8 (CONDITIONAL_JUMP)  ; LAB_004d76c8
    PUSH 0x1                            ; 004d76b5
    PUSH 0x0                            ; 004d76b7
    LEA EAX,[EBX + 0x2b4]               ; 004d76b9
    PUSH EAX                            ; 004d76bf
    CALL FUN_00503620                   ; 004d76c0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d76c5
    FLD float ptr [EBX + 0x10b00]       ; 004d76c8
        ;   Label: LAB_004d76c8
    FSUB float ptr [EBP + 0x92]         ; 004d76ce
    FST float ptr [EBX + 0x10b00]       ; 004d76d4
    FLDZ                                ; 004d76da
    FCOMPP                              ; 004d76dc
    FNSTSW AX                           ; 004d76de
    SAHF                                ; 004d76e0
    JBE 0x004d6dbc                      ; 004d76e1
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBX + 0x10af8]   ; 004d76e7
    PUSH EDI                            ; 004d76ed
    MOV dword ptr [EBX + 0x10b00],0x0   ; 004d76ee
    CALL FUN_00550b70                   ; 004d76f8
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 004d76fd
    TEST EAX,EAX                        ; 004d7700
    JNZ 0x004d6dbc                      ; 004d7702
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EBX + 0x10afc]   ; 004d7708
    PUSH EAX                            ; 004d770e
    CALL FUN_00550b70                   ; 004d770f
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 004d7714
    TEST EAX,EAX                        ; 004d7717
    JNZ 0x004d6dbc                      ; 004d7719
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x5daac0                       ; 004d771f | = "imp-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d7724
    PUSH EBX                            ; 004d772a
    CALL dword ptr [EAX + 0x34]         ; 004d772b
    ADD ESP,0x8                         ; 004d772e
    PUSH 0x41a00000                     ; 004d7731
    PUSH 0x41200000                     ; 004d7736
    MOV dword ptr [EBX + 0x10af8],EAX   ; 004d773b
    CALL FUN_0040cf60                   ; 004d7741
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004d7746
    ADD ESP,0x8                         ; 004d7749
    MOV EAX,dword ptr [EBP + 0x76]      ; 004d774c
    MOV dword ptr [EBX + 0x10b00],EAX   ; 004d774f
    JMP 0x004d6dbc                      ; 004d7755
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x5daab2                       ; 004d775a | = "imp-jump?.wav"
        ;   Label: LAB_004d775a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d775f
    PUSH EBX                            ; 004d7765
    CALL dword ptr [EAX + 0x34]         ; 004d7766
    ADD ESP,0x8                         ; 004d7769
    MOV dword ptr [EBX + 0x10af8],EAX   ; 004d776c
    JMP 0x004d75f1                      ; 004d7772
        ;   XREF to: 004d75f1 (UNCONDITIONAL_JUMP)  ; LAB_004d75f1
    FLD float ptr [EBP + 0x92]          ; 004d7777
        ;   Label: caseD_3
    FMUL float ptr [0x005daae9]         ; 004d777d | DAT_005daae9
    FSUBR float ptr [EBX + 0x10b00]     ; 004d7783
    FST float ptr [EBX + 0x10b00]       ; 004d7789
    FLDZ                                ; 004d778f
    FCOMPP                              ; 004d7791
    FNSTSW AX                           ; 004d7793
    SAHF                                ; 004d7795
    JBE 0x004d6dbc                      ; 004d7796
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    MOV ECX,dword ptr [EBX + 0x10af8]   ; 004d779c
    PUSH ECX                            ; 004d77a2
    MOV dword ptr [EBX + 0x10b00],0x0   ; 004d77a3
    CALL FUN_00550b70                   ; 004d77ad
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 004d77b2
    TEST EAX,EAX                        ; 004d77b5
    JNZ 0x004d6dbc                      ; 004d77b7
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    MOV ESI,dword ptr [EBX + 0x10afc]   ; 004d77bd
    PUSH ESI                            ; 004d77c3
    CALL FUN_00550b70                   ; 004d77c4
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 004d77c9
    TEST EAX,EAX                        ; 004d77cc
    JNZ 0x004d6dbc                      ; 004d77ce
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x5daacf                       ; 004d77d4 | = "imp-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d77d9
    PUSH EBX                            ; 004d77df
    CALL dword ptr [EAX + 0x34]         ; 004d77e0
    ADD ESP,0x8                         ; 004d77e3
    PUSH 0x41a00000                     ; 004d77e6
    PUSH 0x41200000                     ; 004d77eb
    MOV dword ptr [EBX + 0x10af8],EAX   ; 004d77f0
    CALL FUN_0040cf60                   ; 004d77f6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004d77fb
    ADD ESP,0x8                         ; 004d77fe
    MOV EAX,dword ptr [EBP + 0x76]      ; 004d7801
    MOV dword ptr [EBX + 0x10b00],EAX   ; 004d7804
    JMP 0x004d6dbc                      ; 004d780a
        ;   XREF to: 004d6dbc (UNCONDITIONAL_JUMP)  ; caseD_8
    CMP ESI,0x9                         ; 004d780f
        ;   Label: LAB_004d780f
    JA 0x004d6dbc                       ; 004d7812
        ;   XREF to: 004d6dbc (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [ESI*0x4 + 0x4d6958]  ; 004d7818 | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD

